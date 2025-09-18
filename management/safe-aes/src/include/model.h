#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int model(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (prod != 0) {
		if (prod != 1) {
			if (hops < 3) {
				if (hops < 2) {
					w0 = -7487;
				} else {
					w0 = -6591;
				}
			} else {
				if (hops < 4) {
					w0 = -5695;
				} else {
					if (hops < 5) {
						w0 = -4799;
					} else {
						w0 = -3903;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1923) {
						if (rel_time < 1071) {
							w0 = -11327;
						} else {
							w0 = -11711;
						}
					} else {
						w0 = -11327;
					}
				} else {
					if (rel_time < 1131) {
						w0 = -10431;
					} else {
						if (rel_time < 1923) {
							w0 = -10815;
						} else {
							w0 = -10431;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1131) {
						w0 = -9535;
					} else {
						if (rel_time < 1923) {
							w0 = -9919;
						} else {
							w0 = -9535;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1923) {
							w0 = -8767;
						} else {
							w0 = -8639;
						}
					} else {
						if (rel_time < 1131) {
							w0 = -7742;
						} else {
							w0 = -7870;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (cons != 2) {
				if (cons != 3) {
					if (rel_time < 91) {
						if (hops < 3) {
							w0 = -2648;
						} else {
							w0 = -959;
						}
					} else {
						if (hops < 3) {
							w0 = 4080;
						} else {
							w0 = 5767;
						}
					}
				} else {
					if (size < 9) {
						if (rel_time < 1480) {
							w0 = 3641;
						} else {
							w0 = 7226;
						}
					} else {
						if (rel_time < 1674) {
							w0 = 10425;
						} else {
							w0 = 6588;
						}
					}
				}
			} else {
				if (rel_time < 845) {
					if (rel_time < 245) {
						if (rel_time < 32) {
							w0 = 8892;
						} else {
							w0 = 6969;
						}
					} else {
						if (hops < 3) {
							w0 = 11563;
						} else {
							w0 = 13248;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w0 = 5921;
						} else {
							w0 = 6817;
						}
					} else {
						if (hops < 4) {
							w0 = 7714;
						} else {
							w0 = 8790;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (hops < 3) {
					if (rel_time < 15) {
						if (hops < 2) {
							w0 = -11455;
						} else {
							w0 = -10559;
						}
					} else {
						if (rel_time < 1430) {
							w0 = -8279;
						} else {
							w0 = -10967;
						}
					}
				} else {
					if (rel_time < 15) {
						if (hops < 4) {
							w0 = -9663;
						} else {
							w0 = -8589;
						}
					} else {
						if (rel_time < 1430) {
							w0 = -6591;
						} else {
							w0 = -9280;
						}
					}
				}
			} else {
				if (rel_time < 1637) {
					if (rel_time < 227) {
						if (hops < 3) {
							w0 = 5801;
						} else {
							w0 = 7488;
						}
					} else {
						if (rel_time < 827) {
							w0 = -6981;
						} else {
							w0 = 5177;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w0 = -8830;
						} else {
							w0 = -7935;
						}
					} else {
						if (hops < 4) {
							w0 = -7039;
						} else {
							w0 = -5965;
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
					w1 = -3743;
				} else {
					w1 = -3295;
				}
			} else {
				if (hops < 4) {
					w1 = -2847;
				} else {
					if (hops < 5) {
						w1 = -2399;
					} else {
						w1 = -1951;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1071) {
						w1 = -5663;
					} else {
						if (rel_time < 1923) {
							w1 = -5855;
						} else {
							w1 = -5663;
						}
					}
				} else {
					if (rel_time < 1131) {
						w1 = -5215;
					} else {
						if (rel_time < 1923) {
							w1 = -5407;
						} else {
							w1 = -5215;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1131) {
						w1 = -4767;
					} else {
						if (rel_time < 1923) {
							w1 = -4959;
						} else {
							w1 = -4767;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1131) {
							w1 = -4255;
						} else {
							w1 = -4426;
						}
					} else {
						if (rel_time < 1923) {
							w1 = -3978;
						} else {
							w1 = -3807;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (cons != 7) {
				if (hops < 2) {
					if (rel_time < 463) {
						if (rel_time < 280) {
							w1 = 2222;
						} else {
							w1 = -1675;
						}
					} else {
						if (rel_time < 863) {
							w1 = 5382;
						} else {
							w1 = 2233;
						}
					}
				} else {
					if (rel_time < 1655) {
						if (cons != 2) {
							w1 = 2505;
						} else {
							w1 = 4407;
						}
					} else {
						if (rel_time < 1710) {
							w1 = 7452;
						} else {
							w1 = 3139;
						}
					}
				}
			} else {
				if (size < 9) {
					if (hops < 2) {
						if (rel_time < 172) {
							w1 = 1865;
						} else {
							w1 = 1367;
						}
					} else {
						if (hops < 4) {
							w1 = 2457;
						} else {
							w1 = 3556;
						}
					}
				} else {
					if (rel_time < 330) {
						if (hops < 2) {
							w1 = -2871;
						} else {
							w1 = -1740;
						}
					} else {
						if (rel_time < 1745) {
							w1 = 763;
						} else {
							w1 = 2810;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (hops < 2) {
					if (rel_time < 1430) {
						if (rel_time < 15) {
							w1 = -5727;
						} else {
							w1 = -4627;
						}
					} else {
						w1 = -5971;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 15) {
							w1 = -5087;
						} else {
							w1 = -4380;
						}
					} else {
						if (rel_time < 15) {
							w1 = -4295;
						} else {
							w1 = -3276;
						}
					}
				}
			} else {
				if (rel_time < 1637) {
					if (rel_time < 227) {
						if (hops < 2) {
							w1 = 2412;
						} else {
							w1 = 3543;
						}
					} else {
						if (rel_time < 827) {
							w1 = -3490;
						} else {
							w1 = 2589;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w1 = -4415;
						} else {
							w1 = -3967;
						}
					} else {
						if (hops < 5) {
							w1 = -3409;
						} else {
							w1 = -2265;
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
					w2 = -1872;
				} else {
					w2 = -1648;
				}
			} else {
				if (hops < 4) {
					w2 = -1424;
				} else {
					if (hops < 5) {
						w2 = -1200;
					} else {
						w2 = -976;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1071) {
						w2 = -2832;
					} else {
						if (rel_time < 1923) {
							w2 = -2928;
						} else {
							w2 = -2832;
						}
					}
				} else {
					if (rel_time < 1131) {
						w2 = -2608;
					} else {
						if (rel_time < 1923) {
							w2 = -2704;
						} else {
							w2 = -2608;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1131) {
						w2 = -2384;
					} else {
						if (rel_time < 1923) {
							w2 = -2480;
						} else {
							w2 = -2384;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1923) {
							w2 = -2227;
						} else {
							w2 = -2107;
						}
					} else {
						if (rel_time < 1131) {
							w2 = -1883;
						} else {
							w2 = -2003;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (hops < 4) {
				if (cons != 2) {
					if (cons != 3) {
						if (rel_time < 91) {
							w2 = -2397;
						} else {
							w2 = 979;
						}
					} else {
						if (size < 9) {
							w2 = 860;
						} else {
							w2 = 2647;
						}
					}
				} else {
					if (rel_time < 845) {
						if (rel_time < 245) {
							w2 = 1836;
						} else {
							w2 = 3555;
						}
					} else {
						if (rel_time < 1655) {
							w2 = 1189;
						} else {
							w2 = 2323;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (cons != 2) {
						if (rel_time < 91) {
							w2 = -1040;
						} else {
							w2 = 2147;
						}
					} else {
						if (rel_time < 845) {
							w2 = 4028;
						} else {
							w2 = 2509;
						}
					}
				} else {
					if (size < 9) {
						if (rel_time < 1480) {
							w2 = 2293;
						} else {
							w2 = 3764;
						}
					} else {
						if (rel_time < 863) {
							w2 = 5427;
						} else {
							w2 = 3581;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (rel_time < 1430) {
					if (rel_time < 15) {
						if (hops < 3) {
							w2 = -2794;
						} else {
							w2 = -2238;
						}
					} else {
						if (hops < 2) {
							w2 = -2314;
						} else {
							w2 = -1413;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w2 = -2903;
						} else {
							w2 = -2489;
						}
					} else {
						w2 = -1593;
					}
				}
			} else {
				if (rel_time < 1637) {
					if (rel_time < 227) {
						if (hops < 4) {
							w2 = 1445;
						} else {
							w2 = 2662;
						}
					} else {
						if (rel_time < 827) {
							w2 = -1745;
						} else {
							w2 = 1294;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2215) {
							w2 = -2199;
						} else {
							w2 = -1815;
						}
					} else {
						if (rel_time < 2215) {
							w2 = -1583;
						} else {
							w2 = -1200;
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
					w3 = -936;
				} else {
					w3 = -824;
				}
			} else {
				if (hops < 4) {
					w3 = -712;
				} else {
					if (hops < 5) {
						w3 = -600;
					} else {
						w3 = -488;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1071) {
						w3 = -1416;
					} else {
						if (rel_time < 1923) {
							w3 = -1464;
						} else {
							w3 = -1416;
						}
					}
				} else {
					if (rel_time < 1131) {
						w3 = -1304;
					} else {
						if (rel_time < 1923) {
							w3 = -1352;
						} else {
							w3 = -1304;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1131) {
						w3 = -1192;
					} else {
						if (rel_time < 1923) {
							w3 = -1240;
						} else {
							w3 = -1192;
						}
					}
				} else {
					if (rel_time < 1131) {
						if (hops < 5) {
							w3 = -1014;
						} else {
							w3 = -942;
						}
					} else {
						if (rel_time < 1923) {
							w3 = -1291;
						} else {
							w3 = -1024;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (cons != 4) {
				if (rel_time < 200) {
					if (hops < 2) {
						if (cons != 3) {
							w3 = 1116;
						} else {
							w3 = 32;
						}
					} else {
						if (cons != 7) {
							w3 = 1878;
						} else {
							w3 = 1060;
						}
					}
				} else {
					if (rel_time < 463) {
						if (rel_time < 297) {
							w3 = 200;
						} else {
							w3 = -2475;
						}
					} else {
						if (rel_time < 863) {
							w3 = 2705;
						} else {
							w3 = 569;
						}
					}
				}
			} else {
				if (rel_time < 91) {
					if (hops < 2) {
						w3 = -1724;
					} else {
						if (hops < 5) {
							w3 = -908;
						} else {
							w3 = 196;
						}
					}
				} else {
					if (rel_time < 1692) {
						if (rel_time < 1506) {
							w3 = 1281;
						} else {
							w3 = 6024;
						}
					} else {
						if (rel_time < 2266) {
							w3 = -100;
						} else {
							w3 = 1180;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (rel_time < 1430) {
					if (rel_time < 15) {
						if (hops < 5) {
							w3 = -1317;
						} else {
							w3 = -310;
						}
					} else {
						if (hops < 4) {
							w3 = -924;
						} else {
							w3 = -261;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w3 = -1480;
						} else {
							w3 = -1339;
						}
					} else {
						w3 = -797;
					}
				}
			} else {
				if (rel_time < 1637) {
					if (hops < 3) {
						if (rel_time < 227) {
							w3 = 664;
						} else {
							w3 = -769;
						}
					} else {
						if (rel_time < 827) {
							w3 = 595;
						} else {
							w3 = 1679;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w3 = -1204;
						} else {
							w3 = -980;
						}
					} else {
						if (rel_time < 2215) {
							w3 = -866;
						} else {
							w3 = -674;
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
					w4 = -468;
				} else {
					w4 = -412;
				}
			} else {
				if (hops < 4) {
					w4 = -356;
				} else {
					if (hops < 5) {
						w4 = -300;
					} else {
						w4 = -244;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1923) {
						if (rel_time < 1071) {
							w4 = -708;
						} else {
							w4 = -732;
						}
					} else {
						w4 = -708;
					}
				} else {
					if (rel_time < 1131) {
						w4 = -652;
					} else {
						if (rel_time < 1923) {
							w4 = -676;
						} else {
							w4 = -652;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						if (rel_time < 1131) {
							w4 = -596;
						} else {
							w4 = -604;
						}
					} else {
						if (rel_time < 1131) {
							w4 = -507;
						} else {
							w4 = -583;
						}
					}
				} else {
					if (rel_time < 1923) {
						if (rel_time < 1131) {
							w4 = -471;
						} else {
							w4 = -556;
						}
					} else {
						w4 = -391;
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (cons != 1) {
				if (rel_time < 3151) {
					if (rel_time < 1655) {
						if (rel_time < 280) {
							w4 = 477;
						} else {
							w4 = -250;
						}
					} else {
						if (rel_time < 1711) {
							w4 = 2091;
						} else {
							w4 = 172;
						}
					}
				} else {
					if (cons != 7) {
						if (cons != 5) {
							w4 = -977;
						} else {
							w4 = -295;
						}
					} else {
						if (hops < 2) {
							w4 = -77;
						} else {
							w4 = 288;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 227) {
						if (rel_time < 15) {
							w4 = -808;
						} else {
							w4 = 152;
						}
					} else {
						if (rel_time < 827) {
							w4 = -1634;
						} else {
							w4 = -561;
						}
					}
				} else {
					if (size < 9) {
						if (rel_time < 1430) {
							w4 = -527;
						} else {
							w4 = -694;
						}
					} else {
						if (rel_time < 1637) {
							w4 = 176;
						} else {
							w4 = -490;
						}
					}
				}
			}
		} else {
			if (cons != 3) {
				if (hops < 5) {
					if (rel_time < 280) {
						if (rel_time < 245) {
							w4 = 645;
						} else {
							w4 = 2447;
						}
					} else {
						if (rel_time < 809) {
							w4 = -1217;
						} else {
							w4 = 407;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 3168) {
							w4 = 1556;
						} else {
							w4 = 660;
						}
					} else {
						if (rel_time < 1637) {
							w4 = 1139;
						} else {
							w4 = -167;
						}
					}
				}
			} else {
				if (size < 9) {
					if (rel_time < 1480) {
						if (rel_time < 66) {
							w4 = 871;
						} else {
							w4 = -267;
						}
					} else {
						if (hops < 4) {
							w4 = 1976;
						} else {
							w4 = 1597;
						}
					}
				} else {
					if (rel_time < 863) {
						if (rel_time < 263) {
							w4 = 1152;
						} else {
							w4 = 3227;
						}
					} else {
						if (hops < 5) {
							w4 = 1032;
						} else {
							w4 = 2225;
						}
					}
				}
			}
		}
	}
	int w5;
	if (prod != 0) {
		if (prod != 1) {
			if (hops < 3) {
				if (hops < 2) {
					w5 = -234;
				} else {
					w5 = -206;
				}
			} else {
				if (hops < 4) {
					w5 = -178;
				} else {
					if (hops < 5) {
						w5 = -150;
					} else {
						w5 = -122;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1923) {
						if (rel_time < 1071) {
							w5 = -354;
						} else {
							w5 = -366;
						}
					} else {
						w5 = -354;
					}
				} else {
					if (rel_time < 1071) {
						w5 = -326;
					} else {
						if (rel_time < 1923) {
							w5 = -338;
						} else {
							w5 = -326;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						if (rel_time < 1923) {
							w5 = -305;
						} else {
							w5 = -294;
						}
					} else {
						if (rel_time < 1923) {
							w5 = -294;
						} else {
							w5 = -250;
						}
					}
				} else {
					if (rel_time < 1923) {
						if (rel_time < 1131) {
							w5 = -235;
						} else {
							w5 = -278;
						}
					} else {
						w5 = -195;
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (hops < 2) {
				if (cons != 2) {
					if (rel_time < 1728) {
						if (rel_time < 1611) {
							w5 = -288;
						} else {
							w5 = 1606;
						}
					} else {
						if (rel_time < 1745) {
							w5 = -1791;
						} else {
							w5 = -283;
						}
					}
				} else {
					if (rel_time < 845) {
						if (rel_time < 32) {
							w5 = 474;
						} else {
							w5 = -215;
						}
					} else {
						if (rel_time < 2231) {
							w5 = 1033;
						} else {
							w5 = -296;
						}
					}
				}
			} else {
				if (rel_time < 3151) {
					if (rel_time < 1674) {
						if (rel_time < 280) {
							w5 = 487;
						} else {
							w5 = 70;
						}
					} else {
						if (rel_time < 1728) {
							w5 = 1503;
						} else {
							w5 = 332;
						}
					}
				} else {
					if (cons != 6) {
						if (cons != 8) {
							w5 = 45;
						} else {
							w5 = -447;
						}
					} else {
						if (hops < 3) {
							w5 = -374;
						} else {
							w5 = -847;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1430) {
							w5 = -409;
						} else {
							w5 = -514;
						}
					} else {
						if (rel_time < 15) {
							w5 = -417;
						} else {
							w5 = -228;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1430) {
							w5 = -683;
						} else {
							w5 = -873;
						}
					} else {
						if (rel_time < 15) {
							w5 = -724;
						} else {
							w5 = -148;
						}
					}
				}
			} else {
				if (rel_time < 1637) {
					if (rel_time < 827) {
						if (rel_time < 227) {
							w5 = 306;
						} else {
							w5 = -612;
						}
					} else {
						if (hops < 4) {
							w5 = 397;
						} else {
							w5 = 1253;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 2215) {
							w5 = -376;
						} else {
							w5 = -184;
						}
					} else {
						if (hops < 5) {
							w5 = -614;
						} else {
							w5 = 32;
						}
					}
				}
			}
		}
	}
	int w6;
	if (cons != 2) {
		if (rel_time < 91) {
			if (rel_time < 66) {
				if (hops < 5) {
					if (hops < 2) {
						if (rel_time < 15) {
							w6 = -200;
						} else {
							w6 = -78;
						}
					} else {
						if (hops < 3) {
							w6 = -422;
						} else {
							w6 = -192;
						}
					}
				} else {
					if (rel_time < 15) {
						w6 = -362;
					} else {
						w6 = 1140;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w6 = -956;
					} else {
						if (hops < 3) {
							w6 = -997;
						} else {
							w6 = -1030;
						}
					}
				} else {
					if (hops < 5) {
						w6 = -812;
					} else {
						w6 = -923;
					}
				}
			}
		} else {
			if (rel_time < 280) {
				if (rel_time < 263) {
					if (cons != 6) {
						if (cons != 8) {
							w6 = 50;
						} else {
							w6 = 926;
						}
					} else {
						if (hops < 4) {
							w6 = 874;
						} else {
							w6 = 1247;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w6 = 1450;
						} else {
							w6 = 1817;
						}
					} else {
						if (hops < 5) {
							w6 = 980;
						} else {
							w6 = 2537;
						}
					}
				}
			} else {
				if (rel_time < 463) {
					if (cons != 7) {
						if (rel_time < 297) {
							w6 = -292;
						} else {
							w6 = -1387;
						}
					} else {
						if (hops < 3) {
							w6 = -336;
						} else {
							w6 = 345;
						}
					}
				} else {
					if (cons != 8) {
						if (rel_time < 1728) {
							w6 = 48;
						} else {
							w6 = -142;
						}
					} else {
						if (size < 9) {
							w6 = -424;
						} else {
							w6 = 829;
						}
					}
				}
			}
		}
	} else {
		if (size < 9) {
			if (rel_time < 1455) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 32) {
							w6 = 237;
						} else {
							w6 = 349;
						}
					} else {
						if (rel_time < 32) {
							w6 = -347;
						} else {
							w6 = 191;
						}
					}
				} else {
					if (rel_time < 32) {
						if (hops < 5) {
							w6 = 403;
						} else {
							w6 = 705;
						}
					} else {
						if (hops < 4) {
							w6 = 311;
						} else {
							w6 = 74;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w6 = -148;
						} else {
							w6 = -466;
						}
					} else {
						if (rel_time < 3105) {
							w6 = -137;
						} else {
							w6 = -131;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 3105) {
							w6 = 128;
						} else {
							w6 = 131;
						}
					} else {
						w6 = 451;
					}
				}
			}
		} else {
			if (rel_time < 1655) {
				if (hops < 3) {
					if (rel_time < 245) {
						if (hops < 2) {
							w6 = 81;
						} else {
							w6 = -467;
						}
					} else {
						if (hops < 2) {
							w6 = -102;
						} else {
							w6 = 440;
						}
					}
				} else {
					if (rel_time < 845) {
						if (rel_time < 245) {
							w6 = 305;
						} else {
							w6 = 927;
						}
					} else {
						if (hops < 4) {
							w6 = 55;
						} else {
							w6 = -182;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w6 = 1107;
					} else {
						w6 = 1453;
					}
				} else {
					if (hops < 4) {
						w6 = 1783;
					} else {
						if (hops < 5) {
							w6 = 2048;
						} else {
							w6 = 2369;
						}
					}
				}
			}
		}
	}
	int w7;
	if (hops < 4) {
		if (cons != 4) {
			if (cons != 2) {
				if (rel_time < 227) {
					if (rel_time < 66) {
						if (hops < 2) {
							w7 = -69;
						} else {
							w7 = -171;
						}
					} else {
						if (cons != 7) {
							w7 = 250;
						} else {
							w7 = -80;
						}
					}
				} else {
					if (rel_time < 827) {
						if (cons != 6) {
							w7 = -201;
						} else {
							w7 = -716;
						}
					} else {
						if (rel_time < 863) {
							w7 = 1568;
						} else {
							w7 = -68;
						}
					}
				}
			} else {
				if (rel_time < 2231) {
					if (rel_time < 1655) {
						if (rel_time < 1455) {
							w7 = 107;
						} else {
							w7 = -56;
						}
					} else {
						if (hops < 2) {
							w7 = 554;
						} else {
							w7 = 797;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w7 = -74;
						} else {
							w7 = -233;
						}
					} else {
						if (rel_time < 3105) {
							w7 = -69;
						} else {
							w7 = -66;
						}
					}
				}
			}
		} else {
			if (rel_time < 1506) {
				if (rel_time < 91) {
					if (hops < 2) {
						w7 = -478;
					} else {
						if (hops < 3) {
							w7 = -499;
						} else {
							w7 = -515;
						}
					}
				} else {
					if (rel_time < 280) {
						if (hops < 3) {
							w7 = 825;
						} else {
							w7 = 394;
						}
					} else {
						if (rel_time < 880) {
							w7 = -592;
						} else {
							w7 = 176;
						}
					}
				}
			} else {
				if (rel_time < 1692) {
					if (hops < 2) {
						w7 = 2286;
					} else {
						if (hops < 3) {
							w7 = 625;
						} else {
							w7 = 1520;
						}
					}
				} else {
					if (rel_time < 2266) {
						if (hops < 2) {
							w7 = -332;
						} else {
							w7 = -225;
						}
					} else {
						if (hops < 2) {
							w7 = 307;
						} else {
							w7 = 415;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 1923) {
				if (prod != 1) {
					if (hops < 5) {
						if (rel_time < 1415) {
							w7 = -99;
						} else {
							w7 = -4;
						}
					} else {
						w7 = -85;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1131) {
							w7 = -130;
						} else {
							w7 = -158;
						}
					} else {
						if (rel_time < 1131) {
							w7 = -142;
						} else {
							w7 = -68;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 5) {
						w7 = -4;
					} else {
						w7 = 10;
					}
				} else {
					if (hops < 5) {
						w7 = -54;
					} else {
						w7 = -27;
					}
				}
			}
		} else {
			if (hops < 5) {
				if (size < 9) {
					if (cons != 5) {
						if (cons != 1) {
							w7 = 102;
						} else {
							w7 = -300;
						}
					} else {
						if (rel_time < 1532) {
							w7 = 794;
						} else {
							w7 = 115;
						}
					}
				} else {
					if (rel_time < 463) {
						if (cons != 4) {
							w7 = -23;
						} else {
							w7 = 706;
						}
					} else {
						if (rel_time < 1728) {
							w7 = 643;
						} else {
							w7 = 133;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 463) {
						if (rel_time < 280) {
							w7 = 553;
						} else {
							w7 = -600;
						}
					} else {
						if (rel_time < 1728) {
							w7 = 765;
						} else {
							w7 = 433;
						}
					}
				} else {
					if (rel_time < 263) {
						if (rel_time < 66) {
							w7 = 570;
						} else {
							w7 = 822;
						}
					} else {
						if (rel_time < 863) {
							w7 = 2069;
						} else {
							w7 = 1062;
						}
					}
				}
			}
		}
	}
	int w8;
	if (hops < 2) {
		if (cons != 3) {
			if (rel_time < 313) {
				if (rel_time < 245) {
					if (cons != 6) {
						if (cons != 8) {
							w8 = -100;
						} else {
							w8 = 305;
						}
					} else {
						w8 = 331;
					}
				} else {
					if (cons != 5) {
						if (rel_time < 280) {
							w8 = 313;
						} else {
							w8 = 419;
						}
					} else {
						w8 = 709;
					}
				}
			} else {
				if (cons != 6) {
					if (rel_time < 898) {
						if (rel_time < 845) {
							w8 = -92;
						} else {
							w8 = -754;
						}
					} else {
						if (cons != 5) {
							w8 = -34;
						} else {
							w8 = 330;
						}
					}
				} else {
					if (size < 9) {
						if (rel_time < 1557) {
							w8 = -642;
						} else {
							w8 = -571;
						}
					} else {
						if (rel_time < 915) {
							w8 = -514;
						} else {
							w8 = -240;
						}
					}
				}
			}
		} else {
			if (rel_time < 2249) {
				if (size < 9) {
					if (rel_time < 66) {
						w8 = -4;
					} else {
						w8 = -1771;
					}
				} else {
					if (rel_time < 863) {
						if (rel_time < 263) {
							w8 = -404;
						} else {
							w8 = -430;
						}
					} else {
						if (rel_time < 1674) {
							w8 = 17;
						} else {
							w8 = -417;
						}
					}
				}
			} else {
				w8 = 797;
			}
		}
	} else {
		if (cons != 3) {
			if (rel_time < 915) {
				if (rel_time < 280) {
					if (rel_time < 118) {
						if (cons != 4) {
							w8 = -61;
						} else {
							w8 = -303;
						}
					} else {
						if (cons != 2) {
							w8 = 235;
						} else {
							w8 = -78;
						}
					}
				} else {
					if (cons != 8) {
						if (rel_time < 313) {
							w8 = -511;
						} else {
							w8 = -46;
						}
					} else {
						if (hops < 3) {
							w8 = -1212;
						} else {
							w8 = -611;
						}
					}
				}
			} else {
				if (rel_time < 1069) {
					if (cons != 7) {
						if (hops < 3) {
							w8 = 956;
						} else {
							w8 = 683;
						}
					} else {
						if (hops < 3) {
							w8 = 682;
						} else {
							w8 = 409;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 5) {
							w8 = -15;
						} else {
							w8 = 219;
						}
					} else {
						if (rel_time < 1692) {
							w8 = 492;
						} else {
							w8 = 105;
						}
					}
				}
			}
		} else {
			if (rel_time < 2249) {
				if (rel_time < 863) {
					if (rel_time < 263) {
						if (hops < 3) {
							w8 = -188;
						} else {
							w8 = 304;
						}
					} else {
						if (hops < 3) {
							w8 = 1726;
						} else {
							w8 = 885;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1674) {
							w8 = -1059;
						} else {
							w8 = -282;
						}
					} else {
						if (rel_time < 1480) {
							w8 = -223;
						} else {
							w8 = 410;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w8 = 933;
					} else {
						w8 = 927;
					}
				} else {
					if (hops < 5) {
						w8 = 475;
					} else {
						w8 = 891;
					}
				}
			}
		}
	}
	return (64894 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8) >> 8;
}
