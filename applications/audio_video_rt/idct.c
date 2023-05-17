/*---------------------------------------------------------------------
TITLE: Program Scheduler
AUTHOR: Nicolas Saint-jean
EMAIL : saintjea@lirmm.fr
DATE CREATED: 04/04/06
FILENAME: task3.c
PROJECT: Network Process Unit
COPYRIGHT: Software placed into the public domain by the author.
					 Software 'as is' without warranty.  Author liable for nothing.
DESCRIPTION: This file contains the task3
---------------------------------------------------------------------*/


// **********************************************************************************************************
// *                                 IDCT.C                                                                 *
// *                                                                                                        *
// * Inverse Discrete Cosine Transform for Mpeg and Jpeg decoding                                           *
// * Used to reassemble 8x8 image blocks in order to ease quantization compressing image information        *
// * fewer symbols negleting a large part of the pixels                                                     *
// *                                                                                                        *
// *                                                                                                        *
// *  Expected Result ->  short int block[64]=                                                              *
// *                       { 89, 109, 111, 109, 110, 117, 58, 50,                                           *
// *                        102, 114, 116, 113, 116,  60, 60, 53,                                           *
// *                        106, 118, 122, 117, 116,  59, 58, 53,                                           *
// *                        118, 120, 122, 120, 119,  61, 58, 58,                                           *
// *                        119, 120, 121, 122, 122,  54, 54, 55,                                           *
// *                        123, 118, 117, 122,  63,  55, 54, 58,                                           *
// *                        124, 118,  59,  66,  65,  55, 52, 60,                                           *
// *                         65,  59,  57,  63,  68,  53, 55, 61 }                                          *
// *                                                                                                        *
// *                                                                                                        *
// *  Exadecimal results: Block -> 0059006d 006f006d 006e0075 003a0032 00660072 00740071 0074003c 003c0035  *
// *                               006a0076 007a0075 0074003b 003a0035 00760078 007a0078 0077003d 003a003a  *
// *                               00770078 0079007a 007a0036 00360037 007b0076 0075007a 003f0037 0036003a  *
// *                               007c0076 003b0042 00410037 0034003c 0041003b 0039003f 00440035 0037003d  *
// *                                                                                                        *
// *  Number of clock cycles (with these inEcho) -> 4150 Cicli                                              *
// **********************************************************************************************************

#include <memphis.h>
#include <stdlib.h>
#include <stdio.h>
#include "audio_video_def.h"
typedef int type_DATA; //unsigned

// Cosine Transform Coefficients

#define W1 2841                 /* 2048*sqrt(2)*cos(1*pi/16) */
#define W2 2676                 /* 2048*sqrt(2)*cos(2*pi/16) */
#define W3 2408                 /* 2048*sqrt(2)*cos(3*pi/16) */
#define W5 1609                 /* 2048*sqrt(2)*cos(5*pi/16) */
#define W6 1108                 /* 2048*sqrt(2)*cos(6*pi/16) */
#define W7 565                  /* 2048*sqrt(2)*cos(7*pi/16) */


// * Image block to be un-transformed:

int out;

/* iclip table */
short int iclp[1024] = {
	-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,
	-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,
	-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,
	-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,
	-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,
	-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,
	-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,
	-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,-256,
	-256,-255,-254,-253,-252,-251,-250,-249,-248,-247,-246,-245,-244,-243,-242,-241,-240,-239,-238,-237,-236,-235,-234,-233,-232,-231,-230,-229,-228,-227,-226,-225,
	-224,-223,-222,-221,-220,-219,-218,-217,-216,-215,-214,-213,-212,-211,-210,-209,-208,-207,-206,-205,-204,-203,-202,-201,-200,-199,-198,-197,-196,-195,-194,-193,
	-192,-191,-190,-189,-188,-187,-186,-185,-184,-183,-182,-181,-180,-179,-178,-177,-176,-175,-174,-173,-172,-171,-170,-169,-168,-167,-166,-165,-164,-163,-162,-161,
	-160,-159,-158,-157,-156,-155,-154,-153,-152,-151,-150,-149,-148,-147,-146,-145,-144,-143,-142,-141,-140,-139,-138,-137,-136,-135,-134,-133,-132,-131,-130,-129,
	-128,-127,-126,-125,-124,-123,-122,-121,-120,-119,-118,-117,-116,-115,-114,-113,-112,-111,-110,-109,-108,-107,-106,-105,-104,-103,-102,-101,-100, -99, -98, -97,
	 -96, -95, -94, -93, -92, -91, -90, -89, -88, -87, -86, -85, -84, -83, -82, -81, -80, -79, -78, -77, -76, -75, -74, -73, -72, -71, -70, -69, -68, -67, -66, -65,
	 -64, -63, -62, -61, -60, -59, -58, -57, -56, -55, -54, -53, -52, -51, -50, -49, -48, -47, -46, -45, -44, -43, -42, -41, -40, -39, -38, -37, -36, -35, -34, -33,
	 -32, -31, -30, -29, -28, -27, -26, -25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10,  -9,  -8,  -7,  -6,  -5,  -4,  -3,  -2,  -1,
		 0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,  30,  31,
		32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,  60,  61,  62,  63,
		64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  79,  80,  81,  82,  83,  84,  85,  86,  87,  88,  89,  90,  91,  92,  93,  94,  95,
		96,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
	 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
	 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191,
	 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
	 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255,
	 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
};

