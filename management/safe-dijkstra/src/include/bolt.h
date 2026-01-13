#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 4590) {
				if (hops < 3) {
					if (rel_time < 2431) {
						if (cons != 2) {
							w0 = -19852;
						} else {
							w0 = -22264;
						}
					} else {
						if (hops < 2) {
							w0 = -23511;
						} else {
							w0 = -22611;
						}
					}
				} else {
					if (rel_time < 2431) {
						if (cons != 2) {
							w0 = -18456;
						} else {
							w0 = -20733;
						}
					} else {
						if (rel_time < 2611) {
							w0 = -22989;
						} else {
							w0 = -21361;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (hops < 3) {
						if (rel_time < 4613) {
							w0 = -19561;
						} else {
							w0 = -20818;
						}
					} else {
						if (rel_time < 4613) {
							w0 = -17927;
						} else {
							w0 = -19266;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w0 = -18108;
						} else {
							w0 = -17301;
						}
					} else {
						w0 = -16304;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 4420) {
						if (rel_time < 2343) {
							w0 = -27559;
						} else {
							w0 = -26302;
						}
					} else {
						w0 = -24987;
					}
				} else {
					if (rel_time < 4420) {
						if (rel_time < 2343) {
							w0 = -26652;
						} else {
							w0 = -25407;
						}
					} else {
						w0 = -24078;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 4420) {
						if (rel_time < 2343) {
							w0 = -25747;
						} else {
							w0 = -24503;
						}
					} else {
						w0 = -23150;
					}
				} else {
					if (rel_time < 4420) {
						w0 = -23694;
					} else {
						w0 = -22200;
					}
				}
			}
		}
	} else {
		if (rel_time < 1501) {
			if (cons != 0) {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 3) {
							w0 = 30434;
						} else {
							w0 = 32119;
						}
					} else {
						if (hops < 3) {
							w0 = 36460;
						} else {
							w0 = 37970;
						}
					}
				} else {
					if (hops < 3) {
						w0 = 37778;
					} else {
						w0 = 39260;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1168) {
						if (hops < 2) {
							w0 = 16912;
						} else {
							w0 = 17784;
						}
					} else {
						w0 = 15855;
					}
				} else {
					w0 = 18946;
				}
			}
		} else {
			if (rel_time < 5012) {
				if (rel_time < 4695) {
					if (size < 125) {
						if (rel_time < 2088) {
							w0 = 11230;
						} else {
							w0 = 8519;
						}
					} else {
						if (hops < 3) {
							w0 = 15124;
						} else {
							w0 = 16689;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 1) {
							w0 = -280;
						} else {
							w0 = -3020;
						}
					} else {
						if (hops < 2) {
							w0 = 8811;
						} else {
							w0 = 10364;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 12117) {
							w0 = 11287;
						} else {
							w0 = 12833;
						}
					} else {
						if (rel_time < 12117) {
							w0 = 12164;
						} else {
							w0 = 13644;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 12117) {
							w0 = 13121;
						} else {
							w0 = 14675;
						}
					} else {
						if (rel_time < 12117) {
							w0 = 13974;
						} else {
							w0 = 15438;
						}
					}
				}
			}
		}
	}
	int w1;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 4392) {
				if (rel_time < 4244) {
					if (rel_time < 4095) {
						if (rel_time < 3946) {
							w1 = -11086;
						} else {
							w1 = -13214;
						}
					} else {
						if (cons != 3) {
							w1 = -9672;
						} else {
							w1 = -7925;
						}
					}
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w1 = -14363;
						} else {
							w1 = -12038;
						}
					} else {
						if (hops < 4) {
							w1 = -12046;
						} else {
							w1 = -10799;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (hops < 2) {
						if (cons != 3) {
							w1 = -10143;
						} else {
							w1 = -9514;
						}
					} else {
						if (cons != 3) {
							w1 = -9343;
						} else {
							w1 = -8547;
						}
					}
				} else {
					if (rel_time < 4451) {
						if (hops < 4) {
							w1 = -8289;
						} else {
							w1 = -7049;
						}
					} else {
						if (hops < 4) {
							w1 = -14669;
						} else {
							w1 = -13413;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 4420) {
						if (rel_time < 4273) {
							w1 = -13113;
						} else {
							w1 = -14336;
						}
					} else {
						w1 = -12504;
					}
				} else {
					if (rel_time < 4420) {
						if (rel_time < 4273) {
							w1 = -12664;
						} else {
							w1 = -13897;
						}
					} else {
						w1 = -12048;
					}
				}
			} else {
				if (rel_time < 2343) {
					w1 = -12926;
				} else {
					if (rel_time < 2491) {
						w1 = -10838;
					} else {
						if (rel_time < 2640) {
							w1 = -13140;
						} else {
							w1 = -12101;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1501) {
			if (cons != 0) {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 2) {
							w1 = 14702;
						} else {
							w1 = 15872;
						}
					} else {
						if (hops < 2) {
							w1 = 17755;
						} else {
							w1 = 18846;
						}
					}
				} else {
					if (hops < 2) {
						w1 = 18393;
					} else {
						if (rel_time < 1347) {
							w1 = 18265;
						} else {
							w1 = 19724;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1168) {
						if (hops < 2) {
							w1 = 8463;
						} else {
							w1 = 8898;
						}
					} else {
						if (hops < 2) {
							w1 = 7471;
						} else {
							w1 = 8390;
						}
					}
				} else {
					if (rel_time < 1168) {
						if (hops < 4) {
							w1 = 9339;
						} else {
							w1 = 10120;
						}
					} else {
						w1 = 7493;
					}
				}
			}
		} else {
			if (rel_time < 5010) {
				if (rel_time < 4695) {
					if (size < 125) {
						if (cons != 0) {
							w1 = 5447;
						} else {
							w1 = 2605;
						}
					} else {
						if (cons != 3) {
							w1 = 8208;
						} else {
							w1 = 6550;
						}
					}
				} else {
					if (prod != 3) {
						if (prod != 1) {
							w1 = 1742;
						} else {
							w1 = -1510;
						}
					} else {
						if (hops < 3) {
							w1 = -3466;
						} else {
							w1 = -1881;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11948) {
							w1 = 5666;
						} else {
							w1 = 5090;
						}
					} else {
						if (rel_time < 11948) {
							w1 = 6100;
						} else {
							w1 = 5590;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 12075) {
							w1 = 6576;
						} else {
							w1 = 5856;
						}
					} else {
						if (rel_time < 11991) {
							w1 = 7017;
						} else {
							w1 = 6286;
						}
					}
				}
			}
		}
	}
	int w2;
	if (size < 38) {
		if (hops < 3) {
			if (cons != 0) {
				if (rel_time < 3797) {
					if (rel_time < 3650) {
						if (rel_time < 3501) {
							w2 = -6067;
						} else {
							w2 = -3856;
						}
					} else {
						if (cons != 1) {
							w2 = -7647;
						} else {
							w2 = -9290;
						}
					}
				} else {
					if (rel_time < 3916) {
						if (cons != 2) {
							w2 = -2712;
						} else {
							w2 = -5094;
						}
					} else {
						if (rel_time < 4392) {
							w2 = -6115;
						} else {
							w2 = -5125;
						}
					}
				}
			} else {
				if (rel_time < 2343) {
					w2 = -7119;
				} else {
					if (rel_time < 2491) {
						if (hops < 2) {
							w2 = -5339;
						} else {
							w2 = -5098;
						}
					} else {
						if (rel_time < 2640) {
							w2 = -7514;
						} else {
							w2 = -6420;
						}
					}
				}
			}
		} else {
			if (cons != 0) {
				if (hops < 4) {
					if (rel_time < 2462) {
						if (cons != 2) {
							w2 = -3873;
						} else {
							w2 = -5049;
						}
					} else {
						if (rel_time < 2580) {
							w2 = -6762;
						} else {
							w2 = -5283;
						}
					}
				} else {
					if (rel_time < 2462) {
						if (cons != 2) {
							w2 = -3038;
						} else {
							w2 = -4147;
						}
					} else {
						if (rel_time < 2580) {
							w2 = -5855;
						} else {
							w2 = -4416;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 4540) {
						if (rel_time < 4273) {
							w2 = -6140;
						} else {
							w2 = -7336;
						}
					} else {
						w2 = -5523;
					}
				} else {
					if (rel_time < 2343) {
						w2 = -6569;
					} else {
						if (rel_time < 2789) {
							w2 = -5341;
						} else {
							w2 = -5765;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1501) {
			if (cons != 0) {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 4) {
							w2 = 7656;
						} else {
							w2 = 8877;
						}
					} else {
						if (hops < 4) {
							w2 = 9164;
						} else {
							w2 = 10269;
						}
					}
				} else {
					if (rel_time < 1347) {
						if (hops < 2) {
							w2 = 8088;
						} else {
							w2 = 9153;
						}
					} else {
						if (hops < 4) {
							w2 = 9624;
						} else {
							w2 = 10681;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1168) {
						if (hops < 2) {
							w2 = 4235;
						} else {
							w2 = 4453;
						}
					} else {
						if (hops < 2) {
							w2 = 3750;
						} else {
							w2 = 4211;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1168) {
							w2 = 4673;
						} else {
							w2 = 3817;
						}
					} else {
						w2 = 5073;
					}
				}
			}
		} else {
			if (rel_time < 5012) {
				if (rel_time < 2137) {
					if (cons != 0) {
						if (hops < 2) {
							w2 = 3014;
						} else {
							w2 = 4291;
						}
					} else {
						if (rel_time < 1571) {
							w2 = 4562;
						} else {
							w2 = 1302;
						}
					}
				} else {
					if (prod != 3) {
						if (hops < 3) {
							w2 = 559;
						} else {
							w2 = 2038;
						}
					} else {
						if (hops < 2) {
							w2 = -2215;
						} else {
							w2 = -1115;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 12117) {
							w2 = 2819;
						} else {
							w2 = 3881;
						}
					} else {
						if (rel_time < 5109) {
							w2 = 3803;
						} else {
							w2 = 3037;
						}
					}
				} else {
					if (rel_time < 12117) {
						if (rel_time < 12075) {
							w2 = 3345;
						} else {
							w2 = 1317;
						}
					} else {
						w2 = 4470;
					}
				}
			}
		}
	}
	int w3;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 2462) {
				if (cons != 0) {
					if (cons != 2) {
						if (cons != 4) {
							w3 = -1731;
						} else {
							w3 = -2407;
						}
					} else {
						w3 = -3046;
					}
				} else {
					if (rel_time < 2343) {
						w3 = -3684;
					} else {
						w3 = -2698;
					}
				}
			} else {
				if (rel_time < 2580) {
					if (cons != 0) {
						if (cons != 2) {
							w3 = -5825;
						} else {
							w3 = -3859;
						}
					} else {
						w3 = -2657;
					}
				} else {
					if (rel_time < 2759) {
						if (rel_time < 2640) {
							w3 = -3307;
						} else {
							w3 = -1265;
						}
					} else {
						if (rel_time < 2935) {
							w3 = -4833;
						} else {
							w3 = -3097;
						}
					}
				}
			}
		} else {
			if (rel_time < 2759) {
				if (rel_time < 2640) {
					if (rel_time < 2462) {
						if (cons != 0) {
							w3 = -1745;
						} else {
							w3 = -3282;
						}
					} else {
						if (cons != 3) {
							w3 = -3156;
						} else {
							w3 = -5018;
						}
					}
				} else {
					if (cons != 3) {
						if (cons != 1) {
							w3 = -1750;
						} else {
							w3 = 335;
						}
					} else {
						if (hops < 4) {
							w3 = 429;
						} else {
							w3 = 856;
						}
					}
				}
			} else {
				if (rel_time < 2935) {
					if (cons != 1) {
						if (cons != 3) {
							w3 = -3531;
						} else {
							w3 = -6018;
						}
					} else {
						if (hops < 4) {
							w3 = -6097;
						} else {
							w3 = -5682;
						}
					}
				} else {
					if (rel_time < 3025) {
						if (cons != 2) {
							w3 = 346;
						} else {
							w3 = -1842;
						}
					} else {
						if (rel_time < 3205) {
							w3 = -3902;
						} else {
							w3 = -2635;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1501) {
			if (cons != 0) {
				if (cons != 2) {
					if (rel_time < 1420) {
						if (cons != 4) {
							w3 = 4722;
						} else {
							w3 = 5893;
						}
					} else {
						if (hops < 2) {
							w3 = 3458;
						} else {
							w3 = 3860;
						}
					}
				} else {
					if (hops < 2) {
						w3 = 3489;
					} else {
						if (hops < 4) {
							w3 = 3803;
						} else {
							w3 = 4105;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1168) {
						if (hops < 2) {
							w3 = 2119;
						} else {
							w3 = 2228;
						}
					} else {
						if (hops < 2) {
							w3 = 1882;
						} else {
							w3 = 2114;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1168) {
							w3 = 2339;
						} else {
							w3 = 1945;
						}
					} else {
						w3 = 2543;
					}
				}
			}
		} else {
			if (rel_time < 5010) {
				if (rel_time < 4695) {
					if (hops < 3) {
						if (size < 125) {
							w3 = 909;
						} else {
							w3 = 1711;
						}
					} else {
						if (rel_time < 2137) {
							w3 = 2368;
						} else {
							w3 = 1413;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 2) {
							w3 = -1335;
						} else {
							w3 = -326;
						}
					} else {
						if (rel_time < 4744) {
							w3 = 2569;
						} else {
							w3 = 4018;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 5206) {
						if (prod != 2) {
							w3 = 2606;
						} else {
							w3 = -522;
						}
					} else {
						if (rel_time < 5409) {
							w3 = 615;
						} else {
							w3 = 1483;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 5206) {
							w3 = 2024;
						} else {
							w3 = 1602;
						}
					} else {
						if (rel_time < 11687) {
							w3 = 1806;
						} else {
							w3 = 2120;
						}
					}
				}
			}
		}
	}
	int w4;
	if (size < 38) {
		if (rel_time < 3381) {
			if (rel_time < 3234) {
				if (rel_time < 3085) {
					if (rel_time < 2935) {
						if (rel_time < 2789) {
							w4 = -1266;
						} else {
							w4 = -2481;
						}
					} else {
						if (rel_time < 2964) {
							w4 = 790;
						} else {
							w4 = -331;
						}
					}
				} else {
					if (rel_time < 3171) {
						if (cons != 2) {
							w4 = -4174;
						} else {
							w4 = -2071;
						}
					} else {
						if (cons != 1) {
							w4 = -2325;
						} else {
							w4 = 1760;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 4) {
							w4 = -641;
						} else {
							w4 = -204;
						}
					} else {
						if (rel_time < 3263) {
							w4 = 1743;
						} else {
							w4 = -4315;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 1595;
						} else {
							w4 = 1731;
						}
					} else {
						w4 = 2106;
					}
				}
			}
		} else {
			if (rel_time < 3470) {
				if (cons != 2) {
					if (cons != 4) {
						if (hops < 4) {
							w4 = -4646;
						} else {
							w4 = -4198;
						}
					} else {
						if (hops < 4) {
							w4 = -2346;
						} else {
							w4 = -1983;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w4 = -2417;
						} else {
							w4 = -2258;
						}
					} else {
						w4 = -1856;
					}
				}
			} else {
				if (rel_time < 3679) {
					if (rel_time < 3530) {
						if (cons != 1) {
							w4 = -2649;
						} else {
							w4 = 1182;
						}
					} else {
						if (rel_time < 3619) {
							w4 = 262;
						} else {
							w4 = -1065;
						}
					}
				} else {
					if (rel_time < 3799) {
						if (cons != 3) {
							w4 = -2514;
						} else {
							w4 = -4252;
						}
					} else {
						if (rel_time < 3946) {
							w4 = -256;
						} else {
							w4 = -1473;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1501) {
			if (cons != 0) {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 3) {
							w4 = 1846;
						} else {
							w4 = 2108;
						}
					} else {
						if (hops < 2) {
							w4 = 1948;
						} else {
							w4 = 2412;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1347) {
							w4 = 1720;
						} else {
							w4 = 2222;
						}
					} else {
						if (hops < 4) {
							w4 = 2497;
						} else {
							w4 = 2977;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1168) {
							w4 = 1061;
						} else {
							w4 = 945;
						}
					} else {
						w4 = 1107;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1168) {
							w4 = 1170;
						} else {
							w4 = 991;
						}
					} else {
						w4 = 1275;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 5010) {
					if (rel_time < 2137) {
						if (cons != 0) {
							w4 = 856;
						} else {
							w4 = -493;
						}
					} else {
						if (cons != 4) {
							w4 = -548;
						} else {
							w4 = 873;
						}
					}
				} else {
					if (rel_time < 11948) {
						if (rel_time < 11687) {
							w4 = 666;
						} else {
							w4 = 1345;
						}
					} else {
						if (prod != 2) {
							w4 = -359;
						} else {
							w4 = 2443;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (rel_time < 5508) {
						if (rel_time < 2137) {
							w4 = 1032;
						} else {
							w4 = 395;
						}
					} else {
						if (rel_time < 5808) {
							w4 = 1419;
						} else {
							w4 = 803;
						}
					}
				} else {
					if (rel_time < 1840) {
						if (hops < 4) {
							w4 = 1816;
						} else {
							w4 = 2594;
						}
					} else {
						if (rel_time < 2088) {
							w4 = 478;
						} else {
							w4 = 1814;
						}
					}
				}
			}
		}
	}
	int w5;
	if (size < 38) {
		if (rel_time < 4420) {
			if (rel_time < 4273) {
				if (rel_time < 4124) {
					if (rel_time < 3976) {
						if (rel_time < 3828) {
							w5 = -755;
						} else {
							w5 = -58;
						}
					} else {
						if (cons != 2) {
							w5 = -1970;
						} else {
							w5 = -343;
						}
					}
				} else {
					if (rel_time < 4154) {
						if (cons != 1) {
							w5 = -594;
						} else {
							w5 = 1654;
						}
					} else {
						if (cons != 3) {
							w5 = -475;
						} else {
							w5 = 1013;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 4361) {
							w5 = -2212;
						} else {
							w5 = -1716;
						}
					} else {
						if (hops < 4) {
							w5 = -1078;
						} else {
							w5 = -693;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w5 = -1073;
						} else {
							w5 = -927;
						}
					} else {
						w5 = -1163;
					}
				}
			}
		} else {
			if (rel_time < 4510) {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 4451) {
							w5 = 583;
						} else {
							w5 = 1048;
						}
					} else {
						if (hops < 3) {
							w5 = -975;
						} else {
							w5 = -555;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w5 = -854;
						} else {
							w5 = -597;
						}
					} else {
						if (rel_time < 4451) {
							w5 = -421;
						} else {
							w5 = -83;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (rel_time < 4570) {
						if (hops < 4) {
							w5 = -836;
						} else {
							w5 = -198;
						}
					} else {
						if (rel_time < 4590) {
							w5 = 3297;
						} else {
							w5 = 53;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w5 = -2876;
						} else {
							w5 = -2666;
						}
					} else {
						if (hops < 4) {
							w5 = -2315;
						} else {
							w5 = -2473;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1571) {
			if (rel_time < 1168) {
				if (hops < 3) {
					if (hops < 2) {
						w5 = 531;
					} else {
						w5 = 562;
					}
				} else {
					if (hops < 4) {
						w5 = 586;
					} else {
						w5 = 639;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1420) {
						if (cons != 4) {
							w5 = 1058;
						} else {
							w5 = 1894;
						}
					} else {
						if (hops < 2) {
							w5 = 781;
						} else {
							w5 = 869;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 1420) {
							w5 = 1617;
						} else {
							w5 = 1508;
						}
					} else {
						w5 = 1007;
					}
				}
			}
		} else {
			if (rel_time < 1888) {
				if (cons != 0) {
					if (cons != 1) {
						if (cons != 3) {
							w5 = 1144;
						} else {
							w5 = -156;
						}
					} else {
						if (rel_time < 1644) {
							w5 = -985;
						} else {
							w5 = 2310;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w5 = -2371;
						} else {
							w5 = -2089;
						}
					} else {
						w5 = -1243;
					}
				}
			} else {
				if (rel_time < 1937) {
					if (cons != 1) {
						if (hops < 4) {
							w5 = -318;
						} else {
							w5 = 735;
						}
					} else {
						if (hops < 4) {
							w5 = 2190;
						} else {
							w5 = 3217;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 2234) {
							w5 = 910;
						} else {
							w5 = 368;
						}
					} else {
						if (rel_time < 2137) {
							w5 = -2857;
						} else {
							w5 = -968;
						}
					}
				}
			}
		}
	}
	int w6;
	if (size < 38) {
		if (hops < 4) {
			if (rel_time < 4634) {
				if (rel_time < 3381) {
					if (rel_time < 3234) {
						if (rel_time < 3085) {
							w6 = -285;
						} else {
							w6 = -991;
						}
					} else {
						if (cons != 3) {
							w6 = 247;
						} else {
							w6 = 1222;
						}
					}
				} else {
					if (rel_time < 3470) {
						if (cons != 2) {
							w6 = -1879;
						} else {
							w6 = -777;
						}
					} else {
						if (rel_time < 3679) {
							w6 = -137;
						} else {
							w6 = -482;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w6 = 798;
					} else {
						w6 = 593;
					}
				} else {
					w6 = 908;
				}
			}
		} else {
			if (cons != 0) {
				if (rel_time < 2757) {
					if (rel_time < 2611) {
						if (cons != 1) {
							w6 = 238;
						} else {
							w6 = -375;
						}
					} else {
						if (rel_time < 2640) {
							w6 = 3237;
						} else {
							w6 = 973;
						}
					}
				} else {
					if (rel_time < 2876) {
						if (cons != 1) {
							w6 = -466;
						} else {
							w6 = -1586;
						}
					} else {
						if (rel_time < 4634) {
							w6 = 81;
						} else {
							w6 = 1292;
						}
					}
				}
			} else {
				if (rel_time < 3679) {
					if (rel_time < 3530) {
						if (rel_time < 3381) {
							w6 = -161;
						} else {
							w6 = -887;
						}
					} else {
						w6 = 749;
					}
				} else {
					if (rel_time < 3828) {
						if (rel_time < 3799) {
							w6 = -825;
						} else {
							w6 = -1948;
						}
					} else {
						if (rel_time < 3976) {
							w6 = 222;
						} else {
							w6 = -441;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 12117) {
				if (rel_time < 12075) {
					if (rel_time < 6262) {
						if (rel_time < 6216) {
							w6 = 113;
						} else {
							w6 = -1343;
						}
					} else {
						if (rel_time < 6268) {
							w6 = 2738;
						} else {
							w6 = 193;
						}
					}
				} else {
					if (prod != 3) {
						if (hops < 3) {
							w6 = 2296;
						} else {
							w6 = 3008;
						}
					} else {
						if (hops < 3) {
							w6 = -1892;
						} else {
							w6 = -872;
						}
					}
				}
			} else {
				if (hops < 3) {
					w6 = 1195;
				} else {
					w6 = 801;
				}
			}
		} else {
			if (rel_time < 5206) {
				if (prod != 2) {
					if (rel_time < 5060) {
						if (rel_time < 5012) {
							w6 = 807;
						} else {
							w6 = -669;
						}
					} else {
						if (prod != 4) {
							w6 = 2701;
						} else {
							w6 = -1370;
						}
					}
				} else {
					if (rel_time < 4840) {
						w6 = 886;
					} else {
						w6 = -1376;
					}
				}
			} else {
				if (rel_time < 5312) {
					if (prod != 0) {
						w6 = -1378;
					} else {
						w6 = 1994;
					}
				} else {
					if (rel_time < 5360) {
						w6 = 2069;
					} else {
						if (rel_time < 5409) {
							w6 = -1994;
						} else {
							w6 = 333;
						}
					}
				}
			}
		}
	}
	int w7;
	if (size < 38) {
		if (rel_time < 2611) {
			if (rel_time < 2491) {
				if (cons != 3) {
					if (cons != 1) {
						if (rel_time < 2431) {
							w7 = -565;
						} else {
							w7 = 124;
						}
					} else {
						if (rel_time < 2373) {
							w7 = 632;
						} else {
							w7 = -2218;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w7 = 287;
						} else {
							w7 = 1172;
						}
					} else {
						if (hops < 4) {
							w7 = 293;
						} else {
							w7 = 479;
						}
					}
				}
			} else {
				if (rel_time < 2519) {
					if (hops < 3) {
						if (hops < 2) {
							w7 = -2240;
						} else {
							w7 = -3125;
						}
					} else {
						if (hops < 4) {
							w7 = -1711;
						} else {
							w7 = -1194;
						}
					}
				} else {
					if (cons != 3) {
						if (hops < 3) {
							w7 = -750;
						} else {
							w7 = 324;
						}
					} else {
						if (hops < 3) {
							w7 = -2205;
						} else {
							w7 = -700;
						}
					}
				}
			}
		} else {
			if (rel_time < 2728) {
				if (cons != 0) {
					if (cons != 2) {
						if (rel_time < 2640) {
							w7 = 2854;
						} else {
							w7 = 1311;
						}
					} else {
						if (hops < 2) {
							w7 = -308;
						} else {
							w7 = 285;
						}
					}
				} else {
					if (hops < 2) {
						w7 = -1066;
					} else {
						w7 = -897;
					}
				}
			} else {
				if (rel_time < 2935) {
					if (cons != 1) {
						if (cons != 3) {
							w7 = -73;
						} else {
							w7 = -1536;
						}
					} else {
						if (hops < 2) {
							w7 = -2640;
						} else {
							w7 = -1512;
						}
					}
				} else {
					if (rel_time < 3056) {
						if (cons != 2) {
							w7 = 811;
						} else {
							w7 = -200;
						}
					} else {
						if (rel_time < 3171) {
							w7 = -741;
						} else {
							w7 = -168;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1571) {
			if (rel_time < 1168) {
				if (hops < 4) {
					if (hops < 2) {
						w7 = 209;
					} else {
						if (hops < 3) {
							w7 = 225;
						} else {
							w7 = 237;
						}
					}
				} else {
					w7 = -82;
				}
			} else {
				if (cons != 2) {
					if (rel_time < 1420) {
						if (rel_time < 1347) {
							w7 = 467;
						} else {
							w7 = 670;
						}
					} else {
						if (rel_time < 1501) {
							w7 = 321;
						} else {
							w7 = 412;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w7 = 239;
						} else {
							w7 = 334;
						}
					} else {
						if (rel_time < 1285) {
							w7 = 97;
						} else {
							w7 = 113;
						}
					}
				}
			}
		} else {
			if (rel_time < 5060) {
				if (rel_time < 4695) {
					if (rel_time < 1888) {
						if (cons != 0) {
							w7 = 88;
						} else {
							w7 = -1182;
						}
					} else {
						if (rel_time < 1937) {
							w7 = 880;
						} else {
							w7 = 101;
						}
					}
				} else {
					if (rel_time < 4888) {
						if (prod != 0) {
							w7 = -753;
						} else {
							w7 = 944;
						}
					} else {
						if (prod != 1) {
							w7 = -364;
						} else {
							w7 = 1896;
						}
					}
				}
			} else {
				if (rel_time < 5360) {
					if (prod != 4) {
						if (prod != 2) {
							w7 = 1857;
						} else {
							w7 = -1032;
						}
					} else {
						if (rel_time < 5206) {
							w7 = -1942;
						} else {
							w7 = -1276;
						}
					}
				} else {
					if (rel_time < 5409) {
						if (prod != 1) {
							w7 = 2144;
						} else {
							w7 = -1883;
						}
					} else {
						if (rel_time < 5411) {
							w7 = 1821;
						} else {
							w7 = 97;
						}
					}
				}
			}
		}
	}
	int w8;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 3025) {
				if (rel_time < 2935) {
					if (rel_time < 2789) {
						if (rel_time < 2611) {
							w8 = -367;
						} else {
							w8 = 186;
						}
					} else {
						if (cons != 3) {
							w8 = -201;
						} else {
							w8 = -1502;
						}
					}
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w8 = 1625;
						} else {
							w8 = -427;
						}
					} else {
						if (rel_time < 2967) {
							w8 = 64;
						} else {
							w8 = 25;
						}
					}
				}
			} else {
				if (rel_time < 3205) {
					if (cons != 1) {
						if (cons != 3) {
							w8 = -338;
						} else {
							w8 = -1556;
						}
					} else {
						if (rel_time < 3085) {
							w8 = -3694;
						} else {
							w8 = -1358;
						}
					}
				} else {
					if (rel_time < 3322) {
						if (cons != 1) {
							w8 = 0;
						} else {
							w8 = 1306;
						}
					} else {
						if (rel_time < 4124) {
							w8 = -397;
						} else {
							w8 = -57;
						}
					}
				}
			}
		} else {
			if (cons != 0) {
				if (rel_time < 3767) {
					if (rel_time < 3650) {
						if (rel_time < 3501) {
							w8 = -44;
						} else {
							w8 = 692;
						}
					} else {
						if (cons != 2) {
							w8 = -1719;
						} else {
							w8 = -33;
						}
					}
				} else {
					if (rel_time < 3916) {
						if (cons != 2) {
							w8 = 1102;
						} else {
							w8 = -327;
						}
					} else {
						if (rel_time < 4065) {
							w8 = -541;
						} else {
							w8 = 106;
						}
					}
				}
			} else {
				if (rel_time < 3085) {
					if (rel_time < 3056) {
						if (rel_time < 2789) {
							w8 = -19;
						} else {
							w8 = -623;
						}
					} else {
						if (hops < 4) {
							w8 = 957;
						} else {
							w8 = 1209;
						}
					}
				} else {
					if (rel_time < 4124) {
						if (rel_time < 3976) {
							w8 = -330;
						} else {
							w8 = -1062;
						}
					} else {
						if (rel_time < 4273) {
							w8 = 608;
						} else {
							w8 = -254;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 11687) {
			if (rel_time < 11352) {
				if (rel_time < 11335) {
					if (rel_time < 11231) {
						if (rel_time < 11185) {
							w8 = 48;
						} else {
							w8 = 1881;
						}
					} else {
						if (prod != 0) {
							w8 = -1481;
						} else {
							w8 = 1550;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 1516;
					} else {
						if (hops < 3) {
							w8 = 1606;
						} else {
							w8 = 1675;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (prod != 4) {
						if (rel_time < 11539) {
							w8 = -2340;
						} else {
							w8 = -927;
						}
					} else {
						if (hops < 2) {
							w8 = 1510;
						} else {
							w8 = 1647;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 1511;
					} else {
						if (hops < 3) {
							w8 = 1606;
						} else {
							w8 = 1686;
						}
					}
				}
			}
		} else {
			if (rel_time < 11734) {
				if (prod != 1) {
					if (hops < 2) {
						w8 = -1710;
					} else {
						w8 = -1466;
					}
				} else {
					if (hops < 2) {
						w8 = 2376;
					} else {
						w8 = 2557;
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 11752) {
						if (hops < 2) {
							w8 = -1724;
						} else {
							w8 = -1525;
						}
					} else {
						if (prod != 4) {
							w8 = 1080;
						} else {
							w8 = -512;
						}
					}
				} else {
					if (hops < 2) {
						w8 = -1828;
					} else {
						if (hops < 3) {
							w8 = -2227;
						} else {
							w8 = -2353;
						}
					}
				}
			}
		}
	}
	int w9;
	if (rel_time < 12117) {
		if (rel_time < 12075) {
			if (rel_time < 6668) {
				if (rel_time < 6662) {
					if (rel_time < 6614) {
						if (rel_time < 6567) {
							w9 = -16;
						} else {
							w9 = -1972;
						}
					} else {
						if (prod != 2) {
							w9 = -2264;
						} else {
							w9 = 1588;
						}
					}
				} else {
					if (hops < 3) {
						w9 = -2554;
					} else {
						w9 = -2444;
					}
				}
			} else {
				if (rel_time < 7013) {
					if (prod != 0) {
						if (prod != 2) {
							w9 = 1911;
						} else {
							w9 = -1506;
						}
					} else {
						w9 = -1514;
					}
				} else {
					if (rel_time < 7118) {
						if (prod != 0) {
							w9 = -1511;
						} else {
							w9 = 1516;
						}
					} else {
						if (rel_time < 7124) {
							w9 = 1579;
						} else {
							w9 = 19;
						}
					}
				}
			}
		} else {
			if (prod != 3) {
				if (hops < 2) {
					w9 = 1574;
				} else {
					if (hops < 3) {
						w9 = 1013;
					} else {
						w9 = 1738;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w9 = -1263;
						} else {
							w9 = -1742;
						}
					} else {
						w9 = -1025;
					}
				} else {
					w9 = -1827;
				}
			}
		}
	} else {
		if (hops < 3) {
			w9 = 805;
		} else {
			if (hops < 4) {
				w9 = 608;
			} else {
				w9 = 774;
			}
		}
	}
	int w10;
	if (hops < 4) {
		if (rel_time < 7915) {
			if (rel_time < 7869) {
				if (rel_time < 7820) {
					if (rel_time < 7774) {
						if (rel_time < 7469) {
							w10 = -40;
						} else {
							w10 = 383;
						}
					} else {
						if (prod != 1) {
							w10 = 1530;
						} else {
							w10 = -2520;
						}
					}
				} else {
					if (prod != 2) {
						w10 = -2549;
					} else {
						if (hops < 2) {
							w10 = 1482;
						} else {
							w10 = 1607;
						}
					}
				}
			} else {
				if (prod != 3) {
					w10 = 1500;
				} else {
					if (hops < 3) {
						w10 = -2561;
					} else {
						w10 = -2456;
					}
				}
			}
		} else {
			if (rel_time < 7924) {
				if (hops < 2) {
					w10 = 1479;
				} else {
					w10 = 1602;
				}
			} else {
				if (rel_time < 8030) {
					if (prod != 0) {
						w10 = 1564;
					} else {
						if (hops < 3) {
							w10 = -1509;
						} else {
							w10 = -1570;
						}
					}
				} else {
					if (rel_time < 8077) {
						if (prod != 0) {
							w10 = 2561;
						} else {
							w10 = -1542;
						}
					} else {
						if (rel_time < 8219) {
							w10 = 567;
						} else {
							w10 = -3;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2234) {
			if (rel_time < 1984) {
				if (cons != 0) {
					if (rel_time < 1644) {
						if (cons != 2) {
							w10 = 4;
						} else {
							w10 = 275;
						}
					} else {
						if (cons != 1) {
							w10 = 227;
						} else {
							w10 = 895;
						}
					}
				} else {
					if (rel_time < 1571) {
						if (rel_time < 1168) {
							w10 = -57;
						} else {
							w10 = 277;
						}
					} else {
						w10 = -452;
					}
				}
			} else {
				if (cons != 1) {
					if (cons != 4) {
						if (rel_time < 2137) {
							w10 = 1900;
						} else {
							w10 = 866;
						}
					} else {
						if (rel_time < 2035) {
							w10 = 147;
						} else {
							w10 = 191;
						}
					}
				} else {
					if (rel_time < 2137) {
						w10 = -960;
					} else {
						w10 = -63;
					}
				}
			}
		} else {
			if (rel_time < 12075) {
				if (rel_time < 12033) {
					if (rel_time < 11991) {
						if (rel_time < 11948) {
							w10 = 104;
						} else {
							w10 = 971;
						}
					} else {
						w10 = -996;
					}
				} else {
					w10 = 1331;
				}
			} else {
				if (rel_time < 12117) {
					w10 = -916;
				} else {
					w10 = 388;
				}
			}
		}
	}
	int w11;
	if (hops < 2) {
		if (prod != 0) {
			if (rel_time < 11798) {
				if (rel_time < 11752) {
					if (rel_time < 10896) {
						if (rel_time < 10879) {
							w11 = -76;
						} else {
							w11 = -2602;
						}
					} else {
						if (rel_time < 11091) {
							w11 = 1895;
						} else {
							w11 = -34;
						}
					}
				} else {
					if (prod != 2) {
						w11 = 1814;
					} else {
						w11 = -2167;
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 12075) {
						if (rel_time < 12033) {
							w11 = -1067;
						} else {
							w11 = -2307;
						}
					} else {
						if (prod != 3) {
							w11 = 477;
						} else {
							w11 = -631;
						}
					}
				} else {
					w11 = 346;
				}
			}
		} else {
			if (rel_time < 11948) {
				if (rel_time < 10786) {
					if (rel_time < 10480) {
						if (rel_time < 10189) {
							w11 = 114;
						} else {
							w11 = -1495;
						}
					} else {
						w11 = 1470;
					}
				} else {
					if (rel_time < 11091) {
						w11 = -1528;
					} else {
						if (rel_time < 11398) {
							w11 = 806;
						} else {
							w11 = -287;
						}
					}
				}
			} else {
				w11 = 1798;
			}
		}
	} else {
		if (rel_time < 2137) {
			if (rel_time < 1984) {
				if (rel_time < 1937) {
					if (cons != 0) {
						if (rel_time < 1840) {
							w11 = 132;
						} else {
							w11 = 525;
						}
					} else {
						if (rel_time < 1571) {
							w11 = 130;
						} else {
							w11 = -507;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w11 = -921;
						} else {
							w11 = -730;
						}
					} else {
						w11 = -340;
					}
				}
			} else {
				if (cons != 3) {
					if (cons != 0) {
						if (rel_time < 2088) {
							w11 = -379;
						} else {
							w11 = -1423;
						}
					} else {
						if (rel_time < 2088) {
							w11 = -395;
						} else {
							w11 = 960;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w11 = 1473;
						} else {
							w11 = 1671;
						}
					} else {
						w11 = 1197;
					}
				}
			}
		} else {
			if (rel_time < 10896) {
				if (rel_time < 10879) {
					if (rel_time < 10832) {
						if (rel_time < 10786) {
							w11 = 15;
						} else {
							w11 = -1979;
						}
					} else {
						if (prod != 2) {
							w11 = -2478;
						} else {
							w11 = 1601;
						}
					}
				} else {
					w11 = -2488;
				}
			} else {
				if (rel_time < 10941) {
					if (prod != 3) {
						w11 = 1624;
					} else {
						w11 = -2440;
					}
				} else {
					if (prod != 1) {
						if (rel_time < 11185) {
							w11 = -836;
						} else {
							w11 = 138;
						}
					} else {
						if (rel_time < 11139) {
							w11 = 2557;
						} else {
							w11 = -306;
						}
					}
				}
			}
		}
	}
	int w12;
	if (rel_time < 9238) {
		if (rel_time < 9226) {
			if (rel_time < 9122) {
				if (rel_time < 9075) {
					if (rel_time < 8933) {
						if (rel_time < 8770) {
							w12 = -13;
						} else {
							w12 = 759;
						}
					} else {
						if (prod != 1) {
							w12 = 842;
						} else {
							w12 = -2521;
						}
					}
				} else {
					if (prod != 3) {
						w12 = 1561;
					} else {
						w12 = -2504;
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w12 = 1517;
					} else {
						w12 = 1602;
					}
				} else {
					w12 = -1559;
				}
			}
		} else {
			w12 = -1551;
		}
	} else {
		if (rel_time < 9285) {
			if (prod != 0) {
				w12 = 2571;
			} else {
				w12 = -1554;
			}
		} else {
			if (prod != 3) {
				if (rel_time < 9625) {
					if (prod != 0) {
						if (rel_time < 9332) {
							w12 = -500;
						} else {
							w12 = -1880;
						}
					} else {
						if (hops < 2) {
							w12 = 1412;
						} else {
							w12 = 1615;
						}
					}
				} else {
					if (rel_time < 9732) {
						if (hops < 2) {
							w12 = 1510;
						} else {
							w12 = 1600;
						}
					} else {
						if (prod != 1) {
							w12 = -101;
						} else {
							w12 = 217;
						}
					}
				}
			} else {
				if (rel_time < 9428) {
					w12 = 2573;
				} else {
					if (rel_time < 9732) {
						w12 = -2515;
					} else {
						if (rel_time < 10024) {
							w12 = 2577;
						} else {
							w12 = 9;
						}
					}
				}
			}
		}
	}
	int w13;
	if (rel_time < 10480) {
		if (rel_time < 10142) {
			if (rel_time < 10038) {
				if (rel_time < 10024) {
					if (rel_time < 9977) {
						if (rel_time < 9931) {
							w13 = 1;
						} else {
							w13 = -984;
						}
					} else {
						if (prod != 3) {
							w13 = -1431;
						} else {
							w13 = 1288;
						}
					}
				} else {
					if (hops < 2) {
						w13 = -1422;
					} else {
						w13 = -1479;
					}
				}
			} else {
				if (prod != 0) {
					w13 = -1463;
				} else {
					if (hops < 2) {
						w13 = 1480;
					} else {
						w13 = 1641;
					}
				}
			}
		} else {
			if (prod != 2) {
				if (prod != 4) {
					if (prod != 0) {
						if (rel_time < 10330) {
							w13 = -2575;
						} else {
							w13 = 2460;
						}
					} else {
						if (rel_time < 10189) {
							w13 = 1641;
						} else {
							w13 = -1269;
						}
					}
				} else {
					if (hops < 3) {
						w13 = 1594;
					} else {
						w13 = 1676;
					}
				}
			} else {
				if (hops < 3) {
					w13 = 1595;
				} else {
					w13 = 1683;
				}
			}
		}
	} else {
		if (rel_time < 10495) {
			w13 = 2462;
		} else {
			if (prod != 3) {
				if (rel_time < 10635) {
					if (prod != 1) {
						if (hops < 2) {
							w13 = -1424;
						} else {
							w13 = -1483;
						}
					} else {
						w13 = 2443;
					}
				} else {
					if (rel_time < 12033) {
						if (prod != 0) {
							w13 = -165;
						} else {
							w13 = 248;
						}
					} else {
						if (rel_time < 12075) {
							w13 = 936;
						} else {
							w13 = 320;
						}
					}
				}
			} else {
				if (rel_time < 10635) {
					w13 = 2570;
				} else {
					if (rel_time < 10941) {
						if (rel_time < 10879) {
							w13 = -1925;
						} else {
							w13 = -1268;
						}
					} else {
						if (rel_time < 11231) {
							w13 = 1971;
						} else {
							w13 = -223;
						}
					}
				}
			}
		}
	}
	int w14;
	if (rel_time < 1571) {
		if (hops < 4) {
			if (cons != 0) {
				if (cons != 2) {
					if (rel_time < 1420) {
						if (cons != 4) {
							w14 = 259;
						} else {
							w14 = 517;
						}
					} else {
						if (hops < 3) {
							w14 = 236;
						} else {
							w14 = 135;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 168;
						} else {
							w14 = 133;
						}
					} else {
						if (rel_time < 1285) {
							w14 = 82;
						} else {
							w14 = 94;
						}
					}
				}
			} else {
				if (rel_time < 1501) {
					if (rel_time < 1168) {
						if (hops < 2) {
							w14 = 153;
						} else {
							w14 = 61;
						}
					} else {
						if (hops < 2) {
							w14 = -82;
						} else {
							w14 = -193;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 231;
						} else {
							w14 = 208;
						}
					} else {
						w14 = 85;
					}
				}
			}
		} else {
			if (cons != 2) {
				if (cons != 3) {
					if (rel_time < 1168) {
						w14 = -87;
					} else {
						if (rel_time < 1420) {
							w14 = 175;
						} else {
							w14 = 12;
						}
					}
				} else {
					if (rel_time < 1347) {
						w14 = -175;
					} else {
						w14 = -101;
					}
				}
			} else {
				w14 = -161;
			}
		}
	} else {
		if (cons != 1) {
			if (rel_time < 1715) {
				if (cons != 2) {
					if (hops < 4) {
						if (hops < 3) {
							w14 = -199;
						} else {
							w14 = -376;
						}
					} else {
						w14 = 103;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w14 = 547;
						} else {
							w14 = 373;
						}
					} else {
						w14 = 757;
					}
				}
			} else {
				if (rel_time < 1984) {
					if (cons != 4) {
						if (hops < 2) {
							w14 = -684;
						} else {
							w14 = -319;
						}
					} else {
						if (hops < 2) {
							w14 = 573;
						} else {
							w14 = 169;
						}
					}
				} else {
					if (rel_time < 2234) {
						if (cons != 4) {
							w14 = 586;
						} else {
							w14 = -390;
						}
					} else {
						if (rel_time < 2282) {
							w14 = -1012;
						} else {
							w14 = 3;
						}
					}
				}
			}
		} else {
			if (rel_time < 4451) {
				if (rel_time < 3114) {
					if (rel_time < 2964) {
						if (rel_time < 2519) {
							w14 = -295;
						} else {
							w14 = 119;
						}
					} else {
						if (rel_time < 3085) {
							w14 = -2599;
						} else {
							w14 = -543;
						}
					}
				} else {
					if (rel_time < 3263) {
						if (hops < 2) {
							w14 = 726;
						} else {
							w14 = 1537;
						}
					} else {
						if (rel_time < 3412) {
							w14 = -954;
						} else {
							w14 = 135;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 4570) {
							w14 = -884;
						} else {
							w14 = -1047;
						}
					} else {
						if (rel_time < 4570) {
							w14 = -697;
						} else {
							w14 = -887;
						}
					}
				} else {
					w14 = -1294;
				}
			}
		}
	}
	int w15;
	if (rel_time < 11798) {
		if (rel_time < 11752) {
			if (rel_time < 11734) {
				if (rel_time < 11687) {
					if (rel_time < 11352) {
						if (rel_time < 11335) {
							w15 = -1;
						} else {
							w15 = 559;
						}
					} else {
						if (prod != 2) {
							w15 = -489;
						} else {
							w15 = 879;
						}
					}
				} else {
					if (prod != 1) {
						w15 = -705;
					} else {
						if (hops < 2) {
							w15 = 1171;
						} else {
							w15 = 1388;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w15 = -723;
					} else {
						w15 = -668;
					}
				} else {
					if (hops < 4) {
						w15 = -741;
					} else {
						w15 = -806;
					}
				}
			}
		} else {
			if (prod != 2) {
				if (hops < 2) {
					w15 = 1013;
				} else {
					if (hops < 3) {
						w15 = 2107;
					} else {
						w15 = 2013;
					}
				}
			} else {
				if (hops < 2) {
					w15 = -989;
				} else {
					w15 = -2064;
				}
			}
		}
	} else {
		if (prod != 0) {
			if (prod != 2) {
				if (rel_time < 12117) {
					if (prod != 3) {
						if (rel_time < 12033) {
							w15 = -952;
						} else {
							w15 = 441;
						}
					} else {
						if (rel_time < 11844) {
							w15 = 2094;
						} else {
							w15 = -871;
						}
					}
				} else {
					if (hops < 2) {
						w15 = 57;
					} else {
						if (hops < 3) {
							w15 = 222;
						} else {
							w15 = 97;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 12033) {
						w15 = 303;
					} else {
						w15 = -245;
					}
				} else {
					if (rel_time < 12033) {
						if (hops < 3) {
							w15 = 1367;
						} else {
							w15 = 1227;
						}
					} else {
						if (hops < 4) {
							w15 = 759;
						} else {
							w15 = 180;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 11948) {
						w15 = 683;
					} else {
						w15 = 827;
					}
				} else {
					if (rel_time < 11948) {
						if (hops < 3) {
							w15 = 886;
						} else {
							w15 = 944;
						}
					} else {
						if (hops < 3) {
							w15 = 1139;
						} else {
							w15 = 927;
						}
					}
				}
			} else {
				if (rel_time < 11948) {
					w15 = 740;
				} else {
					w15 = 343;
				}
			}
		}
	}
	int w16;
	if (cons != 4) {
		if (hops < 3) {
			if (rel_time < 11491) {
				if (rel_time < 11352) {
					if (rel_time < 10832) {
						if (rel_time < 10740) {
							w16 = -25;
						} else {
							w16 = -735;
						}
					} else {
						if (prod != 1) {
							w16 = -89;
						} else {
							w16 = 1543;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 0) {
							w16 = -1059;
						} else {
							w16 = 2619;
						}
					} else {
						if (hops < 2) {
							w16 = 457;
						} else {
							w16 = 418;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (prod != 4) {
						if (rel_time < 11752) {
							w16 = -643;
						} else {
							w16 = 249;
						}
					} else {
						if (rel_time < 11642) {
							w16 = 1111;
						} else {
							w16 = -220;
						}
					}
				} else {
					if (rel_time < 11687) {
						w16 = 3404;
					} else {
						if (rel_time < 11734) {
							w16 = 682;
						} else {
							w16 = -252;
						}
					}
				}
			}
		} else {
			if (rel_time < 4420) {
				if (rel_time < 4273) {
					if (rel_time < 4124) {
						if (rel_time < 3976) {
							w16 = 31;
						} else {
							w16 = -488;
						}
					} else {
						if (cons != 2) {
							w16 = 574;
						} else {
							w16 = -179;
						}
					}
				} else {
					if (cons != 1) {
						if (cons != 3) {
							w16 = -394;
						} else {
							w16 = -797;
						}
					} else {
						if (hops < 4) {
							w16 = -1013;
						} else {
							w16 = -883;
						}
					}
				}
			} else {
				if (rel_time < 4540) {
					if (cons != 2) {
						if (cons != 3) {
							w16 = 689;
						} else {
							w16 = 946;
						}
					} else {
						if (rel_time < 4451) {
							w16 = -282;
						} else {
							w16 = 16;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 4613) {
							w16 = 381;
						} else {
							w16 = 25;
						}
					} else {
						if (hops < 4) {
							w16 = -430;
						} else {
							w16 = -648;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4540) {
			if (rel_time < 4244) {
				if (rel_time < 3916) {
					if (rel_time < 3470) {
						if (rel_time < 3025) {
							w16 = 43;
						} else {
							w16 = 231;
						}
					} else {
						if (rel_time < 3797) {
							w16 = -294;
						} else {
							w16 = -1141;
						}
					}
				} else {
					if (rel_time < 4095) {
						if (rel_time < 3946) {
							w16 = 222;
						} else {
							w16 = 898;
						}
					} else {
						if (hops < 3) {
							w16 = -9;
						} else {
							w16 = -63;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 4392) {
						if (rel_time < 4361) {
							w16 = -244;
						} else {
							w16 = -206;
						}
					} else {
						if (rel_time < 4510) {
							w16 = 44;
						} else {
							w16 = -89;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w16 = -244;
						} else {
							w16 = -171;
						}
					} else {
						if (rel_time < 4392) {
							w16 = -403;
						} else {
							w16 = -161;
						}
					}
				}
			}
		} else {
			if (rel_time < 4634) {
				if (hops < 3) {
					if (hops < 2) {
						w16 = 1286;
					} else {
						w16 = 902;
					}
				} else {
					w16 = 1443;
				}
			} else {
				if (hops < 2) {
					w16 = 583;
				} else {
					if (hops < 3) {
						w16 = 354;
					} else {
						if (hops < 4) {
							w16 = 511;
						} else {
							w16 = 632;
						}
					}
				}
			}
		}
	}
	int w17;
	if (cons != 0) {
		if (rel_time < 7124) {
			if (rel_time < 6821) {
				if (rel_time < 6662) {
					if (rel_time < 6110) {
						if (rel_time < 6062) {
							w17 = 11;
						} else {
							w17 = -1619;
						}
					} else {
						if (prod != 3) {
							w17 = -20;
						} else {
							w17 = 2607;
						}
					}
				} else {
					if (prod != 4) {
						if (rel_time < 6716) {
							w17 = -1530;
						} else {
							w17 = -750;
						}
					} else {
						if (hops < 3) {
							w17 = 633;
						} else {
							w17 = 681;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (prod != 2) {
						if (prod != 0) {
							w17 = 1653;
						} else {
							w17 = 241;
						}
					} else {
						if (hops < 2) {
							w17 = -684;
						} else {
							w17 = -743;
						}
					}
				} else {
					if (rel_time < 7013) {
						w17 = -2420;
					} else {
						if (hops < 2) {
							w17 = -664;
						} else {
							w17 = -756;
						}
					}
				}
			}
		} else {
			if (rel_time < 7173) {
				if (prod != 0) {
					w17 = -2504;
				} else {
					if (hops < 2) {
						w17 = 1398;
					} else {
						w17 = 1653;
					}
				}
			} else {
				if (rel_time < 7516) {
					if (prod != 3) {
						if (prod != 0) {
							w17 = 1610;
						} else {
							w17 = -1524;
						}
					} else {
						w17 = -2492;
					}
				} else {
					if (rel_time < 7524) {
						if (hops < 4) {
							w17 = -1707;
						} else {
							w17 = -1563;
						}
					} else {
						if (rel_time < 7571) {
							w17 = 1545;
						} else {
							w17 = -11;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3679) {
			if (rel_time < 3530) {
				if (rel_time < 3381) {
					if (rel_time < 3352) {
						if (rel_time < 3085) {
							w17 = 16;
						} else {
							w17 = -450;
						}
					} else {
						if (hops < 4) {
							w17 = 396;
						} else {
							w17 = 586;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3501) {
							w17 = -966;
						} else {
							w17 = -837;
						}
					} else {
						w17 = -258;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 3650) {
						w17 = 700;
					} else {
						if (hops < 2) {
							w17 = 864;
						} else {
							w17 = 777;
						}
					}
				} else {
					w17 = 562;
				}
			}
		} else {
			if (rel_time < 3828) {
				if (rel_time < 3799) {
					if (hops < 4) {
						if (rel_time < 3797) {
							w17 = -812;
						} else {
							w17 = -672;
						}
					} else {
						w17 = -228;
					}
				} else {
					if (hops < 4) {
						w17 = -1732;
					} else {
						w17 = -793;
					}
				}
			} else {
				if (rel_time < 3976) {
					if (rel_time < 3946) {
						if (hops < 2) {
							w17 = 54;
						} else {
							w17 = -47;
						}
					} else {
						if (hops < 4) {
							w17 = 447;
						} else {
							w17 = 298;
						}
					}
				} else {
					if (rel_time < 4124) {
						if (hops < 3) {
							w17 = -659;
						} else {
							w17 = -242;
						}
					} else {
						if (rel_time < 4273) {
							w17 = 318;
						} else {
							w17 = -118;
						}
					}
				}
			}
		}
	}
	int w18;
	if (prod != 0) {
		if (rel_time < 8524) {
			if (rel_time < 8219) {
				if (rel_time < 7915) {
					if (rel_time < 7620) {
						if (rel_time < 7317) {
							w18 = -20;
						} else {
							w18 = 446;
						}
					} else {
						if (prod != 2) {
							w18 = -1651;
						} else {
							w18 = 881;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 4) {
							w18 = 1998;
						} else {
							w18 = 451;
						}
					} else {
						if (hops < 4) {
							w18 = -1784;
						} else {
							w18 = -1533;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (prod != 4) {
						if (hops < 2) {
							w18 = -2565;
						} else {
							w18 = -2486;
						}
					} else {
						if (rel_time < 8324) {
							w18 = -1512;
						} else {
							w18 = 1589;
						}
					}
				} else {
					if (hops < 2) {
						w18 = 1532;
					} else {
						w18 = 1599;
					}
				}
			}
		} else {
			if (rel_time < 8724) {
				if (prod != 2) {
					if (rel_time < 8629) {
						w18 = 1604;
					} else {
						w18 = 2575;
					}
				} else {
					w18 = -1503;
				}
			} else {
				if (rel_time < 8770) {
					if (prod != 2) {
						w18 = 2590;
					} else {
						if (hops < 2) {
							w18 = -1465;
						} else {
							w18 = -1532;
						}
					}
				} else {
					if (rel_time < 8781) {
						w18 = 2202;
					} else {
						if (rel_time < 8980) {
							w18 = -1494;
						} else {
							w18 = 30;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8371) {
			if (rel_time < 8077) {
				if (rel_time < 7774) {
					if (rel_time < 7469) {
						if (rel_time < 7173) {
							w18 = 209;
						} else {
							w18 = -762;
						}
					} else {
						if (hops < 2) {
							w18 = 1260;
						} else {
							w18 = 1440;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w18 = -761;
						} else {
							w18 = -798;
						}
					} else {
						w18 = -1551;
					}
				}
			} else {
				if (hops < 2) {
					w18 = 1440;
				} else {
					if (hops < 3) {
						w18 = 1585;
					} else {
						w18 = 1651;
					}
				}
			}
		} else {
			if (rel_time < 8676) {
				w18 = -1539;
			} else {
				if (rel_time < 8980) {
					if (hops < 2) {
						w18 = 1054;
					} else {
						w18 = 1202;
					}
				} else {
					if (rel_time < 9884) {
						if (rel_time < 9579) {
							w18 = 8;
						} else {
							w18 = -1494;
						}
					} else {
						if (rel_time < 10786) {
							w18 = 528;
						} else {
							w18 = -227;
						}
					}
				}
			}
		}
	}
	int w19;
	if (rel_time < 3381) {
		if (rel_time < 3234) {
			if (rel_time < 2462) {
				if (rel_time < 2282) {
					if (rel_time < 2234) {
						if (rel_time < 2035) {
							w19 = 69;
						} else {
							w19 = -97;
						}
					} else {
						if (cons != 3) {
							w19 = 1051;
						} else {
							w19 = -757;
						}
					}
				} else {
					if (cons != 0) {
						if (cons != 1) {
							w19 = 200;
						} else {
							w19 = 572;
						}
					} else {
						if (rel_time < 2343) {
							w19 = -257;
						} else {
							w19 = 118;
						}
					}
				}
			} else {
				if (rel_time < 2611) {
					if (cons != 1) {
						if (cons != 3) {
							w19 = -23;
						} else {
							w19 = -709;
						}
					} else {
						if (hops < 3) {
							w19 = -1075;
						} else {
							w19 = -568;
						}
					}
				} else {
					if (rel_time < 2728) {
						if (cons != 0) {
							w19 = 541;
						} else {
							w19 = -456;
						}
					} else {
						if (rel_time < 2935) {
							w19 = -168;
						} else {
							w19 = 74;
						}
					}
				}
			}
		} else {
			if (cons != 3) {
				if (cons != 1) {
					if (cons != 0) {
						if (hops < 4) {
							w19 = -9;
						} else {
							w19 = 209;
						}
					} else {
						if (rel_time < 3352) {
							w19 = 379;
						} else {
							w19 = 219;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3263) {
							w19 = 144;
						} else {
							w19 = -1284;
						}
					} else {
						if (hops < 4) {
							w19 = 484;
						} else {
							w19 = 896;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w19 = 737;
						} else {
							w19 = 825;
						}
					} else {
						w19 = 702;
					}
				} else {
					w19 = 1440;
				}
			}
		}
	} else {
		if (rel_time < 3501) {
			if (cons != 3) {
				if (hops < 4) {
					if (cons != 1) {
						if (rel_time < 3470) {
							w19 = -139;
						} else {
							w19 = -300;
						}
					} else {
						if (hops < 3) {
							w19 = -327;
						} else {
							w19 = -496;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 3470) {
							w19 = -587;
						} else {
							w19 = -21;
						}
					} else {
						w19 = -1280;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w19 = -664;
						} else {
							w19 = -707;
						}
					} else {
						w19 = -829;
					}
				} else {
					w19 = -1672;
				}
			}
		} else {
			if (rel_time < 3619) {
				if (cons != 2) {
					if (cons != 0) {
						if (cons != 4) {
							w19 = 1249;
						} else {
							w19 = -721;
						}
					} else {
						if (hops < 4) {
							w19 = -409;
						} else {
							w19 = -120;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w19 = -941;
						} else {
							w19 = -1315;
						}
					} else {
						if (hops < 4) {
							w19 = -363;
						} else {
							w19 = -81;
						}
					}
				}
			} else {
				if (rel_time < 3767) {
					if (cons != 1) {
						if (cons != 3) {
							w19 = 152;
						} else {
							w19 = -744;
						}
					} else {
						if (hops < 3) {
							w19 = -836;
						} else {
							w19 = -2184;
						}
					}
				} else {
					if (rel_time < 3916) {
						if (cons != 1) {
							w19 = 35;
						} else {
							w19 = 1078;
						}
					} else {
						if (rel_time < 4004) {
							w19 = -341;
						} else {
							w19 = 0;
						}
					}
				}
			}
		}
	}
	int w20;
	if (rel_time < 5808) {
		if (rel_time < 5759) {
			if (rel_time < 5711) {
				if (rel_time < 5663) {
					if (prod != 3) {
						if (rel_time < 5409) {
							w20 = -4;
						} else {
							w20 = 565;
						}
					} else {
						if (rel_time < 5206) {
							w20 = 341;
						} else {
							w20 = -2300;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 2) {
							w20 = -1358;
						} else {
							w20 = -1756;
						}
					} else {
						if (hops < 2) {
							w20 = 2705;
						} else {
							w20 = 2324;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (hops < 2) {
						w20 = 2700;
					} else {
						w20 = 2323;
					}
				} else {
					if (hops < 2) {
						w20 = -1366;
					} else {
						w20 = -1759;
					}
				}
			}
		} else {
			if (prod != 3) {
				if (hops < 2) {
					w20 = -1372;
				} else {
					w20 = -1753;
				}
			} else {
				if (hops < 2) {
					w20 = 2706;
				} else {
					w20 = 2330;
				}
			}
		}
	} else {
		if (rel_time < 5811) {
			if (hops < 2) {
				w20 = -1373;
			} else {
				w20 = -1463;
			}
		} else {
			if (rel_time < 5916) {
				if (prod != 0) {
					w20 = -1454;
				} else {
					if (hops < 2) {
						w20 = 1403;
					} else {
						w20 = 1582;
					}
				}
			} else {
				if (rel_time < 6013) {
					if (prod != 1) {
						if (rel_time < 5965) {
							w20 = 1530;
						} else {
							w20 = 1646;
						}
					} else {
						w20 = -2444;
					}
				} else {
					if (rel_time < 6268) {
						if (prod != 3) {
							w20 = 896;
						} else {
							w20 = -1853;
						}
					} else {
						if (rel_time < 6316) {
							w20 = -790;
						} else {
							w20 = -9;
						}
					}
				}
			}
		}
	}
	int w21;
	if (rel_time < 9238) {
		if (rel_time < 9226) {
			if (rel_time < 9122) {
				if (rel_time < 9075) {
					if (prod != 1) {
						if (prod != 4) {
							w21 = 20;
						} else {
							w21 = -130;
						}
					} else {
						if (rel_time < 8980) {
							w21 = -85;
						} else {
							w21 = -1255;
						}
					}
				} else {
					if (prod != 3) {
						if (hops < 3) {
							w21 = 763;
						} else {
							w21 = 881;
						}
					} else {
						if (hops < 3) {
							w21 = -1285;
						} else {
							w21 = -1227;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 3) {
						w21 = 773;
					} else {
						w21 = 803;
					}
				} else {
					w21 = -771;
				}
			}
		} else {
			if (hops < 3) {
				w21 = -746;
			} else {
				w21 = -806;
			}
		}
	} else {
		if (rel_time < 9285) {
			if (prod != 0) {
				if (hops < 3) {
					w21 = 1305;
				} else {
					w21 = 1238;
				}
			} else {
				w21 = -781;
			}
		} else {
			if (rel_time < 9931) {
				if (rel_time < 9836) {
					if (prod != 1) {
						if (rel_time < 9332) {
							w21 = -1266;
						} else {
							w21 = 233;
						}
					} else {
						if (rel_time < 9332) {
							w21 = 2795;
						} else {
							w21 = -1588;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 9884) {
							w21 = -741;
						} else {
							w21 = -1463;
						}
					} else {
						w21 = 2448;
					}
				}
			} else {
				if (rel_time < 10480) {
					if (prod != 1) {
						if (rel_time < 10434) {
							w21 = 28;
						} else {
							w21 = -938;
						}
					} else {
						if (rel_time < 10235) {
							w21 = -1344;
						} else {
							w21 = 1239;
						}
					}
				} else {
					if (rel_time < 10495) {
						if (hops < 3) {
							w21 = 1254;
						} else {
							w21 = 1185;
						}
					} else {
						if (rel_time < 10542) {
							w21 = -572;
						} else {
							w21 = 25;
						}
					}
				}
			}
		}
	}
	int w22;
	if (prod != 3) {
		if (rel_time < 8381) {
			if (rel_time < 8371) {
				if (rel_time < 7516) {
					if (rel_time < 7469) {
						if (rel_time < 7220) {
							w22 = -10;
						} else {
							w22 = 362;
						}
					} else {
						if (prod != 1) {
							w22 = -2509;
						} else {
							w22 = 1415;
						}
					}
				} else {
					if (rel_time < 7620) {
						if (rel_time < 7524) {
							w22 = -1078;
						} else {
							w22 = -2014;
						}
					} else {
						if (prod != 0) {
							w22 = -212;
						} else {
							w22 = 346;
						}
					}
				}
			} else {
				if (hops < 2) {
					w22 = -1247;
				} else {
					w22 = -1199;
				}
			}
		} else {
			if (rel_time < 8724) {
				if (prod != 0) {
					if (prod != 2) {
						if (rel_time < 8428) {
							w22 = -1180;
						} else {
							w22 = 1101;
						}
					} else {
						if (rel_time < 8476) {
							w22 = 785;
						} else {
							w22 = -758;
						}
					}
				} else {
					if (hops < 2) {
						w22 = -800;
					} else {
						if (hops < 3) {
							w22 = -744;
						} else {
							w22 = -781;
						}
					}
				}
			} else {
				if (rel_time < 8829) {
					if (rel_time < 8770) {
						if (hops < 3) {
							w22 = -748;
						} else {
							w22 = -785;
						}
					} else {
						if (hops < 2) {
							w22 = -1021;
						} else {
							w22 = -1089;
						}
					}
				} else {
					if (rel_time < 9226) {
						if (prod != 1) {
							w22 = 598;
						} else {
							w22 = -564;
						}
					} else {
						if (rel_time < 9625) {
							w22 = -160;
						} else {
							w22 = 31;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5508) {
			if (rel_time < 5206) {
				if (rel_time < 4888) {
					if (hops < 2) {
						w22 = -147;
					} else {
						if (hops < 4) {
							w22 = -767;
						} else {
							w22 = -159;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w22 = 775;
						} else {
							w22 = 1244;
						}
					} else {
						w22 = 169;
					}
				}
			} else {
				if (hops < 2) {
					w22 = -1301;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w22 = -1118;
						} else {
							w22 = -1068;
						}
					} else {
						w22 = -1157;
					}
				}
			}
		} else {
			if (rel_time < 5808) {
				if (hops < 2) {
					w22 = 1347;
				} else {
					if (hops < 4) {
						w22 = 1166;
					} else {
						w22 = 1093;
					}
				}
			} else {
				if (rel_time < 6110) {
					if (rel_time < 6062) {
						w22 = -1528;
					} else {
						if (hops < 3) {
							w22 = -721;
						} else {
							w22 = -690;
						}
					}
				} else {
					if (rel_time < 6413) {
						if (hops < 2) {
							w22 = 1355;
						} else {
							w22 = 1303;
						}
					} else {
						if (rel_time < 6716) {
							w22 = -765;
						} else {
							w22 = 67;
						}
					}
				}
			}
		}
	}
	int w23;
	if (rel_time < 11991) {
		if (rel_time < 11539) {
			if (rel_time < 11231) {
				if (rel_time < 10832) {
					if (rel_time < 10786) {
						if (rel_time < 10480) {
							w23 = 0;
						} else {
							w23 = 136;
						}
					} else {
						if (prod != 1) {
							w23 = 2465;
						} else {
							w23 = -1609;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 1) {
							w23 = 159;
						} else {
							w23 = 911;
						}
					} else {
						if (hops < 2) {
							w23 = -700;
						} else {
							w23 = -1080;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (prod != 2) {
						if (rel_time < 11491) {
							w23 = -697;
						} else {
							w23 = -88;
						}
					} else {
						if (hops < 3) {
							w23 = 185;
						} else {
							w23 = 399;
						}
					}
				} else {
					if (rel_time < 11352) {
						if (hops < 2) {
							w23 = 182;
						} else {
							w23 = 513;
						}
					} else {
						if (hops < 3) {
							w23 = 1419;
						} else {
							w23 = 3011;
						}
					}
				}
			}
		} else {
			if (prod != 3) {
				if (prod != 1) {
					if (rel_time < 11642) {
						if (prod != 0) {
							w23 = 806;
						} else {
							w23 = -468;
						}
					} else {
						if (rel_time < 11844) {
							w23 = -451;
						} else {
							w23 = 178;
						}
					}
				} else {
					if (rel_time < 11687) {
						if (hops < 3) {
							w23 = 1672;
						} else {
							w23 = 3272;
						}
					} else {
						if (rel_time < 11734) {
							w23 = 432;
						} else {
							w23 = -236;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11798) {
						w23 = 332;
					} else {
						w23 = 1225;
					}
				} else {
					if (hops < 3) {
						w23 = 878;
					} else {
						if (hops < 4) {
							w23 = 953;
						} else {
							w23 = 865;
						}
					}
				}
			}
		}
	} else {
		if (prod != 3) {
			if (prod != 1) {
				if (hops < 2) {
					if (rel_time < 12075) {
						if (rel_time < 12033) {
							w23 = -6;
						} else {
							w23 = -280;
						}
					} else {
						if (rel_time < 12117) {
							w23 = 301;
						} else {
							w23 = 105;
						}
					}
				} else {
					if (rel_time < 12033) {
						if (hops < 3) {
							w23 = 527;
						} else {
							w23 = 570;
						}
					} else {
						if (rel_time < 12117) {
							w23 = 240;
						} else {
							w23 = 84;
						}
					}
				}
			} else {
				if (hops < 2) {
					w23 = 142;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w23 = -438;
						} else {
							w23 = -694;
						}
					} else {
						w23 = 55;
					}
				}
			}
		} else {
			if (rel_time < 12075) {
				if (hops < 2) {
					w23 = -792;
				} else {
					w23 = -2514;
				}
			} else {
				if (hops < 2) {
					w23 = 49;
				} else {
					if (hops < 3) {
						w23 = -575;
					} else {
						if (hops < 4) {
							w23 = -103;
						} else {
							w23 = -52;
						}
					}
				}
			}
		}
	}
	int w24;
	if (cons != 1) {
		if (rel_time < 3144) {
			if (rel_time < 2967) {
				if (rel_time < 2818) {
					if (rel_time < 2759) {
						if (rel_time < 2548) {
							w24 = 40;
						} else {
							w24 = -82;
						}
					} else {
						if (rel_time < 2789) {
							w24 = 982;
						} else {
							w24 = 53;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w24 = -396;
						} else {
							w24 = -32;
						}
					} else {
						if (hops < 2) {
							w24 = 442;
						} else {
							w24 = 61;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 3085) {
							w24 = 571;
						} else {
							w24 = -851;
						}
					} else {
						if (rel_time < 2996) {
							w24 = -108;
						} else {
							w24 = 222;
						}
					}
				} else {
					if (rel_time < 3025) {
						if (hops < 2) {
							w24 = -203;
						} else {
							w24 = -1789;
						}
					} else {
						if (hops < 2) {
							w24 = -291;
						} else {
							w24 = 303;
						}
					}
				}
			}
		} else {
			if (rel_time < 3171) {
				if (hops < 3) {
					if (hops < 2) {
						w24 = -719;
					} else {
						w24 = -609;
					}
				} else {
					if (hops < 4) {
						w24 = -810;
					} else {
						w24 = -893;
					}
				}
			} else {
				if (rel_time < 3886) {
					if (rel_time < 3797) {
						if (rel_time < 3381) {
							w24 = 58;
						} else {
							w24 = -84;
						}
					} else {
						if (cons != 3) {
							w24 = -408;
						} else {
							w24 = 991;
						}
					}
				} else {
					if (rel_time < 4006) {
						if (cons != 3) {
							w24 = 315;
						} else {
							w24 = 998;
						}
					} else {
						if (rel_time < 4065) {
							w24 = -294;
						} else {
							w24 = 1;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4154) {
			if (rel_time < 4004) {
				if (rel_time < 3857) {
					if (rel_time < 3708) {
						if (rel_time < 3560) {
							w24 = -3;
						} else {
							w24 = -681;
						}
					} else {
						if (hops < 3) {
							w24 = 42;
						} else {
							w24 = 1326;
						}
					}
				} else {
					if (rel_time < 3976) {
						w24 = -2230;
					} else {
						if (hops < 2) {
							w24 = -1165;
						} else {
							w24 = -832;
						}
					}
				}
			} else {
				if (rel_time < 4124) {
					w24 = 3167;
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w24 = 1075;
						} else {
							w24 = 1142;
						}
					} else {
						if (hops < 4) {
							w24 = 694;
						} else {
							w24 = 821;
						}
					}
				}
			}
		} else {
			if (rel_time < 4303) {
				if (rel_time < 4273) {
					if (hops < 3) {
						w24 = -1605;
					} else {
						w24 = -1971;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w24 = -917;
						} else {
							w24 = -850;
						}
					} else {
						if (hops < 4) {
							w24 = -505;
						} else {
							w24 = -441;
						}
					}
				}
			} else {
				if (rel_time < 4451) {
					if (hops < 4) {
						if (hops < 2) {
							w24 = 398;
						} else {
							w24 = 475;
						}
					} else {
						if (rel_time < 4422) {
							w24 = -25;
						} else {
							w24 = -45;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 4570) {
							w24 = -429;
						} else {
							w24 = -509;
						}
					} else {
						if (hops < 4) {
							w24 = -213;
						} else {
							w24 = -323;
						}
					}
				}
			}
		}
	}
	int w25;
	if (rel_time < 10024) {
		if (rel_time < 9977) {
			if (rel_time < 9931) {
				if (rel_time < 9836) {
					if (rel_time < 9638) {
						if (rel_time < 9625) {
							w25 = 3;
						} else {
							w25 = 645;
						}
					} else {
						if (prod != 4) {
							w25 = -1147;
						} else {
							w25 = 963;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 9884) {
							w25 = -386;
						} else {
							w25 = -748;
						}
					} else {
						if (hops < 3) {
							w25 = 1231;
						} else {
							w25 = 1171;
						}
					}
				}
			} else {
				if (prod != 2) {
					w25 = 1736;
				} else {
					if (hops < 2) {
						w25 = -974;
					} else {
						w25 = -1039;
					}
				}
			}
		} else {
			if (prod != 3) {
				w25 = -744;
			} else {
				if (hops < 3) {
					w25 = 615;
				} else {
					w25 = 562;
				}
			}
		}
	} else {
		if (rel_time < 10038) {
			if (hops < 3) {
				w25 = -749;
			} else {
				w25 = -790;
			}
		} else {
			if (prod != 1) {
				if (rel_time < 10235) {
					if (prod != 4) {
						if (rel_time < 10189) {
							w25 = 518;
						} else {
							w25 = 774;
						}
					} else {
						w25 = -771;
					}
				} else {
					if (rel_time < 10542) {
						if (prod != 3) {
							w25 = 73;
						} else {
							w25 = -1285;
						}
					} else {
						if (rel_time < 10879) {
							w25 = 449;
						} else {
							w25 = -57;
						}
					}
				}
			} else {
				if (rel_time < 10832) {
					if (rel_time < 10542) {
						if (rel_time < 10235) {
							w25 = -688;
						} else {
							w25 = 603;
						}
					} else {
						if (rel_time < 10786) {
							w25 = -2372;
						} else {
							w25 = -805;
						}
					}
				} else {
					if (rel_time < 11139) {
						if (hops < 3) {
							w25 = 283;
						} else {
							w25 = 738;
						}
					} else {
						if (rel_time < 11444) {
							w25 = -361;
						} else {
							w25 = 92;
						}
					}
				}
			}
		}
	}
	int w26;
	if (prod != 3) {
		if (rel_time < 6216) {
			if (rel_time < 6013) {
				if (rel_time < 5711) {
					if (rel_time < 5409) {
						if (rel_time < 5360) {
							w26 = 2;
						} else {
							w26 = -738;
						}
					} else {
						if (prod != 0) {
							w26 = 1215;
						} else {
							w26 = -2091;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 1) {
							w26 = -522;
						} else {
							w26 = -1176;
						}
					} else {
						if (hops < 2) {
							w26 = 670;
						} else {
							w26 = 793;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 6062) {
						w26 = 1193;
					} else {
						if (rel_time < 6110) {
							w26 = 2084;
						} else {
							w26 = 1292;
						}
					}
				} else {
					w26 = -2027;
				}
			}
		} else {
			if (rel_time < 6262) {
				if (hops < 4) {
					if (hops < 2) {
						w26 = -1331;
					} else {
						w26 = -1256;
					}
				} else {
					w26 = -2073;
				}
			} else {
				if (rel_time < 6268) {
					if (hops < 4) {
						w26 = 961;
					} else {
						w26 = 2140;
					}
				} else {
					if (rel_time < 6413) {
						if (prod != 1) {
							w26 = -1259;
						} else {
							w26 = 3045;
						}
					} else {
						if (prod != 0) {
							w26 = -49;
						} else {
							w26 = 95;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8219) {
			if (rel_time < 7317) {
				if (rel_time < 7013) {
					if (rel_time < 6716) {
						if (rel_time < 6668) {
							w26 = 43;
						} else {
							w26 = -2282;
						}
					} else {
						if (hops < 2) {
							w26 = 843;
						} else {
							w26 = 779;
						}
					}
				} else {
					if (hops < 2) {
						w26 = -1315;
					} else {
						w26 = -1261;
					}
				}
			} else {
				if (rel_time < 7620) {
					if (rel_time < 7571) {
						w26 = 1363;
					} else {
						if (hops < 4) {
							w26 = 2131;
						} else {
							w26 = 2294;
						}
					}
				} else {
					if (rel_time < 7915) {
						if (hops < 4) {
							w26 = -459;
						} else {
							w26 = -1676;
						}
					} else {
						if (hops < 4) {
							w26 = 1268;
						} else {
							w26 = 1526;
						}
					}
				}
			}
		} else {
			if (rel_time < 8524) {
				w26 = -1292;
			} else {
				if (rel_time < 8829) {
					if (rel_time < 8781) {
						if (rel_time < 8770) {
							w26 = 1268;
						} else {
							w26 = 1061;
						}
					} else {
						w26 = 2907;
					}
				} else {
					if (rel_time < 9075) {
						w26 = -3003;
					} else {
						if (rel_time < 9122) {
							w26 = -664;
						} else {
							w26 = 73;
						}
					}
				}
			}
		}
	}
	int w27;
	if (prod != 4) {
		if (rel_time < 10879) {
			if (rel_time < 10542) {
				if (rel_time < 10284) {
					if (rel_time < 8676) {
						if (rel_time < 8371) {
							w27 = 4;
						} else {
							w27 = -232;
						}
					} else {
						if (rel_time < 9579) {
							w27 = 220;
						} else {
							w27 = -47;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 2) {
							w27 = -383;
						} else {
							w27 = -686;
						}
					} else {
						if (rel_time < 10495) {
							w27 = 260;
						} else {
							w27 = 1142;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 10588) {
						if (prod != 2) {
							w27 = 908;
						} else {
							w27 = -1026;
						}
					} else {
						if (hops < 2) {
							w27 = 551;
						} else {
							w27 = 836;
						}
					}
				} else {
					if (rel_time < 10786) {
						if (hops < 3) {
							w27 = -1116;
						} else {
							w27 = -1390;
						}
					} else {
						if (hops < 2) {
							w27 = -1069;
						} else {
							w27 = -184;
						}
					}
				}
			}
		} else {
			if (rel_time < 11045) {
				if (rel_time < 10941) {
					if (hops < 2) {
						if (rel_time < 10896) {
							w27 = -769;
						} else {
							w27 = -2624;
						}
					} else {
						w27 = -742;
					}
				} else {
					if (hops < 2) {
						w27 = -372;
					} else {
						if (hops < 3) {
							w27 = -524;
						} else {
							w27 = -593;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 11352) {
						if (prod != 3) {
							w27 = 109;
						} else {
							w27 = 868;
						}
					} else {
						if (rel_time < 11687) {
							w27 = -270;
						} else {
							w27 = 83;
						}
					}
				} else {
					if (rel_time < 11185) {
						if (hops < 2) {
							w27 = -1404;
						} else {
							w27 = -1028;
						}
					} else {
						if (hops < 4) {
							w27 = 135;
						} else {
							w27 = -41;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10740) {
			if (rel_time < 10434) {
				if (rel_time < 10142) {
					if (rel_time < 8030) {
						if (rel_time < 7725) {
							w27 = -68;
						} else {
							w27 = 880;
						}
					} else {
						if (rel_time < 8219) {
							w27 = -1796;
						} else {
							w27 = -162;
						}
					}
				} else {
					if (hops < 2) {
						w27 = 733;
					} else {
						w27 = 782;
					}
				}
			} else {
				if (rel_time < 10635) {
					if (hops < 2) {
						w27 = -985;
					} else {
						w27 = -1056;
					}
				} else {
					w27 = -1701;
				}
			}
		} else {
			if (rel_time < 11045) {
				if (rel_time < 10941) {
					if (hops < 2) {
						w27 = 641;
					} else {
						w27 = 900;
					}
				} else {
					if (hops < 2) {
						w27 = 632;
					} else {
						w27 = 2107;
					}
				}
			} else {
				if (rel_time < 11231) {
					w27 = -2352;
				} else {
					if (rel_time < 11642) {
						if (rel_time < 11335) {
							w27 = -282;
						} else {
							w27 = 602;
						}
					} else {
						if (rel_time < 11948) {
							w27 = -408;
						} else {
							w27 = 107;
						}
					}
				}
			}
		}
	}
	int w28;
	if (rel_time < 11991) {
		if (rel_time < 11687) {
			if (hops < 4) {
				if (rel_time < 2611) {
					if (rel_time < 2491) {
						if (rel_time < 2282) {
							w28 = -28;
						} else {
							w28 = 69;
						}
					} else {
						if (hops < 3) {
							w28 = -349;
						} else {
							w28 = 35;
						}
					}
				} else {
					if (rel_time < 2728) {
						if (cons != 1) {
							w28 = 114;
						} else {
							w28 = 658;
						}
					} else {
						if (rel_time < 2876) {
							w28 = -144;
						} else {
							w28 = -1;
						}
					}
				}
			} else {
				if (rel_time < 5614) {
					if (prod != 4) {
						if (rel_time < 5460) {
							w28 = 71;
						} else {
							w28 = -641;
						}
					} else {
						if (rel_time < 5010) {
							w28 = 748;
						} else {
							w28 = 296;
						}
					}
				} else {
					if (rel_time < 5663) {
						if (prod != 0) {
							w28 = 1344;
						} else {
							w28 = -1218;
						}
					} else {
						if (rel_time < 11642) {
							w28 = 4;
						} else {
							w28 = -557;
						}
					}
				}
			}
		} else {
			if (prod != 4) {
				if (prod != 2) {
					if (prod != 1) {
						if (hops < 2) {
							w28 = 170;
						} else {
							w28 = 362;
						}
					} else {
						if (rel_time < 11734) {
							w28 = 153;
						} else {
							w28 = -182;
						}
					}
				} else {
					if (rel_time < 11752) {
						if (hops < 3) {
							w28 = 152;
						} else {
							w28 = -196;
						}
					} else {
						if (hops < 2) {
							w28 = -458;
						} else {
							w28 = -883;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11844) {
						w28 = 226;
					} else {
						w28 = -78;
					}
				} else {
					if (rel_time < 11844) {
						if (hops < 3) {
							w28 = -144;
						} else {
							w28 = -327;
						}
					} else {
						if (hops < 3) {
							w28 = -465;
						} else {
							w28 = -653;
						}
					}
				}
			}
		}
	} else {
		if (prod != 3) {
			if (prod != 1) {
				if (hops < 2) {
					if (rel_time < 12075) {
						if (rel_time < 12033) {
							w28 = -18;
						} else {
							w28 = -155;
						}
					} else {
						if (rel_time < 12117) {
							w28 = 150;
						} else {
							w28 = 52;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 12033) {
							w28 = 249;
						} else {
							w28 = 153;
						}
					} else {
						if (rel_time < 12117) {
							w28 = 118;
						} else {
							w28 = -40;
						}
					}
				}
			} else {
				if (hops < 2) {
					w28 = 8;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w28 = -283;
						} else {
							w28 = -411;
						}
					} else {
						w28 = -36;
					}
				}
			}
		} else {
			if (rel_time < 12075) {
				if (hops < 2) {
					w28 = -447;
				} else {
					w28 = -1309;
				}
			} else {
				if (hops < 2) {
					w28 = -25;
				} else {
					if (hops < 3) {
						w28 = -338;
					} else {
						if (hops < 4) {
							w28 = -102;
						} else {
							w28 = -76;
						}
					}
				}
			}
		}
	}
	int w29;
	if (cons != 1) {
		if (prod != 1) {
			if (rel_time < 7924) {
				if (rel_time < 6518) {
					if (rel_time < 6216) {
						if (rel_time < 5759) {
							w29 = -2;
						} else {
							w29 = 227;
						}
					} else {
						if (prod != 3) {
							w29 = -554;
						} else {
							w29 = 635;
						}
					}
				} else {
					if (rel_time < 6662) {
						if (rel_time < 6614) {
							w29 = 1606;
						} else {
							w29 = 851;
						}
					} else {
						if (rel_time < 7725) {
							w29 = -39;
						} else {
							w29 = 266;
						}
					}
				}
			} else {
				if (rel_time < 8124) {
					if (prod != 4) {
						if (hops < 4) {
							w29 = -661;
						} else {
							w29 = -1008;
						}
					} else {
						if (hops < 4) {
							w29 = 336;
						} else {
							w29 = 1120;
						}
					}
				} else {
					if (rel_time < 8428) {
						if (prod != 4) {
							w29 = 341;
						} else {
							w29 = -557;
						}
					} else {
						if (rel_time < 9332) {
							w29 = -120;
						} else {
							w29 = 16;
						}
					}
				}
			}
		} else {
			if (rel_time < 4792) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w29 = -930;
						} else {
							w29 = -1056;
						}
					} else {
						w29 = -895;
					}
				} else {
					w29 = -353;
				}
			} else {
				if (rel_time < 5109) {
					if (hops < 3) {
						if (hops < 2) {
							w29 = 885;
						} else {
							w29 = 735;
						}
					} else {
						if (hops < 4) {
							w29 = 1483;
						} else {
							w29 = 572;
						}
					}
				} else {
					if (rel_time < 7820) {
						if (rel_time < 6316) {
							w29 = 112;
						} else {
							w29 = -503;
						}
					} else {
						if (rel_time < 8124) {
							w29 = 839;
						} else {
							w29 = 40;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3114) {
			if (rel_time < 2669) {
				if (rel_time < 2519) {
					if (rel_time < 2373) {
						if (rel_time < 1644) {
							w29 = -223;
						} else {
							w29 = 123;
						}
					} else {
						if (hops < 2) {
							w29 = -15;
						} else {
							w29 = -507;
						}
					}
				} else {
					if (rel_time < 2640) {
						if (hops < 4) {
							w29 = 879;
						} else {
							w29 = -163;
						}
					} else {
						if (hops < 2) {
							w29 = 360;
						} else {
							w29 = -9;
						}
					}
				}
			} else {
				if (rel_time < 2789) {
					if (hops < 2) {
						w29 = -1487;
					} else {
						if (hops < 4) {
							w29 = -979;
						} else {
							w29 = -323;
						}
					}
				} else {
					if (rel_time < 2964) {
						if (rel_time < 2818) {
							w29 = -444;
						} else {
							w29 = 209;
						}
					} else {
						if (rel_time < 3085) {
							w29 = -1341;
						} else {
							w29 = -310;
						}
					}
				}
			}
		} else {
			if (rel_time < 3234) {
				if (hops < 2) {
					w29 = 730;
				} else {
					if (hops < 3) {
						w29 = 1151;
					} else {
						if (hops < 4) {
							w29 = 1027;
						} else {
							w29 = 833;
						}
					}
				}
			} else {
				if (rel_time < 3560) {
					if (rel_time < 3530) {
						if (rel_time < 3263) {
							w29 = 210;
						} else {
							w29 = -185;
						}
					} else {
						if (hops < 3) {
							w29 = 416;
						} else {
							w29 = 1267;
						}
					}
				} else {
					if (rel_time < 3679) {
						if (hops < 3) {
							w29 = -743;
						} else {
							w29 = -1391;
						}
					} else {
						if (rel_time < 4004) {
							w29 = -178;
						} else {
							w29 = 43;
						}
					}
				}
			}
		}
	}
	int w30;
	if (cons != 4) {
		if (rel_time < 6614) {
			if (rel_time < 6567) {
				if (prod != 0) {
					if (rel_time < 6413) {
						if (rel_time < 6110) {
							w30 = -12;
						} else {
							w30 = 202;
						}
					} else {
						if (rel_time < 6518) {
							w30 = -1054;
						} else {
							w30 = -2148;
						}
					}
				} else {
					if (rel_time < 6262) {
						if (rel_time < 5360) {
							w30 = 280;
						} else {
							w30 = -417;
						}
					} else {
						if (rel_time < 6518) {
							w30 = 1695;
						} else {
							w30 = 648;
						}
					}
				}
			} else {
				if (prod != 1) {
					w30 = 1810;
				} else {
					if (hops < 2) {
						w30 = -1220;
					} else {
						w30 = -1130;
					}
				}
			}
		} else {
			if (rel_time < 7124) {
				if (prod != 1) {
					if (rel_time < 7118) {
						if (prod != 0) {
							w30 = 75;
						} else {
							w30 = -686;
						}
					} else {
						if (hops < 2) {
							w30 = 412;
						} else {
							w30 = 590;
						}
					}
				} else {
					if (hops < 3) {
						w30 = 1184;
					} else {
						w30 = 1120;
					}
				}
			} else {
				if (rel_time < 7173) {
					if (prod != 0) {
						if (hops < 2) {
							w30 = -975;
						} else {
							w30 = -890;
						}
					} else {
						if (hops < 3) {
							w30 = 604;
						} else {
							w30 = 702;
						}
					}
				} else {
					if (rel_time < 7516) {
						if (rel_time < 7469) {
							w30 = -41;
						} else {
							w30 = 973;
						}
					} else {
						if (rel_time < 7524) {
							w30 = -499;
						} else {
							w30 = -1;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4540) {
			if (rel_time < 4244) {
				if (rel_time < 3916) {
					if (rel_time < 3797) {
						if (rel_time < 3470) {
							w30 = 24;
						} else {
							w30 = -82;
						}
					} else {
						if (hops < 3) {
							w30 = -1643;
						} else {
							w30 = -204;
						}
					}
				} else {
					if (rel_time < 4095) {
						if (rel_time < 3946) {
							w30 = 120;
						} else {
							w30 = 536;
						}
					} else {
						if (hops < 2) {
							w30 = -48;
						} else {
							w30 = -8;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 4392) {
							w30 = -106;
						} else {
							w30 = -39;
						}
					} else {
						if (rel_time < 4510) {
							w30 = -91;
						} else {
							w30 = -130;
						}
					}
				} else {
					if (rel_time < 4392) {
						if (rel_time < 4361) {
							w30 = -181;
						} else {
							w30 = -262;
						}
					} else {
						if (rel_time < 4510) {
							w30 = -37;
						} else {
							w30 = -150;
						}
					}
				}
			}
		} else {
			if (rel_time < 4634) {
				if (hops < 3) {
					if (hops < 2) {
						w30 = 643;
					} else {
						w30 = 451;
					}
				} else {
					if (hops < 4) {
						w30 = 689;
					} else {
						w30 = 866;
					}
				}
			} else {
				if (hops < 2) {
					w30 = 291;
				} else {
					if (hops < 3) {
						w30 = 176;
					} else {
						if (hops < 4) {
							w30 = 255;
						} else {
							w30 = 280;
						}
					}
				}
			}
		}
	}
	int w31;
	if (rel_time < 4244) {
		if (rel_time < 4124) {
			if (rel_time < 4035) {
				if (rel_time < 4004) {
					if (rel_time < 3976) {
						if (cons != 3) {
							w31 = -7;
						} else {
							w31 = 83;
						}
					} else {
						if (cons != 1) {
							w31 = 397;
						} else {
							w31 = -378;
						}
					}
				} else {
					if (cons != 2) {
						if (hops < 2) {
							w31 = -1100;
						} else {
							w31 = -780;
						}
					} else {
						if (rel_time < 4006) {
							w31 = 350;
						} else {
							w31 = 667;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (cons != 1) {
						if (rel_time < 4065) {
							w31 = 408;
						} else {
							w31 = -167;
						}
					} else {
						w31 = 1563;
					}
				} else {
					if (hops < 2) {
						w31 = -1308;
					} else {
						if (hops < 4) {
							w31 = -988;
						} else {
							w31 = -834;
						}
					}
				}
			}
		} else {
			if (cons != 3) {
				if (cons != 1) {
					if (cons != 0) {
						if (rel_time < 4183) {
							w31 = -90;
						} else {
							w31 = -10;
						}
					} else {
						if (hops < 2) {
							w31 = 539;
						} else {
							w31 = 32;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w31 = 519;
						} else {
							w31 = 552;
						}
					} else {
						if (hops < 4) {
							w31 = 328;
						} else {
							w31 = 357;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 4183) {
						if (hops < 2) {
							w31 = 706;
						} else {
							w31 = 797;
						}
					} else {
						if (hops < 2) {
							w31 = 844;
						} else {
							w31 = 890;
						}
					}
				} else {
					if (rel_time < 4183) {
						if (hops < 4) {
							w31 = 315;
						} else {
							w31 = 411;
						}
					} else {
						w31 = 489;
					}
				}
			}
		}
	} else {
		if (rel_time < 4420) {
			if (cons != 3) {
				if (cons != 1) {
					if (rel_time < 4273) {
						if (hops < 2) {
							w31 = 527;
						} else {
							w31 = 9;
						}
					} else {
						if (cons != 0) {
							w31 = -83;
						} else {
							w31 = -256;
						}
					}
				} else {
					if (rel_time < 4273) {
						if (hops < 3) {
							w31 = -824;
						} else {
							w31 = -1018;
						}
					} else {
						if (hops < 3) {
							w31 = -461;
						} else {
							w31 = -273;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 4332) {
						w31 = -780;
					} else {
						if (hops < 2) {
							w31 = -723;
						} else {
							w31 = -677;
						}
					}
				} else {
					if (rel_time < 4332) {
						w31 = -449;
					} else {
						if (hops < 4) {
							w31 = -402;
						} else {
							w31 = -369;
						}
					}
				}
			}
		} else {
			if (rel_time < 4510) {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 2) {
							w31 = 111;
						} else {
							w31 = -92;
						}
					} else {
						if (hops < 4) {
							w31 = 206;
						} else {
							w31 = -73;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 4480) {
							w31 = 1138;
						} else {
							w31 = 918;
						}
					} else {
						if (hops < 3) {
							w31 = 609;
						} else {
							w31 = 469;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (cons != 2) {
						if (rel_time < 5312) {
							w31 = -62;
						} else {
							w31 = 2;
						}
					} else {
						if (rel_time < 4590) {
							w31 = 1868;
						} else {
							w31 = 15;
						}
					}
				} else {
					if (rel_time < 4613) {
						if (hops < 4) {
							w31 = 76;
						} else {
							w31 = 519;
						}
					} else {
						if (hops < 3) {
							w31 = -867;
						} else {
							w31 = -640;
						}
					}
				}
			}
		}
	}
	int w32;
	if (rel_time < 1420) {
		if (cons != 1) {
			if (hops < 4) {
				if (rel_time < 1347) {
					if (cons != 3) {
						if (hops < 3) {
							w32 = 42;
						} else {
							w32 = -10;
						}
					} else {
						if (hops < 2) {
							w32 = -94;
						} else {
							w32 = -184;
						}
					}
				} else {
					if (hops < 2) {
						if (cons != 3) {
							w32 = 24;
						} else {
							w32 = 47;
						}
					} else {
						if (cons != 3) {
							w32 = 211;
						} else {
							w32 = 132;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (rel_time < 1168) {
						w32 = -143;
					} else {
						if (cons != 2) {
							w32 = -198;
						} else {
							w32 = -178;
						}
					}
				} else {
					w32 = 389;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w32 = 188;
					} else {
						w32 = 203;
					}
				} else {
					w32 = 285;
				}
			} else {
				w32 = 19;
			}
		}
	} else {
		if (rel_time < 1644) {
			if (cons != 1) {
				if (rel_time < 1571) {
					if (hops < 3) {
						if (rel_time < 1501) {
							w32 = 21;
						} else {
							w32 = 87;
						}
					} else {
						if (hops < 4) {
							w32 = -10;
						} else {
							w32 = -103;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w32 = 234;
						} else {
							w32 = 285;
						}
					} else {
						if (hops < 4) {
							w32 = 155;
						} else {
							w32 = 287;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w32 = -405;
						} else {
							w32 = -335;
						}
					} else {
						if (rel_time < 1573) {
							w32 = -495;
						} else {
							w32 = -622;
						}
					}
				} else {
					w32 = -92;
				}
			}
		} else {
			if (rel_time < 2035) {
				if (cons != 1) {
					if (rel_time < 1984) {
						if (size < 125) {
							w32 = -311;
						} else {
							w32 = 20;
						}
					} else {
						if (cons != 3) {
							w32 = -267;
						} else {
							w32 = 570;
						}
					}
				} else {
					if (rel_time < 1888) {
						if (hops < 3) {
							w32 = 833;
						} else {
							w32 = 910;
						}
					} else {
						if (hops < 4) {
							w32 = 523;
						} else {
							w32 = 65;
						}
					}
				}
			} else {
				if (rel_time < 2282) {
					if (cons != 2) {
						if (cons != 0) {
							w32 = -440;
						} else {
							w32 = 218;
						}
					} else {
						if (hops < 2) {
							w32 = 191;
						} else {
							w32 = 510;
						}
					}
				} else {
					if (rel_time < 2312) {
						if (hops < 2) {
							w32 = 9;
						} else {
							w32 = 366;
						}
					} else {
						if (cons != 3) {
							w32 = -3;
						} else {
							w32 = 32;
						}
					}
				}
			}
		}
	}
	return (179170 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32) >> 8;
}
