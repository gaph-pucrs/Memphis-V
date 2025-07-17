#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int model(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w0 = 8601;
			} else {
				w0 = 9139;
			}
		} else {
			if (hops < 4) {
				w0 = 9676;
			} else {
				w0 = 10211;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w0 = 61377;
			} else {
				w0 = 71407;
			}
		} else {
			if (rel_time < 121) {
				w0 = 52898;
			} else {
				if (cons != 3) {
					if (cons != 1) {
						w0 = 59862;
					} else {
						w0 = 58428;
					}
				} else {
					w0 = 58365;
				}
			}
		}
	}
	int w1;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w1 = 6021;
			} else {
				w1 = 6397;
			}
		} else {
			if (hops < 4) {
				w1 = 6773;
			} else {
				w1 = 7149;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w1 = 42998;
			} else {
				w1 = 49998;
			}
		} else {
			if (rel_time < 121) {
				w1 = 37058;
			} else {
				if (hops < 3) {
					if (cons != 4) {
						w1 = 40910;
					} else {
						w1 = 41629;
					}
				} else {
					w1 = 42021;
				}
			}
		}
	}
	int w2;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w2 = 4215;
			} else {
				w2 = 4478;
			}
		} else {
			if (hops < 4) {
				w2 = 4742;
			} else {
				w2 = 5005;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w2 = 30122;
			} else {
				w2 = 35008;
			}
		} else {
			if (hops < 2) {
				if (rel_time < 121) {
					w2 = 25243;
				} else {
					if (cons != 2) {
						w2 = 28316;
					} else {
						w2 = 29034;
					}
				}
			} else {
				if (rel_time < 121) {
					w2 = 26227;
				} else {
					if (cons != 2) {
						w2 = 29053;
					} else {
						w2 = 29735;
					}
				}
			}
		}
	}
	int w3;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w3 = 2950;
			} else {
				w3 = 3135;
			}
		} else {
			if (hops < 4) {
				w3 = 3319;
			} else {
				w3 = 3504;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w3 = 21102;
			} else {
				w3 = 24512;
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (rel_time < 121) {
						w3 = 18201;
					} else {
						w3 = 19861;
					}
				} else {
					if (hops < 2) {
						w3 = 20326;
					} else {
						w3 = 20816;
					}
				}
			} else {
				if (rel_time < 14392) {
					if (hops < 3) {
						w3 = 20427;
					} else {
						w3 = 21096;
					}
				} else {
					w3 = 22769;
				}
			}
		}
	}
	int w4;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w4 = 2065;
			} else {
				w4 = 2194;
			}
		} else {
			if (hops < 4) {
				w4 = 2324;
			} else {
				w4 = 2453;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w4 = 14783;
			} else {
				if (hops < 2) {
					w4 = 16504;
				} else {
					w4 = 17472;
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 4) {
					if (cons != 2) {
						w4 = 13718;
					} else {
						w4 = 14317;
					}
				} else {
					if (rel_time < 14392) {
						w4 = 14300;
					} else {
						w4 = 15718;
					}
				}
			} else {
				if (rel_time < 14960) {
					if (hops < 4) {
						w4 = 14372;
					} else {
						w4 = 14880;
					}
				} else {
					w4 = 16341;
				}
			}
		}
	}
	int w5;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w5 = 1446;
			} else {
				w5 = 1536;
			}
		} else {
			if (hops < 4) {
				w5 = 1627;
			} else {
				w5 = 1717;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w5 = 10356;
			} else {
				if (hops < 3) {
					w5 = 11743;
				} else {
					w5 = 12551;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 121) {
					w5 = 8194;
				} else {
					if (cons != 2) {
						w5 = 9617;
					} else {
						w5 = 9936;
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						w5 = 9808;
					} else {
						w5 = 10254;
					}
				} else {
					if (rel_time < 14392) {
						w5 = 10295;
					} else {
						w5 = 11329;
					}
				}
			}
		}
	}
	int w6;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w6 = 1012;
			} else {
				w6 = 1075;
			}
		} else {
			if (hops < 4) {
				w6 = 1139;
			} else {
				w6 = 1202;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 3) {
					w6 = 6938;
				} else {
					w6 = 7833;
				}
			} else {
				if (cons != 3) {
					if (hops < 2) {
						w6 = 8260;
					} else {
						w6 = 8863;
					}
				} else {
					w6 = 7902;
				}
			}
		} else {
			if (rel_time < 121) {
				w6 = 5782;
			} else {
				if (hops < 3) {
					if (rel_time < 14960) {
						w6 = 6864;
					} else {
						w6 = 7877;
					}
				} else {
					if (hops < 4) {
						w6 = 7074;
					} else {
						w6 = 7442;
					}
				}
			}
		}
	}
	int w7;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w7 = 708;
			} else {
				w7 = 753;
			}
		} else {
			if (hops < 4) {
				w7 = 797;
			} else {
				w7 = 842;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 2) {
				if (rel_time < 63) {
					if (hops < 2) {
						w7 = 4594;
					} else {
						w7 = 5334;
					}
				} else {
					if (hops < 3) {
						w7 = 5506;
					} else {
						w7 = 6034;
					}
				}
			} else {
				w7 = 6304;
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (hops < 2) {
						w7 = 4520;
					} else {
						w7 = 4774;
					}
				} else {
					if (rel_time < 180) {
						w7 = 5889;
					} else {
						w7 = 4968;
					}
				}
			} else {
				if (rel_time < 14392) {
					if (hops < 3) {
						w7 = 4963;
					} else {
						w7 = 5202;
					}
				} else {
					w7 = 5673;
				}
			}
		}
	}
	int w8;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w8 = 496;
			} else {
				w8 = 527;
			}
		} else {
			if (hops < 4) {
				w8 = 558;
			} else {
				w8 = 589;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 2) {
				if (hops < 2) {
					if (rel_time < 63) {
						w8 = 3223;
					} else {
						w8 = 3706;
					}
				} else {
					if (hops < 4) {
						w8 = 3925;
					} else {
						w8 = 4645;
					}
				}
			} else {
				if (hops < 3) {
					w8 = 4256;
				} else {
					w8 = 4718;
				}
			}
		} else {
			if (rel_time < 121) {
				if (hops < 3) {
					if (hops < 2) {
						w8 = 2677;
					} else {
						w8 = 2408;
					}
				} else {
					w8 = 2824;
				}
			} else {
				if (hops < 2) {
					if (cons != 4) {
						w8 = 3251;
					} else {
						w8 = 3442;
					}
				} else {
					if (hops < 4) {
						w8 = 3449;
					} else {
						w8 = 3729;
					}
				}
			}
		}
	}
	int w9;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w9 = 347;
			} else {
				w9 = 369;
			}
		} else {
			if (hops < 4) {
				w9 = 391;
			} else {
				w9 = 413;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 3) {
					w9 = 2318;
				} else {
					w9 = 2691;
				}
			} else {
				if (cons != 3) {
					if (hops < 4) {
						w9 = 2978;
					} else {
						w9 = 3724;
					}
				} else {
					if (hops < 2) {
						w9 = 2456;
					} else {
						w9 = 2763;
					}
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (rel_time < 473) {
						w9 = 1926;
					} else {
						w9 = 2285;
					}
				} else {
					if (rel_time < 180) {
						w9 = 3108;
					} else {
						w9 = 2458;
					}
				}
			} else {
				if (rel_time < 14392) {
					if (hops < 2) {
						w9 = 2384;
					} else {
						w9 = 2542;
					}
				} else {
					if (hops < 3) {
						w9 = 2792;
					} else {
						w9 = 3220;
					}
				}
			}
		}
	}
	int w10;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w10 = 243;
			} else {
				w10 = 258;
			}
		} else {
			if (hops < 4) {
				w10 = 273;
			} else {
				w10 = 289;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 3) {
					w10 = 1625;
				} else {
					w10 = 1888;
				}
			} else {
				if (hops < 4) {
					if (cons != 3) {
						w10 = 2086;
					} else {
						w10 = 1841;
					}
				} else {
					w10 = 2527;
				}
			}
		} else {
			if (hops < 4) {
				if (cons != 1) {
					if (cons != 3) {
						w10 = 1735;
					} else {
						w10 = 1585;
					}
				} else {
					if (rel_time < 121) {
						w10 = 1244;
					} else {
						w10 = 1577;
					}
				}
			} else {
				if (cons != 1) {
					if (cons != 3) {
						w10 = 2014;
					} else {
						w10 = 1778;
					}
				} else {
					w10 = 1772;
				}
			}
		}
	}
	int w11;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w11 = 170;
			} else {
				w11 = 181;
			}
		} else {
			if (hops < 4) {
				w11 = 191;
			} else {
				w11 = 202;
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 14960) {
				if (rel_time < 374) {
					if (cons != 2) {
						w11 = 1106;
					} else {
						w11 = 1509;
					}
				} else {
					if (rel_time < 737) {
						w11 = 866;
					} else {
						w11 = 1096;
					}
				}
			} else {
				w11 = 1538;
			}
		} else {
			if (prod != 0) {
				if (rel_time < 63) {
					if (hops < 4) {
						w11 = 1224;
					} else {
						w11 = 1577;
					}
				} else {
					if (cons != 3) {
						w11 = 1574;
					} else {
						w11 = 1366;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 121) {
						w11 = 836;
					} else {
						w11 = 1195;
					}
				} else {
					if (rel_time < 14960) {
						w11 = 1315;
					} else {
						w11 = 1909;
					}
				}
			}
		}
	}
	int w12;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w12 = 119;
			} else {
				w12 = 127;
			}
		} else {
			if (hops < 4) {
				w12 = 134;
			} else {
				w12 = 142;
			}
		}
	} else {
		if (cons != 1) {
			if (rel_time < 374) {
				if (prod != 0) {
					if (hops < 3) {
						w12 = 939;
					} else {
						w12 = 1135;
					}
				} else {
					if (hops < 2) {
						w12 = 1130;
					} else {
						w12 = 1325;
					}
				}
			} else {
				if (cons != 3) {
					if (hops < 3) {
						w12 = 824;
					} else {
						w12 = 942;
					}
				} else {
					if (rel_time < 473) {
						w12 = 614;
					} else {
						w12 = 778;
					}
				}
			}
		} else {
			if (hops < 2) {
				w12 = 707;
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w12 = 791;
					} else {
						w12 = 754;
					}
				} else {
					if (rel_time < 63) {
						w12 = 1117;
					} else {
						w12 = 847;
					}
				}
			}
		}
	}
	int w13;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w13 = 83;
			} else {
				w13 = 89;
			}
		} else {
			if (hops < 4) {
				w13 = 94;
			} else {
				w13 = 99;
			}
		}
	} else {
		if (rel_time < 14960) {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						w13 = 495;
					} else {
						w13 = 571;
					}
				} else {
					if (rel_time < 737) {
						w13 = 476;
					} else {
						w13 = 589;
					}
				}
			} else {
				if (rel_time < 374) {
					if (cons != 1) {
						w13 = 790;
					} else {
						w13 = 508;
					}
				} else {
					if (rel_time < 737) {
						w13 = 377;
					} else {
						w13 = 592;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w13 = 833;
				} else {
					w13 = 732;
				}
			} else {
				w13 = 1051;
			}
		}
	}
	int w14;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w14 = 58;
			} else {
				w14 = 62;
			}
		} else {
			if (hops < 4) {
				w14 = 66;
			} else {
				w14 = 69;
			}
		}
	} else {
		if (hops < 4) {
			if (cons != 4) {
				if (cons != 2) {
					if (hops < 2) {
						w14 = 347;
					} else {
						w14 = 376;
					}
				} else {
					if (rel_time < 180) {
						w14 = 605;
					} else {
						w14 = 402;
					}
				}
			} else {
				if (rel_time < 14392) {
					if (rel_time < 737) {
						w14 = 340;
					} else {
						w14 = 442;
					}
				} else {
					if (hops < 3) {
						w14 = 550;
					} else {
						w14 = 724;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (cons != 3) {
					if (rel_time < 63) {
						w14 = 643;
					} else {
						w14 = 839;
					}
				} else {
					w14 = 557;
				}
			} else {
				if (cons != 1) {
					if (cons != 3) {
						w14 = 545;
					} else {
						w14 = 447;
					}
				} else {
					w14 = 417;
				}
			}
		}
	}
	int w15;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w15 = 41;
			} else {
				w15 = 43;
			}
		} else {
			if (hops < 4) {
				w15 = 46;
			} else {
				w15 = 49;
			}
		}
	} else {
		if (hops < 4) {
			if (cons != 4) {
				if (cons != 2) {
					if (prod != 0) {
						w15 = 316;
					} else {
						w15 = 253;
					}
				} else {
					if (rel_time < 180) {
						w15 = 424;
					} else {
						w15 = 281;
					}
				}
			} else {
				if (rel_time < 14392) {
					if (rel_time < 737) {
						w15 = 238;
					} else {
						w15 = 309;
					}
				} else {
					if (hops < 3) {
						w15 = 385;
					} else {
						w15 = 508;
					}
				}
			}
		} else {
			if (rel_time < 374) {
				if (rel_time < 175) {
					if (prod != 0) {
						w15 = 484;
					} else {
						w15 = 250;
					}
				} else {
					w15 = 651;
				}
			} else {
				if (rel_time < 14960) {
					if (cons != 1) {
						w15 = 349;
					} else {
						w15 = 294;
					}
				} else {
					w15 = 615;
				}
			}
		}
	}
	int w16;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w16 = 29;
			} else {
				w16 = 30;
			}
		} else {
			if (hops < 4) {
				w16 = 32;
			} else {
				w16 = 34;
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 14960) {
				if (prod != 0) {
					if (rel_time < 175) {
						w16 = 212;
					} else {
						w16 = 283;
					}
				} else {
					if (rel_time < 121) {
						w16 = 66;
					} else {
						w16 = 174;
					}
				}
			} else {
				w16 = 306;
			}
		} else {
			if (cons != 1) {
				if (rel_time < 374) {
					if (rel_time < 175) {
						w16 = 236;
					} else {
						w16 = 348;
					}
				} else {
					if (rel_time < 737) {
						w16 = 77;
					} else {
						w16 = 219;
					}
				}
			} else {
				if (rel_time < 63) {
					if (hops < 3) {
						w16 = 233;
					} else {
						w16 = 309;
					}
				} else {
					if (rel_time < 121) {
						w16 = 33;
					} else {
						w16 = 185;
					}
				}
			}
		}
	}
	int w17;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w17 = 20;
			} else {
				w17 = 21;
			}
		} else {
			if (hops < 4) {
				w17 = 23;
			} else {
				w17 = 24;
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 121) {
				if (rel_time < 111) {
					w17 = 148;
				} else {
					if (hops < 2) {
						w17 = 46;
					} else {
						w17 = -91;
					}
				}
			} else {
				if (rel_time < 374) {
					if (rel_time < 175) {
						w17 = 117;
					} else {
						w17 = 226;
					}
				} else {
					if (rel_time < 737) {
						w17 = 41;
					} else {
						w17 = 132;
					}
				}
			}
		} else {
			if (cons != 2) {
				if (cons != 4) {
					if (hops < 4) {
						w17 = 106;
					} else {
						w17 = 152;
					}
				} else {
					if (rel_time < 14392) {
						w17 = 180;
					} else {
						w17 = 309;
					}
				}
			} else {
				if (rel_time < 180) {
					if (hops < 4) {
						w17 = 285;
					} else {
						w17 = 363;
					}
				} else {
					if (rel_time < 10978) {
						w17 = 189;
					} else {
						w17 = 199;
					}
				}
			}
		}
	}
	int w18;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w18 = 14;
			} else {
				w18 = 15;
			}
		} else {
			if (hops < 4) {
				w18 = 16;
			} else {
				w18 = 17;
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 14960) {
				if (rel_time < 374) {
					if (cons != 1) {
						w18 = 141;
					} else {
						w18 = 63;
					}
				} else {
					if (rel_time < 737) {
						w18 = 7;
					} else {
						w18 = 83;
					}
				}
			} else {
				w18 = 175;
			}
		} else {
			if (cons != 4) {
				if (rel_time < 111) {
					if (hops < 3) {
						w18 = 106;
					} else {
						w18 = 184;
					}
				} else {
					if (rel_time < 121) {
						w18 = 19;
					} else {
						w18 = 98;
					}
				}
			} else {
				if (rel_time < 737) {
					if (rel_time < 374) {
						w18 = 152;
					} else {
						w18 = -23;
					}
				} else {
					if (hops < 3) {
						w18 = 116;
					} else {
						w18 = 138;
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18) >> 8;
}
