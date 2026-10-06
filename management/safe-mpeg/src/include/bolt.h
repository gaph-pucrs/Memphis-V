#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 133) {
		if (rel_time < 1447) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (hops < 2) {
						if (prod != 0) {
							w0 = 9605;
						} else {
							w0 = 10544;
						}
					} else {
						if (prod != 0) {
							w0 = 10496;
						} else {
							w0 = 11484;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w0 = 11398;
						} else {
							w0 = 12272;
						}
					} else {
						w0 = 12678;
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 3) {
						w0 = -8965;
					} else {
						w0 = -7419;
					}
				} else {
					w0 = 11455;
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w0 = -9464;
					} else {
						w0 = -8619;
					}
				} else {
					if (hops < 4) {
						if (prod != 1) {
							w0 = -7760;
						} else {
							w0 = -7642;
						}
					} else {
						w0 = -6790;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 2025) {
						if (hops < 2) {
							w0 = -6520;
						} else {
							w0 = -5562;
						}
					} else {
						if (rel_time < 11870) {
							w0 = -3209;
						} else {
							w0 = -5908;
						}
					}
				} else {
					if (rel_time < 11870) {
						if (rel_time < 11291) {
							w0 = -2120;
						} else {
							w0 = 592;
						}
					} else {
						if (hops < 4) {
							w0 = -4689;
						} else {
							w0 = -3980;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 867) {
				if (hops < 2) {
					w0 = 13910;
				} else {
					w0 = 14769;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 10734) {
						if (rel_time < 10155) {
							w0 = 16322;
						} else {
							w0 = 17063;
						}
					} else {
						w0 = 15616;
					}
				} else {
					if (rel_time < 939) {
						w0 = 16375;
					} else {
						if (rel_time < 10736) {
							w0 = 17227;
						} else {
							w0 = 16377;
						}
					}
				}
			}
		} else {
			if (rel_time < 867) {
				w0 = 15934;
			} else {
				if (hops < 4) {
					if (rel_time < 10739) {
						if (rel_time < 939) {
							w0 = 17250;
						} else {
							w0 = 18069;
						}
					} else {
						w0 = 17231;
					}
				} else {
					w0 = 18904;
				}
			}
		}
	}
	int w1;
	if (size < 133) {
		if (rel_time < 1447) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w1 = 4807;
						} else {
							w1 = 5252;
						}
					} else {
						if (hops < 2) {
							w1 = 5283;
						} else {
							w1 = 5752;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 0) {
							w1 = 5704;
						} else {
							w1 = 6132;
						}
					} else {
						if (prod != 0) {
							w1 = 6153;
						} else {
							w1 = 6890;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w1 = -4941;
					} else {
						w1 = -4001;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w1 = 4789;
						} else {
							w1 = 5674;
						}
					} else {
						w1 = 6745;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w1 = -4732;
					} else {
						w1 = -4310;
					}
				} else {
					if (hops < 4) {
						if (prod != 1) {
							w1 = -3881;
						} else {
							w1 = -3821;
						}
					} else {
						w1 = -3395;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11870) {
						if (rel_time < 11291) {
							w1 = -2367;
						} else {
							w1 = 277;
						}
					} else {
						w1 = -3510;
					}
				} else {
					if (rel_time < 2025) {
						if (hops < 3) {
							w1 = -2785;
						} else {
							w1 = -3438;
						}
					} else {
						if (rel_time < 2605) {
							w1 = 1419;
						} else {
							w1 = -1209;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 888) {
				w1 = 7220;
			} else {
				if (hops < 2) {
					if (rel_time < 939) {
						w1 = 7517;
					} else {
						if (rel_time < 1515) {
							w1 = 8806;
						} else {
							w1 = 8164;
						}
					}
				} else {
					if (rel_time < 10736) {
						if (rel_time < 10159) {
							w1 = 8548;
						} else {
							w1 = 9321;
						}
					} else {
						w1 = 8201;
					}
				}
			}
		} else {
			if (rel_time < 867) {
				if (hops < 4) {
					w1 = 7752;
				} else {
					w1 = 8641;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1515) {
						if (rel_time < 939) {
							w1 = 8640;
						} else {
							w1 = 9842;
						}
					} else {
						if (rel_time < 2094) {
							w1 = 8309;
						} else {
							w1 = 9004;
						}
					}
				} else {
					if (rel_time < 939) {
						w1 = 8706;
					} else {
						if (rel_time < 10780) {
							w1 = 9537;
						} else {
							w1 = 8714;
						}
					}
				}
			}
		}
	}
	int w2;
	if (size < 133) {
		if (rel_time < 1447) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w2 = 2405;
						} else {
							w2 = 2628;
						}
					} else {
						if (hops < 2) {
							w2 = 2647;
						} else {
							w2 = 2881;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 0) {
							w2 = 2855;
						} else {
							w2 = 3072;
						}
					} else {
						if (prod != 0) {
							w2 = 3085;
						} else {
							w2 = 3463;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 3) {
						w2 = -2321;
					} else {
						if (hops < 4) {
							w2 = -1875;
						} else {
							w2 = -782;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w2 = 2422;
						} else {
							w2 = 2865;
						}
					} else {
						w2 = 3414;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w2 = -2366;
					} else {
						if (prod != 1) {
							w2 = -2178;
						} else {
							w2 = -2132;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 4343) {
							w2 = -1901;
						} else {
							w2 = -1934;
						}
					} else {
						if (prod != 1) {
							w2 = -1722;
						} else {
							w2 = -1673;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 3184) {
						if (rel_time < 2605) {
							w2 = -478;
						} else {
							w2 = -3387;
						}
					} else {
						if (rel_time < 3763) {
							w2 = 1788;
						} else {
							w2 = -882;
						}
					}
				} else {
					if (rel_time < 10711) {
						if (rel_time < 10132) {
							w2 = 66;
						} else {
							w2 = 2770;
						}
					} else {
						if (rel_time < 11291) {
							w2 = -2324;
						} else {
							w2 = 11;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 939) {
				if (hops < 2) {
					if (rel_time < 867) {
						w2 = 3363;
					} else {
						w2 = 3782;
					}
				} else {
					w2 = 3868;
				}
			} else {
				if (rel_time < 1515) {
					if (hops < 2) {
						w2 = 4410;
					} else {
						w2 = 5111;
					}
				} else {
					if (rel_time < 2094) {
						if (hops < 2) {
							w2 = 3353;
						} else {
							w2 = 3560;
						}
					} else {
						if (rel_time < 2627) {
							w2 = 4948;
						} else {
							w2 = 4172;
						}
					}
				}
			}
		} else {
			if (rel_time < 867) {
				if (hops < 4) {
					w2 = 3882;
				} else {
					w2 = 4344;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 10739) {
						if (rel_time < 10159) {
							w2 = 4477;
						} else {
							w2 = 5224;
						}
					} else {
						w2 = 4136;
					}
				} else {
					if (rel_time < 939) {
						w2 = 4377;
					} else {
						if (rel_time < 1515) {
							w2 = 5471;
						} else {
							w2 = 4705;
						}
					}
				}
			}
		}
	}
	int w3;
	if (size < 133) {
		if (rel_time < 1447) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w3 = 1204;
						} else {
							w3 = 1315;
						}
					} else {
						if (hops < 2) {
							w3 = 1326;
						} else {
							w3 = 1443;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 0) {
							w3 = 1429;
						} else {
							w3 = 1539;
						}
					} else {
						if (rel_time < 1014) {
							w3 = 1547;
						} else {
							w3 = 1742;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w3 = -1368;
					} else {
						if (hops < 4) {
							w3 = -986;
						} else {
							w3 = -469;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 1225;
						} else {
							w3 = 1446;
						}
					} else {
						w3 = 1728;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w3 = -1183;
					} else {
						if (prod != 1) {
							w3 = -1089;
						} else {
							w3 = -1066;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 1) {
							w3 = -978;
						} else {
							w3 = -948;
						}
					} else {
						if (prod != 1) {
							w3 = -861;
						} else {
							w3 = -837;
						}
					}
				}
			} else {
				if (rel_time < 2025) {
					if (hops < 2) {
						w3 = -1846;
					} else {
						if (hops < 3) {
							w3 = -1156;
						} else {
							w3 = -1552;
						}
					}
				} else {
					if (rel_time < 2605) {
						if (hops < 2) {
							w3 = 1634;
						} else {
							w3 = 912;
						}
					} else {
						if (rel_time < 4342) {
							w3 = -1174;
						} else {
							w3 = -224;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 3207) {
				if (rel_time < 2627) {
					if (rel_time < 2094) {
						if (rel_time < 1515) {
							w3 = 1931;
						} else {
							w3 = 1679;
						}
					} else {
						w3 = 2376;
					}
				} else {
					w3 = 1310;
				}
			} else {
				if (rel_time < 3785) {
					w3 = 2763;
				} else {
					if (rel_time < 4364) {
						w3 = 1316;
					} else {
						if (rel_time < 4944) {
							w3 = 2764;
						} else {
							w3 = 1976;
						}
					}
				}
			}
		} else {
			if (rel_time < 939) {
				if (hops < 4) {
					if (rel_time < 867) {
						w3 = 1900;
					} else {
						w3 = 2049;
					}
				} else {
					w3 = 2198;
				}
			} else {
				if (rel_time < 1515) {
					if (hops < 3) {
						w3 = 2559;
					} else {
						w3 = 2712;
					}
				} else {
					if (rel_time < 2094) {
						if (hops < 4) {
							w3 = 1851;
						} else {
							w3 = 1662;
						}
					} else {
						if (rel_time < 2673) {
							w3 = 2800;
						} else {
							w3 = 2205;
						}
					}
				}
			}
		}
	}
	int w4;
	if (size < 133) {
		if (rel_time < 1447) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (rel_time < 888) {
						w4 = 609;
					} else {
						if (hops < 2) {
							w4 = 633;
						} else {
							w4 = 710;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1014) {
							w4 = 715;
						} else {
							w4 = 774;
						}
					} else {
						if (prod != 0) {
							w4 = 775;
						} else {
							w4 = 876;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w4 = -695;
					} else {
						w4 = -492;
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 619;
						} else {
							w4 = 755;
						}
					} else {
						w4 = 1404;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 2026) {
							w4 = -623;
						} else {
							w4 = -590;
						}
					} else {
						if (rel_time < 10272) {
							w4 = -536;
						} else {
							w4 = -552;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1467) {
							w4 = -411;
						} else {
							w4 = -483;
						}
					} else {
						if (rel_time < 2673) {
							w4 = -405;
						} else {
							w4 = -428;
						}
					}
				}
			} else {
				if (rel_time < 10711) {
					if (rel_time < 10132) {
						if (rel_time < 9555) {
							w4 = -55;
						} else {
							w4 = -2718;
						}
					} else {
						if (hops < 4) {
							w4 = 2364;
						} else {
							w4 = 1504;
						}
					}
				} else {
					if (rel_time < 11291) {
						if (hops < 4) {
							w4 = -2767;
						} else {
							w4 = -1056;
						}
					} else {
						if (rel_time < 11870) {
							w4 = 1536;
						} else {
							w4 = -1258;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9622) {
			if (rel_time < 9042) {
				if (rel_time < 8463) {
					if (rel_time < 7884) {
						if (rel_time < 7306) {
							w4 = 1101;
						} else {
							w4 = 363;
						}
					} else {
						if (rel_time < 8417) {
							w4 = 1789;
						} else {
							w4 = 1894;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w4 = 327;
						} else {
							w4 = 393;
						}
					} else {
						w4 = 547;
					}
				}
			} else {
				if (rel_time < 9576) {
					w4 = 1809;
				} else {
					w4 = 1899;
				}
			}
		} else {
			if (rel_time < 10201) {
				if (rel_time < 10159) {
					if (hops < 3) {
						w4 = 333;
					} else {
						w4 = 371;
					}
				} else {
					w4 = 543;
				}
			} else {
				if (rel_time < 10780) {
					if (rel_time < 10739) {
						if (rel_time < 10734) {
							w4 = 1404;
						} else {
							w4 = 1502;
						}
					} else {
						w4 = 1954;
					}
				} else {
					if (hops < 2) {
						w4 = 678;
					} else {
						w4 = 946;
					}
				}
			}
		}
	}
	int w5;
	if (size < 133) {
		if (rel_time < 1447) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w5 = 292;
						} else {
							w5 = 328;
						}
					} else {
						w5 = 360;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1014) {
							w5 = 358;
						} else {
							w5 = 388;
						}
					} else {
						if (prod != 1) {
							w5 = 426;
						} else {
							w5 = 366;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w5 = -353;
					} else {
						if (hops < 4) {
							w5 = -252;
						} else {
							w5 = -85;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w5 = 313;
						} else {
							w5 = 380;
						}
					} else {
						w5 = 766;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (prod != 0) {
					if (rel_time < 4921) {
						if (prod != 1) {
							w5 = -307;
						} else {
							w5 = -297;
						}
					} else {
						if (rel_time < 5502) {
							w5 = -275;
						} else {
							w5 = -295;
						}
					}
				} else {
					if (rel_time < 4921) {
						if (rel_time < 4342) {
							w5 = -596;
						} else {
							w5 = 2026;
						}
					} else {
						if (rel_time < 5501) {
							w5 = -3103;
						} else {
							w5 = -379;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 3) {
						if (prod != 1) {
							w5 = -275;
						} else {
							w5 = -264;
						}
					} else {
						if (hops < 4) {
							w5 = -241;
						} else {
							w5 = -212;
						}
					}
				} else {
					if (rel_time < 3184) {
						if (rel_time < 2605) {
							w5 = -87;
						} else {
							w5 = -1025;
						}
					} else {
						if (rel_time < 3763) {
							w5 = 1901;
						} else {
							w5 = 13;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3252) {
			if (rel_time < 2673) {
				if (rel_time < 2626) {
					if (rel_time < 939) {
						if (hops < 2) {
							w5 = 276;
						} else {
							w5 = 453;
						}
					} else {
						if (rel_time < 1515) {
							w5 = 751;
						} else {
							w5 = 422;
						}
					}
				} else {
					if (hops < 3) {
						w5 = 630;
					} else {
						if (hops < 4) {
							w5 = 1025;
						} else {
							w5 = 1154;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 3205) {
						w5 = 111;
					} else {
						w5 = 88;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w5 = -235;
						} else {
							w5 = -161;
						}
					} else {
						if (rel_time < 3207) {
							w5 = 15;
						} else {
							w5 = -16;
						}
					}
				}
			}
		} else {
			if (rel_time < 3830) {
				if (hops < 2) {
					w5 = 834;
				} else {
					if (hops < 4) {
						w5 = 1339;
					} else {
						w5 = 1447;
					}
				}
			} else {
				if (rel_time < 4410) {
					if (hops < 2) {
						w5 = 110;
					} else {
						if (hops < 4) {
							w5 = -182;
						} else {
							w5 = -7;
						}
					}
				} else {
					if (rel_time < 4989) {
						if (hops < 2) {
							w5 = 835;
						} else {
							w5 = 1334;
						}
					} else {
						if (rel_time < 5568) {
							w5 = -187;
						} else {
							w5 = 604;
						}
					}
				}
			}
		}
	}
	int w6;
	if (size < 133) {
		if (rel_time < 12009) {
			if (rel_time < 9114) {
				if (rel_time < 8534) {
					if (rel_time < 7890) {
						if (rel_time < 7310) {
							w6 = -50;
						} else {
							w6 = -958;
						}
					} else {
						if (prod != 0) {
							w6 = -135;
						} else {
							w6 = 2485;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 2) {
							w6 = -166;
						} else {
							w6 = -124;
						}
					} else {
						if (rel_time < 8975) {
							w6 = -2645;
						} else {
							w6 = 2510;
						}
					}
				}
			} else {
				if (rel_time < 9121) {
					if (hops < 2) {
						w6 = 2222;
					} else {
						if (hops < 4) {
							w6 = 2541;
						} else {
							w6 = 2869;
						}
					}
				} else {
					if (rel_time < 10132) {
						if (rel_time < 9693) {
							w6 = -131;
						} else {
							w6 = -1312;
						}
					} else {
						if (rel_time < 10711) {
							w6 = 309;
						} else {
							w6 = -155;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w6 = -389;
			} else {
				if (hops < 3) {
					w6 = -718;
				} else {
					if (hops < 4) {
						w6 = -572;
					} else {
						w6 = -673;
					}
				}
			}
		}
	} else {
		if (rel_time < 9622) {
			if (rel_time < 9042) {
				if (rel_time < 8463) {
					if (rel_time < 6727) {
						if (rel_time < 6147) {
							w6 = 306;
						} else {
							w6 = -486;
						}
					} else {
						if (rel_time < 7306) {
							w6 = 1007;
						} else {
							w6 = 255;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 8999) {
							w6 = -136;
						} else {
							w6 = -96;
						}
					} else {
						w6 = -26;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w6 = 592;
					} else {
						w6 = 635;
					}
				} else {
					w6 = 726;
				}
			}
		} else {
			if (rel_time < 10201) {
				if (rel_time < 10159) {
					if (hops < 3) {
						w6 = -135;
					} else {
						w6 = -116;
					}
				} else {
					w6 = -27;
				}
			} else {
				if (rel_time < 10780) {
					if (rel_time < 10739) {
						if (hops < 2) {
							w6 = 400;
						} else {
							w6 = 449;
						}
					} else {
						w6 = 682;
					}
				} else {
					if (rel_time < 11313) {
						w6 = 38;
					} else {
						if (hops < 3) {
							w6 = 149;
						} else {
							w6 = 191;
						}
					}
				}
			}
		}
	}
	int w7;
	if (size < 133) {
		if (rel_time < 6729) {
			if (rel_time < 6219) {
				if (rel_time < 5640) {
					if (rel_time < 5060) {
						if (rel_time < 4481) {
							w7 = -110;
						} else {
							w7 = 661;
						}
					} else {
						if (rel_time < 5064) {
							w7 = -2224;
						} else {
							w7 = -109;
						}
					}
				} else {
					if (rel_time < 6079) {
						if (hops < 3) {
							w7 = 2372;
						} else {
							w7 = 2729;
						}
					} else {
						if (prod != 0) {
							w7 = -101;
						} else {
							w7 = -2525;
						}
					}
				}
			} else {
				if (rel_time < 6658) {
					if (hops < 3) {
						if (hops < 2) {
							w7 = -2891;
						} else {
							w7 = -2656;
						}
					} else {
						if (hops < 4) {
							w7 = -2435;
						} else {
							w7 = -2199;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 6727) {
							w7 = -126;
						} else {
							w7 = -102;
						}
					} else {
						if (rel_time < 6661) {
							w7 = -139;
						} else {
							w7 = -47;
						}
					}
				}
			}
		} else {
			if (rel_time < 7237) {
				if (prod != 0) {
					if (hops < 4) {
						w7 = -141;
					} else {
						w7 = -102;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w7 = 2245;
						} else {
							w7 = 2485;
						}
					} else {
						if (hops < 4) {
							w7 = 2649;
						} else {
							w7 = 2895;
						}
					}
				}
			} else {
				if (rel_time < 7816) {
					if (prod != 0) {
						if (rel_time < 7310) {
							w7 = -95;
						} else {
							w7 = 346;
						}
					} else {
						if (hops < 3) {
							w7 = -2302;
						} else {
							w7 = -1934;
						}
					}
				} else {
					if (rel_time < 8396) {
						if (prod != 0) {
							w7 = 300;
						} else {
							w7 = 1243;
						}
					} else {
						if (rel_time < 8975) {
							w7 = -492;
						} else {
							w7 = -6;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5568) {
			if (rel_time < 4989) {
				if (rel_time < 4942) {
					if (rel_time < 3830) {
						if (rel_time < 3252) {
							w7 = 63;
						} else {
							w7 = 449;
						}
					} else {
						if (rel_time < 4410) {
							w7 = -194;
						} else {
							w7 = 263;
						}
					}
				} else {
					if (hops < 2) {
						w7 = 269;
					} else {
						if (hops < 4) {
							w7 = 498;
						} else {
							w7 = 620;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w7 = -279;
					} else {
						w7 = -233;
					}
				} else {
					w7 = -66;
				}
			}
		} else {
			if (rel_time < 6147) {
				if (hops < 2) {
					w7 = 759;
				} else {
					if (rel_time < 6103) {
						w7 = 875;
					} else {
						w7 = 975;
					}
				}
			} else {
				if (rel_time < 6727) {
					if (hops < 4) {
						if (rel_time < 6681) {
							w7 = -284;
						} else {
							w7 = -214;
						}
					} else {
						w7 = -60;
					}
				} else {
					if (rel_time < 7306) {
						if (hops < 2) {
							w7 = 432;
						} else {
							w7 = 533;
						}
					} else {
						if (rel_time < 7884) {
							w7 = -248;
						} else {
							w7 = 166;
						}
					}
				}
			}
		}
	}
	int w8;
	if (rel_time < 3830) {
		if (rel_time < 3254) {
			if (rel_time < 2674) {
				if (rel_time < 2165) {
					if (rel_time < 1515) {
						if (rel_time < 867) {
							w8 = -38;
						} else {
							w8 = 157;
						}
					} else {
						if (prod != 0) {
							w8 = -50;
						} else {
							w8 = -530;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w8 = -41;
						} else {
							w8 = 250;
						}
					} else {
						if (hops < 2) {
							w8 = 1223;
						} else {
							w8 = 607;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 2) {
							w8 = -71;
						} else {
							w8 = -36;
						}
					} else {
						if (hops < 2) {
							w8 = -131;
						} else {
							w8 = -272;
						}
					}
				} else {
					if (hops < 2) {
						w8 = -1052;
					} else {
						if (hops < 4) {
							w8 = -331;
						} else {
							w8 = -1082;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 3784) {
					if (rel_time < 3783) {
						if (hops < 3) {
							w8 = -83;
						} else {
							w8 = -46;
						}
					} else {
						if (hops < 2) {
							w8 = 40;
						} else {
							w8 = 262;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 42;
					} else {
						if (hops < 4) {
							w8 = 294;
						} else {
							w8 = 352;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w8 = 1529;
					} else {
						if (hops < 3) {
							w8 = 691;
						} else {
							w8 = 925;
						}
					}
				} else {
					w8 = 2505;
				}
			}
		}
	} else {
		if (rel_time < 4342) {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w8 = -57;
					} else {
						if (rel_time < 3903) {
							w8 = -78;
						} else {
							w8 = -137;
						}
					}
				} else {
					if (rel_time < 3831) {
						w8 = -74;
					} else {
						if (hops < 4) {
							w8 = -17;
						} else {
							w8 = -4;
						}
					}
				}
			} else {
				if (hops < 3) {
					w8 = -2213;
				} else {
					if (hops < 4) {
						w8 = -1909;
					} else {
						w8 = -1649;
					}
				}
			}
		} else {
			if (rel_time < 4921) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 4481) {
							w8 = -47;
						} else {
							w8 = -446;
						}
					} else {
						if (hops < 2) {
							w8 = -1;
						} else {
							w8 = -136;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 710;
					} else {
						if (hops < 3) {
							w8 = 2147;
						} else {
							w8 = 2426;
						}
					}
				}
			} else {
				if (rel_time < 5501) {
					if (prod != 0) {
						if (size < 133) {
							w8 = -394;
						} else {
							w8 = 221;
						}
					} else {
						if (hops < 2) {
							w8 = -496;
						} else {
							w8 = -1466;
						}
					}
				} else {
					if (rel_time < 6147) {
						if (prod != 0) {
							w8 = 32;
						} else {
							w8 = 1338;
						}
					} else {
						if (rel_time < 6658) {
							w8 = -679;
						} else {
							w8 = 17;
						}
					}
				}
			}
		}
	}
	int w9;
	if (rel_time < 9622) {
		if (rel_time < 9114) {
			if (rel_time < 8534) {
				if (rel_time < 7884) {
					if (rel_time < 7310) {
						if (rel_time < 6798) {
							w9 = -12;
						} else {
							w9 = 345;
						}
					} else {
						if (prod != 0) {
							w9 = 28;
						} else {
							w9 = -1091;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w9 = 148;
						} else {
							w9 = 412;
						}
					} else {
						if (hops < 2) {
							w9 = 353;
						} else {
							w9 = 714;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 8975) {
						if (hops < 3) {
							w9 = 89;
						} else {
							w9 = 253;
						}
					} else {
						if (size < 133) {
							w9 = -72;
						} else {
							w9 = -151;
						}
					}
				} else {
					if (rel_time < 8975) {
						if (hops < 3) {
							w9 = -1223;
						} else {
							w9 = -860;
						}
					} else {
						w9 = 1307;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 9556) {
						if (hops < 2) {
							w9 = -53;
						} else {
							w9 = -99;
						}
					} else {
						if (hops < 4) {
							w9 = -65;
						} else {
							w9 = 6;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 9574) {
							w9 = 175;
						} else {
							w9 = 224;
						}
					} else {
						w9 = 274;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 9121) {
						if (hops < 2) {
							w9 = 1108;
						} else {
							w9 = 1198;
						}
					} else {
						w9 = 1869;
					}
				} else {
					w9 = 1378;
				}
			}
		}
	} else {
		if (rel_time < 10272) {
			if (prod != 0) {
				if (rel_time < 9693) {
					if (hops < 3) {
						if (hops < 2) {
							w9 = -83;
						} else {
							w9 = -100;
						}
					} else {
						if (hops < 4) {
							w9 = -21;
						} else {
							w9 = -59;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w9 = -310;
						} else {
							w9 = -284;
						}
					} else {
						if (rel_time < 10159) {
							w9 = -156;
						} else {
							w9 = -105;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w9 = -934;
					} else {
						if (rel_time < 9693) {
							w9 = -1049;
						} else {
							w9 = -685;
						}
					}
				} else {
					if (rel_time < 10132) {
						if (hops < 4) {
							w9 = -505;
						} else {
							w9 = -255;
						}
					} else {
						w9 = 1066;
					}
				}
			}
		} else {
			if (rel_time < 10711) {
				if (hops < 4) {
					if (hops < 2) {
						w9 = 852;
					} else {
						if (hops < 3) {
							w9 = 1099;
						} else {
							w9 = 1272;
						}
					}
				} else {
					w9 = 591;
				}
			} else {
				if (rel_time < 11291) {
					if (prod != 0) {
						if (size < 133) {
							w9 = -66;
						} else {
							w9 = 137;
						}
					} else {
						if (hops < 4) {
							w9 = -1257;
						} else {
							w9 = -465;
						}
					}
				} else {
					if (rel_time < 11870) {
						if (prod != 0) {
							w9 = -51;
						} else {
							w9 = 889;
						}
					} else {
						if (prod != 0) {
							w9 = -55;
						} else {
							w9 = -297;
						}
					}
				}
			}
		}
	}
	int w10;
	if (hops < 3) {
		if (rel_time < 11366) {
			if (rel_time < 10851) {
				if (rel_time < 10272) {
					if (rel_time < 9693) {
						if (rel_time < 9114) {
							w10 = -27;
						} else {
							w10 = 151;
						}
					} else {
						if (rel_time < 10132) {
							w10 = -402;
						} else {
							w10 = -121;
						}
					}
				} else {
					if (rel_time < 10711) {
						if (hops < 2) {
							w10 = 427;
						} else {
							w10 = 550;
						}
					} else {
						if (size < 133) {
							w10 = -50;
						} else {
							w10 = 46;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11313) {
						if (rel_time < 11293) {
							w10 = -85;
						} else {
							w10 = -51;
						}
					} else {
						if (hops < 2) {
							w10 = -43;
						} else {
							w10 = 15;
						}
					}
				} else {
					if (hops < 2) {
						w10 = -865;
					} else {
						w10 = -616;
					}
				}
			}
		} else {
			if (rel_time < 11870) {
				if (hops < 2) {
					if (prod != 0) {
						if (rel_time < 11431) {
							w10 = -86;
						} else {
							w10 = 0;
						}
					} else {
						w10 = -258;
					}
				} else {
					if (prod != 0) {
						if (rel_time < 11431) {
							w10 = -39;
						} else {
							w10 = -104;
						}
					} else {
						w10 = 1303;
					}
				}
			} else {
				if (rel_time < 12009) {
					if (prod != 1) {
						if (rel_time < 11875) {
							w10 = -43;
						} else {
							w10 = -9;
						}
					} else {
						if (rel_time < 11943) {
							w10 = -55;
						} else {
							w10 = -26;
						}
					}
				} else {
					if (hops < 2) {
						w10 = -52;
					} else {
						w10 = -217;
					}
				}
			}
		}
	} else {
		if (prod != 2) {
			if (prod != 1) {
				if (rel_time < 10780) {
					if (hops < 4) {
						if (rel_time < 10159) {
							w10 = 56;
						} else {
							w10 = 358;
						}
					} else {
						if (size < 133) {
							w10 = 286;
						} else {
							w10 = 117;
						}
					}
				} else {
					if (rel_time < 11291) {
						if (hops < 4) {
							w10 = -408;
						} else {
							w10 = -234;
						}
					} else {
						if (rel_time < 11870) {
							w10 = 112;
						} else {
							w10 = -158;
						}
					}
				}
			} else {
				if (rel_time < 1014) {
					w10 = 184;
				} else {
					if (rel_time < 6147) {
						if (rel_time < 4481) {
							w10 = -14;
						} else {
							w10 = -131;
						}
					} else {
						if (rel_time < 6219) {
							w10 = 345;
						} else {
							w10 = -14;
						}
					}
				}
			}
		} else {
			if (rel_time < 888) {
				w10 = 195;
			} else {
				if (rel_time < 7257) {
					if (rel_time < 6678) {
						if (rel_time < 4362) {
							w10 = -13;
						} else {
							w10 = -87;
						}
					} else {
						if (hops < 4) {
							w10 = -252;
						} else {
							w10 = -213;
						}
					}
				} else {
					if (rel_time < 7837) {
						if (rel_time < 7818) {
							w10 = 208;
						} else {
							w10 = 157;
						}
					} else {
						if (rel_time < 8396) {
							w10 = -268;
						} else {
							w10 = -39;
						}
					}
				}
			}
		}
	}
	int w11;
	if (rel_time < 3830) {
		if (rel_time < 3254) {
			if (rel_time < 2674) {
				if (rel_time < 2165) {
					if (rel_time < 1447) {
						if (size < 133) {
							w11 = 150;
						} else {
							w11 = -13;
						}
					} else {
						if (prod != 0) {
							w11 = -9;
						} else {
							w11 = -273;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w11 = -4;
						} else {
							w11 = 126;
						}
					} else {
						if (hops < 2) {
							w11 = 632;
						} else {
							w11 = 286;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 3185) {
							w11 = -19;
						} else {
							w11 = 1;
						}
					} else {
						if (hops < 2) {
							w11 = -46;
						} else {
							w11 = -143;
						}
					}
				} else {
					if (hops < 2) {
						w11 = -507;
					} else {
						if (hops < 4) {
							w11 = -165;
						} else {
							w11 = -680;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 3784) {
					if (rel_time < 3783) {
						if (hops < 3) {
							w11 = -22;
						} else {
							w11 = -11;
						}
					} else {
						if (hops < 2) {
							w11 = 39;
						} else {
							w11 = 152;
						}
					}
				} else {
					if (hops < 2) {
						w11 = 41;
					} else {
						if (hops < 3) {
							w11 = 167;
						} else {
							w11 = 124;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w11 = 785;
					} else {
						if (hops < 3) {
							w11 = 365;
						} else {
							w11 = 441;
						}
					}
				} else {
					w11 = 1123;
				}
			}
		}
	} else {
		if (rel_time < 4342) {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w11 = -9;
					} else {
						if (rel_time < 3833) {
							w11 = -17;
						} else {
							w11 = -31;
						}
					}
				} else {
					if (rel_time < 3831) {
						w11 = -25;
					} else {
						if (rel_time < 3833) {
							w11 = 3;
						} else {
							w11 = 16;
						}
					}
				}
			} else {
				if (hops < 2) {
					w11 = -1147;
				} else {
					if (hops < 3) {
						w11 = -1038;
					} else {
						w11 = -976;
					}
				}
			}
		} else {
			if (rel_time < 4921) {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 2) {
							w11 = -32;
						} else {
							w11 = 3;
						}
					} else {
						if (hops < 2) {
							w11 = 19;
						} else {
							w11 = -75;
						}
					}
				} else {
					if (hops < 2) {
						w11 = 375;
					} else {
						if (hops < 4) {
							w11 = 1116;
						} else {
							w11 = 1223;
						}
					}
				}
			} else {
				if (rel_time < 5568) {
					if (prod != 0) {
						if (rel_time < 4941) {
							w11 = -200;
						} else {
							w11 = -54;
						}
					} else {
						if (rel_time < 5064) {
							w11 = -525;
						} else {
							w11 = -1588;
						}
					}
				} else {
					if (rel_time < 6150) {
						if (prod != 0) {
							w11 = 138;
						} else {
							w11 = 662;
						}
					} else {
						if (rel_time < 6658) {
							w11 = -707;
						} else {
							w11 = 3;
						}
					}
				}
			}
		}
	}
	int w12;
	if (rel_time < 7237) {
		if (rel_time < 6798) {
			if (rel_time < 6219) {
				if (rel_time < 6083) {
					if (rel_time < 4989) {
						if (rel_time < 4481) {
							w12 = -5;
						} else {
							w12 = 165;
						}
					} else {
						if (rel_time < 5570) {
							w12 = -132;
						} else {
							w12 = 80;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 6150) {
							w12 = 251;
						} else {
							w12 = 598;
						}
					} else {
						if (hops < 3) {
							w12 = -727;
						} else {
							w12 = -495;
						}
					}
				}
			} else {
				if (rel_time < 6658) {
					if (hops < 2) {
						w12 = -737;
					} else {
						if (hops < 3) {
							w12 = -619;
						} else {
							w12 = -552;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w12 = -46;
						} else {
							w12 = -130;
						}
					} else {
						w12 = 1249;
					}
				}
			}
		} else {
			if (hops < 2) {
				w12 = 956;
			} else {
				w12 = 1101;
			}
		}
	} else {
		if (rel_time < 7816) {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 7310) {
						if (hops < 3) {
							w12 = -228;
						} else {
							w12 = -144;
						}
					} else {
						if (hops < 3) {
							w12 = 134;
						} else {
							w12 = 212;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w12 = 68;
						} else {
							w12 = 43;
						}
					} else {
						w12 = 115;
					}
				}
			} else {
				if (hops < 2) {
					w12 = -736;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w12 = -493;
						} else {
							w12 = -523;
						}
					} else {
						w12 = -395;
					}
				}
			}
		} else {
			if (rel_time < 8534) {
				if (prod != 0) {
					if (rel_time < 8397) {
						if (size < 133) {
							w12 = 92;
						} else {
							w12 = -153;
						}
					} else {
						if (size < 133) {
							w12 = 111;
						} else {
							w12 = 200;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w12 = 189;
						} else {
							w12 = 254;
						}
					} else {
						if (hops < 4) {
							w12 = 363;
						} else {
							w12 = 508;
						}
					}
				}
			} else {
				if (rel_time < 8541) {
					if (hops < 2) {
						w12 = -733;
					} else {
						if (hops < 4) {
							w12 = -504;
						} else {
							w12 = -388;
						}
					}
				} else {
					if (rel_time < 9121) {
						if (rel_time < 9114) {
							w12 = -44;
						} else {
							w12 = 550;
						}
					} else {
						if (rel_time < 10272) {
							w12 = -85;
						} else {
							w12 = 4;
						}
					}
				}
			}
		}
	}
	int w13;
	if (prod != 2) {
		if (rel_time < 7263) {
			if (rel_time < 6798) {
				if (rel_time < 6219) {
					if (rel_time < 5640) {
						if (rel_time < 4989) {
							w13 = 17;
						} else {
							w13 = -91;
						}
					} else {
						if (rel_time < 6147) {
							w13 = 213;
						} else {
							w13 = 99;
						}
					}
				} else {
					if (rel_time < 6658) {
						if (hops < 2) {
							w13 = -369;
						} else {
							w13 = -293;
						}
					} else {
						if (prod != 0) {
							w13 = -46;
						} else {
							w13 = 632;
						}
					}
				}
			} else {
				if (rel_time < 7237) {
					if (hops < 2) {
						w13 = 479;
					} else {
						if (hops < 3) {
							w13 = 527;
						} else {
							w13 = 572;
						}
					}
				} else {
					if (hops < 2) {
						w13 = 14;
					} else {
						if (hops < 3) {
							w13 = 51;
						} else {
							w13 = 27;
						}
					}
				}
			}
		} else {
			if (rel_time < 7840) {
				if (prod != 0) {
					if (rel_time < 7310) {
						if (size < 133) {
							w13 = -109;
						} else {
							w13 = 69;
						}
					} else {
						if (rel_time < 7377) {
							w13 = 82;
						} else {
							w13 = -89;
						}
					}
				} else {
					if (hops < 2) {
						w13 = -369;
					} else {
						if (hops < 4) {
							w13 = -254;
						} else {
							w13 = -199;
						}
					}
				}
			} else {
				if (rel_time < 8534) {
					if (rel_time < 7884) {
						if (hops < 4) {
							w13 = -89;
						} else {
							w13 = 50;
						}
					} else {
						if (prod != 0) {
							w13 = 76;
						} else {
							w13 = 146;
						}
					}
				} else {
					if (rel_time < 8975) {
						if (rel_time < 8541) {
							w13 = -279;
						} else {
							w13 = -561;
						}
					} else {
						if (rel_time < 9622) {
							w13 = 78;
						} else {
							w13 = -15;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 888) {
			if (hops < 3) {
				if (rel_time < 868) {
					if (hops < 2) {
						w13 = 116;
					} else {
						w13 = 98;
					}
				} else {
					w13 = 93;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 868) {
						w13 = 31;
					} else {
						w13 = 15;
					}
				} else {
					w13 = 36;
				}
			}
		} else {
			if (rel_time < 1467) {
				if (hops < 3) {
					if (rel_time < 1447) {
						w13 = -210;
					} else {
						w13 = -133;
					}
				} else {
					if (rel_time < 1447) {
						w13 = -161;
					} else {
						if (hops < 4) {
							w13 = -65;
						} else {
							w13 = -103;
						}
					}
				}
			} else {
				if (rel_time < 4362) {
					if (hops < 2) {
						if (rel_time < 2625) {
							w13 = -25;
						} else {
							w13 = -8;
						}
					} else {
						if (rel_time < 3204) {
							w13 = 19;
						} else {
							w13 = -3;
						}
					}
				} else {
					if (rel_time < 4941) {
						if (hops < 2) {
							w13 = -220;
						} else {
							w13 = -168;
						}
					} else {
						if (rel_time < 5501) {
							w13 = 245;
						} else {
							w13 = -28;
						}
					}
				}
			}
		}
	}
	int w14;
	if (hops < 4) {
		if (rel_time < 1515) {
			if (prod != 0) {
				if (rel_time < 1467) {
					if (prod != 1) {
						if (rel_time < 939) {
							w14 = -1;
						} else {
							w14 = -58;
						}
					} else {
						if (hops < 3) {
							w14 = 103;
						} else {
							w14 = 9;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w14 = -104;
						} else {
							w14 = -137;
						}
					} else {
						if (hops < 2) {
							w14 = 78;
						} else {
							w14 = 121;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1014) {
							w14 = 167;
						} else {
							w14 = 106;
						}
					} else {
						if (rel_time < 1015) {
							w14 = 128;
						} else {
							w14 = 109;
						}
					}
				} else {
					if (rel_time < 1015) {
						w14 = 92;
					} else {
						w14 = 120;
					}
				}
			}
		} else {
			if (rel_time < 2025) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1586) {
							w14 = -43;
						} else {
							w14 = -106;
						}
					} else {
						if (rel_time < 1587) {
							w14 = -25;
						} else {
							w14 = -7;
						}
					}
				} else {
					if (rel_time < 1586) {
						w14 = -35;
					} else {
						w14 = -426;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 10851) {
						if (rel_time < 3764) {
							w14 = 26;
						} else {
							w14 = -22;
						}
					} else {
						if (rel_time < 11291) {
							w14 = -398;
						} else {
							w14 = -34;
						}
					}
				} else {
					if (rel_time < 11366) {
						if (rel_time < 10851) {
							w14 = 3;
						} else {
							w14 = -74;
						}
					} else {
						if (rel_time < 11870) {
							w14 = 326;
						} else {
							w14 = -30;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 133) {
				if (rel_time < 7818) {
					if (rel_time < 5570) {
						if (rel_time < 4941) {
							w14 = 0;
						} else {
							w14 = 67;
						}
					} else {
						if (rel_time < 6150) {
							w14 = -82;
						} else {
							w14 = -14;
						}
					}
				} else {
					if (rel_time < 9574) {
						if (rel_time < 8416) {
							w14 = 78;
						} else {
							w14 = 35;
						}
					} else {
						if (rel_time < 10714) {
							w14 = -37;
						} else {
							w14 = 18;
						}
					}
				}
			} else {
				if (rel_time < 1515) {
					if (rel_time < 939) {
						if (rel_time < 867) {
							w14 = 101;
						} else {
							w14 = 20;
						}
					} else {
						w14 = 165;
					}
				} else {
					if (rel_time < 2094) {
						w14 = -135;
					} else {
						if (rel_time < 2673) {
							w14 = 151;
						} else {
							w14 = 30;
						}
					}
				}
			}
		} else {
			if (rel_time < 2605) {
				if (rel_time < 2025) {
					if (rel_time < 1015) {
						w14 = 13;
					} else {
						if (rel_time < 1447) {
							w14 = 221;
						} else {
							w14 = 127;
						}
					}
				} else {
					w14 = 615;
				}
			} else {
				if (rel_time < 3184) {
					w14 = -348;
				} else {
					if (rel_time < 3763) {
						w14 = 558;
					} else {
						if (rel_time < 4342) {
							w14 = -486;
						} else {
							w14 = 97;
						}
					}
				}
			}
		}
	}
	int w15;
	if (rel_time < 4411) {
		if (rel_time < 3833) {
			if (rel_time < 3254) {
				if (rel_time < 2673) {
					if (rel_time < 2165) {
						if (rel_time < 1515) {
							w15 = 15;
						} else {
							w15 = -23;
						}
					} else {
						if (prod != 0) {
							w15 = 21;
						} else {
							w15 = 151;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w15 = -15;
						} else {
							w15 = -70;
						}
					} else {
						if (hops < 3) {
							w15 = -221;
						} else {
							w15 = -34;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 3324) {
							w15 = -25;
						} else {
							w15 = -5;
						}
					} else {
						if (hops < 2) {
							w15 = 25;
						} else {
							w15 = 62;
						}
					}
				} else {
					if (hops < 2) {
						w15 = 374;
					} else {
						if (hops < 4) {
							w15 = 193;
						} else {
							w15 = 280;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 4363) {
					if (rel_time < 4344) {
						if (hops < 2) {
							w15 = 19;
						} else {
							w15 = -22;
						}
					} else {
						if (hops < 2) {
							w15 = 1;
						} else {
							w15 = 49;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w15 = -17;
						} else {
							w15 = -1;
						}
					} else {
						if (hops < 2) {
							w15 = 6;
						} else {
							w15 = -47;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w15 = -570;
					} else {
						w15 = -515;
					}
				} else {
					w15 = -244;
				}
			}
		}
	} else {
		if (rel_time < 4921) {
			if (prod != 0) {
				if (rel_time < 4481) {
					if (hops < 4) {
						if (hops < 3) {
							w15 = 0;
						} else {
							w15 = -15;
						}
					} else {
						if (rel_time < 4412) {
							w15 = 3;
						} else {
							w15 = 47;
						}
					}
				} else {
					w15 = -213;
				}
			} else {
				if (hops < 2) {
					w15 = 108;
				} else {
					if (hops < 3) {
						w15 = 445;
					} else {
						w15 = 487;
					}
				}
			}
		} else {
			if (rel_time < 5501) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 5060) {
							w15 = -75;
						} else {
							w15 = 120;
						}
					} else {
						if (hops < 2) {
							w15 = -11;
						} else {
							w15 = 73;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 5064) {
							w15 = 231;
						} else {
							w15 = -269;
						}
					} else {
						if (rel_time < 5064) {
							w15 = -304;
						} else {
							w15 = -837;
						}
					}
				}
			} else {
				if (rel_time < 6079) {
					if (prod != 0) {
						if (rel_time < 5570) {
							w15 = 27;
						} else {
							w15 = -92;
						}
					} else {
						if (rel_time < 5640) {
							w15 = 1594;
						} else {
							w15 = 100;
						}
					}
				} else {
					if (rel_time < 6083) {
						if (hops < 4) {
							w15 = -136;
						} else {
							w15 = -49;
						}
					} else {
						if (rel_time < 6219) {
							w15 = 67;
						} else {
							w15 = 0;
						}
					}
				}
			}
		}
	}
	int w16;
	if (rel_time < 10272) {
		if (rel_time < 9622) {
			if (rel_time < 9114) {
				if (rel_time < 8534) {
					if (rel_time < 7816) {
						if (rel_time < 7377) {
							w16 = 0;
						} else {
							w16 = -144;
						}
					} else {
						if (rel_time < 7837) {
							w16 = 92;
						} else {
							w16 = 25;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 9042) {
							w16 = -123;
						} else {
							w16 = -22;
						}
					} else {
						if (rel_time < 8975) {
							w16 = 125;
						} else {
							w16 = 0;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 3) {
							w16 = -56;
						} else {
							w16 = 23;
						}
					} else {
						if (rel_time < 9578) {
							w16 = 39;
						} else {
							w16 = 86;
						}
					}
				} else {
					if (rel_time < 9121) {
						if (hops < 3) {
							w16 = 194;
						} else {
							w16 = 299;
						}
					} else {
						w16 = 1410;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 9693) {
						if (hops < 3) {
							w16 = -69;
						} else {
							w16 = 44;
						}
					} else {
						if (hops < 3) {
							w16 = -25;
						} else {
							w16 = -84;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 43;
						} else {
							w16 = 23;
						}
					} else {
						if (rel_time < 10159) {
							w16 = -52;
						} else {
							w16 = -78;
						}
					}
				}
			} else {
				if (rel_time < 10132) {
					if (rel_time < 9693) {
						w16 = -770;
					} else {
						if (hops < 3) {
							w16 = -149;
						} else {
							w16 = -235;
						}
					}
				} else {
					w16 = 709;
				}
			}
		}
	} else {
		if (rel_time < 10711) {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w16 = 229;
					} else {
						w16 = 278;
					}
				} else {
					w16 = 462;
				}
			} else {
				w16 = 111;
			}
		} else {
			if (rel_time < 11291) {
				if (prod != 0) {
					if (hops < 4) {
						if (hops < 2) {
							w16 = 18;
						} else {
							w16 = -13;
						}
					} else {
						if (size < 133) {
							w16 = 23;
						} else {
							w16 = 115;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w16 = -231;
						} else {
							w16 = -268;
						}
					} else {
						w16 = -163;
					}
				}
			} else {
				if (rel_time < 12009) {
					if (prod != 0) {
						if (rel_time < 11363) {
							w16 = 15;
						} else {
							w16 = -1;
						}
					} else {
						if (hops < 2) {
							w16 = -108;
						} else {
							w16 = 237;
						}
					}
				} else {
					if (hops < 2) {
						w16 = -5;
					} else {
						if (hops < 4) {
							w16 = -69;
						} else {
							w16 = -161;
						}
					}
				}
			}
		}
	}
	int w17;
	if (hops < 2) {
		if (rel_time < 867) {
			w17 = -120;
		} else {
			if (rel_time < 2605) {
				if (rel_time < 2165) {
					if (rel_time < 1015) {
						if (size < 133) {
							w17 = 37;
						} else {
							w17 = -8;
						}
					} else {
						if (rel_time < 1586) {
							w17 = -7;
						} else {
							w17 = -33;
						}
					}
				} else {
					if (prod != 0) {
						w17 = -6;
					} else {
						w17 = 222;
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 7310) {
							w17 = -20;
						} else {
							w17 = 1;
						}
					} else {
						if (rel_time < 2626) {
							w17 = 44;
						} else {
							w17 = 4;
						}
					}
				} else {
					if (rel_time < 3184) {
						w17 = -163;
					} else {
						if (rel_time < 3763) {
							w17 = 188;
						} else {
							w17 = -34;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 2673) {
				if (hops < 3) {
					if (rel_time < 2626) {
						if (prod != 1) {
							w17 = -4;
						} else {
							w17 = 21;
						}
					} else {
						if (rel_time < 2627) {
							w17 = -62;
						} else {
							w17 = -14;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 1586) {
							w17 = -11;
						} else {
							w17 = 20;
						}
					} else {
						if (rel_time < 939) {
							w17 = 16;
						} else {
							w17 = 66;
						}
					}
				}
			} else {
				if (rel_time < 10739) {
					if (rel_time < 10736) {
						if (size < 133) {
							w17 = -8;
						} else {
							w17 = 3;
						}
					} else {
						w17 = -88;
					}
				} else {
					if (rel_time < 11363) {
						if (hops < 4) {
							w17 = 21;
						} else {
							w17 = -5;
						}
					} else {
						if (rel_time < 11870) {
							w17 = -62;
						} else {
							w17 = 13;
						}
					}
				}
			}
		} else {
			if (rel_time < 4342) {
				if (rel_time < 3763) {
					if (rel_time < 3184) {
						if (rel_time < 1447) {
							w17 = 43;
						} else {
							w17 = -30;
						}
					} else {
						if (hops < 3) {
							w17 = 79;
						} else {
							w17 = 124;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w17 = -270;
						} else {
							w17 = -242;
						}
					} else {
						w17 = -122;
					}
				}
			} else {
				if (rel_time < 4921) {
					if (hops < 3) {
						w17 = 223;
					} else {
						w17 = 244;
					}
				} else {
					if (rel_time < 5501) {
						if (hops < 3) {
							w17 = -291;
						} else {
							w17 = -67;
						}
					} else {
						if (rel_time < 5640) {
							w17 = 842;
						} else {
							w17 = 31;
						}
					}
				}
			}
		}
	}
	int w18;
	if (rel_time < 12009) {
		if (rel_time < 11358) {
			if (rel_time < 10851) {
				if (rel_time < 10272) {
					if (rel_time < 9626) {
						if (rel_time < 9114) {
							w18 = -1;
						} else {
							w18 = 32;
						}
					} else {
						if (prod != 0) {
							w18 = -14;
						} else {
							w18 = -98;
						}
					}
				} else {
					if (rel_time < 10711) {
						if (hops < 4) {
							w18 = 155;
						} else {
							w18 = 40;
						}
					} else {
						if (hops < 4) {
							w18 = -1;
						} else {
							w18 = 31;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11291) {
						if (hops < 2) {
							w18 = 185;
						} else {
							w18 = 14;
						}
					} else {
						if (hops < 4) {
							w18 = 1;
						} else {
							w18 = -37;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w18 = -98;
						} else {
							w18 = -149;
						}
					} else {
						w18 = -97;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (prod != 0) {
					if (rel_time < 11366) {
						if (hops < 2) {
							w18 = -5;
						} else {
							w18 = 51;
						}
					} else {
						if (rel_time < 11870) {
							w18 = -97;
						} else {
							w18 = 1;
						}
					}
				} else {
					if (hops < 2) {
						w18 = -37;
					} else {
						w18 = 361;
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11875) {
						if (rel_time < 11366) {
							w18 = -3;
						} else {
							w18 = -35;
						}
					} else {
						if (prod != 1) {
							w18 = -5;
						} else {
							w18 = 41;
						}
					}
				} else {
					if (hops < 4) {
						w18 = -222;
					} else {
						w18 = 154;
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			w18 = 15;
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (rel_time < 12018) {
						if (rel_time < 12011) {
							w18 = -78;
						} else {
							w18 = -65;
						}
					} else {
						w18 = -107;
					}
				} else {
					if (rel_time < 12014) {
						if (rel_time < 12011) {
							w18 = -27;
						} else {
							w18 = -47;
						}
					} else {
						w18 = -8;
					}
				}
			} else {
				w18 = -96;
			}
		}
	}
	int w19;
	if (rel_time < 7237) {
		if (rel_time < 6798) {
			if (rel_time < 6219) {
				if (rel_time < 6150) {
					if (rel_time < 6100) {
						if (rel_time < 6079) {
							w19 = 1;
						} else {
							w19 = -60;
						}
					} else {
						if (size < 133) {
							w19 = -22;
						} else {
							w19 = 84;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 3) {
							w19 = 290;
						} else {
							w19 = 130;
						}
					} else {
						if (hops < 2) {
							w19 = -569;
						} else {
							w19 = -376;
						}
					}
				}
			} else {
				if (rel_time < 6658) {
					if (hops < 4) {
						if (hops < 3) {
							w19 = -169;
						} else {
							w19 = -145;
						}
					} else {
						w19 = -196;
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w19 = 5;
						} else {
							w19 = -42;
						}
					} else {
						if (hops < 2) {
							w19 = 202;
						} else {
							w19 = 322;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				w19 = 260;
			} else {
				w19 = 237;
			}
		}
	} else {
		if (rel_time < 7816) {
			if (size < 133) {
				if (prod != 1) {
					if (hops < 3) {
						if (rel_time < 7240) {
							w19 = -114;
						} else {
							w19 = -66;
						}
					} else {
						if (rel_time < 7257) {
							w19 = -31;
						} else {
							w19 = -87;
						}
					}
				} else {
					if (rel_time < 7310) {
						if (hops < 4) {
							w19 = -41;
						} else {
							w19 = -81;
						}
					} else {
						if (hops < 3) {
							w19 = 34;
						} else {
							w19 = 71;
						}
					}
				}
			} else {
				if (hops < 3) {
					w19 = 20;
				} else {
					if (hops < 4) {
						w19 = 6;
					} else {
						w19 = 21;
					}
				}
			}
		} else {
			if (rel_time < 8534) {
				if (rel_time < 8396) {
					if (rel_time < 7960) {
						if (size < 133) {
							w19 = 43;
						} else {
							w19 = -55;
						}
					} else {
						if (prod != 0) {
							w19 = -290;
						} else {
							w19 = 46;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 4) {
							w19 = 44;
						} else {
							w19 = 86;
						}
					} else {
						if (hops < 3) {
							w19 = -6;
						} else {
							w19 = 56;
						}
					}
				}
			} else {
				if (rel_time < 8541) {
					if (hops < 2) {
						w19 = -138;
					} else {
						if (hops < 3) {
							w19 = -51;
						} else {
							w19 = -79;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 10137) {
							w19 = -14;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 9555) {
							w19 = 89;
						} else {
							w19 = -4;
						}
					}
				}
			}
		}
	}
	int w20;
	if (hops < 4) {
		if (rel_time < 4410) {
			if (rel_time < 3833) {
				if (rel_time < 3254) {
					if (rel_time < 3204) {
						if (hops < 3) {
							w20 = -5;
						} else {
							w20 = 7;
						}
					} else {
						if (rel_time < 3207) {
							w20 = -39;
						} else {
							w20 = -11;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w20 = 2;
						} else {
							w20 = 25;
						}
					} else {
						if (hops < 2) {
							w20 = 94;
						} else {
							w20 = 47;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 4363) {
						if (rel_time < 4344) {
							w20 = 1;
						} else {
							w20 = 12;
						}
					} else {
						if (hops < 3) {
							w20 = -34;
						} else {
							w20 = -7;
						}
					}
				} else {
					if (hops < 2) {
						w20 = -268;
					} else {
						if (hops < 3) {
							w20 = -136;
						} else {
							w20 = -121;
						}
					}
				}
			}
		} else {
			if (rel_time < 4921) {
				if (prod != 0) {
					if (rel_time < 4481) {
						if (hops < 3) {
							w20 = 6;
						} else {
							w20 = -2;
						}
					} else {
						w20 = -113;
					}
				} else {
					if (hops < 2) {
						w20 = 71;
					} else {
						if (hops < 3) {
							w20 = 111;
						} else {
							w20 = 126;
						}
					}
				}
			} else {
				if (rel_time < 4923) {
					if (hops < 3) {
						if (rel_time < 4922) {
							w20 = -114;
						} else {
							w20 = -48;
						}
					} else {
						if (rel_time < 4922) {
							w20 = 4;
						} else {
							w20 = -70;
						}
					}
				} else {
					if (rel_time < 7237) {
						if (rel_time < 6798) {
							w20 = -3;
						} else {
							w20 = 130;
						}
					} else {
						if (rel_time < 7816) {
							w20 = -21;
						} else {
							w20 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6147) {
			if (prod != 0) {
				if (rel_time < 4923) {
					if (rel_time < 4481) {
						if (rel_time < 2094) {
							w20 = -6;
						} else {
							w20 = 12;
						}
					} else {
						if (rel_time < 4922) {
							w20 = -106;
						} else {
							w20 = -5;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 6080) {
							w20 = 17;
						} else {
							w20 = 36;
						}
					} else {
						if (rel_time < 5570) {
							w20 = 39;
						} else {
							w20 = 76;
						}
					}
				}
			} else {
				if (rel_time < 5064) {
					if (rel_time < 2605) {
						if (rel_time < 2025) {
							w20 = 37;
						} else {
							w20 = 249;
						}
					} else {
						if (rel_time < 3184) {
							w20 = -143;
						} else {
							w20 = 34;
						}
					}
				} else {
					if (rel_time < 5640) {
						w20 = 539;
					} else {
						w20 = 147;
					}
				}
			}
		} else {
			if (rel_time < 6658) {
				if (prod != 0) {
					if (rel_time < 6150) {
						w20 = -81;
					} else {
						w20 = -10;
					}
				} else {
					w20 = -99;
				}
			} else {
				if (rel_time < 7237) {
					if (prod != 0) {
						if (size < 133) {
							w20 = 30;
						} else {
							w20 = 1;
						}
					} else {
						w20 = 120;
					}
				} else {
					if (rel_time < 7820) {
						if (rel_time < 7263) {
							w20 = 7;
						} else {
							w20 = -42;
						}
					} else {
						if (rel_time < 8463) {
							w20 = 36;
						} else {
							w20 = -3;
						}
					}
				}
			}
		}
	}
	int w21;
	if (rel_time < 1015) {
		if (size < 133) {
			if (hops < 3) {
				if (hops < 2) {
					if (prod != 1) {
						w21 = 28;
					} else {
						w21 = 8;
					}
				} else {
					if (rel_time < 1014) {
						w21 = 50;
					} else {
						w21 = 37;
					}
				}
			} else {
				if (rel_time < 888) {
					if (hops < 4) {
						w21 = 5;
					} else {
						w21 = 19;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1014) {
							w21 = -1;
						} else {
							w21 = 14;
						}
					} else {
						if (prod != 0) {
							w21 = 20;
						} else {
							w21 = -41;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 867) {
					if (hops < 2) {
						w21 = -58;
					} else {
						if (rel_time < 317) {
							w21 = -4;
						} else {
							w21 = -20;
						}
					}
				} else {
					if (rel_time < 888) {
						if (hops < 2) {
							w21 = 172;
						} else {
							w21 = 508;
						}
					} else {
						if (hops < 2) {
							w21 = -17;
						} else {
							w21 = -44;
						}
					}
				}
			} else {
				if (rel_time < 867) {
					if (hops < 4) {
						w21 = 14;
					} else {
						w21 = 38;
					}
				} else {
					w21 = -8;
				}
			}
		}
	} else {
		if (rel_time < 1467) {
			if (prod != 2) {
				if (rel_time < 1447) {
					if (hops < 4) {
						w21 = 34;
					} else {
						w21 = 77;
					}
				} else {
					w21 = 74;
				}
			} else {
				if (rel_time < 1447) {
					if (hops < 2) {
						w21 = -100;
					} else {
						w21 = -62;
					}
				} else {
					if (hops < 3) {
						w21 = -40;
					} else {
						if (hops < 4) {
							w21 = -10;
						} else {
							w21 = -51;
						}
					}
				}
			}
		} else {
			if (rel_time < 1468) {
				if (hops < 3) {
					if (hops < 2) {
						w21 = 41;
					} else {
						w21 = 49;
					}
				} else {
					w21 = 20;
				}
			} else {
				if (rel_time < 2026) {
					if (size < 133) {
						if (hops < 3) {
							w21 = -7;
						} else {
							w21 = -70;
						}
					} else {
						if (hops < 2) {
							w21 = 3;
						} else {
							w21 = 39;
						}
					}
				} else {
					if (rel_time < 2673) {
						if (hops < 3) {
							w21 = -3;
						} else {
							w21 = 29;
						}
					} else {
						if (rel_time < 4343) {
							w21 = -9;
						} else {
							w21 = 1;
						}
					}
				}
			}
		}
	}
	int w22;
	if (rel_time < 6219) {
		if (rel_time < 6150) {
			if (rel_time < 5501) {
				if (rel_time < 3833) {
					if (rel_time < 3254) {
						if (rel_time < 2627) {
							w22 = 1;
						} else {
							w22 = -7;
						}
					} else {
						if (prod != 0) {
							w22 = 9;
						} else {
							w22 = 38;
						}
					}
				} else {
					if (rel_time < 4342) {
						if (prod != 0) {
							w22 = 7;
						} else {
							w22 = -81;
						}
					} else {
						if (rel_time < 4921) {
							w22 = 12;
						} else {
							w22 = -10;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 5521) {
						if (hops < 2) {
							w22 = 18;
						} else {
							w22 = 74;
						}
					} else {
						if (prod != 2) {
							w22 = 4;
						} else {
							w22 = -50;
						}
					}
				} else {
					if (rel_time < 5640) {
						if (hops < 2) {
							w22 = 534;
						} else {
							w22 = 375;
						}
					} else {
						if (hops < 2) {
							w22 = -85;
						} else {
							w22 = 88;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w22 = 162;
					} else {
						w22 = 132;
					}
				} else {
					if (hops < 4) {
						w22 = 82;
					} else {
						w22 = -6;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w22 = -301;
					} else {
						w22 = -207;
					}
				} else {
					w22 = -52;
				}
			}
		}
	} else {
		if (rel_time < 6658) {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 6220) {
						w22 = -81;
					} else {
						w22 = -66;
					}
				} else {
					if (hops < 3) {
						w22 = -95;
					} else {
						if (rel_time < 6221) {
							w22 = -82;
						} else {
							w22 = -59;
						}
					}
				}
			} else {
				w22 = -50;
			}
		} else {
			if (rel_time < 7237) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 6729) {
							w22 = 4;
						} else {
							w22 = -9;
						}
					} else {
						if (rel_time < 6683) {
							w22 = -23;
						} else {
							w22 = 1;
						}
					}
				} else {
					if (rel_time < 6798) {
						if (hops < 3) {
							w22 = 120;
						} else {
							w22 = 174;
						}
					} else {
						if (hops < 2) {
							w22 = 74;
						} else {
							w22 = 60;
						}
					}
				}
			} else {
				if (rel_time < 7240) {
					if (hops < 3) {
						if (hops < 2) {
							w22 = -7;
						} else {
							w22 = -82;
						}
					} else {
						if (rel_time < 7239) {
							w22 = -1;
						} else {
							w22 = -20;
						}
					}
				} else {
					if (rel_time < 10272) {
						if (rel_time < 9622) {
							w22 = 0;
						} else {
							w22 = -16;
						}
					} else {
						if (rel_time < 10711) {
							w22 = 74;
						} else {
							w22 = -3;
						}
					}
				}
			}
		}
	}
	int w23;
	if (rel_time < 12009) {
		if (rel_time < 11313) {
			if (rel_time < 10851) {
				if (rel_time < 10140) {
					if (rel_time < 9622) {
						if (rel_time < 9114) {
							w23 = 0;
						} else {
							w23 = 15;
						}
					} else {
						if (prod != 0) {
							w23 = -5;
						} else {
							w23 = -41;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 3) {
							w23 = 10;
						} else {
							w23 = -9;
						}
					} else {
						if (hops < 3) {
							w23 = 16;
						} else {
							w23 = 73;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11291) {
						if (hops < 2) {
							w23 = 96;
						} else {
							w23 = 8;
						}
					} else {
						if (hops < 2) {
							w23 = -16;
						} else {
							w23 = 5;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = -46;
						} else {
							w23 = -71;
						}
					} else {
						if (rel_time < 10856) {
							w23 = -41;
						} else {
							w23 = -53;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (prod != 0) {
					if (rel_time < 11360) {
						if (hops < 2) {
							w23 = 8;
						} else {
							w23 = 30;
						}
					} else {
						if (hops < 2) {
							w23 = 6;
						} else {
							w23 = -6;
						}
					}
				} else {
					if (hops < 2) {
						w23 = -15;
					} else {
						w23 = 184;
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11875) {
						if (rel_time < 11366) {
							w23 = -3;
						} else {
							w23 = -16;
						}
					} else {
						if (hops < 4) {
							w23 = 26;
						} else {
							w23 = -4;
						}
					}
				} else {
					if (hops < 4) {
						w23 = -108;
					} else {
						w23 = 82;
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			w23 = 11;
		} else {
			if (hops < 4) {
				if (hops < 3) {
					w23 = -32;
				} else {
					if (rel_time < 12014) {
						w23 = -16;
					} else {
						w23 = -1;
					}
				}
			} else {
				w23 = -43;
			}
		}
	}
	int w24;
	if (rel_time < 8534) {
		if (rel_time < 8397) {
			if (rel_time < 7960) {
				if (rel_time < 7957) {
					if (rel_time < 7837) {
						if (rel_time < 7816) {
							w24 = 0;
						} else {
							w24 = 32;
						}
					} else {
						if (prod != 0) {
							w24 = -17;
						} else {
							w24 = 31;
						}
					}
				} else {
					if (hops < 3) {
						w24 = 10;
					} else {
						if (rel_time < 7958) {
							w24 = 79;
						} else {
							w24 = 52;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 8396) {
						if (hops < 3) {
							w24 = -212;
						} else {
							w24 = -45;
						}
					} else {
						if (hops < 4) {
							w24 = 23;
						} else {
							w24 = -100;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w24 = 20;
						} else {
							w24 = -3;
						}
					} else {
						w24 = 53;
					}
				}
			}
		} else {
			if (prod != 1) {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 8399) {
							w24 = 39;
						} else {
							w24 = 22;
						}
					} else {
						w24 = 14;
					}
				} else {
					w24 = 36;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 8467) {
							w24 = 31;
						} else {
							w24 = -15;
						}
					} else {
						if (rel_time < 8467) {
							w24 = -29;
						} else {
							w24 = -4;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 8467) {
							w24 = 33;
						} else {
							w24 = 50;
						}
					} else {
						w24 = -10;
					}
				}
			}
		}
	} else {
		if (rel_time < 8541) {
			if (hops < 2) {
				w24 = -70;
			} else {
				if (rel_time < 8538) {
					if (rel_time < 8536) {
						if (hops < 4) {
							w24 = -38;
						} else {
							w24 = -17;
						}
					} else {
						w24 = -22;
					}
				} else {
					if (hops < 3) {
						w24 = -29;
					} else {
						if (hops < 4) {
							w24 = -71;
						} else {
							w24 = -17;
						}
					}
				}
			}
		} else {
			if (rel_time < 9042) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 8975) {
							w24 = 72;
						} else {
							w24 = 10;
						}
					} else {
						if (hops < 2) {
							w24 = -8;
						} else {
							w24 = -40;
						}
					}
				} else {
					if (hops < 2) {
						w24 = -375;
					} else {
						w24 = -225;
					}
				}
			} else {
				if (rel_time < 9121) {
					if (prod != 0) {
						if (hops < 3) {
							w24 = 2;
						} else {
							w24 = -26;
						}
					} else {
						if (rel_time < 9114) {
							w24 = 583;
						} else {
							w24 = 43;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 10132) {
							w24 = -17;
						} else {
							w24 = -1;
						}
					} else {
						if (hops < 3) {
							w24 = 14;
						} else {
							w24 = -3;
						}
					}
				}
			}
		}
	}
	int w25;
	if (hops < 4) {
		if (size < 133) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (hops < 2) {
						if (prod != 0) {
							w25 = 7;
						} else {
							w25 = 17;
						}
					} else {
						if (prod != 1) {
							w25 = 20;
						} else {
							w25 = 27;
						}
					}
				} else {
					w25 = 2;
				}
			} else {
				if (rel_time < 2026) {
					if (rel_time < 1586) {
						if (rel_time < 1515) {
							w25 = -18;
						} else {
							w25 = 8;
						}
					} else {
						if (hops < 3) {
							w25 = 1;
						} else {
							w25 = -147;
						}
					}
				} else {
					if (rel_time < 2605) {
						if (hops < 2) {
							w25 = 43;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 3184) {
							w25 = -14;
						} else {
							w25 = -1;
						}
					}
				}
			}
		} else {
			if (rel_time < 939) {
				if (hops < 3) {
					if (rel_time < 867) {
						if (hops < 2) {
							w25 = -29;
						} else {
							w25 = -8;
						}
					} else {
						if (rel_time < 888) {
							w25 = 120;
						} else {
							w25 = -16;
						}
					}
				} else {
					if (rel_time < 867) {
						w25 = 6;
					} else {
						w25 = -6;
					}
				}
			} else {
				if (rel_time < 7263) {
					if (rel_time < 5568) {
						if (rel_time < 4989) {
							w25 = 5;
						} else {
							w25 = -19;
						}
					} else {
						if (rel_time < 6147) {
							w25 = 48;
						} else {
							w25 = 3;
						}
					}
				} else {
					if (rel_time < 7884) {
						if (rel_time < 7837) {
							w25 = -69;
						} else {
							w25 = -22;
						}
					} else {
						if (rel_time < 10736) {
							w25 = 5;
						} else {
							w25 = -8;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2606) {
			if (prod != 0) {
				if (rel_time < 2094) {
					if (rel_time < 2046) {
						if (rel_time < 2027) {
							w25 = 3;
						} else {
							w25 = 68;
						}
					} else {
						if (size < 133) {
							w25 = 9;
						} else {
							w25 = -101;
						}
					}
				} else {
					w25 = 38;
				}
			} else {
				if (rel_time < 1015) {
					w25 = -21;
				} else {
					if (rel_time < 1447) {
						w25 = 42;
					} else {
						w25 = 108;
					}
				}
			}
		} else {
			if (rel_time < 3185) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 2745) {
							w25 = -6;
						} else {
							w25 = -26;
						}
					} else {
						w25 = 15;
					}
				} else {
					if (rel_time < 2746) {
						w25 = -57;
					} else {
						w25 = -104;
					}
				}
			} else {
				if (rel_time < 6147) {
					if (rel_time < 4412) {
						if (rel_time < 3833) {
							w25 = 14;
						} else {
							w25 = -20;
						}
					} else {
						if (rel_time < 4921) {
							w25 = 73;
						} else {
							w25 = 13;
						}
					}
				} else {
					if (rel_time < 6659) {
						if (rel_time < 6150) {
							w25 = -43;
						} else {
							w25 = -24;
						}
					} else {
						if (prod != 0) {
							w25 = 6;
						} else {
							w25 = -9;
						}
					}
				}
			}
		}
	}
	int w26;
	if (hops < 3) {
		if (rel_time < 11313) {
			if (rel_time < 10736) {
				if (rel_time < 10134) {
					if (rel_time < 9121) {
						if (prod != 0) {
							w26 = 0;
						} else {
							w26 = -6;
						}
					} else {
						if (prod != 0) {
							w26 = -23;
						} else {
							w26 = 13;
						}
					}
				} else {
					if (rel_time < 10205) {
						if (hops < 2) {
							w26 = 2;
						} else {
							w26 = 33;
						}
					} else {
						if (rel_time < 10734) {
							w26 = 1;
						} else {
							w26 = 23;
						}
					}
				}
			} else {
				if (rel_time < 11291) {
					if (rel_time < 10782) {
						if (hops < 2) {
							w26 = -33;
						} else {
							w26 = -55;
						}
					} else {
						if (hops < 2) {
							w26 = -17;
						} else {
							w26 = -31;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11293) {
							w26 = 76;
						} else {
							w26 = -15;
						}
					} else {
						if (rel_time < 11293) {
							w26 = -44;
						} else {
							w26 = 35;
						}
					}
				}
			}
		} else {
			if (rel_time < 11938) {
				if (prod != 0) {
					if (rel_time < 11872) {
						if (rel_time < 11366) {
							w26 = 10;
						} else {
							w26 = -30;
						}
					} else {
						if (hops < 2) {
							w26 = -14;
						} else {
							w26 = 47;
						}
					}
				} else {
					if (hops < 2) {
						w26 = -7;
					} else {
						w26 = 93;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11940) {
						w26 = -4;
					} else {
						if (rel_time < 12009) {
							w26 = 15;
						} else {
							w26 = 6;
						}
					}
				} else {
					if (rel_time < 11943) {
						w26 = -25;
					} else {
						if (rel_time < 12009) {
							w26 = -2;
						} else {
							w26 = -15;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6081) {
			if (rel_time < 2165) {
				if (prod != 0) {
					if (rel_time < 2046) {
						if (rel_time < 2027) {
							w26 = 3;
						} else {
							w26 = 44;
						}
					} else {
						if (hops < 4) {
							w26 = 1;
						} else {
							w26 = -17;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1447) {
							w26 = 7;
						} else {
							w26 = -83;
						}
					} else {
						if (rel_time < 1015) {
							w26 = -11;
						} else {
							w26 = 51;
						}
					}
				}
			} else {
				if (rel_time < 2605) {
					if (hops < 4) {
						w26 = 72;
					} else {
						w26 = 55;
					}
				} else {
					if (rel_time < 2625) {
						if (hops < 4) {
							w26 = -41;
						} else {
							w26 = 13;
						}
					} else {
						if (rel_time < 3204) {
							w26 = 25;
						} else {
							w26 = 5;
						}
					}
				}
			}
		} else {
			if (rel_time < 6658) {
				if (size < 133) {
					if (rel_time < 6150) {
						if (rel_time < 6083) {
							w26 = 1;
						} else {
							w26 = -71;
						}
					} else {
						if (prod != 0) {
							w26 = 36;
						} else {
							w26 = -34;
						}
					}
				} else {
					w26 = 5;
				}
			} else {
				if (rel_time < 6659) {
					if (hops < 4) {
						w26 = 89;
					} else {
						w26 = -30;
					}
				} else {
					if (rel_time < 9693) {
						if (rel_time < 9114) {
							w26 = -2;
						} else {
							w26 = 27;
						}
					} else {
						if (rel_time < 10272) {
							w26 = -22;
						} else {
							w26 = 1;
						}
					}
				}
			}
		}
	}
	int w27;
	if (rel_time < 4481) {
		if (rel_time < 3903) {
			if (rel_time < 3254) {
				if (rel_time < 3205) {
					if (rel_time < 3185) {
						if (rel_time < 2745) {
							w27 = 0;
						} else {
							w27 = -16;
						}
					} else {
						if (hops < 2) {
							w27 = 11;
						} else {
							w27 = 31;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w27 = -20;
						} else {
							w27 = 12;
						}
					} else {
						if (hops < 2) {
							w27 = 6;
						} else {
							w27 = -28;
						}
					}
				}
			} else {
				if (rel_time < 3763) {
					if (prod != 0) {
						w27 = -7;
					} else {
						if (hops < 2) {
							w27 = 36;
						} else {
							w27 = 14;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w27 = 1;
						} else {
							w27 = 8;
						}
					} else {
						if (hops < 2) {
							w27 = -89;
						} else {
							w27 = -9;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					w27 = -5;
				} else {
					if (hops < 2) {
						w27 = 3;
					} else {
						if (hops < 3) {
							w27 = -37;
						} else {
							w27 = -15;
						}
					}
				}
			} else {
				if (hops < 2) {
					w27 = -85;
				} else {
					w27 = -21;
				}
			}
		}
	} else {
		if (rel_time < 4921) {
			if (hops < 2) {
				w27 = 32;
			} else {
				if (prod != 0) {
					w27 = -63;
				} else {
					if (rel_time < 4482) {
						w27 = 34;
					} else {
						w27 = 55;
					}
				}
			}
		} else {
			if (rel_time < 4941) {
				if (rel_time < 4922) {
					if (hops < 2) {
						w27 = 27;
					} else {
						if (hops < 3) {
							w27 = -90;
						} else {
							w27 = -11;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 4923) {
							w27 = -26;
						} else {
							w27 = -48;
						}
					} else {
						if (hops < 3) {
							w27 = 19;
						} else {
							w27 = -35;
						}
					}
				}
			} else {
				if (rel_time < 4989) {
					if (size < 133) {
						w27 = -248;
					} else {
						if (hops < 2) {
							w27 = -4;
						} else {
							w27 = 35;
						}
					}
				} else {
					if (rel_time < 5501) {
						if (hops < 2) {
							w27 = 56;
						} else {
							w27 = -35;
						}
					} else {
						if (rel_time < 5521) {
							w27 = 26;
						} else {
							w27 = 0;
						}
					}
				}
			}
		}
	}
	int w28;
	if (hops < 3) {
		if (rel_time < 6683) {
			if (rel_time < 6219) {
				if (rel_time < 6101) {
					if (prod != 1) {
						if (rel_time < 4410) {
							w28 = -3;
						} else {
							w28 = 5;
						}
					} else {
						if (rel_time < 4481) {
							w28 = -1;
						} else {
							w28 = -38;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 6150) {
							w28 = 29;
						} else {
							w28 = 74;
						}
					} else {
						if (hops < 2) {
							w28 = -156;
						} else {
							w28 = -101;
						}
					}
				}
			} else {
				if (rel_time < 6659) {
					if (hops < 2) {
						if (rel_time < 6658) {
							w28 = -32;
						} else {
							w28 = 3;
						}
					} else {
						if (rel_time < 6658) {
							w28 = -44;
						} else {
							w28 = -97;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 6661) {
							w28 = 43;
						} else {
							w28 = -37;
						}
					} else {
						if (rel_time < 6661) {
							w28 = -36;
						} else {
							w28 = 13;
						}
					}
				}
			}
		} else {
			if (rel_time < 7237) {
				if (prod != 0) {
					if (rel_time < 6728) {
						if (rel_time < 6727) {
							w28 = 24;
						} else {
							w28 = 42;
						}
					} else {
						w28 = 6;
					}
				} else {
					if (hops < 2) {
						w28 = 41;
					} else {
						if (rel_time < 6798) {
							w28 = 67;
						} else {
							w28 = 26;
						}
					}
				}
			} else {
				if (rel_time < 7816) {
					if (size < 133) {
						if (prod != 0) {
							w28 = -15;
						} else {
							w28 = -30;
						}
					} else {
						w28 = 18;
					}
				} else {
					if (rel_time < 7837) {
						if (size < 133) {
							w28 = 58;
						} else {
							w28 = -35;
						}
					} else {
						if (rel_time < 7890) {
							w28 = 10;
						} else {
							w28 = -1;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10851) {
			if (rel_time < 10739) {
				if (prod != 0) {
					if (rel_time < 10134) {
						if (rel_time < 9623) {
							w28 = -1;
						} else {
							w28 = 51;
						}
					} else {
						if (hops < 4) {
							w28 = -24;
						} else {
							w28 = 22;
						}
					}
				} else {
					if (rel_time < 10132) {
						if (rel_time < 9555) {
							w28 = 10;
						} else {
							w28 = -37;
						}
					} else {
						if (hops < 4) {
							w28 = 69;
						} else {
							w28 = -45;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						if (rel_time < 10780) {
							w28 = 22;
						} else {
							w28 = 60;
						}
					} else {
						if (size < 133) {
							w28 = -4;
						} else {
							w28 = 50;
						}
					}
				} else {
					w28 = -126;
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 11291) {
					if (hops < 4) {
						w28 = 92;
					} else {
						w28 = -110;
					}
				} else {
					if (rel_time < 11296) {
						if (rel_time < 11293) {
							w28 = 18;
						} else {
							w28 = -39;
						}
					} else {
						if (rel_time < 11311) {
							w28 = 48;
						} else {
							w28 = 1;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 12009) {
						if (rel_time < 11291) {
							w28 = -23;
						} else {
							w28 = -54;
						}
					} else {
						w28 = -5;
					}
				} else {
					if (rel_time < 11870) {
						if (rel_time < 11291) {
							w28 = -16;
						} else {
							w28 = 46;
						}
					} else {
						w28 = -18;
					}
				}
			}
		}
	}
	int w29;
	if (rel_time < 1586) {
		if (rel_time < 1467) {
			if (prod != 0) {
				if (rel_time < 1014) {
					if (size < 133) {
						if (hops < 3) {
							w29 = 9;
						} else {
							w29 = 0;
						}
					} else {
						if (hops < 4) {
							w29 = -4;
						} else {
							w29 = 7;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 1447) {
							w29 = -29;
						} else {
							w29 = -9;
						}
					} else {
						w29 = 36;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1015) {
						if (rel_time < 1014) {
							w29 = 32;
						} else {
							w29 = 12;
						}
					} else {
						w29 = 32;
					}
				} else {
					w29 = -4;
				}
			}
		} else {
			if (size < 133) {
				if (rel_time < 1515) {
					if (hops < 4) {
						w29 = -52;
					} else {
						w29 = -147;
					}
				} else {
					if (hops < 3) {
						w29 = -6;
					} else {
						if (hops < 4) {
							w29 = 25;
						} else {
							w29 = 12;
						}
					}
				}
			} else {
				if (hops < 3) {
					w29 = 21;
				} else {
					if (hops < 4) {
						w29 = 7;
					} else {
						w29 = 24;
					}
				}
			}
		}
	} else {
		if (rel_time < 2165) {
			if (hops < 2) {
				if (size < 133) {
					if (prod != 2) {
						w29 = -18;
					} else {
						if (rel_time < 2026) {
							w29 = -52;
						} else {
							w29 = -6;
						}
					}
				} else {
					if (rel_time < 2047) {
						w29 = -39;
					} else {
						w29 = -72;
					}
				}
			} else {
				if (size < 133) {
					if (hops < 3) {
						if (rel_time < 2095) {
							w29 = 20;
						} else {
							w29 = -19;
						}
					} else {
						if (rel_time < 2025) {
							w29 = -29;
						} else {
							w29 = -1;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 2047) {
							w29 = -19;
						} else {
							w29 = -42;
						}
					} else {
						if (hops < 4) {
							w29 = 15;
						} else {
							w29 = -42;
						}
					}
				}
			}
		} else {
			if (rel_time < 2605) {
				if (hops < 2) {
					if (prod != 0) {
						w29 = -19;
					} else {
						w29 = 97;
					}
				} else {
					if (hops < 3) {
						w29 = -70;
					} else {
						w29 = 29;
					}
				}
			} else {
				if (rel_time < 2606) {
					if (hops < 4) {
						if (hops < 2) {
							w29 = -1;
						} else {
							w29 = -20;
						}
					} else {
						w29 = 15;
					}
				} else {
					if (rel_time < 2626) {
						if (hops < 3) {
							w29 = 21;
						} else {
							w29 = -28;
						}
					} else {
						if (rel_time < 3184) {
							w29 = -4;
						} else {
							w29 = 0;
						}
					}
				}
			}
		}
	}
	int w30;
	if (hops < 3) {
		if (rel_time < 11311) {
			if (rel_time < 10736) {
				if (rel_time < 10134) {
					if (rel_time < 10132) {
						if (rel_time < 9626) {
							w30 = -1;
						} else {
							w30 = 9;
						}
					} else {
						if (hops < 2) {
							w30 = 62;
						} else {
							w30 = -82;
						}
					}
				} else {
					if (prod != 2) {
						if (hops < 2) {
							w30 = 11;
						} else {
							w30 = 6;
						}
					} else {
						if (rel_time < 10716) {
							w30 = 5;
						} else {
							w30 = -20;
						}
					}
				}
			} else {
				if (rel_time < 10856) {
					if (prod != 0) {
						if (rel_time < 10785) {
							w30 = -15;
						} else {
							w30 = 14;
						}
					} else {
						w30 = -19;
					}
				} else {
					if (rel_time < 11296) {
						if (hops < 2) {
							w30 = 13;
						} else {
							w30 = -10;
						}
					} else {
						if (hops < 2) {
							w30 = -51;
						} else {
							w30 = 20;
						}
					}
				}
			}
		} else {
			if (rel_time < 11938) {
				if (prod != 0) {
					if (rel_time < 11872) {
						if (rel_time < 11366) {
							w30 = 5;
						} else {
							w30 = -14;
						}
					} else {
						if (hops < 2) {
							w30 = -7;
						} else {
							w30 = 24;
						}
					}
				} else {
					if (hops < 2) {
						w30 = -3;
					} else {
						w30 = 47;
					}
				}
			} else {
				if (hops < 2) {
					w30 = 5;
				} else {
					w30 = -8;
				}
			}
		}
	} else {
		if (rel_time < 6080) {
			if (rel_time < 4944) {
				if (rel_time < 4922) {
					if (rel_time < 4482) {
						if (rel_time < 3185) {
							w30 = 4;
						} else {
							w30 = -5;
						}
					} else {
						if (rel_time < 4921) {
							w30 = 23;
						} else {
							w30 = -5;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 4923) {
							w30 = -16;
						} else {
							w30 = -30;
						}
					} else {
						w30 = 19;
					}
				}
			} else {
				if (rel_time < 5060) {
					if (rel_time < 4989) {
						if (size < 133) {
							w30 = -77;
						} else {
							w30 = 14;
						}
					} else {
						if (hops < 4) {
							w30 = 65;
						} else {
							w30 = 41;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 5568) {
							w30 = -24;
						} else {
							w30 = 17;
						}
					} else {
						if (rel_time < 5501) {
							w30 = 145;
						} else {
							w30 = 10;
						}
					}
				}
			}
		} else {
			if (rel_time < 6658) {
				if (hops < 4) {
					if (size < 133) {
						if (rel_time < 6150) {
							w30 = -34;
						} else {
							w30 = -15;
						}
					} else {
						w30 = 1;
					}
				} else {
					if (rel_time < 6083) {
						w30 = 47;
					} else {
						if (rel_time < 6100) {
							w30 = -39;
						} else {
							w30 = 5;
						}
					}
				}
			} else {
				if (rel_time < 6678) {
					if (rel_time < 6661) {
						if (rel_time < 6659) {
							w30 = 32;
						} else {
							w30 = 6;
						}
					} else {
						w30 = 39;
					}
				} else {
					if (rel_time < 6728) {
						if (hops < 4) {
							w30 = -28;
						} else {
							w30 = -2;
						}
					} else {
						if (rel_time < 7237) {
							w30 = 20;
						} else {
							w30 = -1;
						}
					}
				}
			}
		}
	}
	int w31;
	if (prod != 1) {
		if (hops < 4) {
			if (rel_time < 9042) {
				if (rel_time < 8463) {
					if (rel_time < 8396) {
						if (rel_time < 7960) {
							w31 = 1;
						} else {
							w31 = -26;
						}
					} else {
						if (hops < 2) {
							w31 = 17;
						} else {
							w31 = 8;
						}
					}
				} else {
					if (prod != 2) {
						if (hops < 3) {
							w31 = -17;
						} else {
							w31 = -31;
						}
					} else {
						if (rel_time < 8975) {
							w31 = 44;
						} else {
							w31 = 5;
						}
					}
				}
			} else {
				if (rel_time < 9114) {
					if (hops < 3) {
						w31 = 176;
					} else {
						w31 = 322;
					}
				} else {
					if (rel_time < 9121) {
						if (hops < 3) {
							w31 = 12;
						} else {
							w31 = 45;
						}
					} else {
						if (rel_time < 9574) {
							w31 = -9;
						} else {
							w31 = 1;
						}
					}
				}
			}
		} else {
			if (rel_time < 11358) {
				if (rel_time < 11311) {
					if (rel_time < 11296) {
						if (rel_time < 8995) {
							w31 = -1;
						} else {
							w31 = -10;
						}
					} else {
						w31 = 49;
					}
				} else {
					w31 = -38;
				}
			} else {
				if (rel_time < 11938) {
					if (rel_time < 11875) {
						if (prod != 0) {
							w31 = -4;
						} else {
							w31 = 23;
						}
					} else {
						w31 = 36;
					}
				} else {
					w31 = -8;
				}
			}
		}
	} else {
		if (rel_time < 7890) {
			if (rel_time < 7310) {
				if (rel_time < 6729) {
					if (rel_time < 6147) {
						if (rel_time < 5570) {
							w31 = 0;
						} else {
							w31 = -37;
						}
					} else {
						if (hops < 3) {
							w31 = 17;
						} else {
							w31 = -7;
						}
					}
				} else {
					if (rel_time < 7307) {
						if (hops < 4) {
							w31 = -11;
						} else {
							w31 = -31;
						}
					} else {
						if (hops < 2) {
							w31 = 11;
						} else {
							w31 = -3;
						}
					}
				}
			} else {
				if (rel_time < 7887) {
					if (hops < 2) {
						if (rel_time < 7377) {
							w31 = 28;
						} else {
							w31 = -4;
						}
					} else {
						if (hops < 3) {
							w31 = 57;
						} else {
							w31 = 13;
						}
					}
				} else {
					if (hops < 3) {
						w31 = 9;
					} else {
						w31 = -6;
					}
				}
			}
		} else {
			if (rel_time < 7957) {
				w31 = -416;
			} else {
				if (rel_time < 9044) {
					if (hops < 3) {
						w31 = 0;
					} else {
						if (hops < 4) {
							w31 = 21;
						} else {
							w31 = -6;
						}
					}
				} else {
					if (rel_time < 9623) {
						if (rel_time < 9114) {
							w31 = -6;
						} else {
							w31 = -39;
						}
					} else {
						if (hops < 3) {
							w31 = -1;
						} else {
							w31 = 4;
						}
					}
				}
			}
		}
	}
	int w32;
	if (hops < 3) {
		if (size < 133) {
			if (rel_time < 1447) {
				if (hops < 2) {
					if (prod != 0) {
						if (rel_time < 868) {
							w32 = 14;
						} else {
							w32 = -4;
						}
					} else {
						if (rel_time < 1015) {
							w32 = 7;
						} else {
							w32 = 25;
						}
					}
				} else {
					w32 = 8;
				}
			} else {
				if (rel_time < 7818) {
					if (rel_time < 6079) {
						if (rel_time < 5501) {
							w32 = -3;
						} else {
							w32 = 16;
						}
					} else {
						if (rel_time < 6147) {
							w32 = -38;
						} else {
							w32 = -4;
						}
					}
				} else {
					if (rel_time < 7837) {
						if (hops < 2) {
							w32 = 17;
						} else {
							w32 = 92;
						}
					} else {
						if (rel_time < 7887) {
							w32 = 16;
						} else {
							w32 = -2;
						}
					}
				}
			}
		} else {
			if (rel_time < 3784) {
				if (rel_time < 1515) {
					if (rel_time < 939) {
						w32 = -3;
					} else {
						w32 = 11;
					}
				} else {
					if (rel_time < 2094) {
						if (rel_time < 2047) {
							w32 = -15;
						} else {
							w32 = -25;
						}
					} else {
						if (rel_time < 2626) {
							w32 = 13;
						} else {
							w32 = -8;
						}
					}
				}
			} else {
				if (rel_time < 6103) {
					if (rel_time < 5523) {
						if (hops < 2) {
							w32 = -6;
						} else {
							w32 = 11;
						}
					} else {
						if (rel_time < 6100) {
							w32 = 49;
						} else {
							w32 = 18;
						}
					}
				} else {
					if (rel_time < 8416) {
						if (rel_time < 7263) {
							w32 = 3;
						} else {
							w32 = -15;
						}
					} else {
						if (rel_time < 8419) {
							w32 = 9;
						} else {
							w32 = 3;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10785) {
			if (rel_time < 10739) {
				if (rel_time < 10731) {
					if (rel_time < 10272) {
						if (rel_time < 10201) {
							w32 = 1;
						} else {
							w32 = -21;
						}
					} else {
						if (rel_time < 10714) {
							w32 = 21;
						} else {
							w32 = -5;
						}
					}
				} else {
					w32 = -22;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 10780) {
						w32 = 10;
					} else {
						w32 = 33;
					}
				} else {
					if (size < 133) {
						w32 = 3;
					} else {
						w32 = 30;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 11938) {
					if (rel_time < 11293) {
						if (hops < 4) {
							w32 = 33;
						} else {
							w32 = -82;
						}
					} else {
						if (rel_time < 11296) {
							w32 = -19;
						} else {
							w32 = -2;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11940) {
							w32 = 57;
						} else {
							w32 = 8;
						}
					} else {
						if (rel_time < 11943) {
							w32 = -6;
						} else {
							w32 = -46;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 12009) {
						if (rel_time < 11431) {
							w32 = -13;
						} else {
							w32 = -30;
						}
					} else {
						w32 = -3;
					}
				} else {
					w32 = 2;
				}
			}
		}
	}
	return (186432 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32) >> 8;
}
