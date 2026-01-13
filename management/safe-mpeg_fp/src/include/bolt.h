#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

float bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	float w0;
	if (size < 133) {
		if (rel_time < 1182) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 722) {
						w0 = 37.006702;
					} else {
						w0 = 39.845745;
					}
				} else {
					if (rel_time < 722) {
						w0 = 40.64997;
					} else {
						w0 = 43.457497;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 722) {
						w0 = 43.949615;
					} else {
						w0 = 46.919716;
					}
				} else {
					w0 = 48.456875;
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w0 = -37.07808;
					} else {
						w0 = -33.63161;
					}
				} else {
					if (hops < 4) {
						w0 = -30.093004;
					} else {
						w0 = -26.498564;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1788) {
						if (hops < 2) {
							w0 = -26.281895;
						} else {
							w0 = -22.581589;
						}
					} else {
						if (rel_time < 2393) {
							w0 = -4.908781;
						} else {
							w0 = -15.079335;
						}
					}
				} else {
					if (rel_time < 1788) {
						if (hops < 4) {
							w0 = -19.009985;
						} else {
							w0 = -15.470019;
						}
					} else {
						if (rel_time < 2393) {
							w0 = 1.2056465;
						} else {
							w0 = -8.848655;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 577) {
				if (hops < 2) {
					w0 = 53.967525;
				} else {
					w0 = 57.50849;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 647) {
						w0 = 61.454548;
					} else {
						if (rel_time < 10892) {
							w0 = 65.329956;
						} else {
							w0 = 61.573925;
						}
					}
				} else {
					if (rel_time < 647) {
						w0 = 64.99741;
					} else {
						if (rel_time < 10894) {
							w0 = 68.875206;
						} else {
							w0 = 65.32311;
						}
					}
				}
			}
		} else {
			if (rel_time < 577) {
				w0 = 61.6807;
			} else {
				if (hops < 4) {
					if (rel_time < 10936) {
						if (rel_time < 647) {
							w0 = 68.16278;
						} else {
							w0 = 71.62019;
						}
					} else {
						w0 = 68.047005;
					}
				} else {
					w0 = 74.673225;
				}
			}
		}
	}
	float w1;
	if (size < 133) {
		if (rel_time < 1182) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 722) {
						w1 = 18.519325;
					} else {
						w1 = 19.95794;
					}
				} else {
					if (rel_time < 722) {
						w1 = 20.33988;
					} else {
						w1 = 21.760786;
					}
				}
			} else {
				if (rel_time < 722) {
					w1 = 22.31995;
				} else {
					if (hops < 4) {
						w1 = 23.501078;
					} else {
						w1 = 26.085598;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						if (prod != 1) {
							w1 = -18.698532;
						} else {
							w1 = -18.38631;
						}
					} else {
						if (prod != 1) {
							w1 = -16.928541;
						} else {
							w1 = -16.69871;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 1) {
							w1 = -15.219205;
						} else {
							w1 = -14.878902;
						}
					} else {
						if (prod != 1) {
							w1 = -13.431575;
						} else {
							w1 = -13.050996;
						}
					}
				}
			} else {
				if (rel_time < 12080) {
					if (rel_time < 11475) {
						if (rel_time < 10869) {
							w1 = -5.8329225;
						} else {
							w1 = -15.348558;
						}
					} else {
						if (hops < 2) {
							w1 = 0.71545523;
						} else {
							w1 = 5.010744;
						}
					}
				} else {
					if (hops < 2) {
						w1 = -18.523102;
					} else {
						if (hops < 4) {
							w1 = -14.532206;
						} else {
							w1 = -10.816065;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 577) {
				if (hops < 2) {
					w1 = 27.030445;
				} else {
					w1 = 28.796722;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 647) {
						w1 = 30.780447;
					} else {
						if (rel_time < 1250) {
							w1 = 35.213734;
						} else {
							w1 = 32.410625;
						}
					}
				} else {
					if (rel_time < 647) {
						w1 = 32.5467;
					} else {
						if (rel_time < 1250) {
							w1 = 37.316746;
						} else {
							w1 = 34.169235;
						}
					}
				}
			}
		} else {
			if (rel_time < 577) {
				if (hops < 4) {
					w1 = 29.99882;
				} else {
					w1 = 33.53597;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 10936) {
						if (rel_time < 10331) {
							w1 = 35.544205;
						} else {
							w1 = 38.714287;
						}
					} else {
						w1 = 34.081863;
					}
				} else {
					if (rel_time < 10936) {
						if (rel_time < 647) {
							w1 = 34.438053;
						} else {
							w1 = 37.688866;
						}
					} else {
						w1 = 34.072666;
					}
				}
			}
		}
	}
	float w2;
	if (size < 133) {
		if (rel_time < 1182) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 722) {
						w2 = 9.267648;
					} else {
						w2 = 9.996535;
					}
				} else {
					if (rel_time < 722) {
						w2 = 10.177379;
					} else {
						w2 = 10.896433;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 722) {
						w2 = 10.84409;
					} else {
						w2 = 11.771179;
					}
				} else {
					w2 = 12.472399;
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						if (prod != 1) {
							w2 = -9.350127;
						} else {
							w2 = -9.193983;
						}
					} else {
						if (prod != 1) {
							w2 = -8.464918;
						} else {
							w2 = -8.35;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 1) {
							w2 = -7.610335;
						} else {
							w2 = -7.440131;
						}
					} else {
						if (prod != 1) {
							w2 = -6.71757;
						} else {
							w2 = -6.5273695;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 2999) {
						if (rel_time < 2393) {
							w2 = -5.841758;
						} else {
							w2 = -15.558946;
						}
					} else {
						if (rel_time < 3604) {
							w2 = 3.7121813;
						} else {
							w2 = -6.115488;
						}
					}
				} else {
					if (rel_time < 2999) {
						if (rel_time < 2393) {
							w2 = -2.1927783;
						} else {
							w2 = -11.018242;
						}
					} else {
						if (rel_time < 3604) {
							w2 = 7.669344;
						} else {
							w2 = -2.0510154;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 1809) {
				if (rel_time < 1250) {
					if (rel_time < 647) {
						if (rel_time < 577) {
							w2 = 14.025031;
						} else {
							w2 = 15.904521;
						}
					} else {
						if (hops < 2) {
							w2 = 17.637321;
						} else {
							w2 = 18.68592;
						}
					}
				} else {
					if (hops < 2) {
						w2 = 12.670529;
					} else {
						w2 = 13.6739;
					}
				}
			} else {
				if (rel_time < 2415) {
					if (rel_time < 2414) {
						w2 = 19.167934;
					} else {
						w2 = 20.455288;
					}
				} else {
					if (rel_time < 3066) {
						if (hops < 2) {
							w2 = 12.936966;
						} else {
							w2 = 13.765481;
						}
					} else {
						if (rel_time < 3626) {
							w2 = 20.016186;
						} else {
							w2 = 16.694633;
						}
					}
				}
			}
		} else {
			if (rel_time < 647) {
				if (hops < 4) {
					if (rel_time < 577) {
						w2 = 15.025126;
					} else {
						w2 = 16.39824;
					}
				} else {
					w2 = 17.133953;
				}
			} else {
				if (rel_time < 1250) {
					w2 = 21.291828;
				} else {
					if (rel_time < 1855) {
						w2 = 14.965912;
					} else {
						if (rel_time < 2460) {
							w2 = 21.22311;
						} else {
							w2 = 17.892141;
						}
					}
				}
			}
		}
	}
	float w3;
	if (size < 133) {
		if (rel_time < 1182) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 722) {
						w3 = 4.6378293;
					} else {
						w3 = 5.0070744;
					}
				} else {
					if (rel_time < 722) {
						w3 = 5.092423;
					} else {
						w3 = 5.4562564;
					}
				}
			} else {
				if (rel_time < 722) {
					if (hops < 4) {
						w3 = 5.4268217;
					} else {
						w3 = 5.878677;
					}
				} else {
					if (hops < 4) {
						w3 = 5.895933;
					} else {
						w3 = 6.90065;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1203) {
							w3 = -4.3654175;
						} else {
							w3 = -4.64277;
						}
					} else {
						if (rel_time < 1321) {
							w3 = -4.031525;
						} else {
							w3 = -4.2142334;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1926) {
							w3 = -3.609897;
						} else {
							w3 = -3.7802644;
						}
					} else {
						if (rel_time < 1321) {
							w3 = -3.0557842;
						} else {
							w3 = -3.328544;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1788) {
						if (hops < 3) {
							w3 = -7.3230233;
						} else {
							w3 = -5.515889;
						}
					} else {
						if (rel_time < 12080) {
							w3 = -1.4560733;
						} else {
							w3 = -6.243866;
						}
					}
				} else {
					if (rel_time < 12080) {
						if (rel_time < 1788) {
							w3 = -3.7794619;
						} else {
							w3 = 2.740979;
						}
					} else {
						w3 = -4.4139156;
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 10892) {
				if (rel_time < 10286) {
					if (rel_time < 9681) {
						if (rel_time < 9075) {
							w3 = 7.736427;
						} else {
							w3 = 11.193188;
						}
					} else {
						w3 = 4.9509726;
					}
				} else {
					w3 = 11.196648;
				}
			} else {
				w3 = 6.33007;
			}
		} else {
			if (rel_time < 4277) {
				if (rel_time < 3671) {
					if (rel_time < 3066) {
						if (rel_time < 2460) {
							w3 = 8.735962;
						} else {
							w3 = 6.410133;
						}
					} else {
						if (rel_time < 3626) {
							w3 = 10.549872;
						} else {
							w3 = 12.233116;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w3 = 5.397255;
						} else {
							w3 = 5.7640743;
						}
					} else {
						w3 = 6.4953055;
					}
				}
			} else {
				if (rel_time < 4882) {
					w3 = 12.253849;
				} else {
					if (rel_time < 5488) {
						if (rel_time < 5444) {
							w3 = 5.5582976;
						} else {
							w3 = 6.4788218;
						}
					} else {
						if (rel_time < 6093) {
							w3 = 12.251765;
						} else {
							w3 = 8.764328;
						}
					}
				}
			}
		}
	}
	float w4;
	if (size < 133) {
		if (rel_time < 1182) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 722) {
						w4 = 2.320923;
					} else {
						w4 = 2.5079422;
					}
				} else {
					if (rel_time < 597) {
						w4 = 2.4709468;
					} else {
						w4 = 2.6805952;
					}
				}
			} else {
				if (rel_time < 722) {
					if (hops < 4) {
						w4 = 2.7158093;
					} else {
						w4 = 2.9470606;
					}
				} else {
					if (hops < 4) {
						w4 = 2.9531465;
					} else {
						w4 = 3.4671636;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						if (prod != 1) {
							w4 = -2.3616464;
						} else {
							w4 = -2.2762337;
						}
					} else {
						if (rel_time < 11542) {
							w4 = -2.1118038;
						} else {
							w4 = -1.9913102;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 1) {
							w4 = -1.9245256;
						} else {
							w4 = -1.8394113;
						}
					} else {
						if (rel_time < 11495) {
							w4 = -1.6734086;
						} else {
							w4 = -1.4695312;
						}
					}
				}
			} else {
				if (rel_time < 10264) {
					if (rel_time < 9658) {
						if (rel_time < 9053) {
							w4 = -1.3676817;
						} else {
							w4 = 8.83063;
						}
					} else {
						if (hops < 2) {
							w4 = -11.771921;
						} else {
							w4 = -9.675978;
						}
					}
				} else {
					if (rel_time < 10869) {
						if (hops < 2) {
							w4 = 7.335473;
						} else {
							w4 = 9.322298;
						}
					} else {
						if (rel_time < 11475) {
							w4 = -5.5663705;
						} else {
							w4 = 0.49103135;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 577) {
			if (hops < 4) {
				if (hops < 2) {
					w4 = 2.676687;
				} else {
					w4 = 3.1088417;
				}
			} else {
				w4 = 3.9962285;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 10331) {
					if (rel_time < 9725) {
						if (rel_time < 9681) {
							w4 = 4.1791615;
						} else {
							w4 = 7.800338;
						}
					} else {
						if (rel_time < 10286) {
							w4 = 2.4797611;
						} else {
							w4 = 1.1835783;
						}
					}
				} else {
					if (rel_time < 10936) {
						if (rel_time < 10892) {
							w4 = 5.6080055;
						} else {
							w4 = 7.0604644;
						}
					} else {
						if (rel_time < 11500) {
							w4 = 3.04844;
						} else {
							w4 = 3.764783;
						}
					}
				}
			} else {
				if (rel_time < 10331) {
					if (rel_time < 9725) {
						if (rel_time < 9122) {
							w4 = 5.0557036;
						} else {
							w4 = 8.395453;
						}
					} else {
						w4 = 2.0712774;
					}
				} else {
					if (rel_time < 10936) {
						w4 = 8.395453;
					} else {
						w4 = 3.8749125;
					}
				}
			}
		}
	}
	float w5;
	if (size < 133) {
		if (rel_time < 1182) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 722) {
						w5 = 1.1614639;
					} else {
						w5 = 1.2561826;
					}
				} else {
					if (rel_time < 722) {
						w5 = 1.2621388;
					} else {
						w5 = 1.3938367;
					}
				}
			} else {
				if (rel_time < 722) {
					if (hops < 4) {
						if (rel_time < 597) {
							w5 = 1.4339532;
						} else {
							w5 = 1.284094;
						}
					} else {
						w5 = 1.4773868;
					}
				} else {
					if (hops < 4) {
						w5 = 1.479179;
					} else {
						w5 = 1.7420386;
					}
				}
			}
		} else {
			if (rel_time < 12218) {
				if (prod != 0) {
					if (hops < 3) {
						if (hops < 2) {
							w5 = -1.159167;
						} else {
							w5 = -1.051345;
						}
					} else {
						if (hops < 4) {
							w5 = -0.94080085;
						} else {
							w5 = -0.829093;
						}
					}
				} else {
					if (rel_time < 11475) {
						if (rel_time < 8447) {
							w5 = 0.063177615;
						} else {
							w5 = -1.7535143;
						}
					} else {
						if (hops < 4) {
							w5 = 3.6216483;
						} else {
							w5 = 5.0592785;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w5 = -3.3541145;
					} else {
						w5 = -3.7325985;
					}
				} else {
					if (hops < 4) {
						w5 = -2.9388907;
					} else {
						w5 = -2.4620273;
					}
				}
			}
		}
	} else {
		if (rel_time < 8516) {
			if (rel_time < 7909) {
				if (rel_time < 7304) {
					if (rel_time < 6698) {
						if (rel_time < 6093) {
							w5 = 2.2371595;
						} else {
							w5 = -0.9127955;
						}
					} else {
						if (rel_time < 7258) {
							w5 = 5.2059083;
						} else {
							w5 = 5.721442;
						}
					}
				} else {
					if (rel_time < 7866) {
						w5 = -1.0593622;
					} else {
						if (hops < 4) {
							w5 = -0.7231524;
						} else {
							w5 = -0.4426957;
						}
					}
				}
			} else {
				if (rel_time < 8469) {
					w5 = 5.2318597;
				} else {
					w5 = 5.732206;
				}
			}
		} else {
			if (rel_time < 9122) {
				if (rel_time < 9077) {
					w5 = -1.0402234;
				} else {
					if (rel_time < 9079) {
						w5 = -0.7282982;
					} else {
						w5 = -0.4426957;
					}
				}
			} else {
				if (rel_time < 9725) {
					if (rel_time < 9681) {
						w5 = 3.5203278;
					} else {
						if (hops < 4) {
							w5 = 3.9032583;
						} else {
							w5 = 4.220794;
						}
					}
				} else {
					if (rel_time < 10331) {
						if (rel_time < 10286) {
							w5 = 1.2420381;
						} else {
							w5 = 0.6494204;
						}
					} else {
						if (rel_time < 10936) {
							w5 = 3.3910627;
						} else {
							w5 = 1.6691892;
						}
					}
				}
			}
		}
	}
	float w6;
	if (size < 133) {
		if (hops < 2) {
			if (prod != 0) {
				if (rel_time < 722) {
					w6 = 0.5812464;
				} else {
					if (rel_time < 11495) {
						if (rel_time < 10874) {
							w6 = -0.5770934;
						} else {
							w6 = -0.7838046;
						}
					} else {
						if (rel_time < 12147) {
							w6 = -0.2914061;
						} else {
							w6 = -0.78555393;
						}
					}
				}
			} else {
				if (rel_time < 9053) {
					if (rel_time < 8447) {
						if (rel_time < 7842) {
							w6 = -1.9435347;
						} else {
							w6 = 8.020027;
						}
					} else {
						w6 = -10.183251;
					}
				} else {
					if (rel_time < 9658) {
						w6 = 3.8577366;
					} else {
						if (rel_time < 10264) {
							w6 = -5.021102;
						} else {
							w6 = 0.4076182;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 722) {
					if (hops < 3) {
						if (rel_time < 597) {
							w6 = 0.60708207;
						} else {
							w6 = 0.6559803;
						}
					} else {
						if (hops < 4) {
							w6 = 0.680742;
						} else {
							w6 = 0.7406173;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 12147) {
							w6 = -0.51890314;
						} else {
							w6 = -0.78104657;
						}
					} else {
						if (rel_time < 1203) {
							w6 = -0.2503323;
						} else {
							w6 = -0.46195677;
						}
					}
				}
			} else {
				if (rel_time < 4209) {
					if (rel_time < 3604) {
						if (rel_time < 2999) {
							w6 = -0.27243227;
						} else {
							w6 = 4.9213915;
						}
					} else {
						if (hops < 4) {
							w6 = -9.346233;
						} else {
							w6 = -7.7519383;
						}
					}
				} else {
					if (rel_time < 4815) {
						if (hops < 4) {
							w6 = 9.772948;
						} else {
							w6 = 11.374891;
						}
					} else {
						if (rel_time < 5420) {
							w6 = -8.959003;
						} else {
							w6 = 0.8165913;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1855) {
			if (rel_time < 1250) {
				if (rel_time < 647) {
					if (hops < 2) {
						if (rel_time < 577) {
							w6 = 0.22399813;
						} else {
							w6 = 0.41418976;
						}
					} else {
						if (rel_time < 577) {
							w6 = 0.49623844;
						} else {
							w6 = 0.7395413;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1203) {
							w6 = 1.9260206;
						} else {
							w6 = 1.7616192;
						}
					} else {
						if (hops < 4) {
							w6 = 2.8873763;
						} else {
							w6 = 3.3014495;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1809) {
						w6 = -0.7184789;
					} else {
						w6 = -0.3453385;
					}
				} else {
					w6 = 0.36186957;
				}
			}
		} else {
			if (rel_time < 2460) {
				if (rel_time < 2415) {
					if (rel_time < 2414) {
						w6 = 2.5364194;
					} else {
						w6 = 2.704416;
					}
				} else {
					w6 = 3.3700867;
				}
			} else {
				if (rel_time < 3066) {
					if (hops < 3) {
						if (hops < 2) {
							w6 = -0.5844611;
						} else {
							w6 = 0.48913014;
						}
					} else {
						if (hops < 4) {
							w6 = -0.63559103;
						} else {
							w6 = -0.20869076;
						}
					}
				} else {
					if (rel_time < 3671) {
						if (rel_time < 3626) {
							w6 = 2.1870158;
						} else {
							w6 = 2.8167777;
						}
					} else {
						if (rel_time < 4277) {
							w6 = -0.94531536;
						} else {
							w6 = 1.2149963;
						}
					}
				}
			}
		}
	}
	float w7;
	if (size < 133) {
		if (rel_time < 12218) {
			if (rel_time < 2393) {
				if (rel_time < 1926) {
					if (rel_time < 1182) {
						if (rel_time < 722) {
							w7 = 0.32124928;
						} else {
							w7 = 1.0807992;
						}
					} else {
						if (prod != 0) {
							w7 = -0.21745132;
						} else {
							w7 = -2.2113256;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w7 = 3.843135;
						} else {
							w7 = 4.639633;
						}
					} else {
						if (hops < 4) {
							w7 = 5.196126;
						} else {
							w7 = 6.588122;
						}
					}
				}
			} else {
				if (rel_time < 2999) {
					if (rel_time < 2532) {
						if (rel_time < 2461) {
							w7 = -0.24930935;
						} else {
							w7 = -0.35151297;
						}
					} else {
						if (hops < 3) {
							w7 = -5.116509;
						} else {
							w7 = -3.8127449;
						}
					}
				} else {
					if (rel_time < 6026) {
						if (rel_time < 5559) {
							w7 = -0.4014935;
						} else {
							w7 = 9.362269;
						}
					} else {
						if (rel_time < 6631) {
							w7 = -3.4471302;
						} else {
							w7 = -0.010695902;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w7 = -1.8834416;
				} else {
					w7 = -2.2767413;
				}
			} else {
				if (hops < 4) {
					w7 = -1.8795984;
				} else {
					w7 = -1.6433171;
				}
			}
		}
	} else {
		if (rel_time < 8516) {
			if (rel_time < 7909) {
				if (rel_time < 7304) {
					if (rel_time < 6698) {
						if (rel_time < 6093) {
							w7 = 0.64364237;
						} else {
							w7 = -1.0638261;
						}
					} else {
						if (rel_time < 7258) {
							w7 = 2.000983;
						} else {
							w7 = 2.2556374;
						}
					}
				} else {
					if (rel_time < 7866) {
						w7 = -1.1371058;
					} else {
						if (hops < 4) {
							w7 = -0.9686717;
						} else {
							w7 = -0.8267433;
						}
					}
				}
			} else {
				if (rel_time < 8469) {
					w7 = 2.0140176;
				} else {
					if (rel_time < 8473) {
						if (rel_time < 8471) {
							w7 = 2.3270464;
						} else {
							w7 = 2.1248124;
						}
					} else {
						w7 = 2.4269938;
					}
				}
			}
		} else {
			if (rel_time < 9122) {
				if (rel_time < 9077) {
					w7 = -1.127542;
				} else {
					if (rel_time < 9079) {
						w7 = -0.9712584;
					} else {
						w7 = -0.8267433;
					}
				}
			} else {
				if (rel_time < 9725) {
					if (rel_time < 9681) {
						w7 = 1.1567484;
					} else {
						if (rel_time < 9682) {
							w7 = 1.4499162;
						} else {
							w7 = 1.2951182;
						}
					}
				} else {
					if (rel_time < 10331) {
						if (rel_time < 10286) {
							w7 = 0.015617503;
						} else {
							w7 = -0.28214034;
						}
					} else {
						if (rel_time < 10894) {
							w7 = 1.3500404;
						} else {
							w7 = 0.34654602;
						}
					}
				}
			}
		}
	}
	float w8;
	if (rel_time < 7304) {
		if (rel_time < 6770) {
			if (rel_time < 6164) {
				if (rel_time < 5559) {
					if (rel_time < 4884) {
						if (rel_time < 4348) {
							w8 = -0.11147505;
						} else {
							w8 = 2.3392773;
						}
					} else {
						if (prod != 0) {
							w8 = -0.5556885;
						} else {
							w8 = -5.9103613;
						}
					}
				} else {
					if (rel_time < 6026) {
						if (hops < 4) {
							w8 = 4.513758;
						} else {
							w8 = 6.1615205;
						}
					} else {
						if (size < 133) {
							w8 = 1.4087663;
						} else {
							w8 = 2.2843938;
						}
					}
				}
			} else {
				if (rel_time < 6631) {
					if (hops < 3) {
						w8 = -8.419443;
					} else {
						if (hops < 4) {
							w8 = -7.572136;
						} else {
							w8 = -6.430882;
						}
					}
				} else {
					if (rel_time < 6656) {
						if (rel_time < 6634) {
							w8 = -0.31196147;
						} else {
							w8 = -0.5633319;
						}
					} else {
						if (hops < 4) {
							w8 = -0.14987163;
						} else {
							w8 = 0.037297007;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 7257) {
					if (rel_time < 7237) {
						if (hops < 3) {
							w8 = 0.34236974;
						} else {
							w8 = 0.02592399;
						}
					} else {
						if (rel_time < 7239) {
							w8 = -0.22400652;
						} else {
							w8 = -0.4304477;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 7260) {
							w8 = 1.1036122;
						} else {
							w8 = 0.9982977;
						}
					} else {
						w8 = 1.3107246;
					}
				}
			} else {
				if (hops < 4) {
					w8 = 9.295263;
				} else {
					w8 = 10.861708;
				}
			}
		}
	} else {
		if (rel_time < 7842) {
			if (rel_time < 7375) {
				if (rel_time < 7307) {
					if (rel_time < 7305) {
						if (hops < 2) {
							w8 = -0.43244419;
						} else {
							w8 = -0.27381405;
						}
					} else {
						if (hops < 3) {
							w8 = -0.47210965;
						} else {
							w8 = -0.37640995;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w8 = -0.24347706;
						} else {
							w8 = -0.20295984;
						}
					} else {
						w8 = -0.063709326;
					}
				}
			} else {
				if (hops < 3) {
					w8 = -10.057579;
				} else {
					if (hops < 4) {
						w8 = -9.2223215;
					} else {
						w8 = -7.987073;
					}
				}
			}
		} else {
			if (rel_time < 8447) {
				if (prod != 0) {
					if (rel_time < 7909) {
						if (rel_time < 7845) {
							w8 = -0.27727246;
						} else {
							w8 = -0.52910256;
						}
					} else {
						if (hops < 4) {
							w8 = -0.076029666;
						} else {
							w8 = 0.14602311;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 4.022409;
					} else {
						if (hops < 4) {
							w8 = 9.339017;
						} else {
							w8 = 10.7300005;
						}
					}
				}
			} else {
				if (rel_time < 9053) {
					if (rel_time < 8586) {
						if (size < 133) {
							w8 = -0.30296403;
						} else {
							w8 = 1.0978884;
						}
					} else {
						if (hops < 2) {
							w8 = -5.09527;
						} else {
							w8 = -8.609812;
						}
					}
				} else {
					if (rel_time < 9658) {
						if (prod != 0) {
							w8 = -0.3392513;
						} else {
							w8 = 4.4636383;
						}
					} else {
						if (rel_time < 10264) {
							w8 = -0.9423252;
						} else {
							w8 = 0.11846764;
						}
					}
				}
			}
		}
	}
	float w9;
	if (rel_time < 3671) {
		if (rel_time < 3137) {
			if (rel_time < 2532) {
				if (rel_time < 1926) {
					if (rel_time < 1250) {
						if (rel_time < 1203) {
							w9 = 0.18316545;
						} else {
							w9 = 0.7221629;
						}
					} else {
						if (prod != 0) {
							w9 = -0.19561411;
						} else {
							w9 = -1.0505245;
						}
					}
				} else {
					if (rel_time < 2393) {
						if (hops < 3) {
							w9 = 2.1990707;
						} else {
							w9 = 2.8492842;
						}
					} else {
						if (size < 133) {
							w9 = -0.08729077;
						} else {
							w9 = 1.1087314;
						}
					}
				}
			} else {
				if (rel_time < 2999) {
					if (hops < 4) {
						if (hops < 2) {
							w9 = -2.8358707;
						} else {
							w9 = -2.185847;
						}
					} else {
						w9 = -1.0557641;
					}
				} else {
					if (size < 133) {
						if (rel_time < 3019) {
							w9 = -0.077731945;
						} else {
							w9 = 0.20326434;
						}
					} else {
						if (hops < 3) {
							w9 = -0.2685699;
						} else {
							w9 = -0.53364074;
						}
					}
				}
			}
		} else {
			if (rel_time < 3604) {
				if (hops < 2) {
					w9 = 4.463298;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w9 = 2.2398255;
						} else {
							w9 = 2.7878473;
						}
					} else {
						w9 = 4.0839534;
					}
				}
			} else {
				if (rel_time < 3624) {
					if (hops < 2) {
						if (rel_time < 3605) {
							w9 = -0.3321609;
						} else {
							w9 = 0.011233957;
						}
					} else {
						if (rel_time < 3605) {
							w9 = 0.09664694;
						} else {
							w9 = 0.0153143145;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3626) {
							w9 = 0.8285114;
						} else {
							w9 = 1.0462004;
						}
					} else {
						w9 = 1.4530966;
					}
				}
			}
		}
	} else {
		if (rel_time < 4209) {
			if (prod != 0) {
				if (hops < 2) {
					if (rel_time < 3673) {
						w9 = -0.10748133;
					} else {
						w9 = -0.19683185;
					}
				} else {
					if (rel_time < 3673) {
						if (hops < 3) {
							w9 = -0.09905298;
						} else {
							w9 = -0.015598297;
						}
					} else {
						if (hops < 4) {
							w9 = 0.05423534;
						} else {
							w9 = -0.19585273;
						}
					}
				}
			} else {
				if (hops < 2) {
					w9 = -10.068154;
				} else {
					if (hops < 3) {
						w9 = -4.746973;
					} else {
						if (hops < 4) {
							w9 = -4.0239234;
						} else {
							w9 = -3.63965;
						}
					}
				}
			}
		} else {
			if (rel_time < 4815) {
				if (rel_time < 4348) {
					if (size < 133) {
						if (rel_time < 4231) {
							w9 = -0.078227736;
						} else {
							w9 = 0.092704095;
						}
					} else {
						if (rel_time < 4231) {
							w9 = -2.0739088;
						} else {
							w9 = -0.20245114;
						}
					}
				} else {
					if (hops < 2) {
						w9 = 8.095075;
					} else {
						if (hops < 3) {
							w9 = 3.6985626;
						} else {
							w9 = 4.338269;
						}
					}
				}
			} else {
				if (rel_time < 5444) {
					if (prod != 0) {
						if (rel_time < 5440) {
							w9 = -0.18108779;
						} else {
							w9 = -1.6378032;
						}
					} else {
						if (hops < 2) {
							w9 = -7.106913;
						} else {
							w9 = -1.3288623;
						}
					}
				} else {
					if (rel_time < 6164) {
						if (prod != 0) {
							w9 = 0.7038048;
						} else {
							w9 = 2.3443928;
						}
					} else {
						if (rel_time < 6631) {
							w9 = -3.9988863;
						} else {
							w9 = 0.008511931;
						}
					}
				}
			}
		}
	}
	float w10;
	if (rel_time < 10936) {
		if (rel_time < 10338) {
			if (rel_time < 9797) {
				if (rel_time < 9126) {
					if (rel_time < 8586) {
						if (rel_time < 7981) {
							w10 = -0.01945968;
						} else {
							w10 = 1.0541825;
						}
					} else {
						if (rel_time < 9053) {
							w10 = -3.8198216;
						} else {
							w10 = -0.1810002;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w10 = 0.17143515;
						} else {
							w10 = 1.122017;
						}
					} else {
						if (hops < 2) {
							w10 = -0.29451665;
						} else {
							w10 = 3.215559;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 10288) {
						if (rel_time < 10284) {
							w10 = -0.4259471;
						} else {
							w10 = -0.24504559;
						}
					} else {
						if (hops < 4) {
							w10 = -0.10400624;
						} else {
							w10 = 0.1373768;
						}
					}
				} else {
					if (hops < 2) {
						w10 = -2.0435345;
					} else {
						if (hops < 4) {
							w10 = -4.123161;
						} else {
							w10 = -2.5334074;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 10892) {
					if (rel_time < 10874) {
						if (hops < 4) {
							w10 = -0.21001497;
						} else {
							w10 = -0.37097067;
						}
					} else {
						if (rel_time < 10889) {
							w10 = -0.5050997;
						} else {
							w10 = -0.22743161;
						}
					}
				} else {
					if (rel_time < 10894) {
						w10 = 1.3280238;
					} else {
						if (hops < 4) {
							w10 = 0.025332417;
						} else {
							w10 = 1.6949544;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w10 = 4.287961;
					} else {
						if (hops < 3) {
							w10 = 4.7106686;
						} else {
							w10 = 5.0482073;
						}
					}
				} else {
					w10 = 6.3006105;
				}
			}
		}
	} else {
		if (rel_time < 11475) {
			if (prod != 0) {
				if (rel_time < 10943) {
					if (rel_time < 10941) {
						if (hops < 3) {
							w10 = -0.54023594;
						} else {
							w10 = -0.44734013;
						}
					} else {
						if (hops < 4) {
							w10 = -0.36774924;
						} else {
							w10 = -0.50746596;
						}
					}
				} else {
					if (rel_time < 11008) {
						if (hops < 3) {
							w10 = -0.25882983;
						} else {
							w10 = -0.38986263;
						}
					} else {
						w10 = -0.16641946;
					}
				}
			} else {
				if (hops < 2) {
					w10 = -3.5873237;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w10 = -2.394266;
						} else {
							w10 = -1.6269767;
						}
					} else {
						w10 = -0.42261755;
					}
				}
			}
		} else {
			if (rel_time < 12147) {
				if (prod != 0) {
					if (rel_time < 11495) {
						if (rel_time < 11479) {
							w10 = -0.41943467;
						} else {
							w10 = -0.5681652;
						}
					} else {
						if (rel_time < 12085) {
							w10 = -0.14658594;
						} else {
							w10 = 0.13723639;
						}
					}
				} else {
					if (hops < 2) {
						w10 = 1.8232732;
					} else {
						if (hops < 4) {
							w10 = 1.2199028;
						} else {
							w10 = 2.0778303;
						}
					}
				}
			} else {
				if (rel_time < 12218) {
					if (rel_time < 12152) {
						if (rel_time < 12150) {
							w10 = -0.4717453;
						} else {
							w10 = -0.524576;
						}
					} else {
						if (hops < 4) {
							w10 = -0.38619852;
						} else {
							w10 = 0.13809566;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w10 = -1.006753;
						} else {
							w10 = -1.2034365;
						}
					} else {
						if (hops < 4) {
							w10 = -1.0048262;
						} else {
							w10 = -0.8888368;
						}
					}
				}
			}
		}
	}
	float w11;
	if (rel_time < 7304) {
		if (rel_time < 6770) {
			if (rel_time < 6164) {
				if (rel_time < 5559) {
					if (rel_time < 4882) {
						if (rel_time < 4348) {
							w11 = -0.018224593;
						} else {
							w11 = 0.8892491;
						}
					} else {
						if (prod != 0) {
							w11 = -0.29196048;
						} else {
							w11 = -1.4706882;
						}
					}
				} else {
					if (rel_time < 6026) {
						if (hops < 3) {
							w11 = 0.9194323;
						} else {
							w11 = 1.6046522;
						}
					} else {
						if (size < 133) {
							w11 = 0.36248645;
						} else {
							w11 = 0.8007547;
						}
					}
				}
			} else {
				if (rel_time < 6631) {
					if (hops < 3) {
						if (rel_time < 6167) {
							w11 = -2.253773;
						} else {
							w11 = -2.1220403;
						}
					} else {
						if (hops < 4) {
							w11 = -1.7870635;
						} else {
							w11 = -1.2317282;
						}
					}
				} else {
					if (rel_time < 6654) {
						if (rel_time < 6651) {
							w11 = -0.18350552;
						} else {
							w11 = -0.40068394;
						}
					} else {
						if (hops < 4) {
							w11 = -0.066966385;
						} else {
							w11 = 0.024180066;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 7257) {
					if (rel_time < 7237) {
						if (hops < 3) {
							w11 = 0.17777267;
						} else {
							w11 = 0.01861711;
						}
					} else {
						if (rel_time < 7238) {
							w11 = -0.3747761;
						} else {
							w11 = -0.09016802;
						}
					}
				} else {
					if (rel_time < 7258) {
						w11 = 0.4568452;
					} else {
						if (rel_time < 7260) {
							w11 = 0.64302385;
						} else {
							w11 = 0.5440144;
						}
					}
				}
			} else {
				if (hops < 3) {
					w11 = 4.5052032;
				} else {
					if (hops < 4) {
						w11 = 4.976727;
					} else {
						w11 = 5.4628186;
					}
				}
			}
		}
	} else {
		if (rel_time < 7842) {
			if (rel_time < 7375) {
				if (rel_time < 7307) {
					if (rel_time < 7305) {
						if (hops < 4) {
							w11 = -0.1318035;
						} else {
							w11 = -0.37779692;
						}
					} else {
						if (hops < 3) {
							w11 = -0.23112606;
						} else {
							w11 = -0.18349276;
						}
					}
				} else {
					if (hops < 4) {
						w11 = -0.10317634;
					} else {
						w11 = -0.026988918;
					}
				}
			} else {
				if (hops < 3) {
					w11 = -5.0273514;
				} else {
					if (hops < 4) {
						w11 = -4.613766;
					} else {
						w11 = -4.007557;
					}
				}
			}
		} else {
			if (rel_time < 8447) {
				if (prod != 0) {
					if (rel_time < 7868) {
						if (rel_time < 7845) {
							w11 = -0.13325289;
						} else {
							w11 = -0.26429507;
						}
					} else {
						if (rel_time < 7913) {
							w11 = -0.011132792;
						} else {
							w11 = -0.09366666;
						}
					}
				} else {
					if (hops < 2) {
						w11 = 1.4900144;
					} else {
						if (hops < 3) {
							w11 = 3.9395626;
						} else {
							w11 = 4.5167446;
						}
					}
				}
			} else {
				if (rel_time < 9053) {
					if (rel_time < 8586) {
						if (size < 133) {
							w11 = -0.68272215;
						} else {
							w11 = 0.018132161;
						}
					} else {
						if (hops < 2) {
							w11 = -0.64980257;
						} else {
							w11 = -2.403524;
						}
					}
				} else {
					if (rel_time < 10936) {
						if (rel_time < 10338) {
							w11 = -0.03987573;
						} else {
							w11 = 0.8294467;
						}
					} else {
						if (rel_time < 11475) {
							w11 = -0.6600823;
						} else {
							w11 = -0.05719817;
						}
					}
				}
			}
		}
	}
	float w12;
	if (hops < 4) {
		if (rel_time < 3671) {
			if (rel_time < 3137) {
				if (rel_time < 2532) {
					if (rel_time < 1926) {
						if (rel_time < 1321) {
							w12 = 0.12248711;
						} else {
							w12 = -0.2546905;
						}
					} else {
						if (rel_time < 2393) {
							w12 = 1.1624545;
						} else {
							w12 = 0.15826361;
						}
					}
				} else {
					if (rel_time < 2999) {
						if (hops < 2) {
							w12 = -1.4016023;
						} else {
							w12 = -1.0749533;
						}
					} else {
						if (rel_time < 3066) {
							w12 = -0.10573484;
						} else {
							w12 = 0.10450564;
						}
					}
				}
			} else {
				if (rel_time < 3604) {
					if (hops < 2) {
						w12 = 2.2543948;
					} else {
						if (hops < 3) {
							w12 = 1.1404058;
						} else {
							w12 = 1.415203;
						}
					}
				} else {
					if (rel_time < 3624) {
						if (rel_time < 3606) {
							w12 = 0.032328565;
						} else {
							w12 = -0.05899335;
						}
					} else {
						if (rel_time < 3625) {
							w12 = 0.55744857;
						} else {
							w12 = 0.427161;
						}
					}
				}
			}
		} else {
			if (rel_time < 4209) {
				if (prod != 0) {
					if (hops < 2) {
						if (rel_time < 3673) {
							w12 = -0.035058834;
						} else {
							w12 = -0.08017996;
						}
					} else {
						if (rel_time < 3673) {
							w12 = -0.012033657;
						} else {
							w12 = 0.04598505;
						}
					}
				} else {
					if (hops < 2) {
						w12 = -5.0241027;
					} else {
						if (hops < 3) {
							w12 = -2.3581676;
						} else {
							w12 = -1.9966695;
						}
					}
				}
			} else {
				if (rel_time < 4815) {
					if (rel_time < 4348) {
						if (size < 133) {
							w12 = 0.005831915;
						} else {
							w12 = -0.3821766;
						}
					} else {
						if (hops < 2) {
							w12 = 3.620544;
						} else {
							w12 = 1.4941454;
						}
					}
				} else {
					if (rel_time < 4818) {
						if (rel_time < 4817) {
							w12 = -1.5259018;
						} else {
							w12 = -1.689865;
						}
					} else {
						if (rel_time < 7262) {
							w12 = 0.09284912;
						} else {
							w12 = -0.10393905;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 133) {
				if (rel_time < 4348) {
					if (rel_time < 4212) {
						if (rel_time < 4210) {
							w12 = 0.12519644;
						} else {
							w12 = -0.18849742;
						}
					} else {
						if (rel_time < 4231) {
							w12 = 0.7565337;
						} else {
							w12 = 0.23182186;
						}
					}
				} else {
					if (rel_time < 4884) {
						if (rel_time < 4818) {
							w12 = -1.5624686;
						} else {
							w12 = -0.9928071;
						}
					} else {
						if (rel_time < 6027) {
							w12 = 0.4673535;
						} else {
							w12 = -0.04978298;
						}
					}
				}
			} else {
				if (rel_time < 4882) {
					if (rel_time < 647) {
						if (rel_time < 577) {
							w12 = 0.3129648;
						} else {
							w12 = 0.11862904;
						}
					} else {
						if (rel_time < 1250) {
							w12 = 1.0548285;
						} else {
							w12 = 0.3696093;
						}
					}
				} else {
					if (rel_time < 5488) {
						w12 = -1.2122068;
					} else {
						if (rel_time < 9122) {
							w12 = 0.08133485;
						} else {
							w12 = 0.44243908;
						}
					}
				}
			}
		} else {
			if (rel_time < 12080) {
				if (rel_time < 7842) {
					if (rel_time < 7237) {
						if (rel_time < 6631) {
							w12 = 0.6949717;
						} else {
							w12 = 2.7447278;
						}
					} else {
						w12 = -2.0135474;
					}
				} else {
					if (rel_time < 9658) {
						if (rel_time < 9053) {
							w12 = 1.4053994;
						} else {
							w12 = 3.0251186;
						}
					} else {
						if (rel_time < 10264) {
							w12 = -1.2530625;
						} else {
							w12 = 1.3181214;
						}
					}
				}
			} else {
				if (rel_time < 12221) {
					w12 = -0.24645595;
				} else {
					if (rel_time < 12223) {
						w12 = -0.58082527;
					} else {
						w12 = -0.34151447;
					}
				}
			}
		}
	}
	float w13;
	if (hops < 3) {
		if (rel_time < 3743) {
			if (rel_time < 3137) {
				if (rel_time < 2415) {
					if (rel_time < 1809) {
						if (rel_time < 1321) {
							w13 = 0.0476221;
						} else {
							w13 = -0.3181343;
						}
					} else {
						if (prod != 2) {
							w13 = 0.3729918;
						} else {
							w13 = -0.095024385;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 3020) {
							w13 = -0.13080129;
						} else {
							w13 = 0.0998473;
						}
					} else {
						if (hops < 2) {
							w13 = -0.7020305;
						} else {
							w13 = -0.5765991;
						}
					}
				}
			} else {
				if (rel_time < 3604) {
					if (hops < 2) {
						w13 = 1.129182;
					} else {
						w13 = 0.5710563;
					}
				} else {
					if (size < 133) {
						if (prod != 0) {
							w13 = -0.002476994;
						} else {
							w13 = -1.6180267;
						}
					} else {
						if (rel_time < 3625) {
							w13 = 0.27921373;
						} else {
							w13 = 0.113650165;
						}
					}
				}
			}
		} else {
			if (rel_time < 4209) {
				if (hops < 2) {
					w13 = -2.5163207;
				} else {
					w13 = -1.1799589;
				}
			} else {
				if (rel_time < 4815) {
					if (rel_time < 4348) {
						if (size < 133) {
							w13 = 0.0036829102;
						} else {
							w13 = -0.37344167;
						}
					} else {
						if (hops < 2) {
							w13 = 1.8134588;
						} else {
							w13 = 0.6718139;
						}
					}
				} else {
					if (rel_time < 5443) {
						if (prod != 0) {
							w13 = -0.24115239;
						} else {
							w13 = -1.5831823;
						}
					} else {
						if (rel_time < 7237) {
							w13 = 0.19191258;
						} else {
							w13 = -0.08102339;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 133) {
				if (rel_time < 10338) {
					if (rel_time < 4884) {
						if (rel_time < 4348) {
							w13 = 0.03579039;
						} else {
							w13 = -0.8886802;
						}
					} else {
						if (rel_time < 6164) {
							w13 = 0.23450331;
						} else {
							w13 = -0.015098655;
						}
					}
				} else {
					if (rel_time < 10889) {
						if (rel_time < 10874) {
							w13 = -0.5249359;
						} else {
							w13 = -0.59115624;
						}
					} else {
						if (rel_time < 11475) {
							w13 = 0.17104654;
						} else {
							w13 = -0.09066418;
						}
					}
				}
			} else {
				if (rel_time < 4882) {
					if (rel_time < 647) {
						if (hops < 4) {
							w13 = -0.13461836;
						} else {
							w13 = 0.10877852;
						}
					} else {
						if (rel_time < 1250) {
							w13 = 0.719826;
						} else {
							w13 = 0.1539234;
						}
					}
				} else {
					if (rel_time < 9122) {
						if (rel_time < 6050) {
							w13 = -0.13135466;
						} else {
							w13 = 0.004274927;
						}
					} else {
						if (rel_time < 9725) {
							w13 = 0.5615336;
						} else {
							w13 = 0.03534454;
						}
					}
				}
			}
		} else {
			if (rel_time < 7842) {
				if (rel_time < 7237) {
					if (rel_time < 6631) {
						if (rel_time < 6026) {
							w13 = 0.26573828;
						} else {
							w13 = -0.9488132;
						}
					} else {
						if (hops < 4) {
							w13 = 2.4463916;
						} else {
							w13 = 1.3790468;
						}
					}
				} else {
					if (hops < 4) {
						w13 = -2.2590556;
					} else {
						w13 = -1.0116836;
					}
				}
			} else {
				if (rel_time < 8447) {
					if (hops < 4) {
						w13 = 2.177976;
					} else {
						w13 = 1.9262904;
					}
				} else {
					if (rel_time < 9053) {
						if (hops < 4) {
							w13 = -0.94171435;
						} else {
							w13 = -0.52088714;
						}
					} else {
						if (rel_time < 9658) {
							w13 = 1.6465051;
						} else {
							w13 = 0.15623257;
						}
					}
				}
			}
		}
	}
	float w14;
	if (rel_time < 12218) {
		if (rel_time < 10338) {
			if (rel_time < 9797) {
				if (rel_time < 9122) {
					if (rel_time < 8473) {
						if (rel_time < 7981) {
							w14 = -0.021909392;
						} else {
							w14 = 0.41628563;
						}
					} else {
						if (prod != 0) {
							w14 = -0.13757421;
						} else {
							w14 = -0.79666406;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w14 = 0.19408073;
						} else {
							w14 = 0.5275883;
						}
					} else {
						if (hops < 2) {
							w14 = -0.03533022;
						} else {
							w14 = 1.0412166;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 10284) {
						if (rel_time < 10268) {
							w14 = -0.008290779;
						} else {
							w14 = -0.29191035;
						}
					} else {
						if (hops < 2) {
							w14 = 0.12335541;
						} else {
							w14 = -0.025822291;
						}
					}
				} else {
					if (hops < 2) {
						w14 = -0.9113761;
					} else {
						if (hops < 3) {
							w14 = -2.3132486;
						} else {
							w14 = -1.3904928;
						}
					}
				}
			}
		} else {
			if (rel_time < 10869) {
				if (prod != 0) {
					if (hops < 3) {
						w14 = -0.48101276;
					} else {
						w14 = -0.17907104;
					}
				} else {
					if (hops < 2) {
						w14 = 1.8260553;
					} else {
						w14 = 2.0575;
					}
				}
			} else {
				if (rel_time < 11495) {
					if (prod != 0) {
						if (rel_time < 10892) {
							w14 = -0.4015937;
						} else {
							w14 = 0.037276488;
						}
					} else {
						if (hops < 2) {
							w14 = -1.3750389;
						} else {
							w14 = -0.6513602;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w14 = -0.03051105;
						} else {
							w14 = 0.1395778;
						}
					} else {
						if (hops < 2) {
							w14 = 1.0340767;
						} else {
							w14 = 0.62994295;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (hops < 2) {
				if (rel_time < 12227) {
					w14 = -0.37166542;
				} else {
					w14 = -0.6863907;
				}
			} else {
				if (rel_time < 12223) {
					w14 = -0.527858;
				} else {
					w14 = -0.4318911;
				}
			}
		} else {
			if (rel_time < 12221) {
				w14 = -0.2020904;
			} else {
				if (rel_time < 12223) {
					w14 = -0.370985;
				} else {
					w14 = -0.25046346;
				}
			}
		}
	}
	float w15;
	if (rel_time < 7375) {
		if (rel_time < 6770) {
			if (rel_time < 6164) {
				if (rel_time < 5559) {
					if (rel_time < 4882) {
						if (rel_time < 4818) {
							w15 = 0.005497291;
						} else {
							w15 = 0.5786026;
						}
					} else {
						if (hops < 2) {
							w15 = -0.7601381;
						} else {
							w15 = 0.06824486;
						}
					}
				} else {
					if (rel_time < 6047) {
						if (rel_time < 6046) {
							w15 = 0.24069507;
						} else {
							w15 = 1.1246312;
						}
					} else {
						if (rel_time < 6095) {
							w15 = -0.010746687;
						} else {
							w15 = 0.10786386;
						}
					}
				}
			} else {
				if (rel_time < 6631) {
					if (hops < 3) {
						if (hops < 2) {
							w15 = -1.2980573;
						} else {
							w15 = -1.1818558;
						}
					} else {
						w15 = -0.46408954;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 6654) {
							w15 = -0.2981195;
						} else {
							w15 = -0.16874026;
						}
					} else {
						if (hops < 4) {
							w15 = -0.063914225;
						} else {
							w15 = 0.036143728;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 7238) {
						if (hops < 4) {
							w15 = -0.16901073;
						} else {
							w15 = 0.13010661;
						}
					} else {
						if (rel_time < 7239) {
							w15 = 0.08770004;
						} else {
							w15 = -0.036416233;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 7260) {
							w15 = 0.28433535;
						} else {
							w15 = 0.19642234;
						}
					} else {
						w15 = 0.36222956;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w15 = 2.032692;
					} else {
						w15 = 2.1957374;
					}
				} else {
					if (hops < 4) {
						w15 = 1.2362723;
					} else {
						w15 = 0.7037985;
					}
				}
			}
		}
	} else {
		if (rel_time < 7842) {
			if (hops < 3) {
				if (hops < 2) {
					w15 = -2.5453815;
				} else {
					w15 = -2.2973578;
				}
			} else {
				if (hops < 4) {
					w15 = -1.1205875;
				} else {
					if (rel_time < 7378) {
						w15 = -0.45183995;
					} else {
						w15 = -0.60255253;
					}
				}
			}
		} else {
			if (rel_time < 8447) {
				if (prod != 0) {
					if (rel_time < 7909) {
						if (rel_time < 7845) {
							w15 = 0.020503042;
						} else {
							w15 = -0.049093794;
						}
					} else {
						if (rel_time < 7911) {
							w15 = 0.11057268;
						} else {
							w15 = 0.06686624;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 7984) {
							w15 = 0.60220146;
						} else {
							w15 = 0.67911416;
						}
					} else {
						if (hops < 3) {
							w15 = 1.8578355;
						} else {
							w15 = 0.85351956;
						}
					}
				}
			} else {
				if (rel_time < 9053) {
					if (size < 133) {
						if (hops < 2) {
							w15 = -0.16822894;
						} else {
							w15 = -0.42977998;
						}
					} else {
						if (rel_time < 8473) {
							w15 = -0.1327055;
						} else {
							w15 = 0.16261828;
						}
					}
				} else {
					if (rel_time < 9682) {
						if (rel_time < 9079) {
							w15 = -0.034288418;
						} else {
							w15 = 0.25828725;
						}
					} else {
						if (rel_time < 10264) {
							w15 = -0.31624725;
						} else {
							w15 = 0.032068342;
						}
					}
				}
			}
		}
	}
	float w16;
	if (rel_time < 3671) {
		if (rel_time < 3137) {
			if (rel_time < 2460) {
				if (rel_time < 1926) {
					if (rel_time < 1250) {
						if (prod != 0) {
							w16 = -0.0056596;
						} else {
							w16 = 0.37617186;
						}
					} else {
						if (prod != 0) {
							w16 = 0.004497981;
						} else {
							w16 = -0.37195456;
						}
					}
				} else {
					if (prod != 2) {
						if (hops < 4) {
							w16 = 0.36975637;
						} else {
							w16 = 1.0931543;
						}
					} else {
						if (hops < 2) {
							w16 = -0.10556886;
						} else {
							w16 = -0.014883219;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 2532) {
							w16 = -0.0907126;
						} else {
							w16 = 0.050800167;
						}
					} else {
						if (hops < 3) {
							w16 = -0.049888648;
						} else {
							w16 = -0.3205253;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w16 = -0.34344047;
						} else {
							w16 = -0.28052765;
						}
					} else {
						if (hops < 4) {
							w16 = -0.61530733;
						} else {
							w16 = -0.9815126;
						}
					}
				}
			}
		} else {
			if (rel_time < 3604) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 0.57376504;
						} else {
							w16 = 0.29415208;
						}
					} else {
						if (rel_time < 3138) {
							w16 = 0.6444902;
						} else {
							w16 = 0.5590947;
						}
					}
				} else {
					w16 = 1.6008861;
				}
			} else {
				if (rel_time < 3626) {
					if (rel_time < 3624) {
						if (hops < 2) {
							w16 = -0.010303424;
						} else {
							w16 = 0.023097264;
						}
					} else {
						if (rel_time < 3625) {
							w16 = 0.14803238;
						} else {
							w16 = 0.06510747;
						}
					}
				} else {
					if (hops < 4) {
						w16 = 0.260959;
					} else {
						w16 = 0.49710518;
					}
				}
			}
		}
	} else {
		if (rel_time < 4209) {
			if (prod != 0) {
				if (hops < 4) {
					w16 = -0.0020545565;
				} else {
					if (rel_time < 3672) {
						w16 = 0.035113417;
					} else {
						w16 = -0.13170281;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w16 = -1.254715;
					} else {
						if (hops < 3) {
							w16 = -0.5822444;
						} else {
							w16 = -1.1245477;
						}
					}
				} else {
					w16 = -2.2797697;
				}
			}
		} else {
			if (rel_time < 4815) {
				if (rel_time < 4348) {
					if (hops < 2) {
						if (size < 133) {
							w16 = -0.0063122106;
						} else {
							w16 = -0.6345698;
						}
					} else {
						if (rel_time < 4210) {
							w16 = 0.3534199;
						} else {
							w16 = 0.029610166;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w16 = 0.9165117;
						} else {
							w16 = 0.5127945;
						}
					} else {
						w16 = 1.6898836;
					}
				}
			} else {
				if (rel_time < 4818) {
					if (hops < 3) {
						if (rel_time < 4816) {
							w16 = -0.53212297;
						} else {
							w16 = -0.717134;
						}
					} else {
						if (rel_time < 4817) {
							w16 = -0.2826301;
						} else {
							w16 = -0.4960487;
						}
					}
				} else {
					if (rel_time < 4836) {
						if (size < 133) {
							w16 = -1.7272696;
						} else {
							w16 = 1.3892478;
						}
					} else {
						if (rel_time < 4884) {
							w16 = -0.27656227;
						} else {
							w16 = 0.0009299072;
						}
					}
				}
			}
		}
	}
	float w17;
	if (rel_time < 12147) {
		if (rel_time < 11613) {
			if (rel_time < 10869) {
				if (rel_time < 10338) {
					if (rel_time < 9797) {
						if (rel_time < 9192) {
							w17 = -0.0047504776;
						} else {
							w17 = 0.1739736;
						}
					} else {
						if (prod != 0) {
							w17 = -0.030040221;
						} else {
							w17 = -0.6271326;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 3) {
							w17 = -0.2594183;
						} else {
							w17 = -0.10783844;
						}
					} else {
						if (hops < 2) {
							w17 = 0.8981873;
						} else {
							w17 = 1.0129937;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 10892) {
						if (hops < 3) {
							w17 = -0.26791063;
						} else {
							w17 = -0.09403257;
						}
					} else {
						if (rel_time < 10894) {
							w17 = 0.30813974;
						} else {
							w17 = -0.011661178;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w17 = -0.7051693;
						} else {
							w17 = -0.46824732;
						}
					} else {
						if (hops < 4) {
							w17 = -0.20290917;
						} else {
							w17 = -0.3097978;
						}
					}
				}
			}
		} else {
			if (rel_time < 12080) {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 11619) {
							w17 = 0.47842747;
						} else {
							w17 = 0.644626;
						}
					} else {
						if (hops < 3) {
							w17 = 0.22532073;
						} else {
							w17 = 0.48950282;
						}
					}
				} else {
					if (rel_time < 11619) {
						w17 = -0.00045166016;
					} else {
						w17 = 0.32332358;
					}
				}
			} else {
				if (rel_time < 12085) {
					if (hops < 4) {
						if (rel_time < 12083) {
							w17 = -0.115827754;
						} else {
							w17 = -0.042908043;
						}
					} else {
						if (rel_time < 12083) {
							w17 = 0.06787206;
						} else {
							w17 = -0.481136;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w17 = 0.06727142;
						} else {
							w17 = 0.40948948;
						}
					} else {
						if (hops < 4) {
							w17 = -0.107721776;
						} else {
							w17 = 0.27036798;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 12218) {
			if (rel_time < 12152) {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 12150) {
							w17 = -0.112642914;
						} else {
							w17 = -0.17641522;
						}
					} else {
						w17 = -0.07178743;
					}
				} else {
					if (rel_time < 12150) {
						w17 = -0.28240645;
					} else {
						w17 = -0.12732111;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w17 = -0.07505055;
						} else {
							w17 = 0.012555319;
						}
					} else {
						w17 = -0.16477004;
					}
				} else {
					w17 = 0.16614597;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 12227) {
						w17 = -0.20263183;
					} else {
						w17 = -0.37600556;
					}
				} else {
					if (rel_time < 12223) {
						if (rel_time < 12221) {
							w17 = -0.2572788;
						} else {
							w17 = -0.2995907;
						}
					} else {
						w17 = -0.23283863;
					}
				}
			} else {
				w17 = -0.16323808;
			}
		}
	}
	float w18;
	if (hops < 3) {
		if (rel_time < 577) {
			w18 = -0.2832767;
		} else {
			if (rel_time < 1182) {
				if (rel_time < 722) {
					if (size < 133) {
						if (hops < 2) {
							w18 = 0.041856624;
						} else {
							w18 = 0.06717272;
						}
					} else {
						if (hops < 2) {
							w18 = -0.20226507;
						} else {
							w18 = 0.012855969;
						}
					}
				} else {
					if (hops < 2) {
						w18 = 0.7807636;
					} else {
						w18 = 0.0152272815;
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 5440) {
						if (rel_time < 4884) {
							w18 = -0.0098154;
						} else {
							w18 = 0.6207827;
						}
					} else {
						if (rel_time < 5442) {
							w18 = -1.4212008;
						} else {
							w18 = -0.009659162;
						}
					}
				} else {
					if (rel_time < 7842) {
						if (rel_time < 7237) {
							w18 = -0.021970611;
						} else {
							w18 = -1.2061946;
						}
					} else {
						if (rel_time < 8447) {
							w18 = 0.6534863;
						} else {
							w18 = -0.056851916;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 2460) {
				if (rel_time < 2395) {
					if (rel_time < 1808) {
						if (rel_time < 1203) {
							w18 = 0.011969231;
						} else {
							w18 = 0.14333038;
						}
					} else {
						if (prod != 1) {
							w18 = -0.15958871;
						} else {
							w18 = 0.19155695;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2415) {
							w18 = 0.2332716;
						} else {
							w18 = 0.5745605;
						}
					} else {
						if (rel_time < 2413) {
							w18 = 0.581293;
						} else {
							w18 = 0.09128462;
						}
					}
				}
			} else {
				if (rel_time < 11495) {
					if (rel_time < 10874) {
						if (rel_time < 3066) {
							w18 = -0.05592217;
						} else {
							w18 = -0.0003363879;
						}
					} else {
						if (size < 133) {
							w18 = -0.030596077;
						} else {
							w18 = -0.26123598;
						}
					}
				} else {
					if (rel_time < 11542) {
						if (hops < 4) {
							w18 = 0.26533303;
						} else {
							w18 = 0.062206395;
						}
					} else {
						if (rel_time < 11613) {
							w18 = 0.07136316;
						} else {
							w18 = -0.039448835;
						}
					}
				}
			}
		} else {
			if (rel_time < 4209) {
				if (rel_time < 3604) {
					if (rel_time < 2999) {
						if (rel_time < 2393) {
							w18 = 0.15128021;
						} else {
							w18 = -0.35527134;
						}
					} else {
						if (hops < 4) {
							w18 = 0.29563633;
						} else {
							w18 = 0.8067139;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3744) {
							w18 = -0.5288082;
						} else {
							w18 = -0.5966867;
						}
					} else {
						w18 = -1.1430688;
					}
				}
			} else {
				if (rel_time < 6026) {
					if (hops < 4) {
						if (rel_time < 4815) {
							w18 = 0.4587265;
						} else {
							w18 = 0.20736879;
						}
					} else {
						if (rel_time < 5420) {
							w18 = 0.9198947;
						} else {
							w18 = 0.5556081;
						}
					}
				} else {
					if (rel_time < 6631) {
						if (rel_time < 6166) {
							w18 = -0.19896063;
						} else {
							w18 = -0.24489293;
						}
					} else {
						if (rel_time < 7237) {
							w18 = 0.5515069;
						} else {
							w18 = 0.0538845;
						}
					}
				}
			}
		}
	}
	float w19;
	if (prod != 2) {
		if (rel_time < 6770) {
			if (rel_time < 6164) {
				if (rel_time < 5488) {
					if (rel_time < 4882) {
						if (rel_time < 4348) {
							w19 = -0.008586335;
						} else {
							w19 = 0.32449302;
						}
					} else {
						if (hops < 2) {
							w19 = -0.7249833;
						} else {
							w19 = -0.07538893;
						}
					}
				} else {
					if (rel_time < 6047) {
						if (hops < 2) {
							w19 = 0.41393352;
						} else {
							w19 = 0.15404241;
						}
					} else {
						if (hops < 4) {
							w19 = 0.0015682068;
						} else {
							w19 = 0.104909204;
						}
					}
				}
			} else {
				if (rel_time < 6631) {
					if (hops < 3) {
						if (rel_time < 6167) {
							w19 = -0.63043743;
						} else {
							w19 = -0.564793;
						}
					} else {
						w19 = -0.11549857;
					}
				} else {
					if (rel_time < 6654) {
						w19 = -0.1761317;
					} else {
						if (hops < 3) {
							w19 = -0.07768703;
						} else {
							w19 = -0.020760506;
						}
					}
				}
			}
		} else {
			if (rel_time < 7237) {
				if (hops < 3) {
					if (hops < 2) {
						w19 = 1.03101;
					} else {
						if (rel_time < 6773) {
							w19 = 1.160133;
						} else {
							w19 = 0.9798161;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 6773) {
							w19 = 0.32054603;
						} else {
							w19 = 0.40752158;
						}
					} else {
						if (rel_time < 6771) {
							w19 = 0.14382485;
						} else {
							w19 = 0.054179013;
						}
					}
				}
			} else {
				if (rel_time < 7842) {
					if (rel_time < 7375) {
						if (rel_time < 7304) {
							w19 = 0.13830537;
						} else {
							w19 = 0.03476857;
						}
					} else {
						if (hops < 4) {
							w19 = -0.5984813;
						} else {
							w19 = -0.27618468;
						}
					}
				} else {
					if (rel_time < 8447) {
						if (prod != 0) {
							w19 = 0.009015231;
						} else {
							w19 = 0.3560268;
						}
					} else {
						if (rel_time < 9079) {
							w19 = -0.11119018;
						} else {
							w19 = 0.036631826;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4211) {
			if (rel_time < 1203) {
				if (rel_time < 597) {
					if (hops < 3) {
						w19 = 0.02212326;
					} else {
						if (hops < 4) {
							w19 = 0.12965415;
						} else {
							w19 = 0.06486473;
						}
					}
				} else {
					if (rel_time < 1183) {
						if (hops < 2) {
							w19 = -0.03621454;
						} else {
							w19 = -0.17128968;
						}
					} else {
						if (hops < 2) {
							w19 = -0.17155543;
						} else {
							w19 = -0.06649275;
						}
					}
				}
			} else {
				if (rel_time < 1808) {
					if (hops < 3) {
						if (hops < 2) {
							w19 = 0.31770176;
						} else {
							w19 = 0.21164936;
						}
					} else {
						if (rel_time < 1789) {
							w19 = 0.083232544;
						} else {
							w19 = 0.22662225;
						}
					}
				} else {
					if (rel_time < 3000) {
						if (rel_time < 2413) {
							w19 = 0.0063700336;
						} else {
							w19 = 0.13848403;
						}
					} else {
						if (rel_time < 3019) {
							w19 = -0.08365631;
						} else {
							w19 = 0.01870093;
						}
					}
				}
			}
		} else {
			if (rel_time < 4836) {
				if (rel_time < 4818) {
					if (hops < 3) {
						if (rel_time < 4816) {
							w19 = -0.24602821;
						} else {
							w19 = -0.3517099;
						}
					} else {
						if (rel_time < 4817) {
							w19 = -0.12111127;
						} else {
							w19 = -0.24696042;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w19 = -1.1074501;
						} else {
							w19 = -0.8613051;
						}
					} else {
						w19 = 0.49549502;
					}
				}
			} else {
				if (rel_time < 5440) {
					if (hops < 2) {
						if (rel_time < 5421) {
							w19 = 0.24754563;
						} else {
							w19 = 0.5107454;
						}
					} else {
						if (rel_time < 5422) {
							w19 = 0.35296702;
						} else {
							w19 = -0.018429982;
						}
					}
				} else {
					if (rel_time < 12085) {
						if (rel_time < 9662) {
							w19 = -0.040720336;
						} else {
							w19 = -0.09297773;
						}
					} else {
						if (hops < 3) {
							w19 = 0.13772437;
						} else {
							w19 = 0.028111903;
						}
					}
				}
			}
		}
	}
	float w20;
	if (rel_time < 12147) {
		if (rel_time < 11613) {
			if (rel_time < 11008) {
				if (rel_time < 10338) {
					if (rel_time < 9797) {
						if (rel_time < 9192) {
							w20 = -0.0026031644;
						} else {
							w20 = 0.0852854;
						}
					} else {
						if (prod != 0) {
							w20 = -0.008199206;
						} else {
							w20 = -0.32481202;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 10936) {
							w20 = -0.053113684;
						} else {
							w20 = 0.10729248;
						}
					} else {
						if (rel_time < 10869) {
							w20 = 0.47996122;
						} else {
							w20 = -0.46440887;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11475) {
						if (hops < 3) {
							w20 = 0.34915245;
						} else {
							w20 = 0.2461271;
						}
					} else {
						if (hops < 3) {
							w20 = -0.07443513;
						} else {
							w20 = 0.019112244;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11013) {
							w20 = -0.35249847;
						} else {
							w20 = -0.23364559;
						}
					} else {
						if (hops < 3) {
							w20 = -0.22437537;
						} else {
							w20 = -0.16324483;
						}
					}
				}
			}
		} else {
			if (rel_time < 12080) {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 11619) {
							w20 = 0.24976626;
						} else {
							w20 = 0.3365089;
						}
					} else {
						if (hops < 3) {
							w20 = 0.12290243;
						} else {
							w20 = 0.20000395;
						}
					}
				} else {
					if (rel_time < 11619) {
						w20 = -0.045270387;
					} else {
						w20 = 0.15089925;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 12083) {
						w20 = -0.36604133;
					} else {
						if (rel_time < 12085) {
							w20 = 0.2194935;
						} else {
							w20 = -0.029946914;
						}
					}
				} else {
					if (rel_time < 12083) {
						if (hops < 3) {
							w20 = 0.33859056;
						} else {
							w20 = -0.087808736;
						}
					} else {
						if (rel_time < 12085) {
							w20 = -0.09653366;
						} else {
							w20 = 0.08540913;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 12218) {
			if (rel_time < 12152) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 12150) {
							w20 = -0.08990932;
						} else {
							w20 = -0.041345544;
						}
					} else {
						if (rel_time < 12150) {
							w20 = -0.049529158;
						} else {
							w20 = -0.14717793;
						}
					}
				} else {
					if (hops < 4) {
						w20 = -0.034600295;
					} else {
						w20 = -0.09977539;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w20 = -0.051105466;
						} else {
							w20 = -0.0071415976;
						}
					} else {
						w20 = -0.08134625;
					}
				} else {
					w20 = 0.08586509;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 12227) {
					w20 = -0.09997304;
				} else {
					w20 = -0.19597675;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 12227) {
						w20 = -0.19356598;
					} else {
						w20 = -0.06651861;
					}
				} else {
					w20 = -0.12706894;
				}
			}
		}
	}
	float w21;
	if (hops < 4) {
		if (rel_time < 577) {
			if (hops < 3) {
				if (hops < 2) {
					w21 = -0.15053587;
				} else {
					w21 = -0.12366083;
				}
			} else {
				w21 = -0.070274495;
			}
		} else {
			if (rel_time < 1250) {
				if (size < 133) {
					if (rel_time < 1203) {
						if (rel_time < 1182) {
							w21 = 0.055301778;
						} else {
							w21 = -0.058489613;
						}
					} else {
						w21 = -0.55022657;
					}
				} else {
					if (rel_time < 647) {
						if (hops < 2) {
							w21 = -0.09569927;
						} else {
							w21 = -0.011237256;
						}
					} else {
						if (rel_time < 1203) {
							w21 = 0.5720135;
						} else {
							w21 = 0.265953;
						}
					}
				}
			} else {
				if (rel_time < 1788) {
					if (hops < 2) {
						if (rel_time < 1321) {
							w21 = -0.091564074;
						} else {
							w21 = 0.14040816;
						}
					} else {
						if (rel_time < 1321) {
							w21 = -0.054187268;
						} else {
							w21 = -0.42615554;
						}
					}
				} else {
					if (rel_time < 3672) {
						if (prod != 0) {
							w21 = 0.010054573;
						} else {
							w21 = 0.100573525;
						}
					} else {
						if (rel_time < 4231) {
							w21 = -0.16462152;
						} else {
							w21 = -0.0011966369;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 1183) {
				if (prod != 1) {
					if (rel_time < 577) {
						w21 = 0.11623676;
					} else {
						if (rel_time < 647) {
							w21 = 0.026626667;
						} else {
							w21 = 0.106915526;
						}
					}
				} else {
					w21 = 0.1876034;
				}
			} else {
				if (prod != 1) {
					if (rel_time < 10874) {
						if (rel_time < 4210) {
							w21 = 0.031545825;
						} else {
							w21 = -0.047969114;
						}
					} else {
						if (rel_time < 11475) {
							w21 = 0.23230839;
						} else {
							w21 = -0.019197533;
						}
					}
				} else {
					if (rel_time < 2461) {
						if (rel_time < 1250) {
							w21 = -0.28086343;
						} else {
							w21 = -0.046130147;
						}
					} else {
						if (rel_time < 5488) {
							w21 = 0.10002691;
						} else {
							w21 = 0.019106748;
						}
					}
				}
			}
		} else {
			if (rel_time < 1182) {
				w21 = -0.26818788;
			} else {
				if (rel_time < 2393) {
					if (rel_time < 1788) {
						w21 = 0.23078732;
					} else {
						w21 = 0.88557607;
					}
				} else {
					if (rel_time < 4209) {
						if (rel_time < 3743) {
							w21 = 0.052589137;
						} else {
							w21 = -0.5773048;
						}
					} else {
						if (rel_time < 5420) {
							w21 = 0.40024856;
						} else {
							w21 = 0.0842882;
						}
					}
				}
			}
		}
	}
	float w22;
	if (rel_time < 12147) {
		if (rel_time < 11613) {
			if (rel_time < 11008) {
				if (rel_time < 10331) {
					if (rel_time < 9797) {
						if (hops < 2) {
							w22 = -0.017980376;
						} else {
							w22 = 0.009668774;
						}
					} else {
						if (hops < 2) {
							w22 = 0.07941175;
						} else {
							w22 = -0.123111024;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 1) {
							w22 = -0.030455627;
						} else {
							w22 = 0.035790037;
						}
					} else {
						if (rel_time < 10869) {
							w22 = 0.23637573;
						} else {
							w22 = -0.25099182;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11475) {
						if (hops < 3) {
							w22 = 0.17612244;
						} else {
							w22 = 0.011329933;
						}
					} else {
						if (rel_time < 11477) {
							w22 = -0.1835957;
						} else {
							w22 = -0.008196463;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11010) {
							w22 = -0.2214429;
						} else {
							w22 = -0.14503865;
						}
					} else {
						if (hops < 4) {
							w22 = -0.091606125;
						} else {
							w22 = -0.16138588;
						}
					}
				}
			}
		} else {
			if (rel_time < 12080) {
				if (hops < 4) {
					if (hops < 2) {
						w22 = 0.13203752;
					} else {
						if (hops < 3) {
							w22 = 0.062140137;
						} else {
							w22 = 0.10078288;
						}
					}
				} else {
					w22 = -0.061547555;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 12085) {
						if (rel_time < 12083) {
							w22 = 0.04249281;
						} else {
							w22 = -0.11304195;
						}
					} else {
						if (hops < 2) {
							w22 = -0.014422361;
						} else {
							w22 = 0.09966336;
						}
					}
				} else {
					if (rel_time < 12083) {
						if (hops < 4) {
							w22 = -0.097002976;
						} else {
							w22 = 0.1522953;
						}
					} else {
						if (rel_time < 12085) {
							w22 = 0.20245747;
						} else {
							w22 = -0.0248806;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 12218) {
			w22 = -0.030081496;
		} else {
			if (hops < 3) {
				w22 = -0.051346425;
			} else {
				if (rel_time < 12223) {
					w22 = -0.1107091;
				} else {
					w22 = -0.07493727;
				}
			}
		}
	}
	float w23;
	if (prod != 0) {
		if (prod != 2) {
			if (rel_time < 1855) {
				if (rel_time < 1321) {
					if (rel_time < 647) {
						if (hops < 4) {
							w23 = -0.038835734;
						} else {
							w23 = 0.027155852;
						}
					} else {
						if (size < 133) {
							w23 = -0.022769881;
						} else {
							w23 = 0.1414867;
						}
					}
				} else {
					if (hops < 4) {
						w23 = -0.20128958;
					} else {
						w23 = -0.15426083;
					}
				}
			} else {
				if (rel_time < 4882) {
					if (rel_time < 4348) {
						if (hops < 2) {
							w23 = -0.026293503;
						} else {
							w23 = 0.051223807;
						}
					} else {
						if (hops < 3) {
							w23 = 0.40440026;
						} else {
							w23 = -0.089012906;
						}
					}
				} else {
					if (rel_time < 4884) {
						if (hops < 2) {
							w23 = -0.08407176;
						} else {
							w23 = -0.5842162;
						}
					} else {
						if (rel_time < 4954) {
							w23 = 0.5199317;
						} else {
							w23 = 0.0076748272;
						}
					}
				}
			}
		} else {
			if (rel_time < 6028) {
				if (rel_time < 4836) {
					if (rel_time < 4231) {
						if (rel_time < 1203) {
							w23 = -0.01520865;
						} else {
							w23 = 0.033324927;
						}
					} else {
						if (rel_time < 4818) {
							w23 = -0.13362367;
						} else {
							w23 = -0.43183312;
						}
					}
				} else {
					if (rel_time < 5422) {
						if (hops < 3) {
							w23 = 0.28767684;
						} else {
							w23 = 0.11290597;
						}
					} else {
						if (hops < 2) {
							w23 = 0.1383995;
						} else {
							w23 = 0.015269333;
						}
					}
				}
			} else {
				if (rel_time < 8468) {
					if (rel_time < 8451) {
						if (rel_time < 6046) {
							w23 = -0.14663628;
						} else {
							w23 = -0.025221001;
						}
					} else {
						if (hops < 2) {
							w23 = -0.5613242;
						} else {
							w23 = -0.30738673;
						}
					}
				} else {
					if (rel_time < 9057) {
						if (hops < 3) {
							w23 = 0.21785127;
						} else {
							w23 = 0.114900514;
						}
					} else {
						if (rel_time < 9678) {
							w23 = -0.06198913;
						} else {
							w23 = -0.0042927694;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 1182) {
				if (hops < 2) {
					w23 = 0.378062;
				} else {
					w23 = -0.019176247;
				}
			} else {
				if (rel_time < 6631) {
					if (rel_time < 3604) {
						if (rel_time < 2999) {
							w23 = -0.08217519;
						} else {
							w23 = 0.18151851;
						}
					} else {
						if (hops < 2) {
							w23 = -0.34509823;
						} else {
							w23 = -0.029658778;
						}
					}
				} else {
					if (rel_time < 7237) {
						w23 = 0.54274464;
					} else {
						if (rel_time < 9053) {
							w23 = -0.17948961;
						} else {
							w23 = 0.01090554;
						}
					}
				}
			}
		} else {
			if (rel_time < 1182) {
				w23 = -0.14950882;
			} else {
				if (rel_time < 2393) {
					if (rel_time < 1788) {
						if (hops < 4) {
							w23 = 0.055478703;
						} else {
							w23 = 0.111164965;
						}
					} else {
						if (hops < 4) {
							w23 = 0.24317607;
						} else {
							w23 = 0.44015816;
						}
					}
				} else {
					if (rel_time < 2999) {
						if (hops < 4) {
							w23 = -0.177906;
						} else {
							w23 = -0.33939657;
						}
					} else {
						if (rel_time < 3604) {
							w23 = 0.17338125;
						} else {
							w23 = 0.02013273;
						}
					}
				}
			}
		}
	}
	float w24;
	if (rel_time < 5443) {
		if (rel_time < 5440) {
			if (rel_time < 4882) {
				if (rel_time < 4231) {
					if (rel_time < 3743) {
						if (rel_time < 3137) {
							w24 = -0.0046240725;
						} else {
							w24 = 0.04712863;
						}
					} else {
						if (prod != 2) {
							w24 = -0.23605022;
						} else {
							w24 = 0.0389184;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 2) {
							w24 = 0.30621037;
						} else {
							w24 = -0.13819963;
						}
					} else {
						if (rel_time < 4232) {
							w24 = 0.15192497;
						} else {
							w24 = -0.008417196;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (prod != 0) {
						if (rel_time < 4884) {
							w24 = -0.042166114;
						} else {
							w24 = 0.33263147;
						}
					} else {
						w24 = -1.1238434;
					}
				} else {
					if (rel_time < 4884) {
						if (hops < 4) {
							w24 = -0.39342743;
						} else {
							w24 = 0.33368456;
						}
					} else {
						if (prod != 0) {
							w24 = 0.030386573;
						} else {
							w24 = 0.17644697;
						}
					}
				}
			}
		} else {
			if (rel_time < 5442) {
				w24 = -0.34289983;
			} else {
				w24 = -0.15890111;
			}
		}
	} else {
		if (rel_time < 6047) {
			if (hops < 2) {
				if (prod != 2) {
					if (rel_time < 5488) {
						w24 = 0.8837603;
					} else {
						if (rel_time < 6026) {
							w24 = 0.22297354;
						} else {
							w24 = 0.3704756;
						}
					}
				} else {
					if (rel_time < 6027) {
						w24 = -0.41523784;
					} else {
						if (rel_time < 6028) {
							w24 = 0.21589994;
						} else {
							w24 = -0.13393302;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						if (rel_time < 5489) {
							w24 = 0.08664544;
						} else {
							w24 = -0.014740431;
						}
					} else {
						if (size < 133) {
							w24 = -0.007002863;
						} else {
							w24 = -0.5110331;
						}
					}
				} else {
					if (rel_time < 5560) {
						if (hops < 3) {
							w24 = -0.028863525;
						} else {
							w24 = 0.13709867;
						}
					} else {
						if (hops < 3) {
							w24 = 0.14424014;
						} else {
							w24 = 0.20711839;
						}
					}
				}
			}
		} else {
			if (rel_time < 6700) {
				if (prod != 0) {
					if (rel_time < 6634) {
						if (hops < 4) {
							w24 = -0.006646347;
						} else {
							w24 = 0.06590901;
						}
					} else {
						if (hops < 3) {
							w24 = -0.09252671;
						} else {
							w24 = -0.024754066;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w24 = -0.15219331;
						} else {
							w24 = -0.26442274;
						}
					} else {
						if (hops < 4) {
							w24 = -0.063646905;
						} else {
							w24 = -0.13280714;
						}
					}
				}
			} else {
				if (rel_time < 7237) {
					if (prod != 0) {
						if (hops < 4) {
							w24 = -0.019994197;
						} else {
							w24 = 0.11211925;
						}
					} else {
						if (hops < 3) {
							w24 = 0.2716003;
						} else {
							w24 = 0.11441111;
						}
					}
				} else {
					if (rel_time < 7842) {
						if (rel_time < 7375) {
							w24 = 0.019580029;
						} else {
							w24 = -0.23504916;
						}
					} else {
						if (rel_time < 8447) {
							w24 = 0.06913045;
						} else {
							w24 = -0.005280589;
						}
					}
				}
			}
		}
	}
	float w25;
	if (rel_time < 2460) {
		if (rel_time < 1926) {
			if (hops < 2) {
				if (prod != 0) {
					if (prod != 2) {
						if (rel_time < 1203) {
							w25 = 0.005751872;
						} else {
							w25 = -0.0470959;
						}
					} else {
						if (rel_time < 1203) {
							w25 = -0.0022905152;
						} else {
							w25 = 0.15009019;
						}
					}
				} else {
					if (rel_time < 1182) {
						w25 = 0.19168419;
					} else {
						w25 = 0.122647725;
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 1808) {
						if (rel_time < 1789) {
							w25 = 0.011260375;
						} else {
							w25 = 0.13232307;
						}
					} else {
						if (rel_time < 1855) {
							w25 = -0.096029155;
						} else {
							w25 = 0.022754984;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1182) {
							w25 = -0.0072919456;
						} else {
							w25 = -0.4039888;
						}
					} else {
						if (rel_time < 1182) {
							w25 = -0.072521135;
						} else {
							w25 = 0.03758518;
						}
					}
				}
			}
		} else {
			if (rel_time < 2393) {
				if (hops < 2) {
					if (rel_time < 1927) {
						w25 = 0.026136033;
					} else {
						w25 = -0.03501215;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1927) {
							w25 = 0.44735742;
						} else {
							w25 = 0.34306252;
						}
					} else {
						if (hops < 4) {
							w25 = 0.124122985;
						} else {
							w25 = 0.22344702;
						}
					}
				}
			} else {
				if (rel_time < 2413) {
					if (rel_time < 2394) {
						if (hops < 4) {
							w25 = -0.009906976;
						} else {
							w25 = 0.5152084;
						}
					} else {
						if (hops < 3) {
							w25 = -0.069448225;
						} else {
							w25 = 0.0048968703;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2415) {
							w25 = 0.07728218;
						} else {
							w25 = 0.26367646;
						}
					} else {
						w25 = 0.007822393;
					}
				}
			}
		}
	} else {
		if (rel_time < 3020) {
			if (prod != 2) {
				if (rel_time < 2532) {
					if (hops < 2) {
						if (rel_time < 2461) {
							w25 = -0.010205427;
						} else {
							w25 = 0.04610746;
						}
					} else {
						if (rel_time < 2461) {
							w25 = -0.044029992;
						} else {
							w25 = -0.08566138;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2999) {
							w25 = -0.15096986;
						} else {
							w25 = -0.22205208;
						}
					} else {
						if (rel_time < 2999) {
							w25 = -0.120131455;
						} else {
							w25 = 0.71998507;
						}
					}
				}
			} else {
				if (rel_time < 3000) {
					if (hops < 4) {
						w25 = 0.044808686;
					} else {
						w25 = 0.0898377;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w25 = -0.05903906;
						} else {
							w25 = -0.10827476;
						}
					} else {
						if (hops < 4) {
							w25 = 0.047964968;
						} else {
							w25 = -0.1141736;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (rel_time < 3671) {
					if (rel_time < 3137) {
						if (hops < 3) {
							w25 = 0.04601806;
						} else {
							w25 = -0.0774088;
						}
					} else {
						if (hops < 4) {
							w25 = 0.04423693;
						} else {
							w25 = 0.23246402;
						}
					}
				} else {
					if (rel_time < 4231) {
						if (prod != 1) {
							w25 = -0.11980604;
						} else {
							w25 = 0.015742924;
						}
					} else {
						if (rel_time < 4836) {
							w25 = 0.059635524;
						} else {
							w25 = 0.002301823;
						}
					}
				}
			} else {
				if (rel_time < 8468) {
					if (rel_time < 8451) {
						if (hops < 3) {
							w25 = -0.03038938;
						} else {
							w25 = 0.0031776584;
						}
					} else {
						if (hops < 2) {
							w25 = -0.27926952;
						} else {
							w25 = -0.15133363;
						}
					}
				} else {
					if (rel_time < 9662) {
						if (rel_time < 9660) {
							w25 = 0.038002644;
						} else {
							w25 = 0.16010143;
						}
					} else {
						if (rel_time < 9678) {
							w25 = -0.22535717;
						} else {
							w25 = 0.0004978963;
						}
					}
				}
			}
		}
	}
	float w26;
	if (rel_time < 12147) {
		if (rel_time < 9079) {
			if (rel_time < 8447) {
				if (rel_time < 7981) {
					if (rel_time < 7375) {
						if (rel_time < 6770) {
							w26 = -0.0024488762;
						} else {
							w26 = 0.03655843;
						}
					} else {
						if (rel_time < 7842) {
							w26 = -0.11874332;
						} else {
							w26 = -0.014521253;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 7982) {
							w26 = -0.08570176;
						} else {
							w26 = -0.13922666;
						}
					} else {
						if (hops < 3) {
							w26 = 0.4792164;
						} else {
							w26 = 0.16063036;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w26 = -0.05556056;
						} else {
							w26 = 0.009452033;
						}
					} else {
						if (hops < 2) {
							w26 = 0.4362032;
						} else {
							w26 = -0.9133058;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 8449) {
							w26 = -0.33156016;
						} else {
							w26 = -8.162119e-05;
						}
					} else {
						if (hops < 4) {
							w26 = 0.15955727;
						} else {
							w26 = 0.32500297;
						}
					}
				}
			}
		} else {
			if (rel_time < 9797) {
				if (hops < 3) {
					if (hops < 2) {
						if (prod != 0) {
							w26 = 0.04406615;
						} else {
							w26 = -0.24360028;
						}
					} else {
						if (prod != 0) {
							w26 = 0.07250865;
						} else {
							w26 = 0.52240354;
						}
					}
				} else {
					if (rel_time < 9728) {
						if (prod != 2) {
							w26 = -0.009850052;
						} else {
							w26 = -0.10364799;
						}
					} else {
						if (hops < 4) {
							w26 = 0.14562768;
						} else {
							w26 = 0.042656653;
						}
					}
				}
			} else {
				if (rel_time < 10264) {
					if (hops < 4) {
						if (hops < 2) {
							w26 = 0.14313008;
						} else {
							w26 = -0.3827863;
						}
					} else {
						if (rel_time < 9799) {
							w26 = 0.75924134;
						} else {
							w26 = 0.51879543;
						}
					}
				} else {
					if (rel_time < 10874) {
						if (prod != 0) {
							w26 = 0.014382423;
						} else {
							w26 = 0.11251069;
						}
					} else {
						if (rel_time < 10892) {
							w26 = -0.10050801;
						} else {
							w26 = 0.00042754435;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 12218) {
			w26 = -0.017392477;
		} else {
			if (hops < 3) {
				w26 = -0.029665856;
			} else {
				w26 = -0.057348885;
			}
		}
	}
	float w27;
	if (rel_time < 577) {
		if (hops < 4) {
			if (hops < 3) {
				w27 = -0.048062023;
			} else {
				w27 = -0.02271827;
			}
		} else {
			w27 = 0.03808577;
		}
	} else {
		if (rel_time < 2460) {
			if (rel_time < 1926) {
				if (hops < 2) {
					if (prod != 0) {
						if (rel_time < 1789) {
							w27 = 0.016277755;
						} else {
							w27 = -0.027579857;
						}
					} else {
						if (rel_time < 1182) {
							w27 = 0.09721579;
						} else {
							w27 = 0.062664405;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 1808) {
							w27 = 0.012916963;
						} else {
							w27 = -0.017270563;
						}
					} else {
						if (hops < 3) {
							w27 = -0.1018345;
						} else {
							w27 = -0.0075369924;
						}
					}
				}
			} else {
				if (rel_time < 2393) {
					if (hops < 2) {
						w27 = -0.008726576;
					} else {
						if (hops < 3) {
							w27 = 0.18380615;
						} else {
							w27 = 0.076747485;
						}
					}
				} else {
					if (rel_time < 2413) {
						if (rel_time < 2394) {
							w27 = 0.025303507;
						} else {
							w27 = -0.020095889;
						}
					} else {
						if (hops < 3) {
							w27 = 0.026014434;
						} else {
							w27 = 0.06436629;
						}
					}
				}
			}
		} else {
			if (rel_time < 2999) {
				if (rel_time < 2532) {
					if (hops < 2) {
						w27 = 0.016025646;
					} else {
						if (hops < 4) {
							w27 = -0.042456035;
						} else {
							w27 = 0.009620208;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w27 = -0.07317796;
						} else {
							w27 = -0.025616745;
						}
					} else {
						if (rel_time < 2533) {
							w27 = -0.12796207;
						} else {
							w27 = -0.053750247;
						}
					}
				}
			} else {
				if (rel_time < 5443) {
					if (rel_time < 5440) {
						if (rel_time < 4954) {
							w27 = 0.0011067372;
						} else {
							w27 = -0.035321146;
						}
					} else {
						if (rel_time < 5442) {
							w27 = -0.17168778;
						} else {
							w27 = -0.07952024;
						}
					}
				} else {
					if (rel_time < 6047) {
						if (hops < 2) {
							w27 = 0.113756195;
						} else {
							w27 = 0.01839865;
						}
					} else {
						if (rel_time < 6698) {
							w27 = -0.027217807;
						} else {
							w27 = 0.0012676718;
						}
					}
				}
			}
		}
	}
	float w28;
	if (rel_time < 10894) {
		if (rel_time < 10892) {
			if (rel_time < 10874) {
				if (rel_time < 10403) {
					if (rel_time < 9797) {
						if (rel_time < 9678) {
							w28 = -0.0004594869;
						} else {
							w28 = 0.040038206;
						}
					} else {
						if (hops < 4) {
							w28 = -0.025149254;
						} else {
							w28 = 0.0867872;
						}
					}
				} else {
					if (rel_time < 10405) {
						if (hops < 4) {
							w28 = 0.29865697;
						} else {
							w28 = -0.120630115;
						}
					} else {
						if (hops < 2) {
							w28 = 0.01391079;
						} else {
							w28 = 0.05130707;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 10889) {
						w28 = -0.12843648;
					} else {
						w28 = -0.041870646;
					}
				} else {
					w28 = 0.053313572;
				}
			}
		} else {
			w28 = 0.17994192;
		}
	} else {
		if (rel_time < 10936) {
			if (hops < 4) {
				w28 = -0.24510746;
			} else {
				w28 = 0.20750578;
			}
		} else {
			if (rel_time < 11500) {
				if (hops < 2) {
					if (prod != 0) {
						if (size < 133) {
							w28 = 0.045953937;
						} else {
							w28 = 0.11459245;
						}
					} else {
						if (rel_time < 11008) {
							w28 = -0.49378967;
						} else {
							w28 = -0.089100234;
						}
					}
				} else {
					if (rel_time < 11475) {
						if (prod != 0) {
							w28 = 0.029277528;
						} else {
							w28 = -0.056421615;
						}
					} else {
						if (hops < 3) {
							w28 = -0.14163023;
						} else {
							w28 = -0.03341449;
						}
					}
				}
			} else {
				if (size < 133) {
					if (rel_time < 12147) {
						if (prod != 0) {
							w28 = 0.0009692755;
						} else {
							w28 = 0.0336022;
						}
					} else {
						w28 = -0.015075298;
					}
				} else {
					if (hops < 4) {
						w28 = 0.10657869;
					} else {
						w28 = 0.014010754;
					}
				}
			}
		}
	}
	float w29;
	if (rel_time < 2460) {
		if (rel_time < 1855) {
			if (rel_time < 1808) {
				if (rel_time < 1788) {
					if (size < 133) {
						if (rel_time < 1182) {
							w29 = 0.016272578;
						} else {
							w29 = -0.04096582;
						}
					} else {
						if (rel_time < 647) {
							w29 = -0.012735773;
						} else {
							w29 = 0.06835958;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1789) {
							w29 = 0.073380455;
						} else {
							w29 = -0.039275773;
						}
					} else {
						if (rel_time < 1789) {
							w29 = -0.13278182;
						} else {
							w29 = 0.5229783;
						}
					}
				}
			} else {
				if (rel_time < 1809) {
					w29 = -0.055202965;
				} else {
					w29 = -0.024980795;
				}
			}
		} else {
			if (prod != 2) {
				if (hops < 3) {
					if (rel_time < 1856) {
						if (hops < 2) {
							w29 = 0.05272234;
						} else {
							w29 = -0.08369741;
						}
					} else {
						if (hops < 2) {
							w29 = 0.009033844;
						} else {
							w29 = 0.05150542;
						}
					}
				} else {
					if (rel_time < 1856) {
						if (hops < 4) {
							w29 = 0.17758033;
						} else {
							w29 = -0.06983106;
						}
					} else {
						if (rel_time < 1926) {
							w29 = 0.0064731054;
						} else {
							w29 = 0.035609663;
						}
					}
				}
			} else {
				if (rel_time < 2395) {
					if (hops < 3) {
						if (rel_time < 2394) {
							w29 = 0.09130183;
						} else {
							w29 = -0.0153091;
						}
					} else {
						if (rel_time < 2394) {
							w29 = -0.10109245;
						} else {
							w29 = 0.016642343;
						}
					}
				} else {
					if (hops < 4) {
						w29 = -0.09280791;
					} else {
						w29 = 0.27806455;
					}
				}
			}
		}
	} else {
		if (rel_time < 3066) {
			if (hops < 3) {
				if (rel_time < 3020) {
					if (rel_time < 3019) {
						if (prod != 0) {
							w29 = -0.0016182181;
						} else {
							w29 = -0.036372837;
						}
					} else {
						if (hops < 2) {
							w29 = -0.11030726;
						} else {
							w29 = 0.38203698;
						}
					}
				} else {
					w29 = 0.11375476;
				}
			} else {
				if (rel_time < 3019) {
					if (rel_time < 2999) {
						w29 = -0.02455777;
					} else {
						w29 = 0.01610965;
					}
				} else {
					w29 = -0.12066826;
				}
			}
		} else {
			if (rel_time < 3604) {
				if (hops < 4) {
					if (rel_time < 3138) {
						if (hops < 2) {
							w29 = -0.04043491;
						} else {
							w29 = 0.0060011023;
						}
					} else {
						if (hops < 2) {
							w29 = 0.1560373;
						} else {
							w29 = -0.026566627;
						}
					}
				} else {
					w29 = 0.15488136;
				}
			} else {
				if (rel_time < 3624) {
					if (hops < 3) {
						if (rel_time < 3605) {
							w29 = 0.09358522;
						} else {
							w29 = -0.060764745;
						}
					} else {
						if (rel_time < 3605) {
							w29 = -0.2449452;
						} else {
							w29 = 0.02874709;
						}
					}
				} else {
					if (rel_time < 3625) {
						w29 = 0.0594408;
					} else {
						if (rel_time < 4209) {
							w29 = -0.017958647;
						} else {
							w29 = 0.0007395145;
						}
					}
				}
			}
		}
	}
	float w30;
	if (rel_time < 6164) {
		if (rel_time < 5559) {
			if (rel_time < 4954) {
				if (rel_time < 4884) {
					if (rel_time < 4882) {
						if (rel_time < 4838) {
							w30 = 0.0013238662;
						} else {
							w30 = 0.1714776;
						}
					} else {
						if (hops < 3) {
							w30 = -0.20327967;
						} else {
							w30 = 0.03882851;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 0) {
							w30 = 0.6184351;
						} else {
							w30 = -0.56025356;
						}
					} else {
						if (hops < 4) {
							w30 = 0.04555739;
						} else {
							w30 = -0.06651148;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 5420) {
						w30 = -0.54470605;
					} else {
						if (size < 133) {
							w30 = 0.038234994;
						} else {
							w30 = -0.08611221;
						}
					}
				} else {
					if (rel_time < 5422) {
						if (hops < 3) {
							w30 = 0.21683097;
						} else {
							w30 = 0.0044730213;
						}
					} else {
						if (hops < 4) {
							w30 = -0.0066008684;
						} else {
							w30 = -0.12540852;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (rel_time < 6047) {
					if (rel_time < 5561) {
						if (hops < 4) {
							w30 = 0.07361074;
						} else {
							w30 = -0.046103135;
						}
					} else {
						if (hops < 4) {
							w30 = 0.10290577;
						} else {
							w30 = 0.27143162;
						}
					}
				} else {
					if (rel_time < 6095) {
						if (hops < 2) {
							w30 = -0.106470644;
						} else {
							w30 = 0.018149411;
						}
					} else {
						if (hops < 4) {
							w30 = 0.08634417;
						} else {
							w30 = -0.18962692;
						}
					}
				}
			} else {
				if (rel_time < 6028) {
					if (hops < 2) {
						if (rel_time < 6027) {
							w30 = -0.2496932;
						} else {
							w30 = 0.068008356;
						}
					} else {
						if (hops < 4) {
							w30 = 0.044903487;
						} else {
							w30 = -0.05505018;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w30 = -0.06694266;
						} else {
							w30 = -0.12454676;
						}
					} else {
						w30 = 0.108906806;
					}
				}
			}
		}
	} else {
		if (rel_time < 6631) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 6167) {
						if (rel_time < 6166) {
							w30 = -0.05742579;
						} else {
							w30 = -0.1384958;
						}
					} else {
						w30 = -0.009909789;
					}
				} else {
					if (rel_time < 6166) {
						w30 = -0.18037035;
					} else {
						if (rel_time < 6167) {
							w30 = -0.057554293;
						} else {
							w30 = -0.12582651;
						}
					}
				}
			} else {
				w30 = -0.027624685;
			}
		} else {
			if (rel_time < 7237) {
				if (rel_time < 6770) {
					if (hops < 4) {
						if (rel_time < 6634) {
							w30 = 0.011645336;
						} else {
							w30 = -0.022993842;
						}
					} else {
						if (rel_time < 6633) {
							w30 = 0.41936675;
						} else {
							w30 = -0.005947693;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w30 = 0.11249782;
						} else {
							w30 = 0.08333643;
						}
					} else {
						w30 = -0.08133648;
					}
				}
			} else {
				if (rel_time < 7909) {
					if (rel_time < 7864) {
						if (prod != 0) {
							w30 = -0.0013633522;
						} else {
							w30 = -0.060178623;
						}
					} else {
						if (rel_time < 7866) {
							w30 = -0.091818154;
						} else {
							w30 = -0.052020486;
						}
					}
				} else {
					if (rel_time < 8447) {
						if (hops < 2) {
							w30 = -0.029422;
						} else {
							w30 = 0.08462417;
						}
					} else {
						if (rel_time < 8517) {
							w30 = -0.03766729;
						} else {
							w30 = 0.0010449106;
						}
					}
				}
			}
		}
	}
	float w31;
	if (size < 133) {
		if (rel_time < 9662) {
			if (rel_time < 9053) {
				if (rel_time < 8451) {
					if (rel_time < 7981) {
						if (rel_time < 7239) {
							w31 = 5.774892e-05;
						} else {
							w31 = -0.018155884;
						}
					} else {
						if (hops < 2) {
							w31 = -0.016306795;
						} else {
							w31 = 0.06745364;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w31 = 0.028914886;
						} else {
							w31 = -0.18976013;
						}
					} else {
						if (rel_time < 8517) {
							w31 = -0.057770144;
						} else {
							w31 = 0.09709771;
						}
					}
				}
			} else {
				if (rel_time < 9122) {
					if (rel_time < 9073) {
						if (rel_time < 9057) {
							w31 = 0.076445125;
						} else {
							w31 = -0.040689237;
						}
					} else {
						if (hops < 2) {
							w31 = 0.27899134;
						} else {
							w31 = 0.14802165;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 4) {
							w31 = 0.07279143;
						} else {
							w31 = -0.17962064;
						}
					} else {
						if (rel_time < 9126) {
							w31 = -0.029944822;
						} else {
							w31 = -0.1870974;
						}
					}
				}
			}
		} else {
			if (rel_time < 10264) {
				if (hops < 4) {
					if (prod != 1) {
						if (hops < 2) {
							w31 = -0.0003340709;
						} else {
							w31 = -0.157634;
						}
					} else {
						if (rel_time < 9728) {
							w31 = -0.06417193;
						} else {
							w31 = 0.0070450543;
						}
					}
				} else {
					if (rel_time < 9732) {
						if (rel_time < 9727) {
							w31 = -0.055237267;
						} else {
							w31 = 0.020939384;
						}
					} else {
						if (rel_time < 9799) {
							w31 = 0.3416708;
						} else {
							w31 = 0.21645029;
						}
					}
				}
			} else {
				if (rel_time < 10268) {
					if (hops < 2) {
						if (rel_time < 10266) {
							w31 = -0.3341745;
						} else {
							w31 = 0.114932604;
						}
					} else {
						if (rel_time < 10266) {
							w31 = 0.19940394;
						} else {
							w31 = 0.05371423;
						}
					}
				} else {
					if (rel_time < 10284) {
						if (hops < 2) {
							w31 = -0.17428766;
						} else {
							w31 = -0.00725547;
						}
					} else {
						if (hops < 4) {
							w31 = 0.0012206285;
						} else {
							w31 = -0.030604351;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 3020) {
				if (rel_time < 1203) {
					if (rel_time < 647) {
						if (rel_time < 577) {
							w31 = -0.018117659;
						} else {
							w31 = 0.0062673953;
						}
					} else {
						w31 = 0.18472987;
					}
				} else {
					if (rel_time < 2415) {
						if (rel_time < 1809) {
							w31 = -0.025690941;
						} else {
							w31 = -0.0033656703;
						}
					} else {
						if (hops < 2) {
							w31 = -0.055927634;
						} else {
							w31 = 0.20163143;
						}
					}
				}
			} else {
				if (rel_time < 4838) {
					if (rel_time < 4231) {
						if (rel_time < 3625) {
							w31 = 0.04363765;
						} else {
							w31 = -0.024901152;
						}
					} else {
						if (hops < 2) {
							w31 = 0.16748828;
						} else {
							w31 = 0.07612704;
						}
					}
				} else {
					if (rel_time < 5443) {
						w31 = -0.0396619;
					} else {
						if (rel_time < 11497) {
							w31 = 0.018121528;
						} else {
							w31 = -0.0498449;
						}
					}
				}
			}
		} else {
			if (rel_time < 3671) {
				if (rel_time < 3066) {
					if (rel_time < 2460) {
						if (rel_time < 647) {
							w31 = -0.008836527;
						} else {
							w31 = 0.02838296;
						}
					} else {
						w31 = -0.061084487;
					}
				} else {
					w31 = 0.07075037;
				}
			} else {
				if (rel_time < 4838) {
					if (hops < 4) {
						if (rel_time < 4277) {
							w31 = 0.04257286;
						} else {
							w31 = -0.107904814;
						}
					} else {
						w31 = -0.3268057;
					}
				} else {
					if (rel_time < 5444) {
						w31 = 0.0574219;
					} else {
						if (rel_time < 5488) {
							w31 = -0.20374039;
						} else {
							w31 = -0.0057619717;
						}
					}
				}
			}
		}
	}
	float w32;
	if (rel_time < 10894) {
		if (rel_time < 10892) {
			if (rel_time < 10874) {
				if (rel_time < 10403) {
					if (rel_time < 10286) {
						if (rel_time < 10284) {
							w32 = 4.897464e-06;
						} else {
							w32 = 0.059974223;
						}
					} else {
						if (rel_time < 10288) {
							w32 = -0.11533589;
						} else {
							w32 = 0.009491434;
						}
					}
				} else {
					if (rel_time < 10405) {
						if (hops < 3) {
							w32 = 0.1955537;
						} else {
							w32 = 0.037690718;
						}
					} else {
						if (rel_time < 10869) {
							w32 = 0.034153707;
						} else {
							w32 = 0.0058464874;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w32 = -0.033156678;
					} else {
						w32 = -0.07325675;
					}
				} else {
					w32 = 0.030460993;
				}
			}
		} else {
			w32 = 0.08017495;
		}
	} else {
		if (rel_time < 10936) {
			if (hops < 4) {
				w32 = -0.12077884;
			} else {
				w32 = 0.106288865;
			}
		} else {
			if (size < 133) {
				if (rel_time < 11613) {
					if (rel_time < 11008) {
						if (hops < 4) {
							w32 = 0.03156764;
						} else {
							w32 = -0.15087056;
						}
					} else {
						if (rel_time < 11010) {
							w32 = -0.059548136;
						} else {
							w32 = -0.01766279;
						}
					}
				} else {
					if (rel_time < 12147) {
						if (hops < 2) {
							w32 = 0.029007442;
						} else {
							w32 = 0.007898117;
						}
					} else {
						w32 = -0.007512553;
					}
				}
			} else {
				if (rel_time < 11500) {
					if (rel_time < 11497) {
						w32 = 0.04747854;
					} else {
						w32 = -0.024948863;
					}
				} else {
					if (hops < 4) {
						w32 = 0.055366635;
					} else {
						w32 = 0.009003021;
					}
				}
			}
		}
	}
	return (736.1309 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32);
}
