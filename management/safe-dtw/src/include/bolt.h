#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w0 = -46166;
			} else {
				w0 = -45255;
			}
		} else {
			w0 = -44173;
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				w0 = 45713;
			} else {
				w0 = 63322;
			}
		} else {
			if (rel_time < 133) {
				w0 = 31386;
			} else {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 3) {
							w0 = 43216;
						} else {
							w0 = 44733;
						}
					} else {
						if (hops < 3) {
							w0 = 40406;
						} else {
							w0 = 41918;
						}
					}
				} else {
					if (hops < 3) {
						w0 = 40390;
					} else {
						w0 = 41893;
					}
				}
			}
		}
	}
	int w1;
	if (size < 126) {
		if (hops < 3) {
			if (rel_time < 15337) {
				if (hops < 2) {
					w1 = -23125;
				} else {
					w1 = -22685;
				}
			} else {
				if (prod != 2) {
					w1 = -22858;
				} else {
					if (rel_time < 15528) {
						w1 = -17043;
					} else {
						if (hops < 2) {
							w1 = -21361;
						} else {
							w1 = -18112;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15337) {
					w1 = -22329;
				} else {
					if (rel_time < 15528) {
						w1 = -11819;
					} else {
						w1 = -21730;
					}
				}
			} else {
				w1 = -21361;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				w1 = 22906;
			} else {
				w1 = 31685;
			}
		} else {
			if (rel_time < 133) {
				w1 = 15729;
			} else {
				if (rel_time < 15524) {
					if (hops < 2) {
						if (cons != 2) {
							w1 = 20164;
						} else {
							w1 = 21114;
						}
					} else {
						if (cons != 2) {
							w1 = 21209;
						} else {
							w1 = 22166;
						}
					}
				} else {
					w1 = 25775;
				}
			}
		}
	}
	int w2;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w2 = -11548;
			} else {
				if (rel_time < 15337) {
					w2 = -11343;
				} else {
					if (prod != 2) {
						w2 = -11218;
					} else {
						w2 = -9021;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15337) {
					w2 = -11166;
				} else {
					if (rel_time < 15528) {
						w2 = -6083;
					} else {
						if (prod != 2) {
							w2 = -11415;
						} else {
							w2 = -9266;
						}
					}
				}
			} else {
				if (rel_time < 15337) {
					w2 = -10750;
				} else {
					if (prod != 2) {
						w2 = -10579;
					} else {
						w2 = -4977;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 3) {
					w2 = 10940;
				} else {
					w2 = 12431;
				}
			} else {
				if (rel_time < 117) {
					w2 = 17008;
				} else {
					if (hops < 3) {
						w2 = 14765;
					} else {
						w2 = 16238;
					}
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (rel_time < 133) {
						if (hops < 3) {
							w2 = 7361;
						} else {
							w2 = 8918;
						}
					} else {
						if (hops < 4) {
							w2 = 9946;
						} else {
							w2 = 11073;
						}
					}
				} else {
					if (rel_time < 197) {
						w2 = 12473;
					} else {
						if (hops < 4) {
							w2 = 10762;
						} else {
							w2 = 11858;
						}
					}
				}
			} else {
				if (rel_time < 14938) {
					if (hops < 4) {
						if (hops < 2) {
							w2 = 10928;
						} else {
							w2 = 11358;
						}
					} else {
						w2 = 12312;
					}
				} else {
					w2 = 12917;
				}
			}
		}
	}
	int w3;
	if (size < 126) {
		if (hops < 3) {
			if (rel_time < 15337) {
				if (hops < 2) {
					w3 = -5790;
				} else {
					w3 = -5672;
				}
			} else {
				if (rel_time < 15528) {
					if (hops < 2) {
						w3 = -2865;
					} else {
						w3 = -4117;
					}
				} else {
					if (prod != 2) {
						w3 = -5771;
					} else {
						w3 = -4910;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15337) {
					w3 = -5583;
				} else {
					if (rel_time < 15528) {
						w3 = -3131;
					} else {
						if (prod != 2) {
							w3 = -5733;
						} else {
							w3 = -4693;
						}
					}
				}
			} else {
				if (rel_time < 15337) {
					w3 = -5378;
				} else {
					if (prod != 2) {
						w3 = -5376;
					} else {
						w3 = -2574;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 2) {
					w3 = 4993;
				} else {
					w3 = 6109;
				}
			} else {
				if (hops < 2) {
					w3 = 7166;
				} else {
					if (rel_time < 117) {
						w3 = 8982;
					} else {
						w3 = 8006;
					}
				}
			}
		} else {
			if (cons != 4) {
				if (hops < 2) {
					if (cons != 2) {
						if (rel_time < 133) {
							w3 = 3197;
						} else {
							w3 = 4682;
						}
					} else {
						if (rel_time < 197) {
							w3 = 5878;
						} else {
							w3 = 5101;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 503) {
							w3 = 4544;
						} else {
							w3 = 5174;
						}
					} else {
						if (rel_time < 197) {
							w3 = 6412;
						} else {
							w3 = 5574;
						}
					}
				}
			} else {
				if (rel_time < 14938) {
					if (hops < 4) {
						if (rel_time < 779) {
							w3 = 5119;
						} else {
							w3 = 5630;
						}
					} else {
						w3 = 6166;
					}
				} else {
					if (hops < 2) {
						w3 = 5729;
					} else {
						w3 = 6804;
					}
				}
			}
		}
	}
	int w4;
	if (size < 126) {
		if (hops < 3) {
			if (rel_time < 15337) {
				if (hops < 2) {
					w4 = -2895;
				} else {
					w4 = -2836;
				}
			} else {
				if (rel_time < 15528) {
					if (hops < 2) {
						w4 = -1462;
					} else {
						w4 = -2106;
					}
				} else {
					if (prod != 2) {
						if (hops < 2) {
							w4 = -3027;
						} else {
							w4 = -2753;
						}
					} else {
						if (hops < 2) {
							w4 = -2629;
						} else {
							w4 = -2259;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				w4 = -2787;
			} else {
				if (rel_time < 15337) {
					w4 = -2690;
				} else {
					if (prod != 2) {
						w4 = -2732;
					} else {
						w4 = -1332;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 4) {
					if (hops < 2) {
						w4 = 2514;
					} else {
						w4 = 2949;
					}
				} else {
					w4 = 3849;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 117) {
						w4 = 4022;
					} else {
						if (hops < 2) {
							w4 = 3367;
						} else {
							w4 = 3847;
						}
					}
				} else {
					if (rel_time < 117) {
						w4 = 5038;
					} else {
						if (hops < 4) {
							w4 = 3968;
						} else {
							w4 = 4818;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 133) {
							w4 = 1744;
						} else {
							w4 = 2413;
						}
					} else {
						if (rel_time < 197) {
							w4 = 3023;
						} else {
							w4 = 2617;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 779) {
							w4 = 2407;
						} else {
							w4 = 2690;
						}
					} else {
						if (rel_time < 14938) {
							w4 = 2822;
						} else {
							w4 = 3247;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 4) {
						if (cons != 2) {
							w4 = 2623;
						} else {
							w4 = 2840;
						}
					} else {
						if (rel_time < 14938) {
							w4 = 2955;
						} else {
							w4 = 3376;
						}
					}
				} else {
					if (rel_time < 15524) {
						if (cons != 2) {
							w4 = 3009;
						} else {
							w4 = 3207;
						}
					} else {
						w4 = 4145;
					}
				}
			}
		}
	}
	int w5;
	if (size < 126) {
		if (hops < 3) {
			if (rel_time < 15337) {
				if (hops < 2) {
					w5 = -1448;
				} else {
					w5 = -1418;
				}
			} else {
				if (rel_time < 15528) {
					if (hops < 2) {
						w5 = -746;
					} else {
						w5 = -1078;
					}
				} else {
					if (prod != 2) {
						if (hops < 2) {
							w5 = -1519;
						} else {
							w5 = -1381;
						}
					} else {
						if (hops < 2) {
							w5 = -1327;
						} else {
							w5 = -1142;
						}
					}
				}
			}
		} else {
			if (rel_time < 15337) {
				if (hops < 4) {
					w5 = -1399;
				} else {
					w5 = -1346;
				}
			} else {
				if (prod != 2) {
					w5 = -1475;
				} else {
					if (rel_time < 15528) {
						if (hops < 4) {
							w5 = -259;
						} else {
							w5 = -370;
						}
					} else {
						w5 = -973;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 4) {
					if (hops < 2) {
						w5 = 1265;
					} else {
						w5 = 1480;
					}
				} else {
					w5 = 1977;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 117) {
						if (hops < 3) {
							w5 = 2018;
						} else {
							w5 = 2368;
						}
					} else {
						if (hops < 2) {
							w5 = 1689;
						} else {
							w5 = 1962;
						}
					}
				} else {
					if (rel_time < 117) {
						w5 = 3217;
					} else {
						w5 = 2449;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 503) {
							w5 = 787;
						} else {
							w5 = 1143;
						}
					} else {
						if (rel_time < 197) {
							w5 = 1459;
						} else {
							w5 = 1243;
						}
					}
				} else {
					if (rel_time < 14938) {
						if (rel_time < 1375) {
							w5 = 1217;
						} else {
							w5 = 1335;
						}
					} else {
						w5 = 1550;
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 133) {
							w5 = 946;
						} else {
							w5 = 1310;
						}
					} else {
						if (rel_time < 197) {
							w5 = 1745;
						} else {
							w5 = 1405;
						}
					}
				} else {
					if (rel_time < 779) {
						w5 = 1200;
					} else {
						if (rel_time < 14938) {
							w5 = 1472;
						} else {
							w5 = 1725;
						}
					}
				}
			}
		}
	}
	int w6;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w6 = -723;
			} else {
				if (rel_time < 15337) {
					w6 = -709;
				} else {
					if (prod != 2) {
						w6 = -693;
					} else {
						w6 = -573;
					}
				}
			}
		} else {
			if (rel_time < 15337) {
				if (hops < 4) {
					w6 = -699;
				} else {
					w6 = -673;
				}
			} else {
				if (prod != 2) {
					w6 = -740;
				} else {
					if (rel_time < 15528) {
						if (hops < 4) {
							w6 = -133;
						} else {
							w6 = -204;
						}
					} else {
						if (hops < 4) {
							w6 = -521;
						} else {
							w6 = -352;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 3) {
					w6 = 665;
				} else {
					if (hops < 4) {
						w6 = 807;
					} else {
						w6 = 1015;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 117) {
							w6 = 1012;
						} else {
							w6 = 901;
						}
					} else {
						if (rel_time < 117) {
							w6 = 1195;
						} else {
							w6 = 1016;
						}
					}
				} else {
					if (rel_time < 117) {
						w6 = 1675;
					} else {
						w6 = 1245;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (cons != 4) {
						if (cons != 2) {
							w6 = 590;
						} else {
							w6 = 652;
						}
					} else {
						if (rel_time < 14938) {
							w6 = 674;
						} else {
							w6 = 781;
						}
					}
				} else {
					if (rel_time < 133) {
						w6 = 319;
					} else {
						if (cons != 4) {
							w6 = 684;
						} else {
							w6 = 756;
						}
					}
				}
			} else {
				if (rel_time < 197) {
					if (rel_time < 133) {
						w6 = 848;
					} else {
						w6 = 1592;
					}
				} else {
					if (rel_time < 15524) {
						if (rel_time < 779) {
							w6 = 582;
						} else {
							w6 = 840;
						}
					} else {
						w6 = 1304;
					}
				}
			}
		}
	}
	int w7;
	if (size < 126) {
		if (hops < 3) {
			if (rel_time < 15337) {
				if (hops < 2) {
					w7 = -362;
				} else {
					w7 = -355;
				}
			} else {
				if (rel_time < 15528) {
					if (hops < 2) {
						w7 = -26;
					} else {
						w7 = -271;
					}
				} else {
					if (prod != 2) {
						if (hops < 2) {
							w7 = -402;
						} else {
							w7 = -348;
						}
					} else {
						w7 = -304;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15725) {
					if (rel_time < 15337) {
						w7 = -350;
					} else {
						if (rel_time < 15528) {
							w7 = -69;
						} else {
							w7 = -302;
						}
					}
				} else {
					w7 = -389;
				}
			} else {
				if (rel_time < 15337) {
					w7 = -337;
				} else {
					if (prod != 2) {
						w7 = -299;
					} else {
						w7 = -166;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 3) {
					if (hops < 2) {
						w7 = 307;
					} else {
						w7 = 357;
					}
				} else {
					if (hops < 4) {
						w7 = 407;
					} else {
						w7 = 521;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 117) {
							w7 = 518;
						} else {
							w7 = 399;
						}
					} else {
						if (hops < 3) {
							w7 = 502;
						} else {
							w7 = 542;
						}
					}
				} else {
					if (rel_time < 117) {
						w7 = 873;
					} else {
						w7 = 633;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 133) {
					if (rel_time < 117) {
						w7 = 36;
					} else {
						w7 = 70;
					}
				} else {
					if (cons != 4) {
						if (rel_time < 197) {
							w7 = 411;
						} else {
							w7 = 281;
						}
					} else {
						if (rel_time < 14747) {
							w7 = 326;
						} else {
							w7 = 375;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 133) {
						if (hops < 3) {
							w7 = 221;
						} else {
							w7 = 161;
						}
					} else {
						if (rel_time < 197) {
							w7 = 475;
						} else {
							w7 = 341;
						}
					}
				} else {
					if (rel_time < 197) {
						if (rel_time < 133) {
							w7 = 439;
						} else {
							w7 = 829;
						}
					} else {
						if (rel_time < 15524) {
							w7 = 417;
						} else {
							w7 = 673;
						}
					}
				}
			}
		}
	}
	int w8;
	if (size < 126) {
		if (hops < 2) {
			if (rel_time < 15725) {
				if (rel_time < 15337) {
					w8 = -181;
				} else {
					if (rel_time < 15528) {
						w8 = -13;
					} else {
						if (prod != 2) {
							w8 = -198;
						} else {
							w8 = -161;
						}
					}
				}
			} else {
				w8 = -202;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15337) {
					w8 = -176;
				} else {
					if (prod != 2) {
						if (hops < 3) {
							w8 = -175;
						} else {
							w8 = -202;
						}
					} else {
						if (hops < 3) {
							w8 = -143;
						} else {
							w8 = -91;
						}
					}
				}
			} else {
				if (rel_time < 15337) {
					w8 = -168;
				} else {
					if (rel_time < 15528) {
						w8 = -37;
					} else {
						if (prod != 2) {
							w8 = -152;
						} else {
							w8 = -106;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 3) {
					if (hops < 2) {
						w8 = 154;
					} else {
						w8 = 179;
					}
				} else {
					if (hops < 4) {
						w8 = 205;
					} else {
						w8 = 268;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 117) {
						if (hops < 3) {
							w8 = 254;
						} else {
							w8 = 334;
						}
					} else {
						if (hops < 2) {
							w8 = 200;
						} else {
							w8 = 248;
						}
					}
				} else {
					if (rel_time < 117) {
						w8 = 454;
					} else {
						w8 = 322;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 779) {
					if (cons != 2) {
						if (hops < 2) {
							w8 = 49;
						} else {
							w8 = 98;
						}
					} else {
						if (hops < 2) {
							w8 = 207;
						} else {
							w8 = 141;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w8 = 145;
						} else {
							w8 = 168;
						}
					} else {
						if (rel_time < 14938) {
							w8 = 174;
						} else {
							w8 = 214;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 503) {
							w8 = 106;
						} else {
							w8 = 163;
						}
					} else {
						if (rel_time < 197) {
							w8 = 352;
						} else {
							w8 = 194;
						}
					}
				} else {
					if (rel_time < 779) {
						if (hops < 4) {
							w8 = 105;
						} else {
							w8 = 19;
						}
					} else {
						if (rel_time < 14938) {
							w8 = 218;
						} else {
							w8 = 317;
						}
					}
				}
			}
		}
	}
	int w9;
	if (size < 126) {
		if (hops < 3) {
			if (rel_time < 15337) {
				w9 = -90;
			} else {
				if (rel_time < 15528) {
					if (hops < 2) {
						w9 = -7;
					} else {
						w9 = -69;
					}
				} else {
					if (prod != 2) {
						if (hops < 2) {
							w9 = -102;
						} else {
							w9 = -88;
						}
					} else {
						w9 = -77;
					}
				}
			}
		} else {
			w9 = -86;
		}
	} else {
		if (hops < 4) {
			if (hops < 2) {
				if (cons != 1) {
					if (rel_time < 392) {
						if (rel_time < 117) {
							w9 = 135;
						} else {
							w9 = 102;
						}
					} else {
						if (rel_time < 503) {
							w9 = -24;
						} else {
							w9 = 75;
						}
					}
				} else {
					if (rel_time < 2549) {
						if (rel_time < 68) {
							w9 = 78;
						} else {
							w9 = 34;
						}
					} else {
						if (rel_time < 7865) {
							w9 = 65;
						} else {
							w9 = 51;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 68) {
						w9 = 96;
					} else {
						if (rel_time < 186) {
							w9 = 139;
						} else {
							w9 = 112;
						}
					}
				} else {
					if (cons != 3) {
						if (cons != 1) {
							w9 = 95;
						} else {
							w9 = 79;
						}
					} else {
						if (rel_time < 503) {
							w9 = 44;
						} else {
							w9 = 77;
						}
					}
				}
			}
		} else {
			if (rel_time < 197) {
				if (cons != 2) {
					if (rel_time < 68) {
						w9 = 137;
					} else {
						w9 = 179;
					}
				} else {
					w9 = 255;
				}
			} else {
				if (cons != 1) {
					if (cons != 3) {
						if (rel_time < 779) {
							w9 = 76;
						} else {
							w9 = 140;
						}
					} else {
						if (rel_time < 1369) {
							w9 = 137;
						} else {
							w9 = 99;
						}
					}
				} else {
					if (rel_time < 976) {
						w9 = 32;
					} else {
						if (rel_time < 4909) {
							w9 = 122;
						} else {
							w9 = 93;
						}
					}
				}
			}
		}
	}
	int w10;
	if (size < 126) {
		if (hops < 4) {
			if (hops < 2) {
				w10 = -46;
			} else {
				w10 = -44;
			}
		} else {
			if (rel_time < 15337) {
				w10 = -41;
			} else {
				if (rel_time < 15528) {
					w10 = 18;
				} else {
					w10 = -30;
				}
			}
		}
	} else {
		if (hops < 4) {
			if (hops < 2) {
				if (cons != 1) {
					if (rel_time < 197) {
						if (rel_time < 117) {
							w10 = 68;
						} else {
							w10 = 54;
						}
					} else {
						if (rel_time < 12185) {
							w10 = 34;
						} else {
							w10 = 46;
						}
					}
				} else {
					if (rel_time < 976) {
						if (rel_time < 68) {
							w10 = 39;
						} else {
							w10 = 2;
						}
					} else {
						if (rel_time < 13561) {
							w10 = 27;
						} else {
							w10 = 40;
						}
					}
				}
			} else {
				if (rel_time < 15524) {
					if (prod != 0) {
						if (rel_time < 68) {
							w10 = 48;
						} else {
							w10 = 65;
						}
					} else {
						if (rel_time < 779) {
							w10 = 23;
						} else {
							w10 = 44;
						}
					}
				} else {
					if (hops < 3) {
						w10 = 66;
					} else {
						w10 = 101;
					}
				}
			}
		} else {
			if (rel_time < 392) {
				if (cons != 2) {
					if (rel_time < 68) {
						w10 = 71;
					} else {
						w10 = 99;
					}
				} else {
					w10 = 130;
				}
			} else {
				if (rel_time < 976) {
					if (rel_time < 503) {
						w10 = 65;
					} else {
						if (rel_time < 779) {
							w10 = -27;
						} else {
							w10 = 16;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w10 = 51;
						} else {
							w10 = 66;
						}
					} else {
						if (rel_time < 11792) {
							w10 = 65;
						} else {
							w10 = 99;
						}
					}
				}
			}
		}
	}
	int w11;
	if (size < 126) {
		if (rel_time < 15725) {
			if (rel_time < 15337) {
				w11 = -22;
			} else {
				if (rel_time < 15528) {
					if (hops < 3) {
						if (hops < 2) {
							w11 = 19;
						} else {
							w11 = -14;
						}
					} else {
						if (hops < 4) {
							w11 = 72;
						} else {
							w11 = 10;
						}
					}
				} else {
					if (prod != 2) {
						if (hops < 3) {
							w11 = -26;
						} else {
							w11 = -59;
						}
					} else {
						w11 = -13;
					}
				}
			}
		} else {
			w11 = -26;
		}
	} else {
		if (cons != 4) {
			if (cons != 2) {
				if (prod != 0) {
					if (rel_time < 68) {
						if (hops < 3) {
							w11 = 19;
						} else {
							w11 = 33;
						}
					} else {
						w11 = 33;
					}
				} else {
					if (rel_time < 503) {
						if (hops < 2) {
							w11 = -20;
						} else {
							w11 = 7;
						}
					} else {
						if (rel_time < 7865) {
							w11 = 21;
						} else {
							w11 = 15;
						}
					}
				}
			} else {
				if (rel_time < 197) {
					if (hops < 3) {
						if (hops < 2) {
							w11 = 31;
						} else {
							w11 = 15;
						}
					} else {
						if (rel_time < 117) {
							w11 = 65;
						} else {
							w11 = 99;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12185) {
							w11 = 13;
						} else {
							w11 = 26;
						}
					} else {
						if (rel_time < 2746) {
							w11 = 36;
						} else {
							w11 = 23;
						}
					}
				}
			}
		} else {
			if (rel_time < 1375) {
				if (rel_time < 392) {
					if (hops < 4) {
						w11 = 25;
					} else {
						w11 = 62;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 779) {
							w11 = 32;
						} else {
							w11 = -1;
						}
					} else {
						if (hops < 3) {
							w11 = -26;
						} else {
							w11 = -3;
						}
					}
				}
			} else {
				if (rel_time < 14938) {
					if (hops < 3) {
						if (rel_time < 7859) {
							w11 = 28;
						} else {
							w11 = 21;
						}
					} else {
						if (rel_time < 7072) {
							w11 = 25;
						} else {
							w11 = 36;
						}
					}
				} else {
					if (hops < 3) {
						w11 = 37;
					} else {
						if (hops < 4) {
							w11 = 51;
						} else {
							w11 = 78;
						}
					}
				}
			}
		}
	}
	int w12;
	if (size < 126) {
		w12 = -11;
	} else {
		if (hops < 4) {
			if (cons != 4) {
				if (rel_time < 13758) {
					if (hops < 2) {
						if (rel_time < 13168) {
							w12 = 7;
						} else {
							w12 = -8;
						}
					} else {
						if (rel_time < 12972) {
							w12 = 11;
						} else {
							w12 = 21;
						}
					}
				} else {
					if (rel_time < 14741) {
						if (rel_time < 14354) {
							w12 = 4;
						} else {
							w12 = -5;
						}
					} else {
						if (hops < 2) {
							w12 = 18;
						} else {
							w12 = 4;
						}
					}
				}
			} else {
				if (rel_time < 3139) {
					if (rel_time < 2353) {
						if (rel_time < 779) {
							w12 = 5;
						} else {
							w12 = 12;
						}
					} else {
						if (hops < 3) {
							w12 = -7;
						} else {
							w12 = 18;
						}
					}
				} else {
					if (rel_time < 14747) {
						if (rel_time < 6286) {
							w12 = 17;
						} else {
							w12 = 12;
						}
					} else {
						w12 = 20;
					}
				}
			}
		} else {
			if (rel_time < 1762) {
				if (rel_time < 976) {
					if (rel_time < 503) {
						w12 = 29;
					} else {
						w12 = -8;
					}
				} else {
					if (cons != 4) {
						w12 = 33;
					} else {
						w12 = 69;
					}
				}
			} else {
				if (rel_time < 6679) {
					if (rel_time < 6286) {
						if (rel_time < 3926) {
							w12 = 5;
						} else {
							w12 = 17;
						}
					} else {
						w12 = -17;
					}
				} else {
					if (rel_time < 7859) {
						if (rel_time < 7662) {
							w12 = 26;
						} else {
							w12 = 60;
						}
					} else {
						if (rel_time < 8448) {
							w12 = -10;
						} else {
							w12 = 22;
						}
					}
				}
			}
		}
	}
	int w13;
	if (size < 126) {
		w13 = -6;
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				w13 = 6;
			} else {
				w13 = 12;
			}
		} else {
			if (rel_time < 133) {
				if (rel_time < 117) {
					if (hops < 2) {
						w13 = -17;
					} else {
						w13 = 109;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w13 = -5;
						} else {
							w13 = -31;
						}
					} else {
						w13 = 25;
					}
				}
			} else {
				if (rel_time < 197) {
					if (hops < 3) {
						w13 = 4;
					} else {
						if (hops < 4) {
							w13 = 48;
						} else {
							w13 = 17;
						}
					}
				} else {
					if (rel_time < 779) {
						w13 = -5;
					} else {
						if (hops < 4) {
							w13 = 5;
						} else {
							w13 = 9;
						}
					}
				}
			}
		}
	}
	int w14;
	if (size < 126) {
		w14 = -3;
	} else {
		if (cons != 3) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 7268) {
						if (rel_time < 5106) {
							w14 = 2;
						} else {
							w14 = 9;
						}
					} else {
						if (rel_time < 9628) {
							w14 = -7;
						} else {
							w14 = 3;
						}
					}
				} else {
					if (rel_time < 779) {
						if (rel_time < 392) {
							w14 = 1;
						} else {
							w14 = -20;
						}
					} else {
						if (rel_time < 15134) {
							w14 = 8;
						} else {
							w14 = -9;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (rel_time < 197) {
						if (hops < 4) {
							w14 = 24;
						} else {
							w14 = 5;
						}
					} else {
						if (rel_time < 14747) {
							w14 = 2;
						} else {
							w14 = 17;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2549) {
							w14 = 1;
						} else {
							w14 = -8;
						}
					} else {
						if (rel_time < 14348) {
							w14 = 5;
						} else {
							w14 = -24;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 10022) {
					if (rel_time < 9045) {
						if (rel_time < 7662) {
							w14 = 1;
						} else {
							w14 = -8;
						}
					} else {
						if (hops < 2) {
							w14 = -14;
						} else {
							w14 = -24;
						}
					}
				} else {
					if (rel_time < 12978) {
						if (rel_time < 10808) {
							w14 = 21;
						} else {
							w14 = 8;
						}
					} else {
						w14 = -3;
					}
				}
			} else {
				if (rel_time < 12978) {
					if (rel_time < 11595) {
						if (rel_time < 10808) {
							w14 = 6;
						} else {
							w14 = -11;
						}
					} else {
						w14 = 24;
					}
				} else {
					if (rel_time < 13954) {
						if (hops < 4) {
							w14 = -13;
						} else {
							w14 = 8;
						}
					} else {
						if (rel_time < 14741) {
							w14 = 11;
						} else {
							w14 = -8;
						}
					}
				}
			}
		}
	}
	int w15;
	if (size < 126) {
		w15 = -1;
	} else {
		if (rel_time < 10808) {
			if (rel_time < 10022) {
				if (rel_time < 9825) {
					if (rel_time < 5112) {
						if (rel_time < 3932) {
							w15 = 2;
						} else {
							w15 = -4;
						}
					} else {
						if (rel_time < 5308) {
							w15 = 11;
						} else {
							w15 = 2;
						}
					}
				} else {
					if (hops < 2) {
						w15 = 6;
					} else {
						if (hops < 4) {
							w15 = -14;
						} else {
							w15 = -39;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (rel_time < 10421) {
						if (hops < 2) {
							w15 = 4;
						} else {
							w15 = 17;
						}
					} else {
						if (rel_time < 10612) {
							w15 = -6;
						} else {
							w15 = 10;
						}
					}
				} else {
					w15 = 1;
				}
			}
		} else {
			if (rel_time < 11994) {
				if (rel_time < 11792) {
					if (rel_time < 11201) {
						if (hops < 4) {
							w15 = -3;
						} else {
							w15 = 24;
						}
					} else {
						if (hops < 3) {
							w15 = -3;
						} else {
							w15 = -11;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11988) {
							w15 = -8;
						} else {
							w15 = 22;
						}
					} else {
						if (rel_time < 11988) {
							w15 = -23;
						} else {
							w15 = -66;
						}
					}
				}
			} else {
				if (rel_time < 12978) {
					if (rel_time < 12972) {
						w15 = 4;
					} else {
						w15 = 19;
					}
				} else {
					if (rel_time < 15524) {
						w15 = 0;
					} else {
						w15 = 8;
					}
				}
			}
		}
	}
	int w16;
	if (size < 126) {
		w16 = -1;
	} else {
		if (cons != 3) {
			if (rel_time < 10421) {
				if (cons != 2) {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 0;
						} else {
							w16 = 3;
						}
					} else {
						if (rel_time < 8645) {
							w16 = 0;
						} else {
							w16 = -7;
						}
					}
				} else {
					if (hops < 4) {
						w16 = 2;
					} else {
						if (rel_time < 8252) {
							w16 = 7;
						} else {
							w16 = 24;
						}
					}
				}
			} else {
				if (rel_time < 12185) {
					if (hops < 3) {
						if (hops < 2) {
							w16 = -4;
						} else {
							w16 = 2;
						}
					} else {
						if (cons != 4) {
							w16 = -13;
						} else {
							w16 = 5;
						}
					}
				} else {
					if (hops < 4) {
						w16 = 1;
					} else {
						if (rel_time < 14354) {
							w16 = 12;
						} else {
							w16 = -2;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 186) {
					if (hops < 2) {
						w16 = 0;
					} else {
						w16 = 12;
					}
				} else {
					if (rel_time < 10022) {
						if (rel_time < 7662) {
							w16 = -1;
						} else {
							w16 = -7;
						}
					} else {
						if (rel_time < 10618) {
							w16 = 43;
						} else {
							w16 = 0;
						}
					}
				}
			} else {
				if (rel_time < 503) {
					if (hops < 4) {
						w16 = -10;
					} else {
						w16 = 8;
					}
				} else {
					if (rel_time < 1369) {
						w16 = 15;
					} else {
						if (rel_time < 2942) {
							w16 = -6;
						} else {
							w16 = 3;
						}
					}
				}
			}
		}
	}
	int w17;
	w17 = 0;
	int w18;
	w18 = 0;
	return (135428 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18) >> 8;
}
