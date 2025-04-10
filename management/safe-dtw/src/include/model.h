#include <stdbool.h>

int model(int rel_time, int hops, int size, int prod, int cons)
{
	int w0;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w0 = -3686;
			} else {
				w0 = -1536;
			}
		} else {
			if (hops < 4) {
				w0 = 614;
			} else {
				w0 = 2764;
			}
		}
	} else {
		if (prod == 0) {
			w0 = 190776;
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w0 = 162557;
				} else {
					w0 = 164732;
				}
			} else {
				w0 = 167304;
			}
		}
	}
	int w1;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w1 = -2580;
			} else {
				w1 = -1075;
			}
		} else {
			if (hops < 4) {
				w1 = 430;
			} else {
				w1 = 1935;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 3) {
				w1 = 132311;
			} else {
				w1 = 135966;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w1 = 113792;
				} else {
					w1 = 115315;
				}
			} else {
				w1 = 117115;
			}
		}
	}
	int w2;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w2 = -1806;
			} else {
				w2 = -753;
			}
		} else {
			if (hops < 4) {
				w2 = 301;
			} else {
				w2 = 1355;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 2) {
				w2 = 91540;
			} else {
				w2 = 94459;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w2 = 79657;
				} else {
					w2 = 80722;
				}
			} else {
				if (hops < 4) {
					w2 = 81559;
				} else {
					w2 = 83683;
				}
			}
		}
	}
	int w3;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w3 = -1264;
			} else {
				w3 = -527;
			}
		} else {
			if (hops < 4) {
				w3 = 211;
			} else {
				w3 = 948;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 3) {
				w3 = 64730;
			} else {
				w3 = 66858;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w3 = 55761;
				} else {
					w3 = 56507;
				}
			} else {
				if (hops < 4) {
					w3 = 57093;
				} else {
					w3 = 58585;
				}
			}
		}
	}
	int w4;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w4 = -885;
			} else {
				w4 = -369;
			}
		} else {
			if (hops < 4) {
				w4 = 148;
			} else {
				w4 = 664;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 2) {
				w4 = 44672;
			} else {
				if (hops < 4) {
					w4 = 46159;
				} else {
					w4 = 48385;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w4 = 39033;
				} else {
					w4 = 39556;
				}
			} else {
				if (hops < 4) {
					w4 = 39966;
				} else {
					w4 = 41014;
				}
			}
		}
	}
	int w5;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w5 = -620;
			} else {
				w5 = -258;
			}
		} else {
			if (hops < 4) {
				w5 = 103;
			} else {
				w5 = 465;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 2) {
				w5 = 31274;
			} else {
				if (hops < 4) {
					w5 = 32314;
				} else {
					w5 = 33889;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w5 = 27324;
				} else {
					w5 = 27690;
				}
			} else {
				if (hops < 4) {
					w5 = 27977;
				} else {
					w5 = 28713;
				}
			}
		}
	}
	int w6;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w6 = -434;
			} else {
				w6 = -181;
			}
		} else {
			if (hops < 4) {
				w6 = 72;
			} else {
				w6 = 325;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 3) {
				w6 = 22156;
			} else {
				w6 = 23046;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w6 = 19127;
				} else {
					w6 = 19383;
				}
			} else {
				if (hops < 4) {
					w6 = 19585;
				} else {
					w6 = 20102;
				}
			}
		}
	}
	int w7;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w7 = -304;
			} else {
				w7 = -127;
			}
		} else {
			if (hops < 4) {
				w7 = 51;
			} else {
				w7 = 228;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 2) {
				w7 = 15250;
			} else {
				if (hops < 4) {
					w7 = 15856;
				} else {
					w7 = 16833;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w7 = 13389;
				} else {
					w7 = 13569;
				}
			} else {
				if (hops < 4) {
					w7 = 13710;
				} else {
					w7 = 14073;
				}
			}
		}
	}
	int w8;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w8 = -213;
			} else {
				w8 = -89;
			}
		} else {
			if (hops < 4) {
				w8 = 35;
			} else {
				w8 = 159;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 2) {
				w8 = 10676;
			} else {
				if (hops < 4) {
					w8 = 11100;
				} else {
					w8 = 11790;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w8 = 9373;
				} else {
					w8 = 9498;
				}
			} else {
				if (hops < 4) {
					w8 = 9597;
				} else {
					w8 = 9852;
				}
			}
		}
	}
	int w9;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w9 = -149;
			} else {
				w9 = -62;
			}
		} else {
			if (hops < 4) {
				w9 = 25;
			} else {
				w9 = 112;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 3) {
				if (rel_time < 61) {
					w9 = 7783;
				} else {
					w9 = 7512;
				}
			} else {
				if (hops < 4) {
					w9 = 7872;
				} else {
					w9 = 8258;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w9 = 6561;
				} else {
					w9 = 6649;
				}
			} else {
				if (hops < 4) {
					w9 = 6718;
				} else {
					w9 = 6897;
				}
			}
		}
	}
	int w10;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w10 = -104;
			} else {
				w10 = -43;
			}
		} else {
			if (hops < 4) {
				w10 = 17;
			} else {
				w10 = 78;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 2) {
				w10 = 5200;
			} else {
				if (rel_time < 61) {
					w10 = 5705;
				} else {
					w10 = 5420;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w10 = 4593;
				} else {
					w10 = 4654;
				}
			} else {
				if (rel_time < 183) {
					w10 = 4884;
				} else {
					w10 = 4710;
				}
			}
		}
	}
	int w11;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w11 = -73;
			} else {
				w11 = -30;
			}
		} else {
			if (hops < 4) {
				w11 = 12;
			} else {
				w11 = 55;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 3) {
				if (rel_time < 61) {
					w11 = 3818;
				} else {
					w11 = 3665;
				}
			} else {
				if (rel_time < 61) {
					w11 = 4107;
				} else {
					w11 = 3855;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15154) {
					w11 = 3253;
				} else {
					w11 = 2972;
				}
			} else {
				w11 = 3411;
			}
		}
	}
	int w12;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w12 = -51;
			} else {
				w12 = -21;
			}
		} else {
			if (hops < 4) {
				w12 = 9;
			} else {
				w12 = 38;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 4) {
				if (hops < 2) {
					w12 = 2529;
				} else {
					w12 = 2672;
				}
			} else {
				w12 = 2965;
			}
		} else {
			if (hops < 2) {
				if (rel_time < 183) {
					w12 = 2117;
				} else {
					w12 = 2253;
				}
			} else {
				if (rel_time < 122) {
					w12 = 2505;
				} else {
					w12 = 2294;
				}
			}
		}
	}
	int w13;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w13 = -36;
			} else {
				w13 = -15;
			}
		} else {
			if (hops < 4) {
				w13 = 6;
			} else {
				w13 = 27;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 4) {
				if (rel_time < 61) {
					w13 = 1933;
				} else {
					w13 = 1802;
				}
			} else {
				w13 = 2077;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15154) {
					w13 = 1593;
				} else {
					w13 = 1400;
				}
			} else {
				if (rel_time < 122) {
					w13 = 1541;
				} else {
					w13 = 1705;
				}
			}
		}
	}
	int w14;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w14 = -25;
			} else {
				w14 = -10;
			}
		} else {
			if (hops < 4) {
				w14 = 4;
			} else {
				w14 = 19;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 2) {
				if (rel_time < 61) {
					w14 = 1286;
				} else {
					w14 = 1197;
				}
			} else {
				if (rel_time < 61) {
					w14 = 1411;
				} else {
					w14 = 1308;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 15154) {
					w14 = 1104;
				} else {
					w14 = 968;
				}
			} else {
				if (rel_time < 183) {
					w14 = 1237;
				} else {
					w14 = 1141;
				}
			}
		}
	}
	int w15;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w15 = -18;
			} else {
				w15 = -7;
			}
		} else {
			if (hops < 4) {
				w15 = 3;
			} else {
				w15 = 13;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 4) {
				if (hops < 2) {
					w15 = 854;
				} else {
					w15 = 920;
				}
			} else {
				if (rel_time < 61) {
					w15 = 1142;
				} else {
					w15 = 1023;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 183) {
					w15 = 674;
				} else {
					w15 = 769;
				}
			} else {
				if (rel_time < 122) {
					w15 = 927;
				} else {
					w15 = 788;
				}
			}
		}
	}
	int w16;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w16 = -12;
			} else {
				w16 = -5;
			}
		} else {
			if (hops < 4) {
				w16 = 2;
			} else {
				w16 = 9;
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 3) {
				if (rel_time < 61) {
					w16 = 646;
				} else {
					w16 = 603;
				}
			} else {
				if (rel_time < 61) {
					w16 = 759;
				} else {
					w16 = 649;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 122) {
					w16 = 592;
				} else {
					w16 = 542;
				}
			} else {
				if (rel_time < 122) {
					w16 = 435;
				} else {
					w16 = 614;
				}
			}
		}
	}
	return (51200 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16) >> 10;
}
