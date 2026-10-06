#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (prod != 0) {
		if (prod != 1) {
			if (hops < 3) {
				if (hops < 2) {
					w0 = -8120;
				} else {
					w0 = -7224;
				}
			} else {
				if (hops < 4) {
					w0 = -6328;
				} else {
					if (hops < 5) {
						w0 = -5432;
					} else {
						w0 = -4536;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1829) {
						w0 = -12344;
					} else {
						if (rel_time < 2663) {
							w0 = -11960;
						} else {
							w0 = -12344;
						}
					}
				} else {
					if (rel_time < 1829) {
						w0 = -11448;
					} else {
						if (rel_time < 2663) {
							w0 = -11064;
						} else {
							w0 = -11448;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1829) {
						w0 = -10552;
					} else {
						if (rel_time < 2663) {
							w0 = -10168;
						} else {
							w0 = -10552;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1829) {
							w0 = -9656;
						} else {
							w0 = -9528;
						}
					} else {
						if (rel_time < 1829) {
							w0 = -8760;
						} else {
							w0 = -8632;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (cons != 2) {
				if (cons != 3) {
					if (rel_time < 726) {
						if (hops < 3) {
							w0 = -2892;
						} else {
							w0 = -1201;
						}
					} else {
						if (cons != 4) {
							w0 = 4557;
						} else {
							w0 = 7098;
						}
					}
				} else {
					if (size < 9) {
						if (rel_time < 2196) {
							w0 = 3619;
						} else {
							w0 = 7075;
						}
					} else {
						if (rel_time < 2396) {
							w0 = 11640;
						} else {
							w0 = 6307;
						}
					}
				}
			} else {
				if (rel_time < 1522) {
					if (rel_time < 885) {
						if (rel_time < 665) {
							w0 = 9892;
						} else {
							w0 = 7460;
						}
					} else {
						if (hops < 3) {
							w0 = 13748;
						} else {
							w0 = 15439;
						}
					}
				} else {
					if (hops < 3) {
						if (size < 9) {
							w0 = 6958;
						} else {
							w0 = 8244;
						}
					} else {
						if (size < 9) {
							w0 = 8648;
						} else {
							w0 = 9935;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (hops < 3) {
					if (rel_time < 648) {
						if (hops < 2) {
							w0 = -12472;
						} else {
							w0 = -11576;
						}
					} else {
						if (rel_time < 2144) {
							w0 = -9164;
						} else {
							w0 = -11980;
						}
					}
				} else {
					if (rel_time < 648) {
						if (hops < 4) {
							w0 = -10680;
						} else {
							w0 = -9635;
						}
					} else {
						if (rel_time < 2144) {
							w0 = -7472;
						} else {
							w0 = -10288;
						}
					}
				}
			} else {
				if (rel_time < 2357) {
					if (rel_time < 866) {
						if (hops < 3) {
							w0 = 6452;
						} else {
							w0 = 8144;
						}
					} else {
						if (rel_time < 1504) {
							w0 = -6876;
						} else {
							w0 = 5539;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w0 = -9336;
						} else {
							w0 = -8440;
						}
					} else {
						if (hops < 4) {
							w0 = -7544;
						} else {
							w0 = -6499;
						}
					}
				}
			}
		}
	}
	int w1;
	if (prod != 0) {
		if (prod != 1) {
			if (hops < 3) {
				if (hops < 2) {
					w1 = -4060;
				} else {
					w1 = -3612;
				}
			} else {
				if (hops < 4) {
					w1 = -3164;
				} else {
					if (hops < 5) {
						w1 = -2716;
					} else {
						w1 = -2268;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1829) {
						w1 = -6172;
					} else {
						if (rel_time < 2663) {
							w1 = -5980;
						} else {
							w1 = -6172;
						}
					}
				} else {
					if (rel_time < 1829) {
						w1 = -5724;
					} else {
						if (rel_time < 2663) {
							w1 = -5532;
						} else {
							w1 = -5724;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1829) {
						w1 = -5276;
					} else {
						if (rel_time < 2663) {
							w1 = -5084;
						} else {
							w1 = -5276;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 2663) {
							w1 = -4722;
						} else {
							w1 = -4892;
						}
					} else {
						if (rel_time < 2663) {
							w1 = -4274;
						} else {
							w1 = -4444;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (hops < 3) {
				if (cons != 2) {
					if (cons != 3) {
						if (rel_time < 1559) {
							w1 = 760;
						} else {
							w1 = 2081;
						}
					} else {
						if (size < 9) {
							w1 = 1635;
						} else {
							w1 = 4403;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1522) {
							w1 = 4190;
						} else {
							w1 = 3309;
						}
					} else {
						if (rel_time < 1522) {
							w1 = 5086;
						} else {
							w1 = 4203;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (cons != 3) {
						if (rel_time < 726) {
							w1 = -600;
						} else {
							w1 = 3442;
						}
					} else {
						if (size < 9) {
							w1 = 3326;
						} else {
							w1 = 6094;
						}
					}
				} else {
					if (rel_time < 1522) {
						if (rel_time < 885) {
							w1 = 5277;
						} else {
							w1 = 7720;
						}
					} else {
						if (rel_time < 2377) {
							w1 = 4130;
						} else {
							w1 = 5161;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (hops < 2) {
					if (rel_time < 2144) {
						if (rel_time < 648) {
							w1 = -6236;
						} else {
							w1 = -5075;
						}
					} else {
						w1 = -6483;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 648) {
							w1 = -5575;
						} else {
							w1 = -4859;
						}
					} else {
						if (rel_time < 648) {
							w1 = -4818;
						} else {
							w1 = -3787;
						}
					}
				}
			} else {
				if (rel_time < 2357) {
					if (rel_time < 866) {
						if (hops < 4) {
							w1 = 3377;
						} else {
							w1 = 4725;
						}
					} else {
						if (rel_time < 1504) {
							w1 = -3438;
						} else {
							w1 = 2770;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w1 = -4668;
						} else {
							w1 = -4220;
						}
					} else {
						if (hops < 5) {
							w1 = -3648;
						} else {
							w1 = -2503;
						}
					}
				}
			}
		}
	}
	int w2;
	if (prod != 0) {
		if (prod != 1) {
			if (hops < 3) {
				if (hops < 2) {
					w2 = -2030;
				} else {
					w2 = -1806;
				}
			} else {
				if (hops < 4) {
					w2 = -1582;
				} else {
					if (hops < 5) {
						w2 = -1358;
					} else {
						w2 = -1134;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1829) {
						w2 = -3086;
					} else {
						if (rel_time < 2663) {
							w2 = -2990;
						} else {
							w2 = -3086;
						}
					}
				} else {
					if (rel_time < 1829) {
						w2 = -2862;
					} else {
						if (rel_time < 2663) {
							w2 = -2766;
						} else {
							w2 = -2862;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1829) {
						w2 = -2638;
					} else {
						if (rel_time < 2663) {
							w2 = -2542;
						} else {
							w2 = -2638;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1829) {
							w2 = -2467;
						} else {
							w2 = -2347;
						}
					} else {
						if (rel_time < 1829) {
							w2 = -2244;
						} else {
							w2 = -2123;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (hops < 4) {
				if (cons != 7) {
					if (rel_time < 2359) {
						if (rel_time < 920) {
							w2 = 1843;
						} else {
							w2 = 690;
						}
					} else {
						if (rel_time < 2432) {
							w2 = 5113;
						} else {
							w2 = 1206;
						}
					}
				} else {
					if (rel_time < 809) {
						if (hops < 2) {
							w2 = 1381;
						} else {
							w2 = 2065;
						}
					} else {
						if (rel_time < 972) {
							w2 = -2364;
						} else {
							w2 = 217;
						}
					}
				}
			} else {
				if (cons != 7) {
					if (rel_time < 2359) {
						if (rel_time < 920) {
							w2 = 3175;
						} else {
							w2 = 1921;
						}
					} else {
						if (rel_time < 2432) {
							w2 = 6546;
						} else {
							w2 = 2568;
						}
					}
				} else {
					if (rel_time < 809) {
						if (hops < 5) {
							w2 = 2728;
						} else {
							w2 = 3623;
						}
					} else {
						if (rel_time < 972) {
							w2 = -1348;
						} else {
							w2 = 1673;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (rel_time < 2144) {
					if (rel_time < 648) {
						if (hops < 3) {
							w2 = -3054;
						} else {
							w2 = -2499;
						}
					} else {
						if (hops < 2) {
							w2 = -2537;
						} else {
							w2 = -1606;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w2 = -3241;
						} else {
							w2 = -3133;
						}
					} else {
						if (hops < 5) {
							w2 = -2747;
						} else {
							w2 = -1851;
						}
					}
				}
			} else {
				if (rel_time < 2357) {
					if (rel_time < 866) {
						if (hops < 2) {
							w2 = 1045;
						} else {
							w2 = 2053;
						}
					} else {
						if (rel_time < 1504) {
							w2 = -1719;
						} else {
							w2 = 1385;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2967) {
							w2 = -1932;
						} else {
							w2 = -2316;
						}
					} else {
						if (rel_time < 2967) {
							w2 = -1329;
						} else {
							w2 = -1713;
						}
					}
				}
			}
		}
	}
	int w3;
	if (prod != 0) {
		if (prod != 1) {
			if (hops < 3) {
				if (hops < 2) {
					w3 = -1015;
				} else {
					w3 = -903;
				}
			} else {
				if (hops < 4) {
					w3 = -791;
				} else {
					if (hops < 5) {
						w3 = -679;
					} else {
						w3 = -567;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1829) {
						w3 = -1543;
					} else {
						if (rel_time < 2663) {
							w3 = -1495;
						} else {
							w3 = -1543;
						}
					}
				} else {
					if (rel_time < 1829) {
						w3 = -1431;
					} else {
						if (rel_time < 2663) {
							w3 = -1383;
						} else {
							w3 = -1431;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1829) {
						w3 = -1319;
					} else {
						if (rel_time < 2663) {
							w3 = -1271;
						} else {
							w3 = -1319;
						}
					}
				} else {
					if (rel_time < 2663) {
						if (rel_time < 1829) {
							w3 = -1215;
						} else {
							w3 = -956;
						}
					} else {
						if (hops < 5) {
							w3 = -1273;
						} else {
							w3 = -1161;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (hops < 2) {
				if (cons != 2) {
					if (rel_time < 726) {
						if (rel_time < 700) {
							w3 = 236;
						} else {
							w3 = -3239;
						}
					} else {
						if (rel_time < 920) {
							w3 = 1099;
						} else {
							w3 = -289;
						}
					}
				} else {
					if (rel_time < 885) {
						if (rel_time < 665) {
							w3 = 686;
						} else {
							w3 = -530;
						}
					} else {
						if (rel_time < 1522) {
							w3 = 3942;
						} else {
							w3 = 1003;
						}
					}
				}
			} else {
				if (rel_time < 1122) {
					if (rel_time < 938) {
						if (rel_time < 726) {
							w3 = 370;
						} else {
							w3 = 1500;
						}
					} else {
						if (cons != 7) {
							w3 = -2971;
						} else {
							w3 = -909;
						}
					}
				} else {
					if (rel_time < 1540) {
						if (cons != 2) {
							w3 = 4631;
						} else {
							w3 = 3735;
						}
					} else {
						if (rel_time < 2451) {
							w3 = 1238;
						} else {
							w3 = 732;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (rel_time < 2144) {
					if (rel_time < 648) {
						if (hops < 5) {
							w3 = -1432;
						} else {
							w3 = -413;
						}
					} else {
						if (hops < 4) {
							w3 = -1026;
						} else {
							w3 = -386;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w3 = -1604;
						} else {
							w3 = -1540;
						}
					} else {
						if (hops < 5) {
							w3 = -1373;
						} else {
							w3 = -925;
						}
					}
				}
			} else {
				if (rel_time < 2357) {
					if (hops < 3) {
						if (rel_time < 866) {
							w3 = 738;
						} else {
							w3 = -835;
						}
					} else {
						if (rel_time < 1504) {
							w3 = 592;
						} else {
							w3 = 1633;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w3 = -1272;
						} else {
							w3 = -1048;
						}
					} else {
						if (rel_time < 2967) {
							w3 = -743;
						} else {
							w3 = -935;
						}
					}
				}
			}
		}
	}
	int w4;
	if (prod != 0) {
		if (prod != 1) {
			if (hops < 3) {
				if (hops < 2) {
					w4 = -508;
				} else {
					w4 = -452;
				}
			} else {
				if (hops < 4) {
					w4 = -396;
				} else {
					if (hops < 5) {
						w4 = -340;
					} else {
						w4 = -284;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1829) {
						w4 = -772;
					} else {
						if (rel_time < 2663) {
							w4 = -748;
						} else {
							w4 = -772;
						}
					}
				} else {
					if (rel_time < 1829) {
						w4 = -716;
					} else {
						if (rel_time < 2663) {
							w4 = -692;
						} else {
							w4 = -716;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1829) {
						w4 = -660;
					} else {
						if (rel_time < 2663) {
							w4 = -636;
						} else {
							w4 = -660;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 2663) {
							w4 = -583;
						} else {
							w4 = -636;
						}
					} else {
						if (rel_time < 2663) {
							w4 = -471;
						} else {
							w4 = -581;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (rel_time < 2379) {
				if (cons != 4) {
					if (rel_time < 839) {
						if (cons != 7) {
							w4 = 1175;
						} else {
							w4 = 315;
						}
					} else {
						if (rel_time < 1122) {
							w4 = -811;
						} else {
							w4 = 432;
						}
					}
				} else {
					if (rel_time < 726) {
						if (hops < 3) {
							w4 = -2119;
						} else {
							w4 = -1656;
						}
					} else {
						if (rel_time < 920) {
							w4 = 1331;
						} else {
							w4 = -748;
						}
					}
				}
			} else {
				if (rel_time < 2414) {
					if (cons != 4) {
						if (hops < 2) {
							w4 = -248;
						} else {
							w4 = -82;
						}
					} else {
						if (hops < 5) {
							w4 = 6086;
						} else {
							w4 = 7293;
						}
					}
				} else {
					if (rel_time < 2434) {
						if (hops < 3) {
							w4 = 1411;
						} else {
							w4 = 1802;
						}
					} else {
						if (rel_time < 2468) {
							w4 = -1358;
						} else {
							w4 = 392;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (hops < 5) {
					if (hops < 2) {
						if (rel_time < 648) {
							w4 = -875;
						} else {
							w4 = -787;
						}
					} else {
						if (rel_time < 2144) {
							w4 = -528;
						} else {
							w4 = -762;
						}
					}
				} else {
					if (rel_time < 2144) {
						if (rel_time < 648) {
							w4 = -206;
						} else {
							w4 = 554;
						}
					} else {
						w4 = -463;
					}
				}
			} else {
				if (rel_time < 866) {
					if (hops < 2) {
						w4 = 153;
					} else {
						if (hops < 5) {
							w4 = 659;
						} else {
							w4 = 1786;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1504) {
							w4 = -998;
						} else {
							w4 = -232;
						}
					} else {
						if (rel_time < 2357) {
							w4 = 953;
						} else {
							w4 = -341;
						}
					}
				}
			}
		}
	}
	int w5;
	if (cons != 2) {
		if (prod != 0) {
			if (prod != 1) {
				if (hops < 3) {
					if (hops < 2) {
						w5 = -254;
					} else {
						w5 = -226;
					}
				} else {
					if (hops < 4) {
						w5 = -198;
					} else {
						if (hops < 5) {
							w5 = -170;
						} else {
							w5 = -142;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1829) {
							w5 = -386;
						} else {
							w5 = -382;
						}
					} else {
						if (rel_time < 1829) {
							w5 = -358;
						} else {
							w5 = -354;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1829) {
							w5 = -330;
						} else {
							w5 = -326;
						}
					} else {
						if (rel_time < 1829) {
							w5 = -325;
						} else {
							w5 = -274;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 1504) {
					if (rel_time < 938) {
						if (rel_time < 726) {
							w5 = -489;
						} else {
							w5 = 212;
						}
					} else {
						if (cons != 7) {
							w5 = -2491;
						} else {
							w5 = -1111;
						}
					}
				} else {
					if (rel_time < 1540) {
						w5 = 3538;
					} else {
						if (rel_time < 2451) {
							w5 = -65;
						} else {
							w5 = -494;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 726) {
						if (cons != 3) {
							w5 = -767;
						} else {
							w5 = 432;
						}
					} else {
						if (rel_time < 921) {
							w5 = 605;
						} else {
							w5 = 74;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 2396) {
							w5 = 1126;
						} else {
							w5 = 1472;
						}
					} else {
						if (size < 9) {
							w5 = -19;
						} else {
							w5 = 708;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2377) {
			if (rel_time < 2359) {
				if (rel_time < 885) {
					if (hops < 3) {
						if (rel_time < 665) {
							w5 = 88;
						} else {
							w5 = -172;
						}
					} else {
						if (rel_time < 665) {
							w5 = 1303;
						} else {
							w5 = 515;
						}
					}
				} else {
					if (rel_time < 1522) {
						if (hops < 3) {
							w5 = 2058;
						} else {
							w5 = 1201;
						}
					} else {
						if (hops < 4) {
							w5 = 368;
						} else {
							w5 = 941;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w5 = -2323;
					} else {
						if (hops < 4) {
							w5 = -1954;
						} else {
							w5 = -1725;
						}
					}
				} else {
					w5 = -829;
				}
			}
		} else {
			if (rel_time < 2986) {
				if (hops < 2) {
					w5 = 1699;
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w5 = 2283;
						} else {
							w5 = 1926;
						}
					} else {
						w5 = 2965;
					}
				}
			} else {
				if (hops < 2) {
					w5 = 38;
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w5 = 622;
						} else {
							w5 = 266;
						}
					} else {
						w5 = 1305;
					}
				}
			}
		}
	}
	int w6;
	if (cons != 2) {
		if (hops < 4) {
			if (rel_time < 2302) {
				if (rel_time < 2144) {
					if (cons != 3) {
						if (cons != 5) {
							w6 = -183;
						} else {
							w6 = 410;
						}
					} else {
						if (rel_time < 903) {
							w6 = 127;
						} else {
							w6 = 1903;
						}
					}
				} else {
					if (cons != 3) {
						if (cons != 5) {
							w6 = -451;
						} else {
							w6 = 197;
						}
					} else {
						if (hops < 2) {
							w6 = -2043;
						} else {
							w6 = -1956;
						}
					}
				}
			} else {
				if (rel_time < 2451) {
					if (cons != 4) {
						if (cons != 3) {
							w6 = 578;
						} else {
							w6 = -363;
						}
					} else {
						if (hops < 3) {
							w6 = 2894;
						} else {
							w6 = 3138;
						}
					}
				} else {
					if (rel_time < 2468) {
						if (cons != 7) {
							w6 = 1131;
						} else {
							w6 = -1754;
						}
					} else {
						if (rel_time < 3040) {
							w6 = -272;
						} else {
							w6 = 14;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (prod != 1) {
					if (hops < 5) {
						w6 = -85;
					} else {
						w6 = -71;
					}
				} else {
					if (rel_time < 2663) {
						if (rel_time < 1829) {
							w6 = -163;
						} else {
							w6 = -59;
						}
					} else {
						if (hops < 5) {
							w6 = -181;
						} else {
							w6 = -153;
						}
					}
				}
			} else {
				if (rel_time < 2302) {
					if (cons != 5) {
						if (rel_time < 2144) {
							w6 = 210;
						} else {
							w6 = -393;
						}
					} else {
						if (rel_time < 754) {
							w6 = 1015;
						} else {
							w6 = 528;
						}
					}
				} else {
					if (rel_time < 2451) {
						if (cons != 4) {
							w6 = 883;
						} else {
							w6 = 3249;
						}
					} else {
						if (rel_time < 3022) {
							w6 = -488;
						} else {
							w6 = 441;
						}
					}
				}
			}
		}
	} else {
		if (hops < 5) {
			if (rel_time < 2377) {
				if (rel_time < 2359) {
					if (rel_time < 2170) {
						if (rel_time < 885) {
							w6 = 155;
						} else {
							w6 = 589;
						}
					} else {
						if (hops < 2) {
							w6 = -295;
						} else {
							w6 = 86;
						}
					}
				} else {
					if (hops < 2) {
						w6 = -1162;
					} else {
						if (hops < 3) {
							w6 = -1015;
						} else {
							w6 = -904;
						}
					}
				}
			} else {
				if (rel_time < 2986) {
					if (hops < 2) {
						w6 = 849;
					} else {
						if (hops < 3) {
							w6 = 1141;
						} else {
							w6 = 963;
						}
					}
				} else {
					if (hops < 2) {
						w6 = 19;
					} else {
						if (hops < 3) {
							w6 = 311;
						} else {
							w6 = 133;
						}
					}
				}
			}
		} else {
			if (rel_time < 2170) {
				if (rel_time < 665) {
					w6 = 1635;
				} else {
					if (rel_time < 867) {
						w6 = 1241;
					} else {
						if (rel_time < 1522) {
							w6 = 1616;
						} else {
							w6 = 1389;
						}
					}
				}
			} else {
				if (rel_time < 2377) {
					if (rel_time < 2359) {
						w6 = 1013;
					} else {
						w6 = -414;
					}
				} else {
					if (rel_time < 2986) {
						w6 = 1483;
					} else {
						w6 = 653;
					}
				}
			}
		}
	}
	int w7;
	if (hops < 2) {
		if (cons != 6) {
			if (rel_time < 3960) {
				if (rel_time < 3925) {
					if (rel_time < 2986) {
						if (size < 9) {
							w7 = -197;
						} else {
							w7 = -7;
						}
					} else {
						if (cons != 4) {
							w7 = -95;
						} else {
							w7 = -1717;
						}
					}
				} else {
					if (cons != 5) {
						if (cons != 3) {
							w7 = 572;
						} else {
							w7 = 1063;
						}
					} else {
						w7 = -1101;
					}
				}
			} else {
				if (cons != 8) {
					if (rel_time < 3977) {
						w7 = -1102;
					} else {
						w7 = -607;
					}
				} else {
					w7 = 178;
				}
			}
		} else {
			if (rel_time < 2432) {
				if (size < 9) {
					if (rel_time < 781) {
						w7 = 76;
					} else {
						w7 = -461;
					}
				} else {
					if (rel_time < 955) {
						if (rel_time < 938) {
							w7 = -3161;
						} else {
							w7 = -1812;
						}
					} else {
						if (rel_time < 1594) {
							w7 = -467;
						} else {
							w7 = -1596;
						}
					}
				}
			} else {
				if (rel_time < 2451) {
					if (rel_time < 2434) {
						w7 = 324;
					} else {
						w7 = 1709;
					}
				} else {
					if (rel_time < 3040) {
						w7 = -63;
					} else {
						w7 = -206;
					}
				}
			}
		}
	} else {
		if (cons != 2) {
			if (rel_time < 920) {
				if (rel_time < 726) {
					if (rel_time < 700) {
						if (rel_time < 648) {
							w7 = 32;
						} else {
							w7 = 171;
						}
					} else {
						if (hops < 3) {
							w7 = -994;
						} else {
							w7 = -486;
						}
					}
				} else {
					if (cons != 7) {
						if (cons != 1) {
							w7 = 450;
						} else {
							w7 = 94;
						}
					} else {
						if (hops < 3) {
							w7 = 126;
						} else {
							w7 = -169;
						}
					}
				}
			} else {
				if (rel_time < 1122) {
					if (cons != 6) {
						if (rel_time < 972) {
							w7 = -34;
						} else {
							w7 = -1089;
						}
					} else {
						if (rel_time < 938) {
							w7 = -3351;
						} else {
							w7 = -1089;
						}
					}
				} else {
					if (cons != 8) {
						if (rel_time < 3960) {
							w7 = 16;
						} else {
							w7 = -393;
						}
					} else {
						if (hops < 3) {
							w7 = 221;
						} else {
							w7 = 488;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 885) {
					if (rel_time < 665) {
						if (hops < 3) {
							w7 = 239;
						} else {
							w7 = 432;
						}
					} else {
						if (hops < 3) {
							w7 = -419;
						} else {
							w7 = 38;
						}
					}
				} else {
					if (rel_time < 1522) {
						if (hops < 3) {
							w7 = 983;
						} else {
							w7 = 145;
						}
					} else {
						if (rel_time < 2377) {
							w7 = 40;
						} else {
							w7 = 286;
						}
					}
				}
			} else {
				if (rel_time < 665) {
					if (hops < 5) {
						w7 = 662;
					} else {
						w7 = 818;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 2377) {
							w7 = 215;
						} else {
							w7 = 417;
						}
					} else {
						if (rel_time < 2170) {
							w7 = 708;
						} else {
							w7 = 452;
						}
					}
				}
			}
		}
	}
	int w8;
	if (rel_time < 3925) {
		if (rel_time < 3228) {
			if (rel_time < 3043) {
				if (rel_time < 2986) {
					if (rel_time < 2379) {
						if (cons != 6) {
							w8 = -7;
						} else {
							w8 = -256;
						}
					} else {
						if (cons != 4) {
							w8 = 65;
						} else {
							w8 = 1505;
						}
					}
				} else {
					if (cons != 4) {
						if (rel_time < 3004) {
							w8 = -398;
						} else {
							w8 = -80;
						}
					} else {
						if (hops < 2) {
							w8 = -859;
						} else {
							w8 = -1417;
						}
					}
				}
			} else {
				if (cons != 7) {
					if (hops < 5) {
						if (cons != 8) {
							w8 = 21;
						} else {
							w8 = 219;
						}
					} else {
						if (rel_time < 3058) {
							w8 = 301;
						} else {
							w8 = 449;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w8 = 1105;
						} else {
							w8 = 1150;
						}
					} else {
						if (hops < 5) {
							w8 = 1350;
						} else {
							w8 = 1517;
						}
					}
				}
			}
		} else {
			if (cons != 1) {
				if (prod != 1) {
					if (rel_time < 3570) {
						if (hops < 4) {
							w8 = -111;
						} else {
							w8 = -49;
						}
					} else {
						if (hops < 3) {
							w8 = 32;
						} else {
							w8 = -85;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w8 = -154;
						} else {
							w8 = -189;
						}
					} else {
						if (hops < 5) {
							w8 = -99;
						} else {
							w8 = -85;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 3848) {
						w8 = -328;
					} else {
						w8 = -137;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w8 = -508;
						} else {
							w8 = -446;
						}
					} else {
						if (hops < 5) {
							w8 = -554;
						} else {
							w8 = -491;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3960) {
			if (cons != 5) {
				if (hops < 2) {
					if (cons != 3) {
						w8 = 286;
					} else {
						w8 = 531;
					}
				} else {
					if (cons != 3) {
						if (hops < 3) {
							w8 = 665;
						} else {
							w8 = 893;
						}
					} else {
						if (hops < 5) {
							w8 = 1185;
						} else {
							w8 = 1405;
						}
					}
				}
			} else {
				if (hops < 2) {
					w8 = -551;
				} else {
					if (hops < 3) {
						w8 = -1009;
					} else {
						w8 = -793;
					}
				}
			}
		} else {
			if (cons != 5) {
				if (cons != 7) {
					if (hops < 3) {
						if (hops < 2) {
							w8 = -7;
						} else {
							w8 = 130;
						}
					} else {
						if (hops < 5) {
							w8 = 280;
						} else {
							w8 = 478;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w8 = -303;
						} else {
							w8 = -309;
						}
					} else {
						if (hops < 5) {
							w8 = -109;
						} else {
							w8 = 58;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w8 = -551;
					} else {
						w8 = -804;
					}
				} else {
					if (hops < 5) {
						w8 = -588;
					} else {
						w8 = -390;
					}
				}
			}
		}
	}
	int w9;
	if (hops < 5) {
		if (rel_time < 920) {
			if (cons != 5) {
				if (rel_time < 903) {
					if (cons != 4) {
						if (cons != 6) {
							w9 = 37;
						} else {
							w9 = 213;
						}
					} else {
						if (rel_time < 726) {
							w9 = -288;
						} else {
							w9 = 279;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w9 = 270;
						} else {
							w9 = 542;
						}
					} else {
						if (hops < 4) {
							w9 = 96;
						} else {
							w9 = 130;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w9 = 522;
					} else {
						w9 = 698;
					}
				} else {
					if (hops < 4) {
						w9 = 252;
					} else {
						w9 = 180;
					}
				}
			}
		} else {
			if (rel_time < 1122) {
				if (rel_time < 972) {
					if (cons != 6) {
						if (hops < 3) {
							w9 = 58;
						} else {
							w9 = -187;
						}
					} else {
						if (rel_time < 938) {
							w9 = -1531;
						} else {
							w9 = -517;
						}
					}
				} else {
					if (hops < 2) {
						w9 = -1806;
					} else {
						if (hops < 3) {
							w9 = -310;
						} else {
							w9 = -727;
						}
					}
				}
			} else {
				if (rel_time < 1765) {
					if (cons != 3) {
						if (cons != 7) {
							w9 = -44;
						} else {
							w9 = 798;
						}
					} else {
						if (hops < 4) {
							w9 = 950;
						} else {
							w9 = 2158;
						}
					}
				} else {
					if (cons != 3) {
						if (cons != 7) {
							w9 = 11;
						} else {
							w9 = -217;
						}
					} else {
						if (rel_time < 2196) {
							w9 = -1034;
						} else {
							w9 = 12;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 3292) {
				if (rel_time < 2663) {
					if (rel_time < 2129) {
						w9 = -40;
					} else {
						w9 = -23;
					}
				} else {
					if (rel_time < 2952) {
						w9 = -76;
					} else {
						w9 = -42;
					}
				}
			} else {
				if (rel_time < 3570) {
					w9 = -19;
				} else {
					w9 = -42;
				}
			}
		} else {
			if (rel_time < 2451) {
				if (rel_time < 2434) {
					if (rel_time < 648) {
						w9 = -211;
					} else {
						if (cons != 5) {
							w9 = 406;
						} else {
							w9 = 668;
						}
					}
				} else {
					w9 = 2206;
				}
			} else {
				if (rel_time < 2468) {
					w9 = -1017;
				} else {
					if (cons != 1) {
						if (rel_time < 2609) {
							w9 = 881;
						} else {
							w9 = 268;
						}
					} else {
						if (rel_time < 2967) {
							w9 = -3;
						} else {
							w9 = -245;
						}
					}
				}
			}
		}
	}
	int w10;
	if (prod != 0) {
		if (prod != 1) {
			if (rel_time < 1485) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w10 = -7;
						} else {
							w10 = -4;
						}
					} else {
						w10 = 10;
					}
				} else {
					if (hops < 5) {
						w10 = -25;
					} else {
						w10 = -20;
					}
				}
			} else {
				if (rel_time < 2952) {
					if (hops < 4) {
						if (hops < 3) {
							w10 = -29;
						} else {
							w10 = -13;
						}
					} else {
						if (rel_time < 2129) {
							w10 = -47;
						} else {
							w10 = -80;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w10 = -36;
						} else {
							w10 = -72;
						}
					} else {
						if (hops < 5) {
							w10 = -31;
						} else {
							w10 = -9;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 1177) {
					if (hops < 3) {
						if (hops < 2) {
							w10 = -73;
						} else {
							w10 = -70;
						}
					} else {
						if (hops < 4) {
							w10 = -56;
						} else {
							w10 = -73;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w10 = -87;
						} else {
							w10 = -98;
						}
					} else {
						if (rel_time < 1829) {
							w10 = -90;
						} else {
							w10 = -77;
						}
					}
				}
			} else {
				if (rel_time < 2663) {
					if (rel_time < 1829) {
						w10 = -19;
					} else {
						w10 = -12;
					}
				} else {
					w10 = -21;
				}
			}
		}
	} else {
		if (rel_time < 2379) {
			if (rel_time < 2359) {
				if (cons != 4) {
					if (rel_time < 1765) {
						if (rel_time < 1486) {
							w10 = -17;
						} else {
							w10 = 244;
						}
					} else {
						if (cons != 3) {
							w10 = -14;
						} else {
							w10 = -538;
						}
					}
				} else {
					if (rel_time < 920) {
						if (rel_time < 726) {
							w10 = -153;
						} else {
							w10 = 155;
						}
					} else {
						if (rel_time < 1559) {
							w10 = -600;
						} else {
							w10 = 88;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (hops < 4) {
						if (hops < 3) {
							w10 = -222;
						} else {
							w10 = -149;
						}
					} else {
						if (hops < 5) {
							w10 = -592;
						} else {
							w10 = -419;
						}
					}
				} else {
					if (hops < 2) {
						w10 = -580;
					} else {
						if (hops < 5) {
							w10 = -517;
						} else {
							w10 = -633;
						}
					}
				}
			}
		} else {
			if (rel_time < 2451) {
				if (cons != 7) {
					if (rel_time < 2434) {
						if (cons != 4) {
							w10 = 370;
						} else {
							w10 = 741;
						}
					} else {
						if (hops < 2) {
							w10 = 816;
						} else {
							w10 = 1825;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w10 = -2325;
						} else {
							w10 = -2273;
						}
					} else {
						w10 = -2058;
					}
				}
			} else {
				if (rel_time < 2468) {
					if (cons != 7) {
						if (hops < 3) {
							w10 = 454;
						} else {
							w10 = 527;
						}
					} else {
						if (hops < 4) {
							w10 = -806;
						} else {
							w10 = -1007;
						}
					}
				} else {
					if (cons != 7) {
						if (rel_time < 2609) {
							w10 = 362;
						} else {
							w10 = -33;
						}
					} else {
						if (rel_time < 3075) {
							w10 = 718;
						} else {
							w10 = -5;
						}
					}
				}
			}
		}
	}
	int w11;
	if (rel_time < 3925) {
		if (cons != 2) {
			if (rel_time < 938) {
				if (cons != 5) {
					if (hops < 5) {
						if (rel_time < 920) {
							w11 = 29;
						} else {
							w11 = -757;
						}
					} else {
						if (cons != 3) {
							w11 = 173;
						} else {
							w11 = 662;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 754) {
							w11 = 318;
						} else {
							w11 = 207;
						}
					} else {
						if (rel_time < 754) {
							w11 = 146;
						} else {
							w11 = -46;
						}
					}
				}
			} else {
				if (rel_time < 1122) {
					if (hops < 2) {
						if (rel_time < 972) {
							w11 = -494;
						} else {
							w11 = -894;
						}
					} else {
						if (hops < 3) {
							w11 = 28;
						} else {
							w11 = -265;
						}
					}
				} else {
					if (rel_time < 2451) {
						if (rel_time < 2379) {
							w11 = -16;
						} else {
							w11 = 284;
						}
					} else {
						if (cons != 4) {
							w11 = -36;
						} else {
							w11 = -631;
						}
					}
				}
			}
		} else {
			if (rel_time < 2377) {
				if (rel_time < 2359) {
					if (rel_time < 2146) {
						if (rel_time < 885) {
							w11 = 36;
						} else {
							w11 = 165;
						}
					} else {
						if (hops < 2) {
							w11 = -135;
						} else {
							w11 = 27;
						}
					}
				} else {
					if (hops < 2) {
						w11 = -290;
					} else {
						if (hops < 5) {
							w11 = -259;
						} else {
							w11 = -317;
						}
					}
				}
			} else {
				if (rel_time < 2986) {
					if (hops < 3) {
						w11 = 406;
					} else {
						if (hops < 4) {
							w11 = 245;
						} else {
							w11 = 390;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w11 = 52;
						} else {
							w11 = 7;
						}
					} else {
						if (hops < 4) {
							w11 = -95;
						} else {
							w11 = 50;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3946) {
			if (hops < 2) {
				if (cons != 3) {
					w11 = 154;
				} else {
					w11 = 276;
				}
			} else {
				if (cons != 3) {
					if (hops < 3) {
						w11 = 343;
					} else {
						if (hops < 5) {
							w11 = 445;
						} else {
							w11 = 515;
						}
					}
				} else {
					if (hops < 3) {
						w11 = 574;
					} else {
						if (hops < 5) {
							w11 = 625;
						} else {
							w11 = 585;
						}
					}
				}
			}
		} else {
			if (cons != 5) {
				if (rel_time < 3960) {
					if (hops < 2) {
						w11 = 154;
					} else {
						if (hops < 3) {
							w11 = 343;
						} else {
							w11 = 455;
						}
					}
				} else {
					if (hops < 3) {
						if (cons != 8) {
							w11 = -31;
						} else {
							w11 = 110;
						}
					} else {
						if (cons != 7) {
							w11 = 149;
						} else {
							w11 = 47;
						}
					}
				}
			} else {
				if (hops < 2) {
					w11 = -264;
				} else {
					if (hops < 3) {
						if (rel_time < 3960) {
							w11 = -493;
						} else {
							w11 = -391;
						}
					} else {
						if (rel_time < 3960) {
							w11 = -386;
						} else {
							w11 = -285;
						}
					}
				}
			}
		}
	}
	int w12;
	if (hops < 4) {
		if (rel_time < 3925) {
			if (rel_time < 3542) {
				if (cons != 4) {
					if (rel_time < 3040) {
						if (cons != 7) {
							w12 = -4;
						} else {
							w12 = -100;
						}
					} else {
						if (cons != 7) {
							w12 = 4;
						} else {
							w12 = 374;
						}
					}
				} else {
					if (rel_time < 2414) {
						if (rel_time < 2223) {
							w12 = -77;
						} else {
							w12 = 212;
						}
					} else {
						if (hops < 2) {
							w12 = -103;
						} else {
							w12 = -486;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (cons != 3) {
						if (hops < 2) {
							w12 = 2;
						} else {
							w12 = -28;
						}
					} else {
						w12 = 1268;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3848) {
							w12 = -135;
						} else {
							w12 = -40;
						}
					} else {
						if (rel_time < 3848) {
							w12 = -238;
						} else {
							w12 = -183;
						}
					}
				}
			}
		} else {
			if (rel_time < 3946) {
				if (hops < 2) {
					if (cons != 3) {
						w12 = 77;
					} else {
						w12 = 138;
					}
				} else {
					if (cons != 3) {
						if (hops < 3) {
							w12 = 172;
						} else {
							w12 = 222;
						}
					} else {
						if (hops < 3) {
							w12 = 287;
						} else {
							w12 = 312;
						}
					}
				}
			} else {
				if (cons != 5) {
					if (rel_time < 3960) {
						if (hops < 2) {
							w12 = 77;
						} else {
							w12 = 196;
						}
					} else {
						if (hops < 2) {
							w12 = -17;
						} else {
							w12 = 46;
						}
					}
				} else {
					if (hops < 2) {
						w12 = -132;
					} else {
						if (hops < 3) {
							w12 = -201;
						} else {
							w12 = -144;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (hops < 5) {
				if (rel_time < 2952) {
					if (rel_time < 1485) {
						if (rel_time < 1177) {
							w12 = -28;
						} else {
							w12 = -4;
						}
					} else {
						if (rel_time < 1829) {
							w12 = -48;
						} else {
							w12 = -26;
						}
					}
				} else {
					if (prod != 1) {
						w12 = 2;
					} else {
						w12 = 2;
					}
				}
			} else {
				if (rel_time < 1829) {
					w12 = -2;
				} else {
					if (prod != 1) {
						if (rel_time < 2129) {
							w12 = 12;
						} else {
							w12 = 17;
						}
					} else {
						if (rel_time < 2663) {
							w12 = 12;
						} else {
							w12 = 7;
						}
					}
				}
			}
		} else {
			if (cons != 1) {
				if (rel_time < 3960) {
					if (rel_time < 3040) {
						if (rel_time < 1540) {
							w12 = 143;
						} else {
							w12 = 68;
						}
					} else {
						if (cons != 2) {
							w12 = 253;
						} else {
							w12 = 25;
						}
					}
				} else {
					if (cons != 5) {
						if (cons != 7) {
							w12 = 73;
						} else {
							w12 = -18;
						}
					} else {
						if (hops < 5) {
							w12 = -139;
						} else {
							w12 = -170;
						}
					}
				}
			} else {
				if (rel_time < 2967) {
					if (rel_time < 2144) {
						if (rel_time < 866) {
							w12 = -7;
						} else {
							w12 = -226;
						}
					} else {
						if (rel_time < 2357) {
							w12 = 434;
						} else {
							w12 = 21;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 3848) {
							w12 = -232;
						} else {
							w12 = -265;
						}
					} else {
						if (rel_time < 3848) {
							w12 = -129;
						} else {
							w12 = -48;
						}
					}
				}
			}
		}
	}
	int w13;
	if (hops < 3) {
		if (rel_time < 1540) {
			if (rel_time < 1486) {
				if (cons != 5) {
					if (rel_time < 726) {
						if (rel_time < 648) {
							w13 = -40;
						} else {
							w13 = -89;
						}
					} else {
						if (size < 9) {
							w13 = 191;
						} else {
							w13 = -22;
						}
					}
				} else {
					if (rel_time < 754) {
						if (hops < 2) {
							w13 = 113;
						} else {
							w13 = 201;
						}
					} else {
						if (rel_time < 921) {
							w13 = 37;
						} else {
							w13 = 183;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (hops < 2) {
						if (rel_time < 1522) {
							w13 = 258;
						} else {
							w13 = 237;
						}
					} else {
						if (rel_time < 1522) {
							w13 = 315;
						} else {
							w13 = 394;
						}
					}
				} else {
					if (hops < 2) {
						w13 = 67;
					} else {
						w13 = -331;
					}
				}
			}
		} else {
			if (rel_time < 1594) {
				if (rel_time < 1559) {
					if (cons != 4) {
						if (hops < 2) {
							w13 = 326;
						} else {
							w13 = 377;
						}
					} else {
						if (hops < 2) {
							w13 = -112;
						} else {
							w13 = -60;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1576) {
							w13 = -335;
						} else {
							w13 = -195;
						}
					} else {
						if (rel_time < 1576) {
							w13 = -283;
						} else {
							w13 = -374;
						}
					}
				}
			} else {
				if (rel_time < 1613) {
					if (cons != 7) {
						if (hops < 2) {
							w13 = 90;
						} else {
							w13 = 39;
						}
					} else {
						if (hops < 2) {
							w13 = 209;
						} else {
							w13 = 260;
						}
					}
				} else {
					if (cons != 7) {
						if (cons != 3) {
							w13 = -11;
						} else {
							w13 = -111;
						}
					} else {
						if (rel_time < 2468) {
							w13 = -372;
						} else {
							w13 = 55;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1522) {
			if (cons != 8) {
				if (cons != 6) {
					if (rel_time < 700) {
						if (cons != 2) {
							w13 = 53;
						} else {
							w13 = 202;
						}
					} else {
						if (cons != 3) {
							w13 = -8;
						} else {
							w13 = 133;
						}
					}
				} else {
					if (rel_time < 781) {
						if (hops < 5) {
							w13 = -90;
						} else {
							w13 = 350;
						}
					} else {
						if (rel_time < 938) {
							w13 = -577;
						} else {
							w13 = -231;
						}
					}
				}
			} else {
				if (rel_time < 839) {
					if (hops < 5) {
						if (hops < 4) {
							w13 = -114;
						} else {
							w13 = -154;
						}
					} else {
						w13 = 225;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w13 = -248;
						} else {
							w13 = -237;
						}
					} else {
						w13 = -434;
					}
				}
			}
		} else {
			if (rel_time < 1540) {
				if (hops < 5) {
					if (hops < 4) {
						w13 = 444;
					} else {
						w13 = 894;
					}
				} else {
					w13 = 2140;
				}
			} else {
				if (rel_time < 1559) {
					if (cons != 4) {
						if (hops < 4) {
							w13 = -68;
						} else {
							w13 = 117;
						}
					} else {
						if (hops < 5) {
							w13 = -502;
						} else {
							w13 = -349;
						}
					}
				} else {
					if (cons != 3) {
						if (prod != 0) {
							w13 = -4;
						} else {
							w13 = 66;
						}
					} else {
						if (rel_time < 3004) {
							w13 = -213;
						} else {
							w13 = 167;
						}
					}
				}
			}
		}
	}
	int w14;
	if (cons != 1) {
		if (hops < 2) {
			if (rel_time < 700) {
				if (cons != 2) {
					w14 = -165;
				} else {
					w14 = -246;
				}
			} else {
				if (cons != 6) {
					if (rel_time < 867) {
						if (rel_time < 726) {
							w14 = 167;
						} else {
							w14 = 59;
						}
					} else {
						if (rel_time < 1122) {
							w14 = -119;
						} else {
							w14 = 0;
						}
					}
				} else {
					if (rel_time < 2434) {
						if (size < 9) {
							w14 = -63;
						} else {
							w14 = -181;
						}
					} else {
						if (rel_time < 2451) {
							w14 = 274;
						} else {
							w14 = -37;
						}
					}
				}
			}
		} else {
			if (rel_time < 665) {
				if (hops < 3) {
					if (cons != 2) {
						w14 = 19;
					} else {
						w14 = 142;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w14 = 90;
						} else {
							w14 = 133;
						}
					} else {
						w14 = 27;
					}
				}
			} else {
				if (rel_time < 726) {
					if (rel_time < 700) {
						if (hops < 4) {
							w14 = 9;
						} else {
							w14 = 122;
						}
					} else {
						if (hops < 5) {
							w14 = -101;
						} else {
							w14 = -546;
						}
					}
				} else {
					if (rel_time < 781) {
						if (hops < 3) {
							w14 = 187;
						} else {
							w14 = 10;
						}
					} else {
						if (rel_time < 809) {
							w14 = -69;
						} else {
							w14 = 9;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2357) {
			if (rel_time < 2144) {
				if (rel_time < 1486) {
					if (hops < 2) {
						if (rel_time < 866) {
							w14 = 27;
						} else {
							w14 = 209;
						}
					} else {
						if (rel_time < 866) {
							w14 = 8;
						} else {
							w14 = -111;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w14 = -104;
						} else {
							w14 = -169;
						}
					} else {
						if (rel_time < 1504) {
							w14 = 45;
						} else {
							w14 = 69;
						}
					}
				}
			} else {
				if (hops < 2) {
					w14 = -250;
				} else {
					if (hops < 3) {
						w14 = 565;
					} else {
						if (hops < 5) {
							w14 = 166;
						} else {
							w14 = 502;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 3848) {
					if (rel_time < 2967) {
						w14 = -34;
					} else {
						w14 = -62;
					}
				} else {
					w14 = -15;
				}
			} else {
				if (rel_time < 2967) {
					if (hops < 4) {
						if (hops < 3) {
							w14 = -217;
						} else {
							w14 = -246;
						}
					} else {
						if (hops < 5) {
							w14 = -25;
						} else {
							w14 = -11;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3848) {
							w14 = -132;
						} else {
							w14 = -104;
						}
					} else {
						if (hops < 5) {
							w14 = -157;
						} else {
							w14 = -77;
						}
					}
				}
			}
		}
	}
	int w15;
	if (rel_time < 1540) {
		if (rel_time < 1522) {
			if (cons != 8) {
				if (rel_time < 1504) {
					if (cons != 4) {
						if (hops < 5) {
							w15 = 2;
						} else {
							w15 = 48;
						}
					} else {
						if (rel_time < 726) {
							w15 = -23;
						} else {
							w15 = 100;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w15 = 129;
						} else {
							w15 = 153;
						}
					} else {
						if (hops < 4) {
							w15 = -104;
						} else {
							w15 = 50;
						}
					}
				}
			} else {
				if (rel_time < 839) {
					if (hops < 3) {
						if (hops < 2) {
							w15 = 30;
						} else {
							w15 = 232;
						}
					} else {
						if (hops < 5) {
							w15 = -68;
						} else {
							w15 = 108;
						}
					}
				} else {
					if (hops < 2) {
						w15 = -374;
					} else {
						if (hops < 5) {
							w15 = -137;
						} else {
							w15 = -221;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (hops < 4) {
					if (hops < 2) {
						w15 = 118;
					} else {
						if (hops < 3) {
							w15 = 192;
						} else {
							w15 = 218;
						}
					}
				} else {
					w15 = 443;
				}
			} else {
				w15 = 1066;
			}
		}
	} else {
		if (rel_time < 1594) {
			if (hops < 2) {
				if (rel_time < 1576) {
					if (rel_time < 1559) {
						if (cons != 4) {
							w15 = 163;
						} else {
							w15 = -56;
						}
					} else {
						w15 = -168;
					}
				} else {
					w15 = -7;
				}
			} else {
				if (cons != 5) {
					if (hops < 3) {
						if (rel_time < 1559) {
							w15 = -34;
						} else {
							w15 = -191;
						}
					} else {
						if (rel_time < 1559) {
							w15 = -250;
						} else {
							w15 = -169;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1559) {
							w15 = 112;
						} else {
							w15 = -126;
						}
					} else {
						if (hops < 5) {
							w15 = 79;
						} else {
							w15 = 93;
						}
					}
				}
			}
		} else {
			if (rel_time < 1613) {
				if (hops < 3) {
					if (cons != 7) {
						if (hops < 2) {
							w15 = 45;
						} else {
							w15 = 15;
						}
					} else {
						if (hops < 2) {
							w15 = 104;
						} else {
							w15 = 126;
						}
					}
				} else {
					if (hops < 5) {
						if (cons != 7) {
							w15 = 91;
						} else {
							w15 = 400;
						}
					} else {
						w15 = 891;
					}
				}
			} else {
				if (cons != 7) {
					if (cons != 3) {
						if (rel_time < 2986) {
							w15 = 22;
						} else {
							w15 = -20;
						}
					} else {
						if (rel_time < 3004) {
							w15 = -122;
						} else {
							w15 = 126;
						}
					}
				} else {
					if (rel_time < 2468) {
						if (rel_time < 2302) {
							w15 = -47;
						} else {
							w15 = -347;
						}
					} else {
						if (rel_time < 3075) {
							w15 = 167;
						} else {
							w15 = -48;
						}
					}
				}
			}
		}
	}
	int w16;
	if (cons != 8) {
		if (rel_time < 2451) {
			if (rel_time < 2434) {
				if (cons != 6) {
					if (rel_time < 2197) {
						if (rel_time < 1613) {
							w16 = 11;
						} else {
							w16 = -33;
						}
					} else {
						if (cons != 2) {
							w16 = 67;
						} else {
							w16 = -75;
						}
					}
				} else {
					if (rel_time < 781) {
						if (hops < 3) {
							w16 = 94;
						} else {
							w16 = -39;
						}
					} else {
						if (hops < 4) {
							w16 = -86;
						} else {
							w16 = -6;
						}
					}
				}
			} else {
				if (cons != 6) {
					if (hops < 3) {
						if (hops < 2) {
							w16 = -895;
						} else {
							w16 = -874;
						}
					} else {
						w16 = -986;
					}
				} else {
					if (hops < 2) {
						w16 = 126;
					} else {
						if (hops < 5) {
							w16 = 791;
						} else {
							w16 = -34;
						}
					}
				}
			}
		} else {
			if (cons != 2) {
				if (rel_time < 3040) {
					if (prod != 0) {
						if (hops < 4) {
							w16 = 0;
						} else {
							w16 = -26;
						}
					} else {
						if (cons != 6) {
							w16 = -107;
						} else {
							w16 = 129;
						}
					}
				} else {
					if (cons != 5) {
						if (rel_time < 3075) {
							w16 = 60;
						} else {
							w16 = 1;
						}
					} else {
						if (hops < 2) {
							w16 = -51;
						} else {
							w16 = -96;
						}
					}
				}
			} else {
				if (rel_time < 2986) {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 200;
						} else {
							w16 = 195;
						}
					} else {
						if (hops < 4) {
							w16 = 76;
						} else {
							w16 = 112;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 40;
						} else {
							w16 = 28;
						}
					} else {
						if (hops < 4) {
							w16 = -61;
						} else {
							w16 = -15;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2330) {
			if (rel_time < 2302) {
				if (rel_time < 1613) {
					if (rel_time < 839) {
						if (hops < 3) {
							w16 = 71;
						} else {
							w16 = -28;
						}
					} else {
						if (rel_time < 1122) {
							w16 = -99;
						} else {
							w16 = 23;
						}
					}
				} else {
					if (rel_time < 1765) {
						if (hops < 5) {
							w16 = 69;
						} else {
							w16 = 264;
						}
					} else {
						if (hops < 2) {
							w16 = 414;
						} else {
							w16 = 277;
						}
					}
				}
			} else {
				if (hops < 2) {
					w16 = -100;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w16 = -251;
						} else {
							w16 = -207;
						}
					} else {
						if (hops < 5) {
							w16 = -116;
						} else {
							w16 = 57;
						}
					}
				}
			}
		} else {
			if (rel_time < 3228) {
				if (rel_time < 2609) {
					if (hops < 4) {
						if (rel_time < 2468) {
							w16 = 239;
						} else {
							w16 = 122;
						}
					} else {
						if (hops < 5) {
							w16 = 433;
						} else {
							w16 = 195;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w16 = 158;
						} else {
							w16 = 117;
						}
					} else {
						if (hops < 5) {
							w16 = 17;
						} else {
							w16 = -29;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w16 = 72;
					} else {
						w16 = 47;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w16 = -4;
						} else {
							w16 = -15;
						}
					} else {
						w16 = -45;
					}
				}
			}
		}
	}
	int w17;
	if (hops < 3) {
		if (rel_time < 3898) {
			if (size < 9) {
				if (rel_time < 2249) {
					if (cons != 6) {
						if (cons != 5) {
							w17 = -30;
						} else {
							w17 = 20;
						}
					} else {
						if (hops < 2) {
							w17 = -56;
						} else {
							w17 = 127;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2330) {
							w17 = -26;
						} else {
							w17 = 2;
						}
					} else {
						if (cons != 6) {
							w17 = -70;
						} else {
							w17 = -234;
						}
					}
				}
			} else {
				if (rel_time < 2986) {
					if (rel_time < 903) {
						if (cons != 4) {
							w17 = -51;
						} else {
							w17 = 220;
						}
					} else {
						if (rel_time < 938) {
							w17 = 99;
						} else {
							w17 = 5;
						}
					}
				} else {
					if (rel_time < 3024) {
						if (hops < 2) {
							w17 = -73;
						} else {
							w17 = -156;
						}
					} else {
						if (cons != 8) {
							w17 = -14;
						} else {
							w17 = 57;
						}
					}
				}
			}
		} else {
			if (rel_time < 3946) {
				if (rel_time < 3925) {
					if (cons != 1) {
						if (hops < 2) {
							w17 = 20;
						} else {
							w17 = 14;
						}
					} else {
						if (hops < 2) {
							w17 = 2;
						} else {
							w17 = -19;
						}
					}
				} else {
					if (hops < 2) {
						if (cons != 3) {
							w17 = 53;
						} else {
							w17 = 61;
						}
					} else {
						if (cons != 3) {
							w17 = 96;
						} else {
							w17 = 131;
						}
					}
				}
			} else {
				if (cons != 7) {
					if (cons != 5) {
						if (hops < 2) {
							w17 = 6;
						} else {
							w17 = 37;
						}
					} else {
						if (hops < 2) {
							w17 = -26;
						} else {
							w17 = -42;
						}
					}
				} else {
					if (hops < 2) {
						w17 = -21;
					} else {
						w17 = -60;
					}
				}
			}
		}
	} else {
		if (rel_time < 2196) {
			if (rel_time < 2170) {
				if (cons != 3) {
					if (rel_time < 1594) {
						if (rel_time < 1486) {
							w17 = -8;
						} else {
							w17 = -63;
						}
					} else {
						if (cons != 7) {
							w17 = 4;
						} else {
							w17 = 210;
						}
					}
				} else {
					if (rel_time < 903) {
						if (hops < 4) {
							w17 = -5;
						} else {
							w17 = 94;
						}
					} else {
						if (hops < 5) {
							w17 = 130;
						} else {
							w17 = 527;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 3) {
						w17 = 120;
					} else {
						w17 = 20;
					}
				} else {
					if (hops < 5) {
						w17 = -517;
					} else {
						w17 = -867;
					}
				}
			}
		} else {
			if (rel_time < 2249) {
				if (hops < 4) {
					if (cons != 5) {
						if (rel_time < 2197) {
							w17 = 120;
						} else {
							w17 = 70;
						}
					} else {
						w17 = 186;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 2197) {
							w17 = 299;
						} else {
							w17 = 257;
						}
					} else {
						if (rel_time < 2223) {
							w17 = 422;
						} else {
							w17 = 306;
						}
					}
				}
			} else {
				if (cons != 6) {
					if (rel_time < 2330) {
						if (hops < 4) {
							w17 = -88;
						} else {
							w17 = -30;
						}
					} else {
						if (cons != 8) {
							w17 = 2;
						} else {
							w17 = 58;
						}
					}
				} else {
					if (size < 9) {
						if (hops < 4) {
							w17 = -2;
						} else {
							w17 = 92;
						}
					} else {
						if (rel_time < 3040) {
							w17 = 196;
						} else {
							w17 = 61;
						}
					}
				}
			}
		}
	}
	int w18;
	if (prod != 1) {
		if (cons != 1) {
			if (rel_time < 2396) {
				if (rel_time < 2249) {
					if (rel_time < 2198) {
						if (cons != 7) {
							w18 = -1;
						} else {
							w18 = 29;
						}
					} else {
						if (hops < 3) {
							w18 = 7;
						} else {
							w18 = 106;
						}
					}
				} else {
					if (hops < 5) {
						if (cons != 4) {
							w18 = -38;
						} else {
							w18 = 37;
						}
					} else {
						if (rel_time < 2275) {
							w18 = 245;
						} else {
							w18 = -15;
						}
					}
				}
			} else {
				if (rel_time < 2451) {
					if (cons != 7) {
						if (rel_time < 2434) {
							w18 = 34;
						} else {
							w18 = 255;
						}
					} else {
						if (hops < 3) {
							w18 = -445;
						} else {
							w18 = -494;
						}
					}
				} else {
					if (rel_time < 2468) {
						if (hops < 4) {
							w18 = -1;
						} else {
							w18 = -331;
						}
					} else {
						if (rel_time < 2609) {
							w18 = 70;
						} else {
							w18 = 4;
						}
					}
				}
			}
		} else {
			if (rel_time < 2357) {
				if (rel_time < 2330) {
					if (rel_time < 866) {
						if (rel_time < 648) {
							w18 = -11;
						} else {
							w18 = 35;
						}
					} else {
						if (hops < 2) {
							w18 = 18;
						} else {
							w18 = -48;
						}
					}
				} else {
					if (hops < 2) {
						w18 = -172;
					} else {
						if (hops < 3) {
							w18 = 235;
						} else {
							w18 = 47;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 2967) {
						w18 = 23;
					} else {
						if (rel_time < 3848) {
							w18 = -15;
						} else {
							w18 = 1;
						}
					}
				} else {
					if (rel_time < 3848) {
						if (hops < 4) {
							w18 = -64;
						} else {
							w18 = -15;
						}
					} else {
						if (hops < 3) {
							w18 = 15;
						} else {
							w18 = -70;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3231) {
			if (hops < 4) {
				if (rel_time < 1829) {
					if (rel_time < 1177) {
						if (hops < 3) {
							w18 = -26;
						} else {
							w18 = -20;
						}
					} else {
						if (hops < 3) {
							w18 = -36;
						} else {
							w18 = -28;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3228) {
							w18 = -27;
						} else {
							w18 = -3;
						}
					} else {
						if (rel_time < 2663) {
							w18 = -22;
						} else {
							w18 = -29;
						}
					}
				}
			} else {
				if (rel_time < 2663) {
					if (hops < 5) {
						if (rel_time < 1829) {
							w18 = -20;
						} else {
							w18 = -17;
						}
					} else {
						if (rel_time < 1177) {
							w18 = -26;
						} else {
							w18 = 2;
						}
					}
				} else {
					w18 = 7;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 3292) {
						w18 = -3;
					} else {
						w18 = -1;
					}
				} else {
					if (rel_time < 3292) {
						if (hops < 3) {
							w18 = -26;
						} else {
							w18 = -33;
						}
					} else {
						if (hops < 3) {
							w18 = -9;
						} else {
							w18 = -17;
						}
					}
				}
			} else {
				if (hops < 5) {
					w18 = 6;
				} else {
					w18 = 9;
				}
			}
		}
	}
	int w19;
	if (cons != 2) {
		if (hops < 5) {
			if (rel_time < 3058) {
				if (rel_time < 3004) {
					if (hops < 2) {
						if (cons != 3) {
							w19 = -6;
						} else {
							w19 = -45;
						}
					} else {
						if (size < 9) {
							w19 = -12;
						} else {
							w19 = 5;
						}
					}
				} else {
					if (cons != 4) {
						if (hops < 3) {
							w19 = -44;
						} else {
							w19 = 33;
						}
					} else {
						if (hops < 2) {
							w19 = 51;
						} else {
							w19 = -138;
						}
					}
				}
			} else {
				if (rel_time < 3078) {
					if (hops < 3) {
						if (rel_time < 3075) {
							w19 = 7;
						} else {
							w19 = 27;
						}
					} else {
						if (rel_time < 3075) {
							w19 = 122;
						} else {
							w19 = 32;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 3) {
							w19 = -6;
						} else {
							w19 = 33;
						}
					} else {
						if (hops < 3) {
							w19 = 40;
						} else {
							w19 = 76;
						}
					}
				}
			}
		} else {
			if (rel_time < 726) {
				if (cons != 3) {
					if (rel_time < 648) {
						w19 = -230;
					} else {
						w19 = -262;
					}
				} else {
					w19 = 25;
				}
			} else {
				if (rel_time < 938) {
					if (rel_time < 754) {
						w19 = 320;
					} else {
						if (cons != 4) {
							w19 = 94;
						} else {
							w19 = 276;
						}
					}
				} else {
					if (cons != 7) {
						if (rel_time < 955) {
							w19 = -214;
						} else {
							w19 = 8;
						}
					} else {
						if (rel_time < 2468) {
							w19 = 205;
						} else {
							w19 = -65;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2377) {
			if (rel_time < 2359) {
				if (hops < 3) {
					if (rel_time < 867) {
						if (rel_time < 665) {
							w19 = -7;
						} else {
							w19 = -59;
						}
					} else {
						if (rel_time < 2144) {
							w19 = 64;
						} else {
							w19 = -18;
						}
					}
				} else {
					if (size < 9) {
						if (hops < 4) {
							w19 = 63;
						} else {
							w19 = 9;
						}
					} else {
						if (hops < 4) {
							w19 = 3;
						} else {
							w19 = 23;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w19 = -95;
					} else {
						w19 = -101;
					}
				} else {
					if (hops < 5) {
						w19 = -160;
					} else {
						w19 = -197;
					}
				}
			}
		} else {
			if (rel_time < 2986) {
				if (hops < 3) {
					if (hops < 2) {
						w19 = 96;
					} else {
						w19 = 93;
					}
				} else {
					if (hops < 4) {
						w19 = 35;
					} else {
						if (hops < 5) {
							w19 = 58;
						} else {
							w19 = 29;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w19 = 8;
					} else {
						w19 = 5;
					}
				} else {
					if (hops < 4) {
						w19 = -34;
					} else {
						if (hops < 5) {
							w19 = -6;
						} else {
							w19 = -35;
						}
					}
				}
			}
		}
	}
	int w20;
	if (cons != 3) {
		if (rel_time < 781) {
			if (hops < 4) {
				if (hops < 3) {
					if (cons != 6) {
						if (hops < 2) {
							w20 = 3;
						} else {
							w20 = -16;
						}
					} else {
						if (hops < 2) {
							w20 = -25;
						} else {
							w20 = 75;
						}
					}
				} else {
					if (cons != 6) {
						if (cons != 2) {
							w20 = 77;
						} else {
							w20 = 14;
						}
					} else {
						w20 = -7;
					}
				}
			} else {
				if (rel_time < 648) {
					if (hops < 5) {
						w20 = -106;
					} else {
						w20 = -115;
					}
				} else {
					if (rel_time < 665) {
						if (hops < 5) {
							w20 = 61;
						} else {
							w20 = -15;
						}
					} else {
						if (hops < 5) {
							w20 = -33;
						} else {
							w20 = 50;
						}
					}
				}
			}
		} else {
			if (rel_time < 809) {
				if (hops < 3) {
					if (hops < 2) {
						w20 = -32;
					} else {
						w20 = 31;
					}
				} else {
					if (hops < 4) {
						w20 = -178;
					} else {
						if (hops < 5) {
							w20 = 69;
						} else {
							w20 = -75;
						}
					}
				}
			} else {
				if (rel_time < 866) {
					if (rel_time < 839) {
						if (hops < 3) {
							w20 = 56;
						} else {
							w20 = -6;
						}
					} else {
						if (hops < 3) {
							w20 = -10;
						} else {
							w20 = 47;
						}
					}
				} else {
					if (rel_time < 1594) {
						if (rel_time < 1522) {
							w20 = -3;
						} else {
							w20 = -36;
						}
					} else {
						if (rel_time < 1765) {
							w20 = 43;
						} else {
							w20 = -1;
						}
					}
				}
			}
		}
	} else {
		if (size < 9) {
			if (hops < 4) {
				if (rel_time < 2196) {
					if (hops < 3) {
						if (hops < 2) {
							w20 = -1;
						} else {
							w20 = -15;
						}
					} else {
						if (rel_time < 2170) {
							w20 = -7;
						} else {
							w20 = 17;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w20 = 12;
						} else {
							w20 = 47;
						}
					} else {
						if (rel_time < 3925) {
							w20 = 469;
						} else {
							w20 = -15;
						}
					}
				}
			} else {
				if (rel_time < 2196) {
					if (rel_time < 700) {
						if (hops < 5) {
							w20 = 6;
						} else {
							w20 = 13;
						}
					} else {
						if (hops < 5) {
							w20 = -261;
						} else {
							w20 = -437;
						}
					}
				} else {
					if (hops < 5) {
						w20 = 16;
					} else {
						w20 = 8;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 903) {
					w20 = -128;
				} else {
					if (rel_time < 1540) {
						w20 = 75;
					} else {
						if (rel_time < 2379) {
							w20 = -7;
						} else {
							w20 = -71;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 2379) {
						if (rel_time < 903) {
							w20 = 30;
						} else {
							w20 = 55;
						}
					} else {
						if (rel_time < 2986) {
							w20 = -242;
						} else {
							w20 = 10;
						}
					}
				} else {
					if (rel_time < 2986) {
						if (rel_time < 1540) {
							w20 = 124;
						} else {
							w20 = -156;
						}
					} else {
						if (hops < 5) {
							w20 = 309;
						} else {
							w20 = 376;
						}
					}
				}
			}
		}
	}
	int w21;
	if (prod != 1) {
		if (rel_time < 3960) {
			if (rel_time < 3943) {
				if (cons != 6) {
					if (cons != 1) {
						if (rel_time < 921) {
							w21 = -4;
						} else {
							w21 = 3;
						}
					} else {
						if (rel_time < 2357) {
							w21 = 2;
						} else {
							w21 = -15;
						}
					}
				} else {
					if (rel_time < 2434) {
						if (rel_time < 2275) {
							w21 = -12;
						} else {
							w21 = -51;
						}
					} else {
						if (rel_time < 3040) {
							w21 = 108;
						} else {
							w21 = -7;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (hops < 2) {
						w21 = -11;
					} else {
						if (hops < 4) {
							w21 = -76;
						} else {
							w21 = -296;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w21 = 9;
						} else {
							w21 = 35;
						}
					} else {
						if (rel_time < 3946) {
							w21 = 96;
						} else {
							w21 = 126;
						}
					}
				}
			}
		} else {
			if (cons != 5) {
				if (hops < 5) {
					if (cons != 6) {
						if (hops < 2) {
							w21 = 13;
						} else {
							w21 = -12;
						}
					} else {
						if (hops < 2) {
							w21 = -33;
						} else {
							w21 = 30;
						}
					}
				} else {
					if (cons != 7) {
						if (rel_time < 3994) {
							w21 = -40;
						} else {
							w21 = -57;
						}
					} else {
						w21 = -101;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w21 = -11;
					} else {
						w21 = -14;
					}
				} else {
					if (hops < 5) {
						w21 = -49;
					} else {
						w21 = -71;
					}
				}
			}
		}
	} else {
		if (rel_time < 3228) {
			if (rel_time < 2663) {
				if (rel_time < 1177) {
					if (hops < 2) {
						w21 = -7;
					} else {
						if (hops < 3) {
							w21 = -16;
						} else {
							w21 = -11;
						}
					}
				} else {
					if (rel_time < 1829) {
						if (hops < 5) {
							w21 = -17;
						} else {
							w21 = -4;
						}
					} else {
						if (hops < 5) {
							w21 = -12;
						} else {
							w21 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w21 = -73;
				} else {
					w21 = -112;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 3292) {
						w21 = 2;
					} else {
						w21 = 3;
					}
				} else {
					if (rel_time < 3292) {
						if (hops < 3) {
							w21 = -8;
						} else {
							w21 = -14;
						}
					} else {
						if (hops < 3) {
							w21 = -1;
						} else {
							w21 = -5;
						}
					}
				}
			} else {
				if (hops < 5) {
					w21 = 7;
				} else {
					w21 = 1;
				}
			}
		}
	}
	int w22;
	if (cons != 2) {
		if (hops < 5) {
			if (rel_time < 920) {
				if (hops < 3) {
					if (rel_time < 903) {
						if (cons != 8) {
							w22 = 1;
						} else {
							w22 = 30;
						}
					} else {
						if (hops < 2) {
							w22 = 54;
						} else {
							w22 = 120;
						}
					}
				} else {
					if (rel_time < 903) {
						if (cons != 7) {
							w22 = 6;
						} else {
							w22 = -46;
						}
					} else {
						if (hops < 4) {
							w22 = -56;
						} else {
							w22 = -149;
						}
					}
				}
			} else {
				if (rel_time < 921) {
					if (hops < 2) {
						w22 = 129;
					} else {
						if (hops < 3) {
							w22 = -121;
						} else {
							w22 = -191;
						}
					}
				} else {
					if (rel_time < 938) {
						if (cons != 5) {
							w22 = -205;
						} else {
							w22 = 64;
						}
					} else {
						if (hops < 3) {
							w22 = -4;
						} else {
							w22 = 2;
						}
					}
				}
			}
		} else {
			if (rel_time < 2357) {
				if (rel_time < 1485) {
					if (rel_time < 938) {
						if (rel_time < 726) {
							w22 = -68;
						} else {
							w22 = 63;
						}
					} else {
						if (rel_time < 955) {
							w22 = -100;
						} else {
							w22 = -26;
						}
					}
				} else {
					if (rel_time < 1765) {
						if (cons != 4) {
							w22 = 147;
						} else {
							w22 = -14;
						}
					} else {
						if (cons != 3) {
							w22 = 43;
						} else {
							w22 = -220;
						}
					}
				}
			} else {
				if (rel_time < 2451) {
					if (rel_time < 2379) {
						w22 = -27;
					} else {
						if (cons != 5) {
							w22 = -295;
						} else {
							w22 = -115;
						}
					}
				} else {
					if (rel_time < 2468) {
						w22 = 229;
					} else {
						if (cons != 3) {
							w22 = -1;
						} else {
							w22 = 95;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2377) {
			if (rel_time < 2359) {
				if (hops < 2) {
					if (size < 9) {
						if (rel_time < 2146) {
							w22 = -127;
						} else {
							w22 = -18;
						}
					} else {
						if (rel_time < 1504) {
							w22 = 159;
						} else {
							w22 = 8;
						}
					}
				} else {
					if (size < 9) {
						if (hops < 3) {
							w22 = 76;
						} else {
							w22 = 15;
						}
					} else {
						if (rel_time < 885) {
							w22 = -68;
						} else {
							w22 = 17;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w22 = -48;
						} else {
							w22 = -49;
						}
					} else {
						w22 = -52;
					}
				} else {
					if (hops < 5) {
						w22 = -81;
					} else {
						w22 = -100;
					}
				}
			}
		} else {
			if (rel_time < 2986) {
				if (hops < 3) {
					if (hops < 2) {
						w22 = 47;
					} else {
						w22 = 46;
					}
				} else {
					if (hops < 4) {
						w22 = 17;
					} else {
						if (hops < 5) {
							w22 = 28;
						} else {
							w22 = 13;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w22 = 3;
					} else {
						w22 = 2;
					}
				} else {
					if (hops < 4) {
						w22 = -18;
					} else {
						if (hops < 5) {
							w22 = -4;
						} else {
							w22 = -18;
						}
					}
				}
			}
		}
	}
	int w23;
	if (rel_time < 1540) {
		if (rel_time < 1522) {
			if (cons != 8) {
				if (hops < 3) {
					if (rel_time < 903) {
						if (hops < 2) {
							w23 = 8;
						} else {
							w23 = -11;
						}
					} else {
						if (cons != 1) {
							w23 = 16;
						} else {
							w23 = -24;
						}
					}
				} else {
					if (cons != 6) {
						if (rel_time < 885) {
							w23 = 11;
						} else {
							w23 = -5;
						}
					} else {
						if (rel_time < 781) {
							w23 = -5;
						} else {
							w23 = -78;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 839) {
						w23 = -42;
					} else {
						w23 = -134;
					}
				} else {
					if (rel_time < 839) {
						if (hops < 3) {
							w23 = 62;
						} else {
							w23 = -6;
						}
					} else {
						if (hops < 3) {
							w23 = -36;
						} else {
							w23 = -10;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w23 = 38;
					} else {
						w23 = 60;
					}
				} else {
					w23 = 7;
				}
			} else {
				if (hops < 5) {
					w23 = 84;
				} else {
					w23 = 124;
				}
			}
		}
	} else {
		if (rel_time < 1576) {
			if (cons != 4) {
				if (hops < 4) {
					if (rel_time < 1559) {
						if (hops < 3) {
							w23 = 115;
						} else {
							w23 = -55;
						}
					} else {
						if (hops < 3) {
							w23 = -72;
						} else {
							w23 = -3;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1559) {
							w23 = 54;
						} else {
							w23 = 80;
						}
					} else {
						w23 = 13;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w23 = -13;
					} else {
						w23 = -8;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w23 = -94;
						} else {
							w23 = -83;
						}
					} else {
						w23 = -7;
					}
				}
			}
		} else {
			if (rel_time < 1765) {
				if (cons != 7) {
					if (hops < 2) {
						if (rel_time < 1594) {
							w23 = 67;
						} else {
							w23 = 19;
						}
					} else {
						if (hops < 4) {
							w23 = -18;
						} else {
							w23 = 28;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = 12;
						} else {
							w23 = 17;
						}
					} else {
						if (hops < 4) {
							w23 = 86;
						} else {
							w23 = -2;
						}
					}
				}
			} else {
				if (rel_time < 2196) {
					if (hops < 4) {
						if (cons != 1) {
							w23 = -2;
						} else {
							w23 = -17;
						}
					} else {
						if (cons != 3) {
							w23 = -16;
						} else {
							w23 = -129;
						}
					}
				} else {
					if (rel_time < 2432) {
						if (hops < 3) {
							w23 = -5;
						} else {
							w23 = 27;
						}
					} else {
						if (cons != 8) {
							w23 = -3;
						} else {
							w23 = 17;
						}
					}
				}
			}
		}
	}
	int w24;
	if (rel_time < 3040) {
		if (rel_time < 3004) {
			if (cons != 5) {
				if (size < 9) {
					if (rel_time < 2302) {
						if (cons != 8) {
							w24 = -4;
						} else {
							w24 = 13;
						}
					} else {
						if (hops < 2) {
							w24 = -12;
						} else {
							w24 = -49;
						}
					}
				} else {
					if (hops < 2) {
						if (cons != 7) {
							w24 = 0;
						} else {
							w24 = -70;
						}
					} else {
						if (prod != 0) {
							w24 = -3;
						} else {
							w24 = 7;
						}
					}
				}
			} else {
				if (rel_time < 1576) {
					if (hops < 4) {
						if (rel_time < 754) {
							w24 = 15;
						} else {
							w24 = -19;
						}
					} else {
						if (rel_time < 921) {
							w24 = -4;
						} else {
							w24 = 62;
						}
					}
				} else {
					if (rel_time < 2414) {
						if (hops < 4) {
							w24 = 27;
						} else {
							w24 = 71;
						}
					} else {
						if (hops < 5) {
							w24 = 21;
						} else {
							w24 = -71;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 4) {
					if (hops < 2) {
						if (cons != 5) {
							w24 = -14;
						} else {
							w24 = -78;
						}
					} else {
						if (rel_time < 3024) {
							w24 = 10;
						} else {
							w24 = -24;
						}
					}
				} else {
					if (hops < 2) {
						w24 = 28;
					} else {
						w24 = -134;
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 4) {
						if (cons != 5) {
							w24 = 55;
						} else {
							w24 = 66;
						}
					} else {
						w24 = -39;
					}
				} else {
					if (rel_time < 3022) {
						if (cons != 4) {
							w24 = 350;
						} else {
							w24 = 6;
						}
					} else {
						if (hops < 5) {
							w24 = -111;
						} else {
							w24 = -28;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 3570) {
				if (rel_time < 3075) {
					if (rel_time < 3058) {
						if (cons != 6) {
							w24 = 21;
						} else {
							w24 = 1;
						}
					} else {
						w24 = -4;
					}
				} else {
					if (prod != 1) {
						if (rel_time < 3228) {
							w24 = 32;
						} else {
							w24 = 22;
						}
					} else {
						if (rel_time < 3228) {
							w24 = -33;
						} else {
							w24 = 5;
						}
					}
				}
			} else {
				if (cons != 8) {
					if (rel_time < 3960) {
						if (cons != 1) {
							w24 = 6;
						} else {
							w24 = 11;
						}
					} else {
						if (cons != 5) {
							w24 = -13;
						} else {
							w24 = -2;
						}
					}
				} else {
					w24 = 22;
				}
			}
		} else {
			if (rel_time < 3075) {
				if (cons != 6) {
					if (hops < 3) {
						if (rel_time < 3058) {
							w24 = 40;
						} else {
							w24 = 14;
						}
					} else {
						if (rel_time < 3058) {
							w24 = 100;
						} else {
							w24 = 59;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w24 = -33;
						} else {
							w24 = 64;
						}
					} else {
						if (rel_time < 3043) {
							w24 = -44;
						} else {
							w24 = -126;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 6) {
						if (rel_time < 3943) {
							w24 = -3;
						} else {
							w24 = -13;
						}
					} else {
						if (hops < 4) {
							w24 = 25;
						} else {
							w24 = -18;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w24 = 22;
						} else {
							w24 = 9;
						}
					} else {
						if (rel_time < 3946) {
							w24 = 50;
						} else {
							w24 = 65;
						}
					}
				}
			}
		}
	}
	int w25;
	if (rel_time < 781) {
		if (hops < 4) {
			if (hops < 2) {
				if (cons != 4) {
					if (rel_time < 700) {
						if (rel_time < 648) {
							w25 = -4;
						} else {
							w25 = -49;
						}
					} else {
						if (cons != 5) {
							w25 = -9;
						} else {
							w25 = 2;
						}
					}
				} else {
					w25 = 107;
				}
			} else {
				if (cons != 4) {
					if (hops < 3) {
						if (rel_time < 648) {
							w25 = -4;
						} else {
							w25 = 41;
						}
					} else {
						if (rel_time < 648) {
							w25 = 49;
						} else {
							w25 = 3;
						}
					}
				} else {
					if (hops < 3) {
						w25 = -109;
					} else {
						w25 = 25;
					}
				}
			}
		} else {
			if (rel_time < 648) {
				if (hops < 5) {
					w25 = -60;
				} else {
					w25 = -27;
				}
			} else {
				if (rel_time < 700) {
					if (cons != 2) {
						if (hops < 5) {
							w25 = -1;
						} else {
							w25 = 39;
						}
					} else {
						if (hops < 5) {
							w25 = 22;
						} else {
							w25 = -16;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 726) {
							w25 = 3;
						} else {
							w25 = -27;
						}
					} else {
						if (rel_time < 726) {
							w25 = -123;
						} else {
							w25 = 90;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 921) {
			if (hops < 2) {
				if (cons != 3) {
					if (rel_time < 839) {
						if (rel_time < 809) {
							w25 = -17;
						} else {
							w25 = -28;
						}
					} else {
						if (cons != 4) {
							w25 = 66;
						} else {
							w25 = 16;
						}
					}
				} else {
					w25 = -67;
				}
			} else {
				if (rel_time < 920) {
					if (cons != 2) {
						if (hops < 3) {
							w25 = 21;
						} else {
							w25 = -17;
						}
					} else {
						if (hops < 3) {
							w25 = -149;
						} else {
							w25 = 37;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w25 = -59;
						} else {
							w25 = -135;
						}
					} else {
						if (hops < 5) {
							w25 = 6;
						} else {
							w25 = 20;
						}
					}
				}
			}
		} else {
			if (rel_time < 938) {
				if (cons != 5) {
					if (hops < 3) {
						if (hops < 2) {
							w25 = -101;
						} else {
							w25 = -40;
						}
					} else {
						if (hops < 4) {
							w25 = -107;
						} else {
							w25 = -137;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w25 = 31;
						} else {
							w25 = 0;
						}
					} else {
						if (hops < 5) {
							w25 = 108;
						} else {
							w25 = -17;
						}
					}
				}
			} else {
				if (rel_time < 955) {
					if (hops < 2) {
						w25 = -116;
					} else {
						if (hops < 3) {
							w25 = 112;
						} else {
							w25 = -40;
						}
					}
				} else {
					if (rel_time < 972) {
						if (hops < 2) {
							w25 = -101;
						} else {
							w25 = 71;
						}
					} else {
						if (rel_time < 1122) {
							w25 = -27;
						} else {
							w25 = 0;
						}
					}
				}
			}
		}
	}
	int w26;
	if (cons != 1) {
		if (rel_time < 1540) {
			if (rel_time < 1522) {
				if (hops < 3) {
					if (hops < 2) {
						if (cons != 4) {
							w26 = -7;
						} else {
							w26 = 31;
						}
					} else {
						if (cons != 7) {
							w26 = 5;
						} else {
							w26 = 68;
						}
					}
				} else {
					if (cons != 7) {
						if (cons != 4) {
							w26 = 1;
						} else {
							w26 = -18;
						}
					} else {
						if (hops < 4) {
							w26 = -54;
						} else {
							w26 = 30;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w26 = 19;
						} else {
							w26 = 26;
						}
					} else {
						w26 = -1;
					}
				} else {
					if (hops < 5) {
						w26 = 38;
					} else {
						w26 = 58;
					}
				}
			}
		} else {
			if (rel_time < 1576) {
				if (cons != 4) {
					if (rel_time < 1559) {
						if (hops < 3) {
							w26 = 67;
						} else {
							w26 = -17;
						}
					} else {
						if (hops < 3) {
							w26 = -27;
						} else {
							w26 = 6;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w26 = -7;
						} else {
							w26 = -8;
						}
					} else {
						if (hops < 5) {
							w26 = -49;
						} else {
							w26 = -7;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (hops < 4) {
						if (rel_time < 1613) {
							w26 = 9;
						} else {
							w26 = 0;
						}
					} else {
						if (cons != 7) {
							w26 = -2;
						} else {
							w26 = -38;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w26 = -16;
						} else {
							w26 = 19;
						}
					} else {
						if (rel_time < 2414) {
							w26 = 143;
						} else {
							w26 = 6;
						}
					}
				}
			}
		}
	} else {
		if (hops < 5) {
			if (hops < 4) {
				if (rel_time < 2357) {
					if (hops < 3) {
						if (rel_time < 2144) {
							w26 = -14;
						} else {
							w26 = 28;
						}
					} else {
						if (rel_time < 1486) {
							w26 = 30;
						} else {
							w26 = 7;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2967) {
							w26 = 26;
						} else {
							w26 = 5;
						}
					} else {
						if (rel_time < 2967) {
							w26 = -39;
						} else {
							w26 = -3;
						}
					}
				}
			} else {
				if (rel_time < 866) {
					if (rel_time < 648) {
						w26 = -30;
					} else {
						if (rel_time < 839) {
							w26 = 64;
						} else {
							w26 = 38;
						}
					}
				} else {
					if (rel_time < 1504) {
						if (rel_time < 1486) {
							w26 = -107;
						} else {
							w26 = -181;
						}
					} else {
						if (rel_time < 2967) {
							w26 = -8;
						} else {
							w26 = -37;
						}
					}
				}
			}
		} else {
			if (rel_time < 866) {
				if (rel_time < 648) {
					w26 = -14;
				} else {
					w26 = -32;
				}
			} else {
				if (rel_time < 2967) {
					if (rel_time < 1486) {
						w26 = 152;
					} else {
						if (rel_time < 1504) {
							w26 = -29;
						} else {
							w26 = 77;
						}
					}
				} else {
					if (rel_time < 3848) {
						w26 = -36;
					} else {
						w26 = 32;
					}
				}
			}
		}
	}
	int w27;
	if (rel_time < 3040) {
		if (rel_time < 3004) {
			if (cons != 7) {
				if (rel_time < 2396) {
					if (rel_time < 2302) {
						if (rel_time < 2275) {
							w27 = -1;
						} else {
							w27 = 214;
						}
					} else {
						if (hops < 4) {
							w27 = -1;
						} else {
							w27 = -53;
						}
					}
				} else {
					if (rel_time < 2414) {
						if (hops < 5) {
							w27 = 53;
						} else {
							w27 = -270;
						}
					} else {
						if (prod != 0) {
							w27 = -3;
						} else {
							w27 = 10;
						}
					}
				}
			} else {
				if (rel_time < 2302) {
					if (size < 9) {
						if (hops < 4) {
							w27 = -15;
						} else {
							w27 = 17;
						}
					} else {
						if (hops < 2) {
							w27 = -5;
						} else {
							w27 = 22;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2451) {
							w27 = -211;
						} else {
							w27 = 4;
						}
					} else {
						if (hops < 5) {
							w27 = -253;
						} else {
							w27 = 131;
						}
					}
				}
			}
		} else {
			if (cons != 6) {
				if (hops < 3) {
					if (rel_time < 3024) {
						if (hops < 2) {
							w27 = -6;
						} else {
							w27 = -30;
						}
					} else {
						if (hops < 2) {
							w27 = -64;
						} else {
							w27 = -50;
						}
					}
				} else {
					if (hops < 4) {
						if (cons != 4) {
							w27 = 33;
						} else {
							w27 = -29;
						}
					} else {
						if (rel_time < 3022) {
							w27 = 0;
						} else {
							w27 = -47;
						}
					}
				}
			} else {
				if (hops < 2) {
					w27 = -7;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w27 = 36;
						} else {
							w27 = 27;
						}
					} else {
						w27 = -65;
					}
				}
			}
		}
	} else {
		if (cons != 7) {
			if (hops < 2) {
				if (cons != 6) {
					if (rel_time < 3542) {
						if (prod != 1) {
							w27 = 12;
						} else {
							w27 = 2;
						}
					} else {
						if (cons != 4) {
							w27 = 3;
						} else {
							w27 = 13;
						}
					}
				} else {
					if (rel_time < 3043) {
						w27 = 1;
					} else {
						if (rel_time < 3058) {
							w27 = -50;
						} else {
							w27 = -7;
						}
					}
				}
			} else {
				if (rel_time < 4010) {
					if (cons != 5) {
						if (rel_time < 3925) {
							w27 = -1;
						} else {
							w27 = 8;
						}
					} else {
						if (hops < 3) {
							w27 = 1;
						} else {
							w27 = -20;
						}
					}
				} else {
					if (hops < 3) {
						w27 = 12;
					} else {
						if (hops < 4) {
							w27 = -27;
						} else {
							w27 = -31;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3075) {
					if (hops < 2) {
						if (rel_time < 3058) {
							w27 = 10;
						} else {
							w27 = -2;
						}
					} else {
						if (rel_time < 3058) {
							w27 = 20;
						} else {
							w27 = 7;
						}
					}
				} else {
					if (hops < 2) {
						w27 = -6;
					} else {
						w27 = -13;
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						if (rel_time < 3058) {
							w27 = 49;
						} else {
							w27 = 25;
						}
					} else {
						if (rel_time < 3075) {
							w27 = 60;
						} else {
							w27 = 30;
						}
					}
				} else {
					if (rel_time < 3075) {
						w27 = 26;
					} else {
						w27 = -23;
					}
				}
			}
		}
	}
	int w28;
	if (hops < 3) {
		if (rel_time < 3848) {
			if (rel_time < 2086) {
				if (hops < 2) {
					if (cons != 1) {
						if (rel_time < 1177) {
							w28 = -8;
						} else {
							w28 = 9;
						}
					} else {
						if (rel_time < 866) {
							w28 = 13;
						} else {
							w28 = 109;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 700) {
							w28 = 32;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 648) {
							w28 = 5;
						} else {
							w28 = -78;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 3) {
						if (cons != 6) {
							w28 = 0;
						} else {
							w28 = -15;
						}
					} else {
						if (hops < 2) {
							w28 = 4;
						} else {
							w28 = -31;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2414) {
							w28 = -16;
						} else {
							w28 = 30;
						}
					} else {
						if (rel_time < 2414) {
							w28 = -22;
						} else {
							w28 = -61;
						}
					}
				}
			}
		} else {
			if (rel_time < 3960) {
				if (hops < 2) {
					if (cons != 2) {
						if (cons != 5) {
							w28 = 4;
						} else {
							w28 = -7;
						}
					} else {
						w28 = -2;
					}
				} else {
					if (cons != 1) {
						if (cons != 3) {
							w28 = 5;
						} else {
							w28 = 23;
						}
					} else {
						if (rel_time < 3898) {
							w28 = 26;
						} else {
							w28 = 1;
						}
					}
				}
			} else {
				if (cons != 8) {
					if (cons != 5) {
						if (hops < 2) {
							w28 = -3;
						} else {
							w28 = -6;
						}
					} else {
						if (hops < 2) {
							w28 = -3;
						} else {
							w28 = 3;
						}
					}
				} else {
					if (hops < 2) {
						w28 = 9;
					} else {
						if (rel_time < 4010) {
							w28 = 8;
						} else {
							w28 = 6;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 972) {
			if (rel_time < 885) {
				if (rel_time < 866) {
					if (cons != 4) {
						if (cons != 7) {
							w28 = 1;
						} else {
							w28 = -8;
						}
					} else {
						if (hops < 5) {
							w28 = 18;
						} else {
							w28 = -52;
						}
					}
				} else {
					if (hops < 4) {
						if (cons != 2) {
							w28 = -13;
						} else {
							w28 = 3;
						}
					} else {
						if (hops < 5) {
							w28 = 51;
						} else {
							w28 = -40;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (cons != 4) {
						if (hops < 4) {
							w28 = -22;
						} else {
							w28 = -2;
						}
					} else {
						if (rel_time < 903) {
							w28 = -161;
						} else {
							w28 = -26;
						}
					}
				} else {
					if (rel_time < 920) {
						if (rel_time < 903) {
							w28 = 53;
						} else {
							w28 = 127;
						}
					} else {
						if (rel_time < 955) {
							w28 = 5;
						} else {
							w28 = -38;
						}
					}
				}
			}
		} else {
			if (cons != 8) {
				if (cons != 4) {
					if (rel_time < 1486) {
						if (hops < 4) {
							w28 = 14;
						} else {
							w28 = -7;
						}
					} else {
						if (rel_time < 1504) {
							w28 = -41;
						} else {
							w28 = 0;
						}
					}
				} else {
					if (rel_time < 1559) {
						if (hops < 5) {
							w28 = -24;
						} else {
							w28 = -3;
						}
					} else {
						if (rel_time < 2414) {
							w28 = 40;
						} else {
							w28 = -5;
						}
					}
				}
			} else {
				if (size < 9) {
					if (hops < 4) {
						if (rel_time < 2302) {
							w28 = 108;
						} else {
							w28 = -20;
						}
					} else {
						if (rel_time < 2330) {
							w28 = 27;
						} else {
							w28 = -16;
						}
					}
				} else {
					if (rel_time < 1613) {
						if (hops < 5) {
							w28 = 7;
						} else {
							w28 = -32;
						}
					} else {
						if (rel_time < 2609) {
							w28 = 33;
						} else {
							w28 = 6;
						}
					}
				}
			}
		}
	}
	int w29;
	if (rel_time < 1540) {
		if (cons != 8) {
			if (hops < 2) {
				if (cons != 6) {
					if (cons != 3) {
						if (cons != 7) {
							w29 = 13;
						} else {
							w29 = -17;
						}
					} else {
						if (rel_time < 903) {
							w29 = -22;
						} else {
							w29 = 5;
						}
					}
				} else {
					if (rel_time < 781) {
						w29 = 3;
					} else {
						if (rel_time < 938) {
							w29 = -43;
						} else {
							w29 = -50;
						}
					}
				}
			} else {
				if (cons != 6) {
					if (rel_time < 885) {
						if (hops < 3) {
							w29 = -17;
						} else {
							w29 = 2;
						}
					} else {
						if (cons != 1) {
							w29 = 4;
						} else {
							w29 = -23;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 938) {
							w29 = 27;
						} else {
							w29 = 54;
						}
					} else {
						if (hops < 4) {
							w29 = -1;
						} else {
							w29 = -19;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 839) {
					w29 = -6;
				} else {
					w29 = -46;
				}
			} else {
				if (rel_time < 839) {
					if (hops < 4) {
						if (hops < 3) {
							w29 = 12;
						} else {
							w29 = 4;
						}
					} else {
						if (hops < 5) {
							w29 = -16;
						} else {
							w29 = 4;
						}
					}
				} else {
					if (hops < 3) {
						w29 = -10;
					} else {
						if (hops < 5) {
							w29 = 4;
						} else {
							w29 = -16;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1594) {
			if (hops < 2) {
				if (rel_time < 1576) {
					if (rel_time < 1559) {
						if (cons != 4) {
							w29 = 10;
						} else {
							w29 = -7;
						}
					} else {
						w29 = -14;
					}
				} else {
					w29 = 25;
				}
			} else {
				if (rel_time < 1576) {
					if (cons != 4) {
						if (rel_time < 1559) {
							w29 = 34;
						} else {
							w29 = -4;
						}
					} else {
						if (hops < 3) {
							w29 = -3;
						} else {
							w29 = -11;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w29 = -29;
						} else {
							w29 = -18;
						}
					} else {
						w29 = 47;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 2330) {
					if (hops < 2) {
						if (cons != 2) {
							w29 = 8;
						} else {
							w29 = -64;
						}
					} else {
						if (cons != 6) {
							w29 = -7;
						} else {
							w29 = -74;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2452) {
							w29 = -36;
						} else {
							w29 = 2;
						}
					} else {
						if (rel_time < 2357) {
							w29 = 101;
						} else {
							w29 = 1;
						}
					}
				}
			} else {
				if (cons != 6) {
					if (cons != 4) {
						if (rel_time < 2986) {
							w29 = -2;
						} else {
							w29 = 3;
						}
					} else {
						if (hops < 4) {
							w29 = -3;
						} else {
							w29 = 28;
						}
					}
				} else {
					if (rel_time < 2434) {
						if (hops < 4) {
							w29 = -49;
						} else {
							w29 = 46;
						}
					} else {
						if (rel_time < 2451) {
							w29 = 129;
						} else {
							w29 = 10;
						}
					}
				}
			}
		}
	}
	int w30;
	if (prod != 0) {
		if (rel_time < 1177) {
			if (hops < 4) {
				if (hops < 2) {
					w30 = -8;
				} else {
					if (hops < 3) {
						w30 = -16;
					} else {
						w30 = -13;
					}
				}
			} else {
				if (hops < 5) {
					w30 = 1;
				} else {
					w30 = 9;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 2611) {
					if (rel_time < 1485) {
						w30 = -1;
					} else {
						if (rel_time < 1829) {
							w30 = -13;
						} else {
							w30 = -3;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 3542) {
							w30 = 4;
						} else {
							w30 = 9;
						}
					} else {
						if (rel_time < 3848) {
							w30 = 0;
						} else {
							w30 = -3;
						}
					}
				}
			} else {
				if (rel_time < 3542) {
					if (rel_time < 2129) {
						if (hops < 5) {
							w30 = 0;
						} else {
							w30 = -9;
						}
					} else {
						if (hops < 5) {
							w30 = -3;
						} else {
							w30 = 9;
						}
					}
				} else {
					if (rel_time < 3570) {
						if (hops < 4) {
							w30 = 11;
						} else {
							w30 = 9;
						}
					} else {
						if (hops < 4) {
							w30 = 0;
						} else {
							w30 = 5;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2988) {
			if (rel_time < 2986) {
				if (rel_time < 2970) {
					if (cons != 5) {
						if (rel_time < 2967) {
							w30 = 1;
						} else {
							w30 = 10;
						}
					} else {
						if (rel_time < 921) {
							w30 = -6;
						} else {
							w30 = 10;
						}
					}
				} else {
					if (cons != 2) {
						if (hops < 4) {
							w30 = -165;
						} else {
							w30 = 147;
						}
					} else {
						if (hops < 3) {
							w30 = 17;
						} else {
							w30 = 4;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w30 = -29;
					} else {
						if (hops < 3) {
							w30 = 3;
						} else {
							w30 = 5;
						}
					}
				} else {
					if (hops < 5) {
						w30 = 144;
					} else {
						w30 = 132;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 3004) {
					if (cons != 3) {
						if (hops < 2) {
							w30 = 43;
						} else {
							w30 = -161;
						}
					} else {
						if (hops < 2) {
							w30 = -29;
						} else {
							w30 = 4;
						}
					}
				} else {
					if (cons != 6) {
						if (cons != 8) {
							w30 = -1;
						} else {
							w30 = 5;
						}
					} else {
						if (hops < 3) {
							w30 = -1;
						} else {
							w30 = 22;
						}
					}
				}
			} else {
				if (rel_time < 3004) {
					if (cons != 3) {
						w30 = -88;
					} else {
						if (hops < 5) {
							w30 = 144;
						} else {
							w30 = 132;
						}
					}
				} else {
					if (cons != 7) {
						if (rel_time < 3848) {
							w30 = -26;
						} else {
							w30 = -8;
						}
					} else {
						if (rel_time < 3075) {
							w30 = 26;
						} else {
							w30 = 9;
						}
					}
				}
			}
		}
	}
	int w31;
	if (rel_time < 972) {
		if (hops < 3) {
			if (rel_time < 955) {
				if (rel_time < 885) {
					if (hops < 2) {
						if (rel_time < 866) {
							w31 = 2;
						} else {
							w31 = 46;
						}
					} else {
						if (rel_time < 866) {
							w31 = 2;
						} else {
							w31 = -53;
						}
					}
				} else {
					if (hops < 2) {
						if (cons != 5) {
							w31 = -17;
						} else {
							w31 = 21;
						}
					} else {
						if (cons != 5) {
							w31 = 34;
						} else {
							w31 = -10;
						}
					}
				}
			} else {
				if (hops < 2) {
					w31 = -32;
				} else {
					w31 = 74;
				}
			}
		} else {
			if (rel_time < 903) {
				if (cons != 5) {
					if (hops < 4) {
						if (cons != 7) {
							w31 = 0;
						} else {
							w31 = -22;
						}
					} else {
						if (cons != 4) {
							w31 = 6;
						} else {
							w31 = -16;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w31 = 15;
						} else {
							w31 = -16;
						}
					} else {
						w31 = 58;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 921) {
						if (rel_time < 920) {
							w31 = -15;
						} else {
							w31 = -35;
						}
					} else {
						if (cons != 5) {
							w31 = -15;
						} else {
							w31 = 18;
						}
					}
				} else {
					if (rel_time < 920) {
						w31 = 61;
					} else {
						if (rel_time < 955) {
							w31 = 6;
						} else {
							w31 = -21;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1177) {
			if (hops < 2) {
				if (rel_time < 1122) {
					w31 = -23;
				} else {
					w31 = -4;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1122) {
						if (hops < 3) {
							w31 = -5;
						} else {
							w31 = 0;
						}
					} else {
						if (hops < 3) {
							w31 = -8;
						} else {
							w31 = -6;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1122) {
							w31 = 5;
						} else {
							w31 = 1;
						}
					} else {
						if (rel_time < 1122) {
							w31 = -8;
						} else {
							w31 = 4;
						}
					}
				}
			}
		} else {
			if (cons != 2) {
				if (hops < 3) {
					if (cons != 8) {
						if (cons != 1) {
							w31 = 0;
						} else {
							w31 = -4;
						}
					} else {
						if (hops < 2) {
							w31 = 5;
						} else {
							w31 = -15;
						}
					}
				} else {
					if (rel_time < 2414) {
						if (rel_time < 2396) {
							w31 = 1;
						} else {
							w31 = 33;
						}
					} else {
						if (rel_time < 2434) {
							w31 = -28;
						} else {
							w31 = 0;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 2146) {
							w31 = -20;
						} else {
							w31 = 5;
						}
					} else {
						if (rel_time < 2359) {
							w31 = 16;
						} else {
							w31 = -3;
						}
					}
				} else {
					if (rel_time < 1522) {
						if (hops < 5) {
							w31 = 58;
						} else {
							w31 = -41;
						}
					} else {
						if (rel_time < 2377) {
							w31 = -46;
						} else {
							w31 = 4;
						}
					}
				}
			}
		}
	}
	int w32;
	if (prod != 0) {
		if (rel_time < 1829) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1485) {
						if (rel_time < 1177) {
							w32 = -2;
						} else {
							w32 = 0;
						}
					} else {
						w32 = -7;
					}
				} else {
					if (rel_time < 1485) {
						if (rel_time < 1177) {
							w32 = -4;
						} else {
							w32 = -4;
						}
					} else {
						w32 = -2;
					}
				}
			} else {
				if (hops < 4) {
					if (prod != 1) {
						w32 = 3;
					} else {
						if (rel_time < 1177) {
							w32 = -3;
						} else {
							w32 = -6;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 5) {
							w32 = -3;
						} else {
							w32 = -7;
						}
					} else {
						if (hops < 5) {
							w32 = 2;
						} else {
							w32 = -3;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3292) {
					if (hops < 2) {
						if (rel_time < 2086) {
							w32 = -2;
						} else {
							w32 = 2;
						}
					} else {
						if (rel_time < 2129) {
							w32 = 2;
						} else {
							w32 = 1;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3570) {
							w32 = 2;
						} else {
							w32 = -1;
						}
					} else {
						if (rel_time < 3542) {
							w32 = -3;
						} else {
							w32 = 3;
						}
					}
				}
			} else {
				if (rel_time < 3231) {
					if (hops < 4) {
						if (rel_time < 2663) {
							w32 = -1;
						} else {
							w32 = 2;
						}
					} else {
						if (rel_time < 2663) {
							w32 = 0;
						} else {
							w32 = -13;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3542) {
							w32 = -5;
						} else {
							w32 = -1;
						}
					} else {
						if (hops < 5) {
							w32 = 9;
						} else {
							w32 = 3;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (rel_time < 2377) {
				if (hops < 2) {
					if (rel_time < 2146) {
						if (rel_time < 1765) {
							w32 = 2;
						} else {
							w32 = -41;
						}
					} else {
						if (rel_time < 2302) {
							w32 = 25;
						} else {
							w32 = -5;
						}
					}
				} else {
					if (rel_time < 2170) {
						if (rel_time < 1765) {
							w32 = 0;
						} else {
							w32 = 14;
						}
					} else {
						if (hops < 3) {
							w32 = -20;
						} else {
							w32 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (cons != 6) {
						if (rel_time < 2379) {
							w32 = 15;
						} else {
							w32 = -3;
						}
					} else {
						if (rel_time < 2451) {
							w32 = -53;
						} else {
							w32 = 2;
						}
					}
				} else {
					if (rel_time < 2451) {
						if (hops < 5) {
							w32 = 17;
						} else {
							w32 = -102;
						}
					} else {
						if (rel_time < 2468) {
							w32 = -11;
						} else {
							w32 = 2;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (hops < 2) {
					if (rel_time < 1504) {
						if (rel_time < 866) {
							w32 = -2;
						} else {
							w32 = 50;
						}
					} else {
						if (rel_time < 2357) {
							w32 = -58;
						} else {
							w32 = 4;
						}
					}
				} else {
					if (rel_time < 2357) {
						if (rel_time < 1504) {
							w32 = -4;
						} else {
							w32 = 18;
						}
					} else {
						if (hops < 4) {
							w32 = -10;
						} else {
							w32 = 6;
						}
					}
				}
			} else {
				if (rel_time < 866) {
					if (rel_time < 648) {
						w32 = -12;
					} else {
						w32 = -21;
					}
				} else {
					if (rel_time < 2357) {
						if (rel_time < 2144) {
							w32 = 36;
						} else {
							w32 = 127;
						}
					} else {
						if (rel_time < 3848) {
							w32 = -1;
						} else {
							w32 = 19;
						}
					}
				}
			}
		}
	}
	return (67185 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32) >> 8;
}
