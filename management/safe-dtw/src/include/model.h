#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int model(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w0 = -26378;
			} else {
				w0 = -25840;
			}
		} else {
			w0 = -25197;
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w0 = 26436;
			} else {
				w0 = 36454;
			}
		} else {
			if (rel_time < 121) {
				w0 = 17964;
			} else {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 3) {
							w0 = 24575;
						} else {
							w0 = 25480;
						}
					} else {
						if (hops < 3) {
							w0 = 23134;
						} else {
							w0 = 24050;
						}
					}
				} else {
					if (hops < 3) {
						w0 = 23103;
					} else {
						w0 = 24020;
					}
				}
			}
		}
	}
	int w1;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w1 = -18465;
			} else {
				w1 = -18089;
			}
		} else {
			if (hops < 4) {
				w1 = -17744;
			} else {
				w1 = -17200;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w1 = 18523;
			} else {
				w1 = 25526;
			}
		} else {
			if (rel_time < 121) {
				w1 = 12587;
			} else {
				if (hops < 2) {
					if (cons != 3) {
						if (cons != 1) {
							w1 = 16936;
						} else {
							w1 = 15915;
						}
					} else {
						w1 = 15914;
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w1 = 16640;
						} else {
							w1 = 17647;
						}
					} else {
						if (rel_time < 14392) {
							w1 = 17567;
						} else {
							w1 = 19658;
						}
					}
				}
			}
		}
	}
	int w2;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w2 = -12926;
			} else {
				w2 = -12663;
			}
		} else {
			if (hops < 4) {
				w2 = -12421;
			} else {
				w2 = -12043;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w2 = 12978;
			} else {
				w2 = 17874;
			}
		} else {
			if (rel_time < 121) {
				if (hops < 2) {
					w2 = 8171;
				} else {
					w2 = 9097;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 14961) {
						if (cons != 2) {
							w2 = 11515;
						} else {
							w2 = 11988;
						}
					} else {
						w2 = 13748;
					}
				} else {
					if (cons != 3) {
						if (cons != 1) {
							w2 = 12541;
						} else {
							w2 = 11847;
						}
					} else {
						w2 = 11827;
					}
				}
			}
		}
	}
	int w3;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w3 = -9049;
			} else {
				w3 = -8864;
			}
		} else {
			if (hops < 4) {
				w3 = -8695;
			} else {
				w3 = -8431;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w3 = 9093;
			} else {
				if (hops < 2) {
					w3 = 11851;
				} else {
					w3 = 12823;
				}
			}
		} else {
			if (rel_time < 121) {
				if (hops < 3) {
					w3 = 5918;
				} else {
					w3 = 6670;
				}
			} else {
				if (hops < 2) {
					if (cons != 4) {
						if (cons != 2) {
							w3 = 7690;
						} else {
							w3 = 8238;
						}
					} else {
						if (rel_time < 14392) {
							w3 = 8317;
						} else {
							w3 = 9749;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w3 = 8147;
						} else {
							w3 = 8670;
						}
					} else {
						if (rel_time < 14392) {
							w3 = 8694;
						} else {
							w3 = 9839;
						}
					}
				}
			}
		}
	}
	int w4;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w4 = -6334;
			} else {
				w4 = -6205;
			}
		} else {
			if (hops < 4) {
				w4 = -6087;
			} else {
				w4 = -5903;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 2) {
					w4 = 5790;
				} else {
					w4 = 6667;
				}
			} else {
				if (cons != 3) {
					if (hops < 3) {
						w4 = 8759;
					} else {
						w4 = 9493;
					}
				} else {
					w4 = 8245;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 121) {
					if (hops < 2) {
						w4 = 3975;
					} else {
						w4 = 4427;
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w4 = 5545;
						} else {
							w4 = 5922;
						}
					} else {
						if (rel_time < 14392) {
							w4 = 5965;
						} else {
							w4 = 6843;
						}
					}
				}
			} else {
				if (rel_time < 121) {
					w4 = 4959;
				} else {
					w4 = 6428;
				}
			}
		}
	}
	int w5;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w5 = -4434;
			} else {
				w5 = -4344;
			}
		} else {
			if (hops < 4) {
				w5 = -4261;
			} else {
				w5 = -4133;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 3) {
					w5 = 4209;
				} else {
					w5 = 4962;
				}
			} else {
				if (hops < 3) {
					if (cons != 3) {
						w5 = 6136;
					} else {
						w5 = 5505;
					}
				} else {
					w5 = 6539;
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 121) {
							w5 = 2791;
						} else {
							w5 = 3720;
						}
					} else {
						if (rel_time < 180) {
							w5 = 4851;
						} else {
							w5 = 3946;
						}
					}
				} else {
					if (rel_time < 14392) {
						w5 = 4034;
					} else {
						w5 = 4806;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 121) {
						w5 = 3104;
					} else {
						if (rel_time < 180) {
							w5 = 5098;
						} else {
							w5 = 4106;
						}
					}
				} else {
					if (rel_time < 14961) {
						if (rel_time < 121) {
							w5 = 3521;
						} else {
							w5 = 4485;
						}
					} else {
						w5 = 5605;
					}
				}
			}
		}
	}
	int w6;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w6 = -3104;
			} else {
				w6 = -3041;
			}
		} else {
			if (hops < 4) {
				w6 = -2983;
			} else {
				w6 = -2894;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 3) {
					w6 = 2950;
				} else {
					w6 = 3483;
				}
			} else {
				if (rel_time < 111) {
					w6 = 4654;
				} else {
					if (hops < 2) {
						w6 = 3752;
					} else {
						if (hops < 4) {
							w6 = 4232;
						} else {
							w6 = 4918;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 473) {
							w6 = 2188;
						} else {
							w6 = 2645;
						}
					} else {
						if (rel_time < 180) {
							w6 = 3478;
						} else {
							w6 = 2831;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 14392) {
							w6 = 2824;
						} else {
							w6 = 3375;
						}
					} else {
						if (rel_time < 737) {
							w6 = 2725;
						} else {
							w6 = 3068;
						}
					}
				}
			} else {
				if (rel_time < 14961) {
					if (hops < 4) {
						if (cons != 2) {
							w6 = 2882;
						} else {
							w6 = 3040;
						}
					} else {
						if (cons != 2) {
							w6 = 3070;
						} else {
							w6 = 3319;
						}
					}
				} else {
					w6 = 3933;
				}
			}
		}
	}
	int w7;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w7 = -2173;
			} else {
				w7 = -2129;
			}
		} else {
			if (hops < 4) {
				w7 = -2088;
			} else {
				w7 = -2026;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 2) {
					w7 = 1929;
				} else {
					if (hops < 4) {
						w7 = 2276;
					} else {
						w7 = 2826;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 111) {
						w7 = 2970;
					} else {
						w7 = 2630;
					}
				} else {
					if (cons != 3) {
						if (hops < 4) {
							w7 = 3212;
						} else {
							w7 = 3816;
						}
					} else {
						w7 = 2872;
					}
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (rel_time < 121) {
						if (hops < 3) {
							w7 = 1354;
						} else {
							w7 = 1513;
						}
					} else {
						if (hops < 3) {
							w7 = 1848;
						} else {
							w7 = 1994;
						}
					}
				} else {
					if (rel_time < 180) {
						if (hops < 3) {
							w7 = 2438;
						} else {
							w7 = 2775;
						}
					} else {
						if (hops < 2) {
							w7 = 1913;
						} else {
							w7 = 2098;
						}
					}
				}
			} else {
				if (rel_time < 14392) {
					if (hops < 2) {
						if (rel_time < 737) {
							w7 = 1680;
						} else {
							w7 = 1994;
						}
					} else {
						if (hops < 4) {
							w7 = 2128;
						} else {
							w7 = 2352;
						}
					}
				} else {
					if (hops < 3) {
						w7 = 2374;
					} else {
						w7 = 2762;
					}
				}
			}
		}
	}
	int w8;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w8 = -1521;
			} else {
				w8 = -1490;
			}
		} else {
			if (hops < 4) {
				w8 = -1462;
			} else {
				w8 = -1418;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 3) {
					if (hops < 2) {
						w8 = 1354;
					} else {
						w8 = 1530;
					}
				} else {
					w8 = 1737;
				}
			} else {
				if (rel_time < 111) {
					if (hops < 3) {
						w8 = 2187;
					} else {
						w8 = 2551;
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w8 = 1844;
						} else {
							w8 = 2054;
						}
					} else {
						w8 = 2486;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 121) {
							w8 = 905;
						} else {
							w8 = 1260;
						}
					} else {
						if (rel_time < 180) {
							w8 = 1643;
						} else {
							w8 = 1340;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (rel_time < 737) {
							w8 = 1179;
						} else {
							w8 = 1396;
						}
					} else {
						w8 = 1662;
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 473) {
							w8 = 1083;
						} else {
							w8 = 1366;
						}
					} else {
						if (rel_time < 180) {
							w8 = 1868;
						} else {
							w8 = 1469;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (rel_time < 737) {
							w8 = 1250;
						} else {
							w8 = 1518;
						}
					} else {
						if (hops < 3) {
							w8 = 1656;
						} else {
							w8 = 1939;
						}
					}
				}
			}
		}
	}
	int w9;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w9 = -1065;
			} else {
				w9 = -1043;
			}
		} else {
			if (hops < 4) {
				w9 = -1023;
			} else {
				w9 = -993;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 4) {
					if (hops < 2) {
						w9 = 950;
					} else {
						w9 = 1110;
					}
				} else {
					w9 = 1504;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 111) {
						if (hops < 2) {
							w9 = 1434;
						} else {
							w9 = 1662;
						}
					} else {
						if (hops < 2) {
							w9 = 1293;
						} else {
							w9 = 1439;
						}
					}
				} else {
					w9 = 1869;
				}
			}
		} else {
			if (hops < 4) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 473) {
							w9 = 727;
						} else {
							w9 = 922;
						}
					} else {
						if (rel_time < 180) {
							w9 = 1226;
						} else {
							w9 = 982;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (rel_time < 737) {
							w9 = 854;
						} else {
							w9 = 1023;
						}
					} else {
						if (hops < 3) {
							w9 = 1168;
						} else {
							w9 = 1317;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 473) {
							w9 = 872;
						} else {
							w9 = 1072;
						}
					} else {
						if (rel_time < 737) {
							w9 = 931;
						} else {
							w9 = 1229;
						}
					}
				} else {
					if (rel_time < 180) {
						w9 = 1768;
					} else {
						w9 = 1217;
					}
				}
			}
		}
	}
	int w10;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w10 = -745;
			} else {
				w10 = -730;
			}
		} else {
			if (hops < 4) {
				w10 = -716;
			} else {
				w10 = -695;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 4) {
					if (hops < 2) {
						w10 = 667;
					} else {
						w10 = 778;
					}
				} else {
					w10 = 1069;
				}
			} else {
				if (cons != 3) {
					if (hops < 2) {
						w10 = 969;
					} else {
						if (hops < 4) {
							w10 = 1129;
						} else {
							w10 = 1398;
						}
					}
				} else {
					if (hops < 3) {
						w10 = 847;
					} else {
						w10 = 1072;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 4) {
					if (rel_time < 121) {
						w10 = 433;
					} else {
						if (cons != 2) {
							w10 = 626;
						} else {
							w10 = 675;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 14392) {
							w10 = 665;
						} else {
							w10 = 819;
						}
					} else {
						if (rel_time < 737) {
							w10 = 652;
						} else {
							w10 = 739;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 121) {
						w10 = 487;
					} else {
						if (rel_time < 180) {
							w10 = 944;
						} else {
							w10 = 717;
						}
					}
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w10 = 745;
						} else {
							w10 = 852;
						}
					} else {
						if (rel_time < 180) {
							w10 = 1260;
						} else {
							w10 = 853;
						}
					}
				}
			}
		}
	}
	int w11;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w11 = -522;
			} else {
				w11 = -511;
			}
		} else {
			if (hops < 4) {
				w11 = -501;
			} else {
				w11 = -487;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 3) {
					w11 = 490;
				} else {
					if (hops < 4) {
						w11 = 581;
					} else {
						w11 = 759;
					}
				}
			} else {
				if (rel_time < 111) {
					if (hops < 3) {
						w11 = 754;
					} else {
						w11 = 930;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 175) {
							w11 = 594;
						} else {
							w11 = 712;
						}
					} else {
						if (hops < 4) {
							w11 = 724;
						} else {
							w11 = 840;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (rel_time < 121) {
						w11 = 290;
					} else {
						if (rel_time < 180) {
							w11 = 587;
						} else {
							w11 = 427;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (rel_time < 737) {
							w11 = 375;
						} else {
							w11 = 471;
						}
					} else {
						w11 = 575;
					}
				}
			} else {
				if (cons != 1) {
					if (cons != 3) {
						if (hops < 4) {
							w11 = 518;
						} else {
							w11 = 605;
						}
					} else {
						if (rel_time < 473) {
							w11 = 396;
						} else {
							w11 = 480;
						}
					}
				} else {
					if (rel_time < 121) {
						w11 = 335;
					} else {
						if (hops < 4) {
							w11 = 460;
						} else {
							w11 = 523;
						}
					}
				}
			}
		}
	}
	int w12;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w12 = -365;
			} else {
				w12 = -358;
			}
		} else {
			if (hops < 4) {
				w12 = -351;
			} else {
				w12 = -341;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 3) {
					if (hops < 2) {
						w12 = 322;
					} else {
						w12 = 365;
					}
				} else {
					if (hops < 4) {
						w12 = 408;
					} else {
						w12 = 539;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 111) {
						if (hops < 2) {
							w12 = 494;
						} else {
							w12 = 580;
						}
					} else {
						if (hops < 2) {
							w12 = 439;
						} else {
							w12 = 492;
						}
					}
				} else {
					if (rel_time < 111) {
						w12 = 804;
					} else {
						w12 = 592;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 121) {
							w12 = 210;
						} else {
							w12 = 304;
						}
					} else {
						if (rel_time < 180) {
							w12 = 452;
						} else {
							w12 = 324;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (hops < 2) {
							w12 = 326;
						} else {
							w12 = 355;
						}
					} else {
						w12 = 424;
					}
				}
			} else {
				if (rel_time < 14961) {
					if (hops < 4) {
						if (rel_time < 737) {
							w12 = 294;
						} else {
							w12 = 355;
						}
					} else {
						if (cons != 2) {
							w12 = 380;
						} else {
							w12 = 430;
						}
					}
				} else {
					if (hops < 4) {
						w12 = 559;
					} else {
						w12 = 723;
					}
				}
			}
		}
	}
	int w13;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w13 = -256;
			} else {
				w13 = -250;
			}
		} else {
			if (hops < 4) {
				w13 = -246;
			} else {
				w13 = -239;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 4) {
					if (hops < 2) {
						w13 = 226;
					} else {
						w13 = 271;
					}
				} else {
					w13 = 383;
				}
			} else {
				if (cons != 3) {
					if (hops < 2) {
						if (rel_time < 111) {
							w13 = 347;
						} else {
							w13 = 294;
						}
					} else {
						if (hops < 4) {
							w13 = 399;
						} else {
							w13 = 518;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w13 = 319;
						} else {
							w13 = 236;
						}
					} else {
						w13 = 378;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 473) {
							w13 = 130;
						} else {
							w13 = 203;
						}
					} else {
						if (rel_time < 180) {
							w13 = 277;
						} else {
							w13 = 216;
						}
					}
				} else {
					if (rel_time < 737) {
						w13 = 166;
					} else {
						if (rel_time < 14392) {
							w13 = 232;
						} else {
							w13 = 278;
						}
					}
				}
			} else {
				if (rel_time < 14961) {
					if (cons != 1) {
						if (rel_time < 180) {
							w13 = 408;
						} else {
							w13 = 248;
						}
					} else {
						if (rel_time < 121) {
							w13 = 157;
						} else {
							w13 = 227;
						}
					}
				} else {
					if (hops < 3) {
						w13 = 313;
					} else {
						if (hops < 4) {
							w13 = 393;
						} else {
							w13 = 514;
						}
					}
				}
			}
		}
	}
	int w14;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w14 = -179;
			} else {
				w14 = -175;
			}
		} else {
			if (hops < 4) {
				w14 = -172;
			} else {
				w14 = -167;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 3) {
					w14 = 167;
				} else {
					if (hops < 4) {
						w14 = 206;
					} else {
						w14 = 272;
					}
				}
			} else {
				if (cons != 3) {
					if (hops < 2) {
						if (rel_time < 111) {
							w14 = 244;
						} else {
							w14 = 207;
						}
					} else {
						if (hops < 4) {
							w14 = 280;
						} else {
							w14 = 365;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 224;
						} else {
							w14 = 165;
						}
					} else {
						w14 = 265;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 4) {
					if (hops < 2) {
						if (cons != 1) {
							w14 = 149;
						} else {
							w14 = 134;
						}
					} else {
						if (cons != 2) {
							w14 = 153;
						} else {
							w14 = 169;
						}
					}
				} else {
					if (rel_time < 737) {
						w14 = 120;
					} else {
						if (rel_time < 14392) {
							w14 = 170;
						} else {
							w14 = 209;
						}
					}
				}
			} else {
				if (rel_time < 14961) {
					if (hops < 4) {
						if (rel_time < 737) {
							w14 = 126;
						} else {
							w14 = 176;
						}
					} else {
						if (rel_time < 180) {
							w14 = 295;
						} else {
							w14 = 200;
						}
					}
				} else {
					if (hops < 4) {
						w14 = 276;
					} else {
						w14 = 366;
					}
				}
			}
		}
	}
	int w15;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w15 = -125;
			} else {
				w15 = -123;
			}
		} else {
			if (hops < 4) {
				w15 = -120;
			} else {
				w15 = -117;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 2) {
				if (rel_time < 63) {
					if (hops < 3) {
						if (hops < 2) {
							w15 = 109;
						} else {
							w15 = 126;
						}
					} else {
						if (hops < 4) {
							w15 = 145;
						} else {
							w15 = 193;
						}
					}
				} else {
					if (rel_time < 175) {
						if (hops < 3) {
							w15 = 137;
						} else {
							w15 = 186;
						}
					} else {
						if (hops < 2) {
							w15 = 145;
						} else {
							w15 = 188;
						}
					}
				}
			} else {
				if (hops < 3) {
					w15 = 177;
				} else {
					if (hops < 4) {
						w15 = 232;
					} else {
						w15 = 315;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 4) {
					if (rel_time < 121) {
						w15 = 61;
					} else {
						if (rel_time < 180) {
							w15 = 167;
						} else {
							w15 = 105;
						}
					}
				} else {
					if (rel_time < 737) {
						w15 = 84;
					} else {
						if (hops < 2) {
							w15 = 113;
						} else {
							w15 = 128;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (rel_time < 180) {
						if (hops < 4) {
							w15 = 262;
						} else {
							w15 = 398;
						}
					} else {
						if (rel_time < 737) {
							w15 = 0;
						} else {
							w15 = 134;
						}
					}
				} else {
					if (rel_time < 121) {
						if (hops < 4) {
							w15 = 71;
						} else {
							w15 = 49;
						}
					} else {
						if (hops < 4) {
							w15 = 107;
						} else {
							w15 = 124;
						}
					}
				}
			}
		}
	}
	int w16;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w16 = -88;
			} else {
				w16 = -86;
			}
		} else {
			w16 = -84;
		}
	} else {
		if (prod != 0) {
			if (cons != 2) {
				if (rel_time < 63) {
					if (hops < 3) {
						w16 = 82;
					} else {
						if (hops < 4) {
							w16 = 102;
						} else {
							w16 = 137;
						}
					}
				} else {
					if (rel_time < 175) {
						if (hops < 3) {
							w16 = 96;
						} else {
							w16 = 131;
						}
					} else {
						if (hops < 3) {
							w16 = 136;
						} else {
							w16 = 96;
						}
					}
				}
			} else {
				if (hops < 3) {
					w16 = 124;
				} else {
					if (hops < 4) {
						w16 = 163;
					} else {
						w16 = 223;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 737) {
					if (cons != 2) {
						if (cons != 3) {
							w16 = 50;
						} else {
							w16 = 5;
						}
					} else {
						w16 = 101;
					}
				} else {
					if (cons != 1) {
						if (rel_time < 14961) {
							w16 = 74;
						} else {
							w16 = 99;
						}
					} else {
						if (rel_time < 13823) {
							w16 = 63;
						} else {
							w16 = 86;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 473) {
							w16 = 48;
						} else {
							w16 = 77;
						}
					} else {
						if (rel_time < 180) {
							w16 = 170;
						} else {
							w16 = 89;
						}
					}
				} else {
					if (rel_time < 737) {
						if (hops < 3) {
							w16 = 63;
						} else {
							w16 = -9;
						}
					} else {
						if (hops < 3) {
							w16 = 89;
						} else {
							w16 = 111;
						}
					}
				}
			}
		}
	}
	int w17;
	if (size < 126) {
		if (hops < 3) {
			w17 = -61;
		} else {
			if (hops < 4) {
				w17 = -59;
			} else {
				w17 = -57;
			}
		}
	} else {
		if (hops < 4) {
			if (prod != 0) {
				if (rel_time < 63) {
					if (hops < 2) {
						w17 = 52;
					} else {
						w17 = 68;
					}
				} else {
					if (rel_time < 111) {
						if (hops < 3) {
							w17 = 87;
						} else {
							w17 = 115;
						}
					} else {
						if (rel_time < 175) {
							w17 = 74;
						} else {
							w17 = 84;
						}
					}
				}
			} else {
				if (rel_time < 14961) {
					if (cons != 4) {
						if (cons != 2) {
							w17 = 49;
						} else {
							w17 = 59;
						}
					} else {
						if (rel_time < 737) {
							w17 = 28;
						} else {
							w17 = 62;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w17 = 70;
						} else {
							w17 = 93;
						}
					} else {
						w17 = 121;
					}
				}
			}
		} else {
			if (rel_time < 14961) {
				if (rel_time < 374) {
					if (cons != 2) {
						if (prod != 0) {
							w17 = 104;
						} else {
							w17 = 21;
						}
					} else {
						if (rel_time < 111) {
							w17 = 159;
						} else {
							w17 = 235;
						}
					}
				} else {
					if (rel_time < 926) {
						if (rel_time < 737) {
							w17 = 13;
						} else {
							w17 = 45;
						}
					} else {
						if (cons != 1) {
							w17 = 83;
						} else {
							w17 = 65;
						}
					}
				}
			} else {
				w17 = 190;
			}
		}
	}
	int w18;
	if (size < 126) {
		if (hops < 2) {
			w18 = -43;
		} else {
			if (hops < 4) {
				w18 = -42;
			} else {
				w18 = -40;
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 374) {
				if (cons != 1) {
					if (cons != 2) {
						if (rel_time < 175) {
							w18 = 52;
						} else {
							w18 = 59;
						}
					} else {
						if (hops < 3) {
							w18 = 61;
						} else {
							w18 = 100;
						}
					}
				} else {
					if (rel_time < 63) {
						if (hops < 2) {
							w18 = 36;
						} else {
							w18 = 47;
						}
					} else {
						w18 = 16;
					}
				}
			} else {
				if (rel_time < 737) {
					if (hops < 3) {
						if (hops < 2) {
							w18 = 10;
						} else {
							w18 = 48;
						}
					} else {
						w18 = -21;
					}
				} else {
					if (cons != 4) {
						if (hops < 2) {
							w18 = 33;
						} else {
							w18 = 39;
						}
					} else {
						if (hops < 3) {
							w18 = 41;
						} else {
							w18 = 55;
						}
					}
				}
			}
		} else {
			if (rel_time < 14961) {
				if (rel_time < 374) {
					if (cons != 2) {
						if (prod != 0) {
							w18 = 73;
						} else {
							w18 = 15;
						}
					} else {
						if (rel_time < 111) {
							w18 = 113;
						} else {
							w18 = 167;
						}
					}
				} else {
					if (rel_time < 926) {
						if (cons != 4) {
							w18 = 27;
						} else {
							w18 = 0;
						}
					} else {
						if (cons != 1) {
							w18 = 58;
						} else {
							w18 = 46;
						}
					}
				}
			} else {
				w18 = 135;
			}
		}
	}
	int w19;
	if (size < 126) {
		if (hops < 2) {
			w19 = -30;
		} else {
			w19 = -29;
		}
	} else {
		if (hops < 2) {
			if (cons != 1) {
				if (rel_time < 180) {
					if (cons != 2) {
						w19 = 51;
					} else {
						w19 = 36;
					}
				} else {
					if (rel_time < 473) {
						if (rel_time < 374) {
							w19 = 19;
						} else {
							w19 = -14;
						}
					} else {
						if (rel_time < 14961) {
							w19 = 25;
						} else {
							w19 = 37;
						}
					}
				}
			} else {
				if (rel_time < 13823) {
					if (rel_time < 10788) {
						if (rel_time < 6995) {
							w19 = 19;
						} else {
							w19 = 27;
						}
					} else {
						if (rel_time < 13064) {
							w19 = 14;
						} else {
							w19 = 4;
						}
					}
				} else {
					w19 = 36;
				}
			}
		} else {
			if (rel_time < 14961) {
				if (rel_time < 374) {
					if (rel_time < 175) {
						if (prod != 0) {
							w19 = 39;
						} else {
							w19 = 12;
						}
					} else {
						if (rel_time < 180) {
							w19 = 72;
						} else {
							w19 = 54;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 737) {
							w19 = 13;
						} else {
							w19 = 29;
						}
					} else {
						if (rel_time < 7185) {
							w19 = 31;
						} else {
							w19 = 43;
						}
					}
				}
			} else {
				if (hops < 3) {
					w19 = 53;
				} else {
					if (hops < 4) {
						w19 = 69;
					} else {
						w19 = 96;
					}
				}
			}
		}
	}
	int w20;
	if (size < 126) {
		if (hops < 3) {
			w20 = -21;
		} else {
			w20 = -20;
		}
	} else {
		if (hops < 4) {
			if (rel_time < 14961) {
				if (hops < 2) {
					if (prod != 0) {
						if (cons != 3) {
							w20 = 20;
						} else {
							w20 = 36;
						}
					} else {
						if (rel_time < 473) {
							w20 = 6;
						} else {
							w20 = 17;
						}
					}
				} else {
					if (cons != 3) {
						if (cons != 1) {
							w20 = 24;
						} else {
							w20 = 17;
						}
					} else {
						if (rel_time < 13443) {
							w20 = 15;
						} else {
							w20 = 31;
						}
					}
				}
			} else {
				if (hops < 2) {
					w20 = 26;
				} else {
					if (hops < 3) {
						w20 = 37;
					} else {
						w20 = 48;
					}
				}
			}
		} else {
			if (cons != 2) {
				if (rel_time < 14961) {
					if (cons != 4) {
						if (rel_time < 14581) {
							w20 = 22;
						} else {
							w20 = -4;
						}
					} else {
						if (rel_time < 12116) {
							w20 = 34;
						} else {
							w20 = 12;
						}
					}
				} else {
					w20 = 68;
				}
			} else {
				if (rel_time < 180) {
					w20 = 83;
				} else {
					if (rel_time < 7185) {
						if (rel_time < 6426) {
							w20 = 28;
						} else {
							w20 = -3;
						}
					} else {
						if (rel_time < 14598) {
							w20 = 42;
						} else {
							w20 = 14;
						}
					}
				}
			}
		}
	}
	int w21;
	if (size < 126) {
		w21 = -14;
	} else {
		if (rel_time < 374) {
			if (cons != 2) {
				if (prod != 0) {
					if (hops < 4) {
						if (rel_time < 175) {
							w21 = 16;
						} else {
							w21 = 22;
						}
					} else {
						w21 = 31;
					}
				} else {
					w21 = 3;
				}
			} else {
				if (hops < 3) {
					w21 = 23;
				} else {
					if (rel_time < 111) {
						w21 = 35;
					} else {
						w21 = 61;
					}
				}
			}
		} else {
			if (rel_time < 737) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 473) {
							w21 = -12;
						} else {
							w21 = 17;
						}
					} else {
						if (rel_time < 473) {
							w21 = 37;
						} else {
							w21 = 11;
						}
					}
				} else {
					if (hops < 4) {
						w21 = -24;
					} else {
						w21 = -12;
					}
				}
			} else {
				if (cons != 4) {
					if (rel_time < 13823) {
						if (rel_time < 3202) {
							w21 = 16;
						} else {
							w21 = 11;
						}
					} else {
						if (rel_time < 14581) {
							w21 = 21;
						} else {
							w21 = 13;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1495) {
							w21 = 5;
						} else {
							w21 = 14;
						}
					} else {
						if (rel_time < 6806) {
							w21 = 18;
						} else {
							w21 = 26;
						}
					}
				}
			}
		}
	}
	int w22;
	if (size < 126) {
		w22 = -10;
	} else {
		if (hops < 4) {
			if (rel_time < 14961) {
				if (rel_time < 374) {
					if (cons != 1) {
						if (cons != 2) {
							w22 = 14;
						} else {
							w22 = 21;
						}
					} else {
						if (rel_time < 63) {
							w22 = 11;
						} else {
							w22 = 2;
						}
					}
				} else {
					if (rel_time < 737) {
						if (hops < 3) {
							w22 = 9;
						} else {
							w22 = -17;
						}
					} else {
						if (hops < 2) {
							w22 = 8;
						} else {
							w22 = 10;
						}
					}
				}
			} else {
				if (hops < 2) {
					w22 = 14;
				} else {
					w22 = 24;
				}
			}
		} else {
			if (cons != 2) {
				if (rel_time < 14961) {
					if (rel_time < 14581) {
						if (rel_time < 2064) {
							w22 = 7;
						} else {
							w22 = 14;
						}
					} else {
						w22 = -6;
					}
				} else {
					w22 = 41;
				}
			} else {
				if (rel_time < 1701) {
					w22 = 41;
				} else {
					if (rel_time < 5668) {
						w22 = 9;
					} else {
						if (rel_time < 6253) {
							w22 = 49;
						} else {
							w22 = 22;
						}
					}
				}
			}
		}
	}
	int w23;
	if (size < 126) {
		w23 = -7;
	} else {
		if (cons != 1) {
			if (rel_time < 11184) {
				if (rel_time < 374) {
					if (hops < 2) {
						if (rel_time < 180) {
							w23 = 11;
						} else {
							w23 = -3;
						}
					} else {
						if (cons != 3) {
							w23 = 19;
						} else {
							w23 = 5;
						}
					}
				} else {
					if (rel_time < 9840) {
						if (rel_time < 9461) {
							w23 = 6;
						} else {
							w23 = 15;
						}
					} else {
						if (rel_time < 10409) {
							w23 = -1;
						} else {
							w23 = 4;
						}
					}
				}
			} else {
				if (rel_time < 12495) {
					if (hops < 3) {
						if (cons != 2) {
							w23 = 10;
						} else {
							w23 = 17;
						}
					} else {
						if (rel_time < 11357) {
							w23 = 9;
						} else {
							w23 = 23;
						}
					}
				} else {
					if (rel_time < 14961) {
						if (hops < 4) {
							w23 = 6;
						} else {
							w23 = 13;
						}
					} else {
						if (hops < 3) {
							w23 = 12;
						} else {
							w23 = 21;
						}
					}
				}
			}
		} else {
			if (rel_time < 10029) {
				if (rel_time < 6236) {
					if (rel_time < 3960) {
						if (rel_time < 1684) {
							w23 = 5;
						} else {
							w23 = 9;
						}
					} else {
						if (rel_time < 4719) {
							w23 = -6;
						} else {
							w23 = 3;
						}
					}
				} else {
					if (rel_time < 8512) {
						w23 = 7;
					} else {
						w23 = 11;
					}
				}
			} else {
				if (rel_time < 13823) {
					if (hops < 2) {
						if (rel_time < 13064) {
							w23 = -1;
						} else {
							w23 = -8;
						}
					} else {
						if (hops < 3) {
							w23 = 5;
						} else {
							w23 = -1;
						}
					}
				} else {
					w23 = 11;
				}
			}
		}
	}
	return (129405 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23) >> 8;
}
