#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

float bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	float w0;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 4590) {
				if (hops < 3) {
					if (rel_time < 2431) {
						if (cons != 2) {
							w0 = -77.545204;
						} else {
							w0 = -86.969635;
						}
					} else {
						if (hops < 2) {
							w0 = -91.84158;
						} else {
							w0 = -88.32596;
						}
					}
				} else {
					if (rel_time < 2431) {
						if (cons != 2) {
							w0 = -72.0949;
						} else {
							w0 = -80.98706;
						}
					} else {
						if (rel_time < 2611) {
							w0 = -89.80007;
						} else {
							w0 = -83.442635;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (hops < 3) {
						if (rel_time < 4613) {
							w0 = -76.40908;
						} else {
							w0 = -81.31854;
						}
					} else {
						if (rel_time < 4613) {
							w0 = -70.02682;
						} else {
							w0 = -75.25644;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w0 = -70.73625;
						} else {
							w0 = -67.58262;
						}
					} else {
						w0 = -63.686848;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 4420) {
						if (rel_time < 2343) {
							w0 = -107.65223;
						} else {
							w0 = -102.74373;
						}
					} else {
						w0 = -97.604485;
					}
				} else {
					if (rel_time < 4420) {
						if (rel_time < 2343) {
							w0 = -104.111305;
						} else {
							w0 = -99.245735;
						}
					} else {
						w0 = -94.05541;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 4420) {
						if (rel_time < 2343) {
							w0 = -100.574196;
						} else {
							w0 = -95.71342;
						}
					} else {
						w0 = -90.4296;
					}
				} else {
					if (rel_time < 4420) {
						w0 = -92.55419;
					} else {
						w0 = -86.71745;
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
							w0 = 118.88161;
						} else {
							w0 = 125.4646;
						}
					} else {
						if (hops < 3) {
							w0 = 142.42238;
						} else {
							w0 = 148.3204;
						}
					}
				} else {
					if (hops < 3) {
						w0 = 147.56969;
					} else {
						w0 = 153.35902;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1168) {
						if (hops < 2) {
							w0 = 66.061745;
						} else {
							w0 = 69.46768;
						}
					} else {
						w0 = 61.93375;
					}
				} else {
					w0 = 74.00795;
				}
			}
		} else {
			if (rel_time < 5012) {
				if (rel_time < 4695) {
					if (size < 125) {
						if (rel_time < 2088) {
							w0 = 43.868122;
						} else {
							w0 = 33.27841;
						}
					} else {
						if (hops < 3) {
							w0 = 59.077835;
						} else {
							w0 = 65.191734;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 1) {
							w0 = -1.0945474;
						} else {
							w0 = -11.795582;
						}
					} else {
						if (hops < 2) {
							w0 = 34.41884;
						} else {
							w0 = 40.48536;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 12117) {
							w0 = 44.089176;
						} else {
							w0 = 50.127304;
						}
					} else {
						if (rel_time < 12117) {
							w0 = 47.51485;
						} else {
							w0 = 53.296844;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 12117) {
							w0 = 51.253216;
						} else {
							w0 = 57.325283;
						}
					} else {
						if (rel_time < 12117) {
							w0 = 54.584564;
						} else {
							w0 = 60.304546;
						}
					}
				}
			}
		}
	}
	float w1;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 4392) {
				if (rel_time < 4244) {
					if (rel_time < 4095) {
						if (rel_time < 3946) {
							w1 = -43.30636;
						} else {
							w1 = -51.61885;
						}
					} else {
						if (cons != 3) {
							w1 = -37.781197;
						} else {
							w1 = -30.95868;
						}
					}
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w1 = -56.105526;
						} else {
							w1 = -47.021793;
						}
					} else {
						if (hops < 4) {
							w1 = -47.053368;
						} else {
							w1 = -42.183712;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (hops < 2) {
						if (cons != 3) {
							w1 = -39.620594;
						} else {
							w1 = -37.162663;
						}
					} else {
						if (cons != 3) {
							w1 = -36.494194;
						} else {
							w1 = -33.38747;
						}
					}
				} else {
					if (rel_time < 4451) {
						if (hops < 4) {
							w1 = -32.37871;
						} else {
							w1 = -27.533209;
						}
					} else {
						if (hops < 4) {
							w1 = -57.302116;
						} else {
							w1 = -52.39295;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 4420) {
						if (rel_time < 4273) {
							w1 = -51.223034;
						} else {
							w1 = -55.999443;
						}
					} else {
						w1 = -48.8446;
					}
				} else {
					if (rel_time < 4420) {
						if (rel_time < 4273) {
							w1 = -49.46885;
						} else {
							w1 = -54.28622;
						}
					} else {
						w1 = -47.062748;
					}
				}
			} else {
				if (rel_time < 2343) {
					w1 = -50.49128;
				} else {
					if (rel_time < 2491) {
						w1 = -42.334675;
					} else {
						if (rel_time < 2640) {
							w1 = -51.328835;
						} else {
							w1 = -47.26968;
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
							w1 = 57.429897;
						} else {
							w1 = 61.99845;
						}
					} else {
						if (hops < 2) {
							w1 = 69.3537;
						} else {
							w1 = 73.616455;
						}
					}
				} else {
					if (hops < 2) {
						w1 = 71.84583;
					} else {
						if (rel_time < 1347) {
							w1 = 71.34846;
						} else {
							w1 = 77.046455;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1168) {
						if (hops < 2) {
							w1 = 33.059536;
						} else {
							w1 = 34.759712;
						}
					} else {
						if (hops < 2) {
							w1 = 29.18296;
						} else {
							w1 = 32.771584;
						}
					}
				} else {
					if (rel_time < 1168) {
						if (hops < 4) {
							w1 = 36.47942;
						} else {
							w1 = 39.53311;
						}
					} else {
						w1 = 29.269888;
					}
				}
			}
		} else {
			if (rel_time < 5010) {
				if (rel_time < 4695) {
					if (size < 125) {
						if (cons != 0) {
							w1 = 21.277975;
						} else {
							w1 = 10.174314;
						}
					} else {
						if (cons != 3) {
							w1 = 32.063004;
						} else {
							w1 = 25.585285;
						}
					}
				} else {
					if (prod != 3) {
						if (prod != 1) {
							w1 = 6.804673;
						} else {
							w1 = -5.899247;
						}
					} else {
						if (hops < 3) {
							w1 = -13.539122;
						} else {
							w1 = -7.3487206;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11948) {
							w1 = 22.132627;
						} else {
							w1 = 19.88453;
						}
					} else {
						if (rel_time < 11948) {
							w1 = 23.828602;
						} else {
							w1 = 21.834064;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 12075) {
							w1 = 25.688047;
						} else {
							w1 = 22.87598;
						}
					} else {
						if (rel_time < 11991) {
							w1 = 27.411253;
						} else {
							w1 = 24.55613;
						}
					}
				}
			}
		}
	}
	float w2;
	if (size < 38) {
		if (hops < 3) {
			if (cons != 0) {
				if (rel_time < 3797) {
					if (rel_time < 3650) {
						if (rel_time < 3501) {
							w2 = -23.698217;
						} else {
							w2 = -15.063222;
						}
					} else {
						if (cons != 1) {
							w2 = -29.8721;
						} else {
							w2 = -36.28795;
						}
					}
				} else {
					if (rel_time < 3916) {
						if (cons != 2) {
							w2 = -10.594293;
						} else {
							w2 = -19.898714;
						}
					} else {
						if (rel_time < 4392) {
							w2 = -23.886223;
						} else {
							w2 = -20.01959;
						}
					}
				}
			} else {
				if (rel_time < 2343) {
					w2 = -27.807665;
				} else {
					if (rel_time < 2491) {
						if (hops < 2) {
							w2 = -20.85678;
						} else {
							w2 = -19.912241;
						}
					} else {
						if (rel_time < 2640) {
							w2 = -29.353085;
						} else {
							w2 = -25.07689;
						}
					}
				}
			}
		} else {
			if (cons != 0) {
				if (hops < 4) {
					if (rel_time < 2462) {
						if (cons != 2) {
							w2 = -15.127693;
						} else {
							w2 = -19.722923;
						}
					} else {
						if (rel_time < 2580) {
							w2 = -26.414371;
						} else {
							w2 = -20.63588;
						}
					}
				} else {
					if (rel_time < 2462) {
						if (cons != 2) {
							w2 = -11.867068;
						} else {
							w2 = -16.200018;
						}
					} else {
						if (rel_time < 2580) {
							w2 = -22.87268;
						} else {
							w2 = -17.249676;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 4540) {
						if (rel_time < 4273) {
							w2 = -23.986078;
						} else {
							w2 = -28.657267;
						}
					} else {
						w2 = -21.574268;
					}
				} else {
					if (rel_time < 2343) {
						w2 = -25.659891;
					} else {
						if (rel_time < 2789) {
							w2 = -20.862795;
						} else {
							w2 = -22.518518;
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
							w2 = 29.907036;
						} else {
							w2 = 34.674007;
						}
					} else {
						if (hops < 4) {
							w2 = 35.79753;
						} else {
							w2 = 40.11262;
						}
					}
				} else {
					if (rel_time < 1347) {
						if (hops < 2) {
							w2 = 31.595186;
						} else {
							w2 = 35.75316;
						}
					} else {
						if (hops < 4) {
							w2 = 37.595695;
						} else {
							w2 = 41.72116;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1168) {
						if (hops < 2) {
							w2 = 16.54413;
						} else {
							w2 = 17.392809;
						}
					} else {
						if (hops < 2) {
							w2 = 14.647591;
						} else {
							w2 = 16.449537;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1168) {
							w2 = 18.255495;
						} else {
							w2 = 14.911071;
						}
					} else {
						w2 = 19.81762;
					}
				}
			}
		} else {
			if (rel_time < 5012) {
				if (rel_time < 2137) {
					if (cons != 0) {
						if (hops < 2) {
							w2 = 11.772485;
						} else {
							w2 = 16.75983;
						}
					} else {
						if (rel_time < 1571) {
							w2 = 17.820372;
						} else {
							w2 = 5.087786;
						}
					}
				} else {
					if (prod != 3) {
						if (hops < 3) {
							w2 = 2.1831398;
						} else {
							w2 = 7.960575;
						}
					} else {
						if (hops < 2) {
							w2 = -8.650885;
						} else {
							w2 = -4.354308;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 12117) {
							w2 = 11.011194;
						} else {
							w2 = 15.158233;
						}
					} else {
						if (rel_time < 5109) {
							w2 = 14.854506;
						} else {
							w2 = 11.862452;
						}
					}
				} else {
					if (rel_time < 12117) {
						if (rel_time < 12075) {
							w2 = 13.06618;
						} else {
							w2 = 5.1458178;
						}
					} else {
						w2 = 17.459227;
					}
				}
			}
		}
	}
	float w3;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 2462) {
				if (cons != 0) {
					if (cons != 2) {
						if (cons != 4) {
							w3 = -6.7606964;
						} else {
							w3 = -9.403221;
						}
					} else {
						w3 = -11.899518;
					}
				} else {
					if (rel_time < 2343) {
						w3 = -14.391792;
					} else {
						w3 = -10.540194;
					}
				}
			} else {
				if (rel_time < 2580) {
					if (cons != 0) {
						if (cons != 2) {
							w3 = -22.75219;
						} else {
							w3 = -15.073636;
						}
					} else {
						w3 = -10.379077;
					}
				} else {
					if (rel_time < 2759) {
						if (rel_time < 2640) {
							w3 = -12.917445;
						} else {
							w3 = -4.9404645;
						}
					} else {
						if (rel_time < 2935) {
							w3 = -18.879005;
						} else {
							w3 = -12.09678;
						}
					}
				}
			}
		} else {
			if (rel_time < 2759) {
				if (rel_time < 2640) {
					if (rel_time < 2462) {
						if (cons != 0) {
							w3 = -6.8181677;
						} else {
							w3 = -12.819984;
						}
					} else {
						if (cons != 3) {
							w3 = -12.327142;
						} else {
							w3 = -19.602898;
						}
					}
				} else {
					if (cons != 3) {
						if (cons != 1) {
							w3 = -6.8361297;
						} else {
							w3 = 1.3086026;
						}
					} else {
						if (hops < 4) {
							w3 = 1.6766008;
						} else {
							w3 = 3.342971;
						}
					}
				}
			} else {
				if (rel_time < 2935) {
					if (cons != 1) {
						if (cons != 3) {
							w3 = -13.7915535;
						} else {
							w3 = -23.507002;
						}
					} else {
						if (hops < 4) {
							w3 = -23.8167;
						} else {
							w3 = -22.193577;
						}
					}
				} else {
					if (rel_time < 3025) {
						if (cons != 2) {
							w3 = 1.3522235;
						} else {
							w3 = -7.1937375;
						}
					} else {
						if (rel_time < 3205) {
							w3 = -15.240573;
						} else {
							w3 = -10.294112;
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
							w3 = 18.445621;
						} else {
							w3 = 23.019133;
						}
					} else {
						if (hops < 2) {
							w3 = 13.508668;
						} else {
							w3 = 15.07949;
						}
					}
				} else {
					if (hops < 2) {
						w3 = 13.628649;
					} else {
						if (hops < 4) {
							w3 = 14.854882;
						} else {
							w3 = 16.035324;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1168) {
						if (hops < 2) {
							w3 = 8.279247;
						} else {
							w3 = 8.702878;
						}
					} else {
						if (hops < 2) {
							w3 = 7.3519673;
						} else {
							w3 = 8.256779;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1168) {
							w3 = 9.135652;
						} else {
							w3 = 7.596205;
						}
					} else {
						w3 = 9.934409;
					}
				}
			}
		} else {
			if (rel_time < 5010) {
				if (rel_time < 4695) {
					if (hops < 3) {
						if (size < 125) {
							w3 = 3.550748;
						} else {
							w3 = 6.682479;
						}
					} else {
						if (rel_time < 2137) {
							w3 = 9.251083;
						} else {
							w3 = 5.5187225;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 2) {
							w3 = -5.2139325;
						} else {
							w3 = -1.2735691;
						}
					} else {
						if (rel_time < 4744) {
							w3 = 10.033697;
						} else {
							w3 = 15.696296;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 5206) {
						if (prod != 2) {
							w3 = 10.180464;
						} else {
							w3 = -2.039022;
						}
					} else {
						if (rel_time < 5409) {
							w3 = 2.4010959;
						} else {
							w3 = 5.794681;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 5206) {
							w3 = 7.9080477;
						} else {
							w3 = 6.257191;
						}
					} else {
						if (rel_time < 11687) {
							w3 = 7.056095;
						} else {
							w3 = 8.283145;
						}
					}
				}
			}
		}
	}
	float w4;
	if (size < 38) {
		if (rel_time < 3381) {
			if (rel_time < 3234) {
				if (rel_time < 3085) {
					if (rel_time < 2935) {
						if (rel_time < 2789) {
							w4 = -4.945716;
						} else {
							w4 = -9.692831;
						}
					} else {
						if (rel_time < 2964) {
							w4 = 3.0869389;
						} else {
							w4 = -1.2940015;
						}
					}
				} else {
					if (rel_time < 3171) {
						if (cons != 2) {
							w4 = -16.304934;
						} else {
							w4 = -8.090339;
						}
					} else {
						if (cons != 1) {
							w4 = -9.080467;
						} else {
							w4 = 6.873323;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 4) {
							w4 = -2.5030973;
						} else {
							w4 = -0.7973534;
						}
					} else {
						if (rel_time < 3263) {
							w4 = 6.8083014;
						} else {
							w4 = -16.857183;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 6.231253;
						} else {
							w4 = 6.7613325;
						}
					} else {
						w4 = 8.226838;
					}
				}
			}
		} else {
			if (rel_time < 3470) {
				if (cons != 2) {
					if (cons != 4) {
						if (hops < 4) {
							w4 = -18.150015;
						} else {
							w4 = -16.3974;
						}
					} else {
						if (hops < 4) {
							w4 = -9.162647;
						} else {
							w4 = -7.744426;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w4 = -9.439848;
						} else {
							w4 = -8.818668;
						}
					} else {
						w4 = -7.2503214;
					}
				}
			} else {
				if (rel_time < 3679) {
					if (rel_time < 3530) {
						if (cons != 1) {
							w4 = -10.346394;
						} else {
							w4 = 4.6172547;
						}
					} else {
						if (rel_time < 3619) {
							w4 = 1.0229775;
						} else {
							w4 = -4.1620255;
						}
					}
				} else {
					if (rel_time < 3799) {
						if (cons != 3) {
							w4 = -9.821988;
						} else {
							w4 = -16.607525;
						}
					} else {
						if (rel_time < 3946) {
							w4 = -1.0011055;
						} else {
							w4 = -5.755021;
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
							w4 = 7.21198;
						} else {
							w4 = 8.2344265;
						}
					} else {
						if (hops < 2) {
							w4 = 7.60822;
						} else {
							w4 = 9.419965;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1347) {
							w4 = 6.720237;
						} else {
							w4 = 8.680093;
						}
					} else {
						if (hops < 4) {
							w4 = 9.752033;
						} else {
							w4 = 11.629132;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1168) {
							w4 = 4.143223;
						} else {
							w4 = 3.690111;
						}
					} else {
						w4 = 4.3235955;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1168) {
							w4 = 4.571766;
						} else {
							w4 = 3.8697717;
						}
					} else {
						w4 = 4.980051;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 5010) {
					if (rel_time < 2137) {
						if (cons != 0) {
							w4 = 3.343444;
						} else {
							w4 = -1.9264109;
						}
					} else {
						if (cons != 4) {
							w4 = -2.1404326;
						} else {
							w4 = 3.4102502;
						}
					}
				} else {
					if (rel_time < 11948) {
						if (rel_time < 11687) {
							w4 = 2.6025467;
						} else {
							w4 = 5.253677;
						}
					} else {
						if (prod != 2) {
							w4 = -1.400749;
						} else {
							w4 = 9.54232;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (rel_time < 5508) {
						if (rel_time < 2137) {
							w4 = 4.0307713;
						} else {
							w4 = 1.5440596;
						}
					} else {
						if (rel_time < 5808) {
							w4 = 5.5431185;
						} else {
							w4 = 3.1384187;
						}
					}
				} else {
					if (rel_time < 1840) {
						if (hops < 4) {
							w4 = 7.0927906;
						} else {
							w4 = 10.131458;
						}
					} else {
						if (rel_time < 2088) {
							w4 = 1.8664386;
						} else {
							w4 = 7.0841875;
						}
					}
				}
			}
		}
	}
	float w5;
	if (size < 38) {
		if (rel_time < 4420) {
			if (rel_time < 4273) {
				if (rel_time < 4124) {
					if (rel_time < 3976) {
						if (rel_time < 3828) {
							w5 = -2.9506934;
						} else {
							w5 = -0.22792098;
						}
					} else {
						if (cons != 2) {
							w5 = -7.696613;
						} else {
							w5 = -1.3396802;
						}
					}
				} else {
					if (rel_time < 4154) {
						if (cons != 1) {
							w5 = -2.3202806;
						} else {
							w5 = 6.4597692;
						}
					} else {
						if (cons != 3) {
							w5 = -1.8564045;
						} else {
							w5 = 3.9563966;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 4361) {
							w5 = -8.641542;
						} else {
							w5 = -6.703657;
						}
					} else {
						if (hops < 4) {
							w5 = -4.211179;
						} else {
							w5 = -2.7072372;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w5 = -4.189682;
						} else {
							w5 = -3.619331;
						}
					} else {
						w5 = -4.544443;
					}
				}
			}
		} else {
			if (rel_time < 4510) {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 4451) {
							w5 = 2.2784176;
						} else {
							w5 = 4.0953727;
						}
					} else {
						if (hops < 3) {
							w5 = -3.8105016;
						} else {
							w5 = -2.1681106;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w5 = -3.3367708;
						} else {
							w5 = -2.3339362;
						}
					} else {
						if (rel_time < 4451) {
							w5 = -1.6445293;
						} else {
							w5 = -0.32322693;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (rel_time < 4570) {
						if (hops < 4) {
							w5 = -3.2648861;
						} else {
							w5 = -0.77230245;
						}
					} else {
						if (rel_time < 4590) {
							w5 = 12.877142;
						} else {
							w5 = 0.20874676;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w5 = -11.233653;
						} else {
							w5 = -10.415916;
						}
					} else {
						if (hops < 4) {
							w5 = -9.042424;
						} else {
							w5 = -9.65835;
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
						w5 = 2.0733962;
					} else {
						w5 = 2.1944869;
					}
				} else {
					if (hops < 4) {
						w5 = 2.2878563;
					} else {
						w5 = 2.4964645;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1420) {
						if (cons != 4) {
							w5 = 4.133927;
						} else {
							w5 = 7.39973;
						}
					} else {
						if (hops < 2) {
							w5 = 3.0499969;
						} else {
							w5 = 3.3949564;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 1420) {
							w5 = 6.3163795;
						} else {
							w5 = 5.8902216;
						}
					} else {
						w5 = 3.9332335;
					}
				}
			}
		} else {
			if (rel_time < 1888) {
				if (cons != 0) {
					if (cons != 1) {
						if (cons != 3) {
							w5 = 4.4691677;
						} else {
							w5 = -0.60887885;
						}
					} else {
						if (rel_time < 1644) {
							w5 = -3.8478312;
						} else {
							w5 = 9.024509;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w5 = -9.259981;
						} else {
							w5 = -8.161424;
						}
					} else {
						w5 = -4.854468;
					}
				}
			} else {
				if (rel_time < 1937) {
					if (cons != 1) {
						if (hops < 4) {
							w5 = -1.2416612;
						} else {
							w5 = 2.8693528;
						}
					} else {
						if (hops < 4) {
							w5 = 8.552742;
						} else {
							w5 = 12.566576;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 2234) {
							w5 = 3.5540469;
						} else {
							w5 = 1.437087;
						}
					} else {
						if (rel_time < 2137) {
							w5 = -11.159846;
						} else {
							w5 = -3.7824023;
						}
					}
				}
			}
		}
	}
	float w6;
	if (size < 38) {
		if (hops < 4) {
			if (rel_time < 4634) {
				if (rel_time < 3381) {
					if (rel_time < 3234) {
						if (rel_time < 3085) {
							w6 = -1.1139754;
						} else {
							w6 = -3.8711915;
						}
					} else {
						if (cons != 3) {
							w6 = 0.9645418;
						} else {
							w6 = 4.773644;
						}
					}
				} else {
					if (rel_time < 3470) {
						if (cons != 2) {
							w6 = -7.3379083;
						} else {
							w6 = -3.0358331;
						}
					} else {
						if (rel_time < 3679) {
							w6 = -0.53425205;
						} else {
							w6 = -1.8838868;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w6 = 3.1187105;
					} else {
						w6 = 2.3175714;
					}
				} else {
					w6 = 3.5458808;
				}
			}
		} else {
			if (cons != 0) {
				if (rel_time < 2757) {
					if (rel_time < 2611) {
						if (cons != 1) {
							w6 = 0.92836505;
						} else {
							w6 = -1.4654279;
						}
					} else {
						if (rel_time < 2640) {
							w6 = 12.644818;
						} else {
							w6 = 3.802344;
						}
					}
				} else {
					if (rel_time < 2876) {
						if (cons != 1) {
							w6 = -1.8201056;
						} else {
							w6 = -6.1950727;
						}
					} else {
						if (rel_time < 4634) {
							w6 = 0.3169944;
						} else {
							w6 = 5.046165;
						}
					}
				}
			} else {
				if (rel_time < 3679) {
					if (rel_time < 3530) {
						if (rel_time < 3381) {
							w6 = -0.62755984;
						} else {
							w6 = -3.4663615;
						}
					} else {
						w6 = 2.9249177;
					}
				} else {
					if (rel_time < 3828) {
						if (rel_time < 3799) {
							w6 = -3.2208605;
						} else {
							w6 = -7.608557;
						}
					} else {
						if (rel_time < 3976) {
							w6 = 0.86534244;
						} else {
							w6 = -1.7212287;
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
							w6 = 0.43970624;
						} else {
							w6 = -5.2474713;
						}
					} else {
						if (rel_time < 6268) {
							w6 = 10.694445;
						} else {
							w6 = 0.7549185;
						}
					}
				} else {
					if (prod != 3) {
						if (hops < 3) {
							w6 = 8.966882;
						} else {
							w6 = 11.748844;
						}
					} else {
						if (hops < 3) {
							w6 = -7.388758;
						} else {
							w6 = -3.408178;
						}
					}
				}
			} else {
				if (hops < 3) {
					w6 = 4.6666784;
				} else {
					w6 = 3.1272209;
				}
			}
		} else {
			if (rel_time < 5206) {
				if (prod != 2) {
					if (rel_time < 5060) {
						if (rel_time < 5012) {
							w6 = 3.1533384;
						} else {
							w6 = -2.6125324;
						}
					} else {
						if (prod != 4) {
							w6 = 10.552366;
						} else {
							w6 = -5.3533654;
						}
					}
				} else {
					if (rel_time < 4840) {
						w6 = 3.4598787;
					} else {
						w6 = -5.3759317;
					}
				}
			} else {
				if (rel_time < 5312) {
					if (prod != 0) {
						w6 = -5.383162;
					} else {
						w6 = 7.789032;
					}
				} else {
					if (rel_time < 5360) {
						w6 = 8.081006;
					} else {
						if (rel_time < 5409) {
							w6 = -7.7883954;
						} else {
							w6 = 1.2994115;
						}
					}
				}
			}
		}
	}
	float w7;
	if (size < 38) {
		if (rel_time < 2611) {
			if (rel_time < 2491) {
				if (cons != 3) {
					if (cons != 1) {
						if (rel_time < 2431) {
							w7 = -2.206692;
						} else {
							w7 = 0.48356214;
						}
					} else {
						if (rel_time < 2373) {
							w7 = 2.4669993;
						} else {
							w7 = -8.663451;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w7 = 1.120197;
						} else {
							w7 = 4.5798426;
						}
					} else {
						if (hops < 4) {
							w7 = 1.1459928;
						} else {
							w7 = 1.8721356;
						}
					}
				}
			} else {
				if (rel_time < 2519) {
					if (hops < 3) {
						if (hops < 2) {
							w7 = -8.7487955;
						} else {
							w7 = -12.208234;
						}
					} else {
						if (hops < 4) {
							w7 = -6.6848164;
						} else {
							w7 = -4.664307;
						}
					}
				} else {
					if (cons != 3) {
						if (hops < 3) {
							w7 = -2.931127;
						} else {
							w7 = 1.2664351;
						}
					} else {
						if (hops < 3) {
							w7 = -8.612013;
						} else {
							w7 = -2.7358403;
						}
					}
				}
			}
		} else {
			if (rel_time < 2728) {
				if (cons != 0) {
					if (cons != 2) {
						if (rel_time < 2640) {
							w7 = 11.148093;
						} else {
							w7 = 5.119311;
						}
					} else {
						if (hops < 2) {
							w7 = -1.2022578;
						} else {
							w7 = 1.1151462;
						}
					}
				} else {
					if (hops < 2) {
						w7 = -4.162317;
					} else {
						w7 = -3.5039732;
					}
				}
			} else {
				if (rel_time < 2935) {
					if (cons != 1) {
						if (cons != 3) {
							w7 = -0.28545755;
						} else {
							w7 = -5.9980936;
						}
					} else {
						if (hops < 2) {
							w7 = -10.313647;
						} else {
							w7 = -5.907119;
						}
					}
				} else {
					if (rel_time < 3056) {
						if (cons != 2) {
							w7 = 3.1691132;
						} else {
							w7 = -0.78188145;
						}
					} else {
						if (rel_time < 3171) {
							w7 = -2.8961759;
						} else {
							w7 = -0.65484273;
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
						w7 = 0.8179257;
					} else {
						if (hops < 3) {
							w7 = 0.8783907;
						} else {
							w7 = 0.9252676;
						}
					}
				} else {
					w7 = -0.3211263;
				}
			} else {
				if (cons != 2) {
					if (rel_time < 1420) {
						if (rel_time < 1347) {
							w7 = 1.8237549;
						} else {
							w7 = 2.6167245;
						}
					} else {
						if (rel_time < 1501) {
							w7 = 1.2526234;
						} else {
							w7 = 1.6104299;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w7 = 0.9325469;
						} else {
							w7 = 1.3049035;
						}
					} else {
						if (rel_time < 1285) {
							w7 = 0.37726453;
						} else {
							w7 = 0.43967038;
						}
					}
				}
			}
		} else {
			if (rel_time < 5060) {
				if (rel_time < 4695) {
					if (rel_time < 1888) {
						if (cons != 0) {
							w7 = 0.3454094;
						} else {
							w7 = -4.616012;
						}
					} else {
						if (rel_time < 1937) {
							w7 = 3.4364123;
						} else {
							w7 = 0.39460668;
						}
					}
				} else {
					if (rel_time < 4888) {
						if (prod != 0) {
							w7 = -2.9422317;
						} else {
							w7 = 3.687872;
						}
					} else {
						if (prod != 1) {
							w7 = -1.4218173;
						} else {
							w7 = 7.4072247;
						}
					}
				}
			} else {
				if (rel_time < 5360) {
					if (prod != 4) {
						if (prod != 2) {
							w7 = 7.252805;
						} else {
							w7 = -4.0313783;
						}
					} else {
						if (rel_time < 5206) {
							w7 = -7.5845003;
						} else {
							w7 = -4.9827147;
						}
					}
				} else {
					if (rel_time < 5409) {
						if (prod != 1) {
							w7 = 8.373879;
						} else {
							w7 = -7.3570094;
						}
					} else {
						if (rel_time < 5411) {
							w7 = 7.1139936;
						} else {
							w7 = 0.3799342;
						}
					}
				}
			}
		}
	}
	float w8;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 3025) {
				if (rel_time < 2935) {
					if (rel_time < 2789) {
						if (rel_time < 2611) {
							w8 = -1.4347674;
						} else {
							w8 = 0.72548693;
						}
					} else {
						if (cons != 3) {
							w8 = -0.78355485;
						} else {
							w8 = -5.8681993;
						}
					}
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w8 = 6.3476644;
						} else {
							w8 = -1.6695902;
						}
					} else {
						if (rel_time < 2967) {
							w8 = 0.24809246;
						} else {
							w8 = 0.09944375;
						}
					}
				}
			} else {
				if (rel_time < 3205) {
					if (cons != 1) {
						if (cons != 3) {
							w8 = -1.3206754;
						} else {
							w8 = -6.0777135;
						}
					} else {
						if (rel_time < 3085) {
							w8 = -14.428213;
						} else {
							w8 = -5.3040395;
						}
					}
				} else {
					if (rel_time < 3322) {
						if (cons != 1) {
							w8 = -0.0014232463;
						} else {
							w8 = 5.1001706;
						}
					} else {
						if (rel_time < 4124) {
							w8 = -1.5497869;
						} else {
							w8 = -0.22340459;
						}
					}
				}
			}
		} else {
			if (cons != 0) {
				if (rel_time < 3767) {
					if (rel_time < 3650) {
						if (rel_time < 3501) {
							w8 = -0.17227027;
						} else {
							w8 = 2.703311;
						}
					} else {
						if (cons != 2) {
							w8 = -6.713318;
						} else {
							w8 = -0.12994419;
						}
					}
				} else {
					if (rel_time < 3916) {
						if (cons != 2) {
							w8 = 4.3044043;
						} else {
							w8 = -1.2758307;
						}
					} else {
						if (rel_time < 4065) {
							w8 = -2.112677;
						} else {
							w8 = 0.4139357;
						}
					}
				}
			} else {
				if (rel_time < 3085) {
					if (rel_time < 3056) {
						if (rel_time < 2789) {
							w8 = -0.07614421;
						} else {
							w8 = -2.434878;
						}
					} else {
						if (hops < 4) {
							w8 = 3.7400665;
						} else {
							w8 = 4.7212863;
						}
					}
				} else {
					if (rel_time < 4124) {
						if (rel_time < 3976) {
							w8 = -1.2877196;
						} else {
							w8 = -4.1487837;
						}
					} else {
						if (rel_time < 4273) {
							w8 = 2.3753932;
						} else {
							w8 = -0.9918971;
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
							w8 = 0.18695067;
						} else {
							w8 = 7.3487267;
						}
					} else {
						if (prod != 0) {
							w8 = -5.7864203;
						} else {
							w8 = 6.0539904;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 5.922383;
					} else {
						if (hops < 3) {
							w8 = 6.27319;
						} else {
							w8 = 6.5439053;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (prod != 4) {
						if (rel_time < 11539) {
							w8 = -9.140899;
						} else {
							w8 = -3.622373;
						}
					} else {
						if (hops < 2) {
							w8 = 5.8987155;
						} else {
							w8 = 6.4347143;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 5.9027543;
					} else {
						if (hops < 3) {
							w8 = 6.2731814;
						} else {
							w8 = 6.5868297;
						}
					}
				}
			}
		} else {
			if (rel_time < 11734) {
				if (prod != 1) {
					if (hops < 2) {
						w8 = -6.679735;
					} else {
						w8 = -5.72843;
					}
				} else {
					if (hops < 2) {
						w8 = 9.282847;
					} else {
						w8 = 9.988677;
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 11752) {
						if (hops < 2) {
							w8 = -6.732923;
						} else {
							w8 = -5.958818;
						}
					} else {
						if (prod != 4) {
							w8 = 4.2188444;
						} else {
							w8 = -2.0009148;
						}
					}
				} else {
					if (hops < 2) {
						w8 = -7.1413937;
					} else {
						if (hops < 3) {
							w8 = -8.699176;
						} else {
							w8 = -9.193184;
						}
					}
				}
			}
		}
	}
	float w9;
	if (rel_time < 12117) {
		if (rel_time < 12075) {
			if (rel_time < 6668) {
				if (rel_time < 6662) {
					if (rel_time < 6614) {
						if (rel_time < 6567) {
							w9 = -0.06394296;
						} else {
							w9 = -7.7036815;
						}
					} else {
						if (prod != 2) {
							w9 = -8.843581;
						} else {
							w9 = 6.204954;
						}
					}
				} else {
					if (hops < 3) {
						w9 = -9.974948;
					} else {
						w9 = -9.545206;
					}
				}
			} else {
				if (rel_time < 7013) {
					if (prod != 0) {
						if (prod != 2) {
							w9 = 7.4641404;
						} else {
							w9 = -5.8835993;
						}
					} else {
						w9 = -5.912926;
					}
				} else {
					if (rel_time < 7118) {
						if (prod != 0) {
							w9 = -5.903452;
						} else {
							w9 = 5.923712;
						}
					} else {
						if (rel_time < 7124) {
							w9 = 6.1691523;
						} else {
							w9 = 0.07612747;
						}
					}
				}
			}
		} else {
			if (prod != 3) {
				if (hops < 2) {
					w9 = 6.1492987;
				} else {
					if (hops < 3) {
						w9 = 3.9584837;
					} else {
						w9 = 6.788255;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w9 = -4.9330206;
						} else {
							w9 = -6.80655;
						}
					} else {
						w9 = -4.002894;
					}
				} else {
					w9 = -7.137475;
				}
			}
		}
	} else {
		if (hops < 3) {
			w9 = 3.1445353;
		} else {
			if (hops < 4) {
				w9 = 2.3747818;
			} else {
				w9 = 3.022895;
			}
		}
	}
	float w10;
	if (hops < 4) {
		if (rel_time < 7915) {
			if (rel_time < 7869) {
				if (rel_time < 7820) {
					if (rel_time < 7774) {
						if (rel_time < 7469) {
							w10 = -0.15748118;
						} else {
							w10 = 1.494181;
						}
					} else {
						if (prod != 1) {
							w10 = 5.977052;
						} else {
							w10 = -9.842493;
						}
					}
				} else {
					if (prod != 2) {
						w10 = -9.957558;
					} else {
						if (hops < 2) {
							w10 = 5.789038;
						} else {
							w10 = 6.2792296;
						}
					}
				}
			} else {
				if (prod != 3) {
					w10 = 5.8590074;
				} else {
					if (hops < 3) {
						w10 = -10.00497;
					} else {
						w10 = -9.594181;
					}
				}
			}
		} else {
			if (rel_time < 7924) {
				if (hops < 2) {
					w10 = 5.777173;
				} else {
					w10 = 6.2590747;
				}
			} else {
				if (rel_time < 8030) {
					if (prod != 0) {
						w10 = 6.109751;
					} else {
						if (hops < 3) {
							w10 = -5.8926034;
						} else {
							w10 = -6.1311216;
						}
					}
				} else {
					if (rel_time < 8077) {
						if (prod != 0) {
							w10 = 10.005223;
						} else {
							w10 = -6.0252314;
						}
					} else {
						if (rel_time < 8219) {
							w10 = 2.2130237;
						} else {
							w10 = -0.011886572;
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
							w10 = 0.016318688;
						} else {
							w10 = 1.0753909;
						}
					} else {
						if (cons != 1) {
							w10 = 0.88553095;
						} else {
							w10 = 3.4945903;
						}
					}
				} else {
					if (rel_time < 1571) {
						if (rel_time < 1168) {
							w10 = -0.22232221;
						} else {
							w10 = 1.0827214;
						}
					} else {
						w10 = -1.7653638;
					}
				}
			} else {
				if (cons != 1) {
					if (cons != 4) {
						if (rel_time < 2137) {
							w10 = 7.421344;
						} else {
							w10 = 3.382362;
						}
					} else {
						if (rel_time < 2035) {
							w10 = 0.5737263;
						} else {
							w10 = 0.7446058;
						}
					}
				} else {
					if (rel_time < 2137) {
						w10 = -3.7509372;
					} else {
						w10 = -0.24600603;
					}
				}
			}
		} else {
			if (rel_time < 12075) {
				if (rel_time < 12033) {
					if (rel_time < 11991) {
						if (rel_time < 11948) {
							w10 = 0.40757516;
						} else {
							w10 = 3.7916684;
						}
					} else {
						w10 = -3.890907;
					}
				} else {
					w10 = 5.199706;
				}
			} else {
				if (rel_time < 12117) {
					w10 = -3.5779948;
				} else {
					w10 = 1.5153166;
				}
			}
		}
	}
	float w11;
	if (hops < 2) {
		if (prod != 0) {
			if (rel_time < 11798) {
				if (rel_time < 11752) {
					if (rel_time < 10896) {
						if (rel_time < 10879) {
							w11 = -0.29681638;
						} else {
							w11 = -10.163999;
						}
					} else {
						if (rel_time < 11091) {
							w11 = 7.4038343;
						} else {
							w11 = -0.13404208;
						}
					}
				} else {
					if (prod != 2) {
						w11 = 7.0865617;
					} else {
						w11 = -8.464519;
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 12075) {
						if (rel_time < 12033) {
							w11 = -4.169306;
						} else {
							w11 = -9.01161;
						}
					} else {
						if (prod != 3) {
							w11 = 1.8651844;
						} else {
							w11 = -2.4638615;
						}
					}
				} else {
					w11 = 1.3508049;
				}
			}
		} else {
			if (rel_time < 11948) {
				if (rel_time < 10786) {
					if (rel_time < 10480) {
						if (rel_time < 10189) {
							w11 = 0.447225;
						} else {
							w11 = -5.839169;
						}
					} else {
						w11 = 5.7437325;
					}
				} else {
					if (rel_time < 11091) {
						w11 = -5.9682713;
					} else {
						if (rel_time < 11398) {
							w11 = 3.1489289;
						} else {
							w11 = -1.1208899;
						}
					}
				}
			} else {
				w11 = 7.0245013;
			}
		}
	} else {
		if (rel_time < 2137) {
			if (rel_time < 1984) {
				if (rel_time < 1937) {
					if (cons != 0) {
						if (rel_time < 1840) {
							w11 = 0.5162318;
						} else {
							w11 = 2.0525696;
						}
					} else {
						if (rel_time < 1571) {
							w11 = 0.5071487;
						} else {
							w11 = -1.9809109;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w11 = -3.5959833;
						} else {
							w11 = -2.8529284;
						}
					} else {
						w11 = -1.3295877;
					}
				}
			} else {
				if (cons != 3) {
					if (cons != 0) {
						if (rel_time < 2088) {
							w11 = -1.4807949;
						} else {
							w11 = -5.5580597;
						}
					} else {
						if (rel_time < 2088) {
							w11 = -1.5419874;
						} else {
							w11 = 3.7501094;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w11 = 5.75203;
						} else {
							w11 = 6.527264;
						}
					} else {
						w11 = 4.6764054;
					}
				}
			}
		} else {
			if (rel_time < 10896) {
				if (rel_time < 10879) {
					if (rel_time < 10832) {
						if (rel_time < 10786) {
							w11 = 0.05780744;
						} else {
							w11 = -7.731454;
						}
					} else {
						if (prod != 2) {
							w11 = -9.67986;
						} else {
							w11 = 6.2542944;
						}
					}
				} else {
					w11 = -9.717405;
				}
			} else {
				if (rel_time < 10941) {
					if (prod != 3) {
						w11 = 6.3428574;
					} else {
						w11 = -9.529485;
					}
				} else {
					if (prod != 1) {
						if (rel_time < 11185) {
							w11 = -3.2674944;
						} else {
							w11 = 0.5402194;
						}
					} else {
						if (rel_time < 11139) {
							w11 = 9.987812;
						} else {
							w11 = -1.1958777;
						}
					}
				}
			}
		}
	}
	float w12;
	if (rel_time < 9238) {
		if (rel_time < 9226) {
			if (rel_time < 9122) {
				if (rel_time < 9075) {
					if (rel_time < 8933) {
						if (rel_time < 8770) {
							w12 = -0.051777918;
						} else {
							w12 = 2.965433;
						}
					} else {
						if (prod != 1) {
							w12 = 3.2888212;
						} else {
							w12 = -9.846894;
						}
					}
				} else {
					if (prod != 3) {
						w12 = 6.096131;
					} else {
						w12 = -9.779878;
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w12 = 5.9241743;
					} else {
						w12 = 6.257294;
					}
				} else {
					w12 = -6.091501;
				}
			}
		} else {
			w12 = -6.0579906;
		}
	} else {
		if (rel_time < 9285) {
			if (prod != 0) {
				w12 = 10.042059;
			} else {
				w12 = -6.0710883;
			}
		} else {
			if (prod != 3) {
				if (rel_time < 9625) {
					if (prod != 0) {
						if (rel_time < 9332) {
							w12 = -1.9539316;
						} else {
							w12 = -7.345263;
						}
					} else {
						if (hops < 2) {
							w12 = 5.5173006;
						} else {
							w12 = 6.310398;
						}
					}
				} else {
					if (rel_time < 9732) {
						if (hops < 2) {
							w12 = 5.8966665;
						} else {
							w12 = 6.250632;
						}
					} else {
						if (prod != 1) {
							w12 = -0.39478543;
						} else {
							w12 = 0.84574884;
						}
					}
				}
			} else {
				if (rel_time < 9428) {
					w12 = 10.051812;
				} else {
					if (rel_time < 9732) {
						w12 = -9.823095;
					} else {
						if (rel_time < 10024) {
							w12 = 10.065822;
						} else {
							w12 = 0.034876242;
						}
					}
				}
			}
		}
	}
	float w13;
	if (rel_time < 10480) {
		if (rel_time < 10142) {
			if (rel_time < 10038) {
				if (rel_time < 10024) {
					if (rel_time < 9977) {
						if (rel_time < 9931) {
							w13 = 0.0025862574;
						} else {
							w13 = -3.8455284;
						}
					} else {
						if (prod != 3) {
							w13 = -5.588113;
						} else {
							w13 = 5.032504;
						}
					}
				} else {
					if (hops < 2) {
						w13 = -5.556446;
					} else {
						w13 = -5.778645;
					}
				}
			} else {
				if (prod != 0) {
					w13 = -5.713764;
				} else {
					if (hops < 2) {
						w13 = 5.7801347;
					} else {
						w13 = 6.411937;
					}
				}
			}
		} else {
			if (prod != 2) {
				if (prod != 4) {
					if (prod != 0) {
						if (rel_time < 10330) {
							w13 = -10.057953;
						} else {
							w13 = 9.61129;
						}
					} else {
						if (rel_time < 10189) {
							w13 = 6.4091578;
						} else {
							w13 = -4.9579034;
						}
					}
				} else {
					if (hops < 3) {
						w13 = 6.228393;
					} else {
						w13 = 6.54612;
					}
				}
			} else {
				if (hops < 3) {
					w13 = 6.228838;
				} else {
					w13 = 6.5754724;
				}
			}
		}
	} else {
		if (rel_time < 10495) {
			w13 = 9.615897;
		} else {
			if (prod != 3) {
				if (rel_time < 10635) {
					if (prod != 1) {
						if (hops < 2) {
							w13 = -5.560887;
						} else {
							w13 = -5.792107;
						}
					} else {
						w13 = 9.543986;
					}
				} else {
					if (rel_time < 12033) {
						if (prod != 0) {
							w13 = -0.6435611;
						} else {
							w13 = 0.9704406;
						}
					} else {
						if (rel_time < 12075) {
							w13 = 3.657327;
						} else {
							w13 = 1.2485762;
						}
					}
				}
			} else {
				if (rel_time < 10635) {
					w13 = 10.038358;
				} else {
					if (rel_time < 10941) {
						if (rel_time < 10879) {
							w13 = -7.5188375;
						} else {
							w13 = -4.954384;
						}
					} else {
						if (rel_time < 11231) {
							w13 = 7.7000737;
						} else {
							w13 = -0.8709442;
						}
					}
				}
			}
		}
	}
	float w14;
	if (rel_time < 1571) {
		if (hops < 4) {
			if (cons != 0) {
				if (cons != 2) {
					if (rel_time < 1420) {
						if (cons != 4) {
							w14 = 1.0127128;
						} else {
							w14 = 2.020074;
						}
					} else {
						if (hops < 3) {
							w14 = 0.9218198;
						} else {
							w14 = 0.52663434;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 0.6567548;
						} else {
							w14 = 0.51886874;
						}
					} else {
						if (rel_time < 1285) {
							w14 = 0.32085553;
						} else {
							w14 = 0.3686365;
						}
					}
				}
			} else {
				if (rel_time < 1501) {
					if (rel_time < 1168) {
						if (hops < 2) {
							w14 = 0.5993961;
						} else {
							w14 = 0.23891923;
						}
					} else {
						if (hops < 2) {
							w14 = -0.32037494;
						} else {
							w14 = -0.75231975;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 0.9028967;
						} else {
							w14 = 0.8119264;
						}
					} else {
						w14 = 0.33324227;
					}
				}
			}
		} else {
			if (cons != 2) {
				if (cons != 3) {
					if (rel_time < 1168) {
						w14 = -0.33981568;
					} else {
						if (rel_time < 1420) {
							w14 = 0.68435997;
						} else {
							w14 = 0.045366265;
						}
					}
				} else {
					if (rel_time < 1347) {
						w14 = -0.6820368;
					} else {
						w14 = -0.39556774;
					}
				}
			} else {
				w14 = -0.62958264;
			}
		}
	} else {
		if (cons != 1) {
			if (rel_time < 1715) {
				if (cons != 2) {
					if (hops < 4) {
						if (hops < 3) {
							w14 = -0.77882904;
						} else {
							w14 = -1.4672979;
						}
					} else {
						w14 = 0.40218607;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w14 = 2.1349235;
						} else {
							w14 = 1.4585279;
						}
					} else {
						w14 = 2.955711;
					}
				}
			} else {
				if (rel_time < 1984) {
					if (cons != 4) {
						if (hops < 2) {
							w14 = -2.673272;
						} else {
							w14 = -1.2457677;
						}
					} else {
						if (hops < 2) {
							w14 = 2.2394505;
						} else {
							w14 = 0.66052896;
						}
					}
				} else {
					if (rel_time < 2234) {
						if (cons != 4) {
							w14 = 2.2893991;
						} else {
							w14 = -1.5219915;
						}
					} else {
						if (rel_time < 2282) {
							w14 = -3.9546795;
						} else {
							w14 = 0.013563226;
						}
					}
				}
			}
		} else {
			if (rel_time < 4451) {
				if (rel_time < 3114) {
					if (rel_time < 2964) {
						if (rel_time < 2519) {
							w14 = -1.153003;
						} else {
							w14 = 0.46450713;
						}
					} else {
						if (rel_time < 3085) {
							w14 = -10.152909;
						} else {
							w14 = -2.119707;
						}
					}
				} else {
					if (rel_time < 3263) {
						if (hops < 2) {
							w14 = 2.8357553;
						} else {
							w14 = 6.0033083;
						}
					} else {
						if (rel_time < 3412) {
							w14 = -3.7256637;
						} else {
							w14 = 0.52575874;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 4570) {
							w14 = -3.4548318;
						} else {
							w14 = -4.089372;
						}
					} else {
						if (rel_time < 4570) {
							w14 = -2.72452;
						} else {
							w14 = -3.4658372;
						}
					}
				} else {
					w14 = -5.055347;
				}
			}
		}
	}
	float w15;
	if (rel_time < 11798) {
		if (rel_time < 11752) {
			if (rel_time < 11734) {
				if (rel_time < 11687) {
					if (rel_time < 11352) {
						if (rel_time < 11335) {
							w15 = -0.0041300706;
						} else {
							w15 = 2.1832855;
						}
					} else {
						if (prod != 2) {
							w15 = -1.9108039;
						} else {
							w15 = 3.433103;
						}
					}
				} else {
					if (prod != 1) {
						w15 = -2.752559;
					} else {
						if (hops < 2) {
							w15 = 4.5739436;
						} else {
							w15 = 5.4220233;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w15 = -2.823457;
					} else {
						w15 = -2.6109955;
					}
				} else {
					if (hops < 4) {
						w15 = -2.8936636;
					} else {
						w15 = -3.1466439;
					}
				}
			}
		} else {
			if (prod != 2) {
				if (hops < 2) {
					w15 = 3.9575758;
				} else {
					if (hops < 3) {
						w15 = 8.232211;
					} else {
						w15 = 7.8650856;
					}
				}
			} else {
				if (hops < 2) {
					w15 = -3.8636363;
				} else {
					w15 = -8.060863;
				}
			}
		}
	} else {
		if (prod != 0) {
			if (prod != 2) {
				if (rel_time < 12117) {
					if (prod != 3) {
						if (rel_time < 12033) {
							w15 = -3.718047;
						} else {
							w15 = 1.7230057;
						}
					} else {
						if (rel_time < 11844) {
							w15 = 8.181135;
						} else {
							w15 = -3.4024227;
						}
					}
				} else {
					if (hops < 2) {
						w15 = 0.22392668;
					} else {
						if (hops < 3) {
							w15 = 0.86653847;
						} else {
							w15 = 0.37913287;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 12033) {
						w15 = 1.1834569;
					} else {
						w15 = -0.9561105;
					}
				} else {
					if (rel_time < 12033) {
						if (hops < 3) {
							w15 = 5.338992;
						} else {
							w15 = 4.79139;
						}
					} else {
						if (hops < 4) {
							w15 = 2.9667528;
						} else {
							w15 = 0.7035432;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 11948) {
						w15 = 2.669066;
					} else {
						w15 = 3.2298486;
					}
				} else {
					if (rel_time < 11948) {
						if (hops < 3) {
							w15 = 3.462018;
						} else {
							w15 = 3.6876643;
						}
					} else {
						if (hops < 3) {
							w15 = 4.4497757;
						} else {
							w15 = 3.6201358;
						}
					}
				}
			} else {
				if (rel_time < 11948) {
					w15 = 2.892077;
				} else {
					w15 = 1.3379703;
				}
			}
		}
	}
	float w16;
	if (cons != 4) {
		if (hops < 3) {
			if (rel_time < 11491) {
				if (rel_time < 11352) {
					if (rel_time < 10832) {
						if (rel_time < 10740) {
							w16 = -0.09772979;
						} else {
							w16 = -2.8698962;
						}
					} else {
						if (prod != 1) {
							w16 = -0.34824252;
						} else {
							w16 = 6.0278845;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 0) {
							w16 = -4.137032;
						} else {
							w16 = 10.22993;
						}
					} else {
						if (hops < 2) {
							w16 = 1.7857138;
						} else {
							w16 = 1.6336007;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (prod != 4) {
						if (rel_time < 11752) {
							w16 = -2.5118742;
						} else {
							w16 = 0.97260445;
						}
					} else {
						if (rel_time < 11642) {
							w16 = 4.3394732;
						} else {
							w16 = -0.85881376;
						}
					}
				} else {
					if (rel_time < 11687) {
						w16 = 13.296338;
					} else {
						if (rel_time < 11734) {
							w16 = 2.6636584;
						} else {
							w16 = -0.9857276;
						}
					}
				}
			}
		} else {
			if (rel_time < 4420) {
				if (rel_time < 4273) {
					if (rel_time < 4124) {
						if (rel_time < 3976) {
							w16 = 0.12033549;
						} else {
							w16 = -1.9054139;
						}
					} else {
						if (cons != 2) {
							w16 = 2.2411652;
						} else {
							w16 = -0.7011446;
						}
					}
				} else {
					if (cons != 1) {
						if (cons != 3) {
							w16 = -1.5388476;
						} else {
							w16 = -3.113707;
						}
					} else {
						if (hops < 4) {
							w16 = -3.956945;
						} else {
							w16 = -3.447522;
						}
					}
				}
			} else {
				if (rel_time < 4540) {
					if (cons != 2) {
						if (cons != 3) {
							w16 = 2.6929874;
						} else {
							w16 = 3.6946697;
						}
					} else {
						if (rel_time < 4451) {
							w16 = -1.102953;
						} else {
							w16 = 0.060718715;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 4613) {
							w16 = 1.4864141;
						} else {
							w16 = 0.097154394;
						}
					} else {
						if (hops < 4) {
							w16 = -1.6792243;
						} else {
							w16 = -2.5321631;
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
							w16 = 0.16770117;
						} else {
							w16 = 0.903011;
						}
					} else {
						if (rel_time < 3797) {
							w16 = -1.149231;
						} else {
							w16 = -4.456353;
						}
					}
				} else {
					if (rel_time < 4095) {
						if (rel_time < 3946) {
							w16 = 0.8684477;
						} else {
							w16 = 3.5085042;
						}
					} else {
						if (hops < 3) {
							w16 = -0.035250135;
						} else {
							w16 = -0.24508621;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 4392) {
						if (rel_time < 4361) {
							w16 = -0.95278853;
						} else {
							w16 = -0.8048603;
						}
					} else {
						if (rel_time < 4510) {
							w16 = 0.1709554;
						} else {
							w16 = -0.34711537;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w16 = -0.9517919;
						} else {
							w16 = -0.6690966;
						}
					} else {
						if (rel_time < 4392) {
							w16 = -1.5754266;
						} else {
							w16 = -0.6291198;
						}
					}
				}
			}
		} else {
			if (rel_time < 4634) {
				if (hops < 3) {
					if (hops < 2) {
						w16 = 5.0218167;
					} else {
						w16 = 3.5240614;
					}
				} else {
					w16 = 5.638469;
				}
			} else {
				if (hops < 2) {
					w16 = 2.2786255;
				} else {
					if (hops < 3) {
						w16 = 1.3820018;
					} else {
						if (hops < 4) {
							w16 = 1.9970284;
						} else {
							w16 = 2.470465;
						}
					}
				}
			}
		}
	}
	float w17;
	if (cons != 0) {
		if (rel_time < 7124) {
			if (rel_time < 6821) {
				if (rel_time < 6662) {
					if (rel_time < 6110) {
						if (rel_time < 6062) {
							w17 = 0.04449327;
						} else {
							w17 = -6.3244886;
						}
					} else {
						if (prod != 3) {
							w17 = -0.07760484;
						} else {
							w17 = 10.182355;
						}
					}
				} else {
					if (prod != 4) {
						if (rel_time < 6716) {
							w17 = -5.976999;
						} else {
							w17 = -2.9282498;
						}
					} else {
						if (hops < 3) {
							w17 = 2.472997;
						} else {
							w17 = 2.6592808;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (prod != 2) {
						if (prod != 0) {
							w17 = 6.4570456;
						} else {
							w17 = 0.9421776;
						}
					} else {
						if (hops < 2) {
							w17 = -2.6708596;
						} else {
							w17 = -2.9018064;
						}
					}
				} else {
					if (rel_time < 7013) {
						w17 = -9.451766;
					} else {
						if (hops < 2) {
							w17 = -2.5920672;
						} else {
							w17 = -2.9544032;
						}
					}
				}
			}
		} else {
			if (rel_time < 7173) {
				if (prod != 0) {
					w17 = -9.779853;
				} else {
					if (hops < 2) {
						w17 = 5.4598594;
					} else {
						w17 = 6.458353;
					}
				}
			} else {
				if (rel_time < 7516) {
					if (prod != 3) {
						if (prod != 0) {
							w17 = 6.2885;
						} else {
							w17 = -5.95415;
						}
					} else {
						w17 = -9.733248;
					}
				} else {
					if (rel_time < 7524) {
						if (hops < 4) {
							w17 = -6.6666613;
						} else {
							w17 = -6.1051054;
						}
					} else {
						if (rel_time < 7571) {
							w17 = 6.035562;
						} else {
							w17 = -0.04358509;
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
							w17 = 0.062932305;
						} else {
							w17 = -1.7562984;
						}
					} else {
						if (hops < 4) {
							w17 = 1.5474703;
						} else {
							w17 = 2.2882917;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3501) {
							w17 = -3.7733085;
						} else {
							w17 = -3.2707088;
						}
					} else {
						w17 = -1.0092567;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 3650) {
						w17 = 2.7360492;
					} else {
						if (hops < 2) {
							w17 = 3.3764617;
						} else {
							w17 = 3.0341384;
						}
					}
				} else {
					w17 = 2.1946318;
				}
			}
		} else {
			if (rel_time < 3828) {
				if (rel_time < 3799) {
					if (hops < 4) {
						if (rel_time < 3797) {
							w17 = -3.1714723;
						} else {
							w17 = -2.6246693;
						}
					} else {
						w17 = -0.89221245;
					}
				} else {
					if (hops < 4) {
						w17 = -6.7668276;
					} else {
						w17 = -3.097355;
					}
				}
			} else {
				if (rel_time < 3976) {
					if (rel_time < 3946) {
						if (hops < 2) {
							w17 = 0.21235129;
						} else {
							w17 = -0.18189153;
						}
					} else {
						if (hops < 4) {
							w17 = 1.7467997;
						} else {
							w17 = 1.1621808;
						}
					}
				} else {
					if (rel_time < 4124) {
						if (hops < 3) {
							w17 = -2.5742505;
						} else {
							w17 = -0.9471914;
						}
					} else {
						if (rel_time < 4273) {
							w17 = 1.2435471;
						} else {
							w17 = -0.4601328;
						}
					}
				}
			}
		}
	}
	float w18;
	if (prod != 0) {
		if (rel_time < 8524) {
			if (rel_time < 8219) {
				if (rel_time < 7915) {
					if (rel_time < 7620) {
						if (rel_time < 7317) {
							w18 = -0.07819918;
						} else {
							w18 = 1.7416216;
						}
					} else {
						if (prod != 2) {
							w18 = -6.450426;
						} else {
							w18 = 3.4428935;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 4) {
							w18 = 7.804064;
						} else {
							w18 = 1.7618309;
						}
					} else {
						if (hops < 4) {
							w18 = -6.9682426;
						} else {
							w18 = -5.989169;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (prod != 4) {
						if (hops < 2) {
							w18 = -10.01894;
						} else {
							w18 = -9.710033;
						}
					} else {
						if (rel_time < 8324) {
							w18 = -5.9057164;
						} else {
							w18 = 6.2060966;
						}
					}
				} else {
					if (hops < 2) {
						w18 = 5.9837418;
					} else {
						w18 = 6.247263;
					}
				}
			}
		} else {
			if (rel_time < 8724) {
				if (prod != 2) {
					if (rel_time < 8629) {
						w18 = 6.2652135;
					} else {
						w18 = 10.05801;
					}
				} else {
					w18 = -5.8705454;
				}
			} else {
				if (rel_time < 8770) {
					if (prod != 2) {
						w18 = 10.116103;
					} else {
						if (hops < 2) {
							w18 = -5.724462;
						} else {
							w18 = -5.9836082;
						}
					}
				} else {
					if (rel_time < 8781) {
						w18 = 8.599999;
					} else {
						if (rel_time < 8980) {
							w18 = -5.8340173;
						} else {
							w18 = 0.11774706;
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
							w18 = 0.8183207;
						} else {
							w18 = -2.977807;
						}
					} else {
						if (hops < 2) {
							w18 = 4.9201336;
						} else {
							w18 = 5.623258;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w18 = -2.971408;
						} else {
							w18 = -3.1163497;
						}
					} else {
						w18 = -6.0596957;
					}
				}
			} else {
				if (hops < 2) {
					w18 = 5.6233125;
				} else {
					if (hops < 3) {
						w18 = 6.1920366;
					} else {
						w18 = 6.4490767;
					}
				}
			}
		} else {
			if (rel_time < 8676) {
				w18 = -6.0100813;
			} else {
				if (rel_time < 8980) {
					if (hops < 2) {
						w18 = 4.119113;
					} else {
						w18 = 4.695386;
					}
				} else {
					if (rel_time < 9884) {
						if (rel_time < 9579) {
							w18 = 0.032520555;
						} else {
							w18 = -5.837251;
						}
					} else {
						if (rel_time < 10786) {
							w18 = 2.0617085;
						} else {
							w18 = -0.8858532;
						}
					}
				}
			}
		}
	}
	float w19;
	if (rel_time < 3381) {
		if (rel_time < 3234) {
			if (rel_time < 2462) {
				if (rel_time < 2282) {
					if (rel_time < 2234) {
						if (rel_time < 2035) {
							w19 = 0.2701482;
						} else {
							w19 = -0.37735984;
						}
					} else {
						if (cons != 3) {
							w19 = 4.1062064;
						} else {
							w19 = -2.958012;
						}
					}
				} else {
					if (cons != 0) {
						if (cons != 1) {
							w19 = 0.78152394;
						} else {
							w19 = 2.2353086;
						}
					} else {
						if (rel_time < 2343) {
							w19 = -1.0024564;
						} else {
							w19 = 0.46009198;
						}
					}
				}
			} else {
				if (rel_time < 2611) {
					if (cons != 1) {
						if (cons != 3) {
							w19 = -0.089815706;
						} else {
							w19 = -2.769511;
						}
					} else {
						if (hops < 3) {
							w19 = -4.2007446;
						} else {
							w19 = -2.2168443;
						}
					}
				} else {
					if (rel_time < 2728) {
						if (cons != 0) {
							w19 = 2.1121387;
						} else {
							w19 = -1.7809008;
						}
					} else {
						if (rel_time < 2935) {
							w19 = -0.6561463;
						} else {
							w19 = 0.28788275;
						}
					}
				}
			}
		} else {
			if (cons != 3) {
				if (cons != 1) {
					if (cons != 0) {
						if (hops < 4) {
							w19 = -0.036711395;
						} else {
							w19 = 0.8165199;
						}
					} else {
						if (rel_time < 3352) {
							w19 = 1.4807537;
						} else {
							w19 = 0.85471696;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3263) {
							w19 = 0.5609752;
						} else {
							w19 = -5.015789;
						}
					} else {
						if (hops < 4) {
							w19 = 1.8913656;
						} else {
							w19 = 3.4992282;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w19 = 2.8798869;
						} else {
							w19 = 3.2212505;
						}
					} else {
						w19 = 2.743603;
					}
				} else {
					w19 = 5.6263146;
				}
			}
		}
	} else {
		if (rel_time < 3501) {
			if (cons != 3) {
				if (hops < 4) {
					if (cons != 1) {
						if (rel_time < 3470) {
							w19 = -0.54105544;
						} else {
							w19 = -1.1706829;
						}
					} else {
						if (hops < 3) {
							w19 = -1.2766153;
						} else {
							w19 = -1.9391062;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 3470) {
							w19 = -2.2939894;
						} else {
							w19 = -0.08302263;
						}
					} else {
						w19 = -4.999838;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w19 = -2.594837;
						} else {
							w19 = -2.7628095;
						}
					} else {
						w19 = -3.2397454;
					}
				} else {
					w19 = -6.5303006;
				}
			}
		} else {
			if (rel_time < 3619) {
				if (cons != 2) {
					if (cons != 0) {
						if (cons != 4) {
							w19 = 4.877239;
						} else {
							w19 = -2.8182933;
						}
					} else {
						if (hops < 4) {
							w19 = -1.5967988;
						} else {
							w19 = -0.4669452;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w19 = -3.6745956;
						} else {
							w19 = -5.1378846;
						}
					} else {
						if (hops < 4) {
							w19 = -1.4193819;
						} else {
							w19 = -0.3151208;
						}
					}
				}
			} else {
				if (rel_time < 3767) {
					if (cons != 1) {
						if (cons != 3) {
							w19 = 0.5922275;
						} else {
							w19 = -2.9069614;
						}
					} else {
						if (hops < 3) {
							w19 = -3.2657819;
						} else {
							w19 = -8.533106;
						}
					}
				} else {
					if (rel_time < 3916) {
						if (cons != 1) {
							w19 = 0.13574609;
						} else {
							w19 = 4.2118864;
						}
					} else {
						if (rel_time < 4004) {
							w19 = -1.3323966;
						} else {
							w19 = -0.0010188799;
						}
					}
				}
			}
		}
	}
	float w20;
	if (rel_time < 5808) {
		if (rel_time < 5759) {
			if (rel_time < 5711) {
				if (rel_time < 5663) {
					if (prod != 3) {
						if (rel_time < 5409) {
							w20 = -0.01588506;
						} else {
							w20 = 2.2086642;
						}
					} else {
						if (rel_time < 5206) {
							w20 = 1.3306115;
						} else {
							w20 = -8.983082;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 2) {
							w20 = -5.3054333;
						} else {
							w20 = -6.8602114;
						}
					} else {
						if (hops < 2) {
							w20 = 10.567251;
						} else {
							w20 = 9.077585;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (hops < 2) {
						w20 = 10.545635;
					} else {
						w20 = 9.075492;
					}
				} else {
					if (hops < 2) {
						w20 = -5.335628;
					} else {
						w20 = -6.8701124;
					}
				}
			}
		} else {
			if (prod != 3) {
				if (hops < 2) {
					w20 = -5.361082;
				} else {
					w20 = -6.8483706;
				}
			} else {
				if (hops < 2) {
					w20 = 10.571084;
				} else {
					w20 = 9.10329;
				}
			}
		}
	} else {
		if (rel_time < 5811) {
			if (hops < 2) {
				w20 = -5.3619146;
			} else {
				w20 = -5.7134132;
			}
		} else {
			if (rel_time < 5916) {
				if (prod != 0) {
					w20 = -5.6809382;
				} else {
					if (hops < 2) {
						w20 = 5.479322;
					} else {
						w20 = 6.179021;
					}
				}
			} else {
				if (rel_time < 6013) {
					if (prod != 1) {
						if (rel_time < 5965) {
							w20 = 5.976566;
						} else {
							w20 = 6.4300547;
						}
					} else {
						w20 = -9.545463;
					}
				} else {
					if (rel_time < 6268) {
						if (prod != 3) {
							w20 = 3.4998407;
						} else {
							w20 = -7.2401485;
						}
					} else {
						if (rel_time < 6316) {
							w20 = -3.0844686;
						} else {
							w20 = -0.034735747;
						}
					}
				}
			}
		}
	}
	float w21;
	if (rel_time < 9238) {
		if (rel_time < 9226) {
			if (rel_time < 9122) {
				if (rel_time < 9075) {
					if (prod != 1) {
						if (prod != 4) {
							w21 = 0.0763546;
						} else {
							w21 = -0.5059597;
						}
					} else {
						if (rel_time < 8980) {
							w21 = -0.33169082;
						} else {
							w21 = -4.9023156;
						}
					}
				} else {
					if (prod != 3) {
						if (hops < 3) {
							w21 = 2.982196;
						} else {
							w21 = 3.443045;
						}
					} else {
						if (hops < 3) {
							w21 = -5.0203476;
						} else {
							w21 = -4.7920637;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 3) {
						w21 = 3.0195956;
					} else {
						w21 = 3.1386561;
					}
				} else {
					w21 = -3.011554;
				}
			}
		} else {
			if (hops < 3) {
				w21 = -2.9148748;
			} else {
				w21 = -3.1466703;
			}
		}
	} else {
		if (rel_time < 9285) {
			if (prod != 0) {
				if (hops < 3) {
					w21 = 5.0985117;
				} else {
					w21 = 4.836397;
				}
			} else {
				w21 = -3.050265;
			}
		} else {
			if (rel_time < 9931) {
				if (rel_time < 9836) {
					if (prod != 1) {
						if (rel_time < 9332) {
							w21 = -4.943713;
						} else {
							w21 = 0.91133654;
						}
					} else {
						if (rel_time < 9332) {
							w21 = 10.919715;
						} else {
							w21 = -6.2035866;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 9884) {
							w21 = -2.8942008;
						} else {
							w21 = -5.716736;
						}
					} else {
						w21 = 9.564294;
					}
				}
			} else {
				if (rel_time < 10480) {
					if (prod != 1) {
						if (rel_time < 10434) {
							w21 = 0.10978803;
						} else {
							w21 = -3.6653821;
						}
					} else {
						if (rel_time < 10235) {
							w21 = -5.250852;
						} else {
							w21 = 4.838111;
						}
					}
				} else {
					if (rel_time < 10495) {
						if (hops < 3) {
							w21 = 4.899074;
						} else {
							w21 = 4.630495;
						}
					} else {
						if (rel_time < 10542) {
							w21 = -2.2339737;
						} else {
							w21 = 0.098824374;
						}
					}
				}
			}
		}
	}
	float w22;
	if (prod != 3) {
		if (rel_time < 8381) {
			if (rel_time < 8371) {
				if (rel_time < 7516) {
					if (rel_time < 7469) {
						if (rel_time < 7220) {
							w22 = -0.040590532;
						} else {
							w22 = 1.4154787;
						}
					} else {
						if (prod != 1) {
							w22 = -9.798928;
						} else {
							w22 = 5.5265274;
						}
					}
				} else {
					if (rel_time < 7620) {
						if (rel_time < 7524) {
							w22 = -4.2090473;
						} else {
							w22 = -7.866518;
						}
					} else {
						if (prod != 0) {
							w22 = -0.82849675;
						} else {
							w22 = 1.3526963;
						}
					}
				}
			} else {
				if (hops < 2) {
					w22 = -4.8703504;
				} else {
					w22 = -4.682675;
				}
			}
		} else {
			if (rel_time < 8724) {
				if (prod != 0) {
					if (prod != 2) {
						if (rel_time < 8428) {
							w22 = -4.6083493;
						} else {
							w22 = 4.3024054;
						}
					} else {
						if (rel_time < 8476) {
							w22 = 3.0681927;
						} else {
							w22 = -2.9592156;
						}
					}
				} else {
					if (hops < 2) {
						w22 = -3.1259575;
					} else {
						if (hops < 3) {
							w22 = -2.9081583;
						} else {
							w22 = -3.0498855;
						}
					}
				}
			} else {
				if (rel_time < 8829) {
					if (rel_time < 8770) {
						if (hops < 3) {
							w22 = -2.920046;
						} else {
							w22 = -3.0647078;
						}
					} else {
						if (hops < 2) {
							w22 = -3.9863355;
						} else {
							w22 = -4.255694;
						}
					}
				} else {
					if (rel_time < 9226) {
						if (prod != 1) {
							w22 = 2.335576;
						} else {
							w22 = -2.2023408;
						}
					} else {
						if (rel_time < 9625) {
							w22 = -0.6269289;
						} else {
							w22 = 0.12169593;
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
						w22 = -0.57428366;
					} else {
						if (hops < 4) {
							w22 = -2.9969263;
						} else {
							w22 = -0.6230265;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w22 = 3.0284657;
						} else {
							w22 = 4.8596616;
						}
					} else {
						w22 = 0.6612265;
					}
				}
			} else {
				if (hops < 2) {
					w22 = -5.0830526;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w22 = -4.3654947;
						} else {
							w22 = -4.1704607;
						}
					} else {
						w22 = -4.519845;
					}
				}
			}
		} else {
			if (rel_time < 5808) {
				if (hops < 2) {
					w22 = 5.2599244;
				} else {
					if (hops < 4) {
						w22 = 4.5537615;
					} else {
						w22 = 4.269178;
					}
				}
			} else {
				if (rel_time < 6110) {
					if (rel_time < 6062) {
						w22 = -5.969782;
					} else {
						if (hops < 3) {
							w22 = -2.814555;
						} else {
							w22 = -2.6945224;
						}
					}
				} else {
					if (rel_time < 6413) {
						if (hops < 2) {
							w22 = 5.2939715;
						} else {
							w22 = 5.089938;
						}
					} else {
						if (rel_time < 6716) {
							w22 = -2.9884198;
						} else {
							w22 = 0.26049224;
						}
					}
				}
			}
		}
	}
	float w23;
	if (rel_time < 11991) {
		if (rel_time < 11539) {
			if (rel_time < 11231) {
				if (rel_time < 10832) {
					if (rel_time < 10786) {
						if (rel_time < 10480) {
							w23 = -0.0010577001;
						} else {
							w23 = 0.53120077;
						}
					} else {
						if (prod != 1) {
							w23 = 9.630609;
						} else {
							w23 = -6.2834945;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 1) {
							w23 = 0.62098235;
						} else {
							w23 = 3.5579698;
						}
					} else {
						if (hops < 2) {
							w23 = -2.7329996;
						} else {
							w23 = -4.2203517;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (prod != 2) {
						if (rel_time < 11491) {
							w23 = -2.7226946;
						} else {
							w23 = -0.34412798;
						}
					} else {
						if (hops < 3) {
							w23 = 0.72308606;
						} else {
							w23 = 1.5599937;
						}
					}
				} else {
					if (rel_time < 11352) {
						if (hops < 2) {
							w23 = 0.7109958;
						} else {
							w23 = 2.0053358;
						}
					} else {
						if (hops < 3) {
							w23 = 5.542462;
						} else {
							w23 = 11.760467;
						}
					}
				}
			}
		} else {
			if (prod != 3) {
				if (prod != 1) {
					if (rel_time < 11642) {
						if (prod != 0) {
							w23 = 3.1492066;
						} else {
							w23 = -1.8288118;
						}
					} else {
						if (rel_time < 11844) {
							w23 = -1.7623723;
						} else {
							w23 = 0.6936444;
						}
					}
				} else {
					if (rel_time < 11687) {
						if (hops < 3) {
							w23 = 6.531271;
						} else {
							w23 = 12.782158;
						}
					} else {
						if (rel_time < 11734) {
							w23 = 1.6880162;
						} else {
							w23 = -0.9227743;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11798) {
						w23 = 1.2961895;
					} else {
						w23 = 4.7841215;
					}
				} else {
					if (hops < 3) {
						w23 = 3.4313135;
					} else {
						if (hops < 4) {
							w23 = 3.7209578;
						} else {
							w23 = 3.3800178;
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
							w23 = -0.021978572;
						} else {
							w23 = -1.0935595;
						}
					} else {
						if (rel_time < 12117) {
							w23 = 1.176346;
						} else {
							w23 = 0.4117171;
						}
					}
				} else {
					if (rel_time < 12033) {
						if (hops < 3) {
							w23 = 2.0598621;
						} else {
							w23 = 2.2280374;
						}
					} else {
						if (rel_time < 12117) {
							w23 = 0.9373792;
						} else {
							w23 = 0.32895395;
						}
					}
				}
			} else {
				if (hops < 2) {
					w23 = 0.55333227;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w23 = -1.7117712;
						} else {
							w23 = -2.7099907;
						}
					} else {
						w23 = 0.21505043;
					}
				}
			}
		} else {
			if (rel_time < 12075) {
				if (hops < 2) {
					w23 = -3.0932336;
				} else {
					w23 = -9.818744;
				}
			} else {
				if (hops < 2) {
					w23 = 0.19184498;
				} else {
					if (hops < 3) {
						w23 = -2.2447999;
					} else {
						if (hops < 4) {
							w23 = -0.40414217;
						} else {
							w23 = -0.2028199;
						}
					}
				}
			}
		}
	}
	float w24;
	if (cons != 1) {
		if (rel_time < 3144) {
			if (rel_time < 2967) {
				if (rel_time < 2818) {
					if (rel_time < 2759) {
						if (rel_time < 2548) {
							w24 = 0.15748227;
						} else {
							w24 = -0.31986353;
						}
					} else {
						if (rel_time < 2789) {
							w24 = 3.8354874;
						} else {
							w24 = 0.20880623;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w24 = -1.5458314;
						} else {
							w24 = -0.12506267;
						}
					} else {
						if (hops < 2) {
							w24 = 1.7272716;
						} else {
							w24 = 0.23858236;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 3085) {
							w24 = 2.229983;
						} else {
							w24 = -3.3242867;
						}
					} else {
						if (rel_time < 2996) {
							w24 = -0.4215831;
						} else {
							w24 = 0.8678195;
						}
					}
				} else {
					if (rel_time < 3025) {
						if (hops < 2) {
							w24 = -0.79104817;
						} else {
							w24 = -6.9899416;
						}
					} else {
						if (hops < 2) {
							w24 = -1.1385247;
						} else {
							w24 = 1.1846884;
						}
					}
				}
			}
		} else {
			if (rel_time < 3171) {
				if (hops < 3) {
					if (hops < 2) {
						w24 = -2.8102047;
					} else {
						w24 = -2.3801672;
					}
				} else {
					if (hops < 4) {
						w24 = -3.164427;
					} else {
						w24 = -3.4893706;
					}
				}
			} else {
				if (rel_time < 3886) {
					if (rel_time < 3797) {
						if (rel_time < 3381) {
							w24 = 0.22794855;
						} else {
							w24 = -0.3291254;
						}
					} else {
						if (cons != 3) {
							w24 = -1.5945648;
						} else {
							w24 = 3.8706737;
						}
					}
				} else {
					if (rel_time < 4006) {
						if (cons != 3) {
							w24 = 1.2304375;
						} else {
							w24 = 3.9003496;
						}
					} else {
						if (rel_time < 4065) {
							w24 = -1.1476074;
						} else {
							w24 = 0.0030627118;
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
							w24 = -0.012334208;
						} else {
							w24 = -2.658979;
						}
					} else {
						if (hops < 3) {
							w24 = 0.16375233;
						} else {
							w24 = 5.180948;
						}
					}
				} else {
					if (rel_time < 3976) {
						w24 = -8.709215;
					} else {
						if (hops < 2) {
							w24 = -4.550564;
						} else {
							w24 = -3.2495792;
						}
					}
				}
			} else {
				if (rel_time < 4124) {
					w24 = 12.372753;
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w24 = 4.198506;
						} else {
							w24 = 4.460866;
						}
					} else {
						if (hops < 4) {
							w24 = 2.710877;
						} else {
							w24 = 3.2065966;
						}
					}
				}
			}
		} else {
			if (rel_time < 4303) {
				if (rel_time < 4273) {
					if (hops < 3) {
						w24 = -6.2689776;
					} else {
						w24 = -7.699441;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w24 = -3.581067;
						} else {
							w24 = -3.3193946;
						}
					} else {
						if (hops < 4) {
							w24 = -1.9725218;
						} else {
							w24 = -1.7211281;
						}
					}
				}
			} else {
				if (rel_time < 4451) {
					if (hops < 4) {
						if (hops < 2) {
							w24 = 1.5543506;
						} else {
							w24 = 1.8551586;
						}
					} else {
						if (rel_time < 4422) {
							w24 = -0.09731306;
						} else {
							w24 = -0.17417009;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 4570) {
							w24 = -1.6738787;
						} else {
							w24 = -1.986791;
						}
					} else {
						if (hops < 4) {
							w24 = -0.83238393;
						} else {
							w24 = -1.2614549;
						}
					}
				}
			}
		}
	}
	float w25;
	if (rel_time < 10024) {
		if (rel_time < 9977) {
			if (rel_time < 9931) {
				if (rel_time < 9836) {
					if (rel_time < 9638) {
						if (rel_time < 9625) {
							w25 = 0.011391969;
						} else {
							w25 = 2.51837;
						}
					} else {
						if (prod != 4) {
							w25 = -4.4812665;
						} else {
							w25 = 3.760327;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 9884) {
							w25 = -1.5095829;
						} else {
							w25 = -2.922438;
						}
					} else {
						if (hops < 3) {
							w25 = 4.808787;
						} else {
							w25 = 4.5749516;
						}
					}
				}
			} else {
				if (prod != 2) {
					w25 = 6.7796683;
				} else {
					if (hops < 2) {
						w25 = -3.804623;
					} else {
						w25 = -4.0599027;
					}
				}
			}
		} else {
			if (prod != 3) {
				w25 = -2.9069543;
			} else {
				if (hops < 3) {
					w25 = 2.402619;
				} else {
					w25 = 2.1945188;
				}
			}
		}
	} else {
		if (rel_time < 10038) {
			if (hops < 3) {
				w25 = -2.9272444;
			} else {
				w25 = -3.085813;
			}
		} else {
			if (prod != 1) {
				if (rel_time < 10235) {
					if (prod != 4) {
						if (rel_time < 10189) {
							w25 = 2.0246599;
						} else {
							w25 = 3.0237038;
						}
					} else {
						w25 = -3.0115616;
					}
				} else {
					if (rel_time < 10542) {
						if (prod != 3) {
							w25 = 0.28537354;
						} else {
							w25 = -5.0177794;
						}
					} else {
						if (rel_time < 10879) {
							w25 = 1.7548511;
						} else {
							w25 = -0.22202273;
						}
					}
				}
			} else {
				if (rel_time < 10832) {
					if (rel_time < 10542) {
						if (rel_time < 10235) {
							w25 = -2.6879196;
						} else {
							w25 = 2.3563123;
						}
					} else {
						if (rel_time < 10786) {
							w25 = -9.265096;
						} else {
							w25 = -3.1443768;
						}
					}
				} else {
					if (rel_time < 11139) {
						if (hops < 3) {
							w25 = 1.1059281;
						} else {
							w25 = 2.881112;
						}
					} else {
						if (rel_time < 11444) {
							w25 = -1.4103717;
						} else {
							w25 = 0.35886273;
						}
					}
				}
			}
		}
	}
	float w26;
	if (prod != 3) {
		if (rel_time < 6216) {
			if (rel_time < 6013) {
				if (rel_time < 5711) {
					if (rel_time < 5409) {
						if (rel_time < 5360) {
							w26 = 0.008016798;
						} else {
							w26 = -2.884461;
						}
					} else {
						if (prod != 0) {
							w26 = 4.7449803;
						} else {
							w26 = -8.166235;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 1) {
							w26 = -2.0386405;
						} else {
							w26 = -4.594542;
						}
					} else {
						if (hops < 2) {
							w26 = 2.6161973;
						} else {
							w26 = 3.097765;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 6062) {
						w26 = 4.6605678;
					} else {
						if (rel_time < 6110) {
							w26 = 8.1403265;
						} else {
							w26 = 5.0476875;
						}
					}
				} else {
					w26 = -7.9193454;
				}
			}
		} else {
			if (rel_time < 6262) {
				if (hops < 4) {
					if (hops < 2) {
						w26 = -5.1988235;
					} else {
						w26 = -4.9067426;
					}
				} else {
					w26 = -8.096845;
				}
			} else {
				if (rel_time < 6268) {
					if (hops < 4) {
						w26 = 3.75406;
					} else {
						w26 = 8.360017;
					}
				} else {
					if (rel_time < 6413) {
						if (prod != 1) {
							w26 = -4.9186277;
						} else {
							w26 = 11.893686;
						}
					} else {
						if (prod != 0) {
							w26 = -0.1906813;
						} else {
							w26 = 0.37194225;
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
							w26 = 0.16727705;
						} else {
							w26 = -8.914813;
						}
					} else {
						if (hops < 2) {
							w26 = 3.2914205;
						} else {
							w26 = 3.0448668;
						}
					}
				} else {
					if (hops < 2) {
						w26 = -5.1363297;
					} else {
						w26 = -4.924479;
					}
				}
			} else {
				if (rel_time < 7620) {
					if (rel_time < 7571) {
						w26 = 5.3261495;
					} else {
						if (hops < 4) {
							w26 = 8.325704;
						} else {
							w26 = 8.959816;
						}
					}
				} else {
					if (rel_time < 7915) {
						if (hops < 4) {
							w26 = -1.7919759;
						} else {
							w26 = -6.547194;
						}
					} else {
						if (hops < 4) {
							w26 = 4.952226;
						} else {
							w26 = 5.9605923;
						}
					}
				}
			}
		} else {
			if (rel_time < 8524) {
				w26 = -5.048087;
			} else {
				if (rel_time < 8829) {
					if (rel_time < 8781) {
						if (rel_time < 8770) {
							w26 = 4.952438;
						} else {
							w26 = 4.14399;
						}
					} else {
						w26 = 11.353651;
					}
				} else {
					if (rel_time < 9075) {
						w26 = -11.728773;
					} else {
						if (rel_time < 9122) {
							w26 = -2.5956724;
						} else {
							w26 = 0.28548634;
						}
					}
				}
			}
		}
	}
	float w27;
	if (prod != 4) {
		if (rel_time < 10879) {
			if (rel_time < 10542) {
				if (rel_time < 10284) {
					if (rel_time < 8676) {
						if (rel_time < 8371) {
							w27 = 0.014977762;
						} else {
							w27 = -0.90673566;
						}
					} else {
						if (rel_time < 9579) {
							w27 = 0.85807717;
						} else {
							w27 = -0.18524341;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 2) {
							w27 = -1.4943453;
						} else {
							w27 = -2.680147;
						}
					} else {
						if (rel_time < 10495) {
							w27 = 1.0144769;
						} else {
							w27 = 4.4621944;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 10588) {
						if (prod != 2) {
							w27 = 3.545625;
						} else {
							w27 = -4.0097613;
						}
					} else {
						if (hops < 2) {
							w27 = 2.1520677;
						} else {
							w27 = 3.26477;
						}
					}
				} else {
					if (rel_time < 10786) {
						if (hops < 3) {
							w27 = -4.3581576;
						} else {
							w27 = -5.4299326;
						}
					} else {
						if (hops < 2) {
							w27 = -4.1755595;
						} else {
							w27 = -0.7176007;
						}
					}
				}
			}
		} else {
			if (rel_time < 11045) {
				if (rel_time < 10941) {
					if (hops < 2) {
						if (rel_time < 10896) {
							w27 = -3.002673;
						} else {
							w27 = -10.248524;
						}
					} else {
						w27 = -2.8971066;
					}
				} else {
					if (hops < 2) {
						w27 = -1.4547536;
					} else {
						if (hops < 3) {
							w27 = -2.04704;
						} else {
							w27 = -2.3150594;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 11352) {
						if (prod != 3) {
							w27 = 0.42513242;
						} else {
							w27 = 3.3919072;
						}
					} else {
						if (rel_time < 11687) {
							w27 = -1.0552833;
						} else {
							w27 = 0.32428327;
						}
					}
				} else {
					if (rel_time < 11185) {
						if (hops < 2) {
							w27 = -5.485385;
						} else {
							w27 = -4.01399;
						}
					} else {
						if (hops < 4) {
							w27 = 0.5270451;
						} else {
							w27 = -0.15934908;
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
							w27 = -0.26547694;
						} else {
							w27 = 3.4363503;
						}
					} else {
						if (rel_time < 8219) {
							w27 = -7.0149484;
						} else {
							w27 = -0.6346009;
						}
					}
				} else {
					if (hops < 2) {
						w27 = 2.8625872;
					} else {
						w27 = 3.0560908;
					}
				}
			} else {
				if (rel_time < 10635) {
					if (hops < 2) {
						w27 = -3.8466792;
					} else {
						w27 = -4.125087;
					}
				} else {
					w27 = -6.6440883;
				}
			}
		} else {
			if (rel_time < 11045) {
				if (rel_time < 10941) {
					if (hops < 2) {
						w27 = 2.5044951;
					} else {
						w27 = 3.514648;
					}
				} else {
					if (hops < 2) {
						w27 = 2.4692438;
					} else {
						w27 = 8.230561;
					}
				}
			} else {
				if (rel_time < 11231) {
					w27 = -9.189207;
				} else {
					if (rel_time < 11642) {
						if (rel_time < 11335) {
							w27 = -1.1026798;
						} else {
							w27 = 2.3519905;
						}
					} else {
						if (rel_time < 11948) {
							w27 = -1.5921041;
						} else {
							w27 = 0.41935766;
						}
					}
				}
			}
		}
	}
	float w28;
	if (rel_time < 11991) {
		if (rel_time < 11687) {
			if (hops < 4) {
				if (rel_time < 2611) {
					if (rel_time < 2491) {
						if (rel_time < 2282) {
							w28 = -0.10755893;
						} else {
							w28 = 0.26804003;
						}
					} else {
						if (hops < 3) {
							w28 = -1.3624008;
						} else {
							w28 = 0.13693641;
						}
					}
				} else {
					if (rel_time < 2728) {
						if (cons != 1) {
							w28 = 0.44612613;
						} else {
							w28 = 2.5711412;
						}
					} else {
						if (rel_time < 2876) {
							w28 = -0.5611552;
						} else {
							w28 = -0.002534077;
						}
					}
				}
			} else {
				if (rel_time < 5614) {
					if (prod != 4) {
						if (rel_time < 5460) {
							w28 = 0.2773346;
						} else {
							w28 = -2.5024598;
						}
					} else {
						if (rel_time < 5010) {
							w28 = 2.9206874;
						} else {
							w28 = 1.1581903;
						}
					}
				} else {
					if (rel_time < 5663) {
						if (prod != 0) {
							w28 = 5.2505336;
						} else {
							w28 = -4.7596593;
						}
					} else {
						if (rel_time < 11642) {
							w28 = 0.013925186;
						} else {
							w28 = -2.1761396;
						}
					}
				}
			}
		} else {
			if (prod != 4) {
				if (prod != 2) {
					if (prod != 1) {
						if (hops < 2) {
							w28 = 0.66588944;
						} else {
							w28 = 1.4141959;
						}
					} else {
						if (rel_time < 11734) {
							w28 = 0.59656996;
						} else {
							w28 = -0.70928186;
						}
					}
				} else {
					if (rel_time < 11752) {
						if (hops < 3) {
							w28 = 0.59313947;
						} else {
							w28 = -0.7647692;
						}
					} else {
						if (hops < 2) {
							w28 = -1.7898616;
						} else {
							w28 = -3.447959;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11844) {
						w28 = 0.8835477;
					} else {
						w28 = -0.3057917;
					}
				} else {
					if (rel_time < 11844) {
						if (hops < 3) {
							w28 = -0.5625038;
						} else {
							w28 = -1.2790245;
						}
					} else {
						if (hops < 3) {
							w28 = -1.8149529;
						} else {
							w28 = -2.5497904;
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
							w28 = -0.069596425;
						} else {
							w28 = -0.6063345;
						}
					} else {
						if (rel_time < 12117) {
							w28 = 0.5861257;
						} else {
							w28 = 0.20121501;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 12033) {
							w28 = 0.97326636;
						} else {
							w28 = 0.5990271;
						}
					} else {
						if (rel_time < 12117) {
							w28 = 0.4597971;
						} else {
							w28 = -0.15746786;
						}
					}
				}
			} else {
				if (hops < 2) {
					w28 = 0.029957986;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w28 = -1.1045004;
						} else {
							w28 = -1.6041546;
						}
					} else {
						w28 = -0.13932656;
					}
				}
			}
		} else {
			if (rel_time < 12075) {
				if (hops < 2) {
					w28 = -1.7453376;
				} else {
					w28 = -5.1136827;
				}
			} else {
				if (hops < 2) {
					w28 = -0.09905482;
				} else {
					if (hops < 3) {
						w28 = -1.3187252;
					} else {
						if (hops < 4) {
							w28 = -0.39746544;
						} else {
							w28 = -0.2965401;
						}
					}
				}
			}
		}
	}
	float w29;
	if (cons != 1) {
		if (prod != 1) {
			if (rel_time < 7924) {
				if (rel_time < 6518) {
					if (rel_time < 6216) {
						if (rel_time < 5759) {
							w29 = -0.008233296;
						} else {
							w29 = 0.88620025;
						}
					} else {
						if (prod != 3) {
							w29 = -2.1627398;
						} else {
							w29 = 2.478575;
						}
					}
				} else {
					if (rel_time < 6662) {
						if (rel_time < 6614) {
							w29 = 6.272954;
						} else {
							w29 = 3.3259203;
						}
					} else {
						if (rel_time < 7725) {
							w29 = -0.15069719;
						} else {
							w29 = 1.0381676;
						}
					}
				}
			} else {
				if (rel_time < 8124) {
					if (prod != 4) {
						if (hops < 4) {
							w29 = -2.5837235;
						} else {
							w29 = -3.9389427;
						}
					} else {
						if (hops < 4) {
							w29 = 1.3141879;
						} else {
							w29 = 4.375234;
						}
					}
				} else {
					if (rel_time < 8428) {
						if (prod != 4) {
							w29 = 1.3327087;
						} else {
							w29 = -2.1770587;
						}
					} else {
						if (rel_time < 9332) {
							w29 = -0.46722415;
						} else {
							w29 = 0.0634765;
						}
					}
				}
			}
		} else {
			if (rel_time < 4792) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w29 = -3.6314316;
						} else {
							w29 = -4.123144;
						}
					} else {
						w29 = -3.4960063;
					}
				} else {
					w29 = -1.3798435;
				}
			} else {
				if (rel_time < 5109) {
					if (hops < 3) {
						if (hops < 2) {
							w29 = 3.456097;
						} else {
							w29 = 2.8711698;
						}
					} else {
						if (hops < 4) {
							w29 = 5.7912364;
						} else {
							w29 = 2.2349088;
						}
					}
				} else {
					if (rel_time < 7820) {
						if (rel_time < 6316) {
							w29 = 0.43725395;
						} else {
							w29 = -1.9662974;
						}
					} else {
						if (rel_time < 8124) {
							w29 = 3.276291;
						} else {
							w29 = 0.15780494;
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
							w29 = -0.8713876;
						} else {
							w29 = 0.48219886;
						}
					} else {
						if (hops < 2) {
							w29 = -0.05686659;
						} else {
							w29 = -1.9808097;
						}
					}
				} else {
					if (rel_time < 2640) {
						if (hops < 4) {
							w29 = 3.434457;
						} else {
							w29 = -0.6350186;
						}
					} else {
						if (hops < 2) {
							w29 = 1.4061028;
						} else {
							w29 = -0.035714224;
						}
					}
				}
			} else {
				if (rel_time < 2789) {
					if (hops < 2) {
						w29 = -5.8087397;
					} else {
						if (hops < 4) {
							w29 = -3.823286;
						} else {
							w29 = -1.2620274;
						}
					}
				} else {
					if (rel_time < 2964) {
						if (rel_time < 2818) {
							w29 = -1.7333668;
						} else {
							w29 = 0.8149239;
						}
					} else {
						if (rel_time < 3085) {
							w29 = -5.2395806;
						} else {
							w29 = -1.2101495;
						}
					}
				}
			}
		} else {
			if (rel_time < 3234) {
				if (hops < 2) {
					w29 = 2.8525329;
				} else {
					if (hops < 3) {
						w29 = 4.494683;
					} else {
						if (hops < 4) {
							w29 = 4.0097675;
						} else {
							w29 = 3.251961;
						}
					}
				}
			} else {
				if (rel_time < 3560) {
					if (rel_time < 3530) {
						if (rel_time < 3263) {
							w29 = 0.8188604;
						} else {
							w29 = -0.723922;
						}
					} else {
						if (hops < 3) {
							w29 = 1.6253668;
						} else {
							w29 = 4.9486995;
						}
					}
				} else {
					if (rel_time < 3679) {
						if (hops < 3) {
							w29 = -2.9009616;
						} else {
							w29 = -5.4321938;
						}
					} else {
						if (rel_time < 4004) {
							w29 = -0.6959461;
						} else {
							w29 = 0.16735399;
						}
					}
				}
			}
		}
	}
	float w30;
	if (cons != 4) {
		if (rel_time < 6614) {
			if (rel_time < 6567) {
				if (prod != 0) {
					if (rel_time < 6413) {
						if (rel_time < 6110) {
							w30 = -0.047520723;
						} else {
							w30 = 0.7902775;
						}
					} else {
						if (rel_time < 6518) {
							w30 = -4.1161337;
						} else {
							w30 = -8.392404;
						}
					}
				} else {
					if (rel_time < 6262) {
						if (rel_time < 5360) {
							w30 = 1.0923767;
						} else {
							w30 = -1.62972;
						}
					} else {
						if (rel_time < 6518) {
							w30 = 6.62027;
						} else {
							w30 = 2.5328712;
						}
					}
				}
			} else {
				if (prod != 1) {
					w30 = 7.0712156;
				} else {
					if (hops < 2) {
						w30 = -4.766028;
					} else {
						w30 = -4.4144406;
					}
				}
			}
		} else {
			if (rel_time < 7124) {
				if (prod != 1) {
					if (rel_time < 7118) {
						if (prod != 0) {
							w30 = 0.2919449;
						} else {
							w30 = -2.6784635;
						}
					} else {
						if (hops < 2) {
							w30 = 1.6095203;
						} else {
							w30 = 2.3054612;
						}
					}
				} else {
					if (hops < 3) {
						w30 = 4.623842;
					} else {
						w30 = 4.374775;
					}
				}
			} else {
				if (rel_time < 7173) {
					if (prod != 0) {
						if (hops < 2) {
							w30 = -3.8094842;
						} else {
							w30 = -3.476563;
						}
					} else {
						if (hops < 3) {
							w30 = 2.3594885;
						} else {
							w30 = 2.741749;
						}
					}
				} else {
					if (rel_time < 7516) {
						if (rel_time < 7469) {
							w30 = -0.1609832;
						} else {
							w30 = 3.8011856;
						}
					} else {
						if (rel_time < 7524) {
							w30 = -1.9479504;
						} else {
							w30 = -0.002855362;
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
							w30 = 0.09528697;
						} else {
							w30 = -0.31849465;
						}
					} else {
						if (hops < 3) {
							w30 = -6.4165406;
						} else {
							w30 = -0.79799455;
						}
					}
				} else {
					if (rel_time < 4095) {
						if (rel_time < 3946) {
							w30 = 0.46985158;
						} else {
							w30 = 2.0950854;
						}
					} else {
						if (hops < 2) {
							w30 = -0.18662271;
						} else {
							w30 = -0.031449396;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 4392) {
							w30 = -0.41277573;
						} else {
							w30 = -0.15214911;
						}
					} else {
						if (rel_time < 4510) {
							w30 = -0.35377243;
						} else {
							w30 = -0.50775385;
						}
					}
				} else {
					if (rel_time < 4392) {
						if (rel_time < 4361) {
							w30 = -0.7056269;
						} else {
							w30 = -1.0250827;
						}
					} else {
						if (rel_time < 4510) {
							w30 = -0.14572819;
						} else {
							w30 = -0.5874749;
						}
					}
				}
			}
		} else {
			if (rel_time < 4634) {
				if (hops < 3) {
					if (hops < 2) {
						w30 = 2.5117033;
					} else {
						w30 = 1.7603561;
					}
				} else {
					if (hops < 4) {
						w30 = 2.692525;
					} else {
						w30 = 3.382555;
					}
				}
			} else {
				if (hops < 2) {
					w30 = 1.1354823;
				} else {
					if (hops < 3) {
						w30 = 0.6863984;
					} else {
						if (hops < 4) {
							w30 = 0.9944012;
						} else {
							w30 = 1.0940441;
						}
					}
				}
			}
		}
	}
	float w31;
	if (rel_time < 4244) {
		if (rel_time < 4124) {
			if (rel_time < 4035) {
				if (rel_time < 4004) {
					if (rel_time < 3976) {
						if (cons != 3) {
							w31 = -0.027066205;
						} else {
							w31 = 0.3251559;
						}
					} else {
						if (cons != 1) {
							w31 = 1.5489475;
						} else {
							w31 = -1.4762144;
						}
					}
				} else {
					if (cons != 2) {
						if (hops < 2) {
							w31 = -4.2972593;
						} else {
							w31 = -3.0451875;
						}
					} else {
						if (rel_time < 4006) {
							w31 = 1.3672737;
						} else {
							w31 = 2.6054397;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (cons != 1) {
						if (rel_time < 4065) {
							w31 = 1.5919919;
						} else {
							w31 = -0.651715;
						}
					} else {
						w31 = 6.107311;
					}
				} else {
					if (hops < 2) {
						w31 = -5.1077957;
					} else {
						if (hops < 4) {
							w31 = -3.858034;
						} else {
							w31 = -3.2563624;
						}
					}
				}
			}
		} else {
			if (cons != 3) {
				if (cons != 1) {
					if (cons != 0) {
						if (rel_time < 4183) {
							w31 = -0.3524631;
						} else {
							w31 = -0.037901085;
						}
					} else {
						if (hops < 2) {
							w31 = 2.1064856;
						} else {
							w31 = 0.12645888;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w31 = 2.0255792;
						} else {
							w31 = 2.1566775;
						}
					} else {
						if (hops < 4) {
							w31 = 1.2810715;
						} else {
							w31 = 1.3930984;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 4183) {
						if (hops < 2) {
							w31 = 2.7559562;
						} else {
							w31 = 3.113823;
						}
					} else {
						if (hops < 2) {
							w31 = 3.2956758;
						} else {
							w31 = 3.4763196;
						}
					}
				} else {
					if (rel_time < 4183) {
						if (hops < 4) {
							w31 = 1.2299587;
						} else {
							w31 = 1.606884;
						}
					} else {
						w31 = 1.9083931;
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
							w31 = 2.0583172;
						} else {
							w31 = 0.036605116;
						}
					} else {
						if (cons != 0) {
							w31 = -0.32590792;
						} else {
							w31 = -0.9987917;
						}
					}
				} else {
					if (rel_time < 4273) {
						if (hops < 3) {
							w31 = -3.2194684;
						} else {
							w31 = -3.9763324;
						}
					} else {
						if (hops < 3) {
							w31 = -1.8003886;
						} else {
							w31 = -1.0676064;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 4332) {
						w31 = -3.0459952;
					} else {
						if (hops < 2) {
							w31 = -2.8239782;
						} else {
							w31 = -2.6460934;
						}
					}
				} else {
					if (rel_time < 4332) {
						w31 = -1.7548492;
					} else {
						if (hops < 4) {
							w31 = -1.5707802;
						} else {
							w31 = -1.4410999;
						}
					}
				}
			}
		} else {
			if (rel_time < 4510) {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 2) {
							w31 = 0.43201154;
						} else {
							w31 = -0.36015677;
						}
					} else {
						if (hops < 4) {
							w31 = 0.8044175;
						} else {
							w31 = -0.2861918;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 4480) {
							w31 = 4.4463005;
						} else {
							w31 = 3.587786;
						}
					} else {
						if (hops < 3) {
							w31 = 2.3788066;
						} else {
							w31 = 1.8315647;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (cons != 2) {
						if (rel_time < 5312) {
							w31 = -0.24254987;
						} else {
							w31 = 0.0077571594;
						}
					} else {
						if (rel_time < 4590) {
							w31 = 7.2988005;
						} else {
							w31 = 0.057165403;
						}
					}
				} else {
					if (rel_time < 4613) {
						if (hops < 4) {
							w31 = 0.2979654;
						} else {
							w31 = 2.0291207;
						}
					} else {
						if (hops < 3) {
							w31 = -3.3879678;
						} else {
							w31 = -2.5018141;
						}
					}
				}
			}
		}
	}
	float w32;
	if (rel_time < 1420) {
		if (cons != 1) {
			if (hops < 4) {
				if (rel_time < 1347) {
					if (cons != 3) {
						if (hops < 3) {
							w32 = 0.162425;
						} else {
							w32 = -0.03986942;
						}
					} else {
						if (hops < 2) {
							w32 = -0.36673683;
						} else {
							w32 = -0.7170765;
						}
					}
				} else {
					if (hops < 2) {
						if (cons != 3) {
							w32 = 0.09526774;
						} else {
							w32 = 0.1838052;
						}
					} else {
						if (cons != 3) {
							w32 = 0.8258064;
						} else {
							w32 = 0.5157355;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (rel_time < 1168) {
						w32 = -0.55748296;
					} else {
						if (cons != 2) {
							w32 = -0.7753105;
						} else {
							w32 = -0.69355726;
						}
					}
				} else {
					w32 = 1.5189292;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w32 = 0.73426336;
					} else {
						w32 = 0.7937231;
					}
				} else {
					w32 = 1.113889;
				}
			} else {
				w32 = 0.07324472;
			}
		}
	} else {
		if (rel_time < 1644) {
			if (cons != 1) {
				if (rel_time < 1571) {
					if (hops < 3) {
						if (rel_time < 1501) {
							w32 = 0.081760675;
						} else {
							w32 = 0.34050497;
						}
					} else {
						if (hops < 4) {
							w32 = -0.0376416;
						} else {
							w32 = -0.40185988;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w32 = 0.9146183;
						} else {
							w32 = 1.1151905;
						}
					} else {
						if (hops < 4) {
							w32 = 0.6041926;
						} else {
							w32 = 1.1229112;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w32 = -1.5822945;
						} else {
							w32 = -1.3104216;
						}
					} else {
						if (rel_time < 1573) {
							w32 = -1.932411;
						} else {
							w32 = -2.4284117;
						}
					}
				} else {
					w32 = -0.36068386;
				}
			}
		} else {
			if (rel_time < 2035) {
				if (cons != 1) {
					if (rel_time < 1984) {
						if (size < 125) {
							w32 = -1.2155644;
						} else {
							w32 = 0.079134874;
						}
					} else {
						if (cons != 3) {
							w32 = -1.0430131;
						} else {
							w32 = 2.2259674;
						}
					}
				} else {
					if (rel_time < 1888) {
						if (hops < 3) {
							w32 = 3.2529182;
						} else {
							w32 = 3.554173;
						}
					} else {
						if (hops < 4) {
							w32 = 2.0437958;
						} else {
							w32 = 0.25299913;
						}
					}
				}
			} else {
				if (rel_time < 2282) {
					if (cons != 2) {
						if (cons != 0) {
							w32 = -1.7174916;
						} else {
							w32 = 0.85203564;
						}
					} else {
						if (hops < 2) {
							w32 = 0.7453755;
						} else {
							w32 = 1.9923605;
						}
					}
				} else {
					if (rel_time < 2312) {
						if (hops < 2) {
							w32 = 0.03583169;
						} else {
							w32 = 1.4307615;
						}
					} else {
						if (cons != 3) {
							w32 = -0.012513993;
						} else {
							w32 = 0.12628469;
						}
					}
				}
			}
		}
	}
	return (699.8842 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32);
}
