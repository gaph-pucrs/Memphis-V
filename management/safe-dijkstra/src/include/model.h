#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int model(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 3321) {
				if (hops < 3) {
					if (rel_time < 1243) {
						if (cons != 2) {
							w0 = -19175;
						} else {
							w0 = -21357;
						}
					} else {
						if (hops < 2) {
							w0 = -22693;
						} else {
							w0 = -21795;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1243) {
							w0 = -18538;
						} else {
							w0 = -20902;
						}
					} else {
						if (rel_time < 1243) {
							w0 = -17396;
						} else {
							w0 = -19774;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (hops < 3) {
						if (hops < 2) {
							w0 = -18595;
						} else {
							w0 = -17696;
						}
					} else {
						if (hops < 4) {
							w0 = -16802;
						} else {
							w0 = -15685;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w0 = -15179;
						} else {
							w0 = -14277;
						}
					} else {
						if (hops < 4) {
							w0 = -13383;
						} else {
							w0 = -12248;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1158) {
						w0 = -26449;
					} else {
						if (rel_time < 1301) {
							w0 = -24169;
						} else {
							w0 = -25385;
						}
					}
				} else {
					if (rel_time < 3159) {
						if (rel_time < 3016) {
							w0 = -24464;
						} else {
							w0 = -25546;
						}
					} else {
						w0 = -23376;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 3159) {
						w0 = -23634;
					} else {
						w0 = -22387;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 3159) {
							w0 = -22751;
						} else {
							w0 = -21601;
						}
					} else {
						w0 = -21767;
					}
				}
			}
		}
	} else {
		if (rel_time < 372) {
			if (rel_time < 63) {
				if (hops < 3) {
					if (hops < 2) {
						w0 = 17211;
					} else {
						w0 = 18041;
					}
				} else {
					w0 = 19460;
				}
			} else {
				if (cons != 2) {
					if (rel_time < 297) {
						if (hops < 3) {
							w0 = 35360;
						} else {
							w0 = 37277;
						}
					} else {
						if (hops < 3) {
							w0 = 31921;
						} else {
							w0 = 33831;
						}
					}
				} else {
					if (hops < 3) {
						w0 = 29593;
					} else {
						w0 = 31508;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3760) {
					if (rel_time < 1130) {
						if (rel_time < 686) {
							w0 = 14983;
						} else {
							w0 = 9089;
						}
					} else {
						if (prod != 0) {
							w0 = -1406;
						} else {
							w0 = 8653;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3761) {
							w0 = 12387;
						} else {
							w0 = 10591;
						}
					} else {
						if (rel_time < 3761) {
							w0 = 13280;
						} else {
							w0 = 11498;
						}
					}
				}
			} else {
				if (rel_time < 3760) {
					if (rel_time < 3462) {
						if (rel_time < 686) {
							w0 = 16909;
						} else {
							w0 = 10831;
						}
					} else {
						if (prod != 0) {
							w0 = 448;
						} else {
							w0 = 10961;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 10416) {
							w0 = 12333;
						} else {
							w0 = 13799;
						}
					} else {
						if (hops < 5) {
							w0 = 13227;
						} else {
							w0 = 14121;
						}
					}
				}
			}
		}
	}
	int w1;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 3321) {
				if (hops < 3) {
					if (rel_time < 3273) {
						if (rel_time < 3130) {
							w1 = -11159;
						} else {
							w1 = -9241;
						}
					} else {
						w1 = -14140;
					}
				} else {
					if (rel_time < 3273) {
						if (rel_time < 3130) {
							w1 = -10190;
						} else {
							w1 = -8263;
						}
					} else {
						w1 = -13166;
					}
				}
			} else {
				if (cons != 3) {
					if (hops < 3) {
						if (rel_time < 3342) {
							w1 = -8690;
						} else {
							w1 = -9498;
						}
					} else {
						if (rel_time < 3342) {
							w1 = -7744;
						} else {
							w1 = -8524;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w1 = -7597;
						} else {
							w1 = -7147;
						}
					} else {
						if (hops < 5) {
							w1 = -6567;
						} else {
							w1 = -5470;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 3159) {
						if (rel_time < 3016) {
							w1 = -12683;
						} else {
							w1 = -13838;
						}
					} else {
						w1 = -11660;
					}
				} else {
					if (rel_time < 1158) {
						w1 = -13278;
					} else {
						if (rel_time < 1301) {
							w1 = -11126;
						} else {
							w1 = -12241;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1158) {
						w1 = -12720;
					} else {
						if (rel_time < 1301) {
							w1 = -10682;
						} else {
							w1 = -11795;
						}
					}
				} else {
					if (rel_time < 1158) {
						w1 = -12289;
					} else {
						if (rel_time < 1301) {
							w1 = -10075;
						} else {
							w1 = -11241;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 372) {
			if (rel_time < 63) {
				if (hops < 4) {
					if (hops < 2) {
						w1 = 8614;
					} else {
						w1 = 9097;
					}
				} else {
					w1 = 10298;
				}
			} else {
				if (cons != 2) {
					if (rel_time < 297) {
						if (hops < 2) {
							w1 = 17263;
						} else {
							w1 = 18444;
						}
					} else {
						if (hops < 4) {
							w1 = 16069;
						} else {
							w1 = 17483;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w1 = 14387;
						} else {
							w1 = 15244;
						}
					} else {
						w1 = 16318;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3760) {
					if (rel_time < 918) {
						if (cons != 0) {
							w1 = 7185;
						} else {
							w1 = 4778;
						}
					} else {
						if (prod != 3) {
							w1 = 2444;
						} else {
							w1 = -2650;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 10416) {
							w1 = 5290;
						} else {
							w1 = 6840;
						}
					} else {
						if (rel_time < 10416) {
							w1 = 5743;
						} else {
							w1 = 7216;
						}
					}
				}
			} else {
				if (rel_time < 3760) {
					if (rel_time < 918) {
						if (cons != 0) {
							w1 = 8194;
						} else {
							w1 = 5741;
						}
					} else {
						if (prod != 1) {
							w1 = 3421;
						} else {
							w1 = -2189;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3898) {
							w1 = 6882;
						} else {
							w1 = 6154;
						}
					} else {
						if (hops < 5) {
							w1 = 6613;
						} else {
							w1 = 7061;
						}
					}
				}
			}
		}
	}
	int w2;
	if (size < 38) {
		if (cons != 0) {
			if (hops < 2) {
				if (rel_time < 3321) {
					if (rel_time < 1273) {
						if (cons != 2) {
							w2 = -4545;
						} else {
							w2 = -5526;
						}
					} else {
						if (rel_time < 1386) {
							w2 = -8082;
						} else {
							w2 = -5698;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 3342) {
							w2 = -4559;
						} else {
							w2 = -4955;
						}
					} else {
						w2 = -3802;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 1273) {
						if (cons != 2) {
							w2 = -3711;
						} else {
							w2 = -5094;
						}
					} else {
						if (rel_time < 1386) {
							w2 = -7580;
						} else {
							w2 = -5131;
						}
					}
				} else {
					if (rel_time < 1273) {
						if (cons != 2) {
							w2 = -2526;
						} else {
							w2 = -4402;
						}
					} else {
						if (rel_time < 1386) {
							w2 = -6440;
						} else {
							w2 = -4003;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1444) {
					if (rel_time < 1301) {
						if (rel_time < 1158) {
							w2 = -6789;
						} else {
							w2 = -5675;
						}
					} else {
						w2 = -7415;
					}
				} else {
					if (rel_time < 1587) {
						if (hops < 2) {
							w2 = -5361;
						} else {
							w2 = -5094;
						}
					} else {
						if (rel_time < 1730) {
							w2 = -7324;
						} else {
							w2 = -6129;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 1444) {
						if (rel_time < 1301) {
							w2 = -5793;
						} else {
							w2 = -6922;
						}
					} else {
						if (rel_time < 1587) {
							w2 = -4748;
						} else {
							w2 = -5826;
						}
					}
				} else {
					if (rel_time < 3159) {
						if (rel_time < 3016) {
							w2 = -5266;
						} else {
							w2 = -6339;
						}
					} else {
						w2 = -4166;
					}
				}
			}
		}
	} else {
		if (rel_time < 438) {
			if (cons != 0) {
				if (cons != 2) {
					if (hops < 4) {
						if (rel_time < 297) {
							w2 = 8806;
						} else {
							w2 = 8038;
						}
					} else {
						if (rel_time < 297) {
							w2 = 9993;
						} else {
							w2 = 8756;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w2 = 7201;
						} else {
							w2 = 7627;
						}
					} else {
						if (hops < 5) {
							w2 = 7944;
						} else {
							w2 = 8837;
						}
					}
				}
			} else {
				if (rel_time < 63) {
					if (hops < 4) {
						if (hops < 2) {
							w2 = 4311;
						} else {
							w2 = 4551;
						}
					} else {
						if (hops < 5) {
							w2 = 4962;
						} else {
							w2 = 5788;
						}
					}
				} else {
					if (hops < 2) {
						w2 = 5353;
					} else {
						if (hops < 4) {
							w2 = 6056;
						} else {
							w2 = 6917;
						}
					}
				}
			}
		} else {
			if (rel_time < 3715) {
				if (rel_time < 3462) {
					if (prod != 1) {
						if (cons != 0) {
							w2 = 3201;
						} else {
							w2 = 806;
						}
					} else {
						if (hops < 3) {
							w2 = -3916;
						} else {
							w2 = -6200;
						}
					}
				} else {
					if (prod != 3) {
						if (prod != 1) {
							w2 = 307;
						} else {
							w2 = -2121;
						}
					} else {
						if (hops < 3) {
							w2 = -1326;
						} else {
							w2 = -3443;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 10257) {
							w2 = 2668;
						} else {
							w2 = 2243;
						}
					} else {
						if (rel_time < 3761) {
							w2 = 3850;
						} else {
							w2 = 2872;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 10374) {
							w2 = 3101;
						} else {
							w2 = 2283;
						}
					} else {
						if (rel_time < 3807) {
							w2 = 4628;
						} else {
							w2 = 3348;
						}
					}
				}
			}
		}
	}
	int w3;
	if (size < 38) {
		if (rel_time < 3159) {
			if (rel_time < 3016) {
				if (rel_time < 2873) {
					if (rel_time < 2730) {
						if (rel_time < 2587) {
							w3 = -2836;
						} else {
							w3 = -936;
						}
					} else {
						if (cons != 3) {
							w3 = -4155;
						} else {
							w3 = -5767;
						}
					}
				} else {
					if (rel_time < 2901) {
						if (hops < 4) {
							w3 = 372;
						} else {
							w3 = 834;
						}
					} else {
						if (cons != 3) {
							w3 = -1826;
						} else {
							w3 = 195;
						}
					}
				}
			} else {
				if (rel_time < 3101) {
					if (cons != 2) {
						if (hops < 4) {
							w3 = -5856;
						} else {
							w3 = -5410;
						}
					} else {
						if (hops < 4) {
							w3 = -3715;
						} else {
							w3 = -3272;
						}
					}
				} else {
					if (rel_time < 3130) {
						if (hops < 4) {
							w3 = -3467;
						} else {
							w3 = -3016;
						}
					} else {
						if (hops < 5) {
							w3 = -3820;
						} else {
							w3 = -3192;
						}
					}
				}
			}
		} else {
			if (cons != 3) {
				if (rel_time < 3187) {
					if (hops < 4) {
						if (hops < 2) {
							w3 = -992;
						} else {
							w3 = -839;
						}
					} else {
						if (hops < 5) {
							w3 = -545;
						} else {
							w3 = -209;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 3302) {
							w3 = -2771;
						} else {
							w3 = -1892;
						}
					} else {
						if (hops < 4) {
							w3 = -4341;
						} else {
							w3 = -3891;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 3244) {
						w3 = -807;
					} else {
						w3 = -1903;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3244) {
							w3 = -660;
						} else {
							w3 = -953;
						}
					} else {
						if (rel_time < 3244) {
							w3 = -275;
						} else {
							w3 = -592;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 438) {
			if (cons != 0) {
				if (cons != 2) {
					if (hops < 2) {
						if (rel_time < 297) {
							w3 = 4235;
						} else {
							w3 = 3492;
						}
					} else {
						if (hops < 5) {
							w3 = 4494;
						} else {
							w3 = 5409;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w3 = 3604;
						} else {
							w3 = 3816;
						}
					} else {
						if (hops < 5) {
							w3 = 3981;
						} else {
							w3 = 4451;
						}
					}
				}
			} else {
				if (rel_time < 63) {
					if (hops < 3) {
						w3 = 2185;
					} else {
						if (hops < 5) {
							w3 = 2418;
						} else {
							w3 = 2916;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w3 = 2679;
						} else {
							w3 = 3080;
						}
					} else {
						w3 = 4055;
					}
				}
			}
		} else {
			if (rel_time < 4090) {
				if (rel_time < 964) {
					if (cons != 0) {
						if (rel_time < 868) {
							w3 = 2357;
						} else {
							w3 = 972;
						}
					} else {
						if (rel_time < 731) {
							w3 = -1280;
						} else {
							w3 = 2063;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 3715) {
							w3 = -55;
						} else {
							w3 = 812;
						}
					} else {
						if (rel_time < 3760) {
							w3 = 1661;
						} else {
							w3 = 2941;
						}
					}
				}
			} else {
				if (rel_time < 4136) {
					if (prod != 2) {
						w3 = -953;
					} else {
						if (hops < 3) {
							w3 = 2858;
						} else {
							w3 = 3116;
						}
					}
				} else {
					if (rel_time < 4138) {
						if (hops < 3) {
							w3 = -980;
						} else {
							w3 = -757;
						}
					} else {
						if (hops < 3) {
							w3 = 1398;
						} else {
							w3 = 1625;
						}
					}
				}
			}
		}
	}
	int w4;
	if (size < 38) {
		if (rel_time < 1587) {
			if (rel_time < 1444) {
				if (rel_time < 1301) {
					if (rel_time < 1158) {
						if (hops < 2) {
							w4 = -2094;
						} else {
							w4 = -1927;
						}
					} else {
						if (rel_time < 1187) {
							w4 = -156;
						} else {
							w4 = -978;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 1386) {
							w4 = -3161;
						} else {
							w4 = -2131;
						}
					} else {
						if (hops < 4) {
							w4 = -1088;
						} else {
							w4 = -625;
						}
					}
				}
			} else {
				if (rel_time < 1529) {
					if (cons != 2) {
						if (hops < 4) {
							w4 = 1530;
						} else {
							w4 = 1977;
						}
					} else {
						if (hops < 4) {
							w4 = -506;
						} else {
							w4 = -65;
						}
					}
				} else {
					if (rel_time < 1559) {
						if (hops < 4) {
							w4 = -644;
						} else {
							w4 = -186;
						}
					} else {
						if (hops < 5) {
							w4 = -1121;
						} else {
							w4 = -209;
						}
					}
				}
			}
		} else {
			if (rel_time < 1730) {
				if (rel_time < 1615) {
					if (hops < 4) {
						w4 = -4412;
					} else {
						w4 = -3965;
					}
				} else {
					if (cons != 3) {
						if (hops < 4) {
							w4 = -2294;
						} else {
							w4 = -2013;
						}
					} else {
						if (hops < 4) {
							w4 = -4404;
						} else {
							w4 = -3930;
						}
					}
				}
			} else {
				if (rel_time < 1815) {
					if (cons != 2) {
						if (hops < 4) {
							w4 = 1555;
						} else {
							w4 = 2008;
						}
					} else {
						if (hops < 4) {
							w4 = -600;
						} else {
							w4 = -128;
						}
					}
				} else {
					if (rel_time < 2016) {
						if (rel_time < 1873) {
							w4 = -458;
						} else {
							w4 = -3145;
						}
					} else {
						if (rel_time < 2101) {
							w4 = 952;
						} else {
							w4 = -1440;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 438) {
			if (cons != 0) {
				if (rel_time < 163) {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 2239;
						} else {
							w4 = 2407;
						}
					} else {
						if (hops < 5) {
							w4 = 2656;
						} else {
							w4 = 3032;
						}
					}
				} else {
					if (hops < 2) {
						if (cons != 3) {
							w4 = 1777;
						} else {
							w4 = 1991;
						}
					} else {
						if (cons != 3) {
							w4 = 2025;
						} else {
							w4 = 2243;
						}
					}
				}
			} else {
				if (rel_time < 63) {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 1066;
						} else {
							w4 = 1138;
						}
					} else {
						if (hops < 5) {
							w4 = 1280;
						} else {
							w4 = 1469;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w4 = 1514;
						} else {
							w4 = 1149;
						}
					} else {
						if (hops < 5) {
							w4 = 1710;
						} else {
							w4 = 2041;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 3715) {
					if (prod != 1) {
						if (cons != 4) {
							w4 = -117;
						} else {
							w4 = 799;
						}
					} else {
						if (rel_time < 3462) {
							w4 = -2313;
						} else {
							w4 = -3228;
						}
					}
				} else {
					if (rel_time < 3898) {
						if (prod != 2) {
							w4 = 1922;
						} else {
							w4 = -1110;
						}
					} else {
						if (rel_time < 4090) {
							w4 = -367;
						} else {
							w4 = 643;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (hops < 5) {
							w4 = 725;
						} else {
							w4 = 1115;
						}
					} else {
						if (rel_time < 569) {
							w4 = 2550;
						} else {
							w4 = 984;
						}
					}
				} else {
					if (rel_time < 686) {
						if (hops < 4) {
							w4 = 2231;
						} else {
							w4 = 2991;
						}
					} else {
						if (rel_time < 918) {
							w4 = 799;
						} else {
							w4 = 1925;
						}
					}
				}
			}
		}
	}
	int w5;
	if (size < 38) {
		if (hops < 4) {
			if (rel_time < 3159) {
				if (rel_time < 3016) {
					if (rel_time < 2873) {
						if (rel_time < 2444) {
							w5 = -656;
						} else {
							w5 = -1290;
						}
					} else {
						if (rel_time < 2901) {
							w5 = 906;
						} else {
							w5 = -23;
						}
					}
				} else {
					if (rel_time < 3044) {
						if (hops < 2) {
							w5 = -2378;
						} else {
							w5 = -2220;
						}
					} else {
						if (cons != 3) {
							w5 = -1109;
						} else {
							w5 = -2127;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 3187) {
						if (hops < 2) {
							w5 = 223;
						} else {
							w5 = 300;
						}
					} else {
						if (cons != 1) {
							w5 = -584;
						} else {
							w5 = -1452;
						}
					}
				} else {
					if (rel_time < 3244) {
						if (hops < 2) {
							w5 = 315;
						} else {
							w5 = 389;
						}
					} else {
						if (hops < 2) {
							w5 = -233;
						} else {
							w5 = 243;
						}
					}
				}
			}
		} else {
			if (rel_time < 3321) {
				if (rel_time < 2444) {
					if (rel_time < 2301) {
						if (rel_time < 2159) {
							w5 = -310;
						} else {
							w5 = -2003;
						}
					} else {
						if (rel_time < 2386) {
							w5 = 2134;
						} else {
							w5 = 631;
						}
					}
				} else {
					if (rel_time < 2587) {
						if (cons != 3) {
							w5 = -1711;
						} else {
							w5 = -3065;
						}
					} else {
						if (rel_time < 2672) {
							w5 = 1251;
						} else {
							w5 = -508;
						}
					}
				}
			} else {
				if (rel_time < 3364) {
					if (rel_time < 3342) {
						if (hops < 5) {
							w5 = 419;
						} else {
							w5 = 728;
						}
					} else {
						if (hops < 5) {
							w5 = 486;
						} else {
							w5 = 246;
						}
					}
				} else {
					if (hops < 5) {
						w5 = 24;
					} else {
						w5 = 322;
					}
				}
			}
		}
	} else {
		if (rel_time < 438) {
			if (cons != 0) {
				if (rel_time < 163) {
					if (hops < 4) {
						if (hops < 2) {
							w5 = 1121;
						} else {
							w5 = 1204;
						}
					} else {
						if (hops < 5) {
							w5 = 1331;
						} else {
							w5 = 1526;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 230) {
							w5 = 918;
						} else {
							w5 = 1024;
						}
					} else {
						if (cons != 3) {
							w5 = 1275;
						} else {
							w5 = 1650;
						}
					}
				}
			} else {
				if (rel_time < 63) {
					if (hops < 4) {
						if (hops < 3) {
							w5 = 544;
						} else {
							w5 = 588;
						}
					} else {
						if (hops < 5) {
							w5 = 641;
						} else {
							w5 = 740;
						}
					}
				} else {
					if (hops < 2) {
						w5 = 584;
					} else {
						if (hops < 3) {
							w5 = 963;
						} else {
							w5 = 738;
						}
					}
				}
			}
		} else {
			if (rel_time < 10416) {
				if (rel_time < 10374) {
					if (rel_time < 10335) {
						if (rel_time < 10296) {
							w5 = 358;
						} else {
							w5 = -649;
						}
					} else {
						if (prod != 2) {
							w5 = -1910;
						} else {
							w5 = 1909;
						}
					}
				} else {
					if (prod != 3) {
						w5 = 1999;
					} else {
						if (hops < 3) {
							w5 = -1901;
						} else {
							w5 = -1796;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w5 = 1285;
						} else {
							w5 = 1119;
						}
					} else {
						w5 = 1528;
					}
				} else {
					w5 = 1942;
				}
			}
		}
	}
	int w6;
	if (size < 38) {
		if (rel_time < 2301) {
			if (rel_time < 2159) {
				if (rel_time < 2016) {
					if (rel_time < 1873) {
						if (rel_time < 1730) {
							w6 = -460;
						} else {
							w6 = 479;
						}
					} else {
						if (cons != 3) {
							w6 = -990;
						} else {
							w6 = -2426;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 2101) {
							w6 = 1491;
						} else {
							w6 = 502;
						}
					} else {
						if (hops < 4) {
							w6 = -692;
						} else {
							w6 = -401;
						}
					}
				}
			} else {
				if (rel_time < 2187) {
					if (hops < 4) {
						if (hops < 2) {
							w6 = -3388;
						} else {
							w6 = -3243;
						}
					} else {
						if (hops < 5) {
							w6 = -2246;
						} else {
							w6 = -1911;
						}
					}
				} else {
					if (cons != 3) {
						if (hops < 4) {
							w6 = -1392;
						} else {
							w6 = -276;
						}
					} else {
						if (hops < 4) {
							w6 = -3202;
						} else {
							w6 = -2066;
						}
					}
				}
			}
		} else {
			if (rel_time < 2386) {
				if (cons != 2) {
					if (hops < 4) {
						if (hops < 2) {
							w6 = 2611;
						} else {
							w6 = 2756;
						}
					} else {
						if (hops < 5) {
							w6 = 1674;
						} else {
							w6 = 2013;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w6 = 543;
						} else {
							w6 = 691;
						}
					} else {
						if (hops < 5) {
							w6 = -384;
						} else {
							w6 = -51;
						}
					}
				}
			} else {
				if (rel_time < 2587) {
					if (rel_time < 2444) {
						if (hops < 4) {
							w6 = 537;
						} else {
							w6 = 316;
						}
					} else {
						if (rel_time < 2472) {
							w6 = -2730;
						} else {
							w6 = -1348;
						}
					}
				} else {
					if (rel_time < 2672) {
						if (cons != 2) {
							w6 = 1970;
						} else {
							w6 = -153;
						}
					} else {
						if (rel_time < 2815) {
							w6 = -805;
						} else {
							w6 = -255;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 4138) {
				if (rel_time < 964) {
					if (cons != 0) {
						if (rel_time < 868) {
							w6 = 457;
						} else {
							w6 = -310;
						}
					} else {
						if (rel_time < 438) {
							w6 = 308;
						} else {
							w6 = -366;
						}
					}
				} else {
					if (prod != 0) {
						if (cons != 2) {
							w6 = -468;
						} else {
							w6 = 925;
						}
					} else {
						if (rel_time < 3760) {
							w6 = 198;
						} else {
							w6 = 1098;
						}
					}
				}
			} else {
				if (rel_time < 4466) {
					if (prod != 0) {
						if (prod != 2) {
							w6 = 1837;
						} else {
							w6 = -1312;
						}
					} else {
						if (hops < 2) {
							w6 = -1405;
						} else {
							w6 = -1276;
						}
					}
				} else {
					if (rel_time < 4566) {
						if (prod != 0) {
							w6 = -1295;
						} else {
							w6 = 1645;
						}
					} else {
						if (rel_time < 4569) {
							w6 = 1672;
						} else {
							w6 = 168;
						}
					}
				}
			}
		} else {
			if (rel_time < 3462) {
				if (hops < 5) {
					if (rel_time < 731) {
						if (rel_time < 686) {
							w6 = 594;
						} else {
							w6 = -508;
						}
					} else {
						if (rel_time < 777) {
							w6 = 2257;
						} else {
							w6 = 657;
						}
					}
				} else {
					if (rel_time < 503) {
						if (rel_time < 63) {
							w6 = 373;
						} else {
							w6 = 717;
						}
					} else {
						if (rel_time < 569) {
							w6 = 2322;
						} else {
							w6 = 1495;
						}
					}
				}
			} else {
				if (rel_time < 3598) {
					if (prod != 3) {
						if (hops < 5) {
							w6 = 109;
						} else {
							w6 = 823;
						}
					} else {
						if (hops < 5) {
							w6 = -1927;
						} else {
							w6 = -1213;
						}
					}
				} else {
					if (rel_time < 3898) {
						if (prod != 2) {
							w6 = 1312;
						} else {
							w6 = -1308;
						}
					} else {
						if (rel_time < 3998) {
							w6 = -1270;
						} else {
							w6 = 281;
						}
					}
				}
			}
		}
	}
	int w7;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 2301) {
				if (rel_time < 2159) {
					if (rel_time < 2016) {
						if (rel_time < 1587) {
							w7 = -145;
						} else {
							w7 = -584;
						}
					} else {
						if (cons != 2) {
							w7 = 332;
						} else {
							w7 = -435;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 2243) {
							w7 = -1693;
						} else {
							w7 = -912;
						}
					} else {
						w7 = -553;
					}
				}
			} else {
				if (rel_time < 2386) {
					if (cons != 2) {
						w7 = 1306;
					} else {
						w7 = 272;
					}
				} else {
					if (rel_time < 2587) {
						if (cons != 3) {
							w7 = -459;
						} else {
							w7 = -2298;
						}
					} else {
						if (rel_time < 2702) {
							w7 = 618;
						} else {
							w7 = -356;
						}
					}
				}
			}
		} else {
			if (rel_time < 1587) {
				if (rel_time < 1444) {
					if (rel_time < 1301) {
						if (cons != 3) {
							w7 = -6;
						} else {
							w7 = 772;
						}
					} else {
						if (cons != 2) {
							w7 = -717;
						} else {
							w7 = 83;
						}
					}
				} else {
					if (rel_time < 1529) {
						if (cons != 2) {
							w7 = 1383;
						} else {
							w7 = 362;
						}
					} else {
						if (rel_time < 1559) {
							w7 = 295;
						} else {
							w7 = 54;
						}
					}
				}
			} else {
				if (rel_time < 1730) {
					if (cons != 3) {
						if (rel_time < 1615) {
							w7 = -1588;
						} else {
							w7 = -574;
						}
					} else {
						if (hops < 5) {
							w7 = -1607;
						} else {
							w7 = -1318;
						}
					}
				} else {
					if (rel_time < 1815) {
						if (cons != 2) {
							w7 = 927;
						} else {
							w7 = -150;
						}
					} else {
						if (rel_time < 1958) {
							w7 = -600;
						} else {
							w7 = -67;
						}
					}
				}
			}
		}
	} else {
		if (cons != 4) {
			if (rel_time < 3715) {
				if (rel_time < 1055) {
					if (rel_time < 822) {
						if (rel_time < 777) {
							w7 = 131;
						} else {
							w7 = -1019;
						}
					} else {
						if (cons != 1) {
							w7 = 855;
						} else {
							w7 = -871;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 2) {
							w7 = -851;
						} else {
							w7 = -231;
						}
					} else {
						if (rel_time < 3462) {
							w7 = -51;
						} else {
							w7 = 1882;
						}
					}
				}
			} else {
				if (rel_time < 3898) {
					if (prod != 2) {
						if (rel_time < 3760) {
							w7 = 24;
						} else {
							w7 = 1834;
						}
					} else {
						if (hops < 2) {
							w7 = -501;
						} else {
							w7 = -1142;
						}
					}
				} else {
					if (rel_time < 4090) {
						if (prod != 0) {
							w7 = -1210;
						} else {
							w7 = 631;
						}
					} else {
						if (rel_time < 4136) {
							w7 = 1091;
						} else {
							w7 = 100;
						}
					}
				}
			}
		} else {
			if (rel_time < 918) {
				if (rel_time < 686) {
					if (rel_time < 372) {
						if (hops < 2) {
							w7 = 121;
						} else {
							w7 = 310;
						}
					} else {
						if (hops < 5) {
							w7 = 741;
						} else {
							w7 = 1230;
						}
					}
				} else {
					if (hops < 2) {
						w7 = -568;
					} else {
						if (hops < 5) {
							w7 = 161;
						} else {
							w7 = 754;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w7 = 627;
					} else {
						if (hops < 3) {
							w7 = 961;
						} else {
							w7 = 640;
						}
					}
				} else {
					w7 = 1303;
				}
			}
		}
	}
	int w8;
	if (size < 38) {
		if (hops < 5) {
			if (cons != 1) {
				if (cons != 0) {
					if (rel_time < 3273) {
						if (rel_time < 2987) {
							w8 = -1;
						} else {
							w8 = -291;
						}
					} else {
						if (hops < 2) {
							w8 = -14;
						} else {
							w8 = 329;
						}
					}
				} else {
					if (rel_time < 1444) {
						if (hops < 2) {
							w8 = -510;
						} else {
							w8 = -239;
						}
					} else {
						if (rel_time < 2159) {
							w8 = -87;
						} else {
							w8 = -224;
						}
					}
				}
			} else {
				if (rel_time < 1473) {
					if (rel_time < 1329) {
						if (rel_time < 1187) {
							w8 = 440;
						} else {
							w8 = -853;
						}
					} else {
						if (hops < 2) {
							w8 = 1249;
						} else {
							w8 = 617;
						}
					}
				} else {
					if (rel_time < 1615) {
						if (hops < 2) {
							w8 = -1445;
						} else {
							w8 = -813;
						}
					} else {
						if (rel_time < 1758) {
							w8 = 714;
						} else {
							w8 = -343;
						}
					}
				}
			}
		} else {
			if (cons != 0) {
				if (rel_time < 2987) {
					if (rel_time < 2845) {
						if (rel_time < 2702) {
							w8 = 311;
						} else {
							w8 = -345;
						}
					} else {
						if (cons != 2) {
							w8 = 1520;
						} else {
							w8 = 726;
						}
					}
				} else {
					if (rel_time < 3101) {
						if (cons != 2) {
							w8 = -1335;
						} else {
							w8 = -254;
						}
					} else {
						if (rel_time < 3244) {
							w8 = 626;
						} else {
							w8 = 144;
						}
					}
				}
			} else {
				if (rel_time < 1730) {
					if (rel_time < 1587) {
						if (rel_time < 1444) {
							w8 = -273;
						} else {
							w8 = 250;
						}
					} else {
						w8 = -659;
					}
				} else {
					if (rel_time < 2159) {
						if (rel_time < 2016) {
							w8 = 169;
						} else {
							w8 = 499;
						}
					} else {
						if (rel_time < 2301) {
							w8 = -460;
						} else {
							w8 = 64;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10009) {
			if (rel_time < 9703) {
				if (rel_time < 9676) {
					if (rel_time < 9579) {
						if (rel_time < 9536) {
							w8 = 44;
						} else {
							w8 = 1978;
						}
					} else {
						if (prod != 0) {
							w8 = -1384;
						} else {
							w8 = 1411;
						}
					}
				} else {
					w8 = 1518;
				}
			} else {
				if (prod != 4) {
					if (prod != 2) {
						if (rel_time < 9869) {
							w8 = -2217;
						} else {
							w8 = -1084;
						}
					} else {
						if (hops < 2) {
							w8 = 1470;
						} else {
							w8 = 1551;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 1471;
					} else {
						w8 = 1574;
					}
				}
			}
		} else {
			if (rel_time < 10052) {
				if (prod != 1) {
					w8 = -1512;
				} else {
					if (hops < 2) {
						w8 = 2342;
					} else {
						if (hops < 3) {
							w8 = 2541;
						} else {
							w8 = 2414;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 10078) {
						if (hops < 2) {
							w8 = -1510;
						} else {
							w8 = -1372;
						}
					} else {
						if (prod != 4) {
							w8 = 982;
						} else {
							w8 = -414;
						}
					}
				} else {
					if (rel_time < 10296) {
						if (hops < 2) {
							w8 = -2075;
						} else {
							w8 = -2349;
						}
					} else {
						if (hops < 2) {
							w8 = -1609;
						} else {
							w8 = -1766;
						}
					}
				}
			}
		}
	}
	int w9;
	if (rel_time < 10416) {
		if (rel_time < 10374) {
			if (rel_time < 5317) {
				if (rel_time < 5272) {
					if (rel_time < 5226) {
						if (rel_time < 5181) {
							w9 = -13;
						} else {
							w9 = -2020;
						}
					} else {
						if (prod != 2) {
							w9 = -2348;
						} else {
							w9 = 1494;
						}
					}
				} else {
					if (prod != 3) {
						w9 = 1427;
					} else {
						w9 = -2356;
					}
				}
			} else {
				if (rel_time < 5602) {
					if (prod != 2) {
						if (prod != 0) {
							w9 = 2001;
						} else {
							w9 = -1427;
						}
					} else {
						if (hops < 2) {
							w9 = -1538;
						} else {
							w9 = -1348;
						}
					}
				} else {
					if (rel_time < 5702) {
						if (prod != 0) {
							w9 = -1417;
						} else {
							w9 = 1440;
						}
					} else {
						if (rel_time < 5710) {
							w9 = 1495;
						} else {
							w9 = 21;
						}
					}
				}
			}
		} else {
			if (prod != 3) {
				if (hops < 2) {
					w9 = 1140;
				} else {
					if (hops < 3) {
						w9 = 928;
					} else {
						w9 = 1180;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w9 = -1507;
						} else {
							w9 = -1650;
						}
					} else {
						w9 = -1372;
					}
				} else {
					w9 = -1738;
				}
			}
		}
	} else {
		if (hops < 3) {
			if (hops < 2) {
				w9 = 716;
			} else {
				w9 = 633;
			}
		} else {
			if (hops < 4) {
				w9 = 839;
			} else {
				w9 = 989;
			}
		}
	}
	int w10;
	if (hops < 2) {
		if (rel_time < 6564) {
			if (rel_time < 6466) {
				if (rel_time < 6454) {
					if (rel_time < 6409) {
						if (rel_time < 6364) {
							w10 = -82;
						} else {
							w10 = 575;
						}
					} else {
						if (prod != 3) {
							w10 = 1405;
						} else {
							w10 = -2380;
						}
					}
				} else {
					w10 = 1445;
				}
			} else {
				if (prod != 0) {
					w10 = 1341;
				} else {
					w10 = -1564;
				}
			}
		} else {
			if (rel_time < 6607) {
				if (prod != 0) {
					w10 = 2263;
				} else {
					w10 = -1492;
				}
			} else {
				if (rel_time < 6651) {
					if (prod != 1) {
						w10 = -1570;
					} else {
						w10 = 2296;
					}
				} else {
					if (rel_time < 6740) {
						if (prod != 3) {
							w10 = -1544;
						} else {
							w10 = 2292;
						}
					} else {
						if (rel_time < 6900) {
							w10 = -684;
						} else {
							w10 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 964) {
			if (rel_time < 731) {
				if (rel_time < 686) {
					if (cons != 2) {
						if (rel_time < 438) {
							w10 = 173;
						} else {
							w10 = -261;
						}
					} else {
						if (rel_time < 230) {
							w10 = 137;
						} else {
							w10 = 711;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w10 = -826;
						} else {
							w10 = -1312;
						}
					} else {
						if (hops < 5) {
							w10 = -335;
						} else {
							w10 = -629;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 868) {
						if (hops < 5) {
							w10 = 1071;
						} else {
							w10 = 1841;
						}
					} else {
						if (rel_time < 918) {
							w10 = 88;
						} else {
							w10 = 386;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w10 = -381;
						} else {
							w10 = -897;
						}
					} else {
						if (hops < 5) {
							w10 = -86;
						} else {
							w10 = 383;
						}
					}
				}
			}
		} else {
			if (rel_time < 2301) {
				if (rel_time < 2159) {
					if (rel_time < 2016) {
						if (rel_time < 1587) {
							w10 = 55;
						} else {
							w10 = -180;
						}
					} else {
						if (cons != 2) {
							w10 = 657;
						} else {
							w10 = -233;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 2187) {
							w10 = -1285;
						} else {
							w10 = -419;
						}
					} else {
						if (hops < 4) {
							w10 = -1499;
						} else {
							w10 = -1034;
						}
					}
				}
			} else {
				if (rel_time < 2386) {
					if (cons != 2) {
						if (hops < 4) {
							w10 = 1503;
						} else {
							w10 = 948;
						}
					} else {
						if (hops < 4) {
							w10 = 386;
						} else {
							w10 = -149;
						}
					}
				} else {
					if (rel_time < 2529) {
						if (rel_time < 2501) {
							w10 = -53;
						} else {
							w10 = -1757;
						}
					} else {
						if (rel_time < 2730) {
							w10 = 388;
						} else {
							w10 = 26;
						}
					}
				}
			}
		}
	}
	int w11;
	if (rel_time < 9269) {
		if (rel_time < 9246) {
			if (rel_time < 9203) {
				if (rel_time < 9160) {
					if (rel_time < 8873) {
						if (rel_time < 8557) {
							w11 = 3;
						} else {
							w11 = -505;
						}
					} else {
						if (prod != 4) {
							w11 = 920;
						} else {
							w11 = -1458;
						}
					}
				} else {
					if (prod != 1) {
						w11 = 1433;
					} else {
						w11 = -2366;
					}
				}
			} else {
				if (prod != 2) {
					w11 = -2425;
				} else {
					if (hops < 4) {
						w11 = 1453;
					} else {
						w11 = 1525;
					}
				}
			}
		} else {
			w11 = -2378;
		}
	} else {
		if (rel_time < 9309) {
			if (prod != 3) {
				w11 = 1439;
			} else {
				w11 = -2346;
			}
		} else {
			if (prod != 1) {
				if (rel_time < 9493) {
					if (prod != 4) {
						if (hops < 2) {
							w11 = -1542;
						} else {
							w11 = -1390;
						}
					} else {
						w11 = 1482;
					}
				} else {
					if (prod != 4) {
						if (rel_time < 10078) {
							w11 = -59;
						} else {
							w11 = 647;
						}
					} else {
						if (rel_time < 9676) {
							w11 = -879;
						} else {
							w11 = -30;
						}
					}
				}
			} else {
				if (rel_time < 9493) {
					if (hops < 2) {
						w11 = 2297;
					} else {
						w11 = 2458;
					}
				} else {
					if (rel_time < 9781) {
						if (hops < 2) {
							w11 = -1258;
						} else {
							w11 = -1203;
						}
					} else {
						if (rel_time < 10052) {
							w11 = 1356;
						} else {
							w11 = -986;
						}
					}
				}
			}
		}
	}
	int w12;
	if (rel_time < 10335) {
		if (rel_time < 7709) {
			if (rel_time < 7691) {
				if (rel_time < 7591) {
					if (rel_time < 7547) {
						if (rel_time < 7278) {
							w12 = 2;
						} else {
							w12 = -340;
						}
					} else {
						if (prod != 3) {
							w12 = 1488;
						} else {
							w12 = -2344;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 5) {
							w12 = 1490;
						} else {
							w12 = 1622;
						}
					} else {
						w12 = -1502;
					}
				}
			} else {
				if (hops < 2) {
					w12 = -1530;
				} else {
					w12 = -1433;
				}
			}
		} else {
			if (rel_time < 7749) {
				if (prod != 0) {
					if (hops < 2) {
						w12 = 2301;
					} else {
						w12 = 2407;
					}
				} else {
					w12 = -1416;
				}
			} else {
				if (prod != 3) {
					if (rel_time < 8067) {
						if (prod != 0) {
							w12 = -1457;
						} else {
							w12 = 1506;
						}
					} else {
						if (rel_time < 8166) {
							w12 = 1480;
						} else {
							w12 = -14;
						}
					}
				} else {
					if (rel_time < 7879) {
						w12 = 2366;
					} else {
						if (rel_time < 8166) {
							w12 = -2353;
						} else {
							w12 = 450;
						}
					}
				}
			}
		}
	} else {
		if (prod != 3) {
			if (rel_time < 10374) {
				if (hops < 2) {
					w12 = 62;
				} else {
					if (hops < 3) {
						w12 = -107;
					} else {
						if (hops < 5) {
							w12 = -35;
						} else {
							w12 = -94;
						}
					}
				}
			} else {
				if (rel_time < 10416) {
					if (hops < 2) {
						w12 = 588;
					} else {
						if (hops < 3) {
							w12 = 470;
						} else {
							w12 = 611;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w12 = 373;
						} else {
							w12 = 319;
						}
					} else {
						if (hops < 4) {
							w12 = 422;
						} else {
							w12 = 497;
						}
					}
				}
			}
		} else {
			if (rel_time < 10374) {
				if (hops < 2) {
					w12 = -1806;
				} else {
					w12 = -2050;
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w12 = -1078;
						} else {
							w12 = -1162;
						}
					} else {
						w12 = -1023;
					}
				} else {
					w12 = -1207;
				}
			}
		}
	}
	int w13;
	if (rel_time < 4896) {
		if (rel_time < 4851) {
			if (rel_time < 4751) {
				if (rel_time < 4569) {
					if (rel_time < 4329) {
						if (rel_time < 4044) {
							w13 = -16;
						} else {
							w13 = -241;
						}
					} else {
						if (prod != 4) {
							w13 = 795;
						} else {
							w13 = -957;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 4) {
							w13 = -1875;
						} else {
							w13 = 1550;
						}
					} else {
						if (hops < 2) {
							w13 = 1606;
						} else {
							w13 = 1526;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w13 = 1611;
					} else {
						w13 = 1532;
					}
				} else {
					w13 = -1457;
				}
			}
		} else {
			if (prod != 0) {
				w13 = 2350;
			} else {
				if (hops < 2) {
					w13 = -1500;
				} else {
					w13 = -1388;
				}
			}
		}
	} else {
		if (rel_time < 4901) {
			if (hops < 2) {
				w13 = 2335;
			} else {
				w13 = 2437;
			}
		} else {
			if (rel_time < 4947) {
				if (prod != 1) {
					if (hops < 2) {
						w13 = -1507;
					} else {
						w13 = -1395;
					}
				} else {
					w13 = 2445;
				}
			} else {
				if (rel_time < 4991) {
					if (prod != 2) {
						w13 = 2404;
					} else {
						w13 = -1402;
					}
				} else {
					if (rel_time < 6033) {
						if (prod != 2) {
							w13 = -240;
						} else {
							w13 = 557;
						}
					} else {
						if (rel_time < 6077) {
							w13 = 2258;
						} else {
							w13 = 14;
						}
					}
				}
			}
		}
	}
	int w14;
	if (prod != 0) {
		if (rel_time < 10117) {
			if (rel_time < 10078) {
				if (rel_time < 10052) {
					if (rel_time < 9869) {
						if (rel_time < 9781) {
							w14 = -8;
						} else {
							w14 = -495;
						}
					} else {
						if (rel_time < 10009) {
							w14 = 963;
						} else {
							w14 = 485;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w14 = -737;
						} else {
							w14 = -608;
						}
					} else {
						w14 = -737;
					}
				}
			} else {
				if (prod != 2) {
					if (hops < 2) {
						w14 = 1259;
					} else {
						if (hops < 3) {
							w14 = 1454;
						} else {
							w14 = 1335;
						}
					}
				} else {
					w14 = -2237;
				}
			}
		} else {
			if (prod != 2) {
				if (rel_time < 10416) {
					if (prod != 4) {
						if (rel_time < 10157) {
							w14 = 1368;
						} else {
							w14 = -551;
						}
					} else {
						if (rel_time < 10257) {
							w14 = -1214;
						} else {
							w14 = 272;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 180;
						} else {
							w14 = 152;
						}
					} else {
						if (hops < 5) {
							w14 = 212;
						} else {
							w14 = 298;
						}
					}
				}
			} else {
				if (rel_time < 10335) {
					if (hops < 2) {
						w14 = 1426;
					} else {
						w14 = 1165;
					}
				} else {
					if (hops < 2) {
						w14 = 24;
					} else {
						if (hops < 4) {
							w14 = -58;
						} else {
							w14 = -10;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10009) {
			if (rel_time < 9741) {
				if (rel_time < 9450) {
					if (rel_time < 9160) {
						if (rel_time < 8873) {
							w14 = 72;
						} else {
							w14 = 1025;
						}
					} else {
						if (hops < 2) {
							w14 = -775;
						} else {
							w14 = -706;
						}
					}
				} else {
					if (rel_time < 9703) {
						if (hops < 2) {
							w14 = 745;
						} else {
							w14 = 781;
						}
					} else {
						w14 = 2651;
					}
				}
			} else {
				if (hops < 2) {
					w14 = -946;
				} else {
					if (hops < 3) {
						w14 = -740;
					} else {
						w14 = -886;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 10257) {
					w14 = 772;
				} else {
					w14 = 981;
				}
			} else {
				if (hops < 4) {
					w14 = 628;
				} else {
					if (hops < 5) {
						w14 = 729;
					} else {
						w14 = 867;
					}
				}
			}
		}
	}
	int w15;
	if (hops < 4) {
		if (rel_time < 6564) {
			if (rel_time < 6466) {
				if (rel_time < 6454) {
					if (rel_time < 6409) {
						if (prod != 1) {
							w15 = -6;
						} else {
							w15 = -253;
						}
					} else {
						if (prod != 3) {
							w15 = 1074;
						} else {
							w15 = -1897;
						}
					}
				} else {
					if (hops < 2) {
						w15 = 718;
					} else {
						w15 = 1514;
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w15 = 710;
					} else {
						w15 = 1440;
					}
				} else {
					if (hops < 2) {
						w15 = -828;
					} else {
						w15 = -1479;
					}
				}
			}
		} else {
			if (rel_time < 6607) {
				if (prod != 0) {
					if (hops < 2) {
						w15 = 1127;
					} else {
						w15 = 2395;
					}
				} else {
					if (hops < 2) {
						w15 = -801;
					} else {
						w15 = -1489;
					}
				}
			} else {
				if (rel_time < 6885) {
					if (prod != 3) {
						if (prod != 0) {
							w15 = -997;
						} else {
							w15 = 1570;
						}
					} else {
						if (hops < 2) {
							w15 = 1142;
						} else {
							w15 = 2398;
						}
					}
				} else {
					if (rel_time < 6900) {
						if (hops < 2) {
							w15 = -2000;
						} else {
							w15 = -2374;
						}
					} else {
						if (rel_time < 6941) {
							w15 = 1441;
						} else {
							w15 = -3;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1130) {
			if (rel_time < 503) {
				if (cons != 3) {
					if (hops < 5) {
						if (rel_time < 230) {
							w15 = 58;
						} else {
							w15 = -96;
						}
					} else {
						if (cons != 1) {
							w15 = 91;
						} else {
							w15 = 351;
						}
					}
				} else {
					w15 = 327;
				}
			} else {
				if (cons != 2) {
					if (rel_time < 964) {
						if (cons != 0) {
							w15 = 445;
						} else {
							w15 = 36;
						}
					} else {
						if (rel_time < 1100) {
							w15 = -230;
						} else {
							w15 = 518;
						}
					}
				} else {
					if (rel_time < 822) {
						if (rel_time < 569) {
							w15 = 710;
						} else {
							w15 = 27;
						}
					} else {
						if (hops < 5) {
							w15 = 804;
						} else {
							w15 = 1276;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (rel_time < 9703) {
					if (rel_time < 9450) {
						if (rel_time < 9160) {
							w15 = 77;
						} else {
							w15 = -404;
						}
					} else {
						if (rel_time < 9579) {
							w15 = 1247;
						} else {
							w15 = 64;
						}
					}
				} else {
					if (rel_time < 9869) {
						if (prod != 0) {
							w15 = -817;
						} else {
							w15 = 1341;
						}
					} else {
						if (rel_time < 10157) {
							w15 = 139;
						} else {
							w15 = -71;
						}
					}
				}
			} else {
				if (rel_time < 8686) {
					if (rel_time < 8397) {
						if (rel_time < 8126) {
							w15 = 2;
						} else {
							w15 = -1391;
						}
					} else {
						w15 = 1787;
					}
				} else {
					if (rel_time < 8973) {
						w15 = -1881;
					} else {
						if (rel_time < 9246) {
							w15 = 767;
						} else {
							w15 = -237;
						}
					}
				}
			}
		}
	}
	int w16;
	if (cons != 0) {
		if (cons != 1) {
			if (rel_time < 569) {
				if (rel_time < 372) {
					if (hops < 3) {
						if (cons != 3) {
							w16 = 138;
						} else {
							w16 = 197;
						}
					} else {
						if (cons != 3) {
							w16 = 33;
						} else {
							w16 = 120;
						}
					}
				} else {
					if (hops < 2) {
						w16 = 1310;
					} else {
						if (hops < 3) {
							w16 = 480;
						} else {
							w16 = 107;
						}
					}
				}
			} else {
				if (rel_time < 635) {
					if (hops < 2) {
						w16 = -876;
					} else {
						if (hops < 4) {
							w16 = -553;
						} else {
							w16 = -234;
						}
					}
				} else {
					if (rel_time < 686) {
						if (hops < 3) {
							w16 = 545;
						} else {
							w16 = 260;
						}
					} else {
						if (rel_time < 822) {
							w16 = -365;
						} else {
							w16 = 17;
						}
					}
				}
			}
		} else {
			if (rel_time < 1758) {
				if (rel_time < 1615) {
					if (rel_time < 1473) {
						if (rel_time < 1329) {
							w16 = -26;
						} else {
							w16 = 443;
						}
					} else {
						if (hops < 2) {
							w16 = -663;
						} else {
							w16 = -331;
						}
					}
				} else {
					if (hops < 2) {
						w16 = 817;
					} else {
						if (hops < 5) {
							w16 = 234;
						} else {
							w16 = 658;
						}
					}
				}
			} else {
				if (rel_time < 1901) {
					if (hops < 2) {
						w16 = -1539;
					} else {
						if (hops < 4) {
							w16 = -1341;
						} else {
							w16 = -1225;
						}
					}
				} else {
					if (rel_time < 2044) {
						if (hops < 4) {
							w16 = 608;
						} else {
							w16 = 700;
						}
					} else {
						if (rel_time < 2758) {
							w16 = -302;
						} else {
							w16 = 90;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3159) {
			if (rel_time < 3016) {
				if (rel_time < 2873) {
					if (rel_time < 2730) {
						if (rel_time < 2587) {
							w16 = -109;
						} else {
							w16 = 256;
						}
					} else {
						if (hops < 4) {
							w16 = -424;
						} else {
							w16 = -582;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w16 = 73;
						} else {
							w16 = 109;
						}
					} else {
						if (hops < 5) {
							w16 = 573;
						} else {
							w16 = 509;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w16 = -205;
					} else {
						w16 = -153;
					}
				} else {
					if (hops < 4) {
						w16 = -505;
					} else {
						if (hops < 5) {
							w16 = -798;
						} else {
							w16 = -547;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w16 = 99;
				} else {
					w16 = 146;
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						w16 = 254;
					} else {
						w16 = 279;
					}
				} else {
					w16 = 335;
				}
			}
		}
	}
	int w17;
	if (hops < 5) {
		if (rel_time < 9269) {
			if (rel_time < 9246) {
				if (rel_time < 9203) {
					if (rel_time < 9117) {
						if (rel_time < 8933) {
							w17 = -6;
						} else {
							w17 = 354;
						}
					} else {
						if (prod != 1) {
							w17 = 523;
						} else {
							w17 = -1661;
						}
					}
				} else {
					if (prod != 2) {
						w17 = -1460;
					} else {
						if (hops < 4) {
							w17 = 724;
						} else {
							w17 = 382;
						}
					}
				}
			} else {
				if (hops < 4) {
					w17 = -1440;
				} else {
					w17 = -1132;
				}
			}
		} else {
			if (rel_time < 9579) {
				if (prod != 2) {
					if (prod != 0) {
						if (prod != 4) {
							w17 = 1212;
						} else {
							w17 = 497;
						}
					} else {
						if (hops < 4) {
							w17 = -381;
						} else {
							w17 = -144;
						}
					}
				} else {
					if (rel_time < 9493) {
						if (hops < 2) {
							w17 = -766;
						} else {
							w17 = -661;
						}
					} else {
						if (hops < 2) {
							w17 = -1529;
						} else {
							w17 = -1332;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 9869) {
						if (rel_time < 9741) {
							w17 = -120;
						} else {
							w17 = 763;
						}
					} else {
						if (rel_time < 10157) {
							w17 = -164;
						} else {
							w17 = 45;
						}
					}
				} else {
					if (rel_time < 9869) {
						if (hops < 4) {
							w17 = -1189;
						} else {
							w17 = -759;
						}
					} else {
						if (rel_time < 10157) {
							w17 = 657;
						} else {
							w17 = -337;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1301) {
			if (rel_time < 731) {
				if (rel_time < 686) {
					if (rel_time < 438) {
						if (rel_time < 372) {
							w17 = 58;
						} else {
							w17 = 158;
						}
					} else {
						if (cons != 3) {
							w17 = 339;
						} else {
							w17 = 91;
						}
					}
				} else {
					w17 = -270;
				}
			} else {
				if (rel_time < 777) {
					w17 = 980;
				} else {
					if (cons != 1) {
						if (rel_time < 1055) {
							w17 = 420;
						} else {
							w17 = 165;
						}
					} else {
						if (rel_time < 1009) {
							w17 = 58;
						} else {
							w17 = 928;
						}
					}
				}
			}
		} else {
			if (cons != 1) {
				if (rel_time < 5036) {
					if (rel_time < 4991) {
						if (prod != 2) {
							w17 = 155;
						} else {
							w17 = -132;
						}
					} else {
						w17 = 2568;
					}
				} else {
					if (rel_time < 5136) {
						w17 = -1243;
					} else {
						if (rel_time < 5181) {
							w17 = 1549;
						} else {
							w17 = 36;
						}
					}
				}
			} else {
				if (rel_time < 3187) {
					if (rel_time < 3044) {
						if (rel_time < 2901) {
							w17 = -51;
						} else {
							w17 = -806;
						}
					} else {
						w17 = 632;
					}
				} else {
					w17 = -707;
				}
			}
		}
	}
	int w18;
	if (rel_time < 8443) {
		if (rel_time < 8397) {
			if (rel_time < 8353) {
				if (rel_time < 8266) {
					if (rel_time < 8021) {
						if (rel_time < 7709) {
							w18 = -4;
						} else {
							w18 = 326;
						}
					} else {
						if (prod != 4) {
							w18 = -763;
						} else {
							w18 = 1017;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 2) {
							w18 = -1619;
						} else {
							w18 = -1433;
						}
					} else {
						if (hops < 2) {
							w18 = 2239;
						} else {
							w18 = 2428;
						}
					}
				}
			} else {
				if (prod != 2) {
					w18 = 2088;
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w18 = -1576;
						} else {
							w18 = -1434;
						}
					} else {
						w18 = -707;
					}
				}
			}
		} else {
			if (prod != 3) {
				w18 = -1497;
			} else {
				if (hops < 2) {
					w18 = 2051;
				} else {
					w18 = 2159;
				}
			}
		}
	} else {
		if (rel_time < 8462) {
			w18 = -1475;
		} else {
			if (rel_time < 8557) {
				if (prod != 0) {
					w18 = -1479;
				} else {
					w18 = 1443;
				}
			} else {
				if (rel_time < 8597) {
					if (prod != 0) {
						w18 = -2091;
					} else {
						w18 = 1709;
					}
				} else {
					if (rel_time < 8729) {
						if (prod != 2) {
							w18 = -1566;
						} else {
							w18 = 1582;
						}
					} else {
						if (rel_time < 8827) {
							w18 = 1399;
						} else {
							w18 = -22;
						}
					}
				}
			}
		}
	}
	int w19;
	if (rel_time < 438) {
		if (cons != 1) {
			if (hops < 3) {
				if (rel_time < 372) {
					if (hops < 2) {
						if (rel_time < 297) {
							w19 = 139;
						} else {
							w19 = 35;
						}
					} else {
						if (rel_time < 230) {
							w19 = 34;
						} else {
							w19 = 75;
						}
					}
				} else {
					if (hops < 2) {
						w19 = 171;
					} else {
						w19 = 234;
					}
				}
			} else {
				if (rel_time < 63) {
					if (hops < 4) {
						w19 = 46;
					} else {
						if (hops < 5) {
							w19 = -101;
						} else {
							w19 = 14;
						}
					}
				} else {
					if (cons != 4) {
						if (hops < 4) {
							w19 = 4;
						} else {
							w19 = 91;
						}
					} else {
						if (hops < 4) {
							w19 = 78;
						} else {
							w19 = -82;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w19 = 324;
				} else {
					w19 = 262;
				}
			} else {
				if (hops < 5) {
					w19 = 202;
				} else {
					w19 = 68;
				}
			}
		}
	} else {
		if (rel_time < 503) {
			if (hops < 4) {
				if (hops < 2) {
					w19 = -982;
				} else {
					if (hops < 3) {
						w19 = -406;
					} else {
						w19 = -974;
					}
				}
			} else {
				if (hops < 5) {
					w19 = -115;
				} else {
					w19 = 114;
				}
			}
		} else {
			if (rel_time < 569) {
				if (hops < 2) {
					w19 = 661;
				} else {
					if (hops < 3) {
						w19 = 245;
					} else {
						if (hops < 4) {
							w19 = -180;
						} else {
							w19 = 265;
						}
					}
				}
			} else {
				if (rel_time < 731) {
					if (cons != 4) {
						if (hops < 2) {
							w19 = -782;
						} else {
							w19 = -291;
						}
					} else {
						if (hops < 3) {
							w19 = 278;
						} else {
							w19 = 115;
						}
					}
				} else {
					if (rel_time < 777) {
						if (hops < 3) {
							w19 = 1064;
						} else {
							w19 = 445;
						}
					} else {
						if (rel_time < 1444) {
							w19 = -68;
						} else {
							w19 = 4;
						}
					}
				}
			}
		}
	}
	int w20;
	if (rel_time < 5710) {
		if (rel_time < 5422) {
			if (rel_time < 5181) {
				if (rel_time < 4896) {
					if (rel_time < 4851) {
						if (rel_time < 4751) {
							w20 = -4;
						} else {
							w20 = 512;
						}
					} else {
						if (prod != 0) {
							w20 = 1306;
						} else {
							w20 = -764;
						}
					}
				} else {
					if (prod != 4) {
						if (prod != 2) {
							w20 = 1269;
						} else {
							w20 = -713;
						}
					} else {
						if (hops < 5) {
							w20 = -1319;
						} else {
							w20 = -625;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (prod != 2) {
						if (rel_time < 5317) {
							w20 = -1093;
						} else {
							w20 = -641;
						}
					} else {
						if (rel_time < 5226) {
							w20 = 2204;
						} else {
							w20 = 470;
						}
					}
				} else {
					if (rel_time < 5317) {
						w20 = 857;
					} else {
						if (hops < 2) {
							w20 = 631;
						} else {
							w20 = 585;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (prod != 4) {
					if (prod != 0) {
						if (hops < 2) {
							w20 = 1520;
						} else {
							w20 = 1622;
						}
					} else {
						if (rel_time < 5467) {
							w20 = -635;
						} else {
							w20 = 823;
						}
					}
				} else {
					if (rel_time < 5602) {
						w20 = -2315;
					} else {
						if (hops < 2) {
							w20 = -692;
						} else {
							w20 = -552;
						}
					}
				}
			} else {
				if (hops < 2) {
					w20 = -1008;
				} else {
					if (hops < 3) {
						w20 = -944;
					} else {
						w20 = -988;
					}
				}
			}
		}
	} else {
		if (rel_time < 5754) {
			if (prod != 0) {
				if (hops < 4) {
					w20 = -2102;
				} else {
					w20 = -2258;
				}
			} else {
				w20 = 1557;
			}
		} else {
			if (rel_time < 5889) {
				if (prod != 3) {
					if (prod != 1) {
						if (rel_time < 5844) {
							w20 = 1228;
						} else {
							w20 = 1634;
						}
					} else {
						w20 = -2161;
					}
				} else {
					w20 = -2210;
				}
			} else {
				if (rel_time < 6131) {
					if (prod != 2) {
						if (prod != 0) {
							w20 = 1844;
						} else {
							w20 = -1377;
						}
					} else {
						if (rel_time < 6077) {
							w20 = -2632;
						} else {
							w20 = -1480;
						}
					}
				} else {
					if (rel_time < 6454) {
						if (prod != 1) {
							w20 = 121;
						} else {
							w20 = -2261;
						}
					} else {
						if (rel_time < 6466) {
							w20 = 752;
						} else {
							w20 = 0;
						}
					}
				}
			}
		}
	}
	int w21;
	if (rel_time < 2444) {
		if (rel_time < 2301) {
			if (rel_time < 2159) {
				if (rel_time < 1958) {
					if (rel_time < 1930) {
						if (rel_time < 1901) {
							w21 = 7;
						} else {
							w21 = 480;
						}
					} else {
						if (hops < 2) {
							w21 = -1004;
						} else {
							w21 = -764;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 1987) {
							w21 = 406;
						} else {
							w21 = 42;
						}
					} else {
						if (hops < 4) {
							w21 = 534;
						} else {
							w21 = 649;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (hops < 4) {
						if (cons != 2) {
							w21 = -423;
						} else {
							w21 = -175;
						}
					} else {
						if (cons != 2) {
							w21 = -55;
						} else {
							w21 = 273;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w21 = -785;
						} else {
							w21 = -741;
						}
					} else {
						if (hops < 5) {
							w21 = -600;
						} else {
							w21 = -477;
						}
					}
				}
			}
		} else {
			if (rel_time < 2330) {
				if (hops < 4) {
					w21 = 1035;
				} else {
					if (hops < 5) {
						w21 = 720;
					} else {
						w21 = 574;
					}
				}
			} else {
				if (rel_time < 2358) {
					if (hops < 4) {
						if (hops < 3) {
							w21 = 203;
						} else {
							w21 = 187;
						}
					} else {
						if (hops < 5) {
							w21 = -110;
						} else {
							w21 = -178;
						}
					}
				} else {
					if (hops < 4) {
						if (cons != 4) {
							w21 = 644;
						} else {
							w21 = 427;
						}
					} else {
						if (cons != 4) {
							w21 = 313;
						} else {
							w21 = 163;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2587) {
			if (cons != 2) {
				if (cons != 4) {
					if (hops < 4) {
						if (rel_time < 2529) {
							w21 = -1085;
						} else {
							w21 = -569;
						}
					} else {
						if (cons != 3) {
							w21 = -411;
						} else {
							w21 = -37;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w21 = 60;
						} else {
							w21 = -222;
						}
					} else {
						if (hops < 5) {
							w21 = 254;
						} else {
							w21 = 358;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w21 = 29;
					} else {
						if (hops < 3) {
							w21 = -20;
						} else {
							w21 = -47;
						}
					}
				} else {
					if (hops < 5) {
						w21 = 449;
					} else {
						w21 = 550;
					}
				}
			}
		} else {
			if (rel_time < 2616) {
				if (hops < 4) {
					if (hops < 2) {
						w21 = 1085;
					} else {
						w21 = 1338;
					}
				} else {
					w21 = 351;
				}
			} else {
				if (cons != 1) {
					if (rel_time < 2787) {
						if (cons != 3) {
							w21 = 141;
						} else {
							w21 = 839;
						}
					} else {
						if (rel_time < 2815) {
							w21 = -1094;
						} else {
							w21 = 2;
						}
					}
				} else {
					if (rel_time < 2758) {
						if (hops < 5) {
							w21 = -1369;
						} else {
							w21 = -1121;
						}
					} else {
						if (rel_time < 2901) {
							w21 = 947;
						} else {
							w21 = -241;
						}
					}
				}
			}
		}
	}
	int w22;
	if (rel_time < 8894) {
		if (rel_time < 8873) {
			if (rel_time < 8827) {
				if (rel_time < 8729) {
					if (rel_time < 8557) {
						if (rel_time < 8462) {
							w22 = 2;
						} else {
							w22 = 637;
						}
					} else {
						if (prod != 4) {
							w22 = -558;
						} else {
							w22 = 2537;
						}
					}
				} else {
					if (prod != 0) {
						w22 = 1058;
					} else {
						w22 = -1997;
					}
				}
			} else {
				if (prod != 0) {
					w22 = 2604;
				} else {
					if (hops < 2) {
						w22 = -1327;
					} else {
						w22 = -1203;
					}
				}
			}
		} else {
			if (hops < 2) {
				w22 = 1841;
			} else {
				w22 = 1958;
			}
		}
	} else {
		if (rel_time < 8933) {
			if (prod != 1) {
				if (hops < 4) {
					if (hops < 2) {
						w22 = -1979;
					} else {
						w22 = -1855;
					}
				} else {
					w22 = -943;
				}
			} else {
				w22 = 1921;
			}
		} else {
			if (rel_time < 8973) {
				if (prod != 2) {
					if (hops < 2) {
						w22 = 1449;
					} else {
						w22 = 1546;
					}
				} else {
					if (hops < 4) {
						w22 = -2078;
					} else {
						if (hops < 5) {
							w22 = -1131;
						} else {
							w22 = -920;
						}
					}
				}
			} else {
				if (rel_time < 9269) {
					if (prod != 4) {
						if (rel_time < 9019) {
							w22 = 1533;
						} else {
							w22 = -218;
						}
					} else {
						if (hops < 2) {
							w22 = -984;
						} else {
							w22 = -859;
						}
					}
				} else {
					if (rel_time < 9703) {
						if (prod != 2) {
							w22 = 271;
						} else {
							w22 = -581;
						}
					} else {
						if (rel_time < 9741) {
							w22 = -411;
						} else {
							w22 = 4;
						}
					}
				}
			}
		}
	}
	int w23;
	if (prod != 4) {
		if (rel_time < 7171) {
			if (rel_time < 6941) {
				if (rel_time < 6123) {
					if (rel_time < 5710) {
						if (rel_time < 5557) {
							w23 = 0;
						} else {
							w23 = 557;
						}
					} else {
						if (prod != 3) {
							w23 = -233;
						} else {
							w23 = -1044;
						}
					}
				} else {
					if (rel_time < 6275) {
						if (rel_time < 6175) {
							w23 = 1614;
						} else {
							w23 = 1374;
						}
					} else {
						if (rel_time < 6564) {
							w23 = -306;
						} else {
							w23 = 304;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (prod != 2) {
						if (rel_time < 7028) {
							w23 = -2351;
						} else {
							w23 = -1527;
						}
					} else {
						w23 = 1498;
					}
				} else {
					w23 = 2362;
				}
			}
		} else {
			if (rel_time < 7414) {
				if (prod != 2) {
					if (rel_time < 7318) {
						if (hops < 2) {
							w23 = 2299;
						} else {
							w23 = 2405;
						}
					} else {
						w23 = 1616;
					}
				} else {
					if (hops < 2) {
						w23 = -1535;
					} else {
						w23 = -1424;
					}
				}
			} else {
				if (rel_time < 7709) {
					if (prod != 2) {
						if (prod != 0) {
							w23 = -1830;
						} else {
							w23 = -247;
						}
					} else {
						w23 = 1662;
					}
				} else {
					if (rel_time < 7749) {
						if (prod != 0) {
							w23 = 1006;
						} else {
							w23 = -956;
						}
					} else {
						if (rel_time < 8021) {
							w23 = 283;
						} else {
							w23 = -9;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5988) {
			if (rel_time < 5702) {
				if (rel_time < 4851) {
					if (rel_time < 3998) {
						if (rel_time < 3715) {
							w23 = 84;
						} else {
							w23 = -446;
						}
					} else {
						if (rel_time < 4284) {
							w23 = 956;
						} else {
							w23 = 49;
						}
					}
				} else {
					if (rel_time < 5136) {
						if (hops < 5) {
							w23 = -661;
						} else {
							w23 = -316;
						}
					} else {
						if (rel_time < 5422) {
							w23 = 302;
						} else {
							w23 = -382;
						}
					}
				}
			} else {
				if (rel_time < 5889) {
					w23 = 816;
				} else {
					if (hops < 5) {
						w23 = 702;
					} else {
						w23 = 631;
					}
				}
			}
		} else {
			if (rel_time < 6275) {
				if (hops < 2) {
					w23 = -1621;
				} else {
					if (hops < 4) {
						w23 = -1486;
					} else {
						w23 = -1577;
					}
				}
			} else {
				if (rel_time < 7127) {
					if (rel_time < 6839) {
						if (rel_time < 6564) {
							w23 = 423;
						} else {
							w23 = -918;
						}
					} else {
						w23 = 1477;
					}
				} else {
					if (rel_time < 7414) {
						if (hops < 2) {
							w23 = -1354;
						} else {
							w23 = -1267;
						}
					} else {
						if (rel_time < 7691) {
							w23 = 732;
						} else {
							w23 = -106;
						}
					}
				}
			}
		}
	}
	int w24;
	if (rel_time < 1587) {
		if (rel_time < 1444) {
			if (rel_time < 1301) {
				if (rel_time < 1100) {
					if (rel_time < 964) {
						if (rel_time < 731) {
							w24 = -20;
						} else {
							w24 = 168;
						}
					} else {
						if (cons != 2) {
							w24 = -352;
						} else {
							w24 = 132;
						}
					}
				} else {
					if (cons != 0) {
						if (cons != 2) {
							w24 = 255;
						} else {
							w24 = -125;
						}
					} else {
						if (rel_time < 1158) {
							w24 = -178;
						} else {
							w24 = 66;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (hops < 2) {
						if (cons != 2) {
							w24 = -461;
						} else {
							w24 = 71;
						}
					} else {
						if (rel_time < 1329) {
							w24 = -227;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w24 = -1020;
					} else {
						if (hops < 4) {
							w24 = -630;
						} else {
							w24 = -516;
						}
					}
				}
			}
		} else {
			if (cons != 3) {
				if (hops < 2) {
					if (rel_time < 1559) {
						if (rel_time < 1473) {
							w24 = 465;
						} else {
							w24 = 307;
						}
					} else {
						w24 = 83;
					}
				} else {
					if (hops < 4) {
						if (cons != 2) {
							w24 = 113;
						} else {
							w24 = 169;
						}
					} else {
						if (hops < 5) {
							w24 = 17;
						} else {
							w24 = 181;
						}
					}
				}
			} else {
				if (hops < 2) {
					w24 = 1416;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w24 = 755;
						} else {
							w24 = 695;
						}
					} else {
						if (hops < 5) {
							w24 = 588;
						} else {
							w24 = 710;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1730) {
			if (cons != 3) {
				if (cons != 2) {
					if (hops < 3) {
						if (hops < 2) {
							w24 = -299;
						} else {
							w24 = -80;
						}
					} else {
						if (rel_time < 1702) {
							w24 = -218;
						} else {
							w24 = -512;
						}
					}
				} else {
					if (hops < 2) {
						w24 = -207;
					} else {
						if (hops < 3) {
							w24 = 5;
						} else {
							w24 = -48;
						}
					}
				}
			} else {
				if (hops < 2) {
					w24 = -1387;
				} else {
					if (hops < 4) {
						w24 = -680;
					} else {
						w24 = -825;
					}
				}
			}
		} else {
			if (rel_time < 1873) {
				if (cons != 3) {
					if (cons != 2) {
						if (rel_time < 1844) {
							w24 = 197;
						} else {
							w24 = 323;
						}
					} else {
						if (hops < 4) {
							w24 = 34;
						} else {
							w24 = -75;
						}
					}
				} else {
					if (hops < 2) {
						w24 = 1076;
					} else {
						if (hops < 4) {
							w24 = 519;
						} else {
							w24 = 418;
						}
					}
				}
			} else {
				if (rel_time < 1901) {
					if (hops < 2) {
						w24 = -770;
					} else {
						if (hops < 4) {
							w24 = -671;
						} else {
							w24 = -608;
						}
					}
				} else {
					if (rel_time < 1930) {
						if (hops < 2) {
							w24 = 78;
						} else {
							w24 = 321;
						}
					} else {
						if (rel_time < 1958) {
							w24 = -424;
						} else {
							w24 = 0;
						}
					}
				}
			}
		}
	}
	int w25;
	if (cons != 3) {
		if (rel_time < 3598) {
			if (rel_time < 3415) {
				if (rel_time < 3016) {
					if (rel_time < 2758) {
						if (rel_time < 2730) {
							w25 = 4;
						} else {
							w25 = -680;
						}
					} else {
						if (cons != 1) {
							w25 = 78;
						} else {
							w25 = 472;
						}
					}
				} else {
					if (rel_time < 3044) {
						if (hops < 4) {
							w25 = -642;
						} else {
							w25 = -1220;
						}
					} else {
						if (rel_time < 3159) {
							w25 = -182;
						} else {
							w25 = 54;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (prod != 1) {
						if (hops < 3) {
							w25 = -135;
						} else {
							w25 = -1023;
						}
					} else {
						if (hops < 3) {
							w25 = -1154;
						} else {
							w25 = -332;
						}
					}
				} else {
					if (prod != 3) {
						if (hops < 5) {
							w25 = 188;
						} else {
							w25 = 547;
						}
					} else {
						if (hops < 5) {
							w25 = -604;
						} else {
							w25 = -330;
						}
					}
				}
			}
		} else {
			if (rel_time < 3898) {
				if (prod != 3) {
					if (prod != 1) {
						if (rel_time < 3760) {
							w25 = 50;
						} else {
							w25 = -513;
						}
					} else {
						if (rel_time < 3761) {
							w25 = 454;
						} else {
							w25 = 1061;
						}
					}
				} else {
					if (hops < 2) {
						w25 = 935;
					} else {
						if (hops < 4) {
							w25 = 1550;
						} else {
							w25 = 917;
						}
					}
				}
			} else {
				if (rel_time < 4284) {
					if (prod != 3) {
						if (prod != 1) {
							w25 = 198;
						} else {
							w25 = -699;
						}
					} else {
						if (rel_time < 4138) {
							w25 = -739;
						} else {
							w25 = -2747;
						}
					}
				} else {
					if (rel_time < 4375) {
						if (prod != 1) {
							w25 = -1002;
						} else {
							w25 = 1553;
						}
					} else {
						if (rel_time < 4420) {
							w25 = -1062;
						} else {
							w25 = 6;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3101) {
			if (rel_time < 2958) {
				if (rel_time < 2815) {
					if (rel_time < 2672) {
						if (rel_time < 2529) {
							w25 = -8;
						} else {
							w25 = 418;
						}
					} else {
						if (hops < 5) {
							w25 = -561;
						} else {
							w25 = -321;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w25 = 1005;
						} else {
							w25 = 934;
						}
					} else {
						if (hops < 5) {
							w25 = 1489;
						} else {
							w25 = 912;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w25 = -659;
					} else {
						w25 = -725;
					}
				} else {
					if (hops < 5) {
						w25 = -1453;
					} else {
						w25 = -730;
					}
				}
			}
		} else {
			if (rel_time < 3244) {
				if (hops < 4) {
					if (hops < 2) {
						w25 = 664;
					} else {
						if (hops < 3) {
							w25 = 526;
						} else {
							w25 = 466;
						}
					}
				} else {
					if (hops < 5) {
						w25 = 1029;
					} else {
						w25 = 765;
					}
				}
			} else {
				if (hops < 2) {
					w25 = 251;
				} else {
					if (hops < 3) {
						w25 = 56;
					} else {
						if (hops < 5) {
							w25 = 204;
						} else {
							w25 = 92;
						}
					}
				}
			}
		}
	}
	int w26;
	if (prod != 2) {
		if (rel_time < 6885) {
			if (rel_time < 6564) {
				if (rel_time < 6320) {
					if (rel_time < 6033) {
						if (rel_time < 5710) {
							w26 = 6;
						} else {
							w26 = -313;
						}
					} else {
						if (prod != 4) {
							w26 = 552;
						} else {
							w26 = -779;
						}
					}
				} else {
					if (prod != 4) {
						if (hops < 4) {
							w26 = -830;
						} else {
							w26 = -1635;
						}
					} else {
						if (hops < 4) {
							w26 = 40;
						} else {
							w26 = 924;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (hops < 4) {
						if (rel_time < 6839) {
							w26 = 831;
						} else {
							w26 = 339;
						}
					} else {
						if (prod != 0) {
							w26 = 2150;
						} else {
							w26 = 438;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w26 = -89;
						} else {
							w26 = -482;
						}
					} else {
						w26 = -1071;
					}
				}
			}
		} else {
			if (rel_time < 6984) {
				if (hops < 4) {
					if (hops < 2) {
						w26 = -1159;
					} else {
						if (rel_time < 6941) {
							w26 = -1392;
						} else {
							w26 = -1201;
						}
					}
				} else {
					if (rel_time < 6941) {
						w26 = -2458;
					} else {
						w26 = -1141;
					}
				}
			} else {
				if (rel_time < 7278) {
					if (prod != 0) {
						if (rel_time < 7028) {
							w26 = 140;
						} else {
							w26 = 1103;
						}
					} else {
						if (hops < 2) {
							w26 = -854;
						} else {
							w26 = -722;
						}
					}
				} else {
					if (rel_time < 8266) {
						if (rel_time < 8021) {
							w26 = -67;
						} else {
							w26 = -593;
						}
					} else {
						if (rel_time < 8443) {
							w26 = 726;
						} else {
							w26 = -37;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8686) {
			if (rel_time < 8397) {
				if (rel_time < 8126) {
					if (rel_time < 7835) {
						if (rel_time < 7547) {
							w26 = 87;
						} else {
							w26 = -1061;
						}
					} else {
						if (rel_time < 8067) {
							w26 = 2599;
						} else {
							w26 = 1123;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w26 = -790;
						} else {
							w26 = -713;
						}
					} else {
						w26 = -357;
					}
				}
			} else {
				if (hops < 4) {
					w26 = 1233;
				} else {
					if (hops < 5) {
						w26 = 356;
					} else {
						w26 = 420;
					}
				}
			}
		} else {
			if (rel_time < 8973) {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 8933) {
							w26 = -989;
						} else {
							w26 = -1099;
						}
					} else {
						if (rel_time < 8933) {
							w26 = -927;
						} else {
							w26 = -1007;
						}
					}
				} else {
					if (rel_time < 8933) {
						w26 = -472;
					} else {
						if (hops < 5) {
							w26 = -568;
						} else {
							w26 = -463;
						}
					}
				}
			} else {
				if (rel_time < 9246) {
					if (hops < 4) {
						if (rel_time < 9203) {
							w26 = 574;
						} else {
							w26 = 481;
						}
					} else {
						if (hops < 5) {
							w26 = 310;
						} else {
							w26 = 452;
						}
					}
				} else {
					if (rel_time < 9536) {
						if (rel_time < 9493) {
							w26 = -55;
						} else {
							w26 = -447;
						}
					} else {
						if (rel_time < 9826) {
							w26 = 518;
						} else {
							w26 = -70;
						}
					}
				}
			}
		}
	}
	int w27;
	if (prod != 1) {
		if (rel_time < 4420) {
			if (rel_time < 4136) {
				if (rel_time < 4044) {
					if (rel_time < 3852) {
						if (prod != 3) {
							w27 = -3;
						} else {
							w27 = -466;
						}
					} else {
						if (prod != 4) {
							w27 = 383;
						} else {
							w27 = -316;
						}
					}
				} else {
					if (rel_time < 4090) {
						w27 = 3012;
					} else {
						if (prod != 2) {
							w27 = -821;
						} else {
							w27 = 530;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (hops < 4) {
						if (rel_time < 4284) {
							w27 = -681;
						} else {
							w27 = -361;
						}
					} else {
						if (rel_time < 4184) {
							w27 = -773;
						} else {
							w27 = -1211;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w27 = 212;
						} else {
							w27 = 271;
						}
					} else {
						w27 = 1032;
					}
				}
			}
		} else {
			if (rel_time < 4466) {
				if (prod != 3) {
					w27 = -1816;
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w27 = 1101;
						} else {
							w27 = 1196;
						}
					} else {
						w27 = 1925;
					}
				}
			} else {
				if (rel_time < 4660) {
					if (prod != 4) {
						if (rel_time < 4569) {
							w27 = 420;
						} else {
							w27 = 1264;
						}
					} else {
						if (hops < 4) {
							w27 = -256;
						} else {
							w27 = -1041;
						}
					}
				} else {
					if (rel_time < 4947) {
						if (prod != 3) {
							w27 = 25;
						} else {
							w27 = -1371;
						}
					} else {
						if (rel_time < 5226) {
							w27 = 468;
						} else {
							w27 = 10;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8642) {
			if (rel_time < 8353) {
				if (rel_time < 8067) {
					if (rel_time < 7791) {
						if (rel_time < 7749) {
							w27 = -104;
						} else {
							w27 = 2796;
						}
					} else {
						if (rel_time < 8021) {
							w27 = -1888;
						} else {
							w27 = -963;
						}
					}
				} else {
					if (hops < 2) {
						w27 = 756;
					} else {
						w27 = 849;
					}
				}
			} else {
				if (rel_time < 8597) {
					if (hops < 4) {
						if (hops < 3) {
							w27 = -753;
						} else {
							w27 = -702;
						}
					} else {
						w27 = -818;
					}
				} else {
					w27 = -1006;
				}
			}
		} else {
			if (rel_time < 8933) {
				if (rel_time < 8873) {
					if (hops < 2) {
						w27 = 1248;
					} else {
						w27 = 1413;
					}
				} else {
					if (hops < 2) {
						w27 = 940;
					} else {
						if (hops < 3) {
							w27 = 1032;
						} else {
							w27 = 978;
						}
					}
				}
			} else {
				if (rel_time < 9160) {
					w27 = -1867;
				} else {
					if (rel_time < 10052) {
						if (rel_time < 9781) {
							w27 = -29;
						} else {
							w27 = 495;
						}
					} else {
						if (rel_time < 10296) {
							w27 = -372;
						} else {
							w27 = -106;
						}
					}
				}
			}
		}
	}
	int w28;
	if (prod != 1) {
		if (rel_time < 10257) {
			if (rel_time < 9967) {
				if (rel_time < 8933) {
					if (rel_time < 8827) {
						if (rel_time < 8729) {
							w28 = 3;
						} else {
							w28 = 406;
						}
					} else {
						if (rel_time < 8873) {
							w28 = -607;
						} else {
							w28 = -451;
						}
					}
				} else {
					if (rel_time < 8973) {
						if (prod != 2) {
							w28 = 769;
						} else {
							w28 = -403;
						}
					} else {
						if (rel_time < 9246) {
							w28 = 162;
						} else {
							w28 = 5;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (prod != 0) {
						if (rel_time < 10078) {
							w28 = -240;
						} else {
							w28 = -531;
						}
					} else {
						if (rel_time < 10009) {
							w28 = -352;
						} else {
							w28 = 344;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w28 = 362;
						} else {
							w28 = 274;
						}
					} else {
						w28 = 639;
					}
				}
			}
		} else {
			if (rel_time < 10335) {
				if (rel_time < 10296) {
					if (hops < 2) {
						w28 = 484;
					} else {
						if (hops < 4) {
							w28 = 303;
						} else {
							w28 = 413;
						}
					}
				} else {
					if (hops < 2) {
						w28 = 722;
					} else {
						w28 = 592;
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 10374) {
						if (hops < 4) {
							w28 = -5;
						} else {
							w28 = 121;
						}
					} else {
						if (hops < 4) {
							w28 = 133;
						} else {
							w28 = 200;
						}
					}
				} else {
					if (rel_time < 10374) {
						if (hops < 2) {
							w28 = -461;
						} else {
							w28 = -586;
						}
					} else {
						if (hops < 5) {
							w28 = -103;
						} else {
							w28 = -262;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4375) {
			if (rel_time < 4090) {
				if (rel_time < 3807) {
					if (rel_time < 3507) {
						if (hops < 4) {
							w28 = -430;
						} else {
							w28 = 400;
						}
					} else {
						if (hops < 4) {
							w28 = 571;
						} else {
							w28 = -151;
						}
					}
				} else {
					if (hops < 2) {
						w28 = 73;
					} else {
						if (hops < 4) {
							w28 = -371;
						} else {
							w28 = -759;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 4329) {
						if (hops < 2) {
							w28 = 1016;
						} else {
							w28 = 1093;
						}
					} else {
						if (hops < 2) {
							w28 = 495;
						} else {
							w28 = 557;
						}
					}
				} else {
					w28 = 1202;
				}
			}
		} else {
			if (rel_time < 4660) {
				if (hops < 2) {
					w28 = -1129;
				} else {
					if (hops < 4) {
						w28 = -1237;
					} else {
						w28 = -1343;
					}
				}
			} else {
				if (rel_time < 4947) {
					if (hops < 4) {
						if (hops < 2) {
							w28 = 698;
						} else {
							w28 = 746;
						}
					} else {
						w28 = 600;
					}
				} else {
					if (rel_time < 5181) {
						w28 = -2666;
					} else {
						if (rel_time < 5226) {
							w28 = -537;
						} else {
							w28 = -5;
						}
					}
				}
			}
		}
	}
	int w29;
	if (prod != 0) {
		if (rel_time < 9269) {
			if (rel_time < 9246) {
				if (rel_time < 8443) {
					if (rel_time < 8126) {
						if (rel_time < 7879) {
							w29 = -4;
						} else {
							w29 = -243;
						}
					} else {
						if (prod != 2) {
							w29 = 533;
						} else {
							w29 = -342;
						}
					}
				} else {
					if (rel_time < 8597) {
						if (rel_time < 8557) {
							w29 = -698;
						} else {
							w29 = -373;
						}
					} else {
						if (prod != 3) {
							w29 = 70;
						} else {
							w29 = -368;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						w29 = -591;
					} else {
						w29 = -438;
					}
				} else {
					w29 = -1054;
				}
			}
		} else {
			if (rel_time < 9536) {
				if (prod != 2) {
					if (rel_time < 9493) {
						if (prod != 3) {
							w29 = 453;
						} else {
							w29 = -1922;
						}
					} else {
						if (hops < 2) {
							w29 = 1360;
						} else {
							w29 = 1549;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 9493) {
							w29 = -35;
						} else {
							w29 = -181;
						}
					} else {
						w29 = -793;
					}
				}
			} else {
				if (rel_time < 9826) {
					if (prod != 2) {
						if (rel_time < 9579) {
							w29 = 60;
						} else {
							w29 = -375;
						}
					} else {
						if (rel_time < 9781) {
							w29 = 143;
						} else {
							w29 = 463;
						}
					}
				} else {
					if (rel_time < 10009) {
						if (prod != 3) {
							w29 = 611;
						} else {
							w29 = -548;
						}
					} else {
						if (prod != 4) {
							w29 = 8;
						} else {
							w29 = -83;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 7459) {
			if (rel_time < 7171) {
				if (rel_time < 6885) {
					if (rel_time < 6839) {
						if (rel_time < 6564) {
							w29 = 49;
						} else {
							w29 = -894;
						}
					} else {
						if (hops < 4) {
							w29 = 438;
						} else {
							w29 = 1146;
						}
					}
				} else {
					if (hops < 2) {
						w29 = -434;
					} else {
						if (hops < 5) {
							w29 = -365;
						} else {
							w29 = -407;
						}
					}
				}
			} else {
				if (rel_time < 7414) {
					if (hops < 2) {
						w29 = 866;
					} else {
						w29 = 811;
					}
				} else {
					w29 = 1785;
				}
			}
		} else {
			if (rel_time < 8310) {
				if (rel_time < 8021) {
					if (rel_time < 7749) {
						if (rel_time < 7709) {
							w29 = -645;
						} else {
							w29 = -461;
						}
					} else {
						if (hops < 3) {
							w29 = 382;
						} else {
							w29 = 464;
						}
					}
				} else {
					if (rel_time < 8266) {
						if (hops < 2) {
							w29 = -990;
						} else {
							w29 = -765;
						}
					} else {
						if (hops < 2) {
							w29 = -1212;
						} else {
							w29 = -1100;
						}
					}
				}
			} else {
				if (rel_time < 8597) {
					if (rel_time < 8557) {
						if (hops < 4) {
							w29 = 422;
						} else {
							w29 = 361;
						}
					} else {
						w29 = 1145;
					}
				} else {
					if (rel_time < 8873) {
						if (rel_time < 8827) {
							w29 = -1189;
						} else {
							w29 = -303;
						}
					} else {
						if (rel_time < 9160) {
							w29 = 336;
						} else {
							w29 = 6;
						}
					}
				}
			}
		}
	}
	int w30;
	if (hops < 2) {
		if (rel_time < 1444) {
			if (rel_time < 1301) {
				if (rel_time < 438) {
					if (cons != 1) {
						if (cons != 4) {
							w30 = 79;
						} else {
							w30 = 22;
						}
					} else {
						w30 = 166;
					}
				} else {
					if (rel_time < 503) {
						w30 = -487;
					} else {
						if (rel_time < 569) {
							w30 = 335;
						} else {
							w30 = -58;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 1329) {
						w30 = -417;
					} else {
						if (rel_time < 1358) {
							w30 = 32;
						} else {
							w30 = -143;
						}
					}
				} else {
					w30 = -508;
				}
			}
		} else {
			if (rel_time < 1529) {
				if (rel_time < 1501) {
					if (rel_time < 1473) {
						w30 = 229;
					} else {
						w30 = 185;
					}
				} else {
					w30 = 712;
				}
			} else {
				if (rel_time < 1702) {
					if (cons != 3) {
						if (rel_time < 1587) {
							w30 = 75;
						} else {
							w30 = -182;
						}
					} else {
						w30 = -691;
					}
				} else {
					if (rel_time < 1815) {
						if (rel_time < 1786) {
							w30 = 105;
						} else {
							w30 = 541;
						}
					} else {
						if (rel_time < 1958) {
							w30 = -152;
						} else {
							w30 = -9;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6409) {
			if (rel_time < 6364) {
				if (rel_time < 6123) {
					if (rel_time < 6077) {
						if (rel_time < 5754) {
							w30 = 5;
						} else {
							w30 = 139;
						}
					} else {
						if (prod != 2) {
							w30 = 1667;
						} else {
							w30 = -642;
						}
					}
				} else {
					if (prod != 1) {
						if (prod != 4) {
							w30 = 767;
						} else {
							w30 = -376;
						}
					} else {
						if (rel_time < 6320) {
							w30 = -1193;
						} else {
							w30 = -365;
						}
					}
				}
			} else {
				if (prod != 2) {
					w30 = -1876;
				} else {
					w30 = 1534;
				}
			}
		} else {
			if (rel_time < 6454) {
				if (prod != 3) {
					w30 = 633;
				} else {
					if (hops < 4) {
						w30 = -903;
					} else {
						w30 = -1474;
					}
				}
			} else {
				if (rel_time < 7503) {
					if (prod != 2) {
						if (rel_time < 7459) {
							w30 = 46;
						} else {
							w30 = -1176;
						}
					} else {
						if (rel_time < 6695) {
							w30 = -1312;
						} else {
							w30 = 108;
						}
					}
				} else {
					if (rel_time < 7879) {
						if (prod != 1) {
							w30 = 21;
						} else {
							w30 = 764;
						}
					} else {
						if (rel_time < 7977) {
							w30 = -469;
						} else {
							w30 = 15;
						}
					}
				}
			}
		}
	}
	int w31;
	if (cons != 0) {
		if (rel_time < 2987) {
			if (rel_time < 2929) {
				if (rel_time < 2416) {
					if (rel_time < 2273) {
						if (rel_time < 2130) {
							w31 = 18;
						} else {
							w31 = -168;
						}
					} else {
						if (rel_time < 2330) {
							w31 = 480;
						} else {
							w31 = 190;
						}
					}
				} else {
					if (rel_time < 2529) {
						if (cons != 2) {
							w31 = -474;
						} else {
							w31 = 37;
						}
					} else {
						if (rel_time < 2616) {
							w31 = 250;
						} else {
							w31 = -3;
						}
					}
				}
			} else {
				if (rel_time < 2958) {
					if (hops < 4) {
						if (hops < 2) {
							w31 = 519;
						} else {
							w31 = 475;
						}
					} else {
						if (hops < 5) {
							w31 = 742;
						} else {
							w31 = 455;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w31 = 79;
						} else {
							w31 = 21;
						}
					} else {
						if (hops < 5) {
							w31 = 528;
						} else {
							w31 = 32;
						}
					}
				}
			}
		} else {
			if (rel_time < 3101) {
				if (cons != 2) {
					if (hops < 4) {
						if (hops < 2) {
							w31 = -281;
						} else {
							w31 = -366;
						}
					} else {
						if (hops < 5) {
							w31 = -829;
						} else {
							w31 = -33;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w31 = -87;
						} else {
							w31 = -160;
						}
					} else {
						if (hops < 5) {
							w31 = -394;
						} else {
							w31 = -162;
						}
					}
				}
			} else {
				if (rel_time < 3187) {
					if (rel_time < 3130) {
						if (hops < 4) {
							w31 = 18;
						} else {
							w31 = -309;
						}
					} else {
						if (hops < 4) {
							w31 = 608;
						} else {
							w31 = 890;
						}
					}
				} else {
					if (cons != 1) {
						if (cons != 3) {
							w31 = -4;
						} else {
							w31 = 203;
						}
					} else {
						if (hops < 4) {
							w31 = -252;
						} else {
							w31 = -605;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 731) {
			if (rel_time < 438) {
				if (hops < 3) {
					if (rel_time < 63) {
						if (hops < 2) {
							w31 = 36;
						} else {
							w31 = 20;
						}
					} else {
						if (hops < 2) {
							w31 = 50;
						} else {
							w31 = 118;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 63) {
							w31 = 24;
						} else {
							w31 = -42;
						}
					} else {
						if (rel_time < 63) {
							w31 = -36;
						} else {
							w31 = 83;
						}
					}
				}
			} else {
				if (hops < 2) {
					w31 = -700;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w31 = -194;
						} else {
							w31 = -438;
						}
					} else {
						if (hops < 5) {
							w31 = 30;
						} else {
							w31 = 12;
						}
					}
				}
			}
		} else {
			if (rel_time < 964) {
				if (hops < 3) {
					if (hops < 2) {
						w31 = 79;
					} else {
						w31 = 342;
					}
				} else {
					if (hops < 4) {
						w31 = -49;
					} else {
						if (hops < 5) {
							w31 = 167;
						} else {
							w31 = 302;
						}
					}
				}
			} else {
				if (rel_time < 2444) {
					if (rel_time < 2301) {
						if (rel_time < 2159) {
							w31 = -5;
						} else {
							w31 = -287;
						}
					} else {
						if (hops < 4) {
							w31 = 283;
						} else {
							w31 = 121;
						}
					}
				} else {
					if (rel_time < 2873) {
						if (rel_time < 2730) {
							w31 = -100;
						} else {
							w31 = -269;
						}
					} else {
						if (rel_time < 3159) {
							w31 = -21;
						} else {
							w31 = 60;
						}
					}
				}
			}
		}
	}
	int w32;
	if (prod != 2) {
		if (rel_time < 7278) {
			if (rel_time < 7171) {
				if (rel_time < 6885) {
					if (rel_time < 6564) {
						if (rel_time < 6320) {
							w32 = 4;
						} else {
							w32 = -192;
						}
					} else {
						if (prod != 4) {
							w32 = 371;
						} else {
							w32 = -248;
						}
					}
				} else {
					if (prod != 4) {
						if (rel_time < 7028) {
							w32 = -758;
						} else {
							w32 = 13;
						}
					} else {
						if (rel_time < 7028) {
							w32 = 657;
						} else {
							w32 = 156;
						}
					}
				}
			} else {
				if (rel_time < 7260) {
					w32 = 662;
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w32 = 600;
						} else {
							w32 = 682;
						}
					} else {
						if (hops < 4) {
							w32 = 605;
						} else {
							w32 = 568;
						}
					}
				}
			}
		} else {
			if (rel_time < 7547) {
				if (prod != 0) {
					if (rel_time < 7414) {
						if (prod != 3) {
							w32 = -635;
						} else {
							w32 = 1314;
						}
					} else {
						if (hops < 4) {
							w32 = -1108;
						} else {
							w32 = -741;
						}
					}
				} else {
					if (rel_time < 7414) {
						if (hops < 2) {
							w32 = 440;
						} else {
							w32 = 384;
						}
					} else {
						w32 = 878;
					}
				}
			} else {
				if (rel_time < 7835) {
					if (rel_time < 7749) {
						if (prod != 0) {
							w32 = 195;
						} else {
							w32 = -324;
						}
					} else {
						if (rel_time < 7791) {
							w32 = 1101;
						} else {
							w32 = 876;
						}
					}
				} else {
					if (rel_time < 8729) {
						if (rel_time < 8597) {
							w32 = -52;
						} else {
							w32 = -535;
						}
					} else {
						if (rel_time < 8973) {
							w32 = 260;
						} else {
							w32 = -16;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5557) {
			if (rel_time < 5272) {
				if (rel_time < 4991) {
					if (rel_time < 4706) {
						if (rel_time < 4660) {
							w32 = -100;
						} else {
							w32 = 734;
						}
					} else {
						if (rel_time < 4947) {
							w32 = -419;
						} else {
							w32 = -615;
						}
					}
				} else {
					if (rel_time < 5226) {
						if (hops < 2) {
							w32 = 876;
						} else {
							w32 = 763;
						}
					} else {
						if (hops < 2) {
							w32 = 222;
						} else {
							w32 = 165;
						}
					}
				}
			} else {
				if (hops < 5) {
					w32 = -541;
				} else {
					w32 = -593;
				}
			}
		} else {
			if (rel_time < 6409) {
				if (rel_time < 6123) {
					if (rel_time < 5844) {
						if (hops < 3) {
							w32 = 652;
						} else {
							w32 = 607;
						}
					} else {
						if (hops < 2) {
							w32 = -768;
						} else {
							w32 = -334;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 6364) {
							w32 = 1503;
						} else {
							w32 = 1223;
						}
					} else {
						if (rel_time < 6364) {
							w32 = 1126;
						} else {
							w32 = 770;
						}
					}
				}
			} else {
				if (rel_time < 6695) {
					if (hops < 4) {
						if (hops < 3) {
							w32 = -486;
						} else {
							w32 = -521;
						}
					} else {
						w32 = -1038;
					}
				} else {
					if (rel_time < 6984) {
						if (hops < 4) {
							w32 = 544;
						} else {
							w32 = 1041;
						}
					} else {
						if (rel_time < 7260) {
							w32 = -815;
						} else {
							w32 = 104;
						}
					}
				}
			}
		}
	}
	int w33;
	if (rel_time < 10416) {
		if (rel_time < 9019) {
			if (rel_time < 8933) {
				if (rel_time < 8894) {
					if (rel_time < 8873) {
						if (rel_time < 8827) {
							w33 = 2;
						} else {
							w33 = -213;
						}
					} else {
						if (hops < 4) {
							w33 = 331;
						} else {
							w33 = 309;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 4) {
							w33 = -344;
						} else {
							w33 = -109;
						}
					} else {
						if (hops < 2) {
							w33 = 244;
						} else {
							w33 = 346;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 8973) {
						if (hops < 4) {
							w33 = -416;
						} else {
							w33 = -162;
						}
					} else {
						if (hops < 2) {
							w33 = -532;
						} else {
							w33 = -481;
						}
					}
				} else {
					if (rel_time < 8973) {
						if (hops < 2) {
							w33 = 417;
						} else {
							w33 = 452;
						}
					} else {
						if (hops < 5) {
							w33 = 871;
						} else {
							w33 = 1051;
						}
					}
				}
			}
		} else {
			if (rel_time < 9269) {
				if (prod != 0) {
					if (rel_time < 9160) {
						if (rel_time < 9117) {
							w33 = -489;
						} else {
							w33 = -958;
						}
					} else {
						if (prod != 2) {
							w33 = -269;
						} else {
							w33 = 58;
						}
					}
				} else {
					if (rel_time < 9117) {
						if (hops < 2) {
							w33 = 241;
						} else {
							w33 = 211;
						}
					} else {
						if (hops < 5) {
							w33 = 115;
						} else {
							w33 = 354;
						}
					}
				}
			} else {
				if (rel_time < 9703) {
					if (prod != 3) {
						if (rel_time < 9676) {
							w33 = -48;
						} else {
							w33 = 319;
						}
					} else {
						if (rel_time < 9309) {
							w33 = -961;
						} else {
							w33 = 470;
						}
					}
				} else {
					if (rel_time < 9826) {
						if (prod != 0) {
							w33 = -111;
						} else {
							w33 = 1197;
						}
					} else {
						if (prod != 2) {
							w33 = 14;
						} else {
							w33 = -84;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (hops < 2) {
				w33 = 120;
			} else {
				if (hops < 3) {
					w33 = 94;
				} else {
					w33 = 116;
				}
			}
		} else {
			if (hops < 5) {
				w33 = 134;
			} else {
				w33 = 173;
			}
		}
	}
	int w34;
	if (prod != 2) {
		if (rel_time < 5602) {
			if (rel_time < 5422) {
				if (rel_time < 5181) {
					if (rel_time < 4896) {
						if (rel_time < 4615) {
							w34 = 2;
						} else {
							w34 = -246;
						}
					} else {
						if (prod != 4) {
							w34 = 456;
						} else {
							w34 = -563;
						}
					}
				} else {
					if (prod != 4) {
						if (prod != 3) {
							w34 = -307;
						} else {
							w34 = -531;
						}
					} else {
						if (rel_time < 5317) {
							w34 = 276;
						} else {
							w34 = 136;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (prod != 4) {
						if (rel_time < 5557) {
							w34 = 856;
						} else {
							w34 = 453;
						}
					} else {
						if (hops < 2) {
							w34 = -1044;
						} else {
							w34 = -904;
						}
					}
				} else {
					if (hops < 2) {
						w34 = -435;
					} else {
						if (hops < 4) {
							w34 = -317;
						} else {
							w34 = -353;
						}
					}
				}
			}
		} else {
			if (rel_time < 5844) {
				if (prod != 1) {
					if (rel_time < 5754) {
						if (rel_time < 5710) {
							w34 = -13;
						} else {
							w34 = 1015;
						}
					} else {
						if (hops < 3) {
							w34 = -448;
						} else {
							w34 = -530;
						}
					}
				} else {
					if (hops < 4) {
						w34 = -728;
					} else {
						if (rel_time < 5754) {
							w34 = -813;
						} else {
							w34 = -912;
						}
					}
				}
			} else {
				if (rel_time < 6740) {
					if (rel_time < 6607) {
						if (rel_time < 6131) {
							w34 = 110;
						} else {
							w34 = -51;
						}
					} else {
						if (rel_time < 6651) {
							w34 = 1377;
						} else {
							w34 = 238;
						}
					}
				} else {
					if (rel_time < 6984) {
						if (prod != 0) {
							w34 = -334;
						} else {
							w34 = 141;
						}
					} else {
						if (rel_time < 7278) {
							w34 = 121;
						} else {
							w34 = -21;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5557) {
			if (rel_time < 5272) {
				if (rel_time < 4136) {
					if (rel_time < 3852) {
						if (rel_time < 3553) {
							w34 = 6;
						} else {
							w34 = -199;
						}
					} else {
						if (rel_time < 4090) {
							w34 = 1587;
						} else {
							w34 = 316;
						}
					}
				} else {
					if (rel_time < 4420) {
						if (hops < 4) {
							w34 = -401;
						} else {
							w34 = -683;
						}
					} else {
						if (rel_time < 4706) {
							w34 = 250;
						} else {
							w34 = -54;
						}
					}
				}
			} else {
				if (rel_time < 5512) {
					w34 = -261;
				} else {
					if (hops < 2) {
						w34 = -292;
					} else {
						if (hops < 5) {
							w34 = -271;
						} else {
							w34 = -299;
						}
					}
				}
			}
		} else {
			if (rel_time < 8686) {
				if (rel_time < 7835) {
					if (rel_time < 7547) {
						if (rel_time < 7260) {
							w34 = 32;
						} else {
							w34 = 713;
						}
					} else {
						if (hops < 2) {
							w34 = -633;
						} else {
							w34 = -570;
						}
					}
				} else {
					if (rel_time < 8126) {
						if (rel_time < 8067) {
							w34 = 1367;
						} else {
							w34 = 622;
						}
					} else {
						if (rel_time < 8397) {
							w34 = -225;
						} else {
							w34 = 439;
						}
					}
				}
			} else {
				if (rel_time < 8973) {
					if (hops < 4) {
						if (rel_time < 8933) {
							w34 = -172;
						} else {
							w34 = -209;
						}
					} else {
						if (rel_time < 8933) {
							w34 = -54;
						} else {
							w34 = -81;
						}
					}
				} else {
					if (rel_time < 10117) {
						if (rel_time < 10078) {
							w34 = -19;
						} else {
							w34 = -712;
						}
					} else {
						if (rel_time < 10335) {
							w34 = 315;
						} else {
							w34 = -1;
						}
					}
				}
			}
		}
	}
	return (172309 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32 + w33 + w34) >> 8;
}
