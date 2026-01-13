#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

float bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	float w0;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w0 = -177.83334;
			} else {
				if (rel_time < 15299) {
					w0 = -174.39597;
				} else {
					if (rel_time < 15686) {
						w0 = -163.76657;
					} else {
						w0 = -174.33298;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15299) {
					w0 = -170.8957;
				} else {
					if (rel_time < 15686) {
						w0 = -158.11635;
					} else {
						w0 = -170.82295;
					}
				}
			} else {
				if (rel_time < 15299) {
					w0 = -167.39203;
				} else {
					if (rel_time < 15686) {
						w0 = -143.89145;
					} else {
						w0 = -167.18303;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 3) {
					w0 = 175.0271;
				} else {
					w0 = 180.93082;
				}
			} else {
				if (rel_time < 116) {
					w0 = 250.28966;
				} else {
					if (hops < 3) {
						w0 = 240.85548;
					} else {
						w0 = 246.82632;
					}
				}
			}
		} else {
			if (rel_time < 132) {
				if (hops < 3) {
					w0 = 117.85042;
				} else {
					w0 = 124.083694;
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (hops < 3) {
							w0 = 155.05391;
						} else {
							w0 = 161.04416;
						}
					} else {
						if (hops < 3) {
							w0 = 165.44972;
						} else {
							w0 = 171.40424;
						}
					}
				} else {
					if (rel_time < 14901) {
						if (hops < 3) {
							w0 = 165.04471;
						} else {
							w0 = 170.95714;
						}
					} else {
						if (hops < 3) {
							w0 = 180.93544;
						} else {
							w0 = 187.01314;
						}
					}
				}
			}
		}
	}
	float w1;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15299) {
					w1 = -88.979965;
				} else {
					if (rel_time < 15490) {
						w1 = -77.63313;
					} else {
						w1 = -88.06353;
					}
				}
			} else {
				if (rel_time < 15299) {
					w1 = -87.19882;
				} else {
					if (rel_time < 15490) {
						w1 = -75.164314;
					} else {
						w1 = -86.39864;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15299) {
					w1 = -85.44883;
				} else {
					if (rel_time < 15490) {
						w1 = -72.99311;
					} else {
						if (rel_time < 15686) {
							w1 = -81.512215;
						} else {
							w1 = -85.448814;
						}
					}
				}
			} else {
				if (rel_time < 15299) {
					w1 = -83.69882;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w1 = -61.720848;
						} else {
							w1 = -75.260956;
						}
					} else {
						w1 = -83.69868;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 2) {
					w1 = 85.666824;
				} else {
					w1 = 89.86978;
				}
			} else {
				if (hops < 2) {
					w1 = 119.374664;
				} else {
					if (rel_time < 116) {
						w1 = 126.79983;
					} else {
						w1 = 122.8262;
					}
				}
			}
		} else {
			if (rel_time < 132) {
				if (hops < 2) {
					w1 = 56.928093;
				} else {
					if (hops < 4) {
						w1 = 60.821518;
					} else {
						w1 = 65.02428;
					}
				}
			} else {
				if (hops < 2) {
					if (cons != 3) {
						if (cons != 1) {
							w1 = 80.95953;
						} else {
							w1 = 75.66441;
						}
					} else {
						w1 = 75.580345;
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w1 = 79.87672;
						} else {
							w1 = 85.07855;
						}
					} else {
						if (rel_time < 14901) {
							w1 = 84.863495;
						} else {
							w1 = 92.92104;
						}
					}
				}
			}
		}
	}
	float w2;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15299) {
					w2 = -44.490486;
				} else {
					if (rel_time < 15686) {
						w2 = -41.11798;
					} else {
						w2 = -44.929688;
					}
				}
			} else {
				if (rel_time < 15299) {
					w2 = -43.59983;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w2 = -37.6927;
						} else {
							w2 = -41.00465;
						}
					} else {
						w2 = -44.015503;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15299) {
					w2 = -42.724903;
				} else {
					if (rel_time < 15490) {
						w2 = -36.60616;
					} else {
						if (rel_time < 15686) {
							w2 = -40.80563;
						} else {
							w2 = -42.743076;
						}
					}
				}
			} else {
				if (rel_time < 15299) {
					w2 = -41.850815;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w2 = -31.185265;
						} else {
							w2 = -37.75891;
						}
					} else {
						w2 = -41.902996;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 4) {
					w2 = 43.95636;
				} else {
					w2 = 48.20417;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 116) {
						if (hops < 3) {
							w2 = 61.213707;
						} else {
							w2 = 64.57012;
						}
					} else {
						if (hops < 2) {
							w2 = 58.84619;
						} else {
							w2 = 60.895386;
						}
					}
				} else {
					w2 = 65.84678;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 132) {
					if (hops < 2) {
						w2 = 28.48899;
					} else {
						w2 = 30.422886;
					}
				} else {
					if (rel_time < 196) {
						w2 = 48.11059;
					} else {
						if (cons != 4) {
							w2 = 39.657852;
						} else {
							w2 = 41.6466;
						}
					}
				}
			} else {
				if (rel_time < 132) {
					w2 = 32.595924;
				} else {
					if (rel_time < 196) {
						w2 = 52.47286;
					} else {
						if (cons != 4) {
							w2 = 43.93832;
						} else {
							w2 = 45.87173;
						}
					}
				}
			}
		}
	}
	float w3;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15299) {
					w3 = -22.245491;
				} else {
					if (rel_time < 15490) {
						w3 = -18.483334;
					} else {
						if (rel_time < 15686) {
							w3 = -21.17236;
						} else {
							w3 = -22.474596;
						}
					}
				}
			} else {
				if (rel_time < 15299) {
					w3 = -21.800129;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w3 = -18.901777;
						} else {
							w3 = -20.522764;
						}
					} else {
						w3 = -22.015913;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15299) {
					w3 = -21.362696;
				} else {
					if (rel_time < 15490) {
						w3 = -18.358047;
					} else {
						if (rel_time < 15686) {
							w3 = -20.427605;
						} else {
							w3 = -21.380878;
						}
					}
				}
			} else {
				if (rel_time < 15299) {
					w3 = -20.92611;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w3 = -15.7567625;
						} else {
							w3 = -18.94389;
						}
					} else {
						w3 = -20.978357;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 2) {
					w3 = 20.911797;
				} else {
					if (hops < 4) {
						w3 = 22.46584;
					} else {
						w3 = 24.16502;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 116) {
						w3 = 30.61914;
					} else {
						w3 = 29.875961;
					}
				} else {
					if (rel_time < 116) {
						if (hops < 4) {
							w3 = 32.313007;
						} else {
							w3 = 35.10674;
						}
					} else {
						w3 = 30.993769;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 15486) {
					if (cons != 2) {
						if (cons != 4) {
							w3 = 17.892275;
						} else {
							w3 = 19.353214;
						}
					} else {
						if (rel_time < 196) {
							w3 = 22.944807;
						} else {
							w3 = 20.207922;
						}
					}
				} else {
					w3 = 27.3339;
				}
			} else {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 132) {
							w3 = 15.3733;
						} else {
							w3 = 19.825909;
						}
					} else {
						if (rel_time < 14901) {
							w3 = 21.327766;
						} else {
							w3 = 25.378815;
						}
					}
				} else {
					if (rel_time < 196) {
						if (hops < 4) {
							w3 = 24.576294;
						} else {
							w3 = 26.30371;
						}
					} else {
						if (hops < 4) {
							w3 = 21.85431;
						} else {
							w3 = 23.455614;
						}
					}
				}
			}
		}
	}
	float w4;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w4 = -11.115868;
			} else {
				if (rel_time < 15299) {
					w4 = -10.900171;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w4 = -9.478684;
						} else {
							w4 = -10.271611;
						}
					} else {
						w4 = -11.012036;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15299) {
					w4 = -10.681466;
				} else {
					if (rel_time < 15490) {
						w4 = -9.206588;
					} else {
						if (rel_time < 15686) {
							w4 = -10.226209;
						} else {
							w4 = -10.695114;
						}
					}
				}
			} else {
				if (rel_time < 15299) {
					w4 = -10.463409;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w4 = -7.961305;
						} else {
							w4 = -9.504271;
						}
					} else {
						w4 = -10.502624;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 3) {
					if (hops < 2) {
						w4 = 10.465018;
					} else {
						w4 = 10.979988;
					}
				} else {
					w4 = 11.686435;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 186) {
						if (hops < 3) {
							w4 = 15.238308;
						} else {
							w4 = 15.77801;
						}
					} else {
						if (hops < 2) {
							w4 = 14.256077;
						} else {
							w4 = 15.073404;
						}
					}
				} else {
					if (rel_time < 116) {
						w4 = 17.59872;
					} else {
						w4 = 16.363071;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 2) {
					if (rel_time < 15486) {
						if (rel_time < 132) {
							w4 = 6.4152236;
						} else {
							w4 = 9.49626;
						}
					} else {
						if (hops < 2) {
							w4 = 13.678854;
						} else {
							w4 = 12.180881;
						}
					}
				} else {
					if (rel_time < 196) {
						if (hops < 2) {
							w4 = 11.482251;
						} else {
							w4 = 12.102518;
						}
					} else {
						if (hops < 2) {
							w4 = 10.104405;
						} else {
							w4 = 10.709552;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 2) {
						if (cons != 4) {
							w4 = 9.917787;
						} else {
							w4 = 10.809573;
						}
					} else {
						if (rel_time < 196) {
							w4 = 12.503154;
						} else {
							w4 = 11.179225;
						}
					}
				} else {
					if (rel_time < 132) {
						w4 = 8.673123;
					} else {
						if (cons != 4) {
							w4 = 11.486993;
						} else {
							w4 = 12.1750965;
						}
					}
				}
			}
		}
	}
	float w5;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15299) {
					w5 = -5.5650005;
				} else {
					if (rel_time < 15490) {
						w5 = -3.7399998;
					} else {
						if (rel_time < 15686) {
							w5 = -5.046379;
						} else {
							w5 = -5.686662;
						}
					}
				}
			} else {
				if (rel_time < 15299) {
					w5 = -5.450135;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w5 = -4.753283;
						} else {
							w5 = -5.1409283;
						}
					} else {
						w5 = -5.508058;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15299) {
					w5 = -5.3407903;
				} else {
					if (rel_time < 15490) {
						w5 = -4.617118;
					} else {
						if (rel_time < 15686) {
							w5 = -5.1193147;
						} else {
							w5 = -5.3498945;
						}
					}
				}
			} else {
				if (rel_time < 15299) {
					w5 = -5.23188;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w5 = -4.022555;
						} else {
							w5 = -4.768353;
						}
					} else {
						w5 = -5.258044;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 4) {
					if (hops < 2) {
						w5 = 5.2370706;
					} else {
						w5 = 5.588216;
					}
				} else {
					w5 = 6.286072;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 116) {
						if (hops < 3) {
							w5 = 7.699627;
						} else {
							w5 = 8.288326;
						}
					} else {
						if (hops < 2) {
							w5 = 7.1352534;
						} else {
							w5 = 7.6233087;
						}
					}
				} else {
					if (rel_time < 116) {
						w5 = 8.82211;
					} else {
						w5 = 8.192011;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 132) {
					w5 = 2.1138728;
				} else {
					if (rel_time < 15486) {
						if (cons != 2) {
							w5 = 4.4997115;
						} else {
							w5 = 5.0873466;
						}
					} else {
						w5 = 6.8454;
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 2) {
						if (cons != 4) {
							w5 = 4.8193655;
						} else {
							w5 = 5.4569488;
						}
					} else {
						if (rel_time < 196) {
							w5 = 6.151499;
						} else {
							w5 = 5.463937;
						}
					}
				} else {
					if (rel_time < 15486) {
						if (rel_time < 132) {
							w5 = 4.3477516;
						} else {
							w5 = 5.8015265;
						}
					} else {
						w5 = 8.123433;
					}
				}
			}
		}
	}
	float w6;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15299) {
					w6 = -2.7825308;
				} else {
					if (rel_time < 15490) {
						w6 = -1.877107;
					} else {
						if (rel_time < 15686) {
							w6 = -2.5260208;
						} else {
							w6 = -2.8445666;
						}
					}
				}
			} else {
				if (rel_time < 15299) {
					w6 = -2.7250943;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w6 = -2.383632;
						} else {
							w6 = -2.573026;
						}
					} else {
						w6 = -2.7550511;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15299) {
					w6 = -2.6704257;
				} else {
					if (rel_time < 15490) {
						w6 = -2.3154943;
					} else {
						if (rel_time < 15686) {
							w6 = -2.562771;
						} else {
							w6 = -2.676114;
						}
					}
				}
			} else {
				if (rel_time < 15299) {
					w6 = -2.6160314;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w6 = -2.0324502;
						} else {
							w6 = -2.392313;
						}
					} else {
						w6 = -2.6323936;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 3) {
					w6 = 2.6659493;
				} else {
					if (hops < 4) {
						w6 = 2.9035342;
					} else {
						w6 = 3.1512425;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 116) {
						if (hops < 3) {
							w6 = 3.8513482;
						} else {
							w6 = 4.147749;
						}
					} else {
						if (hops < 2) {
							w6 = 3.5691755;
						} else {
							w6 = 3.8124278;
						}
					}
				} else {
					if (rel_time < 186) {
						w6 = 4.3607936;
					} else {
						w6 = 3.914332;
					}
				}
			}
		} else {
			if (rel_time < 778) {
				if (cons != 2) {
					if (hops < 4) {
						if (hops < 3) {
							w6 = 1.3168948;
						} else {
							w6 = 1.0653291;
						}
					} else {
						if (rel_time < 132) {
							w6 = 2.1794655;
						} else {
							w6 = 1.6396329;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w6 = 3.2045782;
						} else {
							w6 = 3.0769937;
						}
					} else {
						w6 = 4.5634856;
					}
				}
			} else {
				if (hops < 3) {
					if (cons != 4) {
						if (cons != 2) {
							w6 = 2.208588;
						} else {
							w6 = 2.569905;
						}
					} else {
						if (rel_time < 14901) {
							w6 = 2.7932982;
						} else {
							w6 = 3.3964038;
						}
					}
				} else {
					if (rel_time < 15486) {
						if (cons != 2) {
							w6 = 2.6905825;
						} else {
							w6 = 2.915878;
						}
					} else {
						if (hops < 4) {
							w6 = 4.632824;
						} else {
							w6 = 4.072249;
						}
					}
				}
			}
		}
	}
	float w7;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15299) {
					w7 = -1.3912807;
				} else {
					if (rel_time < 15490) {
						w7 = -0.9421236;
					} else {
						if (rel_time < 15686) {
							w7 = -1.2644318;
						} else {
							w7 = -1.4228972;
						}
					}
				}
			} else {
				w7 = -1.3617617;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15299) {
					w7 = -1.3352281;
				} else {
					if (rel_time < 15490) {
						w7 = -1.1612256;
					} else {
						w7 = -1.324331;
					}
				}
			} else {
				w7 = -1.3065516;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 3) {
					if (hops < 2) {
						w7 = 1.2890112;
					} else {
						w7 = 1.3699884;
					}
				} else {
					if (hops < 4) {
						w7 = 1.4530187;
					} else {
						w7 = 1.5797337;
					}
				}
			} else {
				if (rel_time < 186) {
					if (hops < 4) {
						if (rel_time < 116) {
							w7 = 1.9742411;
						} else {
							w7 = 1.9235681;
						}
					} else {
						w7 = 2.1832314;
					}
				} else {
					if (hops < 4) {
						w7 = 1.812705;
					} else {
						w7 = 1.9620714;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 502) {
							w7 = 0.3893767;
						} else {
							w7 = 0.96310294;
						}
					} else {
						if (rel_time < 196) {
							w7 = 1.6036597;
						} else {
							w7 = 1.2239785;
						}
					}
				} else {
					if (rel_time < 778) {
						if (rel_time < 587) {
							w7 = 0.6571072;
						} else {
							w7 = 0.6005201;
						}
					} else {
						if (rel_time < 14901) {
							w7 = 1.3603699;
						} else {
							w7 = 1.728954;
						}
					}
				}
			} else {
				if (rel_time < 778) {
					if (cons != 2) {
						if (cons != 3) {
							w7 = 0.631529;
						} else {
							w7 = 0.89088154;
						}
					} else {
						if (hops < 4) {
							w7 = 1.5391312;
						} else {
							w7 = 2.287598;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 15486) {
							w7 = 1.3095621;
						} else {
							w7 = 1.975781;
						}
					} else {
						if (cons != 4) {
							w7 = 1.4516642;
						} else {
							w7 = 1.8216976;
						}
					}
				}
			}
		}
	}
	float w8;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15299) {
					w8 = -0.69564795;
				} else {
					if (rel_time < 15490) {
						w8 = -0.4728526;
					} else {
						if (rel_time < 15686) {
							w8 = -0.63292456;
						} else {
							w8 = -0.7117575;
						}
					}
				}
			} else {
				if (rel_time < 15299) {
					w8 = -0.6816875;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w8 = -0.51644397;
						} else {
							w8 = -0.60759485;
						}
					} else {
						w8 = -0.6974113;
					}
				}
			}
		} else {
			if (hops < 4) {
				w8 = -0.6671453;
			} else {
				if (rel_time < 15299) {
					w8 = -0.65480894;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w8 = -0.38052288;
						} else {
							w8 = -0.5491903;
						}
					} else {
						w8 = -0.66544366;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 68) {
				if (hops < 3) {
					if (hops < 2) {
						w8 = 0.6450729;
					} else {
						w8 = 0.6854941;
					}
				} else {
					if (hops < 4) {
						w8 = 0.7271512;
					} else {
						w8 = 0.7919401;
					}
				}
			} else {
				if (rel_time < 186) {
					if (hops < 4) {
						if (hops < 3) {
							w8 = 0.98482984;
						} else {
							w8 = 0.95280534;
						}
					} else {
						if (rel_time < 116) {
							w8 = 1.158858;
						} else {
							w8 = 1.0233183;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w8 = 0.9239589;
						} else {
							w8 = 0.8676567;
						}
					} else {
						w8 = 0.9834755;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 502) {
							w8 = 0.19475938;
						} else {
							w8 = 0.4815771;
						}
					} else {
						if (rel_time < 196) {
							w8 = 0.8025298;
						} else {
							w8 = 0.61200666;
						}
					}
				} else {
					if (rel_time < 778) {
						w8 = 0.31276157;
					} else {
						if (rel_time < 14901) {
							w8 = 0.6802271;
						} else {
							w8 = 0.8652362;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 502) {
							w8 = 0.36245567;
						} else {
							w8 = 0.60252;
						}
					} else {
						if (rel_time < 778) {
							w8 = 0.35201564;
						} else {
							w8 = 0.75434005;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w8 = 0.6831431;
						} else {
							w8 = 0.7520692;
						}
					} else {
						if (rel_time < 1170) {
							w8 = 1.0801245;
						} else {
							w8 = 0.8966797;
						}
					}
				}
			}
		}
	}
	float w9;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15299) {
					w9 = -0.3478278;
				} else {
					if (rel_time < 15490) {
						w9 = -0.23732464;
					} else {
						if (rel_time < 15686) {
							w9 = -0.3168206;
						} else {
							w9 = -0.35603124;
						}
					}
				}
			} else {
				if (rel_time < 15299) {
					w9 = -0.34084755;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w9 = -0.258979;
						} else {
							w9 = -0.30410323;
						}
					} else {
						w9 = -0.34883147;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15299) {
					w9 = -0.33404925;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w9 = -0.24978629;
						} else {
							w9 = -0.28841597;
						}
					} else {
						w9 = -0.3433405;
					}
				}
			} else {
				if (rel_time < 15299) {
					w9 = -0.3274121;
				} else {
					if (rel_time < 15686) {
						if (rel_time < 15490) {
							w9 = -0.19226122;
						} else {
							w9 = -0.2755303;
						}
					} else {
						w9 = -0.33314472;
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (prod != 0) {
				if (rel_time < 68) {
					if (hops < 3) {
						w9 = 0.33390746;
					} else {
						w9 = 0.36388204;
					}
				} else {
					if (rel_time < 116) {
						if (hops < 2) {
							w9 = 0.63113815;
						} else {
							w9 = 0.43957162;
						}
					} else {
						if (hops < 2) {
							w9 = 0.3749555;
						} else {
							w9 = 0.50545585;
						}
					}
				}
			} else {
				if (rel_time < 132) {
					if (hops < 3) {
						if (hops < 2) {
							w9 = 0.10815537;
						} else {
							w9 = 0.56207955;
						}
					} else {
						w9 = -0.6211121;
					}
				} else {
					if (rel_time < 15486) {
						if (cons != 2) {
							w9 = 0.29423684;
						} else {
							w9 = 0.34263694;
						}
					} else {
						if (hops < 3) {
							w9 = 0.36584723;
						} else {
							w9 = 0.95450217;
						}
					}
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (rel_time < 186) {
						if (rel_time < 68) {
							w9 = 0.39700836;
						} else {
							w9 = 0.5560337;
						}
					} else {
						if (rel_time < 502) {
							w9 = 0.09756984;
						} else {
							w9 = 0.3347005;
						}
					}
				} else {
					if (rel_time < 196) {
						w9 = 0.5953162;
					} else {
						if (rel_time < 13725) {
							w9 = 0.45588756;
						} else {
							w9 = 0.3967644;
						}
					}
				}
			} else {
				if (rel_time < 14901) {
					if (rel_time < 9409) {
						if (rel_time < 778) {
							w9 = 0.46020353;
						} else {
							w9 = 0.54442143;
						}
					} else {
						if (rel_time < 12548) {
							w9 = 0.4463263;
						} else {
							w9 = 0.5359789;
						}
					}
				} else {
					w9 = 0.756703;
				}
			}
		}
	}
	float w10;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w10 = -0.17372285;
			} else {
				w10 = -0.17023282;
			}
		} else {
			w10 = -0.16593154;
		}
	} else {
		if (hops < 2) {
			if (cons != 4) {
				if (cons != 2) {
					if (prod != 0) {
						w10 = 0.14923787;
					} else {
						if (rel_time < 502) {
							w10 = -0.0034209474;
						} else {
							w10 = 0.09367707;
						}
					}
				} else {
					if (rel_time < 196) {
						if (rel_time < 116) {
							w10 = 0.3158298;
						} else {
							w10 = 0.23042041;
						}
					} else {
						if (rel_time < 15103) {
							w10 = 0.1361327;
						} else {
							w10 = 0.107126236;
						}
					}
				}
			} else {
				if (rel_time < 778) {
					if (rel_time < 391) {
						w10 = 0.23215684;
					} else {
						w10 = 0.009528854;
					}
				} else {
					if (rel_time < 14117) {
						if (rel_time < 3916) {
							w10 = 0.17689535;
						} else {
							w10 = 0.19515316;
						}
					} else {
						w10 = 0.23982073;
					}
				}
			}
		} else {
			if (rel_time < 15486) {
				if (hops < 4) {
					if (prod != 0) {
						if (cons != 3) {
							w10 = 0.20516083;
						} else {
							w10 = 0.28834176;
						}
					} else {
						if (rel_time < 132) {
							w10 = 0.010599537;
						} else {
							w10 = 0.16621652;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w10 = 0.17064172;
						} else {
							w10 = 0.23189683;
						}
					} else {
						if (rel_time < 9409) {
							w10 = 0.265775;
						} else {
							w10 = 0.24264833;
						}
					}
				}
			} else {
				if (hops < 3) {
					w10 = 0.124833934;
				} else {
					if (hops < 4) {
						w10 = 0.4776443;
					} else {
						w10 = 0.3793263;
					}
				}
			}
		}
	}
	float w11;
	if (size < 126) {
		if (hops < 3) {
			w11 = -0.08592237;
		} else {
			if (hops < 4) {
				w11 = -0.08383563;
			} else {
				w11 = -0.080402;
			}
		}
	} else {
		if (cons != 4) {
			if (hops < 3) {
				if (rel_time < 196) {
					if (rel_time < 116) {
						if (hops < 2) {
							w11 = 0.119895235;
						} else {
							w11 = 0.020951232;
						}
					} else {
						if (hops < 2) {
							w11 = 0.07991541;
						} else {
							w11 = 0.22503036;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 502) {
							w11 = -0.0651938;
						} else {
							w11 = 0.041918054;
						}
					} else {
						if (rel_time < 5687) {
							w11 = 0.062039033;
						} else {
							w11 = 0.0855366;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 186) {
						if (hops < 4) {
							w11 = -0.097953804;
						} else {
							w11 = 0.16693577;
						}
					} else {
						if (hops < 4) {
							w11 = 0.10193736;
						} else {
							w11 = 0.07902929;
						}
					}
				} else {
					if (rel_time < 196) {
						if (hops < 4) {
							w11 = 0.26982957;
						} else {
							w11 = 0.18222927;
						}
					} else {
						if (rel_time < 1955) {
							w11 = 0.12904839;
						} else {
							w11 = 0.11162863;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 778) {
					if (rel_time < 391) {
						if (hops < 2) {
							w11 = 0.116168216;
						} else {
							w11 = 0.14365245;
						}
					} else {
						if (hops < 2) {
							w11 = 0.0047722626;
						} else {
							w11 = -0.10892897;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 13332) {
							w11 = 0.09448887;
						} else {
							w11 = 0.11694449;
						}
					} else {
						if (rel_time < 14901) {
							w11 = 0.16585541;
						} else {
							w11 = 0.062472444;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 14901) {
						if (rel_time < 778) {
							w11 = 0.0014100734;
						} else {
							w11 = 0.043504722;
						}
					} else {
						w11 = 0.23901716;
					}
				} else {
					if (rel_time < 14901) {
						if (rel_time < 778) {
							w11 = 0.09768984;
						} else {
							w11 = 0.13241754;
						}
					} else {
						w11 = 0.19015092;
					}
				}
			}
		}
	}
	float w12;
	if (size < 126) {
		if (rel_time < 15299) {
			if (hops < 2) {
				w12 = -0.0440974;
			} else {
				w12 = -0.04203117;
			}
		} else {
			if (rel_time < 15686) {
				if (rel_time < 15490) {
					w12 = 0.003930014;
				} else {
					w12 = -0.02354441;
				}
			} else {
				w12 = -0.046880484;
			}
		}
	} else {
		if (prod != 0) {
			if (hops < 2) {
				if (cons != 2) {
					if (rel_time < 186) {
						w12 = 0.024734743;
					} else {
						w12 = 0.05814342;
					}
				} else {
					w12 = 0.098153934;
				}
			} else {
				if (cons != 2) {
					if (hops < 3) {
						if (cons != 3) {
							w12 = 0.06753336;
						} else {
							w12 = 0.2031507;
						}
					} else {
						if (cons != 3) {
							w12 = 0.09181505;
						} else {
							w12 = 0.010370403;
						}
					}
				} else {
					if (hops < 3) {
						w12 = -0.0429891;
					} else {
						if (hops < 4) {
							w12 = 0.15657869;
						} else {
							w12 = 0.07749194;
						}
					}
				}
			}
		} else {
			if (rel_time < 778) {
				if (rel_time < 502) {
					if (cons != 2) {
						if (hops < 3) {
							w12 = 0.031832885;
						} else {
							w12 = -0.029616026;
						}
					} else {
						if (hops < 3) {
							w12 = 0.01812047;
						} else {
							w12 = 0.1110824;
						}
					}
				} else {
					if (rel_time < 587) {
						if (hops < 2) {
							w12 = 0.019265026;
						} else {
							w12 = -0.10200645;
						}
					} else {
						if (hops < 3) {
							w12 = -0.0019094633;
						} else {
							w12 = -0.035255488;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (hops < 3) {
						if (cons != 2) {
							w12 = 0.020952698;
						} else {
							w12 = 0.039073277;
						}
					} else {
						if (rel_time < 11174) {
							w12 = 0.046386514;
						} else {
							w12 = 0.058648787;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w12 = 0.049027506;
						} else {
							w12 = 0.08022308;
						}
					} else {
						if (rel_time < 14901) {
							w12 = 0.03273459;
						} else {
							w12 = 0.11367794;
						}
					}
				}
			}
		}
	}
	float w13;
	if (size < 126) {
		w13 = -0.021198483;
	} else {
		if (cons != 3) {
			if (hops < 2) {
				if (cons != 4) {
					if (rel_time < 973) {
						if (cons != 1) {
							w13 = 0.05780491;
						} else {
							w13 = 0.01757832;
						}
					} else {
						if (rel_time < 10984) {
							w13 = 0.011767038;
						} else {
							w13 = 0.0025912335;
						}
					}
				} else {
					if (rel_time < 14901) {
						if (rel_time < 3131) {
							w13 = 0.014533909;
						} else {
							w13 = 0.02492704;
						}
					} else {
						w13 = 0.04752936;
					}
				}
			} else {
				if (rel_time < 2739) {
					if (prod != 0) {
						if (hops < 3) {
							w13 = 0.015441245;
						} else {
							w13 = 0.053488143;
						}
					} else {
						if (rel_time < 778) {
							w13 = -0.0078473585;
						} else {
							w13 = 0.02108996;
						}
					}
				} else {
					if (cons != 1) {
						if (hops < 3) {
							w13 = 0.037040446;
						} else {
							w13 = 0.025042437;
						}
					} else {
						if (rel_time < 4707) {
							w13 = 0.03371104;
						} else {
							w13 = 0.018831346;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 186) {
					if (hops < 2) {
						w13 = 0.015535577;
					} else {
						w13 = 0.1016631;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1176) {
							w13 = -0.04187758;
						} else {
							w13 = 0.020177292;
						}
					} else {
						if (rel_time < 502) {
							w13 = -0.054188017;
						} else {
							w13 = -0.005571216;
						}
					}
				}
			} else {
				if (rel_time < 1176) {
					if (rel_time < 186) {
						if (hops < 4) {
							w13 = -0.013656629;
						} else {
							w13 = 0.062194023;
						}
					} else {
						if (hops < 4) {
							w13 = 0.1695945;
						} else {
							w13 = -0.05201859;
						}
					}
				} else {
					if (rel_time < 13920) {
						if (rel_time < 2935) {
							w13 = 0.029188676;
						} else {
							w13 = 0.015742464;
						}
					} else {
						if (rel_time < 14705) {
							w13 = 0.058337018;
						} else {
							w13 = 0.022157095;
						}
					}
				}
			}
		}
	}
	float w14;
	if (size < 126) {
		w14 = -0.010601285;
	} else {
		if (hops < 4) {
			if (prod != 0) {
				if (hops < 3) {
					if (rel_time < 116) {
						if (rel_time < 68) {
							w14 = 0.012019761;
						} else {
							w14 = -0.0063808793;
						}
					} else {
						if (hops < 2) {
							w14 = 0.014837453;
						} else {
							w14 = 0.040709816;
						}
					}
				} else {
					if (rel_time < 116) {
						w14 = 0.053821158;
					} else {
						w14 = -0.00048169223;
					}
				}
			} else {
				if (rel_time < 132) {
					if (hops < 3) {
						if (hops < 2) {
							w14 = -0.008776973;
						} else {
							w14 = 0.15152325;
						}
					} else {
						w14 = -0.24848224;
					}
				} else {
					if (rel_time < 10395) {
						if (rel_time < 7447) {
							w14 = 0.0093997065;
						} else {
							w14 = 0.0029808949;
						}
					} else {
						if (rel_time < 12351) {
							w14 = 0.017725678;
						} else {
							w14 = 0.009162341;
						}
					}
				}
			}
		} else {
			if (cons != 4) {
				if (rel_time < 196) {
					if (prod != 0) {
						if (rel_time < 68) {
							w14 = -0.04178438;
						} else {
							w14 = 0.02162825;
						}
					} else {
						if (rel_time < 132) {
							w14 = 0.16988766;
						} else {
							w14 = 0.053138066;
						}
					}
				} else {
					if (rel_time < 502) {
						w14 = -0.034923594;
					} else {
						if (rel_time < 14312) {
							w14 = 0.011403039;
						} else {
							w14 = -0.0062990724;
						}
					}
				}
			} else {
				if (rel_time < 5485) {
					if (rel_time < 2347) {
						w14 = 0.030269708;
					} else {
						w14 = 0.065870754;
					}
				} else {
					if (rel_time < 12548) {
						if (rel_time < 10978) {
							w14 = 0.029128915;
						} else {
							w14 = -0.004023333;
						}
					} else {
						w14 = 0.04556015;
					}
				}
			}
		}
	}
	float w15;
	if (size < 126) {
		w15 = -0.0052988734;
	} else {
		if (cons != 3) {
			if (hops < 4) {
				if (rel_time < 4897) {
					if (rel_time < 4112) {
						if (rel_time < 2739) {
							w15 = 0.0019058435;
						} else {
							w15 = 0.008944776;
						}
					} else {
						if (rel_time < 4118) {
							w15 = -0.02719951;
						} else {
							w15 = -0.0019739098;
						}
					}
				} else {
					if (rel_time < 7447) {
						if (cons != 1) {
							w15 = 0.015887666;
						} else {
							w15 = 0.0030200933;
						}
					} else {
						if (rel_time < 8232) {
							w15 = -0.0066698347;
						} else {
							w15 = 0.0068015666;
						}
					}
				}
			} else {
				if (rel_time < 4112) {
					if (rel_time < 3328) {
						if (prod != 0) {
							w15 = -0.008244554;
						} else {
							w15 = 0.018984912;
						}
					} else {
						w15 = 0.06235461;
					}
				} else {
					if (rel_time < 6466) {
						if (rel_time < 6270) {
							w15 = 0.0031887766;
						} else {
							w15 = -0.0897544;
						}
					} else {
						if (rel_time < 12548) {
							w15 = 0.00880921;
						} else {
							w15 = 0.019463606;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1176) {
						if (rel_time < 186) {
							w15 = 0.0003510853;
						} else {
							w15 = -0.025656056;
						}
					} else {
						if (rel_time < 2151) {
							w15 = 0.024873372;
						} else {
							w15 = 0.0031512359;
						}
					}
				} else {
					if (rel_time < 14705) {
						if (rel_time < 186) {
							w15 = 0.030518096;
						} else {
							w15 = -0.010775803;
						}
					} else {
						w15 = 0.031364247;
					}
				}
			} else {
				if (rel_time < 502) {
					if (rel_time < 186) {
						w15 = 0.00011992035;
					} else {
						if (hops < 4) {
							w15 = 0.08594876;
						} else {
							w15 = -0.017513476;
						}
					}
				} else {
					if (rel_time < 13920) {
						if (rel_time < 11566) {
							w15 = 0.006074087;
						} else {
							w15 = -0.0048935334;
						}
					} else {
						if (hops < 4) {
							w15 = 0.024637558;
						} else {
							w15 = -0.0043479307;
						}
					}
				}
			}
		}
	}
	float w16;
	if (size < 126) {
		w16 = -0.0026514821;
	} else {
		if (rel_time < 13528) {
			if (rel_time < 12351) {
				if (rel_time < 6466) {
					if (rel_time < 5878) {
						if (rel_time < 5289) {
							w16 = 0.0015310752;
						} else {
							w16 = 0.009773713;
						}
					} else {
						if (hops < 3) {
							w16 = -0.0049026157;
						} else {
							w16 = -0.016925687;
						}
					}
				} else {
					if (rel_time < 7447) {
						w16 = 0.010297876;
					} else {
						if (rel_time < 9218) {
							w16 = -0.00046355813;
						} else {
							w16 = 0.005034759;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 12743) {
						w16 = 0.00571937;
					} else {
						if (rel_time < 12940) {
							w16 = -0.0489826;
						} else {
							w16 = -0.019223822;
						}
					}
				} else {
					if (rel_time < 12548) {
						w16 = -0.02037811;
					} else {
						if (hops < 4) {
							w16 = 0.00073183305;
						} else {
							w16 = 0.017297294;
						}
					}
				}
			}
		} else {
			if (rel_time < 14509) {
				if (cons != 2) {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 0.013943829;
						} else {
							w16 = -0.009372361;
						}
					} else {
						if (cons != 4) {
							w16 = 0.009706093;
						} else {
							w16 = 0.031638507;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 13534) {
							w16 = 0.014967186;
						} else {
							w16 = 0.034668617;
						}
					} else {
						if (rel_time < 13725) {
							w16 = 0.021624094;
						} else {
							w16 = -0.011232214;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (cons != 1) {
						if (rel_time < 15486) {
							w16 = 0.0016197311;
						} else {
							w16 = -0.011620477;
						}
					} else {
						w16 = -0.014063222;
					}
				} else {
					if (rel_time < 14901) {
						if (rel_time < 14705) {
							w16 = 0.017774539;
						} else {
							w16 = -0.030260146;
						}
					} else {
						if (hops < 4) {
							w16 = 0.024538893;
						} else {
							w16 = -0.005766456;
						}
					}
				}
			}
		}
	}
	float w17;
	if (size < 126) {
		w17 = -0.0013239695;
	} else {
		if (prod != 0) {
			w17 = 0.006186249;
		} else {
			if (rel_time < 778) {
				if (rel_time < 502) {
					if (hops < 4) {
						if (rel_time < 132) {
							w17 = -0.013871169;
						} else {
							w17 = 0.0052383128;
						}
					} else {
						if (rel_time < 132) {
							w17 = 0.07494865;
						} else {
							w17 = 0.0036025424;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 587) {
							w17 = -0.05055944;
						} else {
							w17 = -0.017964993;
						}
					} else {
						w17 = 0.026292238;
					}
				}
			} else {
				if (rel_time < 2151) {
					if (rel_time < 1758) {
						if (hops < 3) {
							w17 = -0.0012420664;
						} else {
							w17 = 0.01246553;
						}
					} else {
						if (hops < 3) {
							w17 = 0.020643968;
						} else {
							w17 = 0.0013095537;
						}
					}
				} else {
					if (rel_time < 2543) {
						if (rel_time < 2353) {
							w17 = -0.019518195;
						} else {
							w17 = -0.00784033;
						}
					} else {
						if (cons != 4) {
							w17 = 0.0004074037;
						} else {
							w17 = 0.0037611262;
						}
					}
				}
			}
		}
	}
	float w18;
	if (size < 126) {
		w18 = -0.00066021597;
	} else {
		if (cons != 3) {
			if (hops < 2) {
				if (rel_time < 1562) {
					if (rel_time < 68) {
						w18 = -0.0103605315;
					} else {
						if (rel_time < 1170) {
							w18 = 0.010010023;
						} else {
							w18 = 0.028202925;
						}
					}
				} else {
					if (rel_time < 15294) {
						if (rel_time < 10984) {
							w18 = -0.0004902993;
						} else {
							w18 = -0.007940427;
						}
					} else {
						w18 = 0.019721592;
					}
				}
			} else {
				if (hops < 3) {
					if (cons != 2) {
						if (rel_time < 132) {
							w18 = 0.04601203;
						} else {
							w18 = 0.006178947;
						}
					} else {
						if (rel_time < 1170) {
							w18 = -0.035704736;
						} else {
							w18 = 0.0017111765;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 132) {
							w18 = -0.03333895;
						} else {
							w18 = -0.0033045379;
						}
					} else {
						if (rel_time < 1170) {
							w18 = 0.026730346;
						} else {
							w18 = 0.0066782096;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 12161) {
					if (hops < 2) {
						if (rel_time < 1366) {
							w18 = -0.007965785;
						} else {
							w18 = 0.0016254378;
						}
					} else {
						if (rel_time < 11566) {
							w18 = -0.008987501;
						} else {
							w18 = -0.26185748;
						}
					}
				} else {
					if (rel_time < 12351) {
						w18 = 0.018270515;
					} else {
						w18 = 0.0014788707;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 15300) {
						if (rel_time < 1366) {
							w18 = 0.01472746;
						} else {
							w18 = 0.0022734473;
						}
					} else {
						w18 = -0.028770108;
					}
				} else {
					if (rel_time < 5289) {
						if (rel_time < 2935) {
							w18 = -0.0018423479;
						} else {
							w18 = -0.035753112;
						}
					} else {
						if (rel_time < 9997) {
							w18 = 0.014039186;
						} else {
							w18 = -0.009033571;
						}
					}
				}
			}
		}
	}
	return (521.7953 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18);
}
