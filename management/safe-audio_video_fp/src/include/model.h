#include <stdbool.h>

float model(int rel_time, int hops, int size, int prod, int cons)
{
	float w0;
	if (size < 45) {
		if (rel_time < 1324) {
			if (rel_time < 64) {
				if (hops < 3) {
					if (hops < 2) {
						w0 = 89.851585;
					} else {
						w0 = 92.297775;
					}
				} else {
					if (hops < 4) {
						w0 = 94.22447;
					} else {
						w0 = 96.8189;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w0 = 64.66297;
					} else {
						w0 = 66.60297;
					}
				} else {
					if (hops < 4) {
						w0 = 68.803246;
					} else {
						if (hops < 5) {
							w0 = 70.96786;
						} else {
							w0 = 72.85332;
						}
					}
				}
			}
		} else {
			if (rel_time < 1928) {
				w0 = 305.337;
			} else {
				if (rel_time < 5549) {
					if (rel_time < 2491) {
						w0 = 67.14259;
					} else {
						if (rel_time < 2532) {
							w0 = 101.84371;
						} else {
							w0 = 84.98757;
						}
					}
				} else {
					if (rel_time < 6758) {
						if (rel_time < 6724) {
							w0 = 73.91215;
						} else {
							w0 = 113.526665;
						}
					} else {
						if (hops < 3) {
							w0 = 67.69717;
						} else {
							w0 = 72.39828;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (rel_time < 652) {
				if (rel_time < 412) {
					if (hops < 3) {
						w0 = 127.26344;
					} else {
						w0 = 131.90157;
					}
				} else {
					if (rel_time < 583) {
						if (hops < 3) {
							w0 = 157.57661;
						} else {
							w0 = 162.20135;
						}
					} else {
						if (hops < 3) {
							w0 = 167.30862;
						} else {
							w0 = 171.73172;
						}
					}
				}
			} else {
				if (size < 77) {
					if (hops < 3) {
						if (rel_time < 831) {
							w0 = 127.25106;
						} else {
							w0 = 133.98132;
						}
					} else {
						if (rel_time < 831) {
							w0 = 131.88812;
						} else {
							w0 = 138.42888;
						}
					}
				} else {
					if (hops < 3) {
						if (prod == 4) {
							w0 = 141.037;
						} else {
							w0 = 136.94795;
						}
					} else {
						if (prod == 4) {
							w0 = 145.59138;
						} else {
							w0 = 141.46436;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 3) {
					w0 = 186.11066;
				} else {
					w0 = 190.66658;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w0 = 160.00716;
					} else {
						w0 = 161.97183;
					}
				} else {
					if (hops < 4) {
						w0 = 164.18599;
					} else {
						w0 = 166.79376;
					}
				}
			}
		}
	}
	float w1;
	if (size < 45) {
		if (rel_time < 1324) {
			if (rel_time < 64) {
				if (hops < 3) {
					if (hops < 2) {
						w1 = 62.900433;
					} else {
						w1 = 64.61346;
					}
				} else {
					if (hops < 5) {
						w1 = 66.50021;
					} else {
						w1 = 69.57083;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w1 = 45.265495;
					} else {
						w1 = 46.62372;
					}
				} else {
					if (hops < 4) {
						w1 = 48.164948;
					} else {
						if (hops < 5) {
							w1 = 49.681038;
						} else {
							w1 = 51.008293;
						}
					}
				}
			}
		} else {
			if (rel_time < 1928) {
				w1 = 213.76013;
			} else {
				if (rel_time < 4945) {
					if (rel_time < 3096) {
						if (rel_time < 2532) {
							w1 = 63.735607;
						} else {
							w1 = 41.500328;
						}
					} else {
						if (rel_time < 3135) {
							w1 = 129.15753;
						} else {
							w1 = 59.620113;
						}
					}
				} else {
					if (rel_time < 6153) {
						if (rel_time < 6115) {
							w1 = 50.185196;
						} else {
							w1 = 86.114044;
						}
					} else {
						if (hops < 3) {
							w1 = 47.65468;
						} else {
							w1 = 51.037907;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (rel_time < 652) {
				if (rel_time < 412) {
					if (hops < 2) {
						w1 = 88.09041;
					} else {
						if (hops < 4) {
							w1 = 90.634796;
						} else {
							w1 = 93.47349;
						}
					}
				} else {
					if (rel_time < 583) {
						if (hops < 4) {
							w1 = 110.76163;
						} else {
							w1 = 114.87762;
						}
					} else {
						if (hops < 4) {
							w1 = 117.51806;
						} else {
							w1 = 121.55533;
						}
					}
				}
			} else {
				if (size < 77) {
					if (hops < 4) {
						if (rel_time < 2226) {
							w1 = 91.321465;
						} else {
							w1 = 94.75365;
						}
					} else {
						if (rel_time < 2226) {
							w1 = 95.41461;
						} else {
							w1 = 98.72542;
						}
					}
				} else {
					if (hops < 4) {
						if (prod == 4) {
							w1 = 99.16046;
						} else {
							w1 = 96.27876;
						}
					} else {
						if (prod == 4) {
							w1 = 103.2763;
						} else {
							w1 = 100.35396;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 2) {
					w1 = 129.2384;
				} else {
					if (hops < 4) {
						w1 = 131.82819;
					} else {
						w1 = 134.66266;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w1 = 112.006676;
					} else {
						w1 = 113.38223;
					}
				} else {
					if (hops < 5) {
						w1 = 115.46591;
					} else {
						w1 = 118.262566;
					}
				}
			}
		}
	}
	float w2;
	if (size < 45) {
		if (rel_time < 1324) {
			if (rel_time < 64) {
				if (hops < 3) {
					if (hops < 2) {
						w2 = 44.03333;
					} else {
						w2 = 45.232925;
					}
				} else {
					if (hops < 4) {
						w2 = 46.020824;
					} else {
						w2 = 47.60735;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w2 = 31.686832;
					} else {
						w2 = 32.637753;
					}
				} else {
					if (hops < 4) {
						w2 = 33.717335;
					} else {
						if (hops < 5) {
							w2 = 34.77921;
						} else {
							w2 = 35.71349;
						}
					}
				}
			}
		} else {
			if (rel_time < 1928) {
				w2 = 149.64905;
			} else {
				if (rel_time < 5549) {
					if (rel_time < 5510) {
						if (rel_time < 4945) {
							w2 = 42.98787;
						} else {
							w2 = 26.467787;
						}
					} else {
						if (hops < 5) {
							w2 = 61.235744;
						} else {
							w2 = 49.553246;
						}
					}
				} else {
					if (rel_time < 6115) {
						if (hops < 3) {
							w2 = 28.37576;
						} else {
							w2 = 32.33638;
						}
					} else {
						if (rel_time < 6153) {
							w2 = 60.308414;
						} else {
							w2 = 34.25508;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (rel_time < 652) {
				if (rel_time < 412) {
					if (hops < 3) {
						if (hops < 2) {
							w2 = 61.667423;
						} else {
							w2 = 63.06336;
						}
					} else {
						if (hops < 5) {
							w2 = 64.39016;
						} else {
							w2 = 66.89242;
						}
					}
				} else {
					if (rel_time < 583) {
						if (hops < 2) {
							w2 = 76.20736;
						} else {
							w2 = 79.03527;
						}
					} else {
						if (hops < 2) {
							w2 = 80.863396;
						} else {
							w2 = 83.78737;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (hops < 2) {
						if (rel_time < 1867) {
							w2 = 64.62044;
						} else {
							w2 = 67.69175;
						}
					} else {
						if (rel_time < 1867) {
							w2 = 67.57129;
						} else {
							w2 = 70.63126;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2226) {
							w2 = 63.527317;
						} else {
							w2 = 62.65763;
						}
					} else {
						if (hops < 4) {
							w2 = 65.128174;
						} else {
							w2 = 67.01492;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 3) {
					w2 = 91.1559;
				} else {
					w2 = 93.51583;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w2 = 78.40583;
					} else {
						w2 = 79.368935;
					}
				} else {
					if (hops < 4) {
						w2 = 80.29535;
					} else {
						w2 = 81.90036;
					}
				}
			}
		}
	}
	float w3;
	if (size < 45) {
		if (rel_time < 4341) {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 30.825449;
						} else {
							w3 = 31.665503;
						}
					} else {
						if (hops < 5) {
							w3 = 32.540943;
						} else {
							w3 = 34.45617;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 22.181477;
						} else {
							w3 = 22.84723;
						}
					} else {
						if (hops < 4) {
							w3 = 23.603445;
						} else {
							w3 = 24.514025;
						}
					}
				}
			} else {
				if (rel_time < 1928) {
					if (hops < 5) {
						w3 = 104.21129;
					} else {
						w3 = 115.16692;
					}
				} else {
					if (rel_time < 3703) {
						if (rel_time < 3135) {
							w3 = 31.965767;
						} else {
							w3 = 15.164608;
						}
					} else {
						if (rel_time < 3740) {
							w3 = 139.60365;
						} else {
							w3 = 28.793;
						}
					}
				}
			}
		} else {
			if (rel_time < 4905) {
				if (hops < 3) {
					if (hops < 2) {
						w3 = 8.425398;
					} else {
						w3 = 10.088102;
					}
				} else {
					if (hops < 4) {
						w3 = 11.785412;
					} else {
						w3 = 14.658735;
					}
				}
			} else {
				if (rel_time < 4945) {
					if (hops < 2) {
						w3 = 30.74823;
					} else {
						if (hops < 5) {
							w3 = 35.978897;
						} else {
							w3 = 31.179628;
						}
					}
				} else {
					if (rel_time < 5510) {
						if (hops < 3) {
							w3 = 17.05533;
						} else {
							w3 = 20.947845;
						}
					} else {
						if (rel_time < 5549) {
							w3 = 42.400837;
						} else {
							w3 = 24.206379;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (rel_time < 652) {
				if (rel_time < 412) {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 43.17011;
						} else {
							w3 = 44.147858;
						}
					} else {
						if (hops < 4) {
							w3 = 44.693752;
						} else {
							w3 = 45.93006;
						}
					}
				} else {
					if (rel_time < 583) {
						if (hops < 3) {
							w3 = 53.83254;
						} else {
							w3 = 55.995583;
						}
					} else {
						if (hops < 3) {
							w3 = 57.20685;
						} else {
							w3 = 59.224857;
						}
					}
				}
			} else {
				if (size < 77) {
					if (rel_time < 831) {
						if (hops < 3) {
							w3 = 41.894516;
						} else {
							w3 = 44.05604;
						}
					} else {
						if (prod == 0) {
							w3 = 48.04357;
						} else {
							w3 = 45.33825;
						}
					}
				} else {
					if (hops < 3) {
						if (prod == 4) {
							w3 = 48.509357;
						} else {
							w3 = 46.365044;
						}
					} else {
						if (prod == 4) {
							w3 = 50.615284;
						} else {
							w3 = 48.434822;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 2) {
					w3 = 63.130615;
				} else {
					if (hops < 5) {
						w3 = 64.87792;
					} else {
						w3 = 67.80583;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w3 = 54.884895;
					} else {
						w3 = 55.559223;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w3 = 56.208164;
						} else {
							w3 = 57.00707;
						}
					} else {
						w3 = 58.227715;
					}
				}
			}
		}
	}
	float w4;
	if (size < 45) {
		if (rel_time < 4341) {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 21.579296;
						} else {
							w4 = 22.283165;
						}
					} else {
						if (hops < 5) {
							w4 = 23.184242;
						} else {
							w4 = 24.130724;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w4 = 15.527522;
						} else {
							w4 = 15.993625;
						}
					} else {
						if (hops < 4) {
							w4 = 16.52333;
						} else {
							w4 = 17.160734;
						}
					}
				}
			} else {
				if (rel_time < 1928) {
					if (hops < 4) {
						w4 = 72.37198;
					} else {
						w4 = 77.37153;
					}
				} else {
					if (rel_time < 3096) {
						if (rel_time < 2532) {
							w4 = 22.139837;
						} else {
							w4 = 6.576632;
						}
					} else {
						if (rel_time < 3135) {
							w4 = 67.98621;
						} else {
							w4 = 21.14467;
						}
					}
				}
			}
		} else {
			if (rel_time < 4905) {
				if (hops < 3) {
					if (hops < 2) {
						w4 = 5.9052334;
					} else {
						w4 = 7.068644;
					}
				} else {
					if (hops < 4) {
						w4 = 8.26246;
					} else {
						if (hops < 5) {
							w4 = 9.712525;
						} else {
							w4 = 11.930809;
						}
					}
				}
			} else {
				if (rel_time < 7358) {
					if (rel_time < 4945) {
						if (hops < 2) {
							w4 = 21.533894;
						} else {
							w4 = 24.940603;
						}
					} else {
						if (rel_time < 5510) {
							w4 = 12.976346;
						} else {
							w4 = 19.917864;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 9171) {
							w4 = 14.978552;
						} else {
							w4 = 13.448007;
						}
					} else {
						if (hops < 4) {
							w4 = 16.294521;
						} else {
							w4 = 18.650023;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (rel_time < 652) {
				if (rel_time < 412) {
					if (hops < 3) {
						if (hops < 2) {
							w4 = 30.221107;
						} else {
							w4 = 30.905952;
						}
					} else {
						if (hops < 5) {
							w4 = 31.514097;
						} else {
							w4 = 33.081833;
						}
					}
				} else {
					if (rel_time < 583) {
						if (hops < 4) {
							w4 = 37.871174;
						} else {
							w4 = 39.925415;
						}
					} else {
						if (hops < 2) {
							w4 = 39.448822;
						} else {
							w4 = 41.149944;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (hops < 2) {
						if (rel_time < 1627) {
							w4 = 30.057156;
						} else {
							w4 = 32.0951;
						}
					} else {
						if (rel_time < 831) {
							w4 = 31.052996;
						} else {
							w4 = 33.766342;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1379) {
							w4 = 34.650696;
						} else {
							w4 = 33.859394;
						}
					} else {
						if (hops < 5) {
							w4 = 35.554573;
						} else {
							w4 = 38.317596;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 4) {
					if (hops < 2) {
						w4 = 44.19444;
					} else {
						w4 = 45.19086;
					}
				} else {
					w4 = 46.53957;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w4 = 38.42;
					} else {
						w4 = 38.892124;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w4 = 39.346706;
						} else {
							w4 = 39.906372;
						}
					} else {
						w4 = 40.763477;
					}
				}
			}
		}
	}
	float w5;
	if (size < 45) {
		if (rel_time < 5549) {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 4) {
						if (hops < 2) {
							w5 = 15.106547;
						} else {
							w5 = 15.598954;
						}
					} else {
						if (hops < 5) {
							w5 = 16.23152;
						} else {
							w5 = 16.899494;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w5 = 10.869602;
						} else {
							w5 = 11.195932;
						}
					} else {
						if (hops < 5) {
							w5 = 11.690369;
						} else {
							w5 = 12.508669;
						}
					}
				}
			} else {
				if (rel_time < 1928) {
					if (hops < 5) {
						w5 = 51.02354;
					} else {
						w5 = 57.722767;
					}
				} else {
					if (rel_time < 2491) {
						if (hops < 3) {
							w5 = -2.74734;
						} else {
							w5 = 1.1036667;
						}
					} else {
						if (rel_time < 2532) {
							w5 = 23.072174;
						} else {
							w5 = 14.556738;
						}
					}
				}
			}
		} else {
			if (rel_time < 6115) {
				if (hops < 4) {
					if (hops < 2) {
						w5 = 5.743907;
					} else {
						w5 = 7.730088;
					}
				} else {
					if (hops < 5) {
						w5 = 10.250475;
					} else {
						w5 = 12.571629;
					}
				}
			} else {
				if (rel_time < 6153) {
					if (hops < 5) {
						if (hops < 2) {
							w5 = 27.141562;
						} else {
							w5 = 30.838278;
						}
					} else {
						w5 = 19.13396;
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w5 = 10.251869;
						} else {
							w5 = 11.719486;
						}
					} else {
						if (rel_time < 7962) {
							w5 = 15.05136;
						} else {
							w5 = 12.825432;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (size < 77) {
				if (hops < 3) {
					if (rel_time < 583) {
						if (rel_time < 412) {
							w5 = 21.377974;
						} else {
							w5 = 26.323795;
						}
					} else {
						if (rel_time < 831) {
							w5 = 20.173872;
						} else {
							w5 = 22.019346;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 583) {
							w5 = 24.685736;
						} else {
							w5 = 23.10515;
						}
					} else {
						if (rel_time < 412) {
							w5 = 23.167885;
						} else {
							w5 = 25.978666;
						}
					}
				}
			} else {
				if (rel_time < 652) {
					if (hops < 4) {
						if (hops < 2) {
							w5 = 27.616034;
						} else {
							w5 = 28.378752;
						}
					} else {
						if (hops < 5) {
							w5 = 29.386875;
						} else {
							w5 = 31.427141;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 661) {
							w5 = 21.50179;
						} else {
							w5 = 23.816412;
						}
					} else {
						if (hops < 5) {
							w5 = 24.9619;
						} else {
							w5 = 26.688883;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 4) {
					if (hops < 2) {
						w5 = 30.938208;
					} else {
						w5 = 31.6351;
					}
				} else {
					if (hops < 5) {
						w5 = 32.22711;
					} else {
						w5 = 33.539066;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w5 = 26.89439;
					} else {
						w5 = 27.22496;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w5 = 27.543386;
						} else {
							w5 = 27.93546;
						}
					} else {
						w5 = 28.5373;
					}
				}
			}
		}
	}
	float w6;
	if (size < 45) {
		if (rel_time < 3740) {
			if (rel_time < 3703) {
				if (rel_time < 1324) {
					if (rel_time < 64) {
						if (hops < 3) {
							w6 = 10.684124;
						} else {
							w6 = 11.296123;
						}
					} else {
						if (hops < 3) {
							w6 = 7.7165956;
						} else {
							w6 = 8.256879;
						}
					}
				} else {
					if (rel_time < 1928) {
						if (hops < 4) {
							w6 = 35.365444;
						} else {
							w6 = 38.406235;
						}
					} else {
						if (rel_time < 3135) {
							w6 = 11.160326;
						} else {
							w6 = -0.09054813;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w6 = 79.99814;
					} else {
						if (hops < 4) {
							w6 = 101.15747;
						} else {
							w6 = 77.00747;
						}
					}
				} else {
					w6 = 52.20882;
				}
			}
		} else {
			if (rel_time < 4301) {
				if (hops < 3) {
					if (hops < 2) {
						w6 = -10.950994;
					} else {
						w6 = -9.310692;
					}
				} else {
					if (hops < 4) {
						w6 = -7.395852;
					} else {
						if (hops < 5) {
							w6 = -5.144376;
						} else {
							w6 = -2.8451777;
						}
					}
				}
			} else {
				if (rel_time < 4341) {
					if (hops < 2) {
						w6 = 13.699198;
					} else {
						if (hops < 5) {
							w6 = 20.349012;
						} else {
							w6 = 13.870988;
						}
					}
				} else {
					if (rel_time < 4905) {
						if (hops < 3) {
							w6 = 0.24052335;
						} else {
							w6 = 2.0852087;
						}
					} else {
						if (rel_time < 5549) {
							w6 = 10.988999;
						} else {
							w6 = 8.2200365;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (size < 77) {
				if (hops < 4) {
					if (rel_time < 583) {
						if (rel_time < 412) {
							w6 = 14.841709;
						} else {
							w6 = 18.731659;
						}
					} else {
						if (prod == 0) {
							w6 = 16.033138;
						} else {
							w6 = 14.813626;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 412) {
							w6 = 14.957487;
						} else {
							w6 = 16.861614;
						}
					} else {
						if (rel_time < 412) {
							w6 = 16.224947;
						} else {
							w6 = 18.18589;
						}
					}
				}
			} else {
				if (rel_time < 652) {
					if (hops < 4) {
						if (hops < 2) {
							w6 = 19.332525;
						} else {
							w6 = 19.866085;
						}
					} else {
						if (hops < 5) {
							w6 = 20.574001;
						} else {
							w6 = 22.010418;
						}
					}
				} else {
					if (prod == 4) {
						if (rel_time < 661) {
							w6 = 15.1934805;
						} else {
							w6 = 17.389158;
						}
					} else {
						if (hops < 4) {
							w6 = 15.56584;
						} else {
							w6 = 16.892853;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 4) {
					if (hops < 2) {
						w6 = 21.658213;
					} else {
						w6 = 22.14562;
					}
				} else {
					if (hops < 5) {
						w6 = 22.562687;
					} else {
						w6 = 23.488155;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 663) {
							w6 = 19.13076;
						} else {
							w6 = 18.747713;
						}
					} else {
						w6 = 19.057804;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w6 = 19.280853;
						} else {
							w6 = 19.555511;
						}
					} else {
						w6 = 19.978111;
					}
				}
			}
		}
	}
	float w7;
	if (size < 45) {
		if (rel_time < 7962) {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 4) {
						if (hops < 2) {
							w7 = 7.3705935;
						} else {
							w7 = 7.643646;
						}
					} else {
						if (hops < 5) {
							w7 = 7.9762583;
						} else {
							w7 = 8.450144;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 413) {
							w7 = 5.172214;
						} else {
							w7 = 5.5053177;
						}
					} else {
						if (hops < 5) {
							w7 = 5.8636703;
						} else {
							w7 = 6.2821355;
						}
					}
				}
			} else {
				if (rel_time < 1928) {
					if (hops < 5) {
						if (hops < 2) {
							w7 = 23.972862;
						} else {
							w7 = 25.496962;
						}
					} else {
						w7 = 29.04251;
					}
				} else {
					if (rel_time < 2491) {
						if (hops < 4) {
							w7 = -4.860593;
						} else {
							w7 = -1.1479049;
						}
					} else {
						if (rel_time < 2532) {
							w7 = 12.80637;
						} else {
							w7 = 6.8858027;
						}
					}
				}
			}
		} else {
			if (rel_time < 8528) {
				if (hops < 2) {
					w7 = 2.1985636;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w7 = 3.1357782;
						} else {
							w7 = 3.7098947;
						}
					} else {
						w7 = 5.903033;
					}
				}
			} else {
				if (rel_time < 8567) {
					if (hops < 3) {
						if (hops < 2) {
							w7 = 8.16027;
						} else {
							w7 = 9.045081;
						}
					} else {
						if (hops < 5) {
							w7 = 11.882851;
						} else {
							w7 = 8.465534;
						}
					}
				} else {
					if (rel_time < 9135) {
						if (hops < 5) {
							w7 = 2.897315;
						} else {
							w7 = 5.909496;
						}
					} else {
						if (rel_time < 9171) {
							w7 = 15.128281;
						} else {
							w7 = 4.7784033;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 2) {
				if (rel_time < 652) {
					if (rel_time < 412) {
						w7 = 10.292008;
					} else {
						if (rel_time < 583) {
							w7 = 12.327595;
						} else {
							w7 = 13.533679;
						}
					}
				} else {
					if (prod == 0) {
						if (rel_time < 1867) {
							w7 = 10.184106;
						} else {
							w7 = 11.259323;
						}
					} else {
						if (rel_time < 2226) {
							w7 = 10.719286;
						} else {
							w7 = 9.5830965;
						}
					}
				}
			} else {
				if (rel_time < 652) {
					if (rel_time < 412) {
						if (hops < 5) {
							w7 = 10.461575;
						} else {
							w7 = 11.362664;
						}
					} else {
						if (hops < 4) {
							w7 = 13.7841015;
						} else {
							w7 = 14.974557;
						}
					}
				} else {
					if (prod == 0) {
						if (rel_time < 1867) {
							w7 = 11.112606;
						} else {
							w7 = 12.3069515;
						}
					} else {
						if (rel_time < 2226) {
							w7 = 11.411245;
						} else {
							w7 = 10.440153;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 4) {
					if (hops < 2) {
						w7 = 15.161784;
					} else {
						w7 = 15.502664;
					}
				} else {
					if (hops < 5) {
						w7 = 15.796478;
					} else {
						w7 = 16.449276;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 724) {
						w7 = 13.42349;
					} else {
						if (hops < 2) {
							w7 = 13.124758;
						} else {
							w7 = 13.300771;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w7 = 13.496928;
						} else {
							w7 = 13.689357;
						}
					} else {
						w7 = 13.986085;
					}
				}
			}
		}
	}
	float w8;
	if (size < 45) {
		if (rel_time < 3740) {
			if (rel_time < 3703) {
				if (rel_time < 3135) {
					if (rel_time < 3096) {
						if (rel_time < 2532) {
							w8 = 5.129753;
						} else {
							w8 = -5.1730146;
						}
					} else {
						if (hops < 5) {
							w8 = 39.42342;
						} else {
							w8 = 9.753025;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w8 = -6.654893;
						} else {
							w8 = -2.994448;
						}
					} else {
						if (hops < 5) {
							w8 = 2.6940002;
						} else {
							w8 = -0.97066486;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w8 = 54.061356;
					} else {
						if (hops < 4) {
							w8 = 68.9026;
						} else {
							w8 = 52.23273;
						}
					}
				} else {
					w8 = 35.071377;
				}
			}
		} else {
			if (rel_time < 4301) {
				if (hops < 3) {
					if (hops < 2) {
						w8 = -9.735825;
					} else {
						w8 = -8.584934;
					}
				} else {
					if (hops < 4) {
						w8 = -7.243426;
					} else {
						if (hops < 5) {
							w8 = -5.6637483;
						} else {
							w8 = -4.0321093;
						}
					}
				}
			} else {
				if (rel_time < 4341) {
					if (hops < 2) {
						w8 = 7.5300603;
					} else {
						if (hops < 5) {
							w8 = 12.184023;
						} else {
							w8 = 7.6900716;
						}
					}
				} else {
					if (rel_time < 4905) {
						if (hops < 4) {
							w8 = -1.7225789;
						} else {
							w8 = 0.19869666;
						}
					} else {
						if (hops < 2) {
							w8 = 3.2332225;
						} else {
							w8 = 4.7400637;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 4) {
				if (rel_time < 754) {
					if (prod == 3) {
						if (rel_time < 412) {
							w8 = 7.2723093;
						} else {
							w8 = 9.373046;
						}
					} else {
						if (hops < 2) {
							w8 = 6.854351;
						} else {
							w8 = 7.5627184;
						}
					}
				} else {
					if (rel_time < 831) {
						if (hops < 2) {
							w8 = 5.8741593;
						} else {
							w8 = 6.182573;
						}
					} else {
						if (prod == 0) {
							w8 = 8.0653925;
						} else {
							w8 = 7.248518;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (prod == 2) {
						if (rel_time < 652) {
							w8 = 9.263389;
						} else {
							w8 = 8.227498;
						}
					} else {
						if (rel_time < 1379) {
							w8 = 10.289924;
						} else {
							w8 = 8.988725;
						}
					}
				} else {
					if (size < 77) {
						if (rel_time < 583) {
							w8 = 9.919233;
						} else {
							w8 = 8.931392;
						}
					} else {
						if (prod == 4) {
							w8 = 10.203938;
						} else {
							w8 = 9.5892;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 3) {
					w8 = 10.70064;
				} else {
					if (hops < 5) {
						w8 = 10.982719;
					} else {
						w8 = 11.519793;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 724) {
						w8 = 9.396795;
					} else {
						if (hops < 2) {
							w8 = 9.187505;
						} else {
							w8 = 9.310741;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w8 = 9.448082;
						} else {
							w8 = 9.5829;
						}
					} else {
						w8 = 9.791241;
					}
				}
			}
		}
	}
	float w9;
	if (size < 45) {
		if (rel_time < 1324) {
			if (rel_time < 64) {
				if (hops < 4) {
					if (hops < 2) {
						w9 = 3.621085;
					} else {
						if (hops < 3) {
							w9 = 3.7690008;
						} else {
							w9 = 3.87881;
						}
					}
				} else {
					if (hops < 5) {
						w9 = 4.0458927;
					} else {
						w9 = 4.3806715;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 832) {
							w9 = 2.175817;
						} else {
							w9 = 1.8823758;
						}
					} else {
						if (rel_time < 952) {
							w9 = 2.387977;
						} else {
							w9 = 2.0373962;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 534) {
							w9 = 2.4168286;
						} else {
							w9 = 2.689878;
						}
					} else {
						w9 = 2.8602853;
					}
				}
			}
		} else {
			if (rel_time < 1928) {
				if (hops < 4) {
					if (hops < 2) {
						w9 = 15.249077;
					} else {
						if (hops < 3) {
							w9 = 16.761106;
						} else {
							w9 = 15.050448;
						}
					}
				} else {
					if (hops < 5) {
						w9 = 16.966993;
					} else {
						w9 = 18.847164;
					}
				}
			} else {
				if (rel_time < 2491) {
					if (hops < 2) {
						w9 = -6.452281;
					} else {
						if (hops < 4) {
							w9 = -4.322619;
						} else {
							w9 = -2.336978;
						}
					}
				} else {
					if (rel_time < 2532) {
						if (hops < 2) {
							w9 = 3.115802;
						} else {
							w9 = 9.990031;
						}
					} else {
						if (rel_time < 3096) {
							w9 = -3.6216683;
						} else {
							w9 = 3.4396641;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 2) {
				if (rel_time < 652) {
					if (rel_time < 583) {
						if (rel_time < 412) {
							w9 = 5.023537;
						} else {
							w9 = 5.8184476;
						}
					} else {
						w9 = 6.662737;
					}
				} else {
					if (prod == 2) {
						if (prod == 3) {
							w9 = 4.9127555;
						} else {
							w9 = 5.524368;
						}
					} else {
						if (rel_time < 1379) {
							w9 = 6.0958366;
						} else {
							w9 = 5.54374;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (prod == 2) {
						if (rel_time < 652) {
							w9 = 6.319804;
						} else {
							w9 = 5.582648;
						}
					} else {
						if (rel_time < 1379) {
							w9 = 6.951395;
						} else {
							w9 = 6.0536304;
						}
					}
				} else {
					if (rel_time < 412) {
						w9 = 4.9849176;
					} else {
						if (rel_time < 652) {
							w9 = 8.520997;
						} else {
							w9 = 6.6481853;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 2) {
					w9 = 7.4042897;
				} else {
					if (hops < 5) {
						w9 = 7.6439223;
					} else {
						w9 = 8.067572;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 663) {
							w9 = 6.547599;
						} else {
							w9 = 6.4276023;
						}
					} else {
						if (rel_time < 1284) {
							w9 = 6.63169;
						} else {
							w9 = 6.512559;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w9 = 6.6138306;
						} else {
							w9 = 6.708274;
						}
					} else {
						w9 = 6.854549;
					}
				}
			}
		}
	}
	float w10;
	if (size < 45) {
		if (rel_time < 7962) {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 4) {
						if (hops < 2) {
							w10 = 2.5349307;
						} else {
							w10 = 2.668685;
						}
					} else {
						if (hops < 5) {
							w10 = 2.8325672;
						} else {
							w10 = 3.067919;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 413) {
							w10 = 1.4294791;
						} else {
							w10 = 1.6269195;
						}
					} else {
						if (rel_time < 952) {
							w10 = 1.8781688;
						} else {
							w10 = 1.5455419;
						}
					}
				}
			} else {
				if (rel_time < 1928) {
					if (hops < 4) {
						if (hops < 2) {
							w10 = 10.678035;
						} else {
							w10 = 11.279354;
						}
					} else {
						if (hops < 5) {
							w10 = 11.886205;
						} else {
							w10 = 13.22408;
						}
					}
				} else {
					if (rel_time < 2491) {
						if (hops < 3) {
							w10 = -3.8019583;
						} else {
							w10 = -2.1304128;
						}
					} else {
						if (rel_time < 3135) {
							w10 = 4.9493003;
						} else {
							w10 = 2.3594284;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 8528) {
					if (hops < 3) {
						if (hops < 2) {
							w10 = -0.4590231;
						} else {
							w10 = 0.010655905;
						}
					} else {
						w10 = -0.6232601;
					}
				} else {
					if (rel_time < 8567) {
						if (hops < 3) {
							w10 = 3.8006968;
						} else {
							w10 = 5.9263597;
						}
					} else {
						if (rel_time < 9135) {
							w10 = -0.38804004;
						} else {
							w10 = 1.1879237;
						}
					}
				}
			} else {
				if (rel_time < 8528) {
					if (hops < 5) {
						w10 = 0.15466563;
					} else {
						w10 = 1.7310137;
					}
				} else {
					if (rel_time < 8567) {
						if (hops < 5) {
							w10 = 5.8003836;
						} else {
							w10 = 3.5204356;
						}
					} else {
						if (rel_time < 9135) {
							w10 = 0.7472278;
						} else {
							w10 = 2.7288804;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 3) {
				if (rel_time < 652) {
					if (rel_time < 412) {
						w10 = 3.535598;
					} else {
						if (rel_time < 583) {
							w10 = 4.283777;
						} else {
							w10 = 4.857749;
						}
					}
				} else {
					if (prod == 0) {
						if (rel_time < 1867) {
							w10 = 3.350241;
						} else {
							w10 = 4.0186005;
						}
					} else {
						if (rel_time < 2226) {
							w10 = 3.8626409;
						} else {
							w10 = 3.1397057;
						}
					}
				}
			} else {
				if (rel_time < 412) {
					if (hops < 5) {
						if (hops < 4) {
							w10 = 2.7687201;
						} else {
							w10 = 2.6615114;
						}
					} else {
						w10 = 3.4910383;
					}
				} else {
					if (rel_time < 652) {
						if (hops < 4) {
							w10 = 5.13669;
						} else {
							w10 = 5.613895;
						}
					} else {
						if (rel_time < 1867) {
							w10 = 3.6794922;
						} else {
							w10 = 4.3538847;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 4) {
					if (hops < 2) {
						w10 = 5.183354;
					} else {
						w10 = 5.3151593;
					}
				} else {
					w10 = 5.521502;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 663) {
							w10 = 4.58365;
						} else {
							w10 = 4.499402;
						}
					} else {
						if (rel_time < 1284) {
							w10 = 4.642484;
						} else {
							w10 = 4.5588937;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 663) {
							w10 = 4.578219;
						} else {
							w10 = 4.672675;
						}
					} else {
						w10 = 4.798663;
					}
				}
			}
		}
	}
	float w11;
	if (size < 45) {
		if (rel_time < 9171) {
			if (rel_time < 9135) {
				if (rel_time < 1324) {
					if (rel_time < 64) {
						if (hops < 3) {
							w11 = 1.8045454;
						} else {
							w11 = 1.9712752;
						}
					} else {
						if (hops < 3) {
							w11 = 1.0877209;
						} else {
							w11 = 1.2472111;
						}
					}
				} else {
					if (rel_time < 1928) {
						if (hops < 4) {
							w11 = 7.7282996;
						} else {
							w11 = 8.57624;
						}
					} else {
						if (rel_time < 3096) {
							w11 = -0.632199;
						} else {
							w11 = 2.0504184;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w11 = 5.9636717;
					} else {
						w11 = 7.1834493;
					}
				} else {
					if (hops < 5) {
						w11 = 10.7145815;
					} else {
						w11 = 4.67729;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 9731) {
					if (hops < 3) {
						if (hops < 2) {
							w11 = -1.1656954;
						} else {
							w11 = -0.6370083;
						}
					} else {
						w11 = -1.4686618;
					}
				} else {
					if (rel_time < 9776) {
						if (rel_time < 9745) {
							w11 = 0.6769927;
						} else {
							w11 = 4.6000037;
						}
					} else {
						if (rel_time < 10336) {
							w11 = -1.0379548;
						} else {
							w11 = 0.43809178;
						}
					}
				}
			} else {
				if (rel_time < 9731) {
					if (hops < 5) {
						w11 = -0.9734643;
					} else {
						w11 = 1.2746229;
					}
				} else {
					if (rel_time < 9776) {
						if (rel_time < 9745) {
							w11 = 1.6800838;
						} else {
							w11 = 8.00056;
						}
					} else {
						if (rel_time < 10336) {
							w11 = -0.49650395;
						} else {
							w11 = 1.5161034;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 2) {
				if (prod == 4) {
					if (rel_time < 1950) {
						if (cons == 5) {
							w11 = 1.81045;
						} else {
							w11 = 2.9088144;
						}
					} else {
						if (prod == 0) {
							w11 = 2.97288;
						} else {
							w11 = 2.1268458;
						}
					}
				} else {
					if (rel_time < 1857) {
						if (rel_time < 652) {
							w11 = 3.207145;
						} else {
							w11 = 3.5966442;
						}
					} else {
						if (rel_time < 10909) {
							w11 = 1.8018668;
						} else {
							w11 = 2.2830038;
						}
					}
				}
			} else {
				if (prod == 3) {
					if (rel_time < 754) {
						if (rel_time < 412) {
							w11 = 2.201121;
						} else {
							w11 = 3.6940207;
						}
					} else {
						if (rel_time < 831) {
							w11 = 1.4760244;
						} else {
							w11 = 2.7638316;
						}
					}
				} else {
					if (rel_time < 1867) {
						if (rel_time < 661) {
							w11 = 2.5392232;
						} else {
							w11 = 0.44126606;
						}
					} else {
						if (hops < 4) {
							w11 = 3.5740232;
						} else {
							w11 = 4.3324704;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 4) {
					if (hops < 2) {
						w11 = 3.6285958;
					} else {
						w11 = 3.7207792;
					}
				} else {
					if (hops < 5) {
						w11 = 3.8177025;
					} else {
						w11 = 3.9952352;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 663) {
							w11 = 3.2087798;
						} else {
							w11 = 3.149644;
						}
					} else {
						if (rel_time < 663) {
							w11 = 3.1570206;
						} else {
							w11 = 3.2303374;
						}
					}
				} else {
					if (rel_time < 1284) {
						w11 = 3.477617;
					} else {
						if (hops < 5) {
							w11 = 3.2315807;
						} else {
							w11 = 3.328246;
						}
					}
				}
			}
		}
	}
	float w12;
	if (size < 45) {
		if (rel_time < 3740) {
			if (rel_time < 3703) {
				if (rel_time < 3135) {
					if (rel_time < 3096) {
						if (rel_time < 2532) {
							w12 = 1.2759812;
						} else {
							w12 = -3.8302243;
						}
					} else {
						if (hops < 5) {
							w12 = 24.48059;
						} else {
							w12 = 3.8074825;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w12 = -7.012934;
						} else {
							w12 = -4.449464;
						}
					} else {
						if (hops < 5) {
							w12 = -0.46623114;
						} else {
							w12 = -3.0208306;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w12 = 35.57959;
					} else {
						if (hops < 4) {
							w12 = 45.989296;
						} else {
							w12 = 34.489697;
						}
					}
				} else {
					w12 = 22.624321;
				}
			}
		} else {
			if (rel_time < 4301) {
				if (hops < 3) {
					if (hops < 2) {
						w12 = -9.171964;
					} else {
						w12 = -8.364829;
					}
				} else {
					if (hops < 4) {
						w12 = -7.4245534;
					} else {
						if (hops < 5) {
							w12 = -6.3156414;
						} else {
							w12 = -5.1534743;
						}
					}
				}
			} else {
				if (rel_time < 4341) {
					if (hops < 2) {
						w12 = 2.9209366;
					} else {
						if (hops < 5) {
							w12 = 6.1779714;
						} else {
							w12 = 3.0627306;
						}
					}
				} else {
					if (rel_time < 5510) {
						if (rel_time < 4945) {
							w12 = 1.0501834;
						} else {
							w12 = -4.265781;
						}
					} else {
						if (rel_time < 5549) {
							w12 = 10.369608;
						} else {
							w12 = 0.6438148;
						}
					}
				}
			}
		}
	} else {
		if (prod == 4) {
			if (prod == 0) {
				if (rel_time < 1867) {
					if (rel_time < 754) {
						if (size < 77) {
							w12 = 1.6663204;
						} else {
							w12 = 2.294642;
						}
					} else {
						if (prod == 2) {
							w12 = 0.90557015;
						} else {
							w12 = 3.0456421;
						}
					}
				} else {
					if (hops < 4) {
						if (prod == 2) {
							w12 = 2.348377;
						} else {
							w12 = 1.9661632;
						}
					} else {
						if (size < 77) {
							w12 = 3.4474647;
						} else {
							w12 = 2.5624158;
						}
					}
				}
			} else {
				if (rel_time < 2553) {
					if (hops < 3) {
						if (rel_time < 583) {
							w12 = 2.0180917;
						} else {
							w12 = 1.8600482;
						}
					} else {
						if (rel_time < 583) {
							w12 = 2.8563793;
						} else {
							w12 = 2.1573484;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w12 = 1.4720054;
						} else {
							w12 = 1.5278001;
						}
					} else {
						if (hops < 5) {
							w12 = 0.9587955;
						} else {
							w12 = 1.2047703;
						}
					}
				}
			}
		} else {
			if (rel_time < 1857) {
				if (rel_time < 652) {
					if (hops < 2) {
						w12 = 2.2451499;
					} else {
						if (hops < 5) {
							w12 = 2.4627109;
						} else {
							w12 = 2.712886;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1791) {
							w12 = 2.737928;
						} else {
							w12 = 2.4965923;
						}
					} else {
						w12 = 3.6718545;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 11455) {
						if (hops < 4) {
							w12 = 1.2421346;
						} else {
							w12 = 1.3400943;
						}
					} else {
						if (rel_time < 11516) {
							w12 = 5.064388;
						} else {
							w12 = 1.2258861;
						}
					}
				} else {
					w12 = 2.0819328;
				}
			}
		}
	}
	float w13;
	if (size < 45) {
		if (hops < 2) {
			if (rel_time < 1928) {
				if (rel_time < 1324) {
					if (rel_time < 64) {
						w13 = 0.8505666;
					} else {
						if (rel_time < 832) {
							w13 = 0.35565645;
						} else {
							w13 = 0.12189181;
						}
					}
				} else {
					w13 = 4.778091;
				}
			} else {
				if (rel_time < 3096) {
					if (rel_time < 2532) {
						if (rel_time < 2491) {
							w13 = -3.5795097;
						} else {
							w13 = 0.505826;
						}
					} else {
						w13 = -5.201737;
					}
				} else {
					if (rel_time < 3135) {
						w13 = 17.16813;
					} else {
						if (rel_time < 3703) {
							w13 = -4.911063;
						} else {
							w13 = 0.24337;
						}
					}
				}
			}
		} else {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 5) {
						if (hops < 4) {
							w13 = 0.9247083;
						} else {
							w13 = 1.009285;
						}
					} else {
						w13 = 1.1754545;
					}
				} else {
					if (rel_time < 952) {
						if (hops < 5) {
							w13 = 0.4685841;
						} else {
							w13 = 0.70121956;
						}
					} else {
						if (hops < 5) {
							w13 = 0.21733052;
						} else {
							w13 = 0.5958973;
						}
					}
				}
			} else {
				if (rel_time < 3135) {
					if (rel_time < 3096) {
						if (rel_time < 2532) {
							w13 = 4.014104;
						} else {
							w13 = -1.4522269;
						}
					} else {
						if (hops < 5) {
							w13 = 17.102602;
						} else {
							w13 = 2.6863866;
						}
					}
				} else {
					if (rel_time < 3703) {
						if (hops < 3) {
							w13 = -3.1160052;
						} else {
							w13 = -0.54253626;
						}
					} else {
						if (rel_time < 3740) {
							w13 = 29.126745;
						} else {
							w13 = 0.8149094;
						}
					}
				}
			}
		}
	} else {
		if (prod == 4) {
			if (prod == 0) {
				if (rel_time < 1867) {
					if (rel_time < 754) {
						if (prod == 3) {
							w13 = 1.640887;
						} else {
							w13 = 1.0279644;
						}
					} else {
						if (prod == 3) {
							w13 = 0.98104197;
						} else {
							w13 = -0.17881657;
						}
					}
				} else {
					if (hops < 3) {
						if (prod == 2) {
							w13 = 1.5916222;
						} else {
							w13 = 1.337338;
						}
					} else {
						if (size < 77) {
							w13 = 2.2268362;
						} else {
							w13 = 1.7141415;
						}
					}
				}
			} else {
				if (rel_time < 1623) {
					if (hops < 3) {
						if (hops < 2) {
							w13 = 1.3127664;
						} else {
							w13 = 1.4167647;
						}
					} else {
						if (rel_time < 583) {
							w13 = 1.9995807;
						} else {
							w13 = 1.5518352;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2553) {
							w13 = 1.2793825;
						} else {
							w13 = 1.0397999;
						}
					} else {
						if (rel_time < 11280) {
							w13 = 0.7107875;
						} else {
							w13 = 1.0848012;
						}
					}
				}
			}
		} else {
			if (rel_time < 1857) {
				if (rel_time < 652) {
					if (hops < 2) {
						w13 = 1.5717021;
					} else {
						if (hops < 5) {
							w13 = 1.7239617;
						} else {
							w13 = 1.9000041;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w13 = 1.7263043;
						} else {
							w13 = 1.9305819;
						}
					} else {
						w13 = 2.5736198;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 11455) {
						if (hops < 4) {
							w13 = 0.86950433;
						} else {
							w13 = 0.9381138;
						}
					} else {
						if (rel_time < 11516) {
							w13 = 3.5472438;
						} else {
							w13 = 0.8582205;
						}
					}
				} else {
					w13 = 1.4575827;
				}
			}
		}
	}
	float w14;
	if (size < 45) {
		if (hops < 3) {
			if (rel_time < 3740) {
				if (rel_time < 3703) {
					if (rel_time < 3135) {
						if (rel_time < 3096) {
							w14 = 0.44056818;
						} else {
							w14 = 13.22259;
						}
					} else {
						if (hops < 2) {
							w14 = -3.4391503;
						} else {
							w14 = -2.1821723;
						}
					}
				} else {
					if (hops < 2) {
						w14 = 24.88565;
					} else {
						w14 = 18.379547;
					}
				}
			} else {
				if (rel_time < 4301) {
					w14 = -6.271427;
				} else {
					if (rel_time < 4341) {
						if (hops < 2) {
							w14 = 1.9726223;
						} else {
							w14 = 3.9188426;
						}
					} else {
						if (rel_time < 4905) {
							w14 = -4.2140365;
						} else {
							w14 = 0.097805716;
						}
					}
				}
			}
		} else {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 5) {
						if (hops < 4) {
							w14 = 0.6638917;
						} else {
							w14 = 0.7066126;
						}
					} else {
						w14 = 0.8232101;
					}
				} else {
					if (rel_time < 952) {
						if (hops < 5) {
							w14 = 0.34707442;
						} else {
							w14 = 0.4909659;
						}
					} else {
						if (hops < 5) {
							w14 = 0.12908162;
						} else {
							w14 = 0.41811368;
						}
					}
				}
			} else {
				if (rel_time < 6758) {
					if (rel_time < 6724) {
						if (rel_time < 1928) {
							w14 = 3.8556437;
						} else {
							w14 = 1.3901473;
						}
					} else {
						if (hops < 5) {
							w14 = 30.620901;
						} else {
							w14 = 11.59697;
						}
					}
				} else {
					if (rel_time < 7319) {
						if (hops < 5) {
							w14 = -4.191132;
						} else {
							w14 = -0.965115;
						}
					} else {
						if (rel_time < 7358) {
							w14 = 3.8785481;
						} else {
							w14 = 0.43376642;
						}
					}
				}
			}
		}
	} else {
		if (hops < 5) {
			if (rel_time < 334) {
				if (hops < 3) {
					if (hops < 2) {
						w14 = 1.3597304;
					} else {
						w14 = 1.4069345;
					}
				} else {
					if (hops < 4) {
						w14 = 1.4488463;
					} else {
						w14 = 1.4926429;
					}
				}
			} else {
				if (prod == 4) {
					if (size < 77) {
						if (rel_time < 1950) {
							w14 = 0.75243425;
						} else {
							w14 = 0.9589578;
						}
					} else {
						if (rel_time < 661) {
							w14 = 0.7013295;
						} else {
							w14 = 1.0927044;
						}
					}
				} else {
					if (rel_time < 1857) {
						if (rel_time < 652) {
							w14 = 1.1693324;
						} else {
							w14 = 1.301338;
						}
					} else {
						if (rel_time < 11455) {
							w14 = 0.6160351;
						} else {
							w14 = 0.90619385;
						}
					}
				}
			}
		} else {
			if (prod == 3) {
				if (rel_time < 754) {
					if (cons == 5) {
						if (size < 77) {
							w14 = 0.79411495;
						} else {
							w14 = 1.3957254;
						}
					} else {
						if (rel_time < 583) {
							w14 = 2.1315236;
						} else {
							w14 = 2.3863893;
						}
					}
				} else {
					if (rel_time < 831) {
						if (rel_time < 755) {
							w14 = 0.18967068;
						} else {
							w14 = 0.32332778;
						}
					} else {
						if (prod == 1) {
							w14 = 1.0760773;
						} else {
							w14 = 1.8569366;
						}
					}
				}
			} else {
				if (rel_time < 1867) {
					if (rel_time < 1265) {
						w14 = 1.0892572;
					} else {
						w14 = 0.9730555;
					}
				} else {
					if (rel_time < 2471) {
						w14 = 1.9886003;
					} else {
						if (rel_time < 3667) {
							w14 = 2.4094696;
						} else {
							w14 = 2.2024813;
						}
					}
				}
			}
		}
	}
	return (50.0 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14);
}
