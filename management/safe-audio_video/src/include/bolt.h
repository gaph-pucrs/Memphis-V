#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					w0 = -21608;
				} else {
					w0 = -20412;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w0 = -15076;
						} else {
							w0 = -18557;
						}
					} else {
						if (hops < 2) {
							w0 = -15209;
						} else {
							w0 = -14496;
						}
					}
				} else {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w0 = -13871;
						} else {
							w0 = -17336;
						}
					} else {
						if (hops < 4) {
							w0 = -13696;
						} else {
							w0 = -13034;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 1101) {
					if (hops < 3) {
						if (rel_time < 1015) {
							w0 = 8335;
						} else {
							w0 = 9406;
						}
					} else {
						if (rel_time < 1015) {
							w0 = 9611;
						} else {
							w0 = 10604;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11853) {
							w0 = 1403;
						} else {
							w0 = 13936;
						}
					} else {
						if (hops < 3) {
							w0 = -1084;
						} else {
							w0 = 152;
						}
					}
				}
			} else {
				if (rel_time < 854) {
					if (hops < 3) {
						if (hops < 2) {
							w0 = 5743;
						} else {
							w0 = 6405;
						}
					} else {
						if (hops < 4) {
							w0 = 7191;
						} else {
							w0 = 7901;
						}
					}
				} else {
					if (rel_time < 2238) {
						if (hops < 3) {
							w0 = -3796;
						} else {
							w0 = -2106;
						}
					} else {
						if (hops < 3) {
							w0 = -6789;
						} else {
							w0 = -5567;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				w0 = 26387;
			} else {
				w0 = 27558;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w0 = 18591;
					} else {
						w0 = 19318;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w0 = 16934;
						} else {
							w0 = 17637;
						}
					} else {
						w0 = 18979;
					}
				}
			} else {
				if (rel_time < 1743) {
					w0 = 20241;
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w0 = 18362;
						} else {
							w0 = 19169;
						}
					} else {
						w0 = 20191;
					}
				}
			}
		}
	}
	int w1;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 2) {
					w1 = -13330;
				} else {
					if (hops < 4) {
						w1 = -12570;
					} else {
						w1 = -11637;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w1 = -9047;
						} else {
							w1 = -11137;
						}
					} else {
						if (hops < 2) {
							w1 = -9125;
						} else {
							w1 = -8698;
						}
					}
				} else {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w1 = -8324;
						} else {
							w1 = -10406;
						}
					} else {
						if (hops < 4) {
							w1 = -8218;
						} else {
							w1 = -7821;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 1101) {
					if (hops < 2) {
						if (rel_time < 1015) {
							w1 = 4610;
						} else {
							w1 = 5269;
						}
					} else {
						if (hops < 4) {
							w1 = 5859;
						} else {
							w1 = 6732;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11853) {
							w1 = 842;
						} else {
							w1 = 8363;
						}
					} else {
						if (hops < 2) {
							w1 = -1039;
						} else {
							w1 = -101;
						}
					}
				}
			} else {
				if (rel_time < 854) {
					if (hops < 3) {
						if (hops < 2) {
							w1 = 3448;
						} else {
							w1 = 3845;
						}
					} else {
						if (hops < 4) {
							w1 = 4317;
						} else {
							w1 = 4749;
						}
					}
				} else {
					if (rel_time < 2238) {
						if (rel_time < 1285) {
							w1 = -2802;
						} else {
							w1 = -1435;
						}
					} else {
						if (hops < 2) {
							w1 = -4459;
						} else {
							w1 = -3527;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 2) {
				w1 = 15415;
			} else {
				w1 = 16389;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w1 = 11158;
					} else {
						w1 = 11594;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w1 = 10161;
						} else {
							w1 = 10582;
						}
					} else {
						if (rel_time < 12101) {
							w1 = 10995;
						} else {
							w1 = 11730;
						}
					}
				}
			} else {
				if (rel_time < 1743) {
					if (hops < 4) {
						w1 = 11949;
					} else {
						w1 = 12724;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w1 = 11018;
						} else {
							w1 = 11502;
						}
					} else {
						if (hops < 4) {
							w1 = 11914;
						} else {
							w1 = 12702;
						}
					}
				}
			}
		}
	}
	int w2;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 2) {
					w2 = -8002;
				} else {
					if (hops < 4) {
						w2 = -7544;
					} else {
						w2 = -6994;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1770) {
						if (rel_time < 972) {
							w2 = -4917;
						} else {
							w2 = -6313;
						}
					} else {
						if (hops < 2) {
							w2 = -5475;
						} else {
							w2 = -5219;
						}
					}
				} else {
					if (rel_time < 1770) {
						if (rel_time < 972) {
							w2 = -4491;
						} else {
							w2 = -5874;
						}
					} else {
						if (hops < 4) {
							w2 = -4931;
						} else {
							w2 = -4693;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 1101) {
					if (rel_time < 1015) {
						if (hops < 3) {
							w2 = 2892;
						} else {
							w2 = 3340;
						}
					} else {
						if (hops < 2) {
							w2 = 3162;
						} else {
							w2 = 3788;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11853) {
							w2 = 505;
						} else {
							w2 = 5019;
						}
					} else {
						if (hops < 4) {
							w2 = -316;
						} else {
							w2 = 680;
						}
					}
				}
			} else {
				if (rel_time < 854) {
					if (hops < 3) {
						if (hops < 2) {
							w2 = 2070;
						} else {
							w2 = 2308;
						}
					} else {
						if (hops < 4) {
							w2 = 2592;
						} else {
							w2 = 2854;
						}
					}
				} else {
					if (rel_time < 1697) {
						if (rel_time < 1285) {
							w2 = -1682;
						} else {
							w2 = 97;
						}
					} else {
						if (hops < 4) {
							w2 = -2342;
						} else {
							w2 = -1370;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 4) {
				if (hops < 2) {
					w2 = 9254;
				} else {
					w2 = 9716;
				}
			} else {
				w2 = 10571;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w2 = 6697;
					} else {
						w2 = 6958;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w2 = 6097;
						} else {
							w2 = 6350;
						}
					} else {
						if (rel_time < 12101) {
							w2 = 6601;
						} else {
							w2 = 7041;
						}
					}
				}
			} else {
				if (rel_time < 1743) {
					if (hops < 4) {
						w2 = 7171;
					} else {
						w2 = 7641;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w2 = 6611;
						} else {
							w2 = 6902;
						}
					} else {
						if (hops < 4) {
							w2 = 7152;
						} else {
							w2 = 7634;
						}
					}
				}
			}
		}
	}
	int w3;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					if (hops < 2) {
						w3 = -4804;
					} else {
						w3 = -4616;
					}
				} else {
					w3 = -4364;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w3 = -3570;
						} else {
							w3 = -4511;
						}
					} else {
						if (rel_time < 9103) {
							w3 = -3312;
						} else {
							w3 = -3206;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1770) {
							w3 = -3309;
						} else {
							w3 = -3054;
						}
					} else {
						if (rel_time < 972) {
							w3 = -2112;
						} else {
							w3 = -2831;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 1199) {
					if (rel_time < 1101) {
						if (hops < 3) {
							w3 = 1919;
						} else {
							w3 = 2281;
						}
					} else {
						if (hops < 2) {
							w3 = 661;
						} else {
							w3 = 1166;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w3 = -491;
						} else {
							w3 = -50;
						}
					} else {
						if (size < 69) {
							w3 = 1205;
						} else {
							w3 = 138;
						}
					}
				}
			} else {
				if (rel_time < 854) {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 1243;
						} else {
							w3 = 1386;
						}
					} else {
						if (hops < 4) {
							w3 = 1556;
						} else {
							w3 = 1715;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2238) {
							w3 = -1584;
						} else {
							w3 = -1739;
						}
					} else {
						if (rel_time < 1697) {
							w3 = -12;
						} else {
							w3 = -1200;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 4) {
				if (hops < 2) {
					w3 = 5556;
				} else {
					w3 = 5831;
				}
			} else {
				w3 = 6353;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w3 = 4019;
					} else {
						w3 = 4176;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w3 = 3658;
						} else {
							w3 = 3810;
						}
					} else {
						if (rel_time < 12101) {
							w3 = 3963;
						} else {
							w3 = 4227;
						}
					}
				}
			} else {
				if (rel_time < 1743) {
					if (hops < 4) {
						w3 = 4304;
					} else {
						w3 = 4588;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w3 = 3967;
						} else {
							w3 = 4142;
						}
					} else {
						if (hops < 4) {
							w3 = 4294;
						} else {
							w3 = 4588;
						}
					}
				}
			}
		}
	}
	int w4;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					if (hops < 2) {
						w4 = -2884;
					} else {
						w4 = -2771;
					}
				} else {
					if (hops < 4) {
						w4 = -2672;
					} else {
						w4 = -2463;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 972) {
						if (hops < 2) {
							w4 = -1873;
						} else {
							w4 = -1333;
						}
					} else {
						if (rel_time < 1770) {
							w4 = -2331;
						} else {
							w4 = -1938;
						}
					}
				} else {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w4 = -1686;
						} else {
							w4 = -2625;
						}
					} else {
						if (hops < 4) {
							w4 = -1737;
						} else {
							w4 = -1684;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 1199) {
					if (rel_time < 1101) {
						if (rel_time < 1015) {
							w4 = 1016;
						} else {
							w4 = 1343;
						}
					} else {
						if (hops < 3) {
							w4 = 477;
						} else {
							w4 = 839;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1627) {
							w4 = -1608;
						} else {
							w4 = -133;
						}
					} else {
						if (size < 69) {
							w4 = 723;
						} else {
							w4 = 83;
						}
					}
				}
			} else {
				if (rel_time < 854) {
					if (hops < 3) {
						if (hops < 2) {
							w4 = 746;
						} else {
							w4 = 832;
						}
					} else {
						if (hops < 4) {
							w4 = 934;
						} else {
							w4 = 1031;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 2238) {
							w4 = -618;
						} else {
							w4 = -974;
						}
					} else {
						if (rel_time < 2238) {
							w4 = 146;
						} else {
							w4 = -610;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				w4 = 3388;
			} else {
				if (hops < 4) {
					w4 = 3574;
				} else {
					w4 = 3818;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w4 = 2412;
					} else {
						w4 = 2506;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w4 = 2195;
						} else {
							w4 = 2286;
						}
					} else {
						if (rel_time < 12101) {
							w4 = 2379;
						} else {
							w4 = 2537;
						}
					}
				}
			} else {
				if (rel_time < 1743) {
					if (hops < 4) {
						if (rel_time < 1163) {
							w4 = 2639;
						} else {
							w4 = 2525;
						}
					} else {
						w4 = 2755;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w4 = 2380;
						} else {
							w4 = 2485;
						}
					} else {
						if (hops < 4) {
							w4 = 2578;
						} else {
							w4 = 2758;
						}
					}
				}
			}
		}
	}
	int w5;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					if (hops < 2) {
						w5 = -1732;
					} else {
						w5 = -1663;
					}
				} else {
					if (hops < 4) {
						w5 = -1604;
					} else {
						w5 = -1480;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1770) {
						if (rel_time < 972) {
							w5 = -1125;
						} else {
							w5 = -1628;
						}
					} else {
						if (rel_time < 7880) {
							w5 = -1221;
						} else {
							w5 = -1155;
						}
					}
				} else {
					if (rel_time < 972) {
						if (hops < 4) {
							w5 = -845;
						} else {
							w5 = -597;
						}
					} else {
						if (rel_time < 1770) {
							w5 = -1302;
						} else {
							w5 = -1082;
						}
					}
				}
			}
		} else {
			if (cons != 5) {
				if (rel_time < 1101) {
					if (rel_time < 854) {
						if (hops < 3) {
							w5 = 476;
						} else {
							w5 = 576;
						}
					} else {
						if (hops < 4) {
							w5 = 756;
						} else {
							w5 = 1279;
						}
					}
				} else {
					if (hops < 4) {
						if (size < 69) {
							w5 = -503;
						} else {
							w5 = -213;
						}
					} else {
						if (rel_time < 1697) {
							w5 = 788;
						} else {
							w5 = 122;
						}
					}
				}
			} else {
				if (rel_time < 12186) {
					if (hops < 2) {
						if (rel_time < 2087) {
							w5 = -505;
						} else {
							w5 = -106;
						}
					} else {
						if (rel_time < 2087) {
							w5 = -206;
						} else {
							w5 = 298;
						}
					}
				} else {
					if (rel_time < 12625) {
						if (hops < 2) {
							w5 = 2366;
						} else {
							w5 = 2995;
						}
					} else {
						if (hops < 4) {
							w5 = -5;
						} else {
							w5 = 394;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				if (hops < 2) {
					w5 = 1981;
				} else {
					w5 = 2077;
				}
			} else {
				if (hops < 4) {
					w5 = 2146;
				} else {
					w5 = 2295;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w5 = 1448;
					} else {
						w5 = 1504;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w5 = 1317;
						} else {
							w5 = 1372;
						}
					} else {
						if (rel_time < 12101) {
							w5 = 1428;
						} else {
							w5 = 1523;
						}
					}
				}
			} else {
				if (rel_time < 1743) {
					if (hops < 4) {
						if (rel_time < 1163) {
							w5 = 1584;
						} else {
							w5 = 1516;
						}
					} else {
						w5 = 1655;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w5 = 1428;
						} else {
							w5 = 1491;
						}
					} else {
						if (hops < 4) {
							w5 = 1548;
						} else {
							w5 = 1657;
						}
					}
				}
			}
		}
	}
	int w6;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					if (hops < 2) {
						w6 = -1040;
					} else {
						w6 = -998;
					}
				} else {
					if (hops < 4) {
						w6 = -963;
					} else {
						w6 = -890;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1402) {
						if (hops < 2) {
							w6 = -752;
						} else {
							w6 = -373;
						}
					} else {
						if (rel_time < 1770) {
							w6 = -1106;
						} else {
							w6 = -709;
						}
					}
				} else {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w6 = -595;
						} else {
							w6 = -1055;
						}
					} else {
						if (rel_time < 7880) {
							w6 = -618;
						} else {
							w6 = -573;
						}
					}
				}
			}
		} else {
			if (rel_time < 1199) {
				if (prod != 0) {
					if (hops < 4) {
						if (hops < 2) {
							w6 = 312;
						} else {
							w6 = 461;
						}
					} else {
						if (rel_time < 854) {
							w6 = 390;
						} else {
							w6 = 793;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w6 = 641;
						} else {
							w6 = 712;
						}
					} else {
						w6 = 1070;
					}
				}
			} else {
				if (cons != 5) {
					if (hops < 2) {
						if (prod != 3) {
							w6 = -408;
						} else {
							w6 = -174;
						}
					} else {
						if (prod != 3) {
							w6 = -159;
						} else {
							w6 = 46;
						}
					}
				} else {
					if (rel_time < 2087) {
						if (size < 69) {
							w6 = -1287;
						} else {
							w6 = 489;
						}
					} else {
						if (size < 69) {
							w6 = 330;
						} else {
							w6 = -17;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				if (hops < 2) {
					w6 = 1190;
				} else {
					w6 = 1247;
				}
			} else {
				if (hops < 4) {
					w6 = 1288;
				} else {
					w6 = 1379;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 2346) {
					if (hops < 2) {
						if (rel_time < 1163) {
							w6 = 889;
						} else {
							w6 = 832;
						}
					} else {
						w6 = 894;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w6 = 789;
						} else {
							w6 = 819;
						}
					} else {
						if (rel_time < 12101) {
							w6 = 857;
						} else {
							w6 = 914;
						}
					}
				}
			} else {
				if (rel_time < 2346) {
					if (rel_time < 1163) {
						if (hops < 4) {
							w6 = 951;
						} else {
							w6 = 1009;
						}
					} else {
						w6 = 922;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w6 = 852;
						} else {
							w6 = 894;
						}
					} else {
						if (hops < 4) {
							w6 = 929;
						} else {
							w6 = 996;
						}
					}
				}
			}
		}
	}
	int w7;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					if (rel_time < 432) {
						if (hops < 2) {
							w7 = -624;
						} else {
							w7 = -566;
						}
					} else {
						w7 = -618;
					}
				} else {
					if (hops < 4) {
						w7 = -578;
					} else {
						w7 = -535;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w7 = -370;
						} else {
							w7 = -698;
						}
					} else {
						if (hops < 3) {
							w7 = -426;
						} else {
							w7 = -369;
						}
					}
				} else {
					if (rel_time < 1402) {
						if (rel_time < 972) {
							w7 = -121;
						} else {
							w7 = 24;
						}
					} else {
						if (rel_time < 1770) {
							w7 = -222;
						} else {
							w7 = -337;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 12186) {
					if (rel_time < 1199) {
						if (rel_time < 854) {
							w7 = 134;
						} else {
							w7 = 318;
						}
					} else {
						if (hops < 2) {
							w7 = -185;
						} else {
							w7 = -45;
						}
					}
				} else {
					if (size < 69) {
						if (hops < 2) {
							w7 = 1289;
						} else {
							w7 = 1570;
						}
					} else {
						if (hops < 2) {
							w7 = -137;
						} else {
							w7 = 4;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 69) {
						if (rel_time < 1697) {
							w7 = 688;
						} else {
							w7 = -102;
						}
					} else {
						if (prod != 4) {
							w7 = 309;
						} else {
							w7 = 137;
						}
					}
				} else {
					if (rel_time < 11853) {
						if (rel_time < 2087) {
							w7 = 50;
						} else {
							w7 = 779;
						}
					} else {
						w7 = 2276;
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				if (hops < 2) {
					w7 = 714;
				} else {
					w7 = 749;
				}
			} else {
				if (hops < 4) {
					w7 = 773;
				} else {
					w7 = 829;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w7 = 525;
					} else {
						w7 = 545;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w7 = 474;
						} else {
							w7 = 493;
						}
					} else {
						if (rel_time < 12101) {
							w7 = 515;
						} else {
							w7 = 549;
						}
					}
				}
			} else {
				if (rel_time < 2957) {
					if (rel_time < 1163) {
						if (hops < 4) {
							w7 = 571;
						} else {
							w7 = 606;
						}
					} else {
						w7 = 550;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w7 = 509;
						} else {
							w7 = 536;
						}
					} else {
						if (hops < 4) {
							w7 = 558;
						} else {
							w7 = 599;
						}
					}
				}
			}
		}
	}
	int w8;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					if (hops < 2) {
						w8 = -376;
					} else {
						if (rel_time < 432) {
							w8 = -340;
						} else {
							w8 = -366;
						}
					}
				} else {
					if (hops < 4) {
						w8 = -347;
					} else {
						w8 = -321;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 7880) {
						if (rel_time < 972) {
							w8 = -188;
						} else {
							w8 = -270;
						}
					} else {
						if (rel_time < 9714) {
							w8 = -207;
						} else {
							w8 = -242;
						}
					}
				} else {
					if (rel_time < 1744) {
						if (rel_time < 1402) {
							w8 = -29;
						} else {
							w8 = -114;
						}
					} else {
						if (rel_time < 7880) {
							w8 = -221;
						} else {
							w8 = -163;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (hops < 4) {
					if (rel_time < 12186) {
						if (rel_time < 1199) {
							w8 = 191;
						} else {
							w8 = -23;
						}
					} else {
						if (size < 69) {
							w8 = 889;
						} else {
							w8 = -24;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11853) {
							w8 = 399;
						} else {
							w8 = 1368;
						}
					} else {
						if (rel_time < 1199) {
							w8 = 376;
						} else {
							w8 = 138;
						}
					}
				}
			} else {
				if (rel_time < 2238) {
					if (rel_time < 1285) {
						if (rel_time < 854) {
							w8 = 69;
						} else {
							w8 = -445;
						}
					} else {
						if (hops < 2) {
							w8 = -259;
						} else {
							w8 = 567;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3302) {
							w8 = -277;
						} else {
							w8 = -225;
						}
					} else {
						if (hops < 4) {
							w8 = -164;
						} else {
							w8 = -70;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 497) {
						w8 = 298;
					} else {
						w8 = 430;
					}
				} else {
					w8 = 449;
				}
			} else {
				if (hops < 4) {
					w8 = 464;
				} else {
					w8 = 498;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 4790) {
					if (hops < 2) {
						if (rel_time < 1743) {
							w8 = 315;
						} else {
							w8 = 292;
						}
					} else {
						if (rel_time < 2346) {
							w8 = 325;
						} else {
							w8 = 311;
						}
					}
				} else {
					if (rel_time < 9066) {
						if (hops < 2) {
							w8 = 272;
						} else {
							w8 = 284;
						}
					} else {
						if (rel_time < 12101) {
							w8 = 297;
						} else {
							w8 = 330;
						}
					}
				}
			} else {
				if (rel_time < 2346) {
					if (hops < 4) {
						if (rel_time < 1163) {
							w8 = 343;
						} else {
							w8 = 328;
						}
					} else {
						if (rel_time < 1743) {
							w8 = 377;
						} else {
							w8 = 313;
						}
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w8 = 307;
						} else {
							w8 = 322;
						}
					} else {
						if (hops < 4) {
							w8 = 335;
						} else {
							w8 = 360;
						}
					}
				}
			}
		}
	}
	int w9;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1770) {
				if (rel_time < 1402) {
					if (rel_time < 497) {
						if (hops < 3) {
							w9 = -220;
						} else {
							w9 = -205;
						}
					} else {
						if (hops < 2) {
							w9 = -212;
						} else {
							w9 = -82;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w9 = -276;
						} else {
							w9 = -388;
						}
					} else {
						if (rel_time < 1744) {
							w9 = -69;
						} else {
							w9 = -56;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 2382) {
						if (hops < 2) {
							w9 = -113;
						} else {
							w9 = -77;
						}
					} else {
						if (rel_time < 7880) {
							w9 = -170;
						} else {
							w9 = -140;
						}
					}
				} else {
					if (rel_time < 9103) {
						if (rel_time < 8491) {
							w9 = -122;
						} else {
							w9 = -166;
						}
					} else {
						if (rel_time < 9714) {
							w9 = -69;
						} else {
							w9 = -119;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (prod != 2) {
					if (prod != 3) {
						if (rel_time < 12086) {
							w9 = -130;
						} else {
							w9 = 147;
						}
					} else {
						if (rel_time < 2324) {
							w9 = 24;
						} else {
							w9 = -32;
						}
					}
				} else {
					if (rel_time < 2411) {
						if (rel_time < 1199) {
							w9 = 80;
						} else {
							w9 = 268;
						}
					} else {
						if (rel_time < 3023) {
							w9 = 65;
						} else {
							w9 = -8;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 2411) {
						if (rel_time < 1629) {
							w9 = 21;
						} else {
							w9 = 189;
						}
					} else {
						if (size < 69) {
							w9 = -115;
						} else {
							w9 = -6;
						}
					}
				} else {
					if (rel_time < 2087) {
						if (rel_time < 1015) {
							w9 = 256;
						} else {
							w9 = -698;
						}
					} else {
						if (rel_time < 2690) {
							w9 = 715;
						} else {
							w9 = 189;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				if (hops < 2) {
					w9 = 257;
				} else {
					w9 = 270;
				}
			} else {
				if (hops < 4) {
					w9 = 279;
				} else {
					w9 = 299;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 4790) {
					if (rel_time < 1163) {
						w9 = 199;
					} else {
						if (hops < 2) {
							w9 = 176;
						} else {
							w9 = 189;
						}
					}
				} else {
					if (rel_time < 7214) {
						if (hops < 2) {
							w9 = 157;
						} else {
							w9 = 167;
						}
					} else {
						if (rel_time < 11495) {
							w9 = 175;
						} else {
							w9 = 194;
						}
					}
				}
			} else {
				if (rel_time < 2957) {
					if (hops < 4) {
						if (rel_time < 1163) {
							w9 = 206;
						} else {
							w9 = 198;
						}
					} else {
						if (rel_time < 1743) {
							w9 = 226;
						} else {
							w9 = 192;
						}
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 4) {
							w9 = 183;
						} else {
							w9 = 193;
						}
					} else {
						w9 = 203;
					}
				}
			}
		}
	}
	int w10;
	if (size < 133) {
		if (cons != 5) {
			if (prod != 3) {
				if (rel_time < 1697) {
					if (rel_time < 1629) {
						if (rel_time < 1087) {
							w10 = -9;
						} else {
							w10 = -115;
						}
					} else {
						if (hops < 4) {
							w10 = 347;
						} else {
							w10 = 1943;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1770) {
							w10 = -166;
						} else {
							w10 = -83;
						}
					} else {
						if (rel_time < 2238) {
							w10 = -242;
						} else {
							w10 = -38;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1697) {
						if (hops < 2) {
							w10 = -43;
						} else {
							w10 = 111;
						}
					} else {
						if (rel_time < 12091) {
							w10 = -20;
						} else {
							w10 = 7;
						}
					}
				} else {
					if (rel_time < 1101) {
						w10 = 168;
					} else {
						if (rel_time < 2324) {
							w10 = 7;
						} else {
							w10 = 69;
						}
					}
				}
			}
		} else {
			if (rel_time < 12186) {
				if (rel_time < 2087) {
					if (rel_time < 1840) {
						if (rel_time < 1627) {
							w10 = 5;
						} else {
							w10 = 229;
						}
					} else {
						if (hops < 2) {
							w10 = -1236;
						} else {
							w10 = -665;
						}
					}
				} else {
					if (rel_time < 2690) {
						if (size < 69) {
							w10 = 462;
						} else {
							w10 = 215;
						}
					} else {
						if (hops < 4) {
							w10 = 0;
						} else {
							w10 = 156;
						}
					}
				}
			} else {
				if (rel_time < 12625) {
					if (hops < 4) {
						if (hops < 2) {
							w10 = 360;
						} else {
							w10 = 511;
						}
					} else {
						w10 = 747;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12777) {
							w10 = -65;
						} else {
							w10 = -39;
						}
					} else {
						if (hops < 3) {
							w10 = 53;
						} else {
							w10 = 94;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 497) {
						w10 = 94;
					} else {
						w10 = 155;
					}
				} else {
					w10 = 162;
				}
			} else {
				if (hops < 4) {
					w10 = 167;
				} else {
					w10 = 180;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 2346) {
					if (hops < 2) {
						if (rel_time < 1163) {
							w10 = 119;
						} else {
							w10 = 108;
						}
					} else {
						w10 = 118;
					}
				} else {
					if (rel_time < 11495) {
						if (rel_time < 4790) {
							w10 = 108;
						} else {
							w10 = 102;
						}
					} else {
						if (rel_time < 12101) {
							w10 = 113;
						} else {
							w10 = 120;
						}
					}
				}
			} else {
				if (rel_time < 4159) {
					if (rel_time < 3569) {
						if (rel_time < 2957) {
							w10 = 121;
						} else {
							w10 = 113;
						}
					} else {
						w10 = 131;
					}
				} else {
					if (rel_time < 7235) {
						if (rel_time < 6012) {
							w10 = 110;
						} else {
							w10 = 99;
						}
					} else {
						if (hops < 4) {
							w10 = 113;
						} else {
							w10 = 122;
						}
					}
				}
			}
		}
	}
	int w11;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 2) {
					w11 = -134;
				} else {
					if (hops < 4) {
						w11 = -123;
					} else {
						if (rel_time < 432) {
							w11 = -94;
						} else {
							w11 = -116;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 10937) {
						if (rel_time < 1770) {
							w11 = -108;
						} else {
							w11 = -71;
						}
					} else {
						if (rel_time < 11512) {
							w11 = 31;
						} else {
							w11 = -14;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1402) {
							w11 = 73;
						} else {
							w11 = -54;
						}
					} else {
						if (rel_time < 2958) {
							w11 = -96;
						} else {
							w11 = -55;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 1199) {
					if (prod != 0) {
						if (hops < 3) {
							w11 = 49;
						} else {
							w11 = 108;
						}
					} else {
						if (hops < 3) {
							w11 = 192;
						} else {
							w11 = 75;
						}
					}
				} else {
					if (rel_time < 1627) {
						if (hops < 3) {
							w11 = -93;
						} else {
							w11 = -507;
						}
					} else {
						if (rel_time < 1840) {
							w11 = 90;
						} else {
							w11 = -14;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 1629) {
						if (rel_time < 1199) {
							w11 = 128;
						} else {
							w11 = -326;
						}
					} else {
						if (rel_time < 1697) {
							w11 = 908;
						} else {
							w11 = 49;
						}
					}
				} else {
					if (rel_time < 11853) {
						if (rel_time < 1015) {
							w11 = 360;
						} else {
							w11 = 131;
						}
					} else {
						w11 = 449;
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				w11 = 95;
			} else {
				if (hops < 4) {
					w11 = 100;
				} else {
					w11 = 108;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 9046) {
					if (rel_time < 2936) {
						if (rel_time < 1163) {
							w11 = 71;
						} else {
							w11 = 64;
						}
					} else {
						if (rel_time < 6603) {
							w11 = 55;
						} else {
							w11 = 62;
						}
					}
				} else {
					if (rel_time < 9659) {
						if (rel_time < 9655) {
							w11 = 142;
						} else {
							w11 = 90;
						}
					} else {
						if (rel_time < 10266) {
							w11 = 22;
						} else {
							w11 = 61;
						}
					}
				}
			} else {
				if (rel_time < 5401) {
					if (rel_time < 1743) {
						if (hops < 4) {
							w11 = 71;
						} else {
							w11 = 87;
						}
					} else {
						if (rel_time < 5380) {
							w11 = 68;
						} else {
							w11 = 74;
						}
					}
				} else {
					if (rel_time < 7827) {
						if (hops < 4) {
							w11 = 58;
						} else {
							w11 = 73;
						}
					} else {
						if (rel_time < 11512) {
							w11 = 67;
						} else {
							w11 = 75;
						}
					}
				}
			}
		}
	}
	int w12;
	if (size < 133) {
		if (cons != 5) {
			if (prod != 3) {
				if (rel_time < 1697) {
					if (rel_time < 1629) {
						if (size < 69) {
							w12 = -35;
						} else {
							w12 = 17;
						}
					} else {
						if (hops < 3) {
							w12 = -43;
						} else {
							w12 = 683;
						}
					}
				} else {
					if (rel_time < 2850) {
						if (size < 37) {
							w12 = -37;
						} else {
							w12 = -86;
						}
					} else {
						if (hops < 3) {
							w12 = -38;
						} else {
							w12 = -12;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 12101) {
						if (rel_time < 11490) {
							w12 = -7;
						} else {
							w12 = -32;
						}
					} else {
						if (rel_time < 12700) {
							w12 = 27;
						} else {
							w12 = -16;
						}
					}
				} else {
					if (rel_time < 2324) {
						if (rel_time < 1101) {
							w12 = 56;
						} else {
							w12 = -21;
						}
					} else {
						if (hops < 4) {
							w12 = 35;
						} else {
							w12 = 59;
						}
					}
				}
			}
		} else {
			if (rel_time < 2087) {
				if (rel_time < 1840) {
					if (size < 69) {
						if (rel_time < 1015) {
							w12 = 105;
						} else {
							w12 = -169;
						}
					} else {
						if (hops < 4) {
							w12 = 62;
						} else {
							w12 = 225;
						}
					}
				} else {
					if (hops < 2) {
						w12 = -736;
					} else {
						if (hops < 4) {
							w12 = -454;
						} else {
							w12 = -60;
						}
					}
				}
			} else {
				if (rel_time < 2690) {
					if (size < 69) {
						if (hops < 3) {
							w12 = 327;
						} else {
							w12 = 195;
						}
					} else {
						if (hops < 3) {
							w12 = 98;
						} else {
							w12 = 189;
						}
					}
				} else {
					if (rel_time < 12186) {
						if (hops < 2) {
							w12 = -37;
						} else {
							w12 = 29;
						}
					} else {
						if (rel_time < 12625) {
							w12 = 282;
						} else {
							w12 = 24;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 2) {
				if (rel_time < 497) {
					w12 = 25;
				} else {
					w12 = 55;
				}
			} else {
				if (hops < 4) {
					w12 = 60;
				} else {
					w12 = 65;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 4790) {
					if (rel_time < 4769) {
						if (rel_time < 1743) {
							w12 = 43;
						} else {
							w12 = 39;
						}
					} else {
						w12 = 48;
					}
				} else {
					if (rel_time < 5380) {
						w12 = 23;
					} else {
						if (rel_time < 5401) {
							w12 = 49;
						} else {
							w12 = 37;
						}
					}
				}
			} else {
				if (rel_time < 10882) {
					if (rel_time < 9066) {
						if (rel_time < 4159) {
							w12 = 44;
						} else {
							w12 = 39;
						}
					} else {
						if (rel_time < 10288) {
							w12 = 47;
						} else {
							w12 = 56;
						}
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 4) {
							w12 = 24;
						} else {
							w12 = 53;
						}
					} else {
						if (rel_time < 11512) {
							w12 = 38;
						} else {
							w12 = 48;
						}
					}
				}
			}
		}
	}
	int w13;
	if (size < 37) {
		if (rel_time < 497) {
			if (hops < 2) {
				w13 = -67;
			} else {
				if (hops < 4) {
					if (rel_time < 432) {
						if (hops < 3) {
							w13 = -50;
						} else {
							w13 = -67;
						}
					} else {
						if (hops < 3) {
							w13 = -65;
						} else {
							w13 = -57;
						}
					}
				} else {
					if (rel_time < 432) {
						w13 = -43;
					} else {
						w13 = -56;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 2994) {
					if (hops < 2) {
						if (rel_time < 1770) {
							w13 = -51;
						} else {
							w13 = 3;
						}
					} else {
						if (rel_time < 972) {
							w13 = -69;
						} else {
							w13 = 45;
						}
					}
				} else {
					if (rel_time < 9103) {
						if (rel_time < 8491) {
							w13 = -27;
						} else {
							w13 = -63;
						}
					} else {
						if (rel_time < 9714) {
							w13 = 59;
						} else {
							w13 = -31;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1770) {
						if (rel_time < 972) {
							w13 = -11;
						} else {
							w13 = -150;
						}
					} else {
						if (rel_time < 10937) {
							w13 = -26;
						} else {
							w13 = -51;
						}
					}
				} else {
					if (rel_time < 1770) {
						if (rel_time < 972) {
							w13 = 28;
						} else {
							w13 = 135;
						}
					} else {
						if (rel_time < 7880) {
							w13 = -44;
						} else {
							w13 = -8;
						}
					}
				}
			}
		}
	} else {
		if (prod != 1) {
			if (hops < 2) {
				if (size < 69) {
					if (rel_time < 2087) {
						if (rel_time < 1015) {
							w13 = 113;
						} else {
							w13 = -375;
						}
					} else {
						if (rel_time < 2690) {
							w13 = 232;
						} else {
							w13 = -58;
						}
					}
				} else {
					if (rel_time < 12186) {
						if (prod != 4) {
							w13 = 15;
						} else {
							w13 = -4;
						}
					} else {
						if (prod != 4) {
							w13 = -22;
						} else {
							w13 = -141;
						}
					}
				}
			} else {
				if (size < 69) {
					if (hops < 3) {
						if (rel_time < 2087) {
							w13 = 33;
						} else {
							w13 = 134;
						}
					} else {
						if (rel_time < 2087) {
							w13 = -163;
						} else {
							w13 = 23;
						}
					}
				} else {
					if (hops < 3) {
						if (size < 133) {
							w13 = -23;
						} else {
							w13 = 24;
						}
					} else {
						if (rel_time < 1087) {
							w13 = 86;
						} else {
							w13 = 20;
						}
					}
				}
			}
		} else {
			if (rel_time < 1697) {
				if (rel_time < 1285) {
					if (rel_time < 854) {
						if (hops < 4) {
							w13 = 54;
						} else {
							w13 = -110;
						}
					} else {
						if (hops < 2) {
							w13 = 49;
						} else {
							w13 = -166;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1629) {
							w13 = -671;
						} else {
							w13 = -271;
						}
					} else {
						if (rel_time < 1629) {
							w13 = 538;
						} else {
							w13 = 320;
						}
					}
				}
			} else {
				if (rel_time < 7737) {
					if (hops < 2) {
						if (rel_time < 2238) {
							w13 = 64;
						} else {
							w13 = -29;
						}
					} else {
						if (rel_time < 2850) {
							w13 = -86;
						} else {
							w13 = -39;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w13 = -1;
						} else {
							w13 = -22;
						}
					} else {
						if (rel_time < 8799) {
							w13 = 13;
						} else {
							w13 = 34;
						}
					}
				}
			}
		}
	}
	int w14;
	if (hops < 4) {
		if (size < 133) {
			if (rel_time < 12186) {
				if (rel_time < 1199) {
					if (size < 37) {
						if (rel_time < 497) {
							w14 = -37;
						} else {
							w14 = -13;
						}
					} else {
						if (rel_time < 1087) {
							w14 = 46;
						} else {
							w14 = 13;
						}
					}
				} else {
					if (rel_time < 2307) {
						if (prod != 0) {
							w14 = -8;
						} else {
							w14 = -155;
						}
					} else {
						if (rel_time < 2690) {
							w14 = 46;
						} else {
							w14 = -8;
						}
					}
				}
			} else {
				if (size < 69) {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 132;
						} else {
							w14 = 208;
						}
					} else {
						w14 = 117;
					}
				} else {
					if (prod != 4) {
						if (hops < 2) {
							w14 = -13;
						} else {
							w14 = 34;
						}
					} else {
						if (hops < 2) {
							w14 = -85;
						} else {
							w14 = -30;
						}
					}
				}
			}
		} else {
			if (rel_time < 4159) {
				if (rel_time < 4158) {
					if (rel_time < 1163) {
						if (hops < 3) {
							w14 = 22;
						} else {
							w14 = 12;
						}
					} else {
						if (hops < 2) {
							w14 = 17;
						} else {
							w14 = 15;
						}
					}
				} else {
					w14 = 24;
				}
			} else {
				if (rel_time < 7235) {
					if (rel_time < 6012) {
						if (rel_time < 4180) {
							w14 = 4;
						} else {
							w14 = 15;
						}
					} else {
						if (hops < 2) {
							w14 = 16;
						} else {
							w14 = 5;
						}
					}
				} else {
					if (rel_time < 10882) {
						if (rel_time < 10877) {
							w14 = 16;
						} else {
							w14 = 24;
						}
					} else {
						if (rel_time < 11490) {
							w14 = 3;
						} else {
							w14 = 16;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 69) {
				if (rel_time < 1285) {
					if (rel_time < 972) {
						if (rel_time < 854) {
							w14 = -48;
						} else {
							w14 = 17;
						}
					} else {
						w14 = -254;
					}
				} else {
					if (rel_time < 1697) {
						if (rel_time < 1629) {
							w14 = 54;
						} else {
							w14 = 406;
						}
					} else {
						if (rel_time < 1770) {
							w14 = 59;
						} else {
							w14 = -6;
						}
					}
				}
			} else {
				if (rel_time < 1199) {
					if (prod != 4) {
						if (rel_time < 1163) {
							w14 = 15;
						} else {
							w14 = 93;
						}
					} else {
						w14 = 144;
					}
				} else {
					if (rel_time < 1697) {
						if (rel_time < 1629) {
							w14 = -79;
						} else {
							w14 = -623;
						}
					} else {
						if (rel_time < 1840) {
							w14 = 77;
						} else {
							w14 = 19;
						}
					}
				}
			}
		} else {
			if (rel_time < 1015) {
				w14 = 240;
			} else {
				if (rel_time < 3301) {
					if (rel_time < 2087) {
						if (rel_time < 1627) {
							w14 = 57;
						} else {
							w14 = 29;
						}
					} else {
						if (rel_time < 2690) {
							w14 = 235;
						} else {
							w14 = 129;
						}
					}
				} else {
					if (rel_time < 11242) {
						if (rel_time < 10966) {
							w14 = 55;
						} else {
							w14 = 7;
						}
					} else {
						if (rel_time < 11853) {
							w14 = 100;
						} else {
							w14 = 148;
						}
					}
				}
			}
		}
	}
	int w15;
	if (size < 37) {
		if (rel_time < 10326) {
			if (rel_time < 9714) {
				if (rel_time < 9103) {
					if (rel_time < 8491) {
						if (rel_time < 7880) {
							w15 = -16;
						} else {
							w15 = 20;
						}
					} else {
						if (hops < 2) {
							w15 = -11;
						} else {
							w15 = -50;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 9681) {
							w15 = 42;
						} else {
							w15 = 34;
						}
					} else {
						if (hops < 4) {
							w15 = 2;
						} else {
							w15 = 42;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 10293) {
						if (hops < 2) {
							w15 = -70;
						} else {
							w15 = -62;
						}
					} else {
						if (hops < 2) {
							w15 = -66;
						} else {
							w15 = -74;
						}
					}
				} else {
					if (rel_time < 10293) {
						if (hops < 4) {
							w15 = -42;
						} else {
							w15 = -49;
						}
					} else {
						if (hops < 4) {
							w15 = -65;
						} else {
							w15 = -98;
						}
					}
				}
			}
		} else {
			if (rel_time < 10937) {
				if (hops < 2) {
					if (rel_time < 10901) {
						w15 = -51;
					} else {
						if (rel_time < 10906) {
							w15 = -15;
						} else {
							w15 = 1;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 10901) {
							w15 = 86;
						} else {
							w15 = 100;
						}
					} else {
						if (hops < 4) {
							w15 = 35;
						} else {
							w15 = -19;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11512) {
						w15 = 49;
					} else {
						w15 = 22;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11512) {
							w15 = -73;
						} else {
							w15 = -59;
						}
					} else {
						if (hops < 4) {
							w15 = -27;
						} else {
							w15 = 22;
						}
					}
				}
			}
		}
	} else {
		if (prod != 1) {
			if (hops < 2) {
				if (size < 69) {
					if (rel_time < 11853) {
						if (rel_time < 1015) {
							w15 = 49;
						} else {
							w15 = -48;
						}
					} else {
						if (rel_time < 12186) {
							w15 = 2049;
						} else {
							w15 = 79;
						}
					}
				} else {
					if (prod != 2) {
						if (size < 133) {
							w15 = -4;
						} else {
							w15 = 10;
						}
					} else {
						if (rel_time < 12186) {
							w15 = 17;
						} else {
							w15 = -27;
						}
					}
				}
			} else {
				if (size < 69) {
					if (hops < 3) {
						if (rel_time < 1627) {
							w15 = 170;
						} else {
							w15 = 63;
						}
					} else {
						if (hops < 4) {
							w15 = -27;
						} else {
							w15 = 49;
						}
					}
				} else {
					if (hops < 3) {
						if (prod != 2) {
							w15 = 1;
						} else {
							w15 = -31;
						}
					} else {
						if (rel_time < 3546) {
							w15 = 18;
						} else {
							w15 = 8;
						}
					}
				}
			}
		} else {
			if (rel_time < 1697) {
				if (rel_time < 1285) {
					if (hops < 2) {
						if (rel_time < 854) {
							w15 = 61;
						} else {
							w15 = 32;
						}
					} else {
						if (rel_time < 854) {
							w15 = -13;
						} else {
							w15 = -83;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1629) {
							w15 = -401;
						} else {
							w15 = -160;
						}
					} else {
						if (rel_time < 1629) {
							w15 = 324;
						} else {
							w15 = 171;
						}
					}
				}
			} else {
				if (rel_time < 7737) {
					if (hops < 2) {
						if (rel_time < 2238) {
							w15 = 41;
						} else {
							w15 = -14;
						}
					} else {
						if (rel_time < 3302) {
							w15 = -46;
						} else {
							w15 = -19;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w15 = 2;
						} else {
							w15 = -25;
						}
					} else {
						if (rel_time < 9416) {
							w15 = 2;
						} else {
							w15 = 16;
						}
					}
				}
			}
		}
	}
	int w16;
	if (rel_time < 2324) {
		if (rel_time < 1840) {
			if (rel_time < 1770) {
				if (hops < 2) {
					if (rel_time < 1015) {
						if (rel_time < 497) {
							w16 = -19;
						} else {
							w16 = 27;
						}
					} else {
						if (size < 69) {
							w16 = -52;
						} else {
							w16 = -8;
						}
					}
				} else {
					if (hops < 3) {
						if (prod != 0) {
							w16 = 13;
						} else {
							w16 = 102;
						}
					} else {
						if (rel_time < 1199) {
							w16 = 18;
						} else {
							w16 = -36;
						}
					}
				}
			} else {
				if (hops < 2) {
					w16 = 4;
				} else {
					if (size < 69) {
						w16 = -604;
					} else {
						if (hops < 3) {
							w16 = 78;
						} else {
							w16 = 120;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 2) {
					if (prod != 4) {
						if (rel_time < 2087) {
							w16 = 12;
						} else {
							w16 = 30;
						}
					} else {
						w16 = 3;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 2238) {
							w16 = 85;
						} else {
							w16 = -81;
						}
					} else {
						if (rel_time < 2238) {
							w16 = -114;
						} else {
							w16 = -29;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w16 = -211;
					} else {
						w16 = -196;
					}
				} else {
					if (rel_time < 1841) {
						w16 = -7;
					} else {
						w16 = 31;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 69) {
				if (rel_time < 9416) {
					if (hops < 4) {
						if (rel_time < 5403) {
							w16 = -7;
						} else {
							w16 = -15;
						}
					} else {
						if (size < 37) {
							w16 = -14;
						} else {
							w16 = 16;
						}
					}
				} else {
					if (rel_time < 10180) {
						if (hops < 4) {
							w16 = 14;
						} else {
							w16 = 28;
						}
					} else {
						if (rel_time < 10634) {
							w16 = -34;
						} else {
							w16 = 1;
						}
					}
				}
			} else {
				if (rel_time < 2411) {
					if (rel_time < 2346) {
						if (hops < 4) {
							w16 = 8;
						} else {
							w16 = -5;
						}
					} else {
						if (hops < 2) {
							w16 = 4;
						} else {
							w16 = 82;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 2920) {
							w16 = -29;
						} else {
							w16 = 5;
						}
					} else {
						if (hops < 2) {
							w16 = 11;
						} else {
							w16 = -16;
						}
					}
				}
			}
		} else {
			if (rel_time < 2690) {
				if (hops < 2) {
					if (rel_time < 2411) {
						w16 = 153;
					} else {
						w16 = 135;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w16 = 69;
						} else {
							w16 = 58;
						}
					} else {
						if (rel_time < 2411) {
							w16 = 102;
						} else {
							w16 = 125;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11853) {
						if (rel_time < 11242) {
							w16 = -22;
						} else {
							w16 = -65;
						}
					} else {
						if (rel_time < 12186) {
							w16 = 1320;
						} else {
							w16 = 47;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3301) {
							w16 = 121;
						} else {
							w16 = 46;
						}
					} else {
						if (rel_time < 11853) {
							w16 = -1;
						} else {
							w16 = 91;
						}
					}
				}
			}
		}
	}
	int w17;
	if (hops < 4) {
		if (rel_time < 12091) {
			if (size < 133) {
				if (rel_time < 2347) {
					if (prod != 0) {
						if (prod != 2) {
							w17 = -3;
						} else {
							w17 = 20;
						}
					} else {
						if (rel_time < 1627) {
							w17 = -8;
						} else {
							w17 = -122;
						}
					}
				} else {
					if (rel_time < 2690) {
						if (cons != 5) {
							w17 = -6;
						} else {
							w17 = 42;
						}
					} else {
						if (rel_time < 2920) {
							w17 = -22;
						} else {
							w17 = -2;
						}
					}
				}
			} else {
				if (rel_time < 10882) {
					if (rel_time < 10877) {
						if (rel_time < 10288) {
							w17 = 5;
						} else {
							w17 = -44;
						}
					} else {
						if (hops < 2) {
							w17 = 6;
						} else {
							w17 = 13;
						}
					}
				} else {
					if (rel_time < 10901) {
						w17 = -8;
					} else {
						if (rel_time < 11490) {
							w17 = -1;
						} else {
							w17 = 2;
						}
					}
				}
			}
		} else {
			if (size < 69) {
				if (rel_time < 12186) {
					if (hops < 2) {
						w17 = 851;
					} else {
						w17 = 2359;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12191) {
							w17 = 24;
						} else {
							w17 = 35;
						}
					} else {
						if (hops < 3) {
							w17 = 81;
						} else {
							w17 = 45;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (rel_time < 12771) {
						if (prod != 2) {
							w17 = 8;
						} else {
							w17 = -3;
						}
					} else {
						if (hops < 2) {
							w17 = -17;
						} else {
							w17 = 46;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12630) {
							w17 = -85;
						} else {
							w17 = -3;
						}
					} else {
						if (rel_time < 12630) {
							w17 = 1;
						} else {
							w17 = -59;
						}
					}
				}
			}
		}
	} else {
		if (cons != 5) {
			if (rel_time < 2850) {
				if (size < 37) {
					if (rel_time < 972) {
						if (rel_time < 497) {
							w17 = -12;
						} else {
							w17 = 9;
						}
					} else {
						if (rel_time < 1770) {
							w17 = 79;
						} else {
							w17 = 9;
						}
					}
				} else {
					if (rel_time < 2238) {
						if (rel_time < 1629) {
							w17 = -28;
						} else {
							w17 = 27;
						}
					} else {
						if (size < 133) {
							w17 = -79;
						} else {
							w17 = -3;
						}
					}
				}
			} else {
				if (size < 37) {
					if (rel_time < 10901) {
						if (rel_time < 10293) {
							w17 = -8;
						} else {
							w17 = -69;
						}
					} else {
						if (rel_time < 11512) {
							w17 = 28;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 4072) {
						if (size < 133) {
							w17 = 30;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 12156) {
							w17 = 11;
						} else {
							w17 = -10;
						}
					}
				}
			}
		} else {
			if (rel_time < 3301) {
				if (rel_time < 1015) {
					w17 = 117;
				} else {
					if (rel_time < 2382) {
						if (size < 69) {
							w17 = 14;
						} else {
							w17 = 59;
						}
					} else {
						if (rel_time < 2994) {
							w17 = 76;
						} else {
							w17 = 59;
						}
					}
				}
			} else {
				if (rel_time < 4244) {
					if (rel_time < 4216) {
						if (rel_time < 3634) {
							w17 = 0;
						} else {
							w17 = -8;
						}
					} else {
						w17 = -24;
					}
				} else {
					if (size < 69) {
						if (rel_time < 11242) {
							w17 = 15;
						} else {
							w17 = 37;
						}
					} else {
						if (rel_time < 12186) {
							w17 = 10;
						} else {
							w17 = -11;
						}
					}
				}
			}
		}
	}
	int w18;
	if (hops < 4) {
		if (rel_time < 12091) {
			if (size < 133) {
				if (prod != 3) {
					if (rel_time < 1840) {
						if (prod != 1) {
							w18 = -3;
						} else {
							w18 = 18;
						}
					} else {
						if (rel_time < 2087) {
							w18 = -64;
						} else {
							w18 = -2;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1101) {
							w18 = -67;
						} else {
							w18 = -1;
						}
					} else {
						if (rel_time < 1101) {
							w18 = 43;
						} else {
							w18 = 4;
						}
					}
				}
			} else {
				if (rel_time < 768) {
					if (hops < 3) {
						if (hops < 2) {
							w18 = 2;
						} else {
							w18 = 9;
						}
					} else {
						w18 = -19;
					}
				} else {
					if (rel_time < 10882) {
						if (rel_time < 9066) {
							w18 = 3;
						} else {
							w18 = 5;
						}
					} else {
						if (hops < 3) {
							w18 = 2;
						} else {
							w18 = -3;
						}
					}
				}
			}
		} else {
			if (size < 69) {
				if (rel_time < 12186) {
					if (hops < 2) {
						w18 = 548;
					} else {
						w18 = 1483;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12191) {
							w18 = 14;
						} else {
							w18 = 21;
						}
					} else {
						if (hops < 3) {
							w18 = 49;
						} else {
							w18 = 27;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (rel_time < 12695) {
						if (rel_time < 12160) {
							w18 = 4;
						} else {
							w18 = -9;
						}
					} else {
						if (hops < 2) {
							w18 = -4;
						} else {
							w18 = 18;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12630) {
							w18 = -51;
						} else {
							w18 = -2;
						}
					} else {
						if (rel_time < 12630) {
							w18 = 1;
						} else {
							w18 = -36;
						}
					}
				}
			}
		}
	} else {
		if (cons != 5) {
			if (rel_time < 2850) {
				if (prod != 6) {
					if (rel_time < 1101) {
						if (prod != 4) {
							w18 = -11;
						} else {
							w18 = 84;
						}
					} else {
						if (rel_time < 1629) {
							w18 = -86;
						} else {
							w18 = -15;
						}
					}
				} else {
					if (rel_time < 1163) {
						if (rel_time < 768) {
							w18 = -6;
						} else {
							w18 = 6;
						}
					} else {
						if (rel_time < 1402) {
							w18 = 71;
						} else {
							w18 = 8;
						}
					}
				}
			} else {
				if (prod != 6) {
					if (rel_time < 4072) {
						if (rel_time < 3531) {
							w18 = 7;
						} else {
							w18 = 43;
						}
					} else {
						if (rel_time < 4158) {
							w18 = -9;
						} else {
							w18 = 8;
						}
					}
				} else {
					if (rel_time < 8455) {
						if (rel_time < 7235) {
							w18 = -3;
						} else {
							w18 = -19;
						}
					} else {
						if (rel_time < 9066) {
							w18 = 21;
						} else {
							w18 = 3;
						}
					}
				}
			}
		} else {
			if (rel_time < 3301) {
				if (rel_time < 1015) {
					w18 = 71;
				} else {
					if (rel_time < 2382) {
						if (rel_time < 1840) {
							w18 = 32;
						} else {
							w18 = -5;
						}
					} else {
						if (rel_time < 2995) {
							w18 = 45;
						} else {
							w18 = 32;
						}
					}
				}
			} else {
				if (rel_time < 5466) {
					if (rel_time < 5439) {
						if (rel_time < 4244) {
							w18 = -5;
						} else {
							w18 = 4;
						}
					} else {
						w18 = -32;
					}
				} else {
					if (rel_time < 6965) {
						if (rel_time < 6663) {
							w18 = 10;
						} else {
							w18 = 48;
						}
					} else {
						if (rel_time < 7576) {
							w18 = -11;
						} else {
							w18 = 9;
						}
					}
				}
			}
		}
	}
	int w19;
	if (prod != 0) {
		if (hops < 3) {
			if (rel_time < 1627) {
				if (rel_time < 1285) {
					if (size < 37) {
						if (hops < 2) {
							w19 = 4;
						} else {
							w19 = -25;
						}
					} else {
						if (rel_time < 1163) {
							w19 = 8;
						} else {
							w19 = -6;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1402) {
							w19 = -30;
						} else {
							w19 = 574;
						}
					} else {
						if (rel_time < 1402) {
							w19 = 174;
						} else {
							w19 = 455;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1697) {
						if (size < 69) {
							w19 = -102;
						} else {
							w19 = -1;
						}
					} else {
						if (rel_time < 1712) {
							w19 = 43;
						} else {
							w19 = 1;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 2920) {
							w19 = -16;
						} else {
							w19 = -2;
						}
					} else {
						if (rel_time < 3023) {
							w19 = 28;
						} else {
							w19 = -28;
						}
					}
				}
			}
		} else {
			if (rel_time < 1629) {
				if (rel_time < 1199) {
					if (prod != 4) {
						if (rel_time < 854) {
							w19 = -15;
						} else {
							w19 = 0;
						}
					} else {
						if (hops < 4) {
							w19 = 57;
						} else {
							w19 = 50;
						}
					}
				} else {
					if (size < 37) {
						if (hops < 4) {
							w19 = -131;
						} else {
							w19 = 42;
						}
					} else {
						if (rel_time < 1285) {
							w19 = -55;
						} else {
							w19 = -29;
						}
					}
				}
			} else {
				if (rel_time < 1697) {
					if (size < 69) {
						w19 = 181;
					} else {
						if (hops < 4) {
							w19 = 17;
						} else {
							w19 = -375;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 2850) {
							w19 = -27;
						} else {
							w19 = 1;
						}
					} else {
						if (rel_time < 1840) {
							w19 = 22;
						} else {
							w19 = 4;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 1015) {
				if (rel_time < 973) {
					w19 = 33;
				} else {
					w19 = 11;
				}
			} else {
				if (rel_time < 2087) {
					if (rel_time < 1402) {
						w19 = -79;
					} else {
						if (rel_time < 1627) {
							w19 = -45;
						} else {
							w19 = -54;
						}
					}
				} else {
					if (rel_time < 2690) {
						if (rel_time < 2411) {
							w19 = 76;
						} else {
							w19 = 65;
						}
					} else {
						if (rel_time < 10631) {
							w19 = -15;
						} else {
							w19 = 2;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1015) {
					w19 = -97;
				} else {
					if (rel_time < 1627) {
						w19 = 229;
					} else {
						if (rel_time < 2087) {
							w19 = -48;
						} else {
							w19 = 28;
						}
					}
				}
			} else {
				if (rel_time < 2087) {
					if (rel_time < 1015) {
						if (hops < 4) {
							w19 = 58;
						} else {
							w19 = 42;
						}
					} else {
						if (rel_time < 1840) {
							w19 = -156;
						} else {
							w19 = -31;
						}
					}
				} else {
					if (rel_time < 11242) {
						if (rel_time < 10631) {
							w19 = 0;
						} else {
							w19 = -34;
						}
					} else {
						if (rel_time < 12186) {
							w19 = 29;
						} else {
							w19 = 16;
						}
					}
				}
			}
		}
	}
	int w20;
	if (prod != 0) {
		if (hops < 3) {
			if (rel_time < 3023) {
				if (prod != 4) {
					if (rel_time < 1200) {
						if (rel_time < 1199) {
							w20 = -2;
						} else {
							w20 = -32;
						}
					} else {
						if (rel_time < 1629) {
							w20 = 45;
						} else {
							w20 = 4;
						}
					}
				} else {
					if (rel_time < 1627) {
						if (rel_time < 1087) {
							w20 = 16;
						} else {
							w20 = 368;
						}
					} else {
						if (hops < 2) {
							w20 = 2;
						} else {
							w20 = -51;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (prod != 2) {
						if (rel_time < 3462) {
							w20 = -28;
						} else {
							w20 = 0;
						}
					} else {
						if (hops < 2) {
							w20 = 6;
						} else {
							w20 = -17;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3461) {
							w20 = -15;
						} else {
							w20 = 1;
						}
					} else {
						if (rel_time < 7737) {
							w20 = -22;
						} else {
							w20 = -11;
						}
					}
				}
			}
		} else {
			if (rel_time < 1629) {
				if (rel_time < 1199) {
					if (prod != 4) {
						if (rel_time < 854) {
							w20 = -9;
						} else {
							w20 = 0;
						}
					} else {
						w20 = 33;
					}
				} else {
					if (size < 37) {
						if (hops < 4) {
							w20 = -78;
						} else {
							w20 = 25;
						}
					} else {
						if (rel_time < 1285) {
							w20 = -33;
						} else {
							w20 = -17;
						}
					}
				}
			} else {
				if (rel_time < 1697) {
					if (size < 69) {
						w20 = 109;
					} else {
						if (hops < 4) {
							w20 = 10;
						} else {
							w20 = -227;
						}
					}
				} else {
					if (rel_time < 1840) {
						if (rel_time < 1770) {
							w20 = 2;
						} else {
							w20 = 49;
						}
					} else {
						if (rel_time < 2238) {
							w20 = -53;
						} else {
							w20 = 1;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 1015) {
				if (rel_time < 973) {
					w20 = 20;
				} else {
					w20 = 6;
				}
			} else {
				if (rel_time < 2087) {
					if (rel_time < 1402) {
						w20 = -47;
					} else {
						if (rel_time < 1627) {
							w20 = -27;
						} else {
							w20 = -32;
						}
					}
				} else {
					if (rel_time < 2690) {
						if (rel_time < 2411) {
							w20 = 46;
						} else {
							w20 = 39;
						}
					} else {
						if (rel_time < 3301) {
							w20 = -29;
						} else {
							w20 = -5;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1015) {
					w20 = -58;
				} else {
					if (rel_time < 1627) {
						if (rel_time < 1402) {
							w20 = 119;
						} else {
							w20 = 139;
						}
					} else {
						if (rel_time < 2087) {
							w20 = -29;
						} else {
							w20 = 17;
						}
					}
				}
			} else {
				if (rel_time < 2087) {
					if (rel_time < 1015) {
						if (hops < 4) {
							w20 = 35;
						} else {
							w20 = 25;
						}
					} else {
						if (hops < 4) {
							w20 = -88;
						} else {
							w20 = 40;
						}
					}
				} else {
					if (rel_time < 2690) {
						if (hops < 4) {
							w20 = 19;
						} else {
							w20 = 26;
						}
					} else {
						if (rel_time < 11242) {
							w20 = -3;
						} else {
							w20 = 13;
						}
					}
				}
			}
		}
	}
	int w21;
	if (rel_time < 12771) {
		if (size < 37) {
			if (hops < 2) {
				if (rel_time < 10937) {
					if (rel_time < 9714) {
						if (rel_time < 9070) {
							w21 = -8;
						} else {
							w21 = 13;
						}
					} else {
						if (rel_time < 10901) {
							w21 = -27;
						} else {
							w21 = -7;
						}
					}
				} else {
					if (rel_time < 11512) {
						w21 = 30;
					} else {
						w21 = 14;
					}
				}
			} else {
				if (rel_time < 10937) {
					if (rel_time < 10326) {
						if (rel_time < 9714) {
							w21 = 0;
						} else {
							w21 = -19;
						}
					} else {
						if (hops < 3) {
							w21 = 59;
						} else {
							w21 = 12;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11512) {
							w21 = -42;
						} else {
							w21 = -34;
						}
					} else {
						if (hops < 4) {
							w21 = -16;
						} else {
							w21 = 7;
						}
					}
				}
			}
		} else {
			if (rel_time < 4828) {
				if (rel_time < 2346) {
					if (prod != 1) {
						if (rel_time < 1163) {
							w21 = 4;
						} else {
							w21 = -6;
						}
					} else {
						if (rel_time < 1285) {
							w21 = -9;
						} else {
							w21 = 24;
						}
					}
				} else {
					if (rel_time < 3301) {
						if (cons != 5) {
							w21 = 0;
						} else {
							w21 = 15;
						}
					} else {
						if (prod != 2) {
							w21 = 3;
						} else {
							w21 = -7;
						}
					}
				}
			} else {
				if (rel_time < 7810) {
					if (prod != 1) {
						if (rel_time < 5364) {
							w21 = -10;
						} else {
							w21 = 1;
						}
					} else {
						if (rel_time < 7579) {
							w21 = -6;
						} else {
							w21 = -37;
						}
					}
				} else {
					if (rel_time < 8352) {
						if (prod != 2) {
							w21 = 10;
						} else {
							w21 = -9;
						}
					} else {
						if (rel_time < 8419) {
							w21 = -16;
						} else {
							w21 = 0;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 12777) {
				w21 = -13;
			} else {
				w21 = -1;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 12777) {
					w21 = 45;
				} else {
					w21 = 3;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 12777) {
						w21 = 16;
					} else {
						w21 = 27;
					}
				} else {
					w21 = -7;
				}
			}
		}
	}
	int w22;
	if (hops < 4) {
		if (rel_time < 12695) {
			if (rel_time < 12625) {
				if (rel_time < 12091) {
					if (rel_time < 11247) {
						if (rel_time < 10791) {
							w22 = 0;
						} else {
							w22 = 7;
						}
					} else {
						if (rel_time < 12086) {
							w22 = -4;
						} else {
							w22 = -15;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 12186) {
							w22 = 728;
						} else {
							w22 = 9;
						}
					} else {
						if (hops < 2) {
							w22 = 8;
						} else {
							w22 = -1;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (hops < 2) {
						if (rel_time < 12630) {
							w22 = -38;
						} else {
							w22 = -2;
						}
					} else {
						if (rel_time < 12630) {
							w22 = -1;
						} else {
							w22 = -22;
						}
					}
				} else {
					if (hops < 3) {
						w22 = -2;
					} else {
						w22 = 7;
					}
				}
			}
		} else {
			if (rel_time < 12700) {
				w22 = 21;
			} else {
				if (prod != 2) {
					if (hops < 2) {
						w22 = 1;
					} else {
						if (hops < 3) {
							w22 = -24;
						} else {
							w22 = -40;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12771) {
							w22 = -29;
						} else {
							w22 = -7;
						}
					} else {
						if (rel_time < 12771) {
							w22 = 34;
						} else {
							w22 = 18;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 12186) {
				if (rel_time < 10963) {
					if (rel_time < 10791) {
						if (rel_time < 2238) {
							w22 = 4;
						} else {
							w22 = 0;
						}
					} else {
						if (rel_time < 10796) {
							w22 = -37;
						} else {
							w22 = -9;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 12014) {
							w22 = 3;
						} else {
							w22 = 16;
						}
					} else {
						if (rel_time < 11490) {
							w22 = 32;
						} else {
							w22 = 12;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 12625) {
						w22 = -39;
					} else {
						if (rel_time < 12695) {
							w22 = 1;
						} else {
							w22 = -11;
						}
					}
				} else {
					if (rel_time < 12700) {
						if (rel_time < 12695) {
							w22 = -36;
						} else {
							w22 = -24;
						}
					} else {
						w22 = -6;
					}
				}
			}
		} else {
			if (rel_time < 1627) {
				if (rel_time < 1402) {
					if (rel_time < 1015) {
						w22 = 14;
					} else {
						w22 = 37;
					}
				} else {
					w22 = 65;
				}
			} else {
				if (rel_time < 1841) {
					w22 = -9;
				} else {
					if (rel_time < 9748) {
						if (rel_time < 9412) {
							w22 = 7;
						} else {
							w22 = -14;
						}
					} else {
						if (rel_time < 10631) {
							w22 = 47;
						} else {
							w22 = 1;
						}
					}
				}
			}
		}
	}
	int w23;
	if (rel_time < 6014) {
		if (rel_time < 6012) {
			if (rel_time < 1770) {
				if (rel_time < 1743) {
					if (hops < 3) {
						if (hops < 2) {
							w23 = -6;
						} else {
							w23 = 9;
						}
					} else {
						if (prod != 0) {
							w23 = -2;
						} else {
							w23 = -28;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = -8;
						} else {
							w23 = -52;
						}
					} else {
						if (hops < 4) {
							w23 = 14;
						} else {
							w23 = 30;
						}
					}
				}
			} else {
				if (rel_time < 1840) {
					if (size < 69) {
						w23 = -357;
					} else {
						if (hops < 2) {
							w23 = -3;
						} else {
							w23 = 31;
						}
					}
				} else {
					if (rel_time < 2324) {
						if (hops < 2) {
							w23 = 5;
						} else {
							w23 = -9;
						}
					} else {
						if (rel_time < 3301) {
							w23 = 4;
						} else {
							w23 = 0;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w23 = 11;
			} else {
				if (hops < 3) {
					w23 = 42;
				} else {
					w23 = 19;
				}
			}
		}
	} else {
		if (rel_time < 7810) {
			if (size < 37) {
				if (rel_time < 6623) {
					if (hops < 4) {
						if (hops < 3) {
							w23 = -24;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_time < 6048) {
							w23 = -44;
						} else {
							w23 = -21;
						}
					}
				} else {
					if (rel_time < 6626) {
						if (hops < 2) {
							w23 = -12;
						} else {
							w23 = 3;
						}
					} else {
						if (rel_time < 6660) {
							w23 = -30;
						} else {
							w23 = -12;
						}
					}
				}
			} else {
				if (rel_time < 7740) {
					if (prod != 1) {
						if (rel_time < 6585) {
							w23 = -5;
						} else {
							w23 = 2;
						}
					} else {
						if (hops < 4) {
							w23 = -10;
						} else {
							w23 = 20;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = -16;
						} else {
							w23 = -24;
						}
					} else {
						if (prod != 3) {
							w23 = 15;
						} else {
							w23 = -11;
						}
					}
				}
			}
		} else {
			if (rel_time < 8495) {
				if (rel_time < 8455) {
					if (prod != 4) {
						if (hops < 3) {
							w23 = -2;
						} else {
							w23 = 6;
						}
					} else {
						if (hops < 3) {
							w23 = 20;
						} else {
							w23 = 3;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = 1;
						} else {
							w23 = 45;
						}
					} else {
						if (hops < 4) {
							w23 = -8;
						} else {
							w23 = 14;
						}
					}
				}
			} else {
				if (rel_time < 9132) {
					if (hops < 2) {
						if (rel_time < 8961) {
							w23 = 19;
						} else {
							w23 = -9;
						}
					} else {
						if (rel_time < 8799) {
							w23 = -25;
						} else {
							w23 = -6;
						}
					}
				} else {
					if (rel_time < 9714) {
						if (hops < 2) {
							w23 = -2;
						} else {
							w23 = 9;
						}
					} else {
						if (rel_time < 10791) {
							w23 = -3;
						} else {
							w23 = 1;
						}
					}
				}
			}
		}
	}
	int w24;
	if (rel_time < 497) {
		if (hops < 4) {
			if (hops < 2) {
				w24 = -4;
			} else {
				w24 = -9;
			}
		} else {
			w24 = 5;
		}
	} else {
		if (rel_time < 6014) {
			if (rel_time < 6012) {
				if (hops < 2) {
					if (rel_time < 5466) {
						if (rel_time < 973) {
							w24 = 15;
						} else {
							w24 = -1;
						}
					} else {
						if (prod != 0) {
							w24 = -7;
						} else {
							w24 = -52;
						}
					}
				} else {
					if (rel_time < 5364) {
						if (rel_time < 4790) {
							w24 = 1;
						} else {
							w24 = -7;
						}
					} else {
						if (prod != 0) {
							w24 = 4;
						} else {
							w24 = 29;
						}
					}
				}
			} else {
				if (hops < 2) {
					w24 = 7;
				} else {
					if (hops < 3) {
						w24 = 25;
					} else {
						w24 = 11;
					}
				}
			}
		} else {
			if (rel_time < 7576) {
				if (prod != 3) {
					if (hops < 2) {
						if (rel_time < 7298) {
							w24 = -2;
						} else {
							w24 = 30;
						}
					} else {
						if (rel_time < 7298) {
							w24 = -4;
						} else {
							w24 = -23;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 7199) {
							w24 = -2;
						} else {
							w24 = -19;
						}
					} else {
						if (rel_time < 6588) {
							w24 = 16;
						} else {
							w24 = 5;
						}
					}
				}
			} else {
				if (rel_time < 7579) {
					if (hops < 4) {
						if (hops < 2) {
							w24 = 27;
						} else {
							w24 = 9;
						}
					} else {
						w24 = 36;
					}
				} else {
					if (rel_time < 7737) {
						if (hops < 3) {
							w24 = -23;
						} else {
							w24 = -12;
						}
					} else {
						if (rel_time < 7740) {
							w24 = 12;
						} else {
							w24 = 0;
						}
					}
				}
			}
		}
	}
	int w25;
	if (rel_time < 972) {
		if (hops < 2) {
			if (rel_time < 768) {
				if (rel_time < 497) {
					w25 = -2;
				} else {
					w25 = -6;
				}
			} else {
				w25 = 17;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 768) {
					if (size < 37) {
						if (rel_time < 432) {
							w25 = 0;
						} else {
							w25 = -9;
						}
					} else {
						w25 = -2;
					}
				} else {
					if (rel_time < 854) {
						w25 = -15;
					} else {
						w25 = -25;
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 4) {
						if (rel_time < 432) {
							w25 = -9;
						} else {
							w25 = -1;
						}
					} else {
						w25 = 3;
					}
				} else {
					if (hops < 4) {
						w25 = -3;
					} else {
						w25 = -21;
					}
				}
			}
		}
	} else {
		if (rel_time < 1101) {
			if (hops < 2) {
				if (rel_time < 1087) {
					if (rel_time < 1015) {
						w25 = 6;
					} else {
						w25 = -12;
					}
				} else {
					w25 = -41;
				}
			} else {
				if (rel_time < 1015) {
					if (hops < 3) {
						w25 = -40;
					} else {
						if (hops < 4) {
							w25 = 31;
						} else {
							w25 = 19;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1087) {
							w25 = 24;
						} else {
							w25 = 48;
						}
					} else {
						if (rel_time < 1087) {
							w25 = 19;
						} else {
							w25 = -4;
						}
					}
				}
			}
		} else {
			if (rel_time < 1285) {
				if (hops < 2) {
					if (rel_time < 1199) {
						if (rel_time < 1163) {
							w25 = 6;
						} else {
							w25 = -12;
						}
					} else {
						if (rel_time < 1200) {
							w25 = 43;
						} else {
							w25 = 28;
						}
					}
				} else {
					if (rel_time < 1199) {
						if (rel_time < 1163) {
							w25 = -4;
						} else {
							w25 = 2;
						}
					} else {
						if (hops < 3) {
							w25 = -39;
						} else {
							w25 = -16;
						}
					}
				}
			} else {
				if (rel_time < 1627) {
					if (hops < 3) {
						if (hops < 2) {
							w25 = -20;
						} else {
							w25 = 83;
						}
					} else {
						if (hops < 4) {
							w25 = -72;
						} else {
							w25 = 30;
						}
					}
				} else {
					if (rel_time < 1712) {
						if (size < 69) {
							w25 = 24;
						} else {
							w25 = -19;
						}
					} else {
						if (size < 37) {
							w25 = -2;
						} else {
							w25 = 0;
						}
					}
				}
			}
		}
	}
	int w26;
	if (rel_time < 5403) {
		if (rel_time < 5401) {
			if (size < 37) {
				if (rel_time < 3569) {
					if (rel_time < 2347) {
						if (rel_time < 1402) {
							w26 = 1;
						} else {
							w26 = -8;
						}
					} else {
						if (hops < 3) {
							w26 = 8;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (rel_time < 4215) {
						if (hops < 3) {
							w26 = -18;
						} else {
							w26 = -2;
						}
					} else {
						if (hops < 3) {
							w26 = 0;
						} else {
							w26 = -12;
						}
					}
				}
			} else {
				if (rel_time < 2920) {
					if (rel_time < 2690) {
						if (prod != 4) {
							w26 = 1;
						} else {
							w26 = -5;
						}
					} else {
						if (hops < 2) {
							w26 = 8;
						} else {
							w26 = -15;
						}
					}
				} else {
					if (rel_time < 2935) {
						if (hops < 2) {
							w26 = -10;
						} else {
							w26 = 24;
						}
					} else {
						if (rel_time < 3301) {
							w26 = 5;
						} else {
							w26 = 1;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w26 = 38;
				} else {
					w26 = 61;
				}
			} else {
				if (hops < 4) {
					w26 = 6;
				} else {
					w26 = 13;
				}
			}
		}
	} else {
		if (rel_time < 5906) {
			if (cons != 5) {
				if (hops < 2) {
					if (size < 69) {
						if (rel_time < 5437) {
							w26 = -18;
						} else {
							w26 = -6;
						}
					} else {
						w26 = 38;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 5747) {
							w26 = -23;
						} else {
							w26 = -28;
						}
					} else {
						if (rel_time < 5745) {
							w26 = -3;
						} else {
							w26 = -12;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (size < 69) {
						w26 = -31;
					} else {
						w26 = 1;
					}
				} else {
					if (size < 69) {
						if (hops < 4) {
							w26 = 19;
						} else {
							w26 = 6;
						}
					} else {
						if (rel_time < 5439) {
							w26 = -1;
						} else {
							w26 = -13;
						}
					}
				}
			}
		} else {
			if (rel_time < 5974) {
				if (hops < 2) {
					w26 = -18;
				} else {
					if (hops < 3) {
						w26 = 56;
					} else {
						if (hops < 4) {
							w26 = 12;
						} else {
							w26 = -13;
						}
					}
				}
			} else {
				if (rel_time < 5975) {
					if (hops < 2) {
						w26 = -15;
					} else {
						if (hops < 4) {
							w26 = -28;
						} else {
							w26 = -16;
						}
					}
				} else {
					if (rel_time < 5989) {
						if (hops < 2) {
							w26 = -2;
						} else {
							w26 = 20;
						}
					} else {
						if (rel_time < 7129) {
							w26 = -2;
						} else {
							w26 = 0;
						}
					}
				}
			}
		}
	}
	int w27;
	if (rel_time < 972) {
		if (hops < 2) {
			if (rel_time < 768) {
				w27 = -3;
			} else {
				w27 = 10;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 768) {
					w27 = -3;
				} else {
					if (rel_time < 854) {
						w27 = -9;
					} else {
						w27 = -15;
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 768) {
						if (hops < 4) {
							w27 = -3;
						} else {
							w27 = 2;
						}
					} else {
						w27 = 1;
					}
				} else {
					if (hops < 4) {
						w27 = -2;
					} else {
						w27 = -13;
					}
				}
			}
		}
	} else {
		if (rel_time < 1087) {
			if (hops < 3) {
				if (rel_time < 1015) {
					if (hops < 2) {
						w27 = 3;
					} else {
						w27 = -24;
					}
				} else {
					if (hops < 2) {
						w27 = -5;
					} else {
						w27 = 17;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1015) {
						w27 = 18;
					} else {
						w27 = 15;
					}
				} else {
					w27 = 10;
				}
			}
		} else {
			if (rel_time < 12771) {
				if (rel_time < 11247) {
					if (rel_time < 11242) {
						if (rel_time < 10906) {
							w27 = 0;
						} else {
							w27 = -4;
						}
					} else {
						if (hops < 2) {
							w27 = 22;
						} else {
							w27 = 17;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w27 = -3;
						} else {
							w27 = 2;
						}
					} else {
						if (hops < 2) {
							w27 = -14;
						} else {
							w27 = 12;
						}
					}
				}
			} else {
				if (hops < 2) {
					w27 = -5;
				} else {
					if (hops < 3) {
						if (rel_time < 12777) {
							w27 = 20;
						} else {
							w27 = -6;
						}
					} else {
						if (rel_time < 12777) {
							w27 = 1;
						} else {
							w27 = 9;
						}
					}
				}
			}
		}
	}
	int w28;
	if (rel_time < 6965) {
		if (rel_time < 6689) {
			if (rel_time < 4524) {
				if (rel_time < 4159) {
					if (prod != 4) {
						if (rel_time < 3911) {
							w28 = 0;
						} else {
							w28 = 11;
						}
					} else {
						if (rel_time < 1627) {
							w28 = 7;
						} else {
							w28 = -8;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 0) {
							w28 = -3;
						} else {
							w28 = -46;
						}
					} else {
						if (prod != 0) {
							w28 = -11;
						} else {
							w28 = 18;
						}
					}
				}
			} else {
				if (rel_time < 4753) {
					if (prod != 4) {
						if (rel_time < 4683) {
							w28 = -10;
						} else {
							w28 = -38;
						}
					} else {
						if (hops < 2) {
							w28 = 22;
						} else {
							w28 = 31;
						}
					}
				} else {
					if (rel_time < 5403) {
						if (rel_time < 5401) {
							w28 = 1;
						} else {
							w28 = 20;
						}
					} else {
						if (hops < 3) {
							w28 = -2;
						} else {
							w28 = 3;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w28 = -31;
			} else {
				if (hops < 3) {
					w28 = 31;
				} else {
					if (hops < 4) {
						w28 = 21;
					} else {
						w28 = 32;
					}
				}
			}
		}
	} else {
		if (rel_time < 7129) {
			if (rel_time < 6967) {
				if (hops < 4) {
					if (hops < 2) {
						w28 = -24;
					} else {
						w28 = -5;
					}
				} else {
					w28 = 24;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 7126) {
						w28 = -25;
					} else {
						w28 = 14;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 7126) {
							w28 = -30;
						} else {
							w28 = -25;
						}
					} else {
						if (hops < 4) {
							w28 = -18;
						} else {
							w28 = -13;
						}
					}
				}
			}
		} else {
			if (rel_time < 7196) {
				if (hops < 2) {
					w28 = -22;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w28 = 68;
						} else {
							w28 = 43;
						}
					} else {
						w28 = -9;
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 12700) {
						if (rel_time < 12695) {
							w28 = 0;
						} else {
							w28 = 10;
						}
					} else {
						if (hops < 2) {
							w28 = 1;
						} else {
							w28 = -17;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12186) {
							w28 = 7;
						} else {
							w28 = -7;
						}
					} else {
						if (hops < 3) {
							w28 = -12;
						} else {
							w28 = 0;
						}
					}
				}
			}
		}
	}
	int w29;
	if (rel_time < 12771) {
		if (rel_time < 1285) {
			if (rel_time < 1199) {
				if (hops < 2) {
					if (prod != 3) {
						if (size < 69) {
							w29 = 3;
						} else {
							w29 = -3;
						}
					} else {
						w29 = -25;
					}
				} else {
					if (prod != 3) {
						if (hops < 3) {
							w29 = -4;
						} else {
							w29 = 2;
						}
					} else {
						if (hops < 3) {
							w29 = 28;
						} else {
							w29 = -3;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1200) {
						w29 = 25;
					} else {
						w29 = 16;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1200) {
							w29 = -36;
						} else {
							w29 = -19;
						}
					} else {
						if (rel_time < 1200) {
							w29 = 0;
						} else {
							w29 = -13;
						}
					}
				}
			}
		} else {
			if (rel_time < 1629) {
				if (prod != 1) {
					if (hops < 3) {
						if (hops < 2) {
							w29 = -6;
						} else {
							w29 = 27;
						}
					} else {
						if (hops < 4) {
							w29 = -37;
						} else {
							w29 = 24;
						}
					}
				} else {
					if (hops < 2) {
						w29 = -220;
					} else {
						if (hops < 4) {
							w29 = 233;
						} else {
							w29 = -430;
						}
					}
				}
			} else {
				if (rel_time < 1712) {
					if (hops < 3) {
						if (hops < 2) {
							w29 = -4;
						} else {
							w29 = -41;
						}
					} else {
						if (size < 69) {
							w29 = 46;
						} else {
							w29 = -7;
						}
					}
				} else {
					if (rel_time < 1840) {
						if (prod != 0) {
							w29 = 4;
						} else {
							w29 = -225;
						}
					} else {
						if (rel_time < 2324) {
							w29 = -2;
						} else {
							w29 = 0;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			w29 = 0;
		} else {
			if (hops < 3) {
				if (rel_time < 12777) {
					w29 = 16;
				} else {
					w29 = 1;
				}
			} else {
				w29 = 1;
			}
		}
	}
	int w30;
	if (rel_time < 8495) {
		if (rel_time < 8419) {
			if (rel_time < 8352) {
				if (prod != 6) {
					if (rel_time < 8191) {
						if (rel_time < 6965) {
							w30 = 1;
						} else {
							w30 = -1;
						}
					} else {
						if (hops < 4) {
							w30 = 5;
						} else {
							w30 = 22;
						}
					}
				} else {
					if (rel_time < 1743) {
						if (rel_time < 1163) {
							w30 = -1;
						} else {
							w30 = 4;
						}
					} else {
						if (rel_time < 1744) {
							w30 = -10;
						} else {
							w30 = -2;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (hops < 4) {
						if (hops < 2) {
							w30 = -3;
						} else {
							w30 = 22;
						}
					} else {
						w30 = -45;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w30 = -29;
						} else {
							w30 = -35;
						}
					} else {
						w30 = -15;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (size < 37) {
					if (hops < 2) {
						w30 = -15;
					} else {
						if (rel_time < 8457) {
							w30 = 55;
						} else {
							w30 = 63;
						}
					}
				} else {
					if (rel_time < 8455) {
						if (rel_time < 8435) {
							w30 = 5;
						} else {
							w30 = 14;
						}
					} else {
						if (hops < 2) {
							w30 = 24;
						} else {
							w30 = -20;
						}
					}
				}
			} else {
				if (prod != 6) {
					if (hops < 4) {
						if (rel_time < 8435) {
							w30 = 14;
						} else {
							w30 = 6;
						}
					} else {
						if (rel_time < 8423) {
							w30 = -10;
						} else {
							w30 = 1;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 8455) {
							w30 = 0;
						} else {
							w30 = -11;
						}
					} else {
						if (rel_time < 8455) {
							w30 = -10;
						} else {
							w30 = 13;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9030) {
			if (rel_time < 8961) {
				if (hops < 2) {
					if (prod != 0) {
						if (prod != 4) {
							w30 = -11;
						} else {
							w30 = 44;
						}
					} else {
						if (rel_time < 8524) {
							w30 = 40;
						} else {
							w30 = 22;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 3) {
							w30 = -6;
						} else {
							w30 = 4;
						}
					} else {
						if (hops < 3) {
							w30 = -13;
						} else {
							w30 = -23;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (prod != 3) {
						if (rel_time < 8965) {
							w30 = -25;
						} else {
							w30 = 26;
						}
					} else {
						if (hops < 2) {
							w30 = -38;
						} else {
							w30 = -32;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 8965) {
							w30 = -1;
						} else {
							w30 = -116;
						}
					} else {
						w30 = 29;
					}
				}
			}
		} else {
			if (rel_time < 9044) {
				if (hops < 2) {
					w30 = 10;
				} else {
					w30 = 18;
				}
			} else {
				if (rel_time < 9416) {
					if (size < 37) {
						if (hops < 2) {
							w30 = 5;
						} else {
							w30 = -19;
						}
					} else {
						if (hops < 2) {
							w30 = -14;
						} else {
							w30 = 3;
						}
					}
				} else {
					if (rel_time < 10180) {
						if (hops < 2) {
							w30 = 11;
						} else {
							w30 = 2;
						}
					} else {
						if (rel_time < 10250) {
							w30 = -11;
						} else {
							w30 = 0;
						}
					}
				}
			}
		}
	}
	return (177993 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30) >> 8;
}
