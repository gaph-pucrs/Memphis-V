#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

float bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	float w0;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 3488) {
				if (hops < 3) {
					if (rel_time < 1331) {
						if (cons != 2) {
							w0 = -77.02682;
						} else {
							w0 = -85.24239;
						}
					} else {
						if (hops < 2) {
							w0 = -91.511665;
						} else {
							w0 = -88.02541;
						}
					}
				} else {
					if (rel_time < 1331) {
						if (cons != 2) {
							w0 = -71.64546;
						} else {
							w0 = -79.236145;
						}
					} else {
						if (rel_time < 1510) {
							w0 = -89.40295;
						} else {
							w0 = -83.12806;
						}
					}
				}
			} else {
				if (rel_time < 3531) {
					if (rel_time < 3510) {
						if (rel_time < 3509) {
							w0 = -75.052795;
						} else {
							w0 = -53.11665;
						}
					} else {
						if (hops < 3) {
							w0 = -80.758995;
						} else {
							w0 = -74.745804;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w0 = -69.07907;
						} else {
							w0 = -65.87059;
						}
					} else {
						w0 = -62.290688;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 3318) {
						if (rel_time < 3171) {
							w0 = -102.11378;
						} else {
							w0 = -106.62515;
						}
					} else {
						w0 = -97.633;
					}
				} else {
					if (rel_time < 3318) {
						if (rel_time < 3171) {
							w0 = -98.56929;
						} else {
							w0 = -103.316246;
						}
					} else {
						w0 = -94.32288;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 3318) {
						if (rel_time < 3171) {
							w0 = -95.07669;
						} else {
							w0 = -99.449844;
						}
					} else {
						w0 = -90.45765;
					}
				} else {
					w0 = -91.64247;
				}
			}
		}
	} else {
		if (rel_time < 402) {
			if (cons != 0) {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 3) {
							w0 = 118.64197;
						} else {
							w0 = 125.18426;
						}
					} else {
						if (hops < 3) {
							w0 = 142.23953;
						} else {
							w0 = 148.13739;
						}
					}
				} else {
					if (hops < 3) {
						w0 = 147.34053;
					} else {
						w0 = 153.02751;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 69) {
						if (hops < 2) {
							w0 = 65.75487;
						} else {
							w0 = 69.32572;
						}
					} else {
						w0 = 61.246105;
					}
				} else {
					w0 = 73.69343;
				}
			}
		} else {
			if (rel_time < 3909) {
				if (rel_time < 3641) {
					if (size < 125) {
						if (rel_time < 988) {
							w0 = 43.594048;
						} else {
							w0 = 32.067516;
						}
					} else {
						if (hops < 3) {
							w0 = 58.954346;
						} else {
							w0 = 65.01907;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 3) {
							w0 = -0.7952869;
						} else {
							w0 = -11.992586;
						}
					} else {
						if (hops < 3) {
							w0 = 38.016594;
						} else {
							w0 = 44.048332;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11003) {
							w0 = 43.873875;
						} else {
							w0 = 49.824234;
						}
					} else {
						if (rel_time < 11003) {
							w0 = 47.2908;
						} else {
							w0 = 53.069527;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11003) {
							w0 = 51.023403;
						} else {
							w0 = 57.186253;
						}
					} else {
						if (rel_time < 11003) {
							w0 = 54.324703;
						} else {
							w0 = 60.029613;
						}
					}
				}
			}
		}
	}
	float w1;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 3290) {
				if (rel_time < 3141) {
					if (rel_time < 2993) {
						if (rel_time < 2845) {
							w1 = -43.05461;
						} else {
							w1 = -51.803886;
						}
					} else {
						if (cons != 3) {
							w1 = -37.42818;
						} else {
							w1 = -30.92689;
						}
					}
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w1 = -56.425438;
						} else {
							w1 = -47.411446;
						}
					} else {
						if (hops < 4) {
							w1 = -47.372284;
						} else {
							w1 = -42.50104;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (hops < 2) {
						if (rel_time < 3531) {
							w1 = -39.790096;
						} else {
							w1 = -34.569347;
						}
					} else {
						if (rel_time < 3378) {
							w1 = -38.38677;
						} else {
							w1 = -34.556194;
						}
					}
				} else {
					if (rel_time < 3349) {
						if (hops < 4) {
							w1 = -31.378664;
						} else {
							w1 = -26.545305;
						}
					} else {
						if (hops < 4) {
							w1 = -56.87167;
						} else {
							w1 = -51.979412;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1241) {
					w1 = -54.196495;
				} else {
					if (rel_time < 1391) {
						if (hops < 2) {
							w1 = -46.368927;
						} else {
							w1 = -44.374737;
						}
					} else {
						if (rel_time < 1539) {
							w1 = -54.693497;
						} else {
							w1 = -49.819023;
						}
					}
				}
			} else {
				if (rel_time < 1241) {
					w1 = -51.41365;
				} else {
					if (rel_time < 1391) {
						w1 = -42.443333;
					} else {
						if (rel_time < 1539) {
							w1 = -51.49258;
						} else {
							w1 = -46.805958;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 402) {
			if (cons != 0) {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 2) {
							w1 = 57.347103;
						} else {
							w1 = 61.899075;
						}
					} else {
						if (hops < 2) {
							w1 = 69.12906;
						} else {
							w1 = 73.54269;
						}
					}
				} else {
					if (hops < 2) {
						w1 = 71.69427;
					} else {
						w1 = 76.010826;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 69) {
						if (hops < 2) {
							w1 = 32.906113;
						} else {
							w1 = 34.688408;
						}
					} else {
						if (hops < 2) {
							w1 = 28.800056;
						} else {
							w1 = 32.233486;
						}
					}
				} else {
					if (rel_time < 69) {
						if (hops < 4) {
							w1 = 36.404526;
						} else {
							w1 = 39.480503;
						}
					} else {
						w1 = 29.678226;
					}
				}
			}
		} else {
			if (rel_time < 3909) {
				if (rel_time < 3592) {
					if (size < 125) {
						if (cons != 0) {
							w1 = 21.608212;
						} else {
							w1 = 10.317183;
						}
					} else {
						if (cons != 3) {
							w1 = 32.016464;
						} else {
							w1 = 25.443972;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 1) {
							w1 = 0.92365116;
						} else {
							w1 = -14.070633;
						}
					} else {
						if (hops < 2) {
							w1 = 15.7542925;
						} else {
							w1 = 20.813465;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 10835) {
							w1 = 22.038872;
						} else {
							w1 = 19.768015;
						}
					} else {
						if (rel_time < 10835) {
							w1 = 23.742033;
						} else {
							w1 = 21.676144;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 10961) {
							w1 = 25.582754;
						} else {
							w1 = 22.746328;
						}
					} else {
						if (rel_time < 10878) {
							w1 = 27.280823;
						} else {
							w1 = 24.47198;
						}
					}
				}
			}
		}
	}
	float w2;
	if (size < 38) {
		if (hops < 3) {
			if (rel_time < 3318) {
				if (rel_time < 3171) {
					if (rel_time < 2726) {
						if (rel_time < 2578) {
							w2 = -23.12128;
						} else {
							w2 = -30.324774;
						}
					} else {
						if (rel_time < 2814) {
							w2 = -14.118192;
						} else {
							w2 = -22.998344;
						}
					}
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w2 = -28.673456;
						} else {
							w2 = -24.763502;
						}
					} else {
						if (hops < 2) {
							w2 = -25.214464;
						} else {
							w2 = -23.461393;
						}
					}
				}
			} else {
				if (rel_time < 3407) {
					if (cons != 2) {
						if (cons != 4) {
							w2 = -15.05743;
						} else {
							w2 = -22.989359;
						}
					} else {
						if (hops < 2) {
							w2 = -22.507868;
						} else {
							w2 = -21.455687;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 3468) {
							w2 = -23.030582;
						} else {
							w2 = -18.691248;
						}
					} else {
						if (hops < 2) {
							w2 = -29.96042;
						} else {
							w2 = -28.208548;
						}
					}
				}
			}
		} else {
			if (cons != 0) {
				if (hops < 4) {
					if (rel_time < 1361) {
						if (cons != 2) {
							w2 = -14.9114275;
						} else {
							w2 = -18.969975;
						}
					} else {
						if (rel_time < 1479) {
							w2 = -27.036724;
						} else {
							w2 = -20.531765;
						}
					}
				} else {
					if (rel_time < 1361) {
						if (cons != 2) {
							w2 = -11.617655;
						} else {
							w2 = -15.4530525;
						}
					} else {
						if (rel_time < 1479) {
							w2 = -23.393927;
						} else {
							w2 = -17.16661;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 3022) {
						if (rel_time < 2874) {
							w2 = -23.908947;
						} else {
							w2 = -28.60822;
						}
					} else {
						if (rel_time < 3171) {
							w2 = -19.933458;
						} else {
							w2 = -24.145842;
						}
					}
				} else {
					if (rel_time < 3318) {
						if (rel_time < 3171) {
							w2 = -22.227152;
						} else {
							w2 = -27.043247;
						}
					} else {
						w2 = -18.06687;
					}
				}
			}
		}
	} else {
		if (rel_time < 402) {
			if (cons != 0) {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 4) {
							w2 = 29.848272;
						} else {
							w2 = 34.564674;
						}
					} else {
						if (hops < 4) {
							w2 = 35.763977;
						} else {
							w2 = 39.879852;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w2 = 35.87841;
						} else {
							w2 = 37.52834;
						}
					} else {
						w2 = 41.12701;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 69) {
						if (hops < 2) {
							w2 = 16.467405;
						} else {
							w2 = 17.35699;
						}
					} else {
						if (hops < 2) {
							w2 = 14.457633;
						} else {
							w2 = 16.173706;
						}
					}
				} else {
					if (rel_time < 69) {
						if (hops < 4) {
							w2 = 18.218042;
						} else {
							w2 = 19.792051;
						}
					} else {
						w2 = 15.039644;
					}
				}
			}
		} else {
			if (rel_time < 3909) {
				if (rel_time < 1037) {
					if (cons != 0) {
						if (hops < 2) {
							w2 = 11.613342;
						} else {
							w2 = 16.617031;
						}
					} else {
						if (rel_time < 473) {
							w2 = 17.775234;
						} else {
							w2 = 5.1592216;
						}
					}
				} else {
					if (prod != 1) {
						if (prod != 3) {
							w2 = 6.1648283;
						} else {
							w2 = -6.459474;
						}
					} else {
						if (rel_time < 3641) {
							w2 = -20.767988;
						} else {
							w2 = -4.6123843;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11003) {
							w2 = 10.950913;
						} else {
							w2 = 15.065416;
						}
					} else {
						if (rel_time < 11003) {
							w2 = 11.804604;
						} else {
							w2 = 15.728101;
						}
					}
				} else {
					if (rel_time < 11003) {
						if (rel_time < 10961) {
							w2 = 13.002135;
						} else {
							w2 = 4.992566;
						}
					} else {
						w2 = 17.427425;
					}
				}
			}
		}
	}
	float w3;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 2429) {
				if (rel_time < 2280) {
					if (rel_time < 2133) {
						if (rel_time < 1984) {
							w3 = -12.192131;
						} else {
							w3 = -19.50871;
						}
					} else {
						if (rel_time < 2221) {
							w3 = -3.2942154;
						} else {
							w3 = -9.771887;
						}
					}
				} else {
					if (rel_time < 2369) {
						if (cons != 2) {
							w3 = -24.996222;
						} else {
							w3 = -16.041937;
						}
					} else {
						if (cons != 1) {
							w3 = -17.381296;
						} else {
							w3 = -0.33217698;
						}
					}
				}
			} else {
				if (rel_time < 2517) {
					if (cons != 2) {
						if (cons != 4) {
							w3 = -0.06689041;
						} else {
							w3 = -9.221858;
						}
					} else {
						w3 = -9.326301;
					}
				} else {
					if (rel_time < 2666) {
						if (rel_time < 2578) {
							w3 = -10.841616;
						} else {
							w3 = -18.246235;
						}
					} else {
						if (rel_time < 2845) {
							w3 = -9.950635;
						} else {
							w3 = -12.282704;
						}
					}
				}
			}
		} else {
			if (cons != 0) {
				if (rel_time < 1657) {
					if (rel_time < 1510) {
						if (rel_time < 1361) {
							w3 = -6.621949;
						} else {
							w3 = -15.390887;
						}
					} else {
						if (cons != 4) {
							w3 = -0.7352958;
						} else {
							w3 = -7.088649;
						}
					}
				} else {
					if (rel_time < 1776) {
						if (cons != 2) {
							w3 = -22.39483;
						} else {
							w3 = -13.745437;
						}
					} else {
						if (rel_time < 1924) {
							w3 = -3.8141613;
						} else {
							w3 = -10.540431;
						}
					}
				}
			} else {
				if (rel_time < 3022) {
					if (rel_time < 2874) {
						if (rel_time < 2726) {
							w3 = -12.401419;
						} else {
							w3 = -8.05035;
						}
					} else {
						if (hops < 3) {
							w3 = -17.058529;
						} else {
							w3 = -14.626392;
						}
					}
				} else {
					if (rel_time < 3171) {
						if (hops < 4) {
							w3 = -9.221477;
						} else {
							w3 = -6.935209;
						}
					} else {
						if (rel_time < 3318) {
							w3 = -13.366004;
						} else {
							w3 = -10.186662;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 402) {
			if (cons != 0) {
				if (cons != 2) {
					if (rel_time < 321) {
						if (cons != 4) {
							w3 = 18.410988;
						} else {
							w3 = 22.86557;
						}
					} else {
						if (hops < 2) {
							w3 = 13.54923;
						} else {
							w3 = 14.9402685;
						}
					}
				} else {
					if (hops < 2) {
						w3 = 13.429515;
					} else {
						if (hops < 4) {
							w3 = 14.823004;
						} else {
							w3 = 16.068192;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 69) {
						if (hops < 2) {
							w3 = 8.240886;
						} else {
							w3 = 8.684894;
						}
					} else {
						if (hops < 2) {
							w3 = 7.257727;
						} else {
							w3 = 8.115428;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 69) {
							w3 = 9.116934;
						} else {
							w3 = 7.6214275;
						}
					} else {
						w3 = 9.921998;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3907) {
					if (rel_time < 1037) {
						if (cons != 0) {
							w3 = 6.329131;
						} else {
							w3 = 2.2697988;
						}
					} else {
						if (cons != 4) {
							w3 = -1.8065813;
						} else {
							w3 = 4.892047;
						}
					}
				} else {
					if (rel_time < 4103) {
						if (prod != 2) {
							w3 = 10.298263;
						} else {
							w3 = -1.8865279;
						}
					} else {
						if (rel_time < 4305) {
							w3 = 2.4306448;
						} else {
							w3 = 5.745489;
						}
					}
				}
			} else {
				if (rel_time < 1037) {
					if (rel_time < 789) {
						if (size < 125) {
							w3 = 1.7558697;
						} else {
							w3 = 8.748223;
						}
					} else {
						if (cons != 3) {
							w3 = 10.125681;
						} else {
							w3 = 15.972528;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3907) {
							w3 = 4.103952;
						} else {
							w3 = 6.2904706;
						}
					} else {
						if (cons != 4) {
							w3 = 7.1210384;
						} else {
							w3 = 13.439358;
						}
					}
				}
			}
		}
	}
	float w4;
	if (size < 38) {
		if (rel_time < 3318) {
			if (rel_time < 3171) {
				if (rel_time < 3022) {
					if (rel_time < 2874) {
						if (rel_time < 2726) {
							w4 = -5.931681;
						} else {
							w4 = -1.6497141;
						}
					} else {
						if (cons != 3) {
							w4 = -7.634795;
						} else {
							w4 = -14.138825;
						}
					}
				} else {
					if (rel_time < 3052) {
						if (cons != 1) {
							w4 = -5.257334;
						} else {
							w4 = 3.6608205;
						}
					} else {
						if (cons != 3) {
							w4 = -5.345496;
						} else {
							w4 = 0.9189329;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 2) {
							w4 = -7.226941;
						} else {
							w4 = -6.69736;
						}
					} else {
						if (hops < 3) {
							w4 = -9.25405;
						} else {
							w4 = -11.405615;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w4 = -9.722984;
						} else {
							w4 = -8.839265;
						}
					} else {
						if (hops < 4) {
							w4 = -11.854941;
						} else {
							w4 = -10.021617;
						}
					}
				}
			}
		} else {
			if (rel_time < 3407) {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 4) {
							w4 = -5.3201213;
						} else {
							w4 = -3.5175455;
						}
					} else {
						if (hops < 3) {
							w4 = -3.0850074;
						} else {
							w4 = 0.96050453;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w4 = 0.14272813;
						} else {
							w4 = -1.302945;
						}
					} else {
						if (hops < 4) {
							w4 = 2.5140553;
						} else {
							w4 = 4.327105;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (rel_time < 3531) {
						if (cons != 2) {
							w4 = -5.2159286;
						} else {
							w4 = -2.4581995;
						}
					} else {
						if (hops < 3) {
							w4 = -1.4313173;
						} else {
							w4 = 1.1898232;
						}
					}
				} else {
					if (hops < 3) {
						w4 = -8.856059;
					} else {
						w4 = -11.792098;
					}
				}
			}
		}
	} else {
		if (rel_time < 473) {
			if (cons != 0) {
				if (rel_time < 402) {
					if (cons != 3) {
						if (cons != 1) {
							w4 = 7.5843773;
						} else {
							w4 = 8.890052;
						}
					} else {
						if (hops < 4) {
							w4 = 9.317438;
						} else {
							w4 = 11.435722;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w4 = -2.6050253;
						} else {
							w4 = -1.9969188;
						}
					} else {
						w4 = 1.1943341;
					}
				}
			} else {
				if (rel_time < 402) {
					if (hops < 3) {
						if (rel_time < 69) {
							w4 = 4.2458415;
						} else {
							w4 = 3.8782594;
						}
					} else {
						if (hops < 4) {
							w4 = 4.523874;
						} else {
							w4 = 4.97402;
						}
					}
				} else {
					if (hops < 2) {
						w4 = 4.502051;
					} else {
						if (hops < 3) {
							w4 = 8.339774;
						} else {
							w4 = 6.077322;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 3909) {
					if (rel_time < 1037) {
						if (cons != 0) {
							w4 = 2.7314613;
						} else {
							w4 = -2.9969735;
						}
					} else {
						if (prod != 0) {
							w4 = -3.0671837;
						} else {
							w4 = 2.5639055;
						}
					}
				} else {
					if (rel_time < 4257) {
						if (prod != 4) {
							w4 = 5.9783106;
						} else {
							w4 = -4.385784;
						}
					} else {
						if (rel_time < 4305) {
							w4 = -4.8258905;
						} else {
							w4 = 2.6431026;
						}
					}
				}
			} else {
				if (rel_time < 542) {
					if (hops < 4) {
						if (hops < 3) {
							w4 = -1.5507073;
						} else {
							w4 = -2.1247423;
						}
					} else {
						w4 = 1.4591486;
					}
				} else {
					if (size < 125) {
						if (rel_time < 789) {
							w4 = -1.5878994;
						} else {
							w4 = 3.1391947;
						}
					} else {
						if (cons != 3) {
							w4 = 7.5591464;
						} else {
							w4 = 1.8416725;
						}
					}
				}
			}
		}
	}
	float w5;
	if (size < 38) {
		if (hops < 4) {
			if (rel_time < 1688) {
				if (rel_time < 1539) {
					if (rel_time < 1391) {
						if (rel_time < 1241) {
							w5 = -6.0165734;
						} else {
							w5 = -0.74721617;
						}
					} else {
						if (hops < 3) {
							w5 = -8.304863;
						} else {
							w5 = -2.5272424;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 1569) {
							w5 = 5.037641;
						} else {
							w5 = -1.1926097;
						}
					} else {
						if (hops < 2) {
							w5 = 9.768414;
						} else {
							w5 = 5.503252;
						}
					}
				}
			} else {
				if (rel_time < 1836) {
					if (cons != 2) {
						if (rel_time < 1776) {
							w5 = -10.674968;
						} else {
							w5 = -7.0432005;
						}
					} else {
						if (hops < 2) {
							w5 = -6.4311004;
						} else {
							w5 = -4.1243267;
						}
					}
				} else {
					if (rel_time < 1955) {
						if (cons != 3) {
							w5 = 1.467083;
						} else {
							w5 = 8.018767;
						}
					} else {
						if (rel_time < 2103) {
							w5 = -7.9575653;
						} else {
							w5 = -2.680072;
						}
					}
				}
			}
		} else {
			if (rel_time < 1688) {
				if (rel_time < 1539) {
					if (cons != 0) {
						if (rel_time < 1510) {
							w5 = -0.30189124;
						} else {
							w5 = 6.9221363;
						}
					} else {
						if (rel_time < 1391) {
							w5 = -1.7391316;
						} else {
							w5 = -4.3820705;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 1569) {
							w5 = 5.218084;
						} else {
							w5 = 0.10815039;
						}
					} else {
						w5 = 7.348768;
					}
				}
			} else {
				if (rel_time < 1836) {
					if (cons != 2) {
						if (rel_time < 1747) {
							w5 = -7.783552;
						} else {
							w5 = -5.029152;
						}
					} else {
						if (rel_time < 1717) {
							w5 = -3.1176493;
						} else {
							w5 = -2.3395975;
						}
					}
				} else {
					if (rel_time < 1955) {
						if (cons != 2) {
							w5 = 5.891409;
						} else {
							w5 = -0.6792491;
						}
					} else {
						if (rel_time < 2133) {
							w5 = -6.209611;
						} else {
							w5 = -0.9746158;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 473) {
			if (cons != 0) {
				if (rel_time < 402) {
					if (hops < 2) {
						if (cons != 3) {
							w5 = 3.0782397;
						} else {
							w5 = 4.102725;
						}
					} else {
						if (cons != 2) {
							w5 = 4.8230176;
						} else {
							w5 = 3.7103984;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w5 = -0.89710855;
						} else {
							w5 = -1.4617345;
						}
					} else {
						w5 = 0.6060791;
					}
				}
			} else {
				if (rel_time < 402) {
					if (hops < 2) {
						if (rel_time < 69) {
							w5 = 2.0029564;
						} else {
							w5 = 1.7120061;
						}
					} else {
						if (hops < 4) {
							w5 = 2.234409;
						} else {
							w5 = 2.4935482;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w5 = 3.30154;
						} else {
							w5 = 2.1130095;
						}
					} else {
						w5 = 5.6625366;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 3909) {
					if (rel_time < 3641) {
						if (prod != 1) {
							w5 = 1.5065678;
						} else {
							w5 = -11.916721;
						}
					} else {
						if (prod != 3) {
							w5 = -0.8999196;
						} else {
							w5 = -4.580484;
						}
					}
				} else {
					if (rel_time < 10685) {
						if (rel_time < 10639) {
							w5 = 1.4432452;
						} else {
							w5 = 10.639782;
						}
					} else {
						if (prod != 1) {
							w5 = 2.079813;
						} else {
							w5 = -7.803259;
						}
					}
				}
			} else {
				if (rel_time < 1134) {
					if (rel_time < 542) {
						w5 = 0.73183775;
					} else {
						if (rel_time < 1037) {
							w5 = 5.9877305;
						} else {
							w5 = 3.755359;
						}
					}
				} else {
					if (rel_time < 10574) {
						if (rel_time < 10529) {
							w5 = 1.9580909;
						} else {
							w5 = -4.3051867;
						}
					} else {
						if (rel_time < 10621) {
							w5 = 11.798483;
						} else {
							w5 = 1.9805266;
						}
					}
				}
			}
		}
	}
	float w6;
	if (size < 38) {
		if (rel_time < 2280) {
			if (rel_time < 2133) {
				if (rel_time < 1984) {
					if (rel_time < 1836) {
						if (rel_time < 1688) {
							w6 = -0.93943435;
						} else {
							w6 = -3.8869047;
						}
					} else {
						if (rel_time < 1864) {
							w6 = 6.1383257;
						} else {
							w6 = 0.7959555;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 2014) {
							w6 = -9.170919;
						} else {
							w6 = -1.8644067;
						}
					} else {
						if (hops < 2) {
							w6 = -8.315825;
						} else {
							w6 = -11.106021;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 2) {
							w6 = -1.4954609;
						} else {
							w6 = 2.202001;
						}
					} else {
						if (hops < 2) {
							w6 = 6.1125154;
						} else {
							w6 = 11.491712;
						}
					}
				} else {
					if (hops < 2) {
						w6 = 5.925704;
					} else {
						if (hops < 4) {
							w6 = 11.132811;
						} else {
							w6 = 11.989571;
						}
					}
				}
			}
		} else {
			if (rel_time < 2369) {
				if (cons != 2) {
					if (hops < 2) {
						if (cons != 4) {
							w6 = -8.526621;
						} else {
							w6 = 0.95798284;
						}
					} else {
						if (cons != 4) {
							w6 = -13.999938;
						} else {
							w6 = -4.4468617;
						}
					}
				} else {
					if (hops < 2) {
						w6 = -3.7256835;
					} else {
						if (hops < 4) {
							w6 = -4.8718677;
						} else {
							w6 = -4.0445995;
						}
					}
				}
			} else {
				if (rel_time < 2548) {
					if (rel_time < 2429) {
						if (cons != 1) {
							w6 = -5.163443;
						} else {
							w6 = 9.22732;
						}
					} else {
						if (cons != 3) {
							w6 = 3.5252554;
						} else {
							w6 = 9.509437;
						}
					}
				} else {
					if (rel_time < 2666) {
						if (cons != 0) {
							w6 = -7.931337;
						} else {
							w6 = 1.5970497;
						}
					} else {
						if (cons != 0) {
							w6 = -0.9470869;
						} else {
							w6 = -2.666072;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 321) {
			if (cons != 4) {
				if (rel_time < 69) {
					if (hops < 2) {
						w6 = 1.0023655;
					} else {
						if (hops < 3) {
							w6 = 1.1079054;
						} else {
							w6 = 1.2028407;
						}
					}
				} else {
					if (hops < 4) {
						if (cons != 2) {
							w6 = 2.2337136;
						} else {
							w6 = 1.6503171;
						}
					} else {
						if (cons != 2) {
							w6 = 3.6556592;
						} else {
							w6 = 2.4230244;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w6 = 4.462785;
					} else {
						w6 = 5.2153726;
					}
				} else {
					w6 = 6.471858;
				}
			}
		} else {
			if (rel_time < 10961) {
				if (rel_time < 10574) {
					if (rel_time < 10240) {
						if (rel_time < 10223) {
							w6 = 0.7426784;
						} else {
							w6 = 6.8559365;
						}
					} else {
						if (prod != 2) {
							w6 = -3.4392924;
						} else {
							w6 = 6.81831;
						}
					}
				} else {
					if (prod != 4) {
						if (rel_time < 10621) {
							w6 = 8.617487;
						} else {
							w6 = 1.9688506;
						}
					} else {
						if (hops < 4) {
							w6 = -5.571254;
						} else {
							w6 = -4.969936;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 11003) {
						if (hops < 3) {
							w6 = 7.38253;
						} else {
							w6 = 11.888785;
						}
					} else {
						if (hops < 3) {
							w6 = 2.3585868;
						} else {
							w6 = 2.8758042;
						}
					}
				} else {
					if (hops < 3) {
						w6 = -8.56509;
					} else {
						w6 = -3.7922509;
					}
				}
			}
		}
	}
	float w7;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 1510) {
				if (rel_time < 1361) {
					if (cons != 0) {
						if (cons != 2) {
							w7 = 2.1570337;
						} else {
							w7 = -1.4567072;
						}
					} else {
						if (rel_time < 1241) {
							w7 = -4.098336;
						} else {
							w7 = -2.2450178;
						}
					}
				} else {
					if (cons != 1) {
						if (cons != 3) {
							w7 = -2.0371888;
						} else {
							w7 = -10.565901;
						}
					} else {
						if (rel_time < 1391) {
							w7 = -15.086583;
						} else {
							w7 = -11.6290245;
						}
					}
				}
			} else {
				if (rel_time < 1657) {
					if (cons != 1) {
						if (rel_time < 1569) {
							w7 = -3.1084;
						} else {
							w7 = 2.7796552;
						}
					} else {
						if (rel_time < 1539) {
							w7 = 14.004571;
						} else {
							w7 = 7.1808257;
						}
					}
				} else {
					if (rel_time < 1776) {
						if (cons != 1) {
							w7 = -3.1290798;
						} else {
							w7 = -9.786884;
						}
					} else {
						if (rel_time < 2280) {
							w7 = 0.13113886;
						} else {
							w7 = -1.50206;
						}
					}
				}
			}
		} else {
			if (rel_time < 3531) {
				if (rel_time < 2280) {
					if (rel_time < 2133) {
						if (rel_time < 1984) {
							w7 = -0.23161164;
						} else {
							w7 = -3.1128774;
						}
					} else {
						if (cons != 3) {
							w7 = 2.1231287;
						} else {
							w7 = 5.629146;
						}
					}
				} else {
					if (rel_time < 2369) {
						if (cons != 2) {
							w7 = -6.6054525;
						} else {
							w7 = -2.3839917;
						}
					} else {
						if (rel_time < 2517) {
							w7 = 2.1080918;
						} else {
							w7 = -0.7450087;
						}
					}
				}
			} else {
				if (hops < 3) {
					w7 = 1.4376761;
				} else {
					if (hops < 4) {
						w7 = 2.0608308;
					} else {
						w7 = 2.5361512;
					}
				}
			}
		}
	} else {
		if (cons != 2) {
			if (rel_time < 933) {
				if (rel_time < 789) {
					if (size < 125) {
						if (cons != 0) {
							w7 = 10.413545;
						} else {
							w7 = -5.8789973;
						}
					} else {
						if (cons != 4) {
							w7 = 0.13195425;
						} else {
							w7 = 2.0161233;
						}
					}
				} else {
					if (rel_time < 837) {
						if (hops < 3) {
							w7 = 5.6253896;
						} else {
							w7 = 7.8409777;
						}
					} else {
						if (hops < 3) {
							w7 = 5.357535;
						} else {
							w7 = 4.738865;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (cons != 0) {
						if (rel_time < 1182) {
							w7 = -3.0313087;
						} else {
							w7 = 0.36269242;
						}
					} else {
						if (rel_time < 988) {
							w7 = -0.4552815;
						} else {
							w7 = 5.9600744;
						}
					}
				} else {
					if (rel_time < 1037) {
						if (hops < 3) {
							w7 = -13.64785;
						} else {
							w7 = -11.303838;
						}
					} else {
						if (hops < 3) {
							w7 = -4.6274514;
						} else {
							w7 = -3.7471564;
						}
					}
				}
			}
		} else {
			if (rel_time < 886) {
				if (rel_time < 615) {
					if (rel_time < 247) {
						if (hops < 2) {
							w7 = 0.56935656;
						} else {
							w7 = 0.98035735;
						}
					} else {
						if (hops < 2) {
							w7 = 4.1327477;
						} else {
							w7 = 2.389163;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w7 = -4.254353;
						} else {
							w7 = -3.5541785;
						}
					} else {
						if (hops < 4) {
							w7 = -1.8877462;
						} else {
							w7 = -0.6116869;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w7 = 4.2532024;
					} else {
						w7 = 4.771409;
					}
				} else {
					if (hops < 4) {
						w7 = 5.264162;
					} else {
						w7 = 6.148396;
					}
				}
			}
		}
	}
	float w8;
	if (size < 38) {
		if (rel_time < 1479) {
			if (rel_time < 1391) {
				if (cons != 3) {
					if (cons != 1) {
						if (rel_time < 1331) {
							w8 = -1.9257568;
						} else {
							w8 = 0.15535384;
						}
					} else {
						if (rel_time < 1272) {
							w8 = 2.2787118;
						} else {
							w8 = -7.98394;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w8 = 1.6576921;
						} else {
							w8 = 3.6855443;
						}
					} else {
						if (hops < 4) {
							w8 = 0.2359;
						} else {
							w8 = 1.9444867;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (cons != 4) {
						if (hops < 3) {
							w8 = -6.7121596;
						} else {
							w8 = -4.235372;
						}
					} else {
						if (hops < 3) {
							w8 = 0.45314544;
						} else {
							w8 = 4.6030087;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w8 = -1.2749953;
						} else {
							w8 = 1.2504605;
						}
					} else {
						if (hops < 4) {
							w8 = 4.4756174;
						} else {
							w8 = 5.053519;
						}
					}
				}
			}
		} else {
			if (rel_time < 1688) {
				if (cons != 3) {
					if (cons != 1) {
						if (rel_time < 1657) {
							w8 = -0.7393426;
						} else {
							w8 = 2.1327524;
						}
					} else {
						if (rel_time < 1569) {
							w8 = 4.1269693;
						} else {
							w8 = -8.513474;
						}
					}
				} else {
					if (rel_time < 1598) {
						if (hops < 4) {
							w8 = 2.7795477;
						} else {
							w8 = 3.460577;
						}
					} else {
						if (hops < 2) {
							w8 = 4.0958734;
						} else {
							w8 = 3.5906968;
						}
					}
				}
			} else {
				if (rel_time < 1807) {
					if (cons != 2) {
						if (hops < 2) {
							w8 = -3.9146204;
						} else {
							w8 = -1.7153897;
						}
					} else {
						if (rel_time < 1717) {
							w8 = -0.558494;
						} else {
							w8 = 0.28099343;
						}
					}
				} else {
					if (rel_time < 1984) {
						if (cons != 3) {
							w8 = 0.08674919;
						} else {
							w8 = 3.8677938;
						}
					} else {
						if (rel_time < 2014) {
							w8 = -3.487831;
						} else {
							w8 = -0.3422631;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 4054) {
				if (prod != 2) {
					if (rel_time < 3957) {
						if (rel_time < 3641) {
							w8 = -0.3376492;
						} else {
							w8 = -1.9003936;
						}
					} else {
						w8 = 4.4412484;
					}
				} else {
					if (rel_time < 3737) {
						w8 = -1.1710672;
					} else {
						w8 = -5.480422;
					}
				}
			} else {
				if (rel_time < 4704) {
					if (rel_time < 4655) {
						if (prod != 3) {
							w8 = 1.1420574;
						} else {
							w8 = -2.7175415;
						}
					} else {
						if (prod != 3) {
							w8 = -5.845368;
						} else {
							w8 = 10.117615;
						}
					}
				} else {
					if (rel_time < 4707) {
						w8 = -5.816614;
					} else {
						if (rel_time < 4812) {
							w8 = 4.907794;
						} else {
							w8 = -0.038389865;
						}
					}
				}
			}
		} else {
			if (rel_time < 3641) {
				if (prod != 1) {
					if (rel_time < 1182) {
						if (hops < 4) {
							w8 = 0.369097;
						} else {
							w8 = 1.5296435;
						}
					} else {
						if (hops < 3) {
							w8 = 1.77542;
						} else {
							w8 = 3.9756494;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w8 = -6.6791763;
						} else {
							w8 = -5.768584;
						}
					} else {
						w8 = -10.16206;
					}
				}
			} else {
				if (rel_time < 3785) {
					if (prod != 2) {
						if (prod != 4) {
							w8 = -2.9336615;
						} else {
							w8 = 0.011730228;
						}
					} else {
						if (hops < 3) {
							w8 = -0.8089128;
						} else {
							w8 = 0.35153115;
						}
					}
				} else {
					if (rel_time < 4257) {
						if (prod != 4) {
							w8 = 3.1226385;
						} else {
							w8 = -3.7958095;
						}
					} else {
						if (rel_time < 4305) {
							w8 = -8.437552;
						} else {
							w8 = 0.29935727;
						}
					}
				}
			}
		}
	}
	float w9;
	if (cons != 0) {
		if (hops < 4) {
			if (rel_time < 10379) {
				if (rel_time < 10240) {
					if (rel_time < 9784) {
						if (rel_time < 9767) {
							w9 = 0.012059224;
						} else {
							w9 = -9.873994;
						}
					} else {
						if (prod != 1) {
							w9 = 0.19733639;
						} else {
							w9 = 10.035794;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 0) {
							w9 = -7.8062606;
						} else {
							w9 = 8.215498;
						}
					} else {
						if (hops < 2) {
							w9 = 2.891228;
						} else {
							w9 = 3.1773758;
						}
					}
				}
			} else {
				if (rel_time < 10621) {
					if (prod != 0) {
						if (prod != 3) {
							w9 = 6.835305;
						} else {
							w9 = -7.771345;
						}
					} else {
						if (hops < 2) {
							w9 = -3.3545582;
						} else {
							w9 = -4.0343127;
						}
					}
				} else {
					if (rel_time < 10639) {
						if (hops < 2) {
							w9 = -5.9927063;
						} else {
							w9 = -6.7063036;
						}
					} else {
						if (prod != 1) {
							w9 = 1.521291;
						} else {
							w9 = -5.1638865;
						}
					}
				}
			}
		} else {
			if (rel_time < 2845) {
				if (rel_time < 2695) {
					if (rel_time < 2548) {
						if (rel_time < 2400) {
							w9 = 0.5510658;
						} else {
							w9 = 4.072193;
						}
					} else {
						if (cons != 2) {
							w9 = -6.52893;
						} else {
							w9 = 0.72728324;
						}
					}
				} else {
					if (cons != 1) {
						if (cons != 3) {
							w9 = 1.594043;
						} else {
							w9 = 10.568434;
						}
					} else {
						if (rel_time < 2726) {
							w9 = 13.039522;
						} else {
							w9 = 11.061533;
						}
					}
				}
			} else {
				if (rel_time < 2902) {
					if (rel_time < 2874) {
						w9 = -9.879576;
					} else {
						w9 = -7.014822;
					}
				} else {
					if (rel_time < 3109) {
						if (cons != 1) {
							w9 = 1.0131644;
						} else {
							w9 = 6.0775347;
						}
					} else {
						if (rel_time < 3259) {
							w9 = -2.0914395;
						} else {
							w9 = 0.3485275;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1984) {
			if (rel_time < 1955) {
				if (rel_time < 1688) {
					if (rel_time < 1539) {
						if (rel_time < 473) {
							w9 = 0.6350533;
						} else {
							w9 = -0.66871023;
						}
					} else {
						if (hops < 3) {
							w9 = 0.6520998;
						} else {
							w9 = 1.7422452;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1807) {
							w9 = -2.5054314;
						} else {
							w9 = -4.0186615;
						}
					} else {
						if (rel_time < 1836) {
							w9 = -1.8664715;
						} else {
							w9 = -0.489704;
						}
					}
				}
			} else {
				if (hops < 2) {
					w9 = 2.316489;
				} else {
					if (hops < 3) {
						w9 = 4.58696;
					} else {
						w9 = 4.9698887;
					}
				}
			}
		} else {
			if (rel_time < 3022) {
				if (rel_time < 2133) {
					if (rel_time < 2103) {
						if (hops < 2) {
							w9 = -0.7366646;
						} else {
							w9 = -1.062275;
						}
					} else {
						if (hops < 4) {
							w9 = -4.129664;
						} else {
							w9 = -1.0668832;
						}
					}
				} else {
					if (rel_time < 2280) {
						if (hops < 3) {
							w9 = -0.13328929;
						} else {
							w9 = 0.8213907;
						}
					} else {
						if (rel_time < 2429) {
							w9 = -3.9556532;
						} else {
							w9 = -1.1081364;
						}
					}
				}
			} else {
				if (rel_time < 3171) {
					if (hops < 3) {
						if (rel_time < 3141) {
							w9 = 1.727179;
						} else {
							w9 = 2.0420845;
						}
					} else {
						if (hops < 4) {
							w9 = 0.5157402;
						} else {
							w9 = 1.5468036;
						}
					}
				} else {
					if (rel_time < 3318) {
						if (hops < 3) {
							w9 = 0.041332748;
						} else {
							w9 = -1.1135641;
						}
					} else {
						if (hops < 3) {
							w9 = -7.827069e-05;
						} else {
							w9 = 1.0604887;
						}
					}
				}
			}
		}
	}
	float w10;
	if (rel_time < 10961) {
		if (rel_time < 10639) {
			if (rel_time < 10621) {
				if (rel_time < 10426) {
					if (rel_time < 10119) {
						if (rel_time < 10073) {
							w10 = -0.012097174;
						} else {
							w10 = 6.4594054;
						}
					} else {
						if (prod != 0) {
							w10 = -2.259302;
						} else {
							w10 = 3.4632895;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 0) {
							w10 = 4.216037;
						} else {
							w10 = -1.8209171;
						}
					} else {
						w10 = -13.014514;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w10 = -2.9996488;
					} else {
						if (hops < 3) {
							w10 = -3.2658064;
						} else {
							w10 = -3.447697;
						}
					}
				} else {
					w10 = -6.559415;
				}
			}
		} else {
			if (prod != 4) {
				if (prod != 1) {
					if (rel_time < 10919) {
						if (prod != 2) {
							w10 = 4.876187;
						} else {
							w10 = 2.53683;
						}
					} else {
						if (prod != 2) {
							w10 = -10.669887;
						} else {
							w10 = 5.4046903;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w10 = -2.3735154;
						} else {
							w10 = -3.0341535;
						}
					} else {
						w10 = -8.950923;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w10 = -3.3841598;
					} else {
						if (hops < 3) {
							w10 = -3.9299889;
						} else {
							w10 = -4.1294804;
						}
					}
				} else {
					w10 = -2.9953895;
				}
			}
		}
	} else {
		if (prod != 3) {
			if (rel_time < 11003) {
				if (hops < 3) {
					if (hops < 2) {
						w10 = 2.8601122;
					} else {
						w10 = 2.4732795;
					}
				} else {
					w10 = 5.024325;
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w10 = 0.21233496;
						} else {
							w10 = 0.12394527;
						}
					} else {
						w10 = 0.27213165;
					}
				} else {
					w10 = 1.154461;
				}
			}
		} else {
			if (hops < 3) {
				w10 = -5.3046103;
			} else {
				if (hops < 4) {
					w10 = -2.9610133;
				} else {
					w10 = -2.4677346;
				}
			}
		}
	}
	float w11;
	if (rel_time < 5159) {
		if (rel_time < 4812) {
			if (rel_time < 4655) {
				if (rel_time < 4607) {
					if (rel_time < 4559) {
						if (prod != 3) {
							w11 = -0.038163844;
						} else {
							w11 = -1.7539047;
						}
					} else {
						if (prod != 1) {
							w11 = -6.159717;
						} else {
							w11 = 9.893273;
						}
					}
				} else {
					if (prod != 2) {
						if (hops < 2) {
							w11 = 11.488625;
						} else {
							w11 = 9.951179;
						}
					} else {
						if (hops < 2) {
							w11 = -6.2655883;
						} else {
							w11 = -6.001265;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (hops < 2) {
						if (rel_time < 4704) {
							w11 = 5.0638814;
						} else {
							w11 = 3.3540344;
						}
					} else {
						if (rel_time < 4704) {
							w11 = 9.958843;
						} else {
							w11 = 6.1853595;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 4707) {
							w11 = -2.9184089;
						} else {
							w11 = -8.148902;
						}
					} else {
						w11 = -6.0220966;
					}
				}
			}
		} else {
			if (prod != 2) {
				if (prod != 4) {
					if (prod != 0) {
						if (rel_time < 5006) {
							w11 = -9.869928;
						} else {
							w11 = 10.059108;
						}
					} else {
						if (rel_time < 4861) {
							w11 = 6.154182;
						} else {
							w11 = -5.974236;
						}
					}
				} else {
					if (hops < 3) {
						w11 = 5.983408;
					} else {
						w11 = 6.3096538;
					}
				}
			} else {
				if (hops < 3) {
					w11 = 5.966202;
				} else {
					w11 = 6.3690953;
				}
			}
		}
	} else {
		if (rel_time < 5163) {
			w11 = 10.033882;
		} else {
			if (rel_time < 5212) {
				if (prod != 1) {
					w11 = -5.955954;
				} else {
					w11 = 9.987583;
				}
			} else {
				if (rel_time < 5259) {
					if (prod != 2) {
						w11 = 10.019065;
					} else {
						w11 = -5.9520874;
					}
				} else {
					if (rel_time < 5563) {
						if (prod != 1) {
							w11 = 0.45311996;
						} else {
							w11 = -9.878665;
						}
					} else {
						if (rel_time < 5907) {
							w11 = 2.439175;
						} else {
							w11 = 0.0039966716;
						}
					}
				}
			}
		}
	}
	float w12;
	if (rel_time < 6808) {
		if (rel_time < 6761) {
			if (rel_time < 6714) {
				if (rel_time < 6667) {
					if (rel_time < 6363) {
						if (rel_time < 6019) {
							w12 = 0.002312996;
						} else {
							w12 = -2.180412;
						}
					} else {
						if (prod != 3) {
							w12 = -0.35615543;
						} else {
							w12 = 10.041331;
						}
					}
				} else {
					if (prod != 1) {
						w12 = 6.0951023;
					} else {
						w12 = -9.829402;
					}
				}
			} else {
				if (prod != 2) {
					w12 = -9.897453;
				} else {
					if (hops < 2) {
						w12 = 5.903218;
					} else {
						w12 = 6.2400727;
					}
				}
			}
		} else {
			if (prod != 3) {
				w12 = 5.9124117;
			} else {
				w12 = -9.866262;
			}
		}
	} else {
		if (rel_time < 6818) {
			if (hops < 3) {
				w12 = 6.0091558;
			} else {
				w12 = 6.3171506;
			}
		} else {
			if (rel_time < 6922) {
				if (prod != 0) {
					w12 = 6.1461854;
				} else {
					if (hops < 2) {
						w12 = -5.760813;
					} else {
						w12 = -5.997562;
					}
				}
			} else {
				if (rel_time < 7112) {
					if (prod != 2) {
						if (prod != 4) {
							w12 = 8.558341;
						} else {
							w12 = -5.9406033;
						}
					} else {
						if (hops < 2) {
							w12 = -5.792456;
						} else {
							w12 = -6.001303;
						}
					}
				} else {
					if (rel_time < 7274) {
						if (prod != 0) {
							w12 = -8.199728;
						} else {
							w12 = 6.103498;
						}
					} else {
						if (rel_time < 7321) {
							w12 = 4.79615;
						} else {
							w12 = 0.039593544;
						}
					}
				}
			}
		}
	}
	float w13;
	if (rel_time < 8130) {
		if (rel_time < 8117) {
			if (rel_time < 8013) {
				if (rel_time < 7967) {
					if (rel_time < 7673) {
						if (rel_time < 7662) {
							w13 = -0.029845769;
						} else {
							w13 = 10.01977;
						}
					} else {
						if (prod != 1) {
							w13 = 1.060306;
						} else {
							w13 = -9.900201;
						}
					}
				} else {
					if (prod != 3) {
						w13 = 6.0004015;
					} else {
						w13 = -9.84798;
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w13 = 5.8865776;
					} else {
						w13 = 6.2272787;
					}
				} else {
					w13 = -5.7491846;
				}
			}
		} else {
			if (hops < 2) {
				w13 = -5.7601404;
			} else {
				w13 = -6.05163;
			}
		}
	} else {
		if (rel_time < 8176) {
			if (prod != 0) {
				w13 = 10.006849;
			} else {
				w13 = -5.9121814;
			}
		} else {
			if (prod != 3) {
				if (rel_time < 8515) {
					if (prod != 0) {
						if (rel_time < 8223) {
							w13 = -2.1412604;
						} else {
							w13 = -7.4781337;
						}
					} else {
						if (hops < 3) {
							w13 = 5.9326534;
						} else {
							w13 = 6.338277;
						}
					}
				} else {
					if (rel_time < 8622) {
						if (hops < 2) {
							w13 = 5.822218;
						} else {
							w13 = 6.2385483;
						}
					} else {
						if (rel_time < 10286) {
							w13 = -0.46008322;
						} else {
							w13 = 0.60425466;
						}
					}
				}
			} else {
				if (rel_time < 8318) {
					w13 = 10.003181;
				} else {
					if (rel_time < 8622) {
						if (hops < 2) {
							w13 = -10.152942;
						} else {
							w13 = -9.7695;
						}
					} else {
						if (rel_time < 8914) {
							w13 = 10.026737;
						} else {
							w13 = -0.19546525;
						}
					}
				}
			}
		}
	}
	float w14;
	if (prod != 1) {
		if (rel_time < 9431) {
			if (rel_time < 9322) {
				if (rel_time < 8928) {
					if (rel_time < 8914) {
						if (rel_time < 8867) {
							w14 = -0.11035438;
						} else {
							w14 = 3.8125112;
						}
					} else {
						w14 = -5.7486463;
					}
				} else {
					if (prod != 3) {
						if (rel_time < 9219) {
							w14 = 6.041774;
						} else {
							w14 = 4.242616;
						}
					} else {
						w14 = -9.788755;
					}
				}
			} else {
				if (hops < 2) {
					w14 = -5.548129;
				} else {
					w14 = -5.814883;
				}
			}
		} else {
			if (rel_time < 9767) {
				if (prod != 4) {
					if (prod != 3) {
						if (rel_time < 9477) {
							w14 = -5.7516594;
						} else {
							w14 = 6.335612;
						}
					} else {
						if (rel_time < 9524) {
							w14 = 10.105121;
						} else {
							w14 = -9.814715;
						}
					}
				} else {
					if (hops < 2) {
						w14 = -5.5853233;
					} else {
						w14 = -5.8208447;
					}
				}
			} else {
				if (rel_time < 9784) {
					if (hops < 4) {
						if (hops < 3) {
							w14 = -4.9749684;
						} else {
							w14 = -4.61816;
						}
					} else {
						w14 = -9.620651;
					}
				} else {
					if (rel_time < 9830) {
						if (prod != 3) {
							w14 = 6.270431;
						} else {
							w14 = -9.727902;
						}
					} else {
						if (rel_time < 10027) {
							w14 = -4.7279053;
						} else {
							w14 = 0.16311474;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9431) {
			if (rel_time < 9125) {
				if (rel_time < 8821) {
					if (rel_time < 8515) {
						if (rel_time < 8223) {
							w14 = 0.89417696;
						} else {
							w14 = -6.14854;
						}
					} else {
						w14 = 10.242627;
					}
				} else {
					if (hops < 2) {
						w14 = -9.9216795;
					} else {
						w14 = -9.561898;
					}
				}
			} else {
				w14 = 10.224526;
			}
		} else {
			if (rel_time < 9720) {
				if (hops < 2) {
					w14 = -9.997281;
				} else {
					w14 = -9.520958;
				}
			} else {
				if (rel_time < 10027) {
					if (hops < 4) {
						w14 = 5.2335234;
					} else {
						w14 = 10.116463;
					}
				} else {
					if (rel_time < 10332) {
						if (hops < 4) {
							w14 = -2.645565;
						} else {
							w14 = -6.481965;
						}
					} else {
						if (rel_time < 10574) {
							w14 = 6.4817424;
						} else {
							w14 = -0.9832934;
						}
					}
				}
			}
		}
	}
	float w15;
	if (rel_time < 321) {
		if (rel_time < 247) {
			if (cons != 1) {
				if (hops < 4) {
					if (rel_time < 69) {
						if (hops < 2) {
							w15 = 0.3810819;
						} else {
							w15 = 0.094997756;
						}
					} else {
						if (hops < 2) {
							w15 = 0.54154843;
						} else {
							w15 = 0.35807204;
						}
					}
				} else {
					if (rel_time < 185) {
						w15 = -0.41225725;
					} else {
						w15 = -0.16330476;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w15 = 0.62640774;
					} else {
						w15 = 0.88760126;
					}
				} else {
					if (hops < 4) {
						w15 = 1.3028488;
					} else {
						w15 = 1.1381173;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (cons != 3) {
						w15 = 1.5781718;
					} else {
						if (hops < 2) {
							w15 = 1.1279672;
						} else {
							w15 = 1.0640811;
						}
					}
				} else {
					w15 = 1.4201502;
				}
			} else {
				if (cons != 3) {
					w15 = 1.3251666;
				} else {
					w15 = 0.49488118;
				}
			}
		}
	} else {
		if (rel_time < 10961) {
			if (hops < 2) {
				if (cons != 0) {
					if (rel_time < 542) {
						if (rel_time < 473) {
							w15 = 0.15873802;
						} else {
							w15 = -4.634401;
						}
					} else {
						if (rel_time < 837) {
							w15 = 1.4845186;
						} else {
							w15 = -0.09507204;
						}
					}
				} else {
					if (rel_time < 789) {
						if (rel_time < 473) {
							w15 = 0.16917537;
						} else {
							w15 = -5.954317;
						}
					} else {
						if (rel_time < 1037) {
							w15 = 2.5598617;
						} else {
							w15 = -0.7408596;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 10835) {
						if (rel_time < 5557) {
							w15 = 0.13791814;
						} else {
							w15 = -0.2239695;
						}
					} else {
						if (prod != 3) {
							w15 = 2.4899163;
						} else {
							w15 = -5.429432;
						}
					}
				} else {
					if (rel_time < 9431) {
						if (rel_time < 9125) {
							w15 = 0.34230173;
						} else {
							w15 = 5.0434623;
						}
					} else {
						if (rel_time < 9720) {
							w15 = -4.762149;
						} else {
							w15 = 0.14049573;
						}
					}
				}
			}
		} else {
			if (prod != 3) {
				if (rel_time < 11003) {
					if (hops < 3) {
						if (hops < 2) {
							w15 = 1.0331392;
						} else {
							w15 = 0.8429188;
						}
					} else {
						w15 = 2.1778536;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w15 = -0.32375902;
						} else {
							w15 = -0.26892522;
						}
					} else {
						w15 = 0.17431031;
					}
				}
			} else {
				if (hops < 3) {
					w15 = -2.6593618;
				} else {
					if (hops < 4) {
						w15 = -1.4875447;
					} else {
						w15 = -1.2426288;
					}
				}
			}
		}
	}
	float w16;
	if (rel_time < 9369) {
		if (prod != 3) {
			if (rel_time < 6067) {
				if (rel_time < 6019) {
					if (rel_time < 6012) {
						if (rel_time < 5812) {
							w16 = 0.020431912;
						} else {
							w16 = -6.1913958;
						}
					} else {
						if (hops < 2) {
							w16 = 5.944557;
						} else {
							w16 = 6.395879;
						}
					}
				} else {
					if (prod != 0) {
						w16 = -9.341588;
					} else {
						w16 = 7.453523;
					}
				}
			} else {
				if (rel_time < 6410) {
					if (prod != 0) {
						if (rel_time < 6114) {
							w16 = 3.4513314;
						} else {
							w16 = 8.279035;
						}
					} else {
						w16 = -4.74734;
					}
				} else {
					if (rel_time < 6513) {
						w16 = -5.616112;
					} else {
						if (rel_time < 7615) {
							w16 = 0.6295757;
						} else {
							w16 = -0.1912112;
						}
					}
				}
			}
		} else {
			if (rel_time < 4103) {
				if (rel_time < 3785) {
					if (hops < 2) {
						w16 = -1.3989352;
					} else {
						if (hops < 3) {
							w16 = -0.6583133;
						} else {
							w16 = -0.08307223;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 4054) {
							w16 = 4.5140676;
						} else {
							w16 = 6.2018175;
						}
					} else {
						w16 = 8.154636;
					}
				}
			} else {
				if (rel_time < 4405) {
					if (hops < 2) {
						w16 = -7.6284294;
					} else {
						w16 = -9.006252;
					}
				} else {
					if (rel_time < 5308) {
						if (rel_time < 5006) {
							w16 = -0.23800062;
						} else {
							w16 = 7.3352995;
						}
					} else {
						if (rel_time < 5610) {
							w16 = -10.00436;
						} else {
							w16 = -0.38828418;
						}
					}
				}
			}
		}
	} else {
		if (prod != 3) {
			if (rel_time < 9384) {
				if (hops < 2) {
					w16 = 5.3626394;
				} else {
					w16 = 2.518945;
				}
			} else {
				if (rel_time < 9524) {
					if (prod != 1) {
						if (hops < 3) {
							w16 = -2.755558;
						} else {
							w16 = -2.850315;
						}
					} else {
						if (hops < 2) {
							w16 = 5.0810504;
						} else {
							w16 = 2.5066504;
						}
					}
				} else {
					if (rel_time < 9830) {
						if (prod != 1) {
							w16 = 2.5038044;
						} else {
							w16 = -3.1252677;
						}
					} else {
						if (rel_time < 10223) {
							w16 = -2.1797893;
						} else {
							w16 = 0.23124202;
						}
					}
				}
			}
		} else {
			if (rel_time < 10119) {
				if (rel_time < 9830) {
					if (rel_time < 9524) {
						w16 = 5.147575;
					} else {
						if (hops < 4) {
							w16 = -2.6406846;
						} else {
							w16 = -4.6786275;
						}
					}
				} else {
					if (rel_time < 10073) {
						w16 = 10.042158;
					} else {
						w16 = 6.8123627;
					}
				}
			} else {
				if (rel_time < 10426) {
					if (hops < 4) {
						if (hops < 3) {
							w16 = -2.7827487;
						} else {
							w16 = -2.468125;
						}
					} else {
						w16 = -6.302695;
					}
				} else {
					if (rel_time < 10730) {
						if (rel_time < 10685) {
							w16 = 2.193485;
						} else {
							w16 = 6.213136;
						}
					} else {
						if (rel_time < 10961) {
							w16 = -3.8546753;
						} else {
							w16 = -1.0581971;
						}
					}
				}
			}
		}
	}
	float w17;
	if (rel_time < 10529) {
		if (rel_time < 10379) {
			if (rel_time < 4305) {
				if (rel_time < 4257) {
					if (prod != 2) {
						if (rel_time < 3957) {
							w17 = -0.041849148;
						} else {
							w17 = 1.8353264;
						}
					} else {
						if (rel_time < 3737) {
							w17 = -0.2115382;
						} else {
							w17 = -5.7550755;
						}
					}
				} else {
					if (prod != 1) {
						w17 = 11.319793;
					} else {
						if (hops < 3) {
							w17 = -4.940718;
						} else {
							w17 = -6.0314136;
						}
					}
				}
			} else {
				if (rel_time < 4308) {
					if (hops < 2) {
						w17 = 5.7201314;
					} else {
						w17 = 6.137934;
					}
				} else {
					if (rel_time < 4356) {
						if (prod != 2) {
							w17 = -4.2273555;
						} else {
							w17 = 6.084116;
						}
					} else {
						if (rel_time < 4704) {
							w17 = 0.9968778;
						} else {
							w17 = -0.0033496155;
						}
					}
				}
			}
		} else {
			if (prod != 4) {
				if (hops < 4) {
					w17 = -1.356781;
				} else {
					w17 = -3.1468947;
				}
			} else {
				if (rel_time < 10426) {
					if (hops < 4) {
						if (hops < 2) {
							w17 = 5.202387;
						} else {
							w17 = 5.6461477;
						}
					} else {
						w17 = 8.901621;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w17 = 2.1545818;
						} else {
							w17 = 2.5147767;
						}
					} else {
						w17 = 5.7802377;
					}
				}
			}
		}
	} else {
		if (prod != 4) {
			if (rel_time < 10639) {
				if (prod != 1) {
					if (rel_time < 10574) {
						if (hops < 4) {
							w17 = -1.463933;
						} else {
							w17 = -0.44704983;
						}
					} else {
						if (rel_time < 10621) {
							w17 = -6.9677086;
						} else {
							w17 = -2.199135;
						}
					}
				} else {
					if (rel_time < 10574) {
						if (hops < 2) {
							w17 = 3.4843812;
						} else {
							w17 = 2.7320704;
						}
					} else {
						if (hops < 4) {
							w17 = 0.6571996;
						} else {
							w17 = -1.0080422;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 10961) {
						if (rel_time < 10685) {
							w17 = 0.16172504;
						} else {
							w17 = 1.3075545;
						}
					} else {
						if (hops < 3) {
							w17 = -0.80160624;
						} else {
							w17 = -0.1827644;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w17 = -1.1504647;
						} else {
							w17 = -1.5365249;
						}
					} else {
						if (rel_time < 10878) {
							w17 = -5.8216944;
						} else {
							w17 = -4.4294305;
						}
					}
				}
			}
		} else {
			if (rel_time < 10835) {
				if (hops < 4) {
					if (hops < 2) {
						w17 = -2.1666858;
					} else {
						if (hops < 3) {
							w17 = -2.3752513;
						} else {
							w17 = -2.4752507;
						}
					}
				} else {
					w17 = -1.9096171;
				}
			} else {
				if (rel_time < 11003) {
					if (hops < 3) {
						if (hops < 2) {
							w17 = 0.4038776;
						} else {
							w17 = 0.30967626;
						}
					} else {
						w17 = 1.0026736;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w17 = -0.27754667;
						} else {
							w17 = -0.2501125;
						}
					} else {
						w17 = -0.027953627;
					}
				}
			}
		}
	}
	float w18;
	if (hops < 4) {
		if (rel_time < 2962) {
			if (rel_time < 2874) {
				if (rel_time < 2726) {
					if (rel_time < 2578) {
						if (rel_time < 2429) {
							w18 = -0.11654845;
						} else {
							w18 = 1.9219841;
						}
					} else {
						if (cons != 2) {
							w18 = -3.3595405;
						} else {
							w18 = 3.2227912;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 2755) {
							w18 = 5.3643565;
						} else {
							w18 = -1.1064048;
						}
					} else {
						if (hops < 3) {
							w18 = 4.6895967;
						} else {
							w18 = 9.652702;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 2902) {
						w18 = -7.9691443;
					} else {
						if (cons != 3) {
							w18 = 1.5471933;
						} else {
							w18 = -4.71603;
						}
					}
				} else {
					if (hops < 2) {
						w18 = 0.8189217;
					} else {
						if (hops < 3) {
							w18 = 1.209361;
						} else {
							w18 = 1.0274184;
						}
					}
				}
			}
		} else {
			if (rel_time < 3109) {
				if (cons != 1) {
					if (cons != 3) {
						if (cons != 4) {
							w18 = -0.9080593;
						} else {
							w18 = 1.5252287;
						}
					} else {
						if (hops < 2) {
							w18 = 2.6019757;
						} else {
							w18 = 2.9105628;
						}
					}
				} else {
					if (rel_time < 3022) {
						w18 = 9.829343;
					} else {
						if (hops < 2) {
							w18 = 3.9799519;
						} else {
							w18 = 4.2889943;
						}
					}
				}
			} else {
				if (rel_time < 3290) {
					if (cons != 0) {
						if (cons != 1) {
							w18 = -1.0965389;
						} else {
							w18 = -3.187591;
						}
					} else {
						if (hops < 3) {
							w18 = 1.1840861;
						} else {
							w18 = 0.23316967;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 6019) {
							w18 = 0.13469076;
						} else {
							w18 = -0.06939995;
						}
					} else {
						if (rel_time < 3510) {
							w18 = 3.776745;
						} else {
							w18 = -1.3200469;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2251) {
			if (rel_time < 2103) {
				if (rel_time < 1924) {
					if (rel_time < 686) {
						if (cons != 3) {
							w18 = 0.28098568;
						} else {
							w18 = -0.34554172;
						}
					} else {
						if (rel_time < 837) {
							w18 = 2.155015;
						} else {
							w18 = 0.4374801;
						}
					}
				} else {
					if (cons != 1) {
						if (cons != 3) {
							w18 = 1.3786446;
						} else {
							w18 = -3.3120477;
						}
					} else {
						if (rel_time < 1984) {
							w18 = -11.060294;
						} else {
							w18 = -3.0071433;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (cons != 3) {
						if (rel_time < 2133) {
							w18 = -0.49911764;
						} else {
							w18 = 0.59700096;
						}
					} else {
						w18 = 3.1347904;
					}
				} else {
					if (rel_time < 2133) {
						w18 = 16.999842;
					} else {
						w18 = 5.327255;
					}
				}
			}
		} else {
			if (rel_time < 2429) {
				if (rel_time < 2280) {
					w18 = 0.28595626;
				} else {
					if (cons != 3) {
						if (rel_time < 2310) {
							w18 = -2.760756;
						} else {
							w18 = -1.1062415;
						}
					} else {
						w18 = -3.038037;
					}
				}
			} else {
				if (rel_time < 2459) {
					if (cons != 1) {
						w18 = -1.8971885;
					} else {
						w18 = 7.0520287;
					}
				} else {
					if (rel_time < 2726) {
						if (rel_time < 2578) {
							w18 = 1.0260617;
						} else {
							w18 = -2.230387;
						}
					} else {
						if (rel_time < 2814) {
							w18 = 3.5485423;
						} else {
							w18 = 0.10671413;
						}
					}
				}
			}
		}
	}
	float w19;
	if (rel_time < 7568) {
		if (rel_time < 7264) {
			if (rel_time < 6922) {
				if (rel_time < 6818) {
					if (rel_time < 6808) {
						if (rel_time < 6761) {
							w19 = -0.0046509765;
						} else {
							w19 = -4.349796;
						}
					} else {
						if (hops < 2) {
							w19 = 2.731279;
						} else {
							w19 = 3.0267658;
						}
					}
				} else {
					if (prod != 0) {
						w19 = 2.9832652;
					} else {
						if (hops < 3) {
							w19 = -3.0461118;
						} else {
							w19 = -3.1683521;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (prod != 1) {
						if (rel_time < 7112) {
							w19 = -4.078482;
						} else {
							w19 = 0.8971948;
						}
					} else {
						if (rel_time < 7017) {
							w19 = 4.912901;
						} else {
							w19 = -6.5172725;
						}
					}
				} else {
					w19 = 6.137174;
				}
			}
		} else {
			if (prod != 4) {
				if (prod != 2) {
					if (rel_time < 7521) {
						if (prod != 3) {
							w19 = -6.8077717;
						} else {
							w19 = -9.501612;
						}
					} else {
						if (prod != 0) {
							w19 = 9.230382;
						} else {
							w19 = -6.1727157;
						}
					}
				} else {
					if (rel_time < 7321) {
						if (hops < 2) {
							w19 = 3.2966843;
						} else {
							w19 = 3.7212157;
						}
					} else {
						w19 = 6.081503;
					}
				}
			} else {
				if (hops < 2) {
					w19 = 5.665883;
				} else {
					w19 = 6.121221;
				}
			}
		}
	} else {
		if (rel_time < 7615) {
			if (prod != 1) {
				w19 = -6.058995;
			} else {
				w19 = 9.155397;
			}
		} else {
			if (rel_time < 7662) {
				if (prod != 2) {
					w19 = 10.393809;
				} else {
					w19 = -5.698099;
				}
			} else {
				if (rel_time < 7673) {
					w19 = 5.383153;
				} else {
					if (rel_time < 7720) {
						if (prod != 3) {
							w19 = -6.233631;
						} else {
							w19 = 9.856673;
						}
					} else {
						if (rel_time < 7824) {
							w19 = 2.9400554;
						} else {
							w19 = 0.06288457;
						}
					}
				}
			}
		}
	}
	float w20;
	if (rel_time < 2280) {
		if (rel_time < 2072) {
			if (rel_time < 2043) {
				if (cons != 1) {
					if (rel_time < 1955) {
						if (rel_time < 1688) {
							w20 = 0.19601299;
						} else {
							w20 = -0.60276103;
						}
					} else {
						if (cons != 3) {
							w20 = 2.3258069;
						} else {
							w20 = -3.8892336;
						}
					}
				} else {
					if (rel_time < 1864) {
						if (rel_time < 1717) {
							w20 = -0.37031;
						} else {
							w20 = 4.571049;
						}
					} else {
						if (rel_time < 1984) {
							w20 = -11.263893;
						} else {
							w20 = -2.9243693;
						}
					}
				}
			} else {
				if (rel_time < 2071) {
					if (hops < 4) {
						w20 = -3.8045325;
					} else {
						w20 = -1.596753;
					}
				} else {
					if (hops < 2) {
						w20 = 1.5899247;
					} else {
						if (hops < 3) {
							w20 = 0.3849959;
						} else {
							w20 = 0.120189525;
						}
					}
				}
			}
		} else {
			if (cons != 1) {
				if (cons != 3) {
					if (cons != 4) {
						if (rel_time < 2133) {
							w20 = -1.4428685;
						} else {
							w20 = -0.04697161;
						}
					} else {
						if (hops < 2) {
							w20 = 1.170935;
						} else {
							w20 = 0.16334099;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w20 = 3.1818712;
						} else {
							w20 = 2.9161344;
						}
					} else {
						if (rel_time < 2191) {
							w20 = 1.2572416;
						} else {
							w20 = 1.6333848;
						}
					}
				}
			} else {
				if (rel_time < 2133) {
					if (hops < 4) {
						w20 = 14.490567;
					} else {
						w20 = 8.629083;
					}
				} else {
					if (hops < 2) {
						w20 = 3.3714623;
					} else {
						if (hops < 4) {
							w20 = 4.8386307;
						} else {
							w20 = 2.6742296;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2400) {
			if (cons != 2) {
				if (cons != 4) {
					if (hops < 4) {
						if (rel_time < 2369) {
							w20 = -3.4192698;
						} else {
							w20 = -1.507991;
						}
					} else {
						if (rel_time < 2310) {
							w20 = -1.6590016;
						} else {
							w20 = -1.5206773;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2369) {
							w20 = 1.6001906;
						} else {
							w20 = 0.87214404;
						}
					} else {
						if (rel_time < 2369) {
							w20 = 1.3805728;
						} else {
							w20 = -2.6894555;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 2310) {
							w20 = -1.0703115;
						} else {
							w20 = -0.7676017;
						}
					} else {
						if (rel_time < 2310) {
							w20 = -1.3481292;
						} else {
							w20 = -1.0557239;
						}
					}
				} else {
					if (rel_time < 2310) {
						w20 = 0.24458519;
					} else {
						w20 = -0.30538324;
					}
				}
			}
		} else {
			if (rel_time < 2517) {
				if (cons != 1) {
					if (cons != 3) {
						if (hops < 2) {
							w20 = -1.0960203;
						} else {
							w20 = -2.0553913;
						}
					} else {
						if (hops < 2) {
							w20 = -0.13983148;
						} else {
							w20 = 4.719984;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2429) {
							w20 = 0.64885944;
						} else {
							w20 = 2.3497832;
						}
					} else {
						if (hops < 4) {
							w20 = 7.027568;
						} else {
							w20 = 3.750657;
						}
					}
				}
			} else {
				if (rel_time < 2666) {
					if (cons != 1) {
						if (cons != 3) {
							w20 = 0.860522;
						} else {
							w20 = -4.5500164;
						}
					} else {
						if (rel_time < 2578) {
							w20 = -10.278154;
						} else {
							w20 = -4.5286565;
						}
					}
				} else {
					if (rel_time < 2845) {
						if (cons != 1) {
							w20 = 0.05681053;
						} else {
							w20 = 5.699392;
						}
					} else {
						if (rel_time < 2902) {
							w20 = -2.090993;
						} else {
							w20 = 0.0095772175;
						}
					}
				}
			}
		}
	}
	float w21;
	if (rel_time < 933) {
		if (rel_time < 886) {
			if (cons != 1) {
				if (size < 125) {
					if (cons != 3) {
						if (hops < 3) {
							w21 = -2.6558106;
						} else {
							w21 = -0.53970957;
						}
					} else {
						if (hops < 3) {
							w21 = 2.7847462;
						} else {
							w21 = 1.9646875;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 402) {
							w21 = 0.026629414;
						} else {
							w21 = 1.0442301;
						}
					} else {
						if (rel_time < 321) {
							w21 = 0.5474252;
						} else {
							w21 = -1.294803;
						}
					}
				}
			} else {
				if (rel_time < 542) {
					if (rel_time < 185) {
						if (hops < 3) {
							w21 = 0.64030963;
						} else {
							w21 = 0.8384594;
						}
					} else {
						if (rel_time < 473) {
							w21 = -0.82688063;
						} else {
							w21 = -1.9328448;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 789) {
							w21 = 0.14189519;
						} else {
							w21 = 2.0553555;
						}
					} else {
						if (rel_time < 789) {
							w21 = 6.6832685;
						} else {
							w21 = 3.4496858;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w21 = 2.4184465;
				} else {
					w21 = 2.9170532;
				}
			} else {
				w21 = 1.8822894;
			}
		}
	} else {
		if (rel_time < 988) {
			if (hops < 3) {
				if (cons != 0) {
					if (hops < 2) {
						w21 = -2.2803957;
					} else {
						w21 = -2.052538;
					}
				} else {
					if (hops < 2) {
						w21 = -1.2343217;
					} else {
						w21 = 0.13078259;
					}
				}
			} else {
				if (cons != 0) {
					if (rel_time < 935) {
						if (hops < 4) {
							w21 = -0.25338998;
						} else {
							w21 = -0.34765112;
						}
					} else {
						if (hops < 4) {
							w21 = -0.47385004;
						} else {
							w21 = -0.30224803;
						}
					}
				} else {
					w21 = 0.12967703;
				}
			}
		} else {
			if (rel_time < 1037) {
				if (cons != 0) {
					if (hops < 3) {
						w21 = -6.547284;
					} else {
						w21 = -5.880127;
					}
				} else {
					if (hops < 2) {
						w21 = 1.9466146;
					} else {
						if (hops < 3) {
							w21 = 3.5524883;
						} else {
							w21 = 2.7903693;
						}
					}
				}
			} else {
				if (rel_time < 1085) {
					if (cons != 1) {
						if (hops < 4) {
							w21 = 2.3459601;
						} else {
							w21 = 1.5601789;
						}
					} else {
						if (hops < 4) {
							w21 = -1.9980855;
						} else {
							w21 = -2.3076203;
						}
					}
				} else {
					if (rel_time < 1134) {
						if (cons != 2) {
							w21 = -2.5251129;
						} else {
							w21 = 2.2941308;
						}
					} else {
						if (rel_time < 1182) {
							w21 = -1.7769777;
						} else {
							w21 = -0.0078023924;
						}
					}
				}
			}
		}
	}
	float w22;
	if (rel_time < 5509) {
		if (rel_time < 5462) {
			if (prod != 4) {
				if (rel_time < 5259) {
					if (rel_time < 4812) {
						if (rel_time < 4655) {
							w22 = -0.03306574;
						} else {
							w22 = 3.3508258;
						}
					} else {
						if (rel_time < 5159) {
							w22 = -2.0524797;
						} else {
							w22 = 0.711652;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 5308) {
							w22 = 6.0963583;
						} else {
							w22 = 5.880069;
						}
					} else {
						w22 = -5.5770326;
					}
				}
			} else {
				if (rel_time < 5111) {
					if (rel_time < 4209) {
						if (rel_time < 3907) {
							w22 = 0.97070765;
						} else {
							w22 = -5.669493;
						}
					} else {
						if (rel_time < 4510) {
							w22 = 5.4108057;
						} else {
							w22 = 0.15525231;
						}
					}
				} else {
					if (hops < 2) {
						w22 = -6.015698;
					} else {
						w22 = -6.3121743;
					}
				}
			}
		} else {
			if (prod != 1) {
				w22 = 5.8114038;
			} else {
				w22 = -5.5403166;
			}
		}
	} else {
		if (rel_time < 5557) {
			if (prod != 2) {
				w22 = -5.0374994;
			} else {
				w22 = 5.887533;
			}
		} else {
			if (rel_time < 5563) {
				if (hops < 3) {
					w22 = -5.117964;
				} else {
					w22 = -4.771044;
				}
			} else {
				if (rel_time < 5907) {
					if (prod != 0) {
						if (prod != 2) {
							w22 = 6.6120567;
						} else {
							w22 = -5.201003;
						}
					} else {
						w22 = -7.05137;
					}
				} else {
					if (rel_time < 6211) {
						if (prod != 3) {
							w22 = 0.27855828;
						} else {
							w22 = -8.3940325;
						}
					} else {
						if (rel_time < 6466) {
							w22 = 1.5672388;
						} else {
							w22 = -0.029127797;
						}
					}
				}
			}
		}
	}
	float w23;
	if (rel_time < 8013) {
		if (rel_time < 7967) {
			if (prod != 4) {
				if (rel_time < 7662) {
					if (rel_time < 7264) {
						if (rel_time < 7065) {
							w23 = 0.014109815;
						} else {
							w23 = 2.6010602;
						}
					} else {
						if (prod != 3) {
							w23 = -0.5424805;
						} else {
							w23 = -4.0130467;
						}
					}
				} else {
					if (prod != 1) {
						if (prod != 3) {
							w23 = 5.415351;
						} else {
							w23 = -0.5940721;
						}
					} else {
						if (hops < 3) {
							w23 = -5.4674883;
						} else {
							w23 = -5.288721;
						}
					}
				}
			} else {
				if (rel_time < 7521) {
					if (rel_time < 7217) {
						if (rel_time < 6316) {
							w23 = -0.18790784;
						} else {
							w23 = -1.4765366;
						}
					} else {
						if (hops < 3) {
							w23 = 2.9194603;
						} else {
							w23 = 3.1563325;
						}
					}
				} else {
					if (rel_time < 7720) {
						if (hops < 2) {
							w23 = -3.0055315;
						} else {
							w23 = -3.1471667;
						}
					} else {
						w23 = -7.7092986;
					}
				}
			}
		} else {
			if (prod != 3) {
				if (hops < 2) {
					w23 = 3.0768065;
				} else {
					w23 = 3.403377;
				}
			} else {
				if (hops < 3) {
					w23 = -4.7148824;
				} else {
					w23 = -4.414606;
				}
			}
		}
	} else {
		if (rel_time < 8469) {
			if (prod != 2) {
				if (prod != 3) {
					if (prod != 1) {
						if (rel_time < 8117) {
							w23 = 3.166336;
						} else {
							w23 = -0.45734975;
						}
					} else {
						if (rel_time < 8223) {
							w23 = 5.7473106;
						} else {
							w23 = -3.1579666;
						}
					}
				} else {
					w23 = 5.356017;
				}
			} else {
				if (rel_time < 8223) {
					w23 = -4.6291227;
				} else {
					if (hops < 3) {
						w23 = -1.9206748;
					} else {
						w23 = -2.0534234;
					}
				}
			}
		} else {
			if (rel_time < 8515) {
				if (prod != 1) {
					w23 = 9.782039;
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = -3.2694314;
						} else {
							w23 = -3.1098492;
						}
					} else {
						if (hops < 4) {
							w23 = -2.8394237;
						} else {
							w23 = -3.0527172;
						}
					}
				}
			} else {
				if (rel_time < 8529) {
					if (hops < 3) {
						if (hops < 2) {
							w23 = 3.1133292;
						} else {
							w23 = 3.2579508;
						}
					} else {
						w23 = 3.4788284;
					}
				} else {
					if (rel_time < 8575) {
						if (prod != 2) {
							w23 = -4.5965834;
						} else {
							w23 = 3.4560723;
						}
					} else {
						if (prod != 0) {
							w23 = 0.11616353;
						} else {
							w23 = -0.46932155;
						}
					}
				}
			}
		}
	}
	float w24;
	if (cons != 4) {
		if (rel_time < 5716) {
			if (rel_time < 5557) {
				if (rel_time < 5509) {
					if (rel_time < 5462) {
						if (prod != 2) {
							w24 = -0.029032705;
						} else {
							w24 = -0.4929904;
						}
					} else {
						if (prod != 1) {
							w24 = 2.9034286;
						} else {
							w24 = -2.7782638;
						}
					}
				} else {
					if (prod != 2) {
						w24 = -2.544555;
					} else {
						if (hops < 3) {
							w24 = 2.8538365;
						} else {
							w24 = 3.0518255;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (rel_time < 5563) {
						if (hops < 2) {
							w24 = -2.6465096;
						} else {
							w24 = -2.4440503;
						}
					} else {
						if (rel_time < 5610) {
							w24 = -9.269428;
						} else {
							w24 = -3.5314288;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w24 = 1.4869007;
						} else {
							w24 = 1.7401341;
						}
					} else {
						w24 = 1.9942502;
					}
				}
			}
		} else {
			if (rel_time < 5907) {
				if (prod != 2) {
					if (prod != 0) {
						if (prod != 4) {
							w24 = 5.3373055;
						} else {
							w24 = -7.240784;
						}
					} else {
						if (hops < 3) {
							w24 = -3.413038;
						} else {
							w24 = -3.619136;
						}
					}
				} else {
					if (rel_time < 5812) {
						w24 = -4.444044;
					} else {
						if (hops < 2) {
							w24 = -1.2745136;
						} else {
							w24 = -1.4213345;
						}
					}
				}
			} else {
				if (rel_time < 6012) {
					if (prod != 0) {
						if (hops < 2) {
							w24 = -2.7076228;
						} else {
							w24 = -2.848208;
						}
					} else {
						w24 = 8.752639;
					}
				} else {
					if (rel_time < 6019) {
						if (hops < 3) {
							w24 = 2.8218598;
						} else {
							w24 = 3.1049726;
						}
					} else {
						if (rel_time < 6067) {
							w24 = -4.047769;
						} else {
							w24 = 0.026571082;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1776) {
			if (rel_time < 1657) {
				if (rel_time < 988) {
					if (rel_time < 740) {
						if (hops < 2) {
							w24 = 1.1322789;
						} else {
							w24 = 0.0704417;
						}
					} else {
						if (hops < 3) {
							w24 = -1.0708488;
						} else {
							w24 = -0.18959089;
						}
					}
				} else {
					if (rel_time < 1182) {
						if (hops < 3) {
							w24 = 3.554897;
						} else {
							w24 = 6.7464075;
						}
					} else {
						if (rel_time < 1213) {
							w24 = 1.3291903;
						} else {
							w24 = 0.41110823;
						}
					}
				}
			} else {
				if (hops < 2) {
					w24 = 4.6357126;
				} else {
					if (hops < 4) {
						w24 = 8.776615;
					} else {
						w24 = 7.135276;
					}
				}
			}
		} else {
			if (rel_time < 3438) {
				if (rel_time < 1924) {
					if (hops < 2) {
						if (rel_time < 1807) {
							w24 = 1.466979;
						} else {
							w24 = -0.8407144;
						}
					} else {
						if (rel_time < 1807) {
							w24 = -2.0515883;
						} else {
							w24 = -3.5229688;
						}
					}
				} else {
					if (rel_time < 3290) {
						if (rel_time < 2548) {
							w24 = -0.29923394;
						} else {
							w24 = 0.34390852;
						}
					} else {
						if (hops < 2) {
							w24 = 0.56473225;
						} else {
							w24 = -1.6845524;
						}
					}
				}
			} else {
				if (hops < 2) {
					w24 = 1.7121929;
				} else {
					if (hops < 3) {
						w24 = 0.8637327;
					} else {
						if (hops < 4) {
							w24 = 1.175655;
						} else {
							w24 = 1.2615442;
						}
					}
				}
			}
		}
	}
	float w25;
	if (rel_time < 10574) {
		if (rel_time < 10286) {
			if (rel_time < 10119) {
				if (rel_time < 9784) {
					if (rel_time < 9767) {
						if (rel_time < 9720) {
							w25 = -0.0096193645;
						} else {
							w25 = 1.5455548;
						}
					} else {
						if (hops < 4) {
							w25 = -1.0700282;
						} else {
							w25 = -2.5206532;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 0) {
							w25 = 2.8119276;
						} else {
							w25 = -2.1140187;
						}
					} else {
						if (rel_time < 10027) {
							w25 = -2.3450563;
						} else {
							w25 = -4.7904053;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 10223) {
						w25 = -3.672099;
					} else {
						if (hops < 4) {
							w25 = -1.4531572;
						} else {
							w25 = -3.3642976;
						}
					}
				} else {
					if (rel_time < 10223) {
						w25 = 5.705235;
					} else {
						if (rel_time < 10240) {
							w25 = 1.6440063;
						} else {
							w25 = 4.0767045;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (prod != 4) {
					if (rel_time < 10426) {
						if (rel_time < 10332) {
							w25 = -2.3841882;
						} else {
							w25 = -1.2290399;
						}
					} else {
						if (prod != 0) {
							w25 = 1.5108274;
						} else {
							w25 = -0.44131723;
						}
					}
				} else {
					if (rel_time < 10426) {
						if (hops < 4) {
							w25 = 2.6835594;
						} else {
							w25 = 4.538022;
						}
					} else {
						if (hops < 4) {
							w25 = 1.0991498;
						} else {
							w25 = 2.7559388;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w25 = 2.0497024;
					} else {
						if (hops < 3) {
							w25 = 2.19623;
						} else {
							w25 = 2.32707;
						}
					}
				} else {
					w25 = 3.9043171;
				}
			}
		}
	} else {
		if (prod != 0) {
			if (prod != 3) {
				if (rel_time < 10878) {
					if (prod != 1) {
						if (rel_time < 10685) {
							w25 = -2.1178164;
						} else {
							w25 = -1.2150306;
						}
					} else {
						if (rel_time < 10621) {
							w25 = 0.16887406;
						} else {
							w25 = -0.671416;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 10919) {
							w25 = -1.0091866;
						} else {
							w25 = -0.15094514;
						}
					} else {
						if (rel_time < 10919) {
							w25 = 2.0876167;
						} else {
							w25 = 0.49850157;
						}
					}
				}
			} else {
				if (rel_time < 10730) {
					if (hops < 4) {
						if (rel_time < 10685) {
							w25 = 0.58019286;
						} else {
							w25 = 2.1269119;
						}
					} else {
						if (rel_time < 10685) {
							w25 = 5.853139;
						} else {
							w25 = 3.1653433;
						}
					}
				} else {
					if (rel_time < 10961) {
						if (hops < 2) {
							w25 = -3.9718242;
						} else {
							w25 = -1.5041904;
						}
					} else {
						if (hops < 3) {
							w25 = -0.45539495;
						} else {
							w25 = -0.17005046;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 10835) {
					if (hops < 2) {
						w25 = 0.7918624;
					} else {
						w25 = 1.0962096;
					}
				} else {
					if (hops < 2) {
						w25 = 2.1032376;
					} else {
						w25 = 0.6953356;
					}
				}
			} else {
				if (rel_time < 10835) {
					if (hops < 4) {
						w25 = 1.191313;
					} else {
						w25 = 2.0045307;
					}
				} else {
					if (hops < 4) {
						w25 = -0.24440145;
					} else {
						w25 = 0.8283866;
					}
				}
			}
		}
	}
	float w26;
	if (rel_time < 8529) {
		if (rel_time < 8130) {
			if (rel_time < 8117) {
				if (rel_time < 8013) {
					if (rel_time < 7920) {
						if (rel_time < 7568) {
							w26 = -0.010151926;
						} else {
							w26 = 0.5276914;
						}
					} else {
						if (prod != 3) {
							w26 = 2.8386278;
						} else {
							w26 = -4.8156776;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 3) {
							w26 = 1.6451249;
						} else {
							w26 = 1.8594537;
						}
					} else {
						w26 = -4.2373433;
					}
				}
			} else {
				if (hops < 3) {
					w26 = -2.4437444;
				} else {
					w26 = -2.6214325;
				}
			}
		} else {
			if (prod != 4) {
				if (prod != 0) {
					if (prod != 3) {
						if (rel_time < 8515) {
							w26 = -0.12631617;
						} else {
							w26 = 1.6437417;
						}
					} else {
						if (hops < 2) {
							w26 = 2.7544053;
						} else {
							w26 = 2.6360953;
						}
					}
				} else {
					if (rel_time < 8176) {
						w26 = -2.5126605;
					} else {
						if (hops < 2) {
							w26 = 3.2534108;
						} else {
							w26 = 3.626426;
						}
					}
				}
			} else {
				if (hops < 2) {
					w26 = -1.6347198;
				} else {
					w26 = -1.8283466;
				}
			}
		}
	} else {
		if (rel_time < 8575) {
			if (prod != 2) {
				if (hops < 3) {
					if (hops < 2) {
						w26 = -2.4688418;
					} else {
						w26 = -2.3368926;
					}
				} else {
					w26 = -2.1153185;
				}
			} else {
				if (hops < 4) {
					w26 = 1.5206767;
				} else {
					w26 = 2.0984442;
				}
			}
		} else {
			if (rel_time < 8622) {
				if (prod != 3) {
					if (hops < 3) {
						if (hops < 2) {
							w26 = 3.073364;
						} else {
							w26 = 3.250204;
						}
					} else {
						if (hops < 4) {
							w26 = 3.493449;
						} else {
							w26 = 3.1173415;
						}
					}
				} else {
					w26 = -4.6221805;
				}
			} else {
				if (rel_time < 9219) {
					if (rel_time < 9031) {
						if (prod != 2) {
							w26 = 1.0033534;
						} else {
							w26 = -5.560561;
						}
					} else {
						if (prod != 2) {
							w26 = -3.0878623;
						} else {
							w26 = 3.4707723;
						}
					}
				} else {
					if (rel_time < 9322) {
						if (prod != 0) {
							w26 = 4.3952584;
						} else {
							w26 = -7.354311;
						}
					} else {
						if (prod != 4) {
							w26 = 0.16793056;
						} else {
							w26 = -0.641101;
						}
					}
				}
			}
		}
	}
	float w27;
	if (prod != 4) {
		if (rel_time < 9431) {
			if (rel_time < 9031) {
				if (rel_time < 8867) {
					if (rel_time < 8529) {
						if (rel_time < 8130) {
							w27 = 0.0057539498;
						} else {
							w27 = 0.6025311;
						}
					} else {
						if (prod != 1) {
							w27 = -2.7536495;
						} else {
							w27 = 4.552194;
						}
					}
				} else {
					if (rel_time < 8914) {
						w27 = 2.8380558;
					} else {
						if (hops < 2) {
							w27 = 2.9828734;
						} else {
							w27 = 3.3836946;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (prod != 2) {
						if (rel_time < 9369) {
							w27 = -1.9968579;
						} else {
							w27 = 1.4890598;
						}
					} else {
						if (rel_time < 9173) {
							w27 = 1.7358204;
						} else {
							w27 = -1.5267547;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w27 = -3.3470361;
						} else {
							w27 = -3.1383052;
						}
					} else {
						w27 = -2.932063;
					}
				}
			}
		} else {
			if (rel_time < 9628) {
				if (prod != 2) {
					if (rel_time < 9524) {
						if (hops < 2) {
							w27 = 2.5098774;
						} else {
							w27 = 2.4034266;
						}
					} else {
						if (hops < 2) {
							w27 = 1.8501506;
						} else {
							w27 = 2.2512846;
						}
					}
				} else {
					w27 = -1.5272309;
				}
			} else {
				if (rel_time < 10240) {
					if (rel_time < 10073) {
						if (rel_time < 9933) {
							w27 = -0.25179192;
						} else {
							w27 = 0.41346428;
						}
					} else {
						if (rel_time < 10223) {
							w27 = 1.9724509;
						} else {
							w27 = 0.73832756;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 10332) {
							w27 = 1.1021024;
						} else {
							w27 = -0.13860273;
						}
					} else {
						if (hops < 4) {
							w27 = -0.3204413;
						} else {
							w27 = -1.6763929;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4209) {
			if (rel_time < 3907) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 3785) {
							w27 = -0.30760255;
						} else {
							w27 = -0.58811605;
						}
					} else {
						if (rel_time < 3785) {
							w27 = -1.222242;
						} else {
							w27 = 0.71072185;
						}
					}
				} else {
					if (rel_time < 3785) {
						if (hops < 4) {
							w27 = -0.3041795;
						} else {
							w27 = 0.63075376;
						}
					} else {
						if (hops < 4) {
							w27 = 1.7052935;
						} else {
							w27 = 2.69078;
						}
					}
				}
			} else {
				if (rel_time < 4103) {
					if (hops < 3) {
						if (hops < 2) {
							w27 = -4.7632337;
						} else {
							w27 = -5.7231045;
						}
					} else {
						w27 = -3.131516;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w27 = -0.877551;
						} else {
							w27 = -1.8392154;
						}
					} else {
						w27 = -3.3449395;
					}
				}
			}
		} else {
			if (rel_time < 4510) {
				if (hops < 2) {
					w27 = 2.4295812;
				} else {
					if (hops < 3) {
						w27 = 2.8740506;
					} else {
						w27 = 3.0689583;
					}
				}
			} else {
				if (rel_time < 4812) {
					if (hops < 2) {
						if (rel_time < 4707) {
							w27 = -1.4446632;
						} else {
							w27 = -4.0456653;
						}
					} else {
						if (rel_time < 4704) {
							w27 = -3.6717522;
						} else {
							w27 = -3.0326304;
						}
					}
				} else {
					if (rel_time < 5111) {
						if (hops < 3) {
							w27 = 3.013129;
						} else {
							w27 = 3.12659;
						}
					} else {
						if (rel_time < 5413) {
							w27 = -2.9978848;
						} else {
							w27 = -0.046290327;
						}
					}
				}
			}
		}
	}
	float w28;
	if (rel_time < 6618) {
		if (rel_time < 6418) {
			if (rel_time < 6410) {
				if (rel_time < 6363) {
					if (rel_time < 6316) {
						if (prod != 3) {
							w28 = 0.032587495;
						} else {
							w28 = -0.37960052;
						}
					} else {
						if (prod != 0) {
							w28 = 5.7316537;
						} else {
							w28 = -3.149788;
						}
					}
				} else {
					if (prod != 1) {
						w28 = -10.30335;
					} else {
						if (hops < 2) {
							w28 = 5.004466;
						} else {
							w28 = 4.6481867;
						}
					}
				}
			} else {
				w28 = -3.57573;
			}
		} else {
			if (prod != 4) {
				if (prod != 2) {
					if (rel_time < 6466) {
						w28 = 4.6145177;
					} else {
						if (rel_time < 6513) {
							w28 = 5.3893337;
						} else {
							w28 = 6.193089;
						}
					}
				} else {
					w28 = -3.5871034;
				}
			} else {
				if (rel_time < 6513) {
					if (hops < 2) {
						w28 = -1.8835797;
					} else {
						if (hops < 3) {
							w28 = -2.0079076;
						} else {
							w28 = -2.114979;
						}
					}
				} else {
					w28 = -5.153709;
				}
			}
		}
	} else {
		if (rel_time < 6714) {
			if (prod != 1) {
				if (rel_time < 6667) {
					if (hops < 2) {
						w28 = 5.839356;
					} else {
						w28 = 6.3410907;
					}
				} else {
					if (hops < 2) {
						w28 = 2.7763598;
					} else {
						w28 = 3.0432322;
					}
				}
			} else {
				if (rel_time < 6667) {
					w28 = -10.528598;
				} else {
					w28 = -5.7692366;
				}
			}
		} else {
			if (rel_time < 6761) {
				if (prod != 2) {
					w28 = -4.5727677;
				} else {
					if (hops < 3) {
						w28 = 2.882256;
					} else {
						w28 = 3.0616024;
					}
				}
			} else {
				if (rel_time < 6808) {
					if (prod != 3) {
						w28 = 5.771642;
					} else {
						if (hops < 3) {
							w28 = -2.5029705;
						} else {
							w28 = -2.1938498;
						}
					}
				} else {
					if (rel_time < 6818) {
						if (hops < 2) {
							w28 = 2.1378973;
						} else {
							w28 = 2.2853339;
						}
					} else {
						if (rel_time < 6922) {
							w28 = -1.4404988;
						} else {
							w28 = -0.02027867;
						}
					}
				}
			}
		}
	}
	float w29;
	if (prod != 3) {
		if (rel_time < 7615) {
			if (rel_time < 7568) {
				if (prod != 2) {
					if (rel_time < 7264) {
						if (rel_time < 7217) {
							w29 = -0.011918903;
						} else {
							w29 = 1.0042006;
						}
					} else {
						if (rel_time < 7321) {
							w29 = -3.3943884;
						} else {
							w29 = 0.1601864;
						}
					}
				} else {
					if (rel_time < 4054) {
						if (rel_time < 3737) {
							w29 = 0.076267175;
						} else {
							w29 = -2.6961985;
						}
					} else {
						if (rel_time < 4356) {
							w29 = 3.2915184;
						} else {
							w29 = 0.3414151;
						}
					}
				}
			} else {
				if (prod != 1) {
					w29 = -3.0146;
				} else {
					if (hops < 2) {
						w29 = 4.9004445;
					} else {
						w29 = 4.51298;
					}
				}
			}
		} else {
			if (rel_time < 7720) {
				if (rel_time < 7662) {
					w29 = -2.8300104;
				} else {
					if (hops < 2) {
						w29 = -1.7430537;
					} else {
						w29 = -1.8132308;
					}
				}
			} else {
				if (rel_time < 8928) {
					if (rel_time < 8867) {
						if (prod != 4) {
							w29 = -0.2102761;
						} else {
							w29 = 0.72835344;
						}
					} else {
						if (rel_time < 8914) {
							w29 = -8.003116;
						} else {
							w29 = -3.2090201;
						}
					}
				} else {
					if (rel_time < 9322) {
						if (prod != 1) {
							w29 = 1.7431929;
						} else {
							w29 = -2.353425;
						}
					} else {
						if (rel_time < 9628) {
							w29 = -0.61806446;
						} else {
							w29 = 0.040995013;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4103) {
			if (rel_time < 3785) {
				if (hops < 2) {
					if (rel_time < 3737) {
						w29 = -0.63577;
					} else {
						w29 = -0.5071575;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w29 = -0.15367943;
						} else {
							w29 = 0.40219468;
						}
					} else {
						if (rel_time < 3737) {
							w29 = -0.43711826;
						} else {
							w29 = -0.6788873;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 4054) {
						if (hops < 2) {
							w29 = 0.30851343;
						} else {
							w29 = 2.6354277;
						}
					} else {
						if (hops < 2) {
							w29 = 2.952603;
						} else {
							w29 = 1.8413826;
						}
					}
				} else {
					w29 = 3.3212423;
				}
			}
		} else {
			if (rel_time < 4405) {
				if (rel_time < 4356) {
					if (hops < 2) {
						w29 = -1.4730734;
					} else {
						if (hops < 3) {
							w29 = -2.3216176;
						} else {
							w29 = -2.0836399;
						}
					}
				} else {
					if (hops < 2) {
						w29 = -4.274038;
					} else {
						w29 = -4.855564;
					}
				}
			} else {
				if (rel_time < 4704) {
					if (hops < 2) {
						if (rel_time < 4655) {
							w29 = 5.6765995;
						} else {
							w29 = 0.73625624;
						}
					} else {
						if (rel_time < 4655) {
							w29 = 4.7768855;
						} else {
							w29 = 3.0674517;
						}
					}
				} else {
					if (rel_time < 5006) {
						if (hops < 3) {
							w29 = -3.751965;
						} else {
							w29 = -3.4350903;
						}
					} else {
						if (rel_time < 5907) {
							w29 = 1.3959858;
						} else {
							w29 = 0.041111875;
						}
					}
				}
			}
		}
	}
	float w30;
	if (prod != 0) {
		if (rel_time < 6808) {
			if (rel_time < 6513) {
				if (rel_time < 6211) {
					if (rel_time < 5907) {
						if (rel_time < 5610) {
							w30 = -0.012092012;
						} else {
							w30 = 0.9036883;
						}
					} else {
						if (prod != 2) {
							w30 = -2.501033;
						} else {
							w30 = 4.416834;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 6466) {
							w30 = 2.4379194;
						} else {
							w30 = -0.29034466;
						}
					} else {
						if (rel_time < 6410) {
							w30 = -5.374825;
						} else {
							w30 = -1.9603659;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (prod != 1) {
						if (rel_time < 6761) {
							w30 = -2.500889;
						} else {
							w30 = -1.0969893;
						}
					} else {
						if (rel_time < 6667) {
							w30 = -5.2614145;
						} else {
							w30 = -2.879917;
						}
					}
				} else {
					if (hops < 2) {
						w30 = 1.2047821;
					} else {
						w30 = 1.3498993;
					}
				}
			}
		} else {
			if (rel_time < 7112) {
				if (prod != 2) {
					if (prod != 4) {
						if (rel_time < 7065) {
							w30 = 2.6433396;
						} else {
							w30 = 1.761229;
						}
					} else {
						if (rel_time < 6922) {
							w30 = 1.171197;
						} else {
							w30 = -0.27368304;
						}
					}
				} else {
					if (hops < 3) {
						w30 = -1.1778692;
					} else {
						w30 = -1.2819124;
					}
				}
			} else {
				if (rel_time < 7274) {
					if (rel_time < 7264) {
						if (rel_time < 7217) {
							w30 = -1.6592482;
						} else {
							w30 = -5.055615;
						}
					} else {
						if (hops < 3) {
							w30 = -1.3150815;
						} else {
							w30 = -1.0565122;
						}
					}
				} else {
					if (rel_time < 7673) {
						if (rel_time < 7416) {
							w30 = -0.09708329;
						} else {
							w30 = 1.5266892;
						}
					} else {
						if (rel_time < 7967) {
							w30 = -1.2506514;
						} else {
							w30 = 0.08482128;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4257) {
			if (rel_time < 3957) {
				if (rel_time < 3909) {
					if (rel_time < 3907) {
						if (rel_time < 3592) {
							w30 = 0.45319498;
						} else {
							w30 = 1.6413591;
						}
					} else {
						if (hops < 3) {
							w30 = -0.31900933;
						} else {
							w30 = 1.86255;
						}
					}
				} else {
					if (hops < 3) {
						w30 = -11.012434;
					} else {
						w30 = -8.759273;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w30 = 4.7940254;
					} else {
						w30 = 5.423435;
					}
				} else {
					w30 = 3.845191;
				}
			}
		} else {
			if (rel_time < 4559) {
				w30 = -6.5728855;
			} else {
				if (rel_time < 4861) {
					if (rel_time < 4812) {
						if (hops < 2) {
							w30 = 0.051405262;
						} else {
							w30 = 1.349989;
						}
					} else {
						if (hops < 3) {
							w30 = 3.9012606;
						} else {
							w30 = 4.1510034;
						}
					}
				} else {
					if (rel_time < 5159) {
						if (hops < 2) {
							w30 = -1.813237;
						} else {
							w30 = -2.0707765;
						}
					} else {
						if (rel_time < 5462) {
							w30 = 2.944914;
						} else {
							w30 = -0.18332201;
						}
					}
				}
			}
		}
	}
	float w31;
	if (prod != 2) {
		if (rel_time < 8130) {
			if (rel_time < 7872) {
				if (rel_time < 7568) {
					if (rel_time < 7264) {
						if (rel_time < 6969) {
							w31 = 0.0011588894;
						} else {
							w31 = 0.5397689;
						}
					} else {
						if (prod != 4) {
							w31 = -1.5919138;
						} else {
							w31 = 1.1847061;
						}
					}
				} else {
					if (prod != 4) {
						if (prod != 1) {
							w31 = 2.3563492;
						} else {
							w31 = -0.21344556;
						}
					} else {
						if (rel_time < 7720) {
							w31 = -0.27139384;
						} else {
							w31 = -3.8374047;
						}
					}
				}
			} else {
				if (rel_time < 7967) {
					if (rel_time < 7920) {
						if (hops < 2) {
							w31 = -2.3616912;
						} else {
							w31 = -2.1917045;
						}
					} else {
						w31 = -6.814323;
					}
				} else {
					if (prod != 0) {
						if (rel_time < 8013) {
							w31 = 0.014521413;
						} else {
							w31 = 0.49599576;
						}
					} else {
						if (rel_time < 8117) {
							w31 = -1.9387846;
						} else {
							w31 = -1.0521438;
						}
					}
				}
			}
		} else {
			if (rel_time < 8223) {
				if (rel_time < 8176) {
					if (prod != 0) {
						if (hops < 2) {
							w31 = 1.8488053;
						} else {
							w31 = 1.3633882;
						}
					} else {
						if (hops < 4) {
							w31 = -1.2133502;
						} else {
							w31 = -1.622121;
						}
					}
				} else {
					w31 = 7.463657;
				}
			} else {
				if (rel_time < 10073) {
					if (rel_time < 9980) {
						if (rel_time < 9784) {
							w31 = 0.017333448;
						} else {
							w31 = 0.69144535;
						}
					} else {
						if (hops < 4) {
							w31 = 2.543714;
						} else {
							w31 = 4.205763;
						}
					}
				} else {
					if (rel_time < 10223) {
						if (prod != 4) {
							w31 = 0.95093626;
						} else {
							w31 = -2.9895513;
						}
					} else {
						if (prod != 4) {
							w31 = -0.07317535;
						} else {
							w31 = 0.38905156;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4655) {
			if (rel_time < 4356) {
				if (rel_time < 4054) {
					if (hops < 3) {
						if (hops < 2) {
							w31 = 0.7927035;
						} else {
							w31 = -0.41671005;
						}
					} else {
						if (rel_time < 3737) {
							w31 = 0.4005734;
						} else {
							w31 = -4.301836;
						}
					}
				} else {
					if (rel_time < 4305) {
						if (hops < 3) {
							w31 = 4.469672;
						} else {
							w31 = 3.2361302;
						}
					} else {
						if (hops < 2) {
							w31 = 1.4024789;
						} else {
							w31 = 1.6165619;
						}
					}
				}
			} else {
				w31 = -3.5028765;
			}
		} else {
			if (rel_time < 4958) {
				if (hops < 3) {
					w31 = 4.054639;
				} else {
					w31 = 4.206713;
				}
			} else {
				if (rel_time < 5259) {
					if (hops < 2) {
						w31 = -3.1906085;
					} else {
						w31 = -3.356761;
					}
				} else {
					if (rel_time < 7967) {
						if (rel_time < 7662) {
							w31 = 0.07508433;
						} else {
							w31 = 3.0121078;
						}
					} else {
						if (rel_time < 8223) {
							w31 = -2.4890985;
						} else {
							w31 = -0.26534167;
						}
					}
				}
			}
		}
	}
	float w32;
	if (rel_time < 1134) {
		if (rel_time < 1085) {
			if (rel_time < 1037) {
				if (rel_time < 789) {
					if (size < 125) {
						if (hops < 3) {
							w32 = -1.7225609;
						} else {
							w32 = 1.2734401;
						}
					} else {
						if (rel_time < 686) {
							w32 = -0.009519691;
						} else {
							w32 = 0.6761393;
						}
					}
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w32 = 1.0883634;
						} else {
							w32 = -0.3658689;
						}
					} else {
						if (hops < 4) {
							w32 = -0.6825133;
						} else {
							w32 = -1.477258;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (hops < 4) {
						if (hops < 3) {
							w32 = 1.1252087;
						} else {
							w32 = 1.3384206;
						}
					} else {
						w32 = 0.81749487;
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w32 = -1.0454434;
						} else {
							w32 = -0.9386633;
						}
					} else {
						w32 = -1.131334;
					}
				}
			}
		} else {
			if (cons != 2) {
				if (hops < 3) {
					w32 = -1.4002643;
				} else {
					w32 = -1.009558;
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w32 = 1.2917393;
						} else {
							w32 = 1.0718182;
						}
					} else {
						w32 = 1.3131428;
					}
				} else {
					w32 = 0.68839926;
				}
			}
		}
	} else {
		if (rel_time < 1182) {
			if (cons != 3) {
				if (hops < 3) {
					if (hops < 2) {
						w32 = 2.006144;
					} else {
						w32 = 1.6574707;
					}
				} else {
					if (hops < 4) {
						w32 = 4.2557755;
					} else {
						w32 = 1.5108663;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w32 = -2.2020507;
					} else {
						w32 = -1.8012444;
					}
				} else {
					w32 = -1.1118926;
				}
			}
		} else {
			if (rel_time < 1479) {
				if (rel_time < 1391) {
					if (cons != 3) {
						if (rel_time < 1272) {
							w32 = 0.4845836;
						} else {
							w32 = -0.41194776;
						}
					} else {
						if (hops < 3) {
							w32 = 1.4565549;
						} else {
							w32 = 0.21865727;
						}
					}
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w32 = -2.755025;
						} else {
							w32 = 1.2119433;
						}
					} else {
						if (hops < 3) {
							w32 = 0.10940137;
						} else {
							w32 = 2.2026532;
						}
					}
				}
			} else {
				if (rel_time < 1658) {
					if (cons != 2) {
						if (cons != 0) {
							w32 = 1.4084488;
						} else {
							w32 = -0.7781542;
						}
					} else {
						if (hops < 2) {
							w32 = 0.73411626;
						} else {
							w32 = -2.4753804;
						}
					}
				} else {
					if (rel_time < 1807) {
						if (cons != 1) {
							w32 = -0.10948172;
						} else {
							w32 = -1.6296093;
						}
					} else {
						if (rel_time < 1864) {
							w32 = 0.8581666;
						} else {
							w32 = -0.0030006215;
						}
					}
				}
			}
		}
	}
	return (697.3562 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32);
}
