#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int model(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 133) {
		if (rel_time < 1183) {
			if (hops < 2) {
				w0 = 9878;
			} else {
				w0 = 11575;
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w0 = -9338;
					} else {
						w0 = -8463;
					}
				} else {
					if (hops < 4) {
						w0 = -7571;
					} else {
						w0 = -6677;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 12091) {
						if (rel_time < 11485) {
							w0 = -3985;
						} else {
							w0 = -1338;
						}
					} else {
						w0 = -6071;
					}
				} else {
					if (rel_time < 11632) {
						if (rel_time < 11025) {
							w0 = -2100;
						} else {
							w0 = 465;
						}
					} else {
						w0 = -4196;
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 577) {
				w0 = 14235;
			} else {
				w0 = 17091;
			}
		} else {
			w0 = 18697;
		}
	}
	int w1;
	if (size < 133) {
		if (rel_time < 1183) {
			if (hops < 3) {
				if (rel_time < 723) {
					w1 = 4714;
				} else {
					w1 = 5722;
				}
			} else {
				w1 = 6275;
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w1 = -4673;
					} else {
						w1 = -4237;
					}
				} else {
					if (hops < 4) {
						w1 = -3792;
					} else {
						w1 = -3350;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1789) {
						w1 = -4396;
					} else {
						if (rel_time < 2395) {
							w1 = 266;
						} else {
							w1 = -2376;
						}
					}
				} else {
					if (rel_time < 1789) {
						w1 = -3426;
					} else {
						if (rel_time < 2395) {
							w1 = 1381;
						} else {
							w1 = -1241;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 648) {
				w1 = 7014;
			} else {
				w1 = 8162;
			}
		} else {
			if (rel_time < 577) {
				w1 = 7200;
			} else {
				w1 = 9318;
			}
		}
	}
	int w2;
	if (size < 133) {
		if (rel_time < 1183) {
			if (hops < 4) {
				if (rel_time < 723) {
					w2 = 2430;
				} else {
					w2 = 3070;
				}
			} else {
				w2 = 3755;
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w2 = -2339;
					} else {
						w2 = -2121;
					}
				} else {
					if (hops < 4) {
						w2 = -1899;
					} else {
						w2 = -1680;
					}
				}
			} else {
				if (rel_time < 3001) {
					if (rel_time < 2395) {
						if (rel_time < 1789) {
							w2 = -1986;
						} else {
							w2 = 472;
						}
					} else {
						if (hops < 4) {
							w2 = -3195;
						} else {
							w2 = -1924;
						}
					}
				} else {
					if (rel_time < 3607) {
						if (hops < 2) {
							w2 = 1441;
						} else {
							w2 = 1920;
						}
					} else {
						if (rel_time < 4213) {
							w2 = -3036;
						} else {
							w2 = -727;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (hops < 2) {
				if (rel_time < 10902) {
					if (rel_time < 577) {
						w2 = 3333;
					} else {
						w2 = 4122;
					}
				} else {
					w2 = 3122;
				}
			} else {
				if (rel_time < 648) {
					w2 = 3671;
				} else {
					if (rel_time < 10946) {
						w2 = 4619;
					} else {
						w2 = 3651;
					}
				}
			}
		} else {
			if (rel_time < 577) {
				w2 = 3385;
			} else {
				w2 = 5335;
			}
		}
	}
	int w3;
	if (size < 133) {
		if (rel_time < 1183) {
			if (hops < 3) {
				if (rel_time < 723) {
					w3 = 1181;
				} else {
					w3 = 1414;
				}
			} else {
				if (rel_time < 723) {
					w3 = 1417;
				} else {
					w3 = 2206;
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w3 = -1170;
					} else {
						w3 = -1062;
					}
				} else {
					if (hops < 4) {
						w3 = -951;
					} else {
						w3 = -843;
					}
				}
			} else {
				if (rel_time < 10879) {
					if (rel_time < 10273) {
						if (rel_time < 9667) {
							w3 = -284;
						} else {
							w3 = -2686;
						}
					} else {
						if (hops < 2) {
							w3 = 1754;
						} else {
							w3 = 2268;
						}
					}
				} else {
					if (rel_time < 11485) {
						if (hops < 4) {
							w3 = -2801;
						} else {
							w3 = -1506;
						}
					} else {
						if (rel_time < 12091) {
							w3 = 827;
						} else {
							w3 = -1666;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 648) {
				if (hops < 3) {
					w3 = 1923;
				} else {
					if (rel_time < 577) {
						w3 = 961;
					} else {
						w3 = 1833;
					}
				}
			} else {
				if (rel_time < 1251) {
					w3 = 2855;
				} else {
					if (rel_time < 1857) {
						w3 = 1379;
					} else {
						if (rel_time < 2463) {
							w3 = 2876;
						} else {
							w3 = 2154;
						}
					}
				}
			}
		} else {
			if (rel_time < 648) {
				w3 = 1885;
			} else {
				if (rel_time < 10946) {
					w3 = 2783;
				} else {
					w3 = 1691;
				}
			}
		}
	}
	int w4;
	if (size < 133) {
		if (rel_time < 1183) {
			if (hops < 4) {
				if (rel_time < 723) {
					w4 = 608;
				} else {
					if (hops < 2) {
						w4 = 637;
					} else {
						w4 = 855;
					}
				}
			} else {
				if (rel_time < 723) {
					w4 = 895;
				} else {
					w4 = 1393;
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						if (prod != 1) {
							w4 = -603;
						} else {
							w4 = -561;
						}
					} else {
						if (prod != 1) {
							w4 = -507;
						} else {
							w4 = -549;
						}
					}
				} else {
					if (hops < 4) {
						w4 = -477;
					} else {
						if (prod != 1) {
							w4 = -386;
						} else {
							w4 = -459;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 3001) {
						if (rel_time < 2395) {
							w4 = -383;
						} else {
							w4 = -1481;
						}
					} else {
						if (rel_time < 4819) {
							w4 = 519;
						} else {
							w4 = -402;
						}
					}
				} else {
					if (rel_time < 5567) {
						if (rel_time < 4961) {
							w4 = 577;
						} else {
							w4 = 2905;
						}
					} else {
						if (rel_time < 6174) {
							w4 = -1575;
						} else {
							w4 = 586;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 10902) {
				if (rel_time < 10296) {
					if (rel_time < 9689) {
						if (rel_time < 9083) {
							w4 = 929;
						} else {
							w4 = 1673;
						}
					} else {
						w4 = 198;
					}
				} else {
					w4 = 1672;
				}
			} else {
				w4 = 575;
			}
		} else {
			if (rel_time < 10946) {
				if (rel_time < 10340) {
					if (rel_time < 9734) {
						if (rel_time < 9128) {
							w4 = 1184;
						} else {
							w4 = 1961;
						}
					} else {
						if (rel_time < 10298) {
							w4 = 293;
						} else {
							w4 = 464;
						}
					}
				} else {
					w4 = 1947;
				}
			} else {
				w4 = 866;
			}
		}
	}
	int w5;
	if (size < 133) {
		if (rel_time < 1183) {
			if (hops < 4) {
				if (rel_time < 723) {
					if (hops < 2) {
						w5 = 272;
					} else {
						w5 = 332;
					}
				} else {
					if (hops < 3) {
						w5 = 359;
					} else {
						w5 = 510;
					}
				}
			} else {
				if (rel_time < 598) {
					w5 = 382;
				} else {
					w5 = 696;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 9133) {
					if (rel_time < 8594) {
						if (rel_time < 7988) {
							w5 = -364;
						} else {
							w5 = 450;
						}
					} else {
						if (rel_time < 9061) {
							w5 = -2571;
						} else {
							w5 = -299;
						}
					}
				} else {
					if (rel_time < 9667) {
						if (rel_time < 9200) {
							w5 = -197;
						} else {
							w5 = 2131;
						}
					} else {
						if (rel_time < 10273) {
							w5 = -702;
						} else {
							w5 = -258;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 3) {
						if (rel_time < 1323) {
							w5 = -197;
						} else {
							w5 = -270;
						}
					} else {
						if (prod != 1) {
							w5 = -211;
						} else {
							w5 = -248;
						}
					}
				} else {
					if (rel_time < 7849) {
						if (rel_time < 7243) {
							w5 = 131;
						} else {
							w5 = -2254;
						}
					} else {
						if (rel_time < 8455) {
							w5 = 2520;
						} else {
							w5 = -12;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 8479) {
				if (rel_time < 7916) {
					if (rel_time < 7267) {
						if (rel_time < 6661) {
							w5 = 485;
						} else {
							w5 = 1263;
						}
					} else {
						w5 = -272;
					}
				} else {
					w5 = 1257;
				}
			} else {
				if (rel_time < 9086) {
					if (rel_time < 9083) {
						w5 = -212;
					} else {
						w5 = -299;
					}
				} else {
					if (rel_time < 9692) {
						w5 = 891;
					} else {
						if (rel_time < 10298) {
							w5 = 126;
						} else {
							w5 = 605;
						}
					}
				}
			}
		} else {
			if (rel_time < 648) {
				if (hops < 4) {
					if (rel_time < 577) {
						w5 = -49;
					} else {
						w5 = 432;
					}
				} else {
					w5 = 440;
				}
			} else {
				if (rel_time < 1251) {
					w5 = 1148;
				} else {
					if (rel_time < 1857) {
						if (hops < 4) {
							w5 = 291;
						} else {
							w5 = 79;
						}
					} else {
						if (rel_time < 2463) {
							w5 = 1130;
						} else {
							w5 = 701;
						}
					}
				}
			}
		}
	}
	int w6;
	if (size < 133) {
		if (rel_time < 12230) {
			if (rel_time < 9200) {
				if (rel_time < 8526) {
					if (rel_time < 7988) {
						if (rel_time < 7382) {
							w6 = -59;
						} else {
							w6 = -673;
						}
					} else {
						if (rel_time < 8455) {
							w6 = 1526;
						} else {
							w6 = -270;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 8594) {
							w6 = -408;
						} else {
							w6 = -129;
						}
					} else {
						if (hops < 2) {
							w6 = -1322;
						} else {
							w6 = -2230;
						}
					}
				}
			} else {
				if (rel_time < 9667) {
					if (hops < 2) {
						w6 = 1102;
					} else {
						w6 = 2553;
					}
				} else {
					if (rel_time < 10273) {
						if (rel_time < 9806) {
							w6 = -48;
						} else {
							w6 = -1076;
						}
					} else {
						if (rel_time < 10879) {
							w6 = 388;
						} else {
							w6 = -177;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				w6 = -683;
			} else {
				w6 = -175;
			}
		}
	} else {
		if (rel_time < 6098) {
			if (rel_time < 5493) {
				if (rel_time < 4886) {
					if (rel_time < 4281) {
						if (rel_time < 3675) {
							w6 = 329;
						} else {
							w6 = -482;
						}
					} else {
						w6 = 1059;
					}
				} else {
					if (hops < 4) {
						w6 = -480;
					} else {
						w6 = -296;
					}
				}
			} else {
				w6 = 1059;
			}
		} else {
			if (rel_time < 6704) {
				if (hops < 3) {
					w6 = -488;
				} else {
					w6 = -348;
				}
			} else {
				if (rel_time < 7310) {
					if (rel_time < 7267) {
						w6 = 645;
					} else {
						w6 = 1063;
					}
				} else {
					if (rel_time < 7916) {
						if (hops < 3) {
							w6 = -139;
						} else {
							w6 = -412;
						}
					} else {
						if (rel_time < 8522) {
							w6 = 780;
						} else {
							w6 = 216;
						}
					}
				}
			}
		}
	}
	int w7;
	if (size < 133) {
		if (rel_time < 6776) {
			if (rel_time < 6170) {
				if (rel_time < 5564) {
					if (rel_time < 4890) {
						if (rel_time < 4284) {
							w7 = -102;
						} else {
							w7 = 629;
						}
					} else {
						if (prod != 0) {
							w7 = -91;
						} else {
							w7 = -2348;
						}
					}
				} else {
					if (rel_time < 6031) {
						if (hops < 4) {
							w7 = 2379;
						} else {
							w7 = 1552;
						}
					} else {
						if (rel_time < 6032) {
							w7 = -153;
						} else {
							w7 = -94;
						}
					}
				}
			} else {
				if (rel_time < 6637) {
					if (hops < 4) {
						w7 = -2364;
					} else {
						w7 = -892;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 6705) {
							w7 = -65;
						} else {
							w7 = -97;
						}
					} else {
						if (rel_time < 6705) {
							w7 = -32;
						} else {
							w7 = 50;
						}
					}
				}
			}
		} else {
			if (rel_time < 7243) {
				w7 = 2474;
			} else {
				if (rel_time < 7849) {
					if (rel_time < 7382) {
						if (rel_time < 7245) {
							w7 = -132;
						} else {
							w7 = -93;
						}
					} else {
						if (hops < 2) {
							w7 = -2127;
						} else {
							w7 = -822;
						}
					}
				} else {
					if (rel_time < 8455) {
						if (rel_time < 7988) {
							w7 = 227;
						} else {
							w7 = 774;
						}
					} else {
						if (rel_time < 9061) {
							w7 = -415;
						} else {
							w7 = -10;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3069) {
			if (rel_time < 2463) {
				if (rel_time < 1857) {
					if (rel_time < 1251) {
						if (rel_time < 648) {
							w7 = 32;
						} else {
							w7 = 479;
						}
					} else {
						if (hops < 3) {
							w7 = -267;
						} else {
							w7 = -30;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2417) {
							w7 = 506;
						} else {
							w7 = 275;
						}
					} else {
						w7 = 693;
					}
				}
			} else {
				w7 = -612;
			}
		} else {
			if (rel_time < 3675) {
				w7 = 924;
			} else {
				if (rel_time < 4281) {
					if (hops < 3) {
						w7 = -271;
					} else {
						w7 = -173;
					}
				} else {
					if (rel_time < 4886) {
						w7 = 537;
					} else {
						if (rel_time < 5493) {
							w7 = -237;
						} else {
							w7 = 158;
						}
					}
				}
			}
		}
	}
	int w8;
	if (rel_time < 1251) {
		if (prod != 0) {
			if (rel_time < 1204) {
				if (prod != 1) {
					if (rel_time < 598) {
						if (hops < 2) {
							w8 = 72;
						} else {
							w8 = 229;
						}
					} else {
						if (hops < 3) {
							w8 = -76;
						} else {
							w8 = 2;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 200;
					} else {
						w8 = 264;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w8 = 249;
					} else {
						w8 = 81;
					}
				} else {
					w8 = 427;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					w8 = 235;
				} else {
					w8 = 314;
				}
			} else {
				w8 = 525;
			}
		}
	} else {
		if (rel_time < 1789) {
			if (rel_time < 1323) {
				if (hops < 4) {
					w8 = 13;
				} else {
					w8 = 87;
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w8 = -699;
					} else {
						w8 = -471;
					}
				} else {
					w8 = -230;
				}
			}
		} else {
			if (hops < 4) {
				if (size < 133) {
					if (rel_time < 2395) {
						if (rel_time < 1929) {
							w8 = -27;
						} else {
							w8 = 590;
						}
					} else {
						if (rel_time < 5425) {
							w8 = -164;
						} else {
							w8 = -15;
						}
					}
				} else {
					if (rel_time < 3024) {
						if (rel_time < 2463) {
							w8 = 61;
						} else {
							w8 = -326;
						}
					} else {
						if (rel_time < 3675) {
							w8 = 448;
						} else {
							w8 = 52;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 4890) {
							w8 = -95;
						} else {
							w8 = -9;
						}
					} else {
						if (rel_time < 10340) {
							w8 = 158;
						} else {
							w8 = 368;
						}
					}
				} else {
					if (rel_time < 4354) {
						if (rel_time < 3748) {
							w8 = 185;
						} else {
							w8 = 2301;
						}
					} else {
						if (rel_time < 4961) {
							w8 = -663;
						} else {
							w8 = 321;
						}
					}
				}
			}
		}
	}
	int w9;
	if (rel_time < 10946) {
		if (rel_time < 10412) {
			if (rel_time < 9806) {
				if (rel_time < 9200) {
					if (rel_time < 8594) {
						if (rel_time < 6776) {
							w9 = -14;
						} else {
							w9 = 125;
						}
					} else {
						if (rel_time < 9061) {
							w9 = -750;
						} else {
							w9 = -182;
						}
					}
				} else {
					if (rel_time < 9667) {
						if (hops < 2) {
							w9 = 582;
						} else {
							w9 = 1291;
						}
					} else {
						if (size < 133) {
							w9 = -13;
						} else {
							w9 = 344;
						}
					}
				}
			} else {
				if (rel_time < 10273) {
					if (hops < 4) {
						w9 = -584;
					} else {
						w9 = -280;
					}
				} else {
					if (rel_time < 10298) {
						if (rel_time < 10293) {
							w9 = -281;
						} else {
							w9 = -145;
						}
					} else {
						if (hops < 3) {
							w9 = -361;
						} else {
							w9 = -285;
						}
					}
				}
			}
		} else {
			if (rel_time < 10879) {
				w9 = 1083;
			} else {
				if (rel_time < 10899) {
					if (hops < 2) {
						if (rel_time < 10881) {
							w9 = -158;
						} else {
							w9 = -60;
						}
					} else {
						if (rel_time < 10881) {
							w9 = -27;
						} else {
							w9 = 4;
						}
					}
				} else {
					if (rel_time < 10904) {
						w9 = 377;
					} else {
						w9 = 483;
					}
				}
			}
		}
	} else {
		if (rel_time < 11485) {
			if (rel_time < 11018) {
				w9 = -65;
			} else {
				w9 = -1085;
			}
		} else {
			if (rel_time < 12230) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 12164) {
							w9 = -24;
						} else {
							w9 = -96;
						}
					} else {
						if (rel_time < 11511) {
							w9 = -190;
						} else {
							w9 = -29;
						}
					}
				} else {
					if (hops < 2) {
						w9 = 505;
					} else {
						w9 = 806;
					}
				}
			} else {
				if (hops < 2) {
					w9 = -408;
				} else {
					if (hops < 3) {
						w9 = -301;
					} else {
						w9 = -215;
					}
				}
			}
		}
	}
	int w10;
	if (rel_time < 4819) {
		if (rel_time < 4284) {
			if (rel_time < 3746) {
				if (rel_time < 3071) {
					if (rel_time < 2464) {
						if (rel_time < 1929) {
							w10 = 12;
						} else {
							w10 = 165;
						}
					} else {
						if (prod != 0) {
							w10 = -13;
						} else {
							w10 = -639;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w10 = 36;
						} else {
							w10 = 270;
						}
					} else {
						if (hops < 4) {
							w10 = 896;
						} else {
							w10 = 1276;
						}
					}
				}
			} else {
				if (rel_time < 4213) {
					if (hops < 4) {
						w10 = -1563;
					} else {
						w10 = -590;
					}
				} else {
					if (size < 133) {
						if (hops < 3) {
							w10 = 76;
						} else {
							w10 = 4;
						}
					} else {
						w10 = -151;
					}
				}
			}
		} else {
			if (prod != 0) {
				w10 = -296;
			} else {
				w10 = 1683;
			}
		}
	} else {
		if (rel_time < 5425) {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 4890) {
						w10 = -336;
					} else {
						w10 = -48;
					}
				} else {
					w10 = 249;
				}
			} else {
				if (hops < 4) {
					w10 = -1154;
				} else {
					w10 = -362;
				}
			}
		} else {
			if (rel_time < 6098) {
				if (prod != 0) {
					if (rel_time < 6051) {
						if (size < 133) {
							w10 = -29;
						} else {
							w10 = -145;
						}
					} else {
						w10 = 435;
					}
				} else {
					if (hops < 4) {
						w10 = 1225;
					} else {
						w10 = 707;
					}
				}
			} else {
				if (rel_time < 6637) {
					if (rel_time < 6170) {
						if (hops < 2) {
							w10 = -20;
						} else {
							w10 = -63;
						}
					} else {
						if (hops < 4) {
							w10 = -1186;
						} else {
							w10 = -626;
						}
					}
				} else {
					if (rel_time < 7243) {
						if (rel_time < 6776) {
							w10 = -134;
						} else {
							w10 = 1183;
						}
					} else {
						if (rel_time < 7916) {
							w10 = -172;
						} else {
							w10 = 6;
						}
					}
				}
			}
		}
	}
	return (188503 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10) >> 8;
}
