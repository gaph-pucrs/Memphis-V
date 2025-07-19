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
				w0 = 7765;
			} else {
				w0 = 9017;
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w0 = -7260;
					} else {
						w0 = -6552;
					}
				} else {
					if (hops < 4) {
						w0 = -5815;
					} else {
						w0 = -5088;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 11669) {
						if (rel_time < 11085) {
							w0 = -2988;
						} else {
							w0 = -932;
						}
					} else {
						w0 = -4608;
					}
				} else {
					if (rel_time < 11224) {
						if (rel_time < 10636) {
							w0 = -1548;
						} else {
							w0 = 376;
						}
					} else {
						w0 = -3148;
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			w0 = 13072;
		} else {
			w0 = 14430;
		}
	}
	int w1;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 3) {
				w1 = 4833;
			} else {
				w1 = 5892;
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w1 = -4359;
					} else {
						w1 = -3935;
					}
				} else {
					if (hops < 4) {
						w1 = -3493;
					} else {
						w1 = -3060;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1727) {
						w1 = -3663;
					} else {
						if (rel_time < 2312) {
							w1 = -24;
						} else {
							w1 = -2108;
						}
					}
				} else {
					if (rel_time < 1727) {
						w1 = -2825;
					} else {
						if (rel_time < 2312) {
							w1 = 798;
						} else {
							w1 = -1168;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 557) {
				w1 = 6008;
			} else {
				w1 = 7682;
			}
		} else {
			if (rel_time < 557) {
				w1 = 6910;
			} else {
				w1 = 8575;
			}
		}
	}
	int w2;
	if (size < 133) {
		if (rel_time < 1142) {
			if (prod != 0) {
				if (hops < 3) {
					w2 = 2635;
				} else {
					w2 = 3216;
				}
			} else {
				w2 = 3663;
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w2 = -2617;
					} else {
						w2 = -2363;
					}
				} else {
					if (hops < 4) {
						w2 = -2099;
					} else {
						w2 = -1840;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 2897) {
						if (rel_time < 2312) {
							w2 = -1010;
						} else {
							w2 = -2664;
						}
					} else {
						if (rel_time < 3482) {
							w2 = 944;
						} else {
							w2 = -1045;
						}
					}
				} else {
					if (rel_time < 10051) {
						if (rel_time < 9468) {
							w2 = -10;
						} else {
							w2 = 1848;
						}
					} else {
						if (rel_time < 10636) {
							w2 = -1621;
						} else {
							w2 = -58;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 624) {
				w2 = 4044;
			} else {
				if (hops < 2) {
					if (rel_time < 10524) {
						w2 = 4692;
					} else {
						w2 = 3842;
					}
				} else {
					w2 = 5029;
				}
			}
		} else {
			w2 = 5759;
		}
	}
	int w3;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 4) {
				if (prod != 0) {
					w3 = 1631;
				} else {
					w3 = 2085;
				}
			} else {
				w3 = 2659;
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w3 = -1571;
					} else {
						w3 = -1419;
					}
				} else {
					if (hops < 4) {
						w3 = -1261;
					} else {
						w3 = -1107;
					}
				}
			} else {
				if (rel_time < 11669) {
					if (rel_time < 11085) {
						if (rel_time < 10500) {
							w3 = -453;
						} else {
							w3 = -2123;
						}
					} else {
						if (hops < 3) {
							w3 = 483;
						} else {
							w3 = 949;
						}
					}
				} else {
					if (hops < 3) {
						w3 = -1727;
					} else {
						w3 = -1241;
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 624) {
				w3 = 2337;
			} else {
				if (rel_time < 10524) {
					if (rel_time < 9939) {
						if (rel_time < 9354) {
							w3 = 2889;
						} else {
							w3 = 2167;
						}
					} else {
						w3 = 3399;
					}
				} else {
					w3 = 2332;
				}
			}
		} else {
			if (hops < 4) {
				w3 = 3068;
			} else {
				w3 = 3471;
			}
		}
	}
	int w4;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 2) {
				w4 = 919;
			} else {
				if (prod != 0) {
					w4 = 1129;
				} else {
					w4 = 1539;
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w4 = -943;
					} else {
						if (prod != 1) {
							w4 = -885;
						} else {
							w4 = -809;
						}
					}
				} else {
					if (hops < 4) {
						w4 = -757;
					} else {
						if (prod != 1) {
							w4 = -710;
						} else {
							w4 = -621;
						}
					}
				}
			} else {
				if (rel_time < 1727) {
					if (hops < 3) {
						w4 = -1569;
					} else {
						w4 = -1015;
					}
				} else {
					if (rel_time < 2312) {
						if (hops < 2) {
							w4 = 542;
						} else {
							w4 = 981;
						}
					} else {
						if (rel_time < 2897) {
							w4 = -1449;
						} else {
							w4 = -254;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 624) {
				w4 = 1287;
			} else {
				if (rel_time < 1206) {
					w4 = 2141;
				} else {
					if (rel_time < 1790) {
						w4 = 960;
					} else {
						if (rel_time < 2332) {
							w4 = 2181;
						} else {
							w4 = 1635;
						}
					}
				}
			}
		} else {
			if (rel_time < 10563) {
				if (rel_time < 624) {
					w4 = 1554;
				} else {
					if (hops < 4) {
						if (rel_time < 9978) {
							w4 = 1847;
						} else {
							w4 = 2285;
						}
					} else {
						w4 = 2194;
					}
				}
			} else {
				w4 = 1315;
			}
		}
	}
	int w5;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 4) {
				if (prod != 0) {
					if (hops < 2) {
						w5 = 498;
					} else {
						w5 = 631;
					}
				} else {
					w5 = 759;
				}
			} else {
				w5 = 1145;
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w5 = -566;
					} else {
						if (rel_time < 11216) {
							w5 = -518;
						} else {
							w5 = -413;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 4) {
							w5 = -483;
						} else {
							w5 = -428;
						}
					} else {
						if (hops < 4) {
							w5 = -420;
						} else {
							w5 = -374;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 10500) {
						if (rel_time < 9915) {
							w5 = -555;
						} else {
							w5 = 1372;
						}
					} else {
						if (rel_time < 11085) {
							w5 = -1524;
						} else {
							w5 = -464;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1727) {
							w5 = -758;
						} else {
							w5 = -64;
						}
					} else {
						if (rel_time < 11224) {
							w5 = 380;
						} else {
							w5 = -496;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 557) {
				w5 = 682;
			} else {
				if (rel_time < 8767) {
					if (rel_time < 8181) {
						if (rel_time < 7597) {
							w5 = 961;
						} else {
							w5 = 1554;
						}
					} else {
						w5 = 320;
					}
				} else {
					if (rel_time < 9351) {
						w5 = 1562;
					} else {
						if (rel_time < 9939) {
							w5 = 606;
						} else {
							w5 = 1107;
						}
					}
				}
			}
		} else {
			if (rel_time < 10563) {
				if (rel_time < 10524) {
					if (rel_time < 9393) {
						if (rel_time < 8809) {
							w5 = 1118;
						} else {
							w5 = 1639;
						}
					} else {
						if (rel_time < 9978) {
							w5 = 673;
						} else {
							w5 = 1222;
						}
					}
				} else {
					w5 = 1628;
				}
			} else {
				w5 = 802;
			}
		}
	}
	int w6;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 3) {
				if (prod != 0) {
					w6 = 326;
				} else {
					w6 = 401;
				}
			} else {
				if (prod != 0) {
					w6 = 451;
				} else {
					w6 = 776;
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1274) {
							w6 = -286;
						} else {
							w6 = -343;
						}
					} else {
						if (prod != 1) {
							w6 = -328;
						} else {
							w6 = -282;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 2313) {
							w6 = -219;
						} else {
							w6 = -290;
						}
					} else {
						if (hops < 4) {
							w6 = -253;
						} else {
							w6 = -226;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 11669) {
						if (rel_time < 9915) {
							w6 = -281;
						} else {
							w6 = 242;
						}
					} else {
						w6 = -837;
					}
				} else {
					if (rel_time < 11224) {
						if (rel_time < 9468) {
							w6 = 39;
						} else {
							w6 = 632;
						}
					} else {
						if (hops < 4) {
							w6 = -714;
						} else {
							w6 = -317;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 557) {
				w6 = 438;
			} else {
				if (rel_time < 1206) {
					if (rel_time < 624) {
						w6 = 560;
					} else {
						w6 = 1063;
					}
				} else {
					if (rel_time < 1790) {
						if (hops < 2) {
							w6 = 214;
						} else {
							w6 = 89;
						}
					} else {
						if (rel_time < 2333) {
							w6 = 1146;
						} else {
							w6 = 607;
						}
					}
				}
			}
		} else {
			if (rel_time < 624) {
				if (rel_time < 557) {
					w6 = 178;
				} else {
					w6 = 367;
				}
			} else {
				if (rel_time < 1206) {
					w6 = 1275;
				} else {
					if (rel_time < 1790) {
						w6 = 166;
					} else {
						if (rel_time < 5884) {
							w6 = 975;
						} else {
							w6 = 755;
						}
					}
				}
			}
		}
	}
	int w7;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 4) {
				if (hops < 2) {
					if (prod != 1) {
						w7 = 206;
					} else {
						w7 = 159;
					}
				} else {
					if (prod != 0) {
						w7 = 235;
					} else {
						w7 = 299;
					}
				}
			} else {
				if (prod != 0) {
					w7 = 320;
				} else {
					w7 = 646;
				}
			}
		} else {
			if (rel_time < 9398) {
				if (rel_time < 8877) {
					if (rel_time < 8292) {
						if (rel_time < 7707) {
							w7 = -167;
						} else {
							w7 = 474;
						}
					} else {
						if (rel_time < 8745) {
							w7 = -1771;
						} else {
							w7 = -210;
						}
					}
				} else {
					if (rel_time < 9330) {
						w7 = 1828;
					} else {
						if (hops < 3) {
							w7 = -198;
						} else {
							w7 = -119;
						}
					}
				}
			} else {
				if (rel_time < 9915) {
					if (prod != 0) {
						w7 = -221;
					} else {
						w7 = -1790;
					}
				} else {
					if (rel_time < 10500) {
						if (prod != 0) {
							w7 = -201;
						} else {
							w7 = 1292;
						}
					} else {
						if (rel_time < 11085) {
							w7 = -508;
						} else {
							w7 = -129;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 2918) {
				if (rel_time < 2333) {
					if (rel_time < 1790) {
						if (rel_time < 1206) {
							w7 = 401;
						} else {
							w7 = 95;
						}
					} else {
						if (rel_time < 2332) {
							w7 = 523;
						} else {
							w7 = 784;
						}
					}
				} else {
					w7 = -262;
				}
			} else {
				if (rel_time < 3503) {
					w7 = 958;
				} else {
					if (rel_time < 4089) {
						w7 = -255;
					} else {
						if (rel_time < 4674) {
							w7 = 969;
						} else {
							w7 = 336;
						}
					}
				}
			}
		} else {
			if (rel_time < 624) {
				if (rel_time < 557) {
					if (hops < 4) {
						w7 = 222;
					} else {
						w7 = 118;
					}
				} else {
					w7 = 307;
				}
			} else {
				if (rel_time < 1206) {
					w7 = 822;
				} else {
					if (rel_time < 1790) {
						w7 = 93;
					} else {
						if (rel_time < 2375) {
							w7 = 864;
						} else {
							w7 = 447;
						}
					}
				}
			}
		}
	}
	int w8;
	if (size < 133) {
		if (rel_time < 7056) {
			if (rel_time < 6537) {
				if (rel_time < 5952) {
					if (rel_time < 5368) {
						if (rel_time < 4783) {
							w8 = -4;
						} else {
							w8 = -701;
						}
					} else {
						if (rel_time < 5821) {
							w8 = 1926;
						} else {
							w8 = -114;
						}
					}
				} else {
					if (rel_time < 6406) {
						w8 = -1727;
					} else {
						if (rel_time < 6425) {
							w8 = -167;
						} else {
							w8 = -102;
						}
					}
				}
			} else {
				if (rel_time < 6991) {
					w8 = 1915;
				} else {
					if (rel_time < 6994) {
						if (hops < 4) {
							w8 = -126;
						} else {
							w8 = -42;
						}
					} else {
						if (hops < 3) {
							w8 = -63;
						} else {
							w8 = -26;
						}
					}
				}
			}
		} else {
			if (rel_time < 7575) {
				if (rel_time < 7122) {
					if (hops < 2) {
						w8 = -192;
					} else {
						if (hops < 4) {
							w8 = -77;
						} else {
							w8 = -162;
						}
					}
				} else {
					w8 = -1710;
				}
			} else {
				if (rel_time < 8160) {
					if (rel_time < 7707) {
						if (rel_time < 7577) {
							w8 = -183;
						} else {
							w8 = -97;
						}
					} else {
						w8 = 1684;
					}
				} else {
					if (rel_time < 8745) {
						if (rel_time < 8292) {
							w8 = -388;
						} else {
							w8 = -1072;
						}
					} else {
						if (rel_time < 9330) {
							w8 = 286;
						} else {
							w8 = -143;
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
							w8 = 185;
						} else {
							w8 = 644;
						}
					} else {
						if (hops < 3) {
							w8 = -155;
						} else {
							w8 = -286;
						}
					}
				} else {
					if (hops < 3) {
						w8 = 589;
					} else {
						w8 = 870;
					}
				}
			} else {
				w8 = -372;
			}
		} else {
			if (rel_time < 5884) {
				w8 = 834;
			} else {
				if (rel_time < 6469) {
					if (rel_time < 6428) {
						w8 = -383;
					} else {
						w8 = -214;
					}
				} else {
					if (rel_time < 7054) {
						w8 = 847;
					} else {
						if (rel_time < 7639) {
							w8 = -376;
						} else {
							w8 = 288;
						}
					}
				}
			}
		}
	}
	int w9;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 4) {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w9 = 105;
						} else {
							w9 = 134;
						}
					} else {
						w9 = 148;
					}
				} else {
					if (prod != 0) {
						w9 = 155;
					} else {
						w9 = 225;
					}
				}
			} else {
				if (prod != 0) {
					w9 = 203;
				} else {
					w9 = 415;
				}
			}
		} else {
			if (rel_time < 4198) {
				if (rel_time < 3613) {
					if (rel_time < 3028) {
						if (rel_time < 2376) {
							w9 = -53;
						} else {
							w9 = -277;
						}
					} else {
						if (rel_time < 3482) {
							w9 = 1202;
						} else {
							w9 = -101;
						}
					}
				} else {
					if (rel_time < 4066) {
						w9 = -1731;
					} else {
						if (rel_time < 4067) {
							w9 = -195;
						} else {
							w9 = -110;
						}
					}
				}
			} else {
				if (rel_time < 4651) {
					w9 = 1925;
				} else {
					if (rel_time < 5236) {
						if (rel_time < 4783) {
							w9 = -109;
						} else {
							w9 = -1427;
						}
					} else {
						if (rel_time < 5821) {
							w9 = 493;
						} else {
							w9 = -76;
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
							w9 = 163;
						} else {
							w9 = -366;
						}
					} else {
						w9 = 490;
					}
				} else {
					if (rel_time < 9939) {
						if (hops < 2) {
							w9 = -107;
						} else {
							w9 = -43;
						}
					} else {
						w9 = -155;
					}
				}
			} else {
				w9 = 423;
			}
		} else {
			if (hops < 2) {
				w9 = -94;
			} else {
				if (rel_time < 11109) {
					w9 = 24;
				} else {
					if (hops < 4) {
						w9 = -101;
					} else {
						w9 = 41;
					}
				}
			}
		}
	}
	int w10;
	if (size < 133) {
		if (hops < 2) {
			if (rel_time < 11801) {
				if (rel_time < 11216) {
					if (rel_time < 10631) {
						if (rel_time < 10046) {
							w10 = -87;
						} else {
							w10 = 157;
						}
					} else {
						if (prod != 0) {
							w10 = -60;
						} else {
							w10 = -748;
						}
					}
				} else {
					if (rel_time < 11669) {
						w10 = 467;
					} else {
						if (rel_time < 11672) {
							w10 = -26;
						} else {
							w10 = -90;
						}
					}
				}
			} else {
				w10 = -449;
			}
		} else {
			if (prod != 0) {
				if (rel_time < 696) {
					if (hops < 4) {
						w10 = 88;
					} else {
						if (rel_time < 577) {
							w10 = 165;
						} else {
							w10 = 57;
						}
					}
				} else {
					if (rel_time < 9332) {
						if (rel_time < 7707) {
							w10 = -39;
						} else {
							w10 = -182;
						}
					} else {
						if (rel_time < 11085) {
							w10 = 31;
						} else {
							w10 = -23;
						}
					}
				}
			} else {
				if (rel_time < 10500) {
					if (rel_time < 9915) {
						if (rel_time < 9330) {
							w10 = 139;
						} else {
							w10 = -917;
						}
					} else {
						if (hops < 4) {
							w10 = 1246;
						} else {
							w10 = 674;
						}
					}
				} else {
					if (rel_time < 11085) {
						if (hops < 4) {
							w10 = -971;
						} else {
							w10 = -284;
						}
					} else {
						if (rel_time < 11669) {
							w10 = 574;
						} else {
							w10 = -250;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 7639) {
			if (rel_time < 7054) {
				if (rel_time < 6469) {
					if (rel_time < 5884) {
						if (rel_time < 5299) {
							w10 = 50;
						} else {
							w10 = 440;
						}
					} else {
						if (rel_time < 6428) {
							w10 = -297;
						} else {
							w10 = -195;
						}
					}
				} else {
					w10 = 449;
				}
			} else {
				if (hops < 3) {
					w10 = -330;
				} else {
					w10 = -185;
				}
			}
		} else {
			if (rel_time < 8224) {
				if (rel_time < 8181) {
					w10 = 408;
				} else {
					w10 = 673;
				}
			} else {
				if (rel_time < 8809) {
					if (hops < 2) {
						w10 = -140;
					} else {
						if (hops < 4) {
							w10 = -307;
						} else {
							w10 = -127;
						}
					}
				} else {
					if (rel_time < 9393) {
						w10 = 297;
					} else {
						if (rel_time < 9978) {
							w10 = -67;
						} else {
							w10 = 114;
						}
					}
				}
			}
		}
	}
	int w11;
	if (size < 133) {
		if (hops < 3) {
			if (rel_time < 1142) {
				if (hops < 2) {
					w11 = 105;
				} else {
					if (rel_time < 696) {
						w11 = 53;
					} else {
						w11 = 28;
					}
				}
			} else {
				if (rel_time < 1859) {
					if (prod != 0) {
						if (rel_time < 1274) {
							w11 = -39;
						} else {
							w11 = -104;
						}
					} else {
						if (hops < 2) {
							w11 = -634;
						} else {
							w11 = -327;
						}
					}
				} else {
					if (rel_time < 2312) {
						w11 = 705;
					} else {
						if (rel_time < 2897) {
							w11 = -206;
						} else {
							w11 = -34;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 9983) {
					if (rel_time < 7581) {
						if (rel_time < 1143) {
							w11 = 61;
						} else {
							w11 = -11;
						}
					} else {
						if (rel_time < 8813) {
							w11 = -110;
						} else {
							w11 = -7;
						}
					}
				} else {
					if (rel_time < 10570) {
						if (rel_time < 10505) {
							w11 = 70;
						} else {
							w11 = 125;
						}
					} else {
						if (rel_time < 11672) {
							w11 = -17;
						} else {
							w11 = 21;
						}
					}
				}
			} else {
				if (rel_time < 3615) {
					if (rel_time < 3030) {
						if (rel_time < 2897) {
							w11 = -68;
						} else {
							w11 = 934;
						}
					} else {
						w11 = -921;
					}
				} else {
					if (rel_time < 4200) {
						w11 = 1189;
					} else {
						if (rel_time < 4785) {
							w11 = -775;
						} else {
							w11 = 153;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10563) {
			if (rel_time < 9978) {
				if (rel_time < 2375) {
					if (rel_time < 2332) {
						if (rel_time < 624) {
							w11 = -6;
						} else {
							w11 = 110;
						}
					} else {
						w11 = 365;
					}
				} else {
					if (rel_time < 2960) {
						if (rel_time < 2918) {
							w11 = -315;
						} else {
							w11 = -455;
						}
					} else {
						if (rel_time < 3545) {
							w11 = 306;
						} else {
							w11 = 39;
						}
					}
				}
			} else {
				if (rel_time < 10524) {
					if (hops < 2) {
						w11 = 237;
					} else {
						w11 = 84;
					}
				} else {
					w11 = 276;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					w11 = -101;
				} else {
					if (rel_time < 11109) {
						w11 = -28;
					} else {
						w11 = -106;
					}
				}
			} else {
				w11 = -12;
			}
		}
	}
	int w12;
	if (rel_time < 11801) {
		if (rel_time < 8877) {
			if (rel_time < 8292) {
				if (rel_time < 7707) {
					if (rel_time < 7122) {
						if (rel_time < 6537) {
							w12 = -16;
						} else {
							w12 = 348;
						}
					} else {
						if (rel_time < 7575) {
							w12 = -1038;
						} else {
							w12 = -62;
						}
					}
				} else {
					if (rel_time < 8160) {
						w12 = 1015;
					} else {
						if (size < 133) {
							w12 = -124;
						} else {
							w12 = 326;
						}
					}
				}
			} else {
				if (rel_time < 8745) {
					w12 = -655;
				} else {
					if (hops < 3) {
						if (rel_time < 8765) {
							w12 = -183;
						} else {
							w12 = -136;
						}
					} else {
						if (size < 133) {
							w12 = -83;
						} else {
							w12 = -149;
						}
					}
				}
			}
		} else {
			if (rel_time < 9330) {
				w12 = 996;
			} else {
				if (rel_time < 9917) {
					if (prod != 0) {
						if (size < 133) {
							w12 = -5;
						} else {
							w12 = 164;
						}
					} else {
						if (hops < 2) {
							w12 = -1046;
						} else {
							w12 = -581;
						}
					}
				} else {
					if (rel_time < 10570) {
						if (prod != 0) {
							w12 = 34;
						} else {
							w12 = 545;
						}
					} else {
						if (rel_time < 11085) {
							w12 = -423;
						} else {
							w12 = 37;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			w12 = -235;
		} else {
			w12 = -43;
		}
	}
	int w13;
	if (rel_time < 4716) {
		if (rel_time < 4198) {
			if (rel_time < 3613) {
				if (rel_time < 3028) {
					if (rel_time < 2444) {
						if (rel_time < 1859) {
							w13 = -14;
						} else {
							w13 = 176;
						}
					} else {
						if (rel_time < 2897) {
							w13 = -493;
						} else {
							w13 = -44;
						}
					}
				} else {
					if (rel_time < 3482) {
						if (hops < 4) {
							w13 = 546;
						} else {
							w13 = 1104;
						}
					} else {
						if (size < 133) {
							w13 = -20;
						} else {
							w13 = 192;
						}
					}
				}
			} else {
				if (rel_time < 4066) {
					if (hops < 3) {
						w13 = -1094;
					} else {
						w13 = -563;
					}
				} else {
					if (size < 133) {
						if (rel_time < 4067) {
							w13 = -78;
						} else {
							w13 = -27;
						}
					} else {
						if (hops < 3) {
							w13 = -187;
						} else {
							w13 = -267;
						}
					}
				}
			}
		} else {
			if (rel_time < 4651) {
				if (hops < 3) {
					w13 = 1117;
				} else {
					w13 = 739;
				}
			} else {
				if (size < 133) {
					if (hops < 4) {
						if (hops < 2) {
							w13 = -3;
						} else {
							w13 = -50;
						}
					} else {
						if (rel_time < 4671) {
							w13 = -9;
						} else {
							w13 = 90;
						}
					}
				} else {
					if (hops < 3) {
						w13 = 265;
					} else {
						w13 = 446;
					}
				}
			}
		}
	} else {
		if (rel_time < 5236) {
			if (rel_time < 4783) {
				if (hops < 2) {
					w13 = -54;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w13 = -8;
						} else {
							w13 = 46;
						}
					} else {
						w13 = -54;
					}
				}
			} else {
				if (hops < 3) {
					w13 = -904;
				} else {
					w13 = -472;
				}
			}
		} else {
			if (rel_time < 5884) {
				if (prod != 0) {
					if (rel_time < 5840) {
						if (size < 133) {
							w13 = -1;
						} else {
							w13 = -319;
						}
					} else {
						w13 = 257;
					}
				} else {
					w13 = 940;
				}
			} else {
				if (rel_time < 6406) {
					if (rel_time < 5952) {
						if (hops < 2) {
							w13 = -17;
						} else {
							w13 = 31;
						}
					} else {
						w13 = -1037;
					}
				} else {
					if (rel_time < 6991) {
						if (rel_time < 6537) {
							w13 = -70;
						} else {
							w13 = 1024;
						}
					} else {
						if (rel_time < 7575) {
							w13 = -207;
						} else {
							w13 = 8;
						}
					}
				}
			}
		}
	}
	int w14;
	if (rel_time < 1206) {
		if (rel_time < 1162) {
			if (prod != 0) {
				if (rel_time < 557) {
					if (hops < 2) {
						w14 = -52;
					} else {
						if (hops < 4) {
							w14 = 12;
						} else {
							w14 = -42;
						}
					}
				} else {
					if (rel_time < 696) {
						if (hops < 2) {
							w14 = 37;
						} else {
							w14 = 64;
						}
					} else {
						if (rel_time < 1143) {
							w14 = 13;
						} else {
							w14 = -43;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 87;
						} else {
							w14 = 41;
						}
					} else {
						w14 = 125;
					}
				} else {
					w14 = 251;
				}
			}
		} else {
			if (hops < 2) {
				w14 = 181;
			} else {
				w14 = 355;
			}
		}
	} else {
		if (rel_time < 1790) {
			if (prod != 0) {
				if (rel_time < 1747) {
					if (rel_time < 1274) {
						if (hops < 4) {
							w14 = -13;
						} else {
							w14 = -52;
						}
					} else {
						if (hops < 3) {
							w14 = -42;
						} else {
							w14 = -72;
						}
					}
				} else {
					if (hops < 2) {
						w14 = -101;
					} else {
						if (hops < 3) {
							w14 = -188;
						} else {
							w14 = -126;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w14 = -378;
					} else {
						w14 = -190;
					}
				} else {
					w14 = -413;
				}
			}
		} else {
			if (rel_time < 2312) {
				if (rel_time < 1859) {
					if (rel_time < 1791) {
						if (hops < 2) {
							w14 = -51;
						} else {
							w14 = 55;
						}
					} else {
						if (hops < 4) {
							w14 = -67;
						} else {
							w14 = -21;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 443;
						} else {
							w14 = 281;
						}
					} else {
						w14 = 653;
					}
				}
			} else {
				if (rel_time < 2960) {
					if (prod != 0) {
						if (rel_time < 2916) {
							w14 = 31;
						} else {
							w14 = -199;
						}
					} else {
						if (hops < 4) {
							w14 = -282;
						} else {
							w14 = -803;
						}
					}
				} else {
					if (rel_time < 3482) {
						if (rel_time < 3028) {
							w14 = 68;
						} else {
							w14 = 375;
						}
					} else {
						if (rel_time < 4130) {
							w14 = -111;
						} else {
							w14 = 5;
						}
					}
				}
			}
		}
	}
	int w15;
	if (hops < 4) {
		if (rel_time < 4674) {
			if (rel_time < 4198) {
				if (rel_time < 3613) {
					if (rel_time < 2962) {
						if (rel_time < 1206) {
							w15 = 39;
						} else {
							w15 = -27;
						}
					} else {
						if (prod != 0) {
							w15 = 65;
						} else {
							w15 = 183;
						}
					}
				} else {
					if (rel_time < 4066) {
						if (hops < 3) {
							w15 = -622;
						} else {
							w15 = -332;
						}
					} else {
						if (size < 133) {
							w15 = 0;
						} else {
							w15 = -76;
						}
					}
				}
			} else {
				if (rel_time < 4651) {
					if (hops < 3) {
						w15 = 677;
					} else {
						w15 = 404;
					}
				} else {
					if (rel_time < 4671) {
						if (rel_time < 4652) {
							w15 = -2;
						} else {
							w15 = -42;
						}
					} else {
						if (hops < 3) {
							w15 = 159;
						} else {
							w15 = 313;
						}
					}
				}
			}
		} else {
			if (rel_time < 5299) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 4783) {
							w15 = -15;
						} else {
							w15 = -50;
						}
					} else {
						if (rel_time < 5257) {
							w15 = -234;
						} else {
							w15 = -164;
						}
					}
				} else {
					if (hops < 3) {
						w15 = -551;
					} else {
						w15 = -299;
					}
				}
			} else {
				if (rel_time < 5821) {
					if (rel_time < 5368) {
						if (rel_time < 5301) {
							w15 = 66;
						} else {
							w15 = 10;
						}
					} else {
						w15 = 554;
					}
				} else {
					if (rel_time < 6469) {
						if (prod != 0) {
							w15 = -4;
						} else {
							w15 = -634;
						}
					} else {
						if (rel_time < 6991) {
							w15 = 332;
						} else {
							w15 = -19;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 133) {
				if (rel_time < 1162) {
					if (prod != 1) {
						w15 = 66;
					} else {
						w15 = 6;
					}
				} else {
					if (rel_time < 2376) {
						if (rel_time < 2313) {
							w15 = -15;
						} else {
							w15 = -103;
						}
					} else {
						if (rel_time < 6407) {
							w15 = 36;
						} else {
							w15 = 0;
						}
					}
				}
			} else {
				if (rel_time < 624) {
					w15 = -28;
				} else {
					if (rel_time < 1206) {
						w15 = 220;
					} else {
						if (rel_time < 9393) {
							w15 = 85;
						} else {
							w15 = 2;
						}
					}
				}
			}
		} else {
			if (rel_time < 2897) {
				if (rel_time < 2312) {
					if (rel_time < 1727) {
						if (rel_time < 1142) {
							w15 = 160;
						} else {
							w15 = -297;
						}
					} else {
						w15 = 465;
					}
				} else {
					w15 = -517;
				}
			} else {
				if (rel_time < 3030) {
					w15 = 586;
				} else {
					if (rel_time < 3614) {
						w15 = -180;
					} else {
						if (rel_time < 4200) {
							w15 = 483;
						} else {
							w15 = 85;
						}
					}
				}
			}
		}
	}
	int w16;
	if (rel_time < 11801) {
		if (rel_time < 11216) {
			if (rel_time < 10631) {
				if (rel_time < 10046) {
					if (rel_time < 9462) {
						if (rel_time < 8877) {
							w16 = -6;
						} else {
							w16 = 178;
						}
					} else {
						if (rel_time < 9915) {
							w16 = -474;
						} else {
							w16 = -39;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w16 = 52;
						} else {
							w16 = 118;
						}
					} else {
						if (hops < 2) {
							w16 = 79;
						} else {
							w16 = 459;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11085) {
						w16 = 181;
					} else {
						if (rel_time < 11148) {
							w16 = -67;
						} else {
							w16 = -20;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w16 = -280;
						} else {
							w16 = -440;
						}
					} else {
						w16 = -120;
					}
				}
			}
		} else {
			if (rel_time < 11669) {
				if (hops < 3) {
					w16 = 334;
				} else {
					w16 = 234;
				}
			} else {
				if (rel_time < 11675) {
					if (hops < 2) {
						if (rel_time < 11672) {
							w16 = -15;
						} else {
							w16 = -49;
						}
					} else {
						if (hops < 3) {
							w16 = 110;
						} else {
							w16 = -12;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11738) {
							w16 = -101;
						} else {
							w16 = -11;
						}
					} else {
						if (rel_time < 11735) {
							w16 = 14;
						} else {
							w16 = -38;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			w16 = -169;
		} else {
			if (hops < 3) {
				w16 = -58;
			} else {
				if (hops < 4) {
					w16 = -191;
				} else {
					w16 = -63;
				}
			}
		}
	}
	int w17;
	if (rel_time < 8224) {
		if (rel_time < 7707) {
			if (rel_time < 7059) {
				if (rel_time < 6537) {
					if (rel_time < 5952) {
						if (rel_time < 5368) {
							w17 = 0;
						} else {
							w17 = 127;
						}
					} else {
						if (rel_time < 6406) {
							w17 = -408;
						} else {
							w17 = -80;
						}
					}
				} else {
					if (rel_time < 6991) {
						if (hops < 4) {
							w17 = 471;
						} else {
							w17 = 653;
						}
					} else {
						if (size < 133) {
							w17 = -42;
						} else {
							w17 = 205;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 7577) {
							w17 = -36;
						} else {
							w17 = 43;
						}
					} else {
						if (hops < 3) {
							w17 = -187;
						} else {
							w17 = -118;
						}
					}
				} else {
					w17 = -543;
				}
			}
		} else {
			if (rel_time < 8160) {
				w17 = 614;
			} else {
				if (size < 133) {
					if (hops < 2) {
						w17 = -128;
					} else {
						if (rel_time < 8166) {
							w17 = -66;
						} else {
							w17 = 21;
						}
					}
				} else {
					if (rel_time < 8181) {
						w17 = 112;
					} else {
						w17 = 265;
					}
				}
			}
		}
	} else {
		if (rel_time < 8747) {
			if (prod != 0) {
				if (hops < 2) {
					if (rel_time < 8227) {
						w17 = -169;
					} else {
						if (rel_time < 8292) {
							w17 = -52;
						} else {
							w17 = -157;
						}
					}
				} else {
					if (rel_time < 8292) {
						if (rel_time < 8225) {
							w17 = 9;
						} else {
							w17 = -16;
						}
					} else {
						w17 = -74;
					}
				}
			} else {
				w17 = -397;
			}
		} else {
			if (rel_time < 9330) {
				if (rel_time < 8877) {
					if (size < 133) {
						if (rel_time < 8813) {
							w17 = -54;
						} else {
							w17 = -97;
						}
					} else {
						if (hops < 2) {
							w17 = -42;
						} else {
							w17 = -135;
						}
					}
				} else {
					w17 = 531;
				}
			} else {
				if (rel_time < 9917) {
					if (prod != 0) {
						if (size < 133) {
							w17 = -57;
						} else {
							w17 = 27;
						}
					} else {
						if (hops < 2) {
							w17 = -456;
						} else {
							w17 = -187;
						}
					}
				} else {
					if (rel_time < 10631) {
						if (prod != 0) {
							w17 = 16;
						} else {
							w17 = 199;
						}
					} else {
						if (rel_time < 11085) {
							w17 = -183;
						} else {
							w17 = 0;
						}
					}
				}
			}
		}
	}
	int w18;
	if (rel_time < 4716) {
		if (rel_time < 4198) {
			if (rel_time < 3613) {
				if (rel_time < 2960) {
					if (rel_time < 2375) {
						if (rel_time < 1859) {
							w18 = -8;
						} else {
							w18 = 125;
						}
					} else {
						if (prod != 0) {
							w18 = -28;
						} else {
							w18 = -181;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w18 = 22;
						} else {
							w18 = 136;
						}
					} else {
						if (hops < 4) {
							w18 = 113;
						} else {
							w18 = 383;
						}
					}
				}
			} else {
				if (rel_time < 4066) {
					if (hops < 3) {
						w18 = -376;
					} else {
						w18 = -191;
					}
				} else {
					if (size < 133) {
						if (rel_time < 4069) {
							w18 = 22;
						} else {
							w18 = -16;
						}
					} else {
						if (rel_time < 4089) {
							w18 = -44;
						} else {
							w18 = -197;
						}
					}
				}
			}
		} else {
			if (rel_time < 4651) {
				if (hops < 3) {
					w18 = 414;
				} else {
					w18 = 289;
				}
			} else {
				if (size < 133) {
					if (rel_time < 4715) {
						if (rel_time < 4652) {
							w18 = -3;
						} else {
							w18 = -23;
						}
					} else {
						if (hops < 2) {
							w18 = 55;
						} else {
							w18 = -10;
						}
					}
				} else {
					if (hops < 3) {
						w18 = 99;
					} else {
						w18 = 186;
					}
				}
			}
		}
	} else {
		if (rel_time < 5236) {
			if (rel_time < 4783) {
				if (hops < 2) {
					w18 = -28;
				} else {
					if (hops < 4) {
						w18 = 10;
					} else {
						w18 = -48;
					}
				}
			} else {
				if (hops < 3) {
					w18 = -333;
				} else {
					w18 = -234;
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 5299) {
					if (size < 133) {
						if (hops < 4) {
							w18 = -28;
						} else {
							w18 = 38;
						}
					} else {
						if (rel_time < 5257) {
							w18 = -141;
						} else {
							w18 = -102;
						}
					}
				} else {
					if (rel_time < 5884) {
						if (rel_time < 5840) {
							w18 = -14;
						} else {
							w18 = 104;
						}
					} else {
						if (rel_time < 6994) {
							w18 = -47;
						} else {
							w18 = -7;
						}
					}
				}
			} else {
				if (rel_time < 5821) {
					if (hops < 4) {
						w18 = 289;
					} else {
						w18 = 530;
					}
				} else {
					if (rel_time < 6406) {
						if (hops < 4) {
							w18 = -221;
						} else {
							w18 = -413;
						}
					} else {
						if (rel_time < 6991) {
							w18 = 306;
						} else {
							w18 = -2;
						}
					}
				}
			}
		}
	}
	int w19;
	if (rel_time < 1206) {
		if (rel_time < 1162) {
			if (prod != 0) {
				if (rel_time < 557) {
					if (hops < 2) {
						w19 = -41;
					} else {
						if (hops < 3) {
							w19 = 8;
						} else {
							w19 = -14;
						}
					}
				} else {
					if (rel_time < 696) {
						if (hops < 2) {
							w19 = 12;
						} else {
							w19 = 30;
						}
					} else {
						if (rel_time < 1143) {
							w19 = -3;
						} else {
							w19 = -37;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w19 = 44;
					} else {
						w19 = 16;
					}
				} else {
					w19 = 88;
				}
			}
		} else {
			if (hops < 2) {
				w19 = 101;
			} else {
				if (hops < 3) {
					w19 = 234;
				} else {
					w19 = 150;
				}
			}
		}
	} else {
		if (rel_time < 1790) {
			if (prod != 0) {
				if (rel_time < 1747) {
					if (hops < 2) {
						if (rel_time < 1274) {
							w19 = -10;
						} else {
							w19 = -28;
						}
					} else {
						if (hops < 3) {
							w19 = 21;
						} else {
							w19 = -8;
						}
					}
				} else {
					if (hops < 2) {
						w19 = -46;
					} else {
						w19 = -89;
					}
				}
			} else {
				if (hops < 2) {
					w19 = -216;
				} else {
					if (hops < 3) {
						w19 = -102;
					} else {
						w19 = -208;
					}
				}
			}
		} else {
			if (rel_time < 2312) {
				if (rel_time < 1859) {
					if (rel_time < 1791) {
						if (hops < 2) {
							w19 = -19;
						} else {
							w19 = 49;
						}
					} else {
						w19 = -22;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w19 = 239;
						} else {
							w19 = 138;
						}
					} else {
						w19 = 296;
					}
				}
			} else {
				if (rel_time < 11801) {
					if (rel_time < 11216) {
						if (rel_time < 10631) {
							w19 = -1;
						} else {
							w19 = -52;
						}
					} else {
						if (rel_time < 11669) {
							w19 = 187;
						} else {
							w19 = -7;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11804) {
							w19 = -122;
						} else {
							w19 = -75;
						}
					} else {
						if (hops < 3) {
							w19 = -35;
						} else {
							w19 = -91;
						}
					}
				}
			}
		}
	}
	int w20;
	if (hops < 2) {
		if (rel_time < 4716) {
			if (rel_time < 4198) {
				if (rel_time < 3613) {
					if (rel_time < 2917) {
						if (rel_time < 2916) {
							w20 = -4;
						} else {
							w20 = -69;
						}
					} else {
						if (prod != 0) {
							w20 = 2;
						} else {
							w20 = 149;
						}
					}
				} else {
					if (rel_time < 4066) {
						w20 = -257;
					} else {
						if (rel_time < 4069) {
							w20 = 24;
						} else {
							w20 = -16;
						}
					}
				}
			} else {
				if (rel_time < 4651) {
					w20 = 233;
				} else {
					if (size < 133) {
						if (rel_time < 4652) {
							w20 = 38;
						} else {
							w20 = -9;
						}
					} else {
						w20 = 49;
					}
				}
			}
		} else {
			if (rel_time < 5236) {
				if (rel_time < 4783) {
					w20 = -17;
				} else {
					w20 = -217;
				}
			} else {
				if (rel_time < 5842) {
					if (prod != 0) {
						if (rel_time < 5840) {
							w20 = -30;
						} else {
							w20 = 66;
						}
					} else {
						w20 = 189;
					}
				} else {
					if (rel_time < 7597) {
						if (rel_time < 7059) {
							w20 = -14;
						} else {
							w20 = -163;
						}
					} else {
						if (rel_time < 8160) {
							w20 = 176;
						} else {
							w20 = -19;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 7639) {
			if (rel_time < 7059) {
				if (rel_time < 6472) {
					if (rel_time < 5887) {
						if (rel_time < 5301) {
							w20 = 2;
						} else {
							w20 = 58;
						}
					} else {
						if (prod != 2) {
							w20 = -93;
						} else {
							w20 = 64;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w20 = -16;
						} else {
							w20 = 140;
						}
					} else {
						if (hops < 4) {
							w20 = 169;
						} else {
							w20 = 312;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (prod != 2) {
						w20 = -82;
					} else {
						if (hops < 3) {
							w20 = -14;
						} else {
							w20 = 30;
						}
					}
				} else {
					if (hops < 4) {
						w20 = -311;
					} else {
						w20 = -199;
					}
				}
			}
		} else {
			if (rel_time < 8160) {
				if (rel_time < 7707) {
					if (rel_time < 7641) {
						w20 = 39;
					} else {
						w20 = -8;
					}
				} else {
					w20 = 387;
				}
			} else {
				if (rel_time < 8877) {
					if (prod != 0) {
						if (rel_time < 8224) {
							w20 = 63;
						} else {
							w20 = -34;
						}
					} else {
						w20 = -209;
					}
				} else {
					if (rel_time < 9330) {
						w20 = 315;
					} else {
						if (rel_time < 10046) {
							w20 = -41;
						} else {
							w20 = 28;
						}
					}
				}
			}
		}
	}
	int w21;
	if (rel_time < 11675) {
		if (rel_time < 11216) {
			if (rel_time < 10631) {
				if (rel_time < 10047) {
					if (rel_time < 9395) {
						if (rel_time < 8877) {
							w21 = -3;
						} else {
							w21 = 80;
						}
					} else {
						if (prod != 0) {
							w21 = -15;
						} else {
							w21 = -142;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 10505) {
							w21 = -6;
						} else {
							w21 = 54;
						}
					} else {
						if (hops < 2) {
							w21 = -20;
						} else {
							w21 = 237;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11085) {
						w21 = 204;
					} else {
						if (rel_time < 11087) {
							w21 = -55;
						} else {
							w21 = -5;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w21 = -73;
						} else {
							w21 = -187;
						}
					} else {
						w21 = -2;
					}
				}
			}
		} else {
			if (rel_time < 11669) {
				if (hops < 3) {
					if (hops < 2) {
						w21 = 96;
					} else {
						w21 = 154;
					}
				} else {
					if (hops < 4) {
						w21 = 22;
					} else {
						w21 = 128;
					}
				}
			} else {
				if (hops < 2) {
					w21 = -8;
				} else {
					if (hops < 3) {
						w21 = 63;
					} else {
						if (hops < 4) {
							w21 = -38;
						} else {
							w21 = 26;
						}
					}
				}
			}
		}
	} else {
		if (prod != 1) {
			if (hops < 4) {
				if (hops < 3) {
					if (rel_time < 11809) {
						if (rel_time < 11804) {
							w21 = -59;
						} else {
							w21 = -23;
						}
					} else {
						w21 = -96;
					}
				} else {
					w21 = -89;
				}
			} else {
				w21 = 5;
			}
		} else {
			if (rel_time < 11738) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11735) {
							w21 = -36;
						} else {
							w21 = 28;
						}
					} else {
						w21 = -81;
					}
				} else {
					if (rel_time < 11735) {
						w21 = 13;
					} else {
						w21 = -29;
					}
				}
			} else {
				w21 = 2;
			}
		}
	}
	int w22;
	if (rel_time < 1206) {
		if (rel_time < 1162) {
			if (prod != 0) {
				if (rel_time < 557) {
					if (hops < 2) {
						w22 = -22;
					} else {
						w22 = -2;
					}
				} else {
					if (rel_time < 696) {
						if (size < 133) {
							w22 = 19;
						} else {
							w22 = 7;
						}
					} else {
						if (hops < 2) {
							w22 = -23;
						} else {
							w22 = 6;
						}
					}
				}
			} else {
				if (hops < 4) {
					w22 = 25;
				} else {
					w22 = 76;
				}
			}
		} else {
			if (hops < 2) {
				w22 = 65;
			} else {
				if (hops < 3) {
					w22 = 146;
				} else {
					w22 = 93;
				}
			}
		}
	} else {
		if (rel_time < 1790) {
			if (prod != 0) {
				if (rel_time < 1747) {
					if (rel_time < 1274) {
						if (hops < 4) {
							w22 = 10;
						} else {
							w22 = -20;
						}
					} else {
						if (rel_time < 1728) {
							w22 = -20;
						} else {
							w22 = 7;
						}
					}
				} else {
					if (hops < 2) {
						w22 = -26;
					} else {
						w22 = -54;
					}
				}
			} else {
				if (hops < 2) {
					w22 = -130;
				} else {
					if (hops < 3) {
						w22 = -63;
					} else {
						w22 = -128;
					}
				}
			}
		} else {
			if (rel_time < 2312) {
				if (rel_time < 1859) {
					if (rel_time < 1791) {
						if (hops < 2) {
							w22 = -10;
						} else {
							w22 = 32;
						}
					} else {
						w22 = -12;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w22 = 151;
						} else {
							w22 = 86;
						}
					} else {
						w22 = 183;
					}
				}
			} else {
				if (rel_time < 2331) {
					if (hops < 2) {
						if (rel_time < 2313) {
							w22 = 6;
						} else {
							w22 = -82;
						}
					} else {
						if (rel_time < 2313) {
							w22 = -85;
						} else {
							w22 = -128;
						}
					}
				} else {
					if (rel_time < 2375) {
						if (rel_time < 2332) {
							w22 = 18;
						} else {
							w22 = 104;
						}
					} else {
						if (rel_time < 2897) {
							w22 = -59;
						} else {
							w22 = 0;
						}
					}
				}
			}
		}
	}
	int w23;
	if (rel_time < 4716) {
		if (rel_time < 4198) {
			if (rel_time < 3613) {
				if (rel_time < 2960) {
					if (rel_time < 2918) {
						if (rel_time < 1274) {
							w23 = 12;
						} else {
							w23 = -7;
						}
					} else {
						w23 = -174;
					}
				} else {
					if (hops < 4) {
						if (prod != 2) {
							w23 = 38;
						} else {
							w23 = -14;
						}
					} else {
						if (prod != 1) {
							w23 = 185;
						} else {
							w23 = 24;
						}
					}
				}
			} else {
				if (rel_time < 4066) {
					if (hops < 4) {
						w23 = -166;
					} else {
						w23 = -54;
					}
				} else {
					if (size < 133) {
						if (hops < 3) {
							w23 = -5;
						} else {
							w23 = 14;
						}
					} else {
						if (rel_time < 4089) {
							w23 = -23;
						} else {
							w23 = -128;
						}
					}
				}
			}
		} else {
			if (rel_time < 4651) {
				if (hops < 2) {
					if (rel_time < 4199) {
						w23 = 174;
					} else {
						w23 = 113;
					}
				} else {
					if (rel_time < 4199) {
						if (hops < 3) {
							w23 = 226;
						} else {
							w23 = 139;
						}
					} else {
						w23 = 273;
					}
				}
			} else {
				if (size < 133) {
					if (rel_time < 4715) {
						w23 = -10;
					} else {
						if (hops < 2) {
							w23 = 40;
						} else {
							w23 = -6;
						}
					}
				} else {
					if (rel_time < 4672) {
						w23 = 31;
					} else {
						w23 = 103;
					}
				}
			}
		}
	} else {
		if (rel_time < 5236) {
			if (rel_time < 4783) {
				if (rel_time < 4718) {
					w23 = -12;
				} else {
					w23 = 24;
				}
			} else {
				w23 = -157;
			}
		} else {
			if (rel_time < 5821) {
				if (rel_time < 5368) {
					if (size < 133) {
						if (rel_time < 5256) {
							w23 = -8;
						} else {
							w23 = 32;
						}
					} else {
						w23 = -68;
					}
				} else {
					if (hops < 4) {
						w23 = 135;
					} else {
						w23 = 330;
					}
				}
			} else {
				if (rel_time < 6469) {
					if (prod != 0) {
						if (rel_time < 6425) {
							w23 = -1;
						} else {
							w23 = -75;
						}
					} else {
						if (hops < 4) {
							w23 = -110;
						} else {
							w23 = -232;
						}
					}
				} else {
					if (rel_time < 7054) {
						if (prod != 0) {
							w23 = 24;
						} else {
							w23 = 143;
						}
					} else {
						if (rel_time < 7575) {
							w23 = -120;
						} else {
							w23 = 3;
						}
					}
				}
			}
		}
	}
	int w24;
	if (rel_time < 8224) {
		if (rel_time < 7707) {
			if (rel_time < 7122) {
				if (rel_time < 6537) {
					if (rel_time < 5884) {
						if (rel_time < 5299) {
							w24 = 0;
						} else {
							w24 = 25;
						}
					} else {
						if (prod != 2) {
							w24 = -45;
						} else {
							w24 = 37;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 7056) {
							w24 = 85;
						} else {
							w24 = 5;
						}
					} else {
						if (hops < 2) {
							w24 = 6;
						} else {
							w24 = -37;
						}
					}
				}
			} else {
				if (rel_time < 7575) {
					if (hops < 2) {
						w24 = -264;
					} else {
						if (hops < 3) {
							w24 = -160;
						} else {
							w24 = -103;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 7581) {
							w24 = 38;
						} else {
							w24 = -4;
						}
					} else {
						w24 = -53;
					}
				}
			}
		} else {
			if (prod != 2) {
				if (rel_time < 8160) {
					w24 = 250;
				} else {
					if (hops < 2) {
						w24 = 73;
					} else {
						w24 = 140;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 8166) {
						if (hops < 2) {
							w24 = -61;
						} else {
							w24 = -95;
						}
					} else {
						w24 = 2;
					}
				} else {
					if (rel_time < 8166) {
						w24 = -31;
					} else {
						w24 = -82;
					}
				}
			}
		}
	} else {
		if (rel_time < 8747) {
			if (prod != 0) {
				if (hops < 2) {
					if (rel_time < 8227) {
						w24 = -96;
					} else {
						if (rel_time < 8292) {
							w24 = -22;
						} else {
							w24 = -89;
						}
					}
				} else {
					if (rel_time < 8292) {
						if (hops < 3) {
							w24 = 26;
						} else {
							w24 = 0;
						}
					} else {
						w24 = -30;
					}
				}
			} else {
				if (hops < 2) {
					w24 = -278;
				} else {
					if (rel_time < 8294) {
						w24 = -148;
					} else {
						w24 = -102;
					}
				}
			}
		} else {
			if (rel_time < 9330) {
				if (rel_time < 8877) {
					if (hops < 3) {
						if (rel_time < 8769) {
							w24 = -49;
						} else {
							w24 = -25;
						}
					} else {
						if (rel_time < 8751) {
							w24 = 13;
						} else {
							w24 = -21;
						}
					}
				} else {
					if (hops < 2) {
						w24 = 297;
					} else {
						w24 = 160;
					}
				}
			} else {
				if (rel_time < 9978) {
					if (prod != 0) {
						if (rel_time < 9349) {
							w24 = -51;
						} else {
							w24 = -17;
						}
					} else {
						if (hops < 2) {
							w24 = -217;
						} else {
							w24 = -42;
						}
					}
				} else {
					if (rel_time < 10631) {
						if (prod != 0) {
							w24 = 24;
						} else {
							w24 = 79;
						}
					} else {
						if (rel_time < 10636) {
							w24 = -91;
						} else {
							w24 = 0;
						}
					}
				}
			}
		}
	}
	int w25;
	if (rel_time < 11675) {
		if (rel_time < 11216) {
			if (rel_time < 8224) {
				if (rel_time < 7644) {
					if (rel_time < 7122) {
						if (rel_time < 6537) {
							w25 = -1;
						} else {
							w25 = 28;
						}
					} else {
						if (rel_time < 7575) {
							w25 = -112;
						} else {
							w25 = -6;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 0) {
							w25 = 65;
						} else {
							w25 = 151;
						}
					} else {
						w25 = -37;
					}
				}
			} else {
				if (rel_time < 8747) {
					if (prod != 0) {
						if (hops < 2) {
							w25 = -44;
						} else {
							w25 = -1;
						}
					} else {
						if (hops < 2) {
							w25 = -171;
						} else {
							w25 = -78;
						}
					}
				} else {
					if (rel_time < 9330) {
						if (rel_time < 8877) {
							w25 = -19;
						} else {
							w25 = 132;
						}
					} else {
						if (rel_time < 9978) {
							w25 = -24;
						} else {
							w25 = 5;
						}
					}
				}
			}
		} else {
			if (rel_time < 11669) {
				if (hops < 3) {
					if (hops < 2) {
						w25 = 58;
					} else {
						if (rel_time < 11224) {
							w25 = 101;
						} else {
							w25 = 38;
						}
					}
				} else {
					if (hops < 4) {
						w25 = 13;
					} else {
						w25 = 81;
					}
				}
			} else {
				if (hops < 2) {
					w25 = -6;
				} else {
					if (hops < 3) {
						w25 = 38;
					} else {
						if (hops < 4) {
							w25 = -25;
						} else {
							w25 = 16;
						}
					}
				}
			}
		}
	} else {
		if (prod != 1) {
			if (hops < 4) {
				if (hops < 3) {
					if (rel_time < 11809) {
						if (rel_time < 11804) {
							w25 = -37;
						} else {
							w25 = -15;
						}
					} else {
						w25 = -64;
					}
				} else {
					w25 = -56;
				}
			} else {
				w25 = 2;
			}
		} else {
			if (rel_time < 11738) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11735) {
							w25 = -24;
						} else {
							w25 = 19;
						}
					} else {
						if (rel_time < 11735) {
							w25 = -10;
						} else {
							w25 = -64;
						}
					}
				} else {
					if (hops < 4) {
						w25 = 13;
					} else {
						w25 = -23;
					}
				}
			} else {
				w25 = 0;
			}
		}
	}
	int w26;
	if (rel_time < 4716) {
		if (rel_time < 4132) {
			if (rel_time < 3613) {
				if (rel_time < 3029) {
					if (prod != 0) {
						if (rel_time < 2331) {
							w26 = -2;
						} else {
							w26 = 18;
						}
					} else {
						if (rel_time < 2312) {
							w26 = 12;
						} else {
							w26 = -70;
						}
					}
				} else {
					if (rel_time < 3482) {
						if (hops < 3) {
							w26 = 92;
						} else {
							w26 = -32;
						}
					} else {
						if (size < 133) {
							w26 = -8;
						} else {
							w26 = 62;
						}
					}
				}
			} else {
				if (rel_time < 4066) {
					if (hops < 3) {
						if (rel_time < 3615) {
							w26 = -130;
						} else {
							w26 = -86;
						}
					} else {
						if (rel_time < 3614) {
							w26 = -46;
						} else {
							w26 = -104;
						}
					}
				} else {
					if (rel_time < 4069) {
						if (rel_time < 4067) {
							w26 = -17;
						} else {
							w26 = 21;
						}
					} else {
						if (hops < 4) {
							w26 = -14;
						} else {
							w26 = -57;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 4198) {
						w26 = 23;
					} else {
						w26 = -2;
					}
				} else {
					if (hops < 3) {
						w26 = 27;
					} else {
						if (rel_time < 4674) {
							w26 = 90;
						} else {
							w26 = 42;
						}
					}
				}
			} else {
				if (hops < 2) {
					w26 = 91;
				} else {
					if (rel_time < 4199) {
						if (hops < 3) {
							w26 = 149;
						} else {
							w26 = 87;
						}
					} else {
						if (rel_time < 4200) {
							w26 = 195;
						} else {
							w26 = 107;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5236) {
			if (rel_time < 4783) {
				w26 = -3;
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 4784) {
							w26 = -46;
						} else {
							w26 = -118;
						}
					} else {
						if (rel_time < 4784) {
							w26 = -61;
						} else {
							w26 = 20;
						}
					}
				} else {
					w26 = -142;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 9915) {
					if (rel_time < 9398) {
						if (rel_time < 8877) {
							w26 = -10;
						} else {
							w26 = 17;
						}
					} else {
						if (hops < 2) {
							w26 = -90;
						} else {
							w26 = -34;
						}
					}
				} else {
					if (rel_time < 10631) {
						if (rel_time < 10570) {
							w26 = 13;
						} else {
							w26 = 113;
						}
					} else {
						if (rel_time < 10636) {
							w26 = -72;
						} else {
							w26 = -1;
						}
					}
				}
			} else {
				if (rel_time < 8225) {
					if (prod != 2) {
						if (rel_time < 5301) {
							w26 = -40;
						} else {
							w26 = 31;
						}
					} else {
						if (rel_time < 5239) {
							w26 = 19;
						} else {
							w26 = -7;
						}
					}
				} else {
					if (rel_time < 8747) {
						if (prod != 0) {
							w26 = -20;
						} else {
							w26 = -49;
						}
					} else {
						if (rel_time < 10565) {
							w26 = 9;
						} else {
							w26 = -9;
						}
					}
				}
			}
		}
	}
	int w27;
	if (hops < 4) {
		if (prod != 2) {
			if (hops < 2) {
				if (rel_time < 624) {
					if (rel_time < 557) {
						w27 = -17;
					} else {
						w27 = -53;
					}
				} else {
					if (rel_time < 1206) {
						if (prod != 0) {
							w27 = 32;
						} else {
							w27 = 11;
						}
					} else {
						if (rel_time < 1727) {
							w27 = -44;
						} else {
							w27 = -2;
						}
					}
				}
			} else {
				if (rel_time < 10631) {
					if (rel_time < 10046) {
						if (rel_time < 8292) {
							w27 = 7;
						} else {
							w27 = -15;
						}
					} else {
						if (rel_time < 10500) {
							w27 = 159;
						} else {
							w27 = -1;
						}
					}
				} else {
					if (rel_time < 10636) {
						w27 = -90;
					} else {
						if (rel_time < 11216) {
							w27 = -16;
						} else {
							w27 = 8;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 7581) {
					if (rel_time < 7577) {
						if (rel_time < 577) {
							w27 = 37;
						} else {
							w27 = 0;
						}
					} else {
						w27 = 100;
					}
				} else {
					if (rel_time < 9349) {
						w27 = -30;
					} else {
						if (rel_time < 9934) {
							w27 = 25;
						} else {
							w27 = -5;
						}
					}
				}
			} else {
				if (rel_time < 2331) {
					if (rel_time < 1747) {
						if (hops < 3) {
							w27 = 8;
						} else {
							w27 = -34;
						}
					} else {
						w27 = -57;
					}
				} else {
					if (rel_time < 2916) {
						if (rel_time < 2899) {
							w27 = 37;
						} else {
							w27 = 82;
						}
					} else {
						if (hops < 3) {
							w27 = -20;
						} else {
							w27 = -4;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2961) {
			if (rel_time < 2376) {
				if (rel_time < 2331) {
					if (rel_time < 2312) {
						if (rel_time < 1859) {
							w27 = 8;
						} else {
							w27 = 81;
						}
					} else {
						w27 = -69;
					}
				} else {
					if (rel_time < 2375) {
						w27 = 114;
					} else {
						w27 = -8;
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 2444) {
							w27 = 52;
						} else {
							w27 = -3;
						}
					} else {
						w27 = -99;
					}
				} else {
					w27 = -218;
				}
			}
		} else {
			if (rel_time < 3545) {
				if (prod != 2) {
					if (rel_time < 2962) {
						w27 = 10;
					} else {
						w27 = 190;
					}
				} else {
					if (rel_time < 3483) {
						w27 = 17;
					} else {
						w27 = -77;
					}
				}
			} else {
				if (rel_time < 10502) {
					if (rel_time < 9983) {
						if (rel_time < 9398) {
							w27 = 14;
						} else {
							w27 = -18;
						}
					} else {
						w27 = -150;
					}
				} else {
					if (rel_time < 10563) {
						w27 = 94;
					} else {
						if (rel_time < 11672) {
							w27 = 28;
						} else {
							w27 = -15;
						}
					}
				}
			}
		}
	}
	int w28;
	if (rel_time < 11735) {
		if (rel_time < 11148) {
			if (rel_time < 10631) {
				if (rel_time < 10570) {
					if (rel_time < 1274) {
						if (rel_time < 1162) {
							w28 = 0;
						} else {
							w28 = 28;
						}
					} else {
						if (rel_time < 1727) {
							w28 = -65;
						} else {
							w28 = 0;
						}
					}
				} else {
					w28 = 74;
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11085) {
						w28 = 133;
					} else {
						if (rel_time < 11087) {
							w28 = -32;
						} else {
							w28 = -10;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w28 = -15;
						} else {
							w28 = -48;
						}
					} else {
						w28 = 22;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 11150) {
					if (hops < 2) {
						w28 = 57;
					} else {
						if (hops < 4) {
							w28 = -11;
						} else {
							w28 = 41;
						}
					}
				} else {
					w28 = 2;
				}
			} else {
				if (rel_time < 11219) {
					w28 = 27;
				} else {
					w28 = 53;
				}
			}
		}
	} else {
		w28 = -18;
	}
	int w29;
	if (rel_time < 4716) {
		if (rel_time < 4132) {
			if (rel_time < 3613) {
				if (rel_time < 3502) {
					if (rel_time < 3501) {
						if (hops < 3) {
							w29 = 5;
						} else {
							w29 = -8;
						}
					} else {
						w29 = -46;
					}
				} else {
					if (rel_time < 3545) {
						if (rel_time < 3503) {
							w29 = 33;
						} else {
							w29 = 151;
						}
					} else {
						if (hops < 2) {
							w29 = -25;
						} else {
							w29 = 13;
						}
					}
				}
			} else {
				if (rel_time < 4066) {
					w29 = -61;
				} else {
					if (rel_time < 4069) {
						if (rel_time < 4067) {
							w29 = -9;
						} else {
							w29 = 15;
						}
					} else {
						if (hops < 4) {
							w29 = -10;
						} else {
							w29 = -41;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					if (hops < 2) {
						if (rel_time < 4652) {
							w29 = 23;
						} else {
							w29 = -5;
						}
					} else {
						w29 = -5;
					}
				} else {
					if (rel_time < 4672) {
						w29 = 10;
					} else {
						w29 = 39;
					}
				}
			} else {
				if (rel_time < 4200) {
					if (hops < 3) {
						if (hops < 2) {
							w29 = 72;
						} else {
							w29 = 120;
						}
					} else {
						if (hops < 4) {
							w29 = 36;
						} else {
							w29 = 102;
						}
					}
				} else {
					w29 = 49;
				}
			}
		}
	} else {
		if (rel_time < 5299) {
			if (prod != 0) {
				if (rel_time < 5239) {
					if (rel_time < 5237) {
						w29 = -9;
					} else {
						if (hops < 2) {
							w29 = 51;
						} else {
							w29 = 6;
						}
					}
				} else {
					if (hops < 3) {
						w29 = -40;
					} else {
						if (hops < 4) {
							w29 = -7;
						} else {
							w29 = -46;
						}
					}
				}
			} else {
				if (hops < 2) {
					w29 = -35;
				} else {
					w29 = -72;
				}
			}
		} else {
			if (rel_time < 5821) {
				if (rel_time < 5368) {
					if (hops < 2) {
						if (rel_time < 5301) {
							w29 = 70;
						} else {
							w29 = 9;
						}
					} else {
						if (hops < 4) {
							w29 = -20;
						} else {
							w29 = 12;
						}
					}
				} else {
					if (hops < 4) {
						w29 = 69;
					} else {
						w29 = 193;
					}
				}
			} else {
				if (rel_time < 5840) {
					if (rel_time < 5822) {
						if (hops < 4) {
							w29 = -86;
						} else {
							w29 = -15;
						}
					} else {
						if (hops < 3) {
							w29 = -40;
						} else {
							w29 = -14;
						}
					}
				} else {
					if (rel_time < 5884) {
						w29 = 29;
					} else {
						if (rel_time < 6406) {
							w29 = -39;
						} else {
							w29 = 1;
						}
					}
				}
			}
		}
	}
	int w30;
	if (hops < 4) {
		if (rel_time < 11801) {
			if (rel_time < 7644) {
				if (rel_time < 7059) {
					if (rel_time < 7010) {
						if (rel_time < 5821) {
							w30 = 0;
						} else {
							w30 = -7;
						}
					} else {
						if (rel_time < 7054) {
							w30 = 46;
						} else {
							w30 = 7;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 7581) {
							w30 = 23;
						} else {
							w30 = -20;
						}
					} else {
						if (hops < 2) {
							w30 = -114;
						} else {
							w30 = -50;
						}
					}
				}
			} else {
				if (rel_time < 8160) {
					if (rel_time < 7709) {
						if (hops < 2) {
							w30 = 65;
						} else {
							w30 = 26;
						}
					} else {
						w30 = 108;
					}
				} else {
					if (rel_time < 8877) {
						if (prod != 0) {
							w30 = -1;
						} else {
							w30 = -61;
						}
					} else {
						if (rel_time < 9330) {
							w30 = 77;
						} else {
							w30 = -2;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				w30 = -11;
			} else {
				w30 = -36;
			}
		}
	} else {
		if (rel_time < 9395) {
			if (rel_time < 8810) {
				if (rel_time < 8225) {
					if (rel_time < 7644) {
						if (rel_time < 7056) {
							w30 = 8;
						} else {
							w30 = -25;
						}
					} else {
						if (rel_time < 7709) {
							w30 = 111;
						} else {
							w30 = 8;
						}
					}
				} else {
					if (prod != 1) {
						w30 = -17;
					} else {
						w30 = -60;
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 9393) {
						w30 = 82;
					} else {
						w30 = 9;
					}
				} else {
					w30 = -33;
				}
			}
		} else {
			if (rel_time < 10051) {
				if (rel_time < 9983) {
					if (size < 133) {
						if (rel_time < 9462) {
							w30 = -38;
						} else {
							w30 = 26;
						}
					} else {
						w30 = -70;
					}
				} else {
					w30 = -121;
				}
			} else {
				if (rel_time < 10563) {
					if (rel_time < 10505) {
						w30 = 25;
					} else {
						w30 = 81;
					}
				} else {
					if (prod != 1) {
						if (rel_time < 11672) {
							w30 = 24;
						} else {
							w30 = -7;
						}
					} else {
						w30 = -6;
					}
				}
			}
		}
	}
	int w31;
	if (rel_time < 1859) {
		if (rel_time < 1274) {
			if (rel_time < 1162) {
				if (hops < 2) {
					if (rel_time < 1143) {
						if (size < 133) {
							w31 = 8;
						} else {
							w31 = -24;
						}
					} else {
						w31 = -66;
					}
				} else {
					if (size < 133) {
						if (hops < 4) {
							w31 = -8;
						} else {
							w31 = 27;
						}
					} else {
						if (rel_time < 557) {
							w31 = -8;
						} else {
							w31 = 45;
						}
					}
				}
			} else {
				if (size < 133) {
					if (hops < 4) {
						if (hops < 3) {
							w31 = -11;
						} else {
							w31 = 35;
						}
					} else {
						w31 = -29;
					}
				} else {
					if (hops < 2) {
						w31 = 12;
					} else {
						if (hops < 3) {
							w31 = 73;
						} else {
							w31 = 42;
						}
					}
				}
			}
		} else {
			if (rel_time < 1727) {
				if (hops < 3) {
					w31 = -32;
				} else {
					w31 = -56;
				}
			} else {
				if (size < 133) {
					if (hops < 4) {
						w31 = -5;
					} else {
						w31 = 27;
					}
				} else {
					if (hops < 2) {
						w31 = -13;
					} else {
						if (hops < 3) {
							w31 = -47;
						} else {
							w31 = -17;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2312) {
			if (hops < 3) {
				if (hops < 2) {
					w31 = 91;
				} else {
					w31 = 47;
				}
			} else {
				if (hops < 4) {
					w31 = 123;
				} else {
					w31 = 52;
				}
			}
		} else {
			if (rel_time < 2331) {
				if (rel_time < 2313) {
					if (hops < 2) {
						w31 = 5;
					} else {
						w31 = -26;
					}
				} else {
					if (hops < 3) {
						w31 = -39;
					} else {
						w31 = -78;
					}
				}
			} else {
				if (rel_time < 2375) {
					if (rel_time < 2332) {
						w31 = 6;
					} else {
						w31 = 49;
					}
				} else {
					if (rel_time < 2376) {
						if (hops < 4) {
							w31 = -61;
						} else {
							w31 = -6;
						}
					} else {
						if (rel_time < 2960) {
							w31 = -12;
						} else {
							w31 = 1;
						}
					}
				}
			}
		}
	}
	int w32;
	if (rel_time < 8224) {
		if (rel_time < 7707) {
			if (rel_time < 7056) {
				if (rel_time < 6537) {
					if (rel_time < 5952) {
						if (rel_time < 5299) {
							w32 = -1;
						} else {
							w32 = 9;
						}
					} else {
						if (prod != 2) {
							w32 = -27;
						} else {
							w32 = 29;
						}
					}
				} else {
					if (prod != 2) {
						if (hops < 2) {
							w32 = 52;
						} else {
							w32 = 15;
						}
					} else {
						if (hops < 2) {
							w32 = -1;
						} else {
							w32 = -25;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 7641) {
							w32 = 10;
						} else {
							w32 = -23;
						}
					} else {
						w32 = -25;
					}
				} else {
					if (hops < 2) {
						w32 = -70;
					} else {
						if (rel_time < 7125) {
							w32 = -22;
						} else {
							w32 = -52;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (rel_time < 8160) {
					if (hops < 2) {
						if (rel_time < 7711) {
							w32 = 57;
						} else {
							w32 = 112;
						}
					} else {
						w32 = 40;
					}
				} else {
					if (hops < 2) {
						w32 = 23;
					} else {
						if (rel_time < 8184) {
							w32 = 39;
						} else {
							w32 = 69;
						}
					}
				}
			} else {
				w32 = -13;
			}
		}
	} else {
		if (rel_time < 8769) {
			if (prod != 0) {
				if (rel_time < 8767) {
					w32 = -6;
				} else {
					w32 = -53;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 8294) {
						w32 = -109;
					} else {
						w32 = -49;
					}
				} else {
					if (rel_time < 8294) {
						if (hops < 3) {
							w32 = -56;
						} else {
							w32 = -14;
						}
					} else {
						w32 = 2;
					}
				}
			}
		} else {
			if (rel_time < 9330) {
				if (rel_time < 8877) {
					if (rel_time < 8810) {
						if (hops < 3) {
							w32 = 52;
						} else {
							w32 = -7;
						}
					} else {
						if (hops < 4) {
							w32 = -27;
						} else {
							w32 = 45;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 8879) {
							w32 = 153;
						} else {
							w32 = 56;
						}
					} else {
						if (hops < 4) {
							w32 = 7;
						} else {
							w32 = 37;
						}
					}
				}
			} else {
				if (rel_time < 9978) {
					if (prod != 0) {
						if (rel_time < 9939) {
							w32 = -3;
						} else {
							w32 = -38;
						}
					} else {
						if (hops < 2) {
							w32 = -88;
						} else {
							w32 = -7;
						}
					}
				} else {
					if (rel_time < 10563) {
						if (prod != 2) {
							w32 = 19;
						} else {
							w32 = -12;
						}
					} else {
						if (rel_time < 11148) {
							w32 = -8;
						} else {
							w32 = 5;
						}
					}
				}
			}
		}
	}
	int w33;
	if (rel_time < 11675) {
		if (rel_time < 11216) {
			if (rel_time < 2916) {
				if (rel_time < 2897) {
					if (rel_time < 2375) {
						if (rel_time < 1859) {
							w33 = -2;
						} else {
							w33 = 18;
						}
					} else {
						if (prod != 0) {
							w33 = 23;
						} else {
							w33 = -41;
						}
					}
				} else {
					if (hops < 2) {
						w33 = 51;
					} else {
						if (rel_time < 2899) {
							w33 = 26;
						} else {
							w33 = 58;
						}
					}
				}
			} else {
				if (rel_time < 2960) {
					if (rel_time < 2918) {
						w33 = -50;
					} else {
						w33 = -97;
					}
				} else {
					if (rel_time < 2961) {
						if (hops < 3) {
							w33 = 101;
						} else {
							w33 = -16;
						}
					} else {
						if (rel_time < 2962) {
							w33 = -35;
						} else {
							w33 = 0;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 11672) {
						w33 = 16;
					} else {
						w33 = -15;
					}
				} else {
					w33 = 33;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 11672) {
						if (rel_time < 11224) {
							w33 = -5;
						} else {
							w33 = -64;
						}
					} else {
						w33 = 49;
					}
				} else {
					if (rel_time < 11672) {
						if (rel_time < 11224) {
							w33 = 24;
						} else {
							w33 = 76;
						}
					} else {
						w33 = -66;
					}
				}
			}
		}
	} else {
		w33 = -8;
	}
	int w34;
	if (prod != 2) {
		if (hops < 2) {
			if (rel_time < 5952) {
				if (rel_time < 5257) {
					if (rel_time < 4785) {
						if (size < 133) {
							w34 = 4;
						} else {
							w34 = -8;
						}
					} else {
						if (rel_time < 5256) {
							w34 = -52;
						} else {
							w34 = -18;
						}
					}
				} else {
					if (rel_time < 5842) {
						w34 = 25;
					} else {
						if (rel_time < 5887) {
							w34 = -19;
						} else {
							w34 = 30;
						}
					}
				}
			} else {
				if (rel_time < 6428) {
					w34 = -54;
				} else {
					if (rel_time < 7013) {
						if (rel_time < 6538) {
							w34 = -19;
						} else {
							w34 = 41;
						}
					} else {
						if (rel_time < 7597) {
							w34 = -23;
						} else {
							w34 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 1206) {
				if (prod != 1) {
					if (rel_time < 557) {
						w34 = -4;
					} else {
						if (size < 133) {
							w34 = 9;
						} else {
							w34 = 33;
						}
					}
				} else {
					w34 = -16;
				}
			} else {
				if (rel_time < 1790) {
					if (rel_time < 1274) {
						w34 = -3;
					} else {
						w34 = -20;
					}
				} else {
					if (rel_time < 2375) {
						if (rel_time < 1859) {
							w34 = -5;
						} else {
							w34 = 32;
						}
					} else {
						if (rel_time < 2444) {
							w34 = -44;
						} else {
							w34 = 3;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9349) {
			if (rel_time < 9332) {
				if (rel_time < 5239) {
					if (rel_time < 2331) {
						if (rel_time < 2313) {
							w34 = -2;
						} else {
							w34 = -42;
						}
					} else {
						if (rel_time < 2916) {
							w34 = 25;
						} else {
							w34 = -1;
						}
					}
				} else {
					if (rel_time < 5840) {
						if (hops < 3) {
							w34 = -37;
						} else {
							w34 = -16;
						}
					} else {
						if (rel_time < 6425) {
							w34 = 18;
						} else {
							w34 = -5;
						}
					}
				}
			} else {
				w34 = -29;
			}
		} else {
			if (rel_time < 9934) {
				if (rel_time < 9917) {
					if (hops < 2) {
						w34 = -16;
					} else {
						w34 = 10;
					}
				} else {
					if (hops < 2) {
						w34 = 38;
					} else {
						if (rel_time < 9919) {
							w34 = -30;
						} else {
							w34 = 21;
						}
					}
				}
			} else {
				if (rel_time < 10505) {
					if (hops < 4) {
						if (hops < 3) {
							w34 = -13;
						} else {
							w34 = -43;
						}
					} else {
						w34 = 21;
					}
				} else {
					if (rel_time < 11085) {
						if (rel_time < 10519) {
							w34 = 19;
						} else {
							w34 = 89;
						}
					} else {
						if (rel_time < 11087) {
							w34 = -17;
						} else {
							w34 = 1;
						}
					}
				}
			}
		}
	}
	int w35;
	if (rel_time < 11809) {
		if (rel_time < 4716) {
			if (rel_time < 4198) {
				if (rel_time < 3613) {
					if (rel_time < 3029) {
						if (rel_time < 2916) {
							w35 = 1;
						} else {
							w35 = -15;
						}
					} else {
						if (rel_time < 3482) {
							w35 = 36;
						} else {
							w35 = 3;
						}
					}
				} else {
					if (rel_time < 4066) {
						if (hops < 3) {
							w35 = -45;
						} else {
							w35 = -23;
						}
					} else {
						if (hops < 2) {
							w35 = 4;
						} else {
							w35 = -9;
						}
					}
				}
			} else {
				if (rel_time < 4651) {
					if (hops < 2) {
						if (rel_time < 4199) {
							w35 = 50;
						} else {
							w35 = 15;
						}
					} else {
						if (rel_time < 4199) {
							w35 = 33;
						} else {
							w35 = 73;
						}
					}
				} else {
					if (size < 133) {
						w35 = 0;
					} else {
						w35 = 16;
					}
				}
			}
		} else {
			if (rel_time < 5237) {
				if (prod != 0) {
					w35 = -6;
				} else {
					if (hops < 2) {
						w35 = -14;
					} else {
						if (hops < 4) {
							w35 = -38;
						} else {
							w35 = -74;
						}
					}
				}
			} else {
				if (rel_time < 5821) {
					if (rel_time < 5368) {
						if (size < 133) {
							w35 = 3;
						} else {
							w35 = -19;
						}
					} else {
						if (hops < 4) {
							w35 = 34;
						} else {
							w35 = 120;
						}
					}
				} else {
					if (rel_time < 5822) {
						if (hops < 2) {
							w35 = -13;
						} else {
							w35 = -55;
						}
					} else {
						if (rel_time < 6407) {
							w35 = -6;
						} else {
							w35 = 1;
						}
					}
				}
			}
		}
	} else {
		w35 = -32;
	}
	return (179677 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32 + w33 + w34 + w35) >> 8;
}
