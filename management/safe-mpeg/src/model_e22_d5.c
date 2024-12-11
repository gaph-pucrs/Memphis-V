#include <stdbool.h>

int model(int rel_timestamp, int hops, int size, bool prod_0, bool prod_1, bool prod_2, bool prod_4, bool cons_0, bool cons_1, bool cons_2, bool cons_3)
{
	int w0;
	if (size < 141) {
		if (rel_timestamp < 124240) {
			if (prod_1) {
				w0 = 43695;
			} else {
				w0 = 36099;
			}
		} else {
			w0 = 37072;
		}
	} else {
		if (rel_timestamp < 60935) {
			w0 = 48365;
		} else {
			w0 = 42853;
		}
	}
	int w1;
	if (size < 141) {
		if (rel_timestamp < 124240) {
			if (prod_1) {
				w1 = 30659;
			} else {
				w1 = 25388;
			}
		} else {
			if (hops < 3) {
				w1 = 25687;
			} else {
				w1 = 26751;
			}
		}
	} else {
		if (rel_timestamp < 60935) {
			w1 = 34015;
		} else {
			w1 = 30005;
		}
	}
	int w2;
	if (size < 141) {
		if (rel_timestamp < 124240) {
			if (prod_1) {
				w2 = 21512;
			} else {
				w2 = 17855;
			}
		} else {
			if (prod_0) {
				if (hops < 2) {
					w2 = 17492;
				} else {
					w2 = 18147;
				}
			} else {
				w2 = 18783;
			}
		}
	} else {
		if (rel_timestamp < 60935) {
			w2 = 23922;
		} else {
			w2 = 21009;
		}
	}
	int w3;
	if (size < 141) {
		if (rel_timestamp < 124240) {
			if (prod_1) {
				w3 = 15094;
			} else {
				w3 = 12558;
			}
		} else {
			if (prod_0) {
				if (hops < 2) {
					w3 = 12248;
				} else {
					w3 = 12706;
				}
			} else {
				if (hops < 2) {
					w3 = 12734;
				} else {
					w3 = 13487;
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_timestamp < 60935) {
				w3 = 16415;
			} else {
				w3 = 14371;
			}
		} else {
			w3 = 15511;
		}
	}
	int w4;
	if (size < 141) {
		if (rel_timestamp < 124240) {
			if (prod_1) {
				w4 = 10591;
			} else {
				w4 = 8832;
			}
		} else {
			if (hops < 3) {
				if (prod_0) {
					w4 = 8649;
				} else {
					w4 = 9041;
				}
			} else {
				w4 = 9316;
			}
		}
	} else {
		if (hops < 2) {
			w4 = 9925;
		} else {
			if (rel_timestamp < 60935) {
				w4 = 12393;
			} else {
				w4 = 10611;
			}
		}
	}
	int w5;
	if (size < 141) {
		if (hops < 4) {
			if (rel_timestamp < 124240) {
				if (prod_1) {
					w5 = 7344;
				} else {
					w5 = 6153;
				}
			} else {
				if (prod_0) {
					w5 = 6085;
				} else {
					if (hops < 2) {
						w5 = 6210;
					} else {
						w5 = 6591;
					}
				}
			}
		} else {
			w5 = 6990;
		}
	} else {
		if (rel_timestamp < 60935) {
			w5 = 8673;
		} else {
			if (hops < 2) {
				w5 = 6866;
			} else {
				if (hops < 4) {
					w5 = 7313;
				} else {
					w5 = 7945;
				}
			}
		}
	}
	int w6;
	if (size < 141) {
		if (hops < 3) {
			if (prod_0) {
				if (rel_timestamp < 60949) {
					w6 = 4948;
				} else {
					if (hops < 2) {
						w6 = 4155;
					} else {
						w6 = 4331;
					}
				}
			} else {
				w6 = 4455;
			}
		} else {
			if (rel_timestamp < 124240) {
				w6 = 5715;
			} else {
				if (prod_0) {
					w6 = 4438;
				} else {
					w6 = 4810;
				}
			}
		}
	} else {
		if (rel_timestamp < 60935) {
			w6 = 6100;
		} else {
			if (hops < 3) {
				w6 = 4902;
			} else {
				w6 = 5325;
			}
		}
	}
	int w7;
	if (size < 141) {
		if (hops < 4) {
			if (rel_timestamp < 124240) {
				if (prod_1) {
					if (hops < 2) {
						w7 = 3341;
					} else {
						w7 = 3959;
					}
				} else {
					w7 = 3008;
				}
			} else {
				if (hops < 2) {
					w7 = 2948;
				} else {
					if (prod_0) {
						w7 = 3040;
					} else {
						w7 = 3235;
					}
				}
			}
		} else {
			if (prod_0) {
				w7 = 3308;
			} else {
				w7 = 3700;
			}
		}
	} else {
		if (rel_timestamp < 60935) {
			w7 = 4290;
		} else {
			if (hops < 2) {
				w7 = 3340;
			} else {
				if (hops < 4) {
					w7 = 3594;
				} else {
					w7 = 3987;
				}
			}
		}
	}
	int w8;
	if (size < 141) {
		if (rel_timestamp < 124240) {
			if (hops < 2) {
				if (prod_1) {
					w8 = 2351;
				} else {
					w8 = 1835;
				}
			} else {
				if (prod_1) {
					w8 = 2901;
				} else {
					w8 = 2364;
				}
			}
		} else {
			if (hops < 4) {
				if (prod_0) {
					if (hops < 2) {
						w8 = 2029;
					} else {
						w8 = 2128;
					}
				} else {
					if (hops < 2) {
						w8 = 2131;
					} else {
						w8 = 2265;
					}
				}
			} else {
				if (prod_0) {
					w8 = 2270;
				} else {
					w8 = 2544;
				}
			}
		}
	} else {
		if (rel_timestamp < 60935) {
			if (hops < 3) {
				w8 = 2739;
			} else {
				w8 = 3491;
			}
		} else {
			if (hops < 2) {
				w8 = 2340;
			} else {
				if (hops < 4) {
					w8 = 2517;
				} else {
					w8 = 2798;
				}
			}
		}
	}
	int w9;
	if (size < 141) {
		if (hops < 4) {
			if (rel_timestamp < 124240) {
				if (hops < 2) {
					if (prod_1) {
						w9 = 1655;
					} else {
						w9 = 1297;
					}
				} else {
					w9 = 1844;
				}
			} else {
				if (prod_0) {
					if (hops < 2) {
						w9 = 1421;
					} else {
						w9 = 1490;
					}
				} else {
					if (hops < 2) {
						w9 = 1492;
					} else {
						w9 = 1587;
					}
				}
			}
		} else {
			if (rel_timestamp < 124240) {
				w9 = 2469;
			} else {
				if (prod_0) {
					w9 = 1593;
				} else {
					w9 = 1786;
				}
			}
		}
	} else {
		if (rel_timestamp < 60935) {
			if (hops < 3) {
				w9 = 1931;
			} else {
				w9 = 2479;
			}
		} else {
			if (hops < 2) {
				w9 = 1639;
			} else {
				if (hops < 4) {
					w9 = 1763;
				} else {
					w9 = 1963;
				}
			}
		}
	}
	int w10;
	if (size < 141) {
		if (hops < 3) {
			if (prod_0) {
				if (rel_timestamp < 60949) {
					w10 = 1146;
				} else {
					if (hops < 2) {
						w10 = 993;
					} else {
						w10 = 1033;
					}
				}
			} else {
				if (rel_timestamp < 124240) {
					w10 = 1263;
				} else {
					w10 = 1067;
				}
			}
		} else {
			if (rel_timestamp < 124240) {
				if (prod_1) {
					w10 = 1651;
				} else {
					w10 = 1139;
				}
			} else {
				if (hops < 4) {
					w10 = 1086;
				} else {
					if (prod_0) {
						w10 = 1118;
					} else {
						w10 = 1253;
					}
				}
			}
		}
	} else {
		if (rel_timestamp < 60935) {
			if (hops < 3) {
				w10 = 1361;
			} else {
				w10 = 1760;
			}
		} else {
			if (hops < 2) {
				w10 = 1148;
			} else {
				if (hops < 4) {
					w10 = 1235;
				} else {
					w10 = 1378;
				}
			}
		}
	}
	int w11;
	if (size < 141) {
		if (hops < 4) {
			if (rel_timestamp < 124240) {
				if (prod_1) {
					if (rel_timestamp < 60935) {
						w11 = 691;
					} else {
						w11 = 926;
					}
				} else {
					if (hops < 2) {
						w11 = 626;
					} else {
						w11 = 791;
					}
				}
			} else {
				if (prod_2) {
					if (hops < 3) {
						w11 = 736;
					} else {
						w11 = 786;
					}
				} else {
					if (hops < 2) {
						w11 = 656;
					} else {
						w11 = 724;
					}
				}
			}
		} else {
			if (rel_timestamp < 124240) {
				if (prod_1) {
					w11 = 1467;
				} else {
					w11 = 700;
				}
			} else {
				if (prod_0) {
					w11 = 785;
				} else {
					w11 = 880;
				}
			}
		}
	} else {
		if (rel_timestamp < 60935) {
			if (hops < 4) {
				w11 = 1003;
			} else {
				w11 = 1474;
			}
		} else {
			if (hops < 3) {
				w11 = 822;
			} else {
				if (hops < 4) {
					w11 = 879;
				} else {
					w11 = 967;
				}
			}
		}
	}
	int w12;
	if (size < 141) {
		if (rel_timestamp < 124240) {
			if (hops < 3) {
				if (prod_1) {
					w12 = 592;
				} else {
					w12 = 487;
				}
			} else {
				if (hops < 4) {
					w12 = 717;
				} else {
					if (prod_1) {
						w12 = 1059;
					} else {
						w12 = 532;
					}
				}
			}
		} else {
			if (prod_0) {
				if (hops < 3) {
					if (prod_1) {
						w12 = 482;
					} else {
						w12 = 504;
					}
				} else {
					w12 = 524;
				}
			} else {
				if (hops < 2) {
					w12 = 505;
				} else {
					if (hops < 4) {
						w12 = 562;
					} else {
						w12 = 618;
					}
				}
			}
		}
	} else {
		if (rel_timestamp < 60935) {
			if (hops < 3) {
				if (hops < 2) {
					w12 = 724;
				} else {
					w12 = 537;
				}
			} else {
				w12 = 916;
			}
		} else {
			if (hops < 2) {
				w12 = 558;
			} else {
				if (hops < 4) {
					w12 = 611;
				} else {
					w12 = 679;
				}
			}
		}
	}
	int w13;
	if (size < 141) {
		if (hops < 2) {
			if (prod_2) {
				if (rel_timestamp < 67105) {
					w13 = 214;
				} else {
					w13 = 359;
				}
			} else {
				w13 = 317;
			}
		} else {
			if (rel_timestamp < 124240) {
				if (hops < 4) {
					if (prod_1) {
						w13 = 501;
					} else {
						w13 = 396;
					}
				} else {
					if (prod_1) {
						w13 = 764;
					} else {
						w13 = 404;
					}
				}
			} else {
				if (prod_0) {
					if (hops < 4) {
						w13 = 356;
					} else {
						w13 = 394;
					}
				} else {
					if (hops < 4) {
						w13 = 394;
					} else {
						w13 = 434;
					}
				}
			}
		}
	} else {
		if (rel_timestamp < 60935) {
			if (hops < 4) {
				w13 = 493;
			} else {
				w13 = 829;
			}
		} else {
			if (hops < 2) {
				w13 = 391;
			} else {
				if (hops < 4) {
					w13 = 428;
				} else {
					w13 = 476;
				}
			}
		}
	}
	int w14;
	if (size < 141) {
		if (rel_timestamp < 124240) {
			if (hops < 3) {
				if (rel_timestamp < 74288) {
					if (hops < 2) {
						w14 = 231;
					} else {
						w14 = 283;
					}
				} else {
					w14 = 324;
				}
			} else {
				if (prod_1) {
					if (hops < 4) {
						w14 = 394;
					} else {
						w14 = 551;
					}
				} else {
					w14 = 295;
				}
			}
		} else {
			if (hops < 2) {
				if (prod_2) {
					if (rel_timestamp < 193688) {
						w14 = 225;
					} else {
						w14 = 252;
					}
				} else {
					w14 = 220;
				}
			} else {
				if (prod_0) {
					if (hops < 4) {
						w14 = 249;
					} else {
						w14 = 277;
					}
				} else {
					if (hops < 4) {
						w14 = 276;
					} else {
						w14 = 304;
					}
				}
			}
		}
	} else {
		if (rel_timestamp < 62565) {
			if (hops < 4) {
				w14 = 343;
			} else {
				w14 = 605;
			}
		} else {
			if (hops < 2) {
				w14 = 270;
			} else {
				if (rel_timestamp < 1143455) {
					if (hops < 4) {
						w14 = 296;
					} else {
						w14 = 331;
					}
				} else {
					w14 = 362;
				}
			}
		}
	}
	int w15;
	if (size < 141) {
		if (rel_timestamp < 124240) {
			if (hops < 3) {
				if (prod_1) {
					if (rel_timestamp < 60942) {
						w15 = 174;
					} else {
						w15 = 236;
					}
				} else {
					if (hops < 2) {
						w15 = 134;
					} else {
						w15 = 194;
					}
				}
			} else {
				if (hops < 4) {
					if (prod_1) {
						w15 = 279;
					} else {
						w15 = 187;
					}
				} else {
					w15 = 375;
				}
			}
		} else {
			if (hops < 2) {
				if (prod_2) {
					if (rel_timestamp < 1150498) {
						w15 = 178;
					} else {
						w15 = 159;
					}
				} else {
					w15 = 154;
				}
			} else {
				if (prod_0) {
					if (hops < 4) {
						w15 = 175;
					} else {
						w15 = 194;
					}
				} else {
					if (hops < 4) {
						w15 = 193;
					} else {
						w15 = 214;
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_timestamp < 62565) {
				if (hops < 2) {
					if (rel_timestamp < 62553) {
						w15 = 232;
					} else {
						w15 = 300;
					}
				} else {
					w15 = 142;
				}
			} else {
				if (rel_timestamp < 1202601) {
					w15 = 194;
				} else {
					w15 = 255;
				}
			}
		} else {
			if (rel_timestamp < 60935) {
				if (hops < 4) {
					w15 = 296;
				} else {
					w15 = 442;
				}
			} else {
				w15 = 222;
			}
		}
	}
	int w16;
	if (size < 141) {
		if (rel_timestamp < 124240) {
			if (hops < 3) {
				if (prod_1) {
					if (rel_timestamp < 60942) {
						w16 = 122;
					} else {
						w16 = 166;
					}
				} else {
					if (hops < 2) {
						w16 = 95;
					} else {
						w16 = 137;
					}
				}
			} else {
				if (hops < 4) {
					if (prod_1) {
						w16 = 197;
					} else {
						w16 = 135;
					}
				} else {
					if (rel_timestamp < 62553) {
						w16 = 355;
					} else {
						w16 = 208;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (prod_2) {
					if (rel_timestamp < 130312) {
						w16 = 66;
					} else {
						w16 = 123;
					}
				} else {
					if (rel_timestamp < 124268) {
						w16 = 81;
					} else {
						w16 = 109;
					}
				}
			} else {
				if (prod_0) {
					if (hops < 4) {
						w16 = 122;
					} else {
						w16 = 136;
					}
				} else {
					if (hops < 4) {
						w16 = 135;
					} else {
						w16 = 150;
					}
				}
			}
		}
	} else {
		if (rel_timestamp < 60935) {
			if (hops < 4) {
				if (hops < 2) {
					w16 = 200;
				} else {
					if (hops < 3) {
						w16 = 101;
					} else {
						w16 = 211;
					}
				}
			} else {
				w16 = 322;
			}
		} else {
			if (hops < 2) {
				if (rel_timestamp < 125898) {
					if (rel_timestamp < 62553) {
						w16 = 90;
					} else {
						w16 = 179;
					}
				} else {
					w16 = 129;
				}
			} else {
				if (rel_timestamp < 1143455) {
					if (hops < 4) {
						w16 = 145;
					} else {
						w16 = 166;
					}
				} else {
					w16 = 186;
				}
			}
		}
	}
	int w17;
	if (rel_timestamp < 124240) {
		if (hops < 3) {
			if (prod_1) {
				w17 = 108;
			} else {
				if (hops < 2) {
					if (rel_timestamp < 67105) {
						w17 = 37;
					} else {
						w17 = 72;
					}
				} else {
					w17 = 97;
				}
			}
		} else {
			if (hops < 4) {
				if (prod_1) {
					if (rel_timestamp < 62581) {
						w17 = 129;
					} else {
						w17 = 183;
					}
				} else {
					if (rel_timestamp < 67124) {
						w17 = 41;
					} else {
						w17 = 116;
					}
				}
			} else {
				if (rel_timestamp < 62553) {
					w17 = 263;
				} else {
					w17 = 139;
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 4) {
				if (hops < 2) {
					if (prod_1) {
						w17 = 79;
					} else {
						w17 = 90;
					}
				} else {
					if (prod_0) {
						w17 = 86;
					} else {
						w17 = 95;
					}
				}
			} else {
				if (rel_timestamp < 1150740) {
					if (rel_timestamp < 1010963) {
						w17 = 102;
					} else {
						w17 = 78;
					}
				} else {
					w17 = 115;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_timestamp < 125872) {
					w17 = 70;
				} else {
					if (rel_timestamp < 125898) {
						w17 = 142;
					} else {
						w17 = 91;
					}
				}
			} else {
				if (rel_timestamp < 1143455) {
					if (rel_timestamp < 125898) {
						w17 = 49;
					} else {
						w17 = 104;
					}
				} else {
					w17 = 131;
				}
			}
		}
	}
	int w18;
	if (rel_timestamp < 124240) {
		if (hops < 3) {
			if (prod_1) {
				if (rel_timestamp < 62553) {
					if (rel_timestamp < 60949) {
						w18 = 77;
					} else {
						w18 = 33;
					}
				} else {
					if (rel_timestamp < 62565) {
						w18 = 133;
					} else {
						w18 = 71;
					}
				}
			} else {
				if (rel_timestamp < 67112) {
					if (rel_timestamp < 67105) {
						w18 = 27;
					} else {
						w18 = 47;
					}
				} else {
					if (hops < 2) {
						w18 = 58;
					} else {
						w18 = 83;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (prod_1) {
					if (rel_timestamp < 62581) {
						w18 = 91;
					} else {
						w18 = 130;
					}
				} else {
					if (rel_timestamp < 67124) {
						w18 = 31;
					} else {
						w18 = 84;
					}
				}
			} else {
				if (rel_timestamp < 62553) {
					w18 = 190;
				} else {
					if (rel_timestamp < 74288) {
						w18 = 74;
					} else {
						w18 = 127;
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 4) {
				if (rel_timestamp < 1214089) {
					if (rel_timestamp < 1202345) {
						w18 = 60;
					} else {
						w18 = 29;
					}
				} else {
					if (rel_timestamp < 1264584) {
						w18 = 79;
					} else {
						w18 = 65;
					}
				}
			} else {
				if (prod_0) {
					if (rel_timestamp < 130340) {
						w18 = 91;
					} else {
						w18 = 64;
					}
				} else {
					if (rel_timestamp < 187560) {
						w18 = 23;
					} else {
						w18 = 78;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_timestamp < 125898) {
						w18 = 75;
					} else {
						w18 = 63;
					}
				} else {
					if (rel_timestamp < 125898) {
						w18 = 36;
					} else {
						w18 = 71;
					}
				}
			} else {
				if (rel_timestamp < 256958) {
					w18 = 69;
				} else {
					w18 = 91;
				}
			}
		}
	}
	int w19;
	if (rel_timestamp < 124240) {
		if (hops < 3) {
			if (prod_1) {
				if (prod_2) {
					if (hops < 2) {
						w19 = 61;
					} else {
						w19 = 47;
					}
				} else {
					if (rel_timestamp < 60942) {
						w19 = 32;
					} else {
						w19 = 101;
					}
				}
			} else {
				if (rel_timestamp < 67112) {
					if (hops < 2) {
						w19 = 26;
					} else {
						w19 = 38;
					}
				} else {
					if (hops < 2) {
						w19 = 42;
					} else {
						w19 = 60;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (size < 141) {
					if (rel_timestamp < 60949) {
						w19 = 27;
					} else {
						w19 = 73;
					}
				} else {
					if (rel_timestamp < 62581) {
						w19 = 67;
					} else {
						w19 = 140;
					}
				}
			} else {
				if (rel_timestamp < 62553) {
					w19 = 137;
				} else {
					if (rel_timestamp < 74288) {
						w19 = 54;
					} else {
						w19 = 93;
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 2) {
				if (prod_1) {
					if (rel_timestamp < 1202345) {
						w19 = 36;
					} else {
						w19 = 52;
					}
				} else {
					if (rel_timestamp < 1150498) {
						w19 = 49;
					} else {
						w19 = 13;
					}
				}
			} else {
				if (prod_0) {
					if (rel_timestamp < 504368) {
						w19 = 37;
					} else {
						w19 = 45;
					}
				} else {
					if (hops < 3) {
						w19 = 51;
					} else {
						w19 = 47;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_timestamp < 1143455) {
					if (rel_timestamp < 252629) {
						w19 = 54;
					} else {
						w19 = 45;
					}
				} else {
					w19 = 60;
				}
			} else {
				if (rel_timestamp < 1143455) {
					if (rel_timestamp < 130312) {
						w19 = 40;
					} else {
						w19 = 60;
					}
				} else {
					w19 = 90;
				}
			}
		}
	}
	int w20;
	if (rel_timestamp < 62565) {
		if (hops < 4) {
			if (rel_timestamp < 62553) {
				if (hops < 3) {
					if (hops < 2) {
						w20 = 43;
					} else {
						w20 = 18;
					}
				} else {
					if (rel_timestamp < 60949) {
						w20 = 50;
					} else {
						w20 = 111;
					}
				}
			} else {
				w20 = 78;
			}
		} else {
			w20 = 98;
		}
	} else {
		if (hops < 2) {
			if (prod_2) {
				if (rel_timestamp < 193688) {
					if (size < 141) {
						w20 = 17;
					} else {
						w20 = 32;
					}
				} else {
					if (rel_timestamp < 1144196) {
						w20 = 32;
					} else {
						w20 = 25;
					}
				}
			} else {
				if (rel_timestamp < 504186) {
					if (rel_timestamp < 504175) {
						w20 = 27;
					} else {
						w20 = 113;
					}
				} else {
					if (rel_timestamp < 504368) {
						w20 = -6;
					} else {
						w20 = 21;
					}
				}
			}
		} else {
			if (prod_1) {
				if (hops < 3) {
					if (rel_timestamp < 1264317) {
						w20 = 38;
					} else {
						w20 = 62;
					}
				} else {
					if (prod_2) {
						w20 = 36;
					} else {
						w20 = 19;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_timestamp < 130328) {
						w20 = 40;
					} else {
						w20 = 14;
					}
				} else {
					if (hops < 4) {
						w20 = 57;
					} else {
						w20 = 32;
					}
				}
			}
		}
	}
	int w21;
	if (hops < 4) {
		if (rel_timestamp < 124240) {
			if (hops < 3) {
				if (rel_timestamp < 74288) {
					if (hops < 2) {
						w21 = 30;
					} else {
						w21 = 15;
					}
				} else {
					if (hops < 2) {
						w21 = 14;
					} else {
						w21 = 62;
					}
				}
			} else {
				if (size < 141) {
					if (rel_timestamp < 60949) {
						w21 = 6;
					} else {
						w21 = 36;
					}
				} else {
					if (rel_timestamp < 62581) {
						w21 = 35;
					} else {
						w21 = 93;
					}
				}
			}
		} else {
			if (rel_timestamp < 124268) {
				if (hops < 2) {
					if (rel_timestamp < 124252) {
						w21 = 11;
					} else {
						w21 = -11;
					}
				} else {
					if (rel_timestamp < 124252) {
						w21 = -5;
					} else {
						w21 = 35;
					}
				}
			} else {
				if (rel_timestamp < 124290) {
					if (hops < 3) {
						w21 = 57;
					} else {
						w21 = 16;
					}
				} else {
					if (rel_timestamp < 125872) {
						w21 = -5;
					} else {
						w21 = 21;
					}
				}
			}
		}
	} else {
		if (rel_timestamp < 124268) {
			if (prod_2) {
				if (rel_timestamp < 74288) {
					if (rel_timestamp < 60935) {
						w21 = 50;
					} else {
						w21 = 29;
					}
				} else {
					w21 = 59;
				}
			} else {
				w21 = 85;
			}
		} else {
			if (rel_timestamp < 1150740) {
				if (rel_timestamp < 1143724) {
					if (prod_1) {
						w21 = 30;
					} else {
						w21 = 19;
					}
				} else {
					w21 = -12;
				}
			} else {
				if (rel_timestamp < 1207834) {
					if (prod_2) {
						w21 = 64;
					} else {
						w21 = 24;
					}
				} else {
					if (rel_timestamp < 1214089) {
						w21 = 8;
					} else {
						w21 = 32;
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21) >> 8;
}