// ****************************************************************************************************
// * IDCD Functions
// ****************************************************************************************************

static void idctrow (type_DATA *block, int offs)
{
	type_DATA x0, x1, x2, x3, x4, x5, x6, x7, x8; //int

	/* shortcut */
	if (!((x1 = block[4+offs]<<11) | (x2 = block[6+offs]) | (x3 = block[2+offs]) |
				(x4 = block[1+offs]) | (x5 = block[7+offs]) | (x6 = block[5+offs]) | (x7 = block[3+offs])))
	{
		block[0+offs]=block[1+offs]=block[2+offs]=block[3+offs]=block[4+offs]=
		block[5+offs]=block[6+offs]=block[7+offs]=block[0+offs]<<3;
		return;
	}

	x0 = (block[0+offs]<<11) + 128; /* for proper rounding in the fourth stage */

	/* first stage */
	x8 = W7*(x4+x5);
	x4 = x8 + (W1-W7)*x4;
	x5 = x8 - (W1+W7)*x5;
	x8 = W3*(x6+x7);
	x6 = x8 - (W3-W5)*x6;
	x7 = x8 - (W3+W5)*x7;

	/* second stage */
	x8 = x0 + x1;
	x0 -= x1;
	x1 = W6*(x3+x2);
	x2 = x1 - (W2+W6)*x2;
	x3 = x1 + (W2-W6)*x3;
	x1 = x4 + x6;
	x4 -= x6;
	x6 = x5 + x7;
	x5 -= x7;

	/* third stage */
	x7 = x8 + x3;
	x8 -= x3;
	x3 = x0 + x2;
	x0 -= x2;
	x2 = (181*(x4+x5)+128)>>8;
	x4 = (181*(x4-x5)+128)>>8;

	/* fourth stage */
	block[offs] = (x7+x1)>>8;
	block[1+offs] = (x3+x2)>>8;
	block[2+offs] = (x0+x4)>>8;
	block[3+offs] = (x8+x6)>>8;
	block[4+offs] = (x8-x6)>>8;
	block[5+offs] = (x0-x4)>>8;
	block[6+offs] = (x3-x2)>>8;
	block[7+offs] = (x7-x1)>>8;
}


static void idctcol(type_DATA *block, int offs, int lx)
{
	type_DATA x0, x1, x2, x3, x4, x5, x6, x7, x8; //int

	/* shortcut */
	if (!((x1 = (block[lx*4+offs]<<8)) | (x2 = block[lx*6+offs]) | (x3 = block[lx*2+offs]) |
				(x4 = block[lx*1+offs]) | (x5 = block[lx*7+offs]) | (x6 = block[lx*5+offs]) | (x7 = block[lx*3+offs])))
	{
		block[offs]=block[offs+lx]=block[offs+2*lx]=block[lx*3+offs]=block[lx*4+offs]=block[lx*5+offs]=
		block[lx*6+offs]=block[lx*7+offs]=iclp[((block[offs]+32)>>6)+512];
		return;
	}

	x0 = (block[offs]<<8) + 8192;

	/* first stage */
	x8 = W7*(x4+x5) + 4;
	x4 = (x8+(W1-W7)*x4)>>3;
	x5 = (x8-(W1+W7)*x5)>>3;
	x8 = W3*(x6+x7) + 4;
	x6 = (x8-(W3-W5)*x6)>>3;
	x7 = (x8-(W3+W5)*x7)>>3;

	/* second stage */
	x8 = x0 + x1;
	x0 -= x1;
	x1 = W6*(x3+x2) + 4;
	x2 = (x1-(W2+W6)*x2)>>3;
	x3 = (x1+(W2-W6)*x3)>>3;
	x1 = x4 + x6;
	x4 -= x6;
	x6 = x5 + x7;
	x5 -= x7;

	/* third stage */
	x7 = x8 + x3;
	x8 -= x3;
	x3 = x0 + x2;
	x0 -= x2;
	x2 = (181*(x4+x5)+128)>>8;
	x4 = (181*(x4-x5)+128)>>8;

	/* fourth stage */
	block[offs] = iclp[((x7+x1)>>14)+512];
	block[offs+lx] = iclp[((x3+x2)>>14)+512];
	block[offs+2*lx] = iclp[((x0+x4)>>14)+512];
	block[offs+3*lx] = iclp[((x8+x6)>>14)+512];
	block[offs+4*lx] = iclp[((x8-x6)>>14)+512];
	block[offs+5*lx] = iclp[((x0-x4)>>14)+512];
	block[offs+6*lx] = iclp[((x3-x2)>>14)+512];
	block[offs+7*lx] = iclp[((x7-x1)>>14)+512];
}


/* two-dimensional inverse discrete cosine transform */
void idct_(type_DATA *block,int lx)
{
	int i;

	for (i=0; i<8; i ++)
		idctrow(block,lx*i);

	for (i=0; i<8; i++)
		idctcol(block,i,lx);
}

int main()
{
	type_DATA block[64];

	puts("Task IDCT start");

	memphis_real_time(AUDIO_VIDEO_PERIOD, IDCT_deadline, IDCT_exe_time);

	for(int j = 0; j < FRAMES; j++){
		memphis_receive(block, sizeof(block), iquant);

		idct_(block, 8);  // 8x8 Blocks

		memphis_send(block, sizeof(block), join);
	}

	puts("End Task IDCT\n");

	return 0;
}
