#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int model(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 2) {
				w0 = 9706;
			} else {
				w0 = 11271;
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w0 = -9075;
					} else {
						w0 = -8190;
					}
				} else {
					if (hops < 4) {
						w0 = -7269;
					} else {
						w0 = -6360;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 11669) {
						if (rel_time < 11085) {
							w0 = -3734;
						} else {
							w0 = -1165;
						}
					} else {
						w0 = -5761;
					}
				} else {
					if (rel_time < 11224) {
						if (rel_time < 10636) {
							w0 = -1935;
						} else {
							w0 = 470;
						}
					} else {
						w0 = -3935;
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			w0 = 16340;
		} else {
			w0 = 18038;
		}
	}
	int w1;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 3) {
				if (prod != 0) {
					w1 = 4660;
				} else {
					w1 = 5627;
				}
			} else {
				w1 = 6257;
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w1 = -4542;
					} else {
						w1 = -4101;
					}
				} else {
					if (hops < 4) {
						w1 = -3641;
					} else {
						w1 = -3191;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1727) {
						w1 = -4218;
					} else {
						if (rel_time < 2312) {
							w1 = 326;
						} else {
							w1 = -2264;
						}
					}
				} else {
					if (rel_time < 1727) {
						w1 = -3256;
					} else {
						if (rel_time < 2312) {
							w1 = 1271;
						} else {
							w1 = -1183;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 557) {
				w1 = 5919;
			} else {
				w1 = 7971;
			}
		} else {
			if (rel_time < 557) {
				w1 = 6952;
			} else {
				if (hops < 4) {
					w1 = 8824;
				} else {
					w1 = 9700;
				}
			}
		}
	}
	int w2;
	if (size < 133) {
		if (rel_time < 1142) {
			if (prod != 0) {
				if (hops < 4) {
					w2 = 2390;
				} else {
					w2 = 3161;
				}
			} else {
				if (hops < 3) {
					w2 = 2870;
				} else {
					w2 = 3751;
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w2 = -2273;
					} else {
						w2 = -2053;
					}
				} else {
					if (hops < 4) {
						w2 = -1824;
					} else {
						w2 = -1601;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 2897) {
						if (rel_time < 2312) {
							w2 = -907;
						} else {
							w2 = -2971;
						}
					} else {
						if (rel_time < 3482) {
							w2 = 1543;
						} else {
							w2 = -943;
						}
					}
				} else {
					if (rel_time < 10051) {
						if (rel_time < 9468) {
							w2 = 180;
						} else {
							w2 = 2492;
						}
					} else {
						if (rel_time < 10636) {
							w2 = -1845;
						} else {
							w2 = 111;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 624) {
			w2 = 3414;
		} else {
			if (hops < 2) {
				if (rel_time < 10524) {
					w2 = 4089;
				} else {
					w2 = 3077;
				}
			} else {
				if (rel_time < 10563) {
					if (hops < 4) {
						w2 = 4507;
					} else {
						w2 = 4973;
					}
				} else {
					w2 = 3644;
				}
			}
		}
	}
	int w3;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 4) {
				if (prod != 0) {
					w3 = 1204;
				} else {
					w3 = 1510;
				}
			} else {
				w3 = 2071;
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w3 = -1137;
					} else {
						if (prod != 1) {
							w3 = -1069;
						} else {
							w3 = -973;
						}
					}
				} else {
					if (hops < 4) {
						w3 = -914;
					} else {
						if (prod != 1) {
							w3 = -859;
						} else {
							w3 = -748;
						}
					}
				}
			} else {
				if (rel_time < 10500) {
					if (rel_time < 9915) {
						if (rel_time < 9330) {
							w3 = -286;
						} else {
							w3 = -2486;
						}
					} else {
						if (hops < 4) {
							w3 = 2020;
						} else {
							w3 = 1359;
						}
					}
				} else {
					if (rel_time < 11085) {
						if (hops < 4) {
							w3 = -2503;
						} else {
							w3 = -1015;
						}
					} else {
						if (rel_time < 11669) {
							w3 = 840;
						} else {
							w3 = -1500;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 624) {
				w3 = 1417;
			} else {
				if (rel_time < 1206) {
					w3 = 2644;
				} else {
					if (rel_time < 1790) {
						w3 = 1169;
					} else {
						if (rel_time < 2332) {
							w3 = 2695;
						} else {
							w3 = 1990;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 624) {
					w3 = 1855;
				} else {
					if (rel_time < 1206) {
						w3 = 2810;
					} else {
						if (rel_time < 1790) {
							w3 = 1468;
						} else {
							w3 = 2246;
						}
					}
				}
			} else {
				w3 = 2497;
			}
		}
	}
	int w4;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 4) {
				if (hops < 2) {
					w4 = 566;
				} else {
					if (prod != 0) {
						w4 = 659;
					} else {
						w4 = 856;
					}
				}
			} else {
				if (prod != 0) {
					w4 = 746;
				} else {
					w4 = 1412;
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w4 = -569;
					} else {
						if (rel_time < 11216) {
							w4 = -523;
						} else {
							w4 = -394;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 2313) {
							w4 = -396;
						} else {
							w4 = -486;
						}
					} else {
						w4 = -401;
					}
				}
			} else {
				if (rel_time < 1727) {
					if (hops < 4) {
						if (hops < 2) {
							w4 = -1606;
						} else {
							w4 = -1230;
						}
					} else {
						w4 = -692;
					}
				} else {
					if (rel_time < 2312) {
						if (hops < 2) {
							w4 = 739;
						} else {
							w4 = 1128;
						}
					} else {
						if (rel_time < 2897) {
							w4 = -1426;
						} else {
							w4 = -116;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10563) {
			if (rel_time < 9978) {
				if (rel_time < 9393) {
					if (rel_time < 8809) {
						if (rel_time < 8224) {
							w4 = 1099;
						} else {
							w4 = 286;
						}
					} else {
						w4 = 1774;
					}
				} else {
					if (rel_time < 9939) {
						w4 = 230;
					} else {
						w4 = 460;
					}
				}
			} else {
				w4 = 1814;
			}
		} else {
			w4 = 703;
		}
	}
	int w5;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 3) {
				if (prod != 0) {
					w5 = 273;
				} else {
					w5 = 380;
				}
			} else {
				if (prod != 0) {
					w5 = 408;
				} else {
					if (hops < 4) {
						w5 = 459;
					} else {
						w5 = 777;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 11801) {
					if (rel_time < 6425) {
						if (rel_time < 5952) {
							w5 = -270;
						} else {
							w5 = -1453;
						}
					} else {
						if (rel_time < 6991) {
							w5 = 855;
						} else {
							w5 = -319;
						}
					}
				} else {
					w5 = -952;
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						if (prod != 1) {
							w5 = -270;
						} else {
							w5 = -224;
						}
					} else {
						if (rel_time < 1143) {
							w5 = -38;
						} else {
							w5 = -189;
						}
					}
				} else {
					if (rel_time < 4066) {
						if (rel_time < 3482) {
							w5 = 188;
						} else {
							w5 = -2112;
						}
					} else {
						if (rel_time < 4651) {
							w5 = 2412;
						} else {
							w5 = -13;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 624) {
			if (hops < 2) {
				w5 = 177;
			} else {
				if (hops < 4) {
					if (rel_time < 557) {
						w5 = 345;
					} else {
						w5 = 455;
					}
				} else {
					w5 = 658;
				}
			}
		} else {
			if (rel_time < 1206) {
				if (hops < 4) {
					w5 = 885;
				} else {
					w5 = 1252;
				}
			} else {
				if (rel_time < 1790) {
					if (hops < 4) {
						if (hops < 2) {
							w5 = 68;
						} else {
							w5 = 219;
						}
					} else {
						w5 = -125;
					}
				} else {
					if (rel_time < 2375) {
						if (rel_time < 2332) {
							w5 = 861;
						} else {
							w5 = 1311;
						}
					} else {
						if (rel_time < 2960) {
							w5 = -252;
						} else {
							w5 = 575;
						}
					}
				}
			}
		}
	}
	int w6;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 3) {
				if (prod != 0) {
					w6 = 138;
				} else {
					w6 = 194;
				}
			} else {
				if (prod != 0) {
					w6 = 209;
				} else {
					if (hops < 4) {
						w6 = 245;
					} else {
						w6 = 427;
					}
				}
			}
		} else {
			if (rel_time < 8877) {
				if (rel_time < 8292) {
					if (rel_time < 7707) {
						if (rel_time < 7122) {
							w6 = -83;
						} else {
							w6 = -856;
						}
					} else {
						if (rel_time < 8160) {
							w6 = 2357;
						} else {
							w6 = -141;
						}
					}
				} else {
					if (rel_time < 8745) {
						w6 = -2196;
					} else {
						if (rel_time < 8747) {
							w6 = -208;
						} else {
							w6 = -136;
						}
					}
				}
			} else {
				if (rel_time < 9330) {
					w6 = 2301;
				} else {
					if (rel_time < 9915) {
						if (prod != 0) {
							w6 = -114;
						} else {
							w6 = -1139;
						}
					} else {
						if (rel_time < 10500) {
							w6 = 315;
						} else {
							w6 = -206;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 7600) {
				if (rel_time < 7013) {
					if (rel_time < 6428) {
						if (rel_time < 5843) {
							w6 = 277;
						} else {
							w6 = -561;
						}
					} else {
						w6 = 940;
					}
				} else {
					w6 = -598;
				}
			} else {
				if (rel_time < 8184) {
					w6 = 956;
				} else {
					if (rel_time < 8769) {
						if (rel_time < 8767) {
							w6 = -216;
						} else {
							w6 = -100;
						}
					} else {
						if (rel_time < 9354) {
							w6 = 596;
						} else {
							w6 = 156;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 6469) {
					if (rel_time < 5884) {
						if (rel_time < 5299) {
							w6 = 272;
						} else {
							w6 = 949;
						}
					} else {
						w6 = -358;
					}
				} else {
					if (rel_time < 7054) {
						w6 = 979;
					} else {
						if (rel_time < 7600) {
							w6 = -425;
						} else {
							w6 = 391;
						}
					}
				}
			} else {
				if (rel_time < 5884) {
					if (rel_time < 5299) {
						if (rel_time < 4715) {
							w6 = 465;
						} else {
							w6 = -249;
						}
					} else {
						w6 = 1003;
					}
				} else {
					if (rel_time < 6469) {
						w6 = -277;
					} else {
						if (rel_time < 7054) {
							w6 = 968;
						} else {
							w6 = 340;
						}
					}
				}
			}
		}
	}
	int w7;
	if (size < 133) {
		if (rel_time < 5368) {
			if (rel_time < 4783) {
				if (rel_time < 4198) {
					if (rel_time < 3613) {
						if (rel_time < 3028) {
							w7 = -88;
						} else {
							w7 = 377;
						}
					} else {
						if (rel_time < 4066) {
							w7 = -1556;
						} else {
							w7 = -100;
						}
					}
				} else {
					if (rel_time < 4651) {
						if (hops < 2) {
							w7 = 2138;
						} else {
							w7 = 1272;
						}
					} else {
						w7 = -82;
					}
				}
			} else {
				if (rel_time < 5236) {
					w7 = -2161;
				} else {
					if (rel_time < 5256) {
						if (hops < 4) {
							w7 = -155;
						} else {
							w7 = -20;
						}
					} else {
						w7 = -55;
					}
				}
			}
		} else {
			if (rel_time < 5821) {
				w7 = 2370;
			} else {
				if (rel_time < 6406) {
					if (rel_time < 5952) {
						if (hops < 3) {
							w7 = -112;
						} else {
							w7 = -19;
						}
					} else {
						w7 = -1962;
					}
				} else {
					if (rel_time < 6991) {
						if (rel_time < 6537) {
							w7 = -109;
						} else {
							w7 = 2138;
						}
					} else {
						if (rel_time < 7575) {
							w7 = -631;
						} else {
							w7 = 14;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5299) {
			if (rel_time < 4715) {
				if (rel_time < 4130) {
					if (rel_time < 3545) {
						if (rel_time < 2960) {
							w7 = 84;
						} else {
							w7 = 820;
						}
					} else {
						w7 = -664;
					}
				} else {
					w7 = 860;
				}
			} else {
				if (hops < 4) {
					w7 = -689;
				} else {
					w7 = -149;
				}
			}
		} else {
			if (rel_time < 5884) {
				if (rel_time < 5843) {
					w7 = 805;
				} else {
					w7 = 551;
				}
			} else {
				if (rel_time < 6469) {
					if (hops < 2) {
						w7 = -307;
					} else {
						w7 = -210;
					}
				} else {
					if (rel_time < 7054) {
						w7 = 511;
					} else {
						if (rel_time < 7639) {
							w7 = -325;
						} else {
							w7 = 182;
						}
					}
				}
			}
		}
	}
	int w8;
	if (rel_time < 11801) {
		if (hops < 2) {
			if (prod != 0) {
				if (rel_time < 8181) {
					if (rel_time < 6537) {
						if (rel_time < 6428) {
							w8 = -19;
						} else {
							w8 = -581;
						}
					} else {
						if (rel_time < 8180) {
							w8 = 156;
						} else {
							w8 = 371;
						}
					}
				} else {
					if (rel_time < 10500) {
						if (rel_time < 9462) {
							w8 = -52;
						} else {
							w8 = -314;
						}
					} else {
						if (rel_time < 10524) {
							w8 = 209;
						} else {
							w8 = -68;
						}
					}
				}
			} else {
				if (rel_time < 11085) {
					if (rel_time < 10500) {
						if (rel_time < 9915) {
							w8 = -184;
						} else {
							w8 = 837;
						}
					} else {
						w8 = -1156;
					}
				} else {
					w8 = 455;
				}
			}
		} else {
			if (rel_time < 11216) {
				if (rel_time < 10631) {
					if (rel_time < 10046) {
						if (rel_time < 9398) {
							w8 = 56;
						} else {
							w8 = -358;
						}
					} else {
						if (rel_time < 10500) {
							w8 = 999;
						} else {
							w8 = 132;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w8 = -88;
						} else {
							w8 = 28;
						}
					} else {
						if (hops < 4) {
							w8 = -938;
						} else {
							w8 = -414;
						}
					}
				}
			} else {
				if (rel_time < 11669) {
					if (hops < 4) {
						w8 = 636;
					} else {
						w8 = 1005;
					}
				} else {
					if (rel_time < 11675) {
						if (hops < 3) {
							w8 = 136;
						} else {
							w8 = 8;
						}
					} else {
						if (hops < 3) {
							w8 = -108;
						} else {
							w8 = 29;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			w8 = -454;
		} else {
			w8 = -189;
		}
	}
	int w9;
	if (size < 133) {
		if (rel_time < 1142) {
			if (prod != 0) {
				w9 = 112;
			} else {
				w9 = 185;
			}
		} else {
			if (rel_time < 5256) {
				if (rel_time < 4783) {
					if (rel_time < 4198) {
						if (rel_time < 3482) {
							w9 = 1;
						} else {
							w9 = -292;
						}
					} else {
						if (rel_time < 4651) {
							w9 = 847;
						} else {
							w9 = -54;
						}
					}
				} else {
					if (rel_time < 5236) {
						if (hops < 4) {
							w9 = -1121;
						} else {
							w9 = -717;
						}
					} else {
						w9 = -87;
					}
				}
			} else {
				if (rel_time < 5821) {
					if (rel_time < 5368) {
						w9 = -36;
					} else {
						w9 = 1215;
					}
				} else {
					if (rel_time < 6406) {
						if (rel_time < 5952) {
							w9 = -54;
						} else {
							w9 = -974;
						}
					} else {
						if (rel_time < 7059) {
							w9 = 314;
						} else {
							w9 = -47;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10563) {
			if (rel_time < 9978) {
				if (rel_time < 9393) {
					if (rel_time < 8809) {
						if (rel_time < 8224) {
							w9 = 69;
						} else {
							w9 = -220;
						}
					} else {
						if (hops < 4) {
							w9 = 232;
						} else {
							w9 = 432;
						}
					}
				} else {
					if (hops < 2) {
						w9 = -200;
					} else {
						w9 = -123;
					}
				}
			} else {
				w9 = 357;
			}
		} else {
			if (hops < 4) {
				w9 = -113;
			} else {
				w9 = 109;
			}
		}
	}
	int w10;
	if (hops < 4) {
		if (rel_time < 7575) {
			if (rel_time < 7122) {
				if (rel_time < 6537) {
					if (rel_time < 5952) {
						if (rel_time < 5368) {
							w10 = -32;
						} else {
							w10 = 210;
						}
					} else {
						if (prod != 2) {
							w10 = -337;
						} else {
							w10 = 4;
						}
					}
				} else {
					if (rel_time < 6991) {
						if (hops < 2) {
							w10 = 509;
						} else {
							w10 = 1141;
						}
					} else {
						if (size < 133) {
							w10 = 56;
						} else {
							w10 = 159;
						}
					}
				}
			} else {
				w10 = -1479;
			}
		} else {
			if (rel_time < 8160) {
				if (rel_time < 7707) {
					if (size < 133) {
						if (rel_time < 7577) {
							w10 = 174;
						} else {
							w10 = 297;
						}
					} else {
						if (rel_time < 7597) {
							w10 = -281;
						} else {
							w10 = -152;
						}
					}
				} else {
					w10 = 1178;
				}
			} else {
				if (rel_time < 8809) {
					if (prod != 0) {
						if (size < 133) {
							w10 = -78;
						} else {
							w10 = 114;
						}
					} else {
						w10 = -1120;
					}
				} else {
					if (rel_time < 9330) {
						if (rel_time < 8877) {
							w10 = -48;
						} else {
							w10 = 1162;
						}
					} else {
						if (rel_time < 10046) {
							w10 = -112;
						} else {
							w10 = 20;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 133) {
				if (rel_time < 577) {
					w10 = 131;
				} else {
					if (rel_time < 6472) {
						if (rel_time < 5887) {
							w10 = -17;
						} else {
							w10 = -209;
						}
					} else {
						if (rel_time < 7644) {
							w10 = 182;
						} else {
							w10 = -32;
						}
					}
				}
			} else {
				if (rel_time < 7639) {
					if (rel_time < 7054) {
						if (rel_time < 1206) {
							w10 = 192;
						} else {
							w10 = 57;
						}
					} else {
						w10 = -396;
					}
				} else {
					if (rel_time < 8224) {
						w10 = 637;
					} else {
						if (rel_time < 8809) {
							w10 = -54;
						} else {
							w10 = 102;
						}
					}
				}
			}
		} else {
			if (rel_time < 2897) {
				if (rel_time < 2312) {
					if (rel_time < 1727) {
						if (rel_time < 1142) {
							w10 = 166;
						} else {
							w10 = -421;
						}
					} else {
						w10 = 768;
					}
				} else {
					w10 = -1123;
				}
			} else {
				if (rel_time < 3030) {
					w10 = 2200;
				} else {
					if (rel_time < 8883) {
						if (rel_time < 8745) {
							w10 = 188;
						} else {
							w10 = 1354;
						}
					} else {
						if (rel_time < 10636) {
							w10 = 5;
						} else {
							w10 = 244;
						}
					}
				}
			}
		}
	}
	return (179677 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10) >> 8;
}
