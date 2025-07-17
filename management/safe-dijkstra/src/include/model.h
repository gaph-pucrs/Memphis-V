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
							w0 = 36342;
						} else {
							w0 = 35016;
						}
					} else {
						if (hops < 2) {
							w0 = 34237;
						} else {
							w0 = 34776;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1243) {
							w0 = 36712;
						} else {
							w0 = 35313;
						}
					} else {
						if (rel_time < 1243) {
							w0 = 37393;
						} else {
							w0 = 35985;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (hops < 3) {
						w0 = 36932;
					} else {
						w0 = 38083;
					}
				} else {
					w0 = 39417;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w0 = 32622;
				} else {
					w0 = 33168;
				}
			} else {
				if (hops < 4) {
					w0 = 33715;
				} else {
					w0 = 34367;
				}
			}
		}
	} else {
		if (rel_time < 372) {
			if (rel_time < 63) {
				w0 = 58831;
			} else {
				if (cons != 2) {
					if (rel_time < 297) {
						w0 = 69503;
					} else {
						w0 = 67431;
					}
				} else {
					w0 = 66038;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3760) {
					if (rel_time < 1130) {
						if (rel_time < 686) {
							w0 = 56835;
						} else {
							w0 = 53301;
						}
					} else {
						if (prod != 0) {
							w0 = 47001;
						} else {
							w0 = 53032;
						}
					}
				} else {
					if (hops < 2) {
						w0 = 54212;
					} else {
						w0 = 54757;
					}
				}
			} else {
				if (rel_time < 3760) {
					if (rel_time < 3462) {
						if (rel_time < 686) {
							w0 = 57993;
						} else {
							w0 = 54358;
						}
					} else {
						if (prod != 0) {
							w0 = 48113;
						} else {
							w0 = 54394;
						}
					}
				} else {
					if (hops < 4) {
						w0 = 55262;
					} else {
						if (hops < 5) {
							w0 = 55789;
						} else {
							w0 = 56323;
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
							w1 = 24144;
						} else {
							w1 = 25277;
						}
					} else {
						w1 = 22326;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 3273) {
							w1 = 24941;
						} else {
							w1 = 23044;
						}
					} else {
						if (rel_time < 3273) {
							w1 = 25670;
						} else {
							w1 = 23655;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (hops < 4) {
						w1 = 25968;
					} else {
						w1 = 26988;
					}
				} else {
					if (hops < 3) {
						w1 = 27149;
					} else {
						w1 = 28296;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1158) {
						w1 = 22164;
					} else {
						if (rel_time < 1301) {
							w1 = 23532;
						} else {
							w1 = 22832;
						}
					}
				} else {
					w1 = 23218;
				}
			} else {
				if (hops < 5) {
					w1 = 23740;
				} else {
					w1 = 24464;
				}
			}
		}
	} else {
		if (rel_time < 372) {
			if (rel_time < 63) {
				w1 = 41186;
			} else {
				if (cons != 2) {
					if (rel_time < 297) {
						if (hops < 3) {
							w1 = 48209;
						} else {
							w1 = 49364;
						}
					} else {
						w1 = 47207;
					}
				} else {
					w1 = 46232;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3760) {
					if (rel_time < 918) {
						if (rel_time < 686) {
							w1 = 39786;
						} else {
							w1 = 38126;
						}
					} else {
						if (prod != 3) {
							w1 = 35666;
						} else {
							w1 = 31729;
						}
					}
				} else {
					if (hops < 2) {
						w1 = 37949;
					} else {
						w1 = 38330;
					}
				}
			} else {
				if (rel_time < 3760) {
					if (rel_time < 918) {
						if (rel_time < 686) {
							w1 = 40597;
						} else {
							w1 = 38957;
						}
					} else {
						if (rel_time < 3462) {
							w1 = 37303;
						} else {
							w1 = 34579;
						}
					}
				} else {
					if (hops < 4) {
						w1 = 38684;
					} else {
						if (hops < 5) {
							w1 = 39053;
						} else {
							w1 = 39427;
						}
					}
				}
			}
		}
	}
	int w2;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 3321) {
				if (hops < 2) {
					if (rel_time < 1273) {
						if (cons != 2) {
							w2 = 17736;
						} else {
							w2 = 17019;
						}
					} else {
						if (rel_time < 1386) {
							w2 = 15318;
						} else {
							w2 = 16776;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1273) {
							w2 = 18080;
						} else {
							w2 = 17141;
						}
					} else {
						if (rel_time < 1273) {
							w2 = 18536;
						} else {
							w2 = 17653;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (hops < 2) {
						w2 = 17813;
					} else {
						w2 = 18565;
					}
				} else {
					if (hops < 2) {
						w2 = 18752;
					} else {
						w2 = 19597;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3159) {
					if (rel_time < 3016) {
						if (rel_time < 2873) {
							w2 = 16058;
						} else {
							w2 = 16834;
						}
					} else {
						w2 = 15422;
					}
				} else {
					w2 = 16727;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 3159) {
						if (rel_time < 3016) {
							w2 = 16476;
						} else {
							w2 = 15833;
						}
					} else {
						w2 = 17137;
					}
				} else {
					if (rel_time < 1158) {
						w2 = 16204;
					} else {
						w2 = 16927;
					}
				}
			}
		}
	} else {
		if (rel_time < 372) {
			if (rel_time < 63) {
				if (hops < 3) {
					w2 = 28402;
				} else {
					w2 = 29518;
				}
			} else {
				if (cons != 2) {
					if (rel_time < 297) {
						if (hops < 2) {
							w2 = 33496;
						} else {
							w2 = 34343;
						}
					} else {
						if (hops < 3) {
							w2 = 32602;
						} else {
							w2 = 33753;
						}
					}
				} else {
					if (hops < 3) {
						w2 = 31922;
					} else {
						w2 = 33074;
					}
				}
			}
		} else {
			if (rel_time < 3715) {
				if (rel_time < 1130) {
					if (rel_time < 686) {
						if (cons != 1) {
							w2 = 28267;
						} else {
							w2 = 27268;
						}
					} else {
						if (rel_time < 731) {
							w2 = 24145;
						} else {
							w2 = 26674;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 1) {
							w2 = 23242;
						} else {
							w2 = 21376;
						}
					} else {
						w2 = 26396;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 10416) {
							w2 = 26556;
						} else {
							w2 = 27464;
						}
					} else {
						w2 = 26832;
					}
				} else {
					if (hops < 4) {
						w2 = 27081;
					} else {
						if (hops < 5) {
							w2 = 27342;
						} else {
							w2 = 27606;
						}
					}
				}
			}
		}
	}
	int w3;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 3130) {
				if (rel_time < 2987) {
					if (rel_time < 2845) {
						if (rel_time < 2702) {
							w3 = 12056;
						} else {
							w3 = 10877;
						}
					} else {
						if (rel_time < 2901) {
							w3 = 13886;
						} else {
							w3 = 12927;
						}
					}
				} else {
					if (rel_time < 3101) {
						if (cons != 2) {
							w3 = 10150;
						} else {
							w3 = 11432;
						}
					} else {
						if (hops < 2) {
							w3 = 11298;
						} else {
							w3 = 11720;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 3187) {
						if (hops < 3) {
							w3 = 13197;
						} else {
							w3 = 13946;
						}
					} else {
						if (cons != 1) {
							w3 = 12538;
						} else {
							w3 = 10720;
						}
					}
				} else {
					if (hops < 3) {
						w3 = 13292;
					} else {
						w3 = 13999;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 1158) {
					w3 = 10706;
				} else {
					if (rel_time < 1301) {
						w3 = 11664;
					} else {
						if (rel_time < 1444) {
							w3 = 10446;
						} else {
							w3 = 11202;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1158) {
						w3 = 10853;
					} else {
						if (rel_time < 1301) {
							w3 = 12118;
						} else {
							w3 = 11465;
						}
					}
				} else {
					if (rel_time < 3159) {
						if (rel_time < 3016) {
							w3 = 11825;
						} else {
							w3 = 11113;
						}
					} else {
						w3 = 12417;
					}
				}
			}
		}
	} else {
		if (rel_time < 372) {
			if (rel_time < 63) {
				if (hops < 4) {
					w3 = 19994;
				} else {
					w3 = 21000;
				}
			} else {
				if (cons != 2) {
					if (hops < 4) {
						if (rel_time < 297) {
							w3 = 23669;
						} else {
							w3 = 22942;
						}
					} else {
						w3 = 24388;
					}
				} else {
					if (hops < 4) {
						w3 = 22463;
					} else {
						w3 = 23488;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3715) {
					if (rel_time < 918) {
						if (cons != 0) {
							w3 = 19360;
						} else {
							w3 = 18237;
						}
					} else {
						if (rel_time < 3462) {
							w3 = 17645;
						} else {
							w3 = 15925;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 10416) {
							w3 = 18589;
						} else {
							w3 = 19232;
						}
					} else {
						if (rel_time < 10416) {
							w3 = 18776;
						} else {
							w3 = 19643;
						}
					}
				}
			} else {
				if (rel_time < 868) {
					if (cons != 0) {
						if (hops < 4) {
							w3 = 19687;
						} else {
							w3 = 20366;
						}
					} else {
						if (rel_time < 438) {
							w3 = 20363;
						} else {
							w3 = 17240;
						}
					}
				} else {
					if (rel_time < 3715) {
						if (rel_time < 3462) {
							w3 = 18313;
						} else {
							w3 = 16515;
						}
					} else {
						if (hops < 4) {
							w3 = 18957;
						} else {
							w3 = 19186;
						}
					}
				}
			}
		}
	}
	int w4;
	if (size < 38) {
		if (hops < 3) {
			if (rel_time < 3321) {
				if (cons != 0) {
					if (rel_time < 1243) {
						if (cons != 2) {
							w4 = 9217;
						} else {
							w4 = 8410;
						}
					} else {
						if (rel_time < 1416) {
							w4 = 7472;
						} else {
							w4 = 8276;
						}
					}
				} else {
					if (rel_time < 3159) {
						if (rel_time < 3016) {
							w4 = 7892;
						} else {
							w4 = 7402;
						}
					} else {
						w4 = 8315;
					}
				}
			} else {
				if (rel_time < 3364) {
					if (hops < 2) {
						w4 = 9051;
					} else {
						w4 = 9351;
					}
				} else {
					w4 = 8613;
				}
			}
		} else {
			if (cons != 0) {
				if (rel_time < 3130) {
					if (rel_time < 2987) {
						if (rel_time < 2845) {
							w4 = 8616;
						} else {
							w4 = 9470;
						}
					} else {
						if (rel_time < 3044) {
							w4 = 7308;
						} else {
							w4 = 7991;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 3187) {
							w4 = 9765;
						} else {
							w4 = 8897;
						}
					} else {
						if (hops < 4) {
							w4 = 9566;
						} else {
							w4 = 10039;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 3159) {
						if (rel_time < 3016) {
							w4 = 8139;
						} else {
							w4 = 7678;
						}
					} else {
						w4 = 8592;
					}
				} else {
					w4 = 8521;
				}
			}
		}
	} else {
		if (rel_time < 372) {
			if (rel_time < 63) {
				if (hops < 2) {
					w4 = 13655;
				} else {
					w4 = 14371;
				}
			} else {
				if (hops < 2) {
					if (cons != 2) {
						if (rel_time < 297) {
							w4 = 16353;
						} else {
							w4 = 15689;
						}
					} else {
						w4 = 15366;
					}
				} else {
					if (cons != 2) {
						if (rel_time < 297) {
							w4 = 16882;
						} else {
							w4 = 16411;
						}
					} else {
						w4 = 16112;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 3715) {
					if (rel_time < 964) {
						if (cons != 0) {
							w4 = 13598;
						} else {
							w4 = 12736;
						}
					} else {
						if (prod != 1) {
							w4 = 12090;
						} else {
							w4 = 9700;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 10257) {
							w4 = 13025;
						} else {
							w4 = 12772;
						}
					} else {
						if (rel_time < 10416) {
							w4 = 13191;
						} else {
							w4 = 13922;
						}
					}
				}
			} else {
				if (rel_time < 918) {
					if (cons != 0) {
						if (hops < 5) {
							w4 = 14108;
						} else {
							w4 = 14639;
						}
					} else {
						if (rel_time < 438) {
							w4 = 14610;
						} else {
							w4 = 12404;
						}
					}
				} else {
					if (rel_time < 3715) {
						if (prod != 3) {
							w4 = 12781;
						} else {
							w4 = 10513;
						}
					} else {
						if (rel_time < 3807) {
							w4 = 14225;
						} else {
							w4 = 13416;
						}
					}
				}
			}
		}
	}
	int w5;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 3159) {
				if (rel_time < 3016) {
					if (rel_time < 2873) {
						if (rel_time < 2730) {
							w5 = 5655;
						} else {
							w5 = 4840;
						}
					} else {
						if (cons != 3) {
							w5 = 6177;
						} else {
							w5 = 7088;
						}
					}
				} else {
					if (rel_time < 3101) {
						if (cons != 2) {
							w5 = 4342;
						} else {
							w5 = 5241;
						}
					} else {
						if (rel_time < 3130) {
							w5 = 5431;
						} else {
							w5 = 5078;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 3187) {
						w5 = 6634;
					} else {
						if (cons != 1) {
							w5 = 5809;
						} else {
							w5 = 4731;
						}
					}
				} else {
					if (rel_time < 3244) {
						w5 = 6715;
					} else {
						w5 = 6433;
					}
				}
			}
		} else {
			if (cons != 0) {
				if (rel_time < 1273) {
					if (cons != 2) {
						if (rel_time < 1243) {
							w5 = 6975;
						} else {
							w5 = 6341;
						}
					} else {
						w5 = 5925;
					}
				} else {
					if (rel_time < 1386) {
						if (cons != 2) {
							w5 = 4224;
						} else {
							w5 = 5519;
						}
					} else {
						if (rel_time < 1559) {
							w5 = 6788;
						} else {
							w5 = 5984;
						}
					}
				}
			} else {
				if (rel_time < 1158) {
					w5 = 5244;
				} else {
					if (rel_time < 1301) {
						if (hops < 4) {
							w5 = 6088;
						} else {
							w5 = 6455;
						}
					} else {
						if (rel_time < 1444) {
							w5 = 4989;
						} else {
							w5 = 5728;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 438) {
			if (cons != 0) {
				if (hops < 3) {
					if (cons != 2) {
						if (rel_time < 297) {
							w5 = 11511;
						} else {
							w5 = 11141;
						}
					} else {
						w5 = 10902;
					}
				} else {
					if (hops < 5) {
						if (cons != 2) {
							w5 = 11788;
						} else {
							w5 = 11351;
						}
					} else {
						w5 = 12334;
					}
				}
			} else {
				if (rel_time < 63) {
					if (hops < 3) {
						w5 = 9696;
					} else {
						w5 = 10217;
					}
				} else {
					w5 = 10368;
				}
			}
		} else {
			if (rel_time < 3715) {
				if (rel_time < 3462) {
					if (prod != 1) {
						if (cons != 0) {
							w5 = 9357;
						} else {
							w5 = 8331;
						}
					} else {
						if (hops < 3) {
							w5 = 6390;
						} else {
							w5 = 4199;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 3507) {
							w5 = 7200;
						} else {
							w5 = 8400;
						}
					} else {
						if (hops < 4) {
							w5 = 6705;
						} else {
							w5 = 7364;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 3761) {
						if (rel_time < 3760) {
							w5 = 9075;
						} else {
							w5 = 10223;
						}
					} else {
						if (rel_time < 3852) {
							w5 = 8577;
						} else {
							w5 = 9148;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 10416) {
							w5 = 9324;
						} else {
							w5 = 10079;
						}
					} else {
						if (rel_time < 3807) {
							w5 = 10262;
						} else {
							w5 = 9528;
						}
					}
				}
			}
		}
	}
	int w6;
	if (size < 38) {
		if (hops < 4) {
			if (rel_time < 2587) {
				if (rel_time < 2444) {
					if (rel_time < 2301) {
						if (rel_time < 2159) {
							w6 = 4056;
						} else {
							w6 = 2941;
						}
					} else {
						if (rel_time < 2386) {
							w6 = 5423;
						} else {
							w6 = 4552;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 2472) {
							w6 = 2311;
						} else {
							w6 = 3415;
						}
					} else {
						if (hops < 2) {
							w6 = 2189;
						} else {
							w6 = 2371;
						}
					}
				}
			} else {
				if (rel_time < 2672) {
					if (cons != 2) {
						if (hops < 2) {
							w6 = 5768;
						} else {
							w6 = 5950;
						}
					} else {
						if (hops < 2) {
							w6 = 4487;
						} else {
							w6 = 4670;
						}
					}
				} else {
					if (rel_time < 2873) {
						if (rel_time < 2730) {
							w6 = 4551;
						} else {
							w6 = 3348;
						}
					} else {
						if (rel_time < 2958) {
							w6 = 4875;
						} else {
							w6 = 4045;
						}
					}
				}
			}
		} else {
			if (rel_time < 3321) {
				if (hops < 5) {
					if (rel_time < 1730) {
						if (rel_time < 1587) {
							w6 = 4334;
						} else {
							w6 = 3171;
						}
					} else {
						if (rel_time < 1815) {
							w6 = 5628;
						} else {
							w6 = 4242;
						}
					}
				} else {
					if (cons != 0) {
						if (rel_time < 1702) {
							w6 = 4412;
						} else {
							w6 = 4692;
						}
					} else {
						if (rel_time < 3159) {
							w6 = 4228;
						} else {
							w6 = 4675;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 3364) {
						w6 = 5181;
					} else {
						w6 = 4740;
					}
				} else {
					w6 = 5558;
				}
			}
		}
	} else {
		if (rel_time < 438) {
			if (cons != 0) {
				if (hops < 4) {
					if (cons != 2) {
						if (rel_time < 297) {
							w6 = 8099;
						} else {
							w6 = 7841;
						}
					} else {
						if (hops < 2) {
							w6 = 7491;
						} else {
							w6 = 7816;
						}
					}
				} else {
					if (rel_time < 163) {
						w6 = 8707;
					} else {
						if (cons != 3) {
							w6 = 8159;
						} else {
							w6 = 8561;
						}
					}
				}
			} else {
				if (rel_time < 63) {
					if (hops < 4) {
						if (hops < 2) {
							w6 = 6656;
						} else {
							w6 = 6951;
						}
					} else {
						w6 = 7343;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w6 = 7122;
						} else {
							w6 = 7677;
						}
					} else {
						w6 = 7054;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 3715) {
					if (rel_time < 3462) {
						if (prod != 1) {
							w6 = 6104;
						} else {
							w6 = 4244;
						}
					} else {
						if (prod != 0) {
							w6 = 4918;
						} else {
							w6 = 7476;
						}
					}
				} else {
					if (rel_time < 10416) {
						if (rel_time < 10375) {
							w6 = 6370;
						} else {
							w6 = 5462;
						}
					} else {
						w6 = 6898;
					}
				}
			} else {
				if (rel_time < 868) {
					if (cons != 0) {
						if (rel_time < 635) {
							w6 = 6746;
						} else {
							w6 = 7264;
						}
					} else {
						if (hops < 4) {
							w6 = 5274;
						} else {
							w6 = 6192;
						}
					}
				} else {
					if (rel_time < 3715) {
						if (prod != 3) {
							w6 = 6196;
						} else {
							w6 = 4889;
						}
					} else {
						if (rel_time < 3898) {
							w6 = 6807;
						} else {
							w6 = 6495;
						}
					}
				}
			}
		}
	}
	int w7;
	if (size < 38) {
		if (rel_time < 2016) {
			if (rel_time < 1873) {
				if (rel_time < 1730) {
					if (rel_time < 1587) {
						if (rel_time < 1444) {
							w7 = 2649;
						} else {
							w7 = 3699;
						}
					} else {
						if (rel_time < 1615) {
							w7 = 1083;
						} else {
							w7 = 1970;
						}
					}
				} else {
					if (rel_time < 1758) {
						if (hops < 5) {
							w7 = 4560;
						} else {
							w7 = 4968;
						}
					} else {
						if (cons != 3) {
							w7 = 3330;
						} else {
							w7 = 4530;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 1901) {
						if (hops < 2) {
							w7 = 900;
						} else {
							w7 = 1138;
						}
					} else {
						if (rel_time < 1987) {
							w7 = 2312;
						} else {
							w7 = 1993;
						}
					}
				} else {
					if (hops < 2) {
						w7 = 896;
					} else {
						if (hops < 4) {
							w7 = 1078;
						} else {
							w7 = 1276;
						}
					}
				}
			}
		} else {
			if (rel_time < 2101) {
				if (cons != 2) {
					if (hops < 2) {
						w7 = 4474;
					} else {
						if (hops < 4) {
							w7 = 4657;
						} else {
							w7 = 4852;
						}
					}
				} else {
					if (hops < 2) {
						w7 = 3195;
					} else {
						if (hops < 4) {
							w7 = 3377;
						} else {
							w7 = 3574;
						}
					}
				}
			} else {
				if (rel_time < 2301) {
					if (rel_time < 2159) {
						if (hops < 2) {
							w7 = 3168;
						} else {
							w7 = 3408;
						}
					} else {
						if (rel_time < 2187) {
							w7 = 1340;
						} else {
							w7 = 2219;
						}
					}
				} else {
					if (rel_time < 2386) {
						if (cons != 2) {
							w7 = 4340;
						} else {
							w7 = 3099;
						}
					} else {
						if (rel_time < 2587) {
							w7 = 2406;
						} else {
							w7 = 2987;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 438) {
			if (cons != 0) {
				if (hops < 2) {
					if (rel_time < 163) {
						w7 = 5640;
					} else {
						if (cons != 3) {
							w7 = 5273;
						} else {
							w7 = 5491;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 163) {
							w7 = 5867;
						} else {
							w7 = 5619;
						}
					} else {
						w7 = 6123;
					}
				}
			} else {
				if (rel_time < 63) {
					if (hops < 5) {
						if (hops < 2) {
							w7 = 4660;
						} else {
							w7 = 4903;
						}
					} else {
						w7 = 5510;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w7 = 4987;
						} else {
							w7 = 5376;
						}
					} else {
						if (hops < 5) {
							w7 = 4877;
						} else {
							w7 = 5367;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 4138) {
					if (prod != 0) {
						if (rel_time < 964) {
							w7 = 4569;
						} else {
							w7 = 4004;
						}
					} else {
						if (rel_time < 3760) {
							w7 = 4689;
						} else {
							w7 = 5373;
						}
					}
				} else {
					if (rel_time < 4466) {
						if (prod != 0) {
							w7 = 5062;
						} else {
							w7 = 3593;
						}
					} else {
						if (rel_time < 4470) {
							w7 = 3616;
						} else {
							w7 = 4497;
						}
					}
				}
			} else {
				if (rel_time < 964) {
					if (hops < 5) {
						if (cons != 0) {
							w7 = 4990;
						} else {
							w7 = 4507;
						}
					} else {
						if (rel_time < 822) {
							w7 = 5189;
						} else {
							w7 = 5581;
						}
					}
				} else {
					if (rel_time < 3598) {
						if (prod != 1) {
							w7 = 4442;
						} else {
							w7 = 3175;
						}
					} else {
						if (rel_time < 10416) {
							w7 = 4629;
						} else {
							w7 = 5353;
						}
					}
				}
			}
		}
	}
	int w8;
	if (size < 38) {
		if (rel_time < 3321) {
			if (rel_time < 3302) {
				if (rel_time < 3159) {
					if (rel_time < 3016) {
						if (rel_time < 2873) {
							w8 = 1981;
						} else {
							w8 = 2446;
						}
					} else {
						if (rel_time < 3044) {
							w8 = 930;
						} else {
							w8 = 1485;
						}
					}
				} else {
					if (rel_time < 3244) {
						if (cons != 2) {
							w8 = 2841;
						} else {
							w8 = 2079;
						}
					} else {
						if (hops < 3) {
							w8 = 1889;
						} else {
							w8 = 2243;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w8 = 1205;
					} else {
						if (hops < 4) {
							w8 = 1090;
						} else {
							w8 = 1187;
						}
					}
				} else {
					w8 = 1403;
				}
			}
		} else {
			if (rel_time < 3364) {
				if (hops < 2) {
					w8 = 2392;
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w8 = 2644;
						} else {
							w8 = 2748;
						}
					} else {
						w8 = 3142;
					}
				}
			} else {
				if (hops < 2) {
					w8 = 2034;
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w8 = 2292;
						} else {
							w8 = 2417;
						}
					} else {
						w8 = 2688;
					}
				}
			}
		}
	} else {
		if (rel_time < 569) {
			if (rel_time < 372) {
				if (rel_time < 63) {
					if (hops < 4) {
						if (hops < 2) {
							w8 = 3263;
						} else {
							w8 = 3397;
						}
					} else {
						if (hops < 5) {
							w8 = 3546;
						} else {
							w8 = 3867;
						}
					}
				} else {
					if (hops < 4) {
						if (cons != 2) {
							w8 = 3929;
						} else {
							w8 = 3739;
						}
					} else {
						if (rel_time < 163) {
							w8 = 4322;
						} else {
							w8 = 4086;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (rel_time < 438) {
						if (hops < 3) {
							w8 = 3619;
						} else {
							w8 = 3460;
						}
					} else {
						if (hops < 2) {
							w8 = 3816;
						} else {
							w8 = 4105;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 2731;
					} else {
						if (hops < 5) {
							w8 = 3013;
						} else {
							w8 = 3272;
						}
					}
				}
			}
		} else {
			if (rel_time < 3715) {
				if (prod != 1) {
					if (prod != 3) {
						if (cons != 4) {
							w8 = 3007;
						} else {
							w8 = 3511;
						}
					} else {
						if (hops < 5) {
							w8 = 2053;
						} else {
							w8 = 2760;
						}
					}
				} else {
					if (rel_time < 3462) {
						if (hops < 3) {
							w8 = 1787;
						} else {
							w8 = -52;
						}
					} else {
						if (hops < 3) {
							w8 = 1946;
						} else {
							w8 = 2305;
						}
					}
				}
			} else {
				if (rel_time < 3898) {
					if (prod != 2) {
						if (rel_time < 3760) {
							w8 = 3171;
						} else {
							w8 = 4231;
						}
					} else {
						if (hops < 4) {
							w8 = 2172;
						} else {
							w8 = 1964;
						}
					}
				} else {
					if (rel_time < 3998) {
						if (prod != 0) {
							w8 = 2092;
						} else {
							w8 = 3438;
						}
					} else {
						if (rel_time < 4044) {
							w8 = 3835;
						} else {
							w8 = 3161;
						}
					}
				}
			}
		}
	}
	int w9;
	if (size < 38) {
		if (rel_time < 1301) {
			if (rel_time < 1158) {
				if (hops < 2) {
					w9 = 832;
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w9 = 1001;
						} else {
							w9 = 1047;
						}
					} else {
						w9 = 1298;
					}
				}
			} else {
				if (rel_time < 1187) {
					if (hops < 3) {
						w9 = 2056;
					} else {
						if (hops < 5) {
							w9 = 2482;
						} else {
							w9 = 2863;
						}
					}
				} else {
					if (cons != 3) {
						if (cons != 4) {
							w9 = 1575;
						} else {
							w9 = 1810;
						}
					} else {
						if (hops < 3) {
							w9 = 1884;
						} else {
							w9 = 2358;
						}
					}
				}
			}
		} else {
			if (rel_time < 1444) {
				if (cons != 2) {
					if (rel_time < 1386) {
						if (hops < 2) {
							w9 = 136;
						} else {
							w9 = 326;
						}
					} else {
						if (rel_time < 1416) {
							w9 = 1003;
						} else {
							w9 = 794;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w9 = 1433;
						} else {
							w9 = 1307;
						}
					} else {
						if (hops < 5) {
							w9 = 1132;
						} else {
							w9 = 1475;
						}
					}
				}
			} else {
				if (rel_time < 1529) {
					if (cons != 2) {
						if (hops < 5) {
							w9 = 2717;
						} else {
							w9 = 3087;
						}
					} else {
						if (hops < 5) {
							w9 = 1494;
						} else {
							w9 = 1853;
						}
					}
				} else {
					if (rel_time < 1730) {
						if (cons != 3) {
							w9 = 1065;
						} else {
							w9 = -96;
						}
					} else {
						if (rel_time < 1815) {
							w9 = 2288;
						} else {
							w9 = 1398;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 569) {
			if (rel_time < 372) {
				if (rel_time < 63) {
					if (hops < 4) {
						if (hops < 2) {
							w9 = 2285;
						} else {
							w9 = 2378;
						}
					} else {
						if (hops < 5) {
							w9 = 2484;
						} else {
							w9 = 2713;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 163) {
							w9 = 2771;
						} else {
							w9 = 2585;
						}
					} else {
						if (cons != 2) {
							w9 = 2853;
						} else {
							w9 = 2694;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (rel_time < 438) {
						if (hops < 2) {
							w9 = 2407;
						} else {
							w9 = 2534;
						}
					} else {
						if (hops < 2) {
							w9 = 2672;
						} else {
							w9 = 2874;
						}
					}
				} else {
					if (hops < 2) {
						w9 = 1912;
					} else {
						if (hops < 5) {
							w9 = 2109;
						} else {
							w9 = 2296;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 3760) {
					if (cons != 0) {
						if (rel_time < 868) {
							w9 = 2392;
						} else {
							w9 = 1705;
						}
					} else {
						if (rel_time < 731) {
							w9 = 570;
						} else {
							w9 = 1985;
						}
					}
				} else {
					if (rel_time < 3898) {
						if (prod != 2) {
							w9 = 2962;
						} else {
							w9 = 1557;
						}
					} else {
						if (rel_time < 4090) {
							w9 = 1646;
						} else {
							w9 = 2168;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (rel_time < 731) {
						if (hops < 4) {
							w9 = 1651;
						} else {
							w9 = 1982;
						}
					} else {
						if (rel_time < 777) {
							w9 = 3212;
						} else {
							w9 = 2232;
						}
					}
				} else {
					if (rel_time < 686) {
						if (hops < 5) {
							w9 = 2814;
						} else {
							w9 = 3077;
						}
					} else {
						if (rel_time < 918) {
							w9 = 2278;
						} else {
							w9 = 2669;
						}
					}
				}
			}
		}
	}
	int w10;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 1587) {
				if (rel_time < 1444) {
					if (rel_time < 1301) {
						if (rel_time < 1158) {
							w10 = 583;
						} else {
							w10 = 1208;
						}
					} else {
						if (cons != 2) {
							w10 = 349;
						} else {
							w10 = 1004;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 1473) {
							w10 = 1887;
						} else {
							w10 = 1091;
						}
					} else {
						w10 = 1957;
					}
				}
			} else {
				if (rel_time < 1730) {
					if (rel_time < 1615) {
						w10 = -364;
					} else {
						if (cons != 3) {
							w10 = 569;
						} else {
							w10 = -275;
						}
					}
				} else {
					if (rel_time < 1873) {
						if (cons != 2) {
							w10 = 1517;
						} else {
							w10 = 883;
						}
					} else {
						if (rel_time < 2016) {
							w10 = 66;
						} else {
							w10 = 911;
						}
					}
				}
			}
		} else {
			if (rel_time < 2016) {
				if (rel_time < 1873) {
					if (rel_time < 1730) {
						if (rel_time < 1587) {
							w10 = 1084;
						} else {
							w10 = 511;
						}
					} else {
						if (cons != 2) {
							w10 = 1686;
						} else {
							w10 = 1036;
						}
					}
				} else {
					if (rel_time < 1958) {
						if (cons != 2) {
							w10 = -218;
						} else {
							w10 = 653;
						}
					} else {
						if (rel_time < 1987) {
							w10 = 715;
						} else {
							w10 = 464;
						}
					}
				}
			} else {
				if (rel_time < 2101) {
					if (cons != 2) {
						if (hops < 5) {
							w10 = 2267;
						} else {
							w10 = 2522;
						}
					} else {
						if (hops < 5) {
							w10 = 1373;
						} else {
							w10 = 1622;
						}
					}
				} else {
					if (rel_time < 2301) {
						if (rel_time < 2159) {
							w10 = 1373;
						} else {
							w10 = 460;
						}
					} else {
						if (rel_time < 2444) {
							w10 = 1752;
						} else {
							w10 = 1016;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 569) {
			if (rel_time < 372) {
				if (rel_time < 63) {
					if (hops < 4) {
						if (hops < 2) {
							w10 = 1600;
						} else {
							w10 = 1665;
						}
					} else {
						if (hops < 5) {
							w10 = 1741;
						} else {
							w10 = 1904;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 163) {
							w10 = 1960;
						} else {
							w10 = 1843;
						}
					} else {
						if (hops < 5) {
							w10 = 1989;
						} else {
							w10 = 2204;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (rel_time < 438) {
						if (hops < 3) {
							w10 = 1794;
						} else {
							w10 = 1663;
						}
					} else {
						if (hops < 5) {
							w10 = 1949;
						} else {
							w10 = 2271;
						}
					}
				} else {
					if (hops < 2) {
						w10 = 1339;
					} else {
						if (hops < 3) {
							w10 = 1546;
						} else {
							w10 = 1442;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 4090) {
					if (rel_time < 4044) {
						if (prod != 0) {
							w10 = 1417;
						} else {
							w10 = 1869;
						}
					} else {
						if (prod != 1) {
							w10 = 2613;
						} else {
							w10 = 312;
						}
					}
				} else {
					if (rel_time < 4136) {
						if (prod != 2) {
							w10 = 232;
						} else {
							w10 = 2563;
						}
					} else {
						if (rel_time < 4138) {
							w10 = 262;
						} else {
							w10 = 1552;
						}
					}
				}
			} else {
				if (rel_time < 3462) {
					if (rel_time < 1100) {
						if (rel_time < 1055) {
							w10 = 2009;
						} else {
							w10 = 1345;
						}
					} else {
						w10 = 2383;
					}
				} else {
					if (rel_time < 10416) {
						if (rel_time < 10375) {
							w10 = 1723;
						} else {
							w10 = 283;
						}
					} else {
						w10 = 2402;
					}
				}
			}
		}
	}
	int w11;
	if (size < 38) {
		if (hops < 4) {
			if (rel_time < 3321) {
				if (rel_time < 2730) {
					if (rel_time < 2587) {
						if (rel_time < 2444) {
							w11 = 678;
						} else {
							w11 = 53;
						}
					} else {
						if (rel_time < 2672) {
							w11 = 1614;
						} else {
							w11 = 985;
						}
					}
				} else {
					if (rel_time < 2815) {
						if (cons != 2) {
							w11 = -502;
						} else {
							w11 = 847;
						}
					} else {
						if (rel_time < 3016) {
							w11 = 790;
						} else {
							w11 = 504;
						}
					}
				}
			} else {
				if (rel_time < 3364) {
					if (hops < 2) {
						w11 = 983;
					} else {
						if (hops < 3) {
							w11 = 1128;
						} else {
							w11 = 1209;
						}
					}
				} else {
					if (hops < 2) {
						w11 = 732;
					} else {
						if (hops < 3) {
							w11 = 882;
						} else {
							w11 = 960;
						}
					}
				}
			}
		} else {
			if (rel_time < 2587) {
				if (rel_time < 2444) {
					if (rel_time < 2301) {
						if (rel_time < 2159) {
							w11 = 843;
						} else {
							w11 = 213;
						}
					} else {
						if (rel_time < 2330) {
							w11 = 2058;
						} else {
							w11 = 1457;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 2472) {
							w11 = -670;
						} else {
							w11 = 392;
						}
					} else {
						if (hops < 5) {
							w11 = -737;
						} else {
							w11 = -536;
						}
					}
				}
			} else {
				if (rel_time < 2672) {
					if (cons != 2) {
						if (hops < 5) {
							w11 = 2666;
						} else {
							w11 = 2853;
						}
					} else {
						if (hops < 5) {
							w11 = 1391;
						} else {
							w11 = 1570;
						}
					}
				} else {
					if (rel_time < 2873) {
						if (rel_time < 2730) {
							w11 = 1333;
						} else {
							w11 = 68;
						}
					} else {
						if (rel_time < 2958) {
							w11 = 1479;
						} else {
							w11 = 856;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 868) {
			if (rel_time < 822) {
				if (rel_time < 777) {
					if (rel_time < 731) {
						if (rel_time < 686) {
							w11 = 1249;
						} else {
							w11 = 414;
						}
					} else {
						if (hops < 3) {
							w11 = 1886;
						} else {
							w11 = 1779;
						}
					}
				} else {
					if (hops < 2) {
						w11 = 507;
					} else {
						if (hops < 3) {
							w11 = 745;
						} else {
							w11 = 646;
						}
					}
				}
			} else {
				if (hops < 2) {
					w11 = 1805;
				} else {
					if (hops < 3) {
						w11 = 2039;
					} else {
						w11 = 1933;
					}
				}
			}
		} else {
			if (cons != 1) {
				if (cons != 3) {
					if (cons != 2) {
						if (hops < 3) {
							w11 = 1048;
						} else {
							w11 = 1132;
						}
					} else {
						if (hops < 2) {
							w11 = 1536;
						} else {
							w11 = 1700;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w11 = 448;
						} else {
							w11 = 254;
						}
					} else {
						w11 = 943;
					}
				}
			} else {
				if (hops < 2) {
					w11 = 244;
				} else {
					if (hops < 3) {
						w11 = 594;
					} else {
						if (hops < 5) {
							w11 = 217;
						} else {
							w11 = 675;
						}
					}
				}
			}
		}
	}
	int w12;
	if (size < 38) {
		if (rel_time < 3159) {
			if (rel_time < 3016) {
				if (rel_time < 2016) {
					if (rel_time < 1873) {
						if (rel_time < 1730) {
							w12 = 421;
						} else {
							w12 = 838;
						}
					} else {
						if (rel_time < 1958) {
							w12 = -226;
						} else {
							w12 = 172;
						}
					}
				} else {
					if (rel_time < 2101) {
						if (cons != 2) {
							w12 = 1471;
						} else {
							w12 = 754;
						}
					} else {
						if (rel_time < 2301) {
							w12 = 251;
						} else {
							w12 = 559;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 3044) {
						if (hops < 3) {
							w12 = -352;
						} else {
							w12 = -38;
						}
					} else {
						if (rel_time < 3130) {
							w12 = 421;
						} else {
							w12 = 161;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w12 = -308;
						} else {
							w12 = -560;
						}
					} else {
						if (hops < 5) {
							w12 = -337;
						} else {
							w12 = -166;
						}
					}
				}
			}
		} else {
			if (rel_time < 3244) {
				if (cons != 2) {
					if (hops < 2) {
						if (rel_time < 3187) {
							w12 = 842;
						} else {
							w12 = 900;
						}
					} else {
						if (hops < 3) {
							w12 = 1319;
						} else {
							w12 = 1150;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w12 = 329;
						} else {
							w12 = 516;
						}
					} else {
						if (hops < 5) {
							w12 = 802;
						} else {
							w12 = 990;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (rel_time < 3302) {
						if (hops < 2) {
							w12 = 373;
						} else {
							w12 = 612;
						}
					} else {
						if (hops < 3) {
							w12 = 677;
						} else {
							w12 = 858;
						}
					}
				} else {
					if (hops < 2) {
						w12 = 0;
					} else {
						if (hops < 5) {
							w12 = -120;
						} else {
							w12 = 9;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10257) {
			if (rel_time < 10009) {
				if (rel_time < 9707) {
					if (rel_time < 9679) {
						if (rel_time < 9579) {
							w12 = 771;
						} else {
							w12 = 65;
						}
					} else {
						w12 = 1648;
					}
				} else {
					if (prod != 4) {
						if (prod != 2) {
							w12 = -383;
						} else {
							w12 = 1649;
						}
					} else {
						if (hops < 2) {
							w12 = 1617;
						} else {
							w12 = 1680;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (prod != 4) {
						if (rel_time < 10160) {
							w12 = 2188;
						} else {
							w12 = 1645;
						}
					} else {
						if (hops < 2) {
							w12 = -170;
						} else {
							w12 = -86;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 10055) {
							w12 = -194;
						} else {
							w12 = -167;
						}
					} else {
						if (hops < 5) {
							w12 = -96;
						} else {
							w12 = -31;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (prod != 3) {
					if (rel_time < 10416) {
						if (hops < 2) {
							w12 = 1748;
						} else {
							w12 = 1657;
						}
					} else {
						if (hops < 3) {
							w12 = 1129;
						} else {
							w12 = 1247;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 10375) {
							w12 = -612;
						} else {
							w12 = -326;
						}
					} else {
						if (hops < 5) {
							w12 = -668;
						} else {
							w12 = -139;
						}
					}
				}
			} else {
				if (hops < 2) {
					w12 = -573;
				} else {
					if (hops < 3) {
						w12 = -728;
					} else {
						if (hops < 4) {
							w12 = -609;
						} else {
							w12 = -565;
						}
					}
				}
			}
		}
	}
	int w13;
	if (size < 38) {
		if (hops < 5) {
			if (rel_time < 1301) {
				if (rel_time < 1158) {
					if (hops < 4) {
						if (hops < 3) {
							w13 = 64;
						} else {
							w13 = 95;
						}
					} else {
						w13 = 7;
					}
				} else {
					if (rel_time < 1187) {
						if (hops < 3) {
							w13 = 764;
						} else {
							w13 = 1062;
						}
					} else {
						if (cons != 3) {
							w13 = 468;
						} else {
							w13 = 746;
						}
					}
				}
			} else {
				if (rel_time < 1444) {
					if (cons != 2) {
						if (rel_time < 1386) {
							w13 = -416;
						} else {
							w13 = 31;
						}
					} else {
						if (hops < 3) {
							w13 = 322;
						} else {
							w13 = 118;
						}
					}
				} else {
					if (rel_time < 1529) {
						if (cons != 2) {
							w13 = 1151;
						} else {
							w13 = 383;
						}
					} else {
						if (rel_time < 1730) {
							w13 = 95;
						} else {
							w13 = 340;
						}
					}
				}
			}
		} else {
			if (rel_time < 1301) {
				if (rel_time < 1158) {
					w13 = 211;
				} else {
					if (cons != 2) {
						if (rel_time < 1243) {
							w13 = 1269;
						} else {
							w13 = 835;
						}
					} else {
						w13 = 569;
					}
				}
			} else {
				if (rel_time < 1444) {
					if (rel_time < 1329) {
						w13 = -250;
					} else {
						if (cons != 3) {
							w13 = 237;
						} else {
							w13 = -194;
						}
					}
				} else {
					if (rel_time < 1529) {
						if (cons != 2) {
							w13 = 1461;
						} else {
							w13 = 599;
						}
					} else {
						if (rel_time < 2587) {
							w13 = 517;
						} else {
							w13 = 647;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 438) {
			if (cons != 0) {
				if (hops < 3) {
					if (cons != 2) {
						if (rel_time < 297) {
							w13 = 753;
						} else {
							w13 = 670;
						}
					} else {
						if (hops < 2) {
							w13 = 612;
						} else {
							w13 = 678;
						}
					}
				} else {
					if (rel_time < 163) {
						if (hops < 5) {
							w13 = 896;
						} else {
							w13 = 1109;
						}
					} else {
						if (cons != 3) {
							w13 = 706;
						} else {
							w13 = 885;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						if (rel_time < 63) {
							w13 = 515;
						} else {
							w13 = 542;
						}
					} else {
						if (hops < 3) {
							w13 = 664;
						} else {
							w13 = 553;
						}
					}
				} else {
					if (rel_time < 63) {
						w13 = 733;
					} else {
						w13 = 880;
					}
				}
			}
		} else {
			if (cons != 4) {
				if (rel_time < 3715) {
					if (rel_time < 1055) {
						if (rel_time < 731) {
							w13 = 350;
						} else {
							w13 = 662;
						}
					} else {
						if (prod != 0) {
							w13 = 59;
						} else {
							w13 = 828;
						}
					}
				} else {
					if (rel_time < 3898) {
						if (prod != 2) {
							w13 = 1007;
						} else {
							w13 = -93;
						}
					} else {
						if (rel_time < 3998) {
							w13 = -127;
						} else {
							w13 = 537;
						}
					}
				}
			} else {
				if (rel_time < 686) {
					if (hops < 3) {
						if (hops < 2) {
							w13 = 940;
						} else {
							w13 = 1004;
						}
					} else {
						if (hops < 4) {
							w13 = 857;
						} else {
							w13 = 927;
						}
					}
				} else {
					if (rel_time < 918) {
						if (hops < 3) {
							w13 = 196;
						} else {
							w13 = 765;
						}
					} else {
						if (hops < 3) {
							w13 = 954;
						} else {
							w13 = 705;
						}
					}
				}
			}
		}
	}
	int w14;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 1587) {
				if (rel_time < 1444) {
					if (rel_time < 1301) {
						if (cons != 0) {
							w14 = 377;
						} else {
							w14 = 129;
						}
					} else {
						if (cons != 4) {
							w14 = -46;
						} else {
							w14 = 358;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 1473) {
							w14 = 647;
						} else {
							w14 = 377;
						}
					} else {
						w14 = 696;
					}
				}
			} else {
				if (rel_time < 1672) {
					if (cons != 2) {
						if (rel_time < 1615) {
							w14 = -613;
						} else {
							w14 = -551;
						}
					} else {
						w14 = 188;
					}
				} else {
					if (rel_time < 2159) {
						if (rel_time < 2016) {
							w14 = 69;
						} else {
							w14 = 746;
						}
					} else {
						if (rel_time < 2243) {
							w14 = -550;
						} else {
							w14 = 184;
						}
					}
				}
			}
		} else {
			if (rel_time < 3159) {
				if (rel_time < 2730) {
					if (rel_time < 2587) {
						if (rel_time < 2444) {
							w14 = 289;
						} else {
							w14 = -210;
						}
					} else {
						if (cons != 3) {
							w14 = 691;
						} else {
							w14 = 1344;
						}
					}
				} else {
					if (rel_time < 2873) {
						if (cons != 2) {
							w14 = -401;
						} else {
							w14 = 340;
						}
					} else {
						if (rel_time < 3016) {
							w14 = 564;
						} else {
							w14 = -46;
						}
					}
				}
			} else {
				if (rel_time < 3244) {
					if (cons != 2) {
						if (hops < 3) {
							w14 = 821;
						} else {
							w14 = 692;
						}
					} else {
						if (hops < 3) {
							w14 = 259;
						} else {
							w14 = 466;
						}
					}
				} else {
					if (cons != 1) {
						if (cons != 4) {
							w14 = 462;
						} else {
							w14 = 318;
						}
					} else {
						if (hops < 3) {
							w14 = -167;
						} else {
							w14 = -200;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 3760) {
				if (rel_time < 868) {
					if (cons != 0) {
						if (rel_time < 822) {
							w14 = 393;
						} else {
							w14 = 834;
						}
					} else {
						if (rel_time < 438) {
							w14 = 370;
						} else {
							w14 = -485;
						}
					}
				} else {
					if (cons != 2) {
						if (cons != 1) {
							w14 = 93;
						} else {
							w14 = -259;
						}
					} else {
						w14 = 646;
					}
				}
			} else {
				if (rel_time < 3898) {
					if (prod != 2) {
						if (prod != 4) {
							w14 = 836;
						} else {
							w14 = -1364;
						}
					} else {
						w14 = 148;
					}
				} else {
					if (rel_time < 3998) {
						w14 = -14;
					} else {
						if (rel_time < 4044) {
							w14 = 811;
						} else {
							w14 = 343;
						}
					}
				}
			}
		} else {
			if (rel_time < 964) {
				if (rel_time < 822) {
					if (rel_time < 777) {
						if (rel_time < 731) {
							w14 = 469;
						} else {
							w14 = 834;
						}
					} else {
						if (hops < 5) {
							w14 = 43;
						} else {
							w14 = 181;
						}
					}
				} else {
					if (rel_time < 868) {
						if (hops < 3) {
							w14 = 998;
						} else {
							w14 = 924;
						}
					} else {
						if (hops < 4) {
							w14 = 429;
						} else {
							w14 = 694;
						}
					}
				}
			} else {
				if (rel_time < 1009) {
					if (hops < 3) {
						w14 = -14;
					} else {
						if (hops < 4) {
							w14 = -368;
						} else {
							w14 = -110;
						}
					}
				} else {
					if (rel_time < 1055) {
						if (hops < 3) {
							w14 = 952;
						} else {
							w14 = 614;
						}
					} else {
						if (rel_time < 3598) {
							w14 = 212;
						} else {
							w14 = 392;
						}
					}
				}
			}
		}
	}
	int w15;
	if (size < 38) {
		if (cons != 4) {
			if (rel_time < 3159) {
				if (rel_time < 2730) {
					if (rel_time < 2587) {
						if (rel_time < 2444) {
							w15 = 172;
						} else {
							w15 = -335;
						}
					} else {
						if (rel_time < 2616) {
							w15 = 1058;
						} else {
							w15 = 469;
						}
					}
				} else {
					if (rel_time < 2873) {
						if (cons != 2) {
							w15 = -524;
						} else {
							w15 = 267;
						}
					} else {
						if (rel_time < 3016) {
							w15 = 401;
						} else {
							w15 = -133;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 3187) {
						if (hops < 2) {
							w15 = 433;
						} else {
							w15 = 482;
						}
					} else {
						if (cons != 1) {
							w15 = 255;
						} else {
							w15 = -139;
						}
					}
				} else {
					if (rel_time < 3244) {
						if (hops < 2) {
							w15 = 473;
						} else {
							w15 = 563;
						}
					} else {
						if (hops < 5) {
							w15 = 351;
						} else {
							w15 = 594;
						}
					}
				}
			}
		} else {
			if (rel_time < 2845) {
				if (rel_time < 1987) {
					if (rel_time < 1273) {
						if (hops < 3) {
							w15 = 383;
						} else {
							w15 = 297;
						}
					} else {
						if (rel_time < 1416) {
							w15 = 5;
						} else {
							w15 = 197;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2416) {
							w15 = 325;
						} else {
							w15 = 228;
						}
					} else {
						if (rel_time < 2130) {
							w15 = 503;
						} else {
							w15 = 386;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 3273) {
						if (hops < 2) {
							w15 = 45;
						} else {
							w15 = 131;
						}
					} else {
						if (hops < 2) {
							w15 = 152;
						} else {
							w15 = 217;
						}
					}
				} else {
					if (rel_time < 2987) {
						if (hops < 4) {
							w15 = -51;
						} else {
							w15 = 78;
						}
					} else {
						if (rel_time < 3130) {
							w15 = 376;
						} else {
							w15 = 277;
						}
					}
				}
			}
		}
	} else {
		if (hops < 5) {
			if (rel_time < 10257) {
				if (rel_time < 10009) {
					if (rel_time < 9707) {
						if (rel_time < 9407) {
							w15 = 248;
						} else {
							w15 = 594;
						}
					} else {
						if (prod != 4) {
							w15 = -199;
						} else {
							w15 = 885;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 4) {
							w15 = 1164;
						} else {
							w15 = -357;
						}
					} else {
						if (hops < 2) {
							w15 = -384;
						} else {
							w15 = -346;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (prod != 3) {
						if (rel_time < 10416) {
							w15 = 902;
						} else {
							w15 = 542;
						}
					} else {
						if (hops < 2) {
							w15 = -556;
						} else {
							w15 = -746;
						}
					}
				} else {
					if (hops < 2) {
						w15 = -665;
					} else {
						if (hops < 3) {
							w15 = -788;
						} else {
							w15 = -696;
						}
					}
				}
			}
		} else {
			if (rel_time < 3807) {
				if (prod != 2) {
					if (prod != 3) {
						if (prod != 4) {
							w15 = 495;
						} else {
							w15 = 839;
						}
					} else {
						w15 = 109;
					}
				} else {
					w15 = 945;
				}
			} else {
				if (rel_time < 4090) {
					if (rel_time < 4044) {
						if (rel_time < 3998) {
							w15 = 65;
						} else {
							w15 = 1042;
						}
					} else {
						w15 = -1040;
					}
				} else {
					if (rel_time < 4136) {
						w15 = 1243;
					} else {
						if (rel_time < 4184) {
							w15 = -620;
						} else {
							w15 = 369;
						}
					}
				}
			}
		}
	}
	int w16;
	if (size < 38) {
		if (rel_time < 2016) {
			if (rel_time < 1873) {
				if (rel_time < 1730) {
					if (rel_time < 1587) {
						if (rel_time < 1444) {
							w16 = 44;
						} else {
							w16 = 412;
						}
					} else {
						if (rel_time < 1615) {
							w16 = -639;
						} else {
							w16 = -65;
						}
					}
				} else {
					if (rel_time < 1758) {
						if (hops < 4) {
							w16 = 791;
						} else {
							w16 = 598;
						}
					} else {
						if (cons != 3) {
							w16 = 116;
						} else {
							w16 = 717;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 1958) {
						if (hops < 2) {
							w16 = -714;
						} else {
							w16 = -547;
						}
					} else {
						if (rel_time < 1987) {
							w16 = -7;
						} else {
							w16 = -202;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w16 = 85;
						} else {
							w16 = 25;
						}
					} else {
						if (hops < 5) {
							w16 = 127;
						} else {
							w16 = 258;
						}
					}
				}
			}
		} else {
			if (rel_time < 2159) {
				if (cons != 3) {
					if (rel_time < 2044) {
						if (hops < 2) {
							w16 = 794;
						} else {
							w16 = 667;
						}
					} else {
						if (hops < 2) {
							w16 = 216;
						} else {
							w16 = 345;
						}
					}
				} else {
					if (hops < 2) {
						w16 = 854;
					} else {
						if (hops < 3) {
							w16 = 695;
						} else {
							w16 = 752;
						}
					}
				}
			} else {
				if (rel_time < 2243) {
					if (cons != 2) {
						if (rel_time < 2187) {
							w16 = -668;
						} else {
							w16 = -870;
						}
					} else {
						if (hops < 2) {
							w16 = 313;
						} else {
							w16 = 376;
						}
					}
				} else {
					if (rel_time < 2444) {
						if (rel_time < 2301) {
							w16 = 45;
						} else {
							w16 = 542;
						}
					} else {
						if (rel_time < 2529) {
							w16 = -291;
						} else {
							w16 = 129;
						}
					}
				}
			}
		}
	} else {
		if (cons != 4) {
			if (rel_time < 569) {
				if (rel_time < 503) {
					if (rel_time < 438) {
						if (cons != 0) {
							w16 = 324;
						} else {
							w16 = 204;
						}
					} else {
						if (hops < 2) {
							w16 = 35;
						} else {
							w16 = 110;
						}
					}
				} else {
					if (hops < 2) {
						w16 = 384;
					} else {
						if (hops < 3) {
							w16 = 559;
						} else {
							w16 = 436;
						}
					}
				}
			} else {
				if (rel_time < 731) {
					if (hops < 2) {
						if (rel_time < 635) {
							w16 = -442;
						} else {
							w16 = -414;
						}
					} else {
						if (hops < 4) {
							w16 = -70;
						} else {
							w16 = 99;
						}
					}
				} else {
					if (rel_time < 777) {
						if (hops < 2) {
							w16 = 725;
						} else {
							w16 = 504;
						}
					} else {
						if (cons != 1) {
							w16 = 179;
						} else {
							w16 = -206;
						}
					}
				}
			}
		} else {
			if (rel_time < 918) {
				if (rel_time < 686) {
					if (rel_time < 372) {
						if (hops < 2) {
							w16 = 212;
						} else {
							w16 = 291;
						}
					} else {
						if (hops < 3) {
							w16 = 477;
						} else {
							w16 = 401;
						}
					}
				} else {
					if (hops < 2) {
						w16 = -124;
					} else {
						if (hops < 4) {
							w16 = 147;
						} else {
							w16 = 373;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w16 = 462;
					} else {
						w16 = 648;
					}
				} else {
					if (hops < 4) {
						w16 = 222;
					} else {
						if (hops < 5) {
							w16 = 428;
						} else {
							w16 = 602;
						}
					}
				}
			}
		}
	}
	int w17;
	if (hops < 4) {
		if (rel_time < 4896) {
			if (rel_time < 4570) {
				if (rel_time < 4470) {
					if (rel_time < 4466) {
						if (rel_time < 4420) {
							w17 = 75;
						} else {
							w17 = 1156;
						}
					} else {
						if (hops < 2) {
							w17 = -535;
						} else {
							w17 = -468;
						}
					}
				} else {
					if (prod != 0) {
						w17 = -741;
					} else {
						if (hops < 2) {
							w17 = 1055;
						} else {
							w17 = 998;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (prod != 2) {
						if (rel_time < 4751) {
							w17 = -1197;
						} else {
							w17 = -621;
						}
					} else {
						if (hops < 2) {
							w17 = 1061;
						} else {
							w17 = 1008;
						}
					}
				} else {
					if (hops < 2) {
						w17 = 1064;
					} else {
						if (hops < 3) {
							w17 = 979;
						} else {
							w17 = 1050;
						}
					}
				}
			}
		} else {
			if (rel_time < 4901) {
				if (hops < 2) {
					w17 = 1498;
				} else {
					w17 = 1561;
				}
			} else {
				if (rel_time < 4947) {
					if (prod != 1) {
						if (hops < 2) {
							w17 = -806;
						} else {
							w17 = -738;
						}
					} else {
						w17 = 1546;
					}
				} else {
					if (rel_time < 4991) {
						if (prod != 2) {
							w17 = 1538;
						} else {
							w17 = -749;
						}
					} else {
						if (rel_time < 5317) {
							w17 = -193;
						} else {
							w17 = 133;
						}
					}
				}
			}
		}
	} else {
		if (hops < 5) {
			if (rel_time < 1301) {
				if (rel_time < 1158) {
					if (rel_time < 964) {
						if (rel_time < 822) {
							w17 = 179;
						} else {
							w17 = 389;
						}
					} else {
						if (cons != 2) {
							w17 = -34;
						} else {
							w17 = 356;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 1243) {
							w17 = 616;
						} else {
							w17 = 258;
						}
					} else {
						w17 = -13;
					}
				}
			} else {
				if (rel_time < 1444) {
					if (cons != 2) {
						if (rel_time < 1386) {
							w17 = -548;
						} else {
							w17 = -236;
						}
					} else {
						w17 = -41;
					}
				} else {
					if (rel_time < 1529) {
						if (cons != 2) {
							w17 = 664;
						} else {
							w17 = 40;
						}
					} else {
						if (rel_time < 4329) {
							w17 = 113;
						} else {
							w17 = 165;
						}
					}
				}
			}
		} else {
			if (rel_time < 2730) {
				if (rel_time < 2587) {
					if (rel_time < 2444) {
						if (rel_time < 2301) {
							w17 = 238;
						} else {
							w17 = 615;
						}
					} else {
						if (cons != 2) {
							w17 = -190;
						} else {
							w17 = 485;
						}
					}
				} else {
					if (rel_time < 2672) {
						if (cons != 2) {
							w17 = 1067;
						} else {
							w17 = 357;
						}
					} else {
						if (rel_time < 2702) {
							w17 = 471;
						} else {
							w17 = 246;
						}
					}
				}
			} else {
				if (rel_time < 2815) {
					if (cons != 2) {
						if (rel_time < 2758) {
							w17 = -495;
						} else {
							w17 = -665;
						}
					} else {
						w17 = 329;
					}
				} else {
					if (rel_time < 10296) {
						if (rel_time < 10257) {
							w17 = 208;
						} else {
							w17 = 880;
						}
					} else {
						if (rel_time < 10335) {
							w17 = -807;
						} else {
							w17 = 271;
						}
					}
				}
			}
		}
	}
	int w18;
	if (rel_time < 1301) {
		if (rel_time < 1158) {
			if (rel_time < 1130) {
				if (rel_time < 1100) {
					if (rel_time < 1055) {
						if (rel_time < 1009) {
							w18 = 117;
						} else {
							w18 = 338;
						}
					} else {
						if (hops < 2) {
							w18 = -272;
						} else {
							w18 = -115;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w18 = 301;
						} else {
							w18 = 432;
						}
					} else {
						if (hops < 4) {
							w18 = 133;
						} else {
							w18 = 321;
						}
					}
				}
			} else {
				if (hops < 2) {
					w18 = -67;
				} else {
					if (hops < 3) {
						w18 = -147;
					} else {
						if (hops < 5) {
							w18 = -120;
						} else {
							w18 = -74;
						}
					}
				}
			}
		} else {
			if (cons != 2) {
				if (rel_time < 1243) {
					if (hops < 3) {
						if (rel_time < 1187) {
							w18 = 347;
						} else {
							w18 = 232;
						}
					} else {
						if (hops < 5) {
							w18 = 484;
						} else {
							w18 = 667;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1273) {
							w18 = 174;
						} else {
							w18 = 73;
						}
					} else {
						if (hops < 3) {
							w18 = 262;
						} else {
							w18 = 193;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w18 = -21;
					} else {
						w18 = 185;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w18 = -98;
						} else {
							w18 = -9;
						}
					} else {
						w18 = 178;
					}
				}
			}
		}
	} else {
		if (rel_time < 1444) {
			if (cons != 2) {
				if (rel_time < 1386) {
					if (hops < 2) {
						if (rel_time < 1329) {
							w18 = -309;
						} else {
							w18 = -266;
						}
					} else {
						if (hops < 4) {
							w18 = -488;
						} else {
							w18 = -382;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1416) {
							w18 = 214;
						} else {
							w18 = -105;
						}
					} else {
						if (rel_time < 1416) {
							w18 = -137;
						} else {
							w18 = -211;
						}
					}
				}
			} else {
				if (hops < 2) {
					w18 = 204;
				} else {
					if (hops < 3) {
						w18 = -9;
					} else {
						if (hops < 4) {
							w18 = -112;
						} else {
							w18 = -11;
						}
					}
				}
			}
		} else {
			if (rel_time < 1587) {
				if (cons != 2) {
					if (rel_time < 1529) {
						if (hops < 2) {
							w18 = 273;
						} else {
							w18 = 564;
						}
					} else {
						if (rel_time < 1559) {
							w18 = 107;
						} else {
							w18 = 246;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w18 = -14;
						} else {
							w18 = -46;
						}
					} else {
						if (hops < 5) {
							w18 = 28;
						} else {
							w18 = 89;
						}
					}
				}
			} else {
				if (rel_time < 1672) {
					if (cons != 2) {
						if (hops < 2) {
							w18 = -375;
						} else {
							w18 = -602;
						}
					} else {
						if (hops < 4) {
							w18 = 176;
						} else {
							w18 = 590;
						}
					}
				} else {
					if (cons != 0) {
						if (rel_time < 1815) {
							w18 = 267;
						} else {
							w18 = 80;
						}
					} else {
						if (rel_time < 2444) {
							w18 = 35;
						} else {
							w18 = -54;
						}
					}
				}
			}
		}
	}
	int w19;
	if (hops < 2) {
		if (rel_time < 3760) {
			if (rel_time < 2730) {
				if (rel_time < 2587) {
					if (rel_time < 2444) {
						if (rel_time < 2301) {
							w19 = 0;
						} else {
							w19 = 377;
						}
					} else {
						if (cons != 2) {
							w19 = -435;
						} else {
							w19 = 183;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 2616) {
							w19 = 615;
						} else {
							w19 = 37;
						}
					} else {
						w19 = 851;
					}
				}
			} else {
				if (rel_time < 2815) {
					if (cons != 2) {
						if (rel_time < 2758) {
							w19 = -484;
						} else {
							w19 = -613;
						}
					} else {
						w19 = 158;
					}
				} else {
					if (prod != 1) {
						if (prod != 3) {
							w19 = -17;
						} else {
							w19 = -433;
						}
					} else {
						w19 = -459;
					}
				}
			}
		} else {
			if (rel_time < 3898) {
				if (prod != 2) {
					if (prod != 4) {
						if (rel_time < 3761) {
							w19 = 164;
						} else {
							w19 = 534;
						}
					} else {
						w19 = -1135;
					}
				} else {
					if (rel_time < 3807) {
						w19 = -68;
					} else {
						w19 = -74;
					}
				}
			} else {
				if (rel_time < 4090) {
					if (prod != 0) {
						if (prod != 1) {
							w19 = -145;
						} else {
							w19 = -676;
						}
					} else {
						w19 = 393;
					}
				} else {
					if (rel_time < 4136) {
						if (prod != 2) {
							w19 = -776;
						} else {
							w19 = 799;
						}
					} else {
						if (rel_time < 4138) {
							w19 = -818;
						} else {
							w19 = 54;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1301) {
			if (rel_time < 1158) {
				if (rel_time < 1130) {
					if (hops < 3) {
						if (rel_time < 822) {
							w19 = 120;
						} else {
							w19 = 231;
						}
					} else {
						if (rel_time < 964) {
							w19 = 107;
						} else {
							w19 = -36;
						}
					}
				} else {
					if (hops < 3) {
						w19 = -103;
					} else {
						if (hops < 5) {
							w19 = -84;
						} else {
							w19 = -52;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 1243) {
						if (hops < 3) {
							w19 = 258;
						} else {
							w19 = 356;
						}
					} else {
						if (hops < 5) {
							w19 = 146;
						} else {
							w19 = 286;
						}
					}
				} else {
					if (hops < 3) {
						w19 = 129;
					} else {
						if (hops < 5) {
							w19 = -42;
						} else {
							w19 = 125;
						}
					}
				}
			}
		} else {
			if (rel_time < 1444) {
				if (cons != 2) {
					if (rel_time < 1386) {
						if (hops < 3) {
							w19 = -256;
						} else {
							w19 = -368;
						}
					} else {
						if (rel_time < 1416) {
							w19 = -96;
						} else {
							w19 = -148;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w19 = -6;
						} else {
							w19 = -56;
						}
					} else {
						w19 = 45;
					}
				}
			} else {
				if (rel_time < 1587) {
					if (cons != 2) {
						if (cons != 4) {
							w19 = 345;
						} else {
							w19 = 75;
						}
					} else {
						if (hops < 4) {
							w19 = -32;
						} else {
							w19 = 31;
						}
					}
				} else {
					if (rel_time < 1672) {
						if (cons != 2) {
							w19 = -421;
						} else {
							w19 = 255;
						}
					} else {
						if (rel_time < 2016) {
							w19 = -10;
						} else {
							w19 = 73;
						}
					}
				}
			}
		}
	}
	int w20;
	if (hops < 3) {
		if (rel_time < 1301) {
			if (cons != 0) {
				if (hops < 2) {
					if (rel_time < 777) {
						if (rel_time < 635) {
							w20 = 46;
						} else {
							w20 = 360;
						}
					} else {
						if (rel_time < 822) {
							w20 = -378;
						} else {
							w20 = 64;
						}
					}
				} else {
					if (rel_time < 1009) {
						if (rel_time < 868) {
							w20 = 154;
						} else {
							w20 = -102;
						}
					} else {
						if (rel_time < 1055) {
							w20 = 346;
						} else {
							w20 = 144;
						}
					}
				}
			} else {
				if (rel_time < 438) {
					if (rel_time < 63) {
						if (hops < 2) {
							w20 = 57;
						} else {
							w20 = -18;
						}
					} else {
						if (hops < 2) {
							w20 = 76;
						} else {
							w20 = 209;
						}
					}
				} else {
					if (rel_time < 731) {
						w20 = -348;
					} else {
						if (rel_time < 964) {
							w20 = 145;
						} else {
							w20 = 8;
						}
					}
				}
			}
		} else {
			if (rel_time < 2016) {
				if (rel_time < 1873) {
					if (rel_time < 1730) {
						if (rel_time < 1587) {
							w20 = 25;
						} else {
							w20 = -164;
						}
					} else {
						if (cons != 2) {
							w20 = 247;
						} else {
							w20 = -122;
						}
					}
				} else {
					if (rel_time < 1901) {
						if (hops < 2) {
							w20 = -544;
						} else {
							w20 = -481;
						}
					} else {
						if (cons != 3) {
							w20 = -91;
						} else {
							w20 = -510;
						}
					}
				}
			} else {
				if (rel_time < 2159) {
					if (cons != 3) {
						if (rel_time < 2044) {
							w20 = 446;
						} else {
							w20 = 124;
						}
					} else {
						if (hops < 2) {
							w20 = 552;
						} else {
							w20 = 418;
						}
					}
				} else {
					if (rel_time < 2243) {
						if (cons != 2) {
							w20 = -613;
						} else {
							w20 = 177;
						}
					} else {
						if (rel_time < 2444) {
							w20 = 157;
						} else {
							w20 = 22;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10296) {
			if (rel_time < 10009) {
				if (rel_time < 9579) {
					if (rel_time < 9536) {
						if (rel_time < 9493) {
							w20 = 62;
						} else {
							w20 = -559;
						}
					} else {
						if (prod != 3) {
							w20 = -925;
						} else {
							w20 = 1411;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 0) {
							w20 = -474;
						} else {
							w20 = 127;
						}
					} else {
						if (hops < 5) {
							w20 = 807;
						} else {
							w20 = 685;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (prod != 4) {
						if (rel_time < 10160) {
							w20 = 802;
						} else {
							w20 = 266;
						}
					} else {
						if (hops < 5) {
							w20 = -389;
						} else {
							w20 = -562;
						}
					}
				} else {
					if (hops < 5) {
						w20 = -404;
					} else {
						w20 = -570;
					}
				}
			}
		} else {
			if (prod != 2) {
				if (prod != 4) {
					if (rel_time < 10335) {
						w20 = -621;
					} else {
						w20 = -663;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 10416) {
							w20 = 412;
						} else {
							w20 = 273;
						}
					} else {
						w20 = 408;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 10335) {
						w20 = 453;
					} else {
						w20 = 503;
					}
				} else {
					w20 = 639;
				}
			}
		}
	}
	int w21;
	if (rel_time < 9275) {
		if (rel_time < 9249) {
			if (rel_time < 9203) {
				if (rel_time < 9160) {
					if (rel_time < 8873) {
						if (rel_time < 8558) {
							w21 = 30;
						} else {
							w21 = -275;
						}
					} else {
						if (prod != 4) {
							w21 = 584;
						} else {
							w21 = -849;
						}
					}
				} else {
					if (prod != 1) {
						w21 = 889;
					} else {
						w21 = -1393;
					}
				}
			} else {
				if (prod != 2) {
					w21 = -1405;
				} else {
					w21 = 908;
				}
			}
		} else {
			w21 = -1400;
		}
	} else {
		if (rel_time < 9312) {
			if (prod != 3) {
				if (hops < 4) {
					w21 = 887;
				} else {
					w21 = 935;
				}
			} else {
				w21 = -1373;
			}
		} else {
			if (rel_time < 9407) {
				if (prod != 0) {
					w21 = 915;
				} else {
					if (hops < 3) {
						w21 = -865;
					} else {
						w21 = -796;
					}
				}
			} else {
				if (rel_time < 9579) {
					if (prod != 2) {
						if (prod != 0) {
							w21 = 1207;
						} else {
							w21 = -926;
						}
					} else {
						if (hops < 3) {
							w21 = -954;
						} else {
							w21 = -759;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 9869) {
							w21 = -344;
						} else {
							w21 = 69;
						}
					} else {
						if (rel_time < 9827) {
							w21 = 697;
						} else {
							w21 = 36;
						}
					}
				}
			}
		}
	}
	int w22;
	if (rel_time < 4896) {
		if (rel_time < 4851) {
			if (rel_time < 4751) {
				if (rel_time < 4570) {
					if (rel_time < 4420) {
						if (rel_time < 4375) {
							w22 = 11;
						} else {
							w22 = -758;
						}
					} else {
						if (prod != 4) {
							w22 = 881;
						} else {
							w22 = -569;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 4) {
							w22 = -921;
						} else {
							w22 = 662;
						}
					} else {
						if (hops < 4) {
							w22 = 660;
						} else {
							w22 = 943;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						if (hops < 2) {
							w22 = 692;
						} else {
							w22 = 639;
						}
					} else {
						w22 = 946;
					}
				} else {
					w22 = -649;
				}
			}
		} else {
			if (prod != 0) {
				w22 = 1640;
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w22 = -672;
					} else {
						w22 = -620;
					}
				} else {
					w22 = -815;
				}
			}
		}
	} else {
		if (rel_time < 4901) {
			if (hops < 4) {
				w22 = 1013;
			} else {
				w22 = 1481;
			}
		} else {
			if (rel_time < 4947) {
				if (prod != 1) {
					if (hops < 4) {
						if (hops < 3) {
							w22 = -609;
						} else {
							w22 = -564;
						}
					} else {
						w22 = -818;
					}
				} else {
					if (hops < 4) {
						w22 = 1020;
					} else {
						w22 = 1484;
					}
				}
			} else {
				if (rel_time < 4991) {
					if (prod != 2) {
						if (hops < 4) {
							w22 = 1015;
						} else {
							w22 = 1472;
						}
					} else {
						if (hops < 4) {
							w22 = -588;
						} else {
							w22 = -823;
						}
					}
				} else {
					if (rel_time < 5317) {
						if (prod != 0) {
							w22 = -453;
						} else {
							w22 = 988;
						}
					} else {
						if (rel_time < 5602) {
							w22 = 399;
						} else {
							w22 = 16;
						}
					}
				}
			}
		}
	}
	int w23;
	if (hops < 5) {
		if (rel_time < 6454) {
			if (rel_time < 6409) {
				if (rel_time < 6364) {
					if (rel_time < 6275) {
						if (rel_time < 6089) {
							w23 = 2;
						} else {
							w23 = 400;
						}
					} else {
						if (prod != 1) {
							w23 = 893;
						} else {
							w23 = -1404;
						}
					}
				} else {
					if (prod != 2) {
						w23 = -1419;
					} else {
						w23 = 907;
					}
				}
			} else {
				if (prod != 3) {
					w23 = 883;
				} else {
					w23 = -1400;
				}
			}
		} else {
			if (rel_time < 6466) {
				w23 = 907;
			} else {
				if (rel_time < 6564) {
					if (prod != 0) {
						w23 = 891;
					} else {
						if (hops < 2) {
							w23 = -910;
						} else {
							w23 = -863;
						}
					}
				} else {
					if (rel_time < 6606) {
						if (prod != 0) {
							w23 = 1421;
						} else {
							w23 = -881;
						}
					} else {
						if (rel_time < 6740) {
							w23 = 258;
						} else {
							w23 = 11;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5036) {
			if (rel_time < 4991) {
				if (rel_time < 4947) {
					if (rel_time < 4896) {
						if (rel_time < 4615) {
							w23 = 104;
						} else {
							w23 = -201;
						}
					} else {
						if (prod != 1) {
							w23 = -541;
						} else {
							w23 = 1070;
						}
					}
				} else {
					if (prod != 2) {
						w23 = 989;
					} else {
						w23 = -532;
					}
				}
			} else {
				w23 = 1642;
			}
		} else {
			if (rel_time < 5226) {
				if (prod != 0) {
					if (rel_time < 5136) {
						w23 = -648;
					} else {
						w23 = -1229;
					}
				} else {
					w23 = 623;
				}
			} else {
				if (rel_time < 5272) {
					w23 = 1065;
				} else {
					if (rel_time < 5317) {
						w23 = -1228;
					} else {
						if (rel_time < 5512) {
							w23 = 455;
						} else {
							w23 = 53;
						}
					}
				}
			}
		}
	}
	int w24;
	if (rel_time < 7708) {
		if (rel_time < 7691) {
			if (rel_time < 7591) {
				if (rel_time < 7547) {
					if (rel_time < 7414) {
						if (rel_time < 7260) {
							w24 = 4;
						} else {
							w24 = 420;
						}
					} else {
						if (prod != 2) {
							w24 = -976;
						} else {
							w24 = 912;
						}
					}
				} else {
					if (prod != 3) {
						w24 = 903;
					} else {
						w24 = -1395;
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w24 = 944;
					} else {
						if (hops < 3) {
							w24 = 857;
						} else {
							w24 = 915;
						}
					}
				} else {
					w24 = -890;
				}
			}
		} else {
			w24 = -871;
		}
	} else {
		if (rel_time < 7749) {
			if (prod != 0) {
				w24 = 1431;
			} else {
				w24 = -850;
			}
		} else {
			if (rel_time < 7791) {
				if (prod != 1) {
					w24 = -873;
				} else {
					w24 = 1433;
				}
			} else {
				if (rel_time < 7879) {
					if (prod != 3) {
						w24 = -870;
					} else {
						w24 = 1429;
					}
				} else {
					if (rel_time < 8126) {
						if (prod != 0) {
							w24 = -636;
						} else {
							w24 = 913;
						}
					} else {
						if (rel_time < 8443) {
							w24 = 319;
						} else {
							w24 = -4;
						}
					}
				}
			}
		}
	}
	int w25;
	if (rel_time < 10120) {
		if (rel_time < 10085) {
			if (rel_time < 10055) {
				if (rel_time < 10009) {
					if (rel_time < 9707) {
						if (rel_time < 9679) {
							w25 = 6;
						} else {
							w25 = 641;
						}
					} else {
						if (prod != 4) {
							w25 = -300;
						} else {
							w25 = 562;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 3) {
							w25 = -437;
						} else {
							w25 = -244;
						}
					} else {
						if (hops < 3) {
							w25 = 737;
						} else {
							w25 = 534;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w25 = -423;
					} else {
						w25 = -377;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w25 = -294;
						} else {
							w25 = -313;
						}
					} else {
						w25 = -433;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (prod != 2) {
					if (hops < 2) {
						w25 = 690;
					} else {
						w25 = 764;
					}
				} else {
					w25 = -259;
				}
			} else {
				if (prod != 2) {
					if (hops < 5) {
						w25 = 499;
					} else {
						w25 = 755;
					}
				} else {
					w25 = -271;
				}
			}
		}
	} else {
		if (prod != 1) {
			if (prod != 3) {
				if (rel_time < 10160) {
					if (hops < 3) {
						if (hops < 2) {
							w25 = -448;
						} else {
							w25 = -402;
						}
					} else {
						if (hops < 5) {
							w25 = -293;
						} else {
							w25 = -454;
						}
					}
				} else {
					if (prod != 4) {
						if (hops < 2) {
							w25 = 472;
						} else {
							w25 = 349;
						}
					} else {
						if (rel_time < 10257) {
							w25 = -363;
						} else {
							w25 = 221;
						}
					}
				}
			} else {
				if (rel_time < 10160) {
					if (hops < 3) {
						w25 = 761;
					} else {
						if (hops < 5) {
							w25 = 475;
						} else {
							w25 = 792;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w25 = -557;
						} else {
							w25 = -699;
						}
					} else {
						w25 = -493;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w25 = -633;
				} else {
					w25 = -725;
				}
			} else {
				if (rel_time < 10296) {
					w25 = -765;
				} else {
					w25 = -464;
				}
			}
		}
	}
	int w26;
	if (cons != 0) {
		if (rel_time < 868) {
			if (rel_time < 822) {
				if (rel_time < 777) {
					if (rel_time < 635) {
						if (rel_time < 569) {
							w26 = 78;
						} else {
							w26 = -227;
						}
					} else {
						if (rel_time < 686) {
							w26 = 154;
						} else {
							w26 = 245;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w26 = -280;
						} else {
							w26 = -204;
						}
					} else {
						if (hops < 4) {
							w26 = -289;
						} else {
							w26 = -268;
						}
					}
				}
			} else {
				if (hops < 4) {
					w26 = 370;
				} else {
					w26 = 319;
				}
			}
		} else {
			if (rel_time < 1009) {
				if (rel_time < 918) {
					if (hops < 2) {
						w26 = -179;
					} else {
						if (hops < 3) {
							w26 = -41;
						} else {
							w26 = 37;
						}
					}
				} else {
					if (hops < 2) {
						w26 = -287;
					} else {
						if (hops < 3) {
							w26 = -134;
						} else {
							w26 = -267;
						}
					}
				}
			} else {
				if (rel_time < 1273) {
					if (cons != 3) {
						if (rel_time < 1187) {
							w26 = 169;
						} else {
							w26 = 18;
						}
					} else {
						if (rel_time < 1100) {
							w26 = -176;
						} else {
							w26 = 124;
						}
					}
				} else {
					if (rel_time < 1386) {
						if (cons != 2) {
							w26 = -246;
						} else {
							w26 = 6;
						}
					} else {
						if (rel_time < 1529) {
							w26 = 98;
						} else {
							w26 = 5;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 438) {
				if (rel_time < 63) {
					w26 = 24;
				} else {
					w26 = 37;
				}
			} else {
				if (rel_time < 731) {
					w26 = -259;
				} else {
					if (rel_time < 3159) {
						if (rel_time < 2730) {
							w26 = -61;
						} else {
							w26 = -181;
						}
					} else {
						w26 = 51;
					}
				}
			}
		} else {
			if (rel_time < 2444) {
				if (rel_time < 2301) {
					if (rel_time < 2159) {
						if (rel_time < 2016) {
							w26 = -19;
						} else {
							w26 = 187;
						}
					} else {
						if (hops < 4) {
							w26 = -105;
						} else {
							w26 = -192;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w26 = 102;
						} else {
							w26 = 116;
						}
					} else {
						w26 = 68;
					}
				}
			} else {
				if (rel_time < 2873) {
					if (rel_time < 2730) {
						if (hops < 4) {
							w26 = -7;
						} else {
							w26 = -106;
						}
					} else {
						if (hops < 4) {
							w26 = -308;
						} else {
							w26 = -228;
						}
					}
				} else {
					if (rel_time < 3016) {
						if (hops < 3) {
							w26 = -64;
						} else {
							w26 = 177;
						}
					} else {
						if (hops < 4) {
							w26 = 24;
						} else {
							w26 = -107;
						}
					}
				}
			}
		}
	}
	int w27;
	if (rel_time < 9275) {
		if (rel_time < 9249) {
			if (rel_time < 9203) {
				if (rel_time < 9160) {
					if (rel_time < 8873) {
						if (rel_time < 8827) {
							w27 = 2;
						} else {
							w27 = -556;
						}
					} else {
						if (prod != 2) {
							w27 = 500;
						} else {
							w27 = -1031;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 2) {
							w27 = 645;
						} else {
							w27 = 568;
						}
					} else {
						w27 = -986;
					}
				}
			} else {
				if (prod != 2) {
					w27 = -995;
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w27 = 639;
						} else {
							w27 = 603;
						}
					} else {
						w27 = 650;
					}
				}
			}
		} else {
			if (hops < 4) {
				w27 = -999;
			} else {
				w27 = -956;
			}
		}
	} else {
		if (rel_time < 9312) {
			if (prod != 3) {
				w27 = 615;
			} else {
				w27 = -978;
			}
		} else {
			if (rel_time < 9407) {
				if (prod != 0) {
					w27 = 628;
				} else {
					if (hops < 2) {
						w27 = -630;
					} else {
						if (hops < 3) {
							w27 = -597;
						} else {
							w27 = -568;
						}
					}
				}
			} else {
				if (rel_time < 9579) {
					if (prod != 2) {
						if (prod != 0) {
							w27 = 834;
						} else {
							w27 = -660;
						}
					} else {
						if (hops < 3) {
							w27 = -678;
						} else {
							w27 = -543;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 9827) {
							w27 = -301;
						} else {
							w27 = 18;
						}
					} else {
						if (rel_time < 9827) {
							w27 = 569;
						} else {
							w27 = 13;
						}
					}
				}
			}
		}
	}
	int w28;
	if (hops < 4) {
		if (rel_time < 10120) {
			if (rel_time < 10085) {
				if (rel_time < 10055) {
					if (rel_time < 10009) {
						if (rel_time < 9707) {
							w28 = -2;
						} else {
							w28 = -95;
						}
					} else {
						if (prod != 1) {
							w28 = -298;
						} else {
							w28 = 466;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w28 = -302;
						} else {
							w28 = -270;
						}
					} else {
						w28 = -211;
					}
				}
			} else {
				if (hops < 3) {
					if (prod != 2) {
						if (hops < 2) {
							w28 = 476;
						} else {
							w28 = 528;
						}
					} else {
						w28 = -202;
					}
				} else {
					if (prod != 2) {
						w28 = 345;
					} else {
						w28 = -196;
					}
				}
			}
		} else {
			if (prod != 1) {
				if (prod != 3) {
					if (rel_time < 10160) {
						if (hops < 3) {
							w28 = -306;
						} else {
							w28 = -215;
						}
					} else {
						if (prod != 4) {
							w28 = 268;
						} else {
							w28 = 87;
						}
					}
				} else {
					if (rel_time < 10160) {
						if (hops < 3) {
							w28 = 526;
						} else {
							w28 = 339;
						}
					} else {
						if (rel_time < 10375) {
							w28 = -492;
						} else {
							w28 = -392;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w28 = -450;
					} else {
						w28 = -515;
					}
				} else {
					if (rel_time < 10296) {
						w28 = -550;
					} else {
						w28 = -328;
					}
				}
			}
		}
	} else {
		if (cons != 4) {
			if (hops < 5) {
				if (prod != 0) {
					if (rel_time < 8443) {
						if (rel_time < 8397) {
							w28 = 6;
						} else {
							w28 = 1343;
						}
					} else {
						if (rel_time < 8642) {
							w28 = -826;
						} else {
							w28 = 27;
						}
					}
				} else {
					if (rel_time < 4044) {
						if (rel_time < 3760) {
							w28 = 133;
						} else {
							w28 = 632;
						}
					} else {
						if (rel_time < 4329) {
							w28 = -879;
						} else {
							w28 = 60;
						}
					}
				}
			} else {
				if (rel_time < 5036) {
					if (rel_time < 4991) {
						if (rel_time < 4329) {
							w28 = 44;
						} else {
							w28 = 145;
						}
					} else {
						w28 = 1148;
					}
				} else {
					if (rel_time < 5226) {
						if (prod != 0) {
							w28 = -664;
						} else {
							w28 = 432;
						}
					} else {
						if (rel_time < 5272) {
							w28 = 742;
						} else {
							w28 = 28;
						}
					}
				}
			}
		} else {
			if (rel_time < 1416) {
				if (rel_time < 1273) {
					if (rel_time < 372) {
						if (hops < 5) {
							w28 = -28;
						} else {
							w28 = -19;
						}
					} else {
						if (rel_time < 1130) {
							w28 = 87;
						} else {
							w28 = 8;
						}
					}
				} else {
					if (hops < 5) {
						w28 = -137;
					} else {
						w28 = -59;
					}
				}
			} else {
				if (rel_time < 2845) {
					if (rel_time < 2559) {
						if (rel_time < 1702) {
							w28 = 217;
						} else {
							w28 = 75;
						}
					} else {
						w28 = 251;
					}
				} else {
					if (rel_time < 2987) {
						if (hops < 5) {
							w28 = -125;
						} else {
							w28 = -85;
						}
					} else {
						if (rel_time < 3130) {
							w28 = 115;
						} else {
							w28 = 52;
						}
					}
				}
			}
		}
	}
	int w29;
	if (rel_time < 7708) {
		if (rel_time < 7691) {
			if (rel_time < 7591) {
				if (rel_time < 7547) {
					if (rel_time < 7276) {
						if (rel_time < 7260) {
							w29 = -2;
						} else {
							w29 = 1314;
						}
					} else {
						if (prod != 0) {
							w29 = -523;
						} else {
							w29 = 902;
						}
					}
				} else {
					if (prod != 3) {
						if (hops < 2) {
							w29 = 670;
						} else {
							w29 = 591;
						}
					} else {
						if (hops < 2) {
							w29 = -944;
						} else {
							w29 = -995;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w29 = 657;
					} else {
						if (hops < 5) {
							w29 = 614;
						} else {
							w29 = 685;
						}
					}
				} else {
					w29 = -627;
				}
			}
		} else {
			if (hops < 2) {
				w29 = -633;
			} else {
				if (hops < 4) {
					w29 = -596;
				} else {
					if (hops < 5) {
						w29 = -650;
					} else {
						w29 = -579;
					}
				}
			}
		}
	} else {
		if (rel_time < 7749) {
			if (prod != 0) {
				w29 = 998;
			} else {
				w29 = -610;
			}
		} else {
			if (rel_time < 7791) {
				if (prod != 1) {
					if (hops < 2) {
						w29 = -632;
					} else {
						w29 = -604;
					}
				} else {
					w29 = 998;
				}
			} else {
				if (rel_time < 7879) {
					if (prod != 3) {
						w29 = -613;
					} else {
						w29 = 996;
					}
				} else {
					if (rel_time < 8067) {
						if (prod != 0) {
							w29 = -894;
						} else {
							w29 = 633;
						}
					} else {
						if (rel_time < 8087) {
							w29 = 1091;
						} else {
							w29 = -3;
						}
					}
				}
			}
		}
	}
	int w30;
	if (rel_time < 8730) {
		if (rel_time < 8558) {
			if (rel_time < 8465) {
				if (rel_time < 8443) {
					if (rel_time < 8397) {
						if (rel_time < 8353) {
							w30 = 0;
						} else {
							w30 = -617;
						}
					} else {
						if (prod != 3) {
							w30 = -985;
						} else {
							w30 = 1268;
						}
					}
				} else {
					if (hops < 4) {
						w30 = -871;
					} else {
						if (hops < 5) {
							w30 = -635;
						} else {
							w30 = -859;
						}
					}
				}
			} else {
				if (prod != 0) {
					w30 = -748;
				} else {
					if (hops < 2) {
						w30 = 922;
					} else {
						if (hops < 3) {
							w30 = 860;
						} else {
							w30 = 911;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (prod != 4) {
					if (prod != 0) {
						if (hops < 4) {
							w30 = -1303;
						} else {
							w30 = -1204;
						}
					} else {
						w30 = 1001;
					}
				} else {
					w30 = 1005;
				}
			} else {
				if (hops < 4) {
					w30 = 998;
				} else {
					if (rel_time < 8642) {
						w30 = 1227;
					} else {
						w30 = 1006;
					}
				}
			}
		}
	} else {
		if (rel_time < 8897) {
			if (prod != 0) {
				if (rel_time < 8827) {
					w30 = 1008;
				} else {
					if (rel_time < 8873) {
						w30 = 1677;
					} else {
						if (hops < 2) {
							w30 = 1086;
						} else {
							w30 = 1135;
						}
					}
				}
			} else {
				if (rel_time < 8827) {
					w30 = -802;
				} else {
					if (hops < 2) {
						w30 = -641;
					} else {
						if (hops < 5) {
							w30 = -596;
						} else {
							w30 = -546;
						}
					}
				}
			}
		} else {
			if (rel_time < 8935) {
				if (prod != 1) {
					if (hops < 2) {
						w30 = -747;
					} else {
						w30 = -707;
					}
				} else {
					w30 = 1124;
				}
			} else {
				if (rel_time < 8975) {
					if (prod != 2) {
						w30 = 1119;
					} else {
						w30 = -721;
					}
				} else {
					if (rel_time < 9275) {
						if (prod != 0) {
							w30 = -392;
						} else {
							w30 = 579;
						}
					} else {
						if (rel_time < 9312) {
							w30 = 403;
						} else {
							w30 = 15;
						}
					}
				}
			}
		}
	}
	int w31;
	if (rel_time < 8266) {
		if (rel_time < 8087) {
			if (rel_time < 8067) {
				if (rel_time < 8021) {
					if (rel_time < 7708) {
						if (rel_time < 7691) {
							w31 = -1;
						} else {
							w31 = -431;
						}
					} else {
						if (prod != 2) {
							w31 = 317;
						} else {
							w31 = -430;
						}
					}
				} else {
					if (prod != 1) {
						w31 = 1365;
					} else {
						if (hops < 3) {
							w31 = -966;
						} else {
							w31 = -914;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w31 = 773;
					} else {
						w31 = 715;
					}
				} else {
					w31 = 788;
				}
			}
		} else {
			if (prod != 4) {
				if (prod != 2) {
					if (rel_time < 8168) {
						if (rel_time < 8126) {
							w31 = -1215;
						} else {
							w31 = -1498;
						}
					} else {
						if (hops < 2) {
							w31 = -1041;
						} else {
							w31 = -936;
						}
					}
				} else {
					w31 = 1081;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w31 = 805;
					} else {
						w31 = 740;
					}
				} else {
					w31 = 819;
				}
			}
		}
	} else {
		if (rel_time < 8443) {
			if (prod != 2) {
				if (prod != 0) {
					if (prod != 4) {
						if (rel_time < 8397) {
							w31 = 1354;
						} else {
							w31 = 888;
						}
					} else {
						w31 = -690;
					}
				} else {
					if (hops < 2) {
						w31 = -1032;
					} else {
						w31 = -932;
					}
				}
			} else {
				if (rel_time < 8353) {
					if (hops < 2) {
						w31 = -1026;
					} else {
						w31 = -947;
					}
				} else {
					if (hops < 2) {
						w31 = -831;
					} else {
						w31 = -764;
					}
				}
			}
		} else {
			if (rel_time < 8465) {
				if (hops < 4) {
					w31 = -610;
				} else {
					if (hops < 5) {
						w31 = -445;
					} else {
						w31 = -603;
					}
				}
			} else {
				if (rel_time < 8558) {
					if (prod != 0) {
						if (hops < 4) {
							w31 = -601;
						} else {
							w31 = -469;
						}
					} else {
						if (hops < 4) {
							w31 = 636;
						} else {
							w31 = 593;
						}
					}
				} else {
					if (rel_time < 8599) {
						if (prod != 0) {
							w31 = -893;
						} else {
							w31 = 701;
						}
					} else {
						if (prod != 2) {
							w31 = -14;
						} else {
							w31 = 105;
						}
					}
				}
			}
		}
	}
	int w32;
	if (cons != 4) {
		if (rel_time < 4090) {
			if (rel_time < 4044) {
				if (rel_time < 3998) {
					if (rel_time < 3898) {
						if (rel_time < 3852) {
							w32 = -13;
						} else {
							w32 = 551;
						}
					} else {
						if (hops < 2) {
							w32 = -164;
						} else {
							w32 = -476;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w32 = 252;
						} else {
							w32 = 330;
						}
					} else {
						if (hops < 4) {
							w32 = 386;
						} else {
							w32 = 456;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 2) {
						w32 = 934;
					} else {
						w32 = 691;
					}
				} else {
					if (hops < 2) {
						w32 = -496;
					} else {
						if (hops < 4) {
							w32 = -867;
						} else {
							w32 = -988;
						}
					}
				}
			}
		} else {
			if (rel_time < 4136) {
				if (prod != 2) {
					if (hops < 2) {
						w32 = -576;
					} else {
						w32 = -822;
					}
				} else {
					if (hops < 2) {
						w32 = 536;
					} else {
						if (hops < 4) {
							w32 = 763;
						} else {
							w32 = 636;
						}
					}
				}
			} else {
				if (rel_time < 4138) {
					if (hops < 2) {
						w32 = -596;
					} else {
						if (hops < 4) {
							w32 = -848;
						} else {
							w32 = -986;
						}
					}
				} else {
					if (rel_time < 4466) {
						if (prod != 1) {
							w32 = -79;
						} else {
							w32 = 1291;
						}
					} else {
						if (rel_time < 4751) {
							w32 = -134;
						} else {
							w32 = 5;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2845) {
			if (rel_time < 2559) {
				if (rel_time < 686) {
					if (rel_time < 372) {
						if (hops < 4) {
							w32 = 47;
						} else {
							w32 = -17;
						}
					} else {
						if (hops < 5) {
							w32 = 108;
						} else {
							w32 = -1;
						}
					}
				} else {
					if (rel_time < 1987) {
						if (rel_time < 1844) {
							w32 = 20;
						} else {
							w32 = -66;
						}
					} else {
						if (rel_time < 2130) {
							w32 = 114;
						} else {
							w32 = 33;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 2702) {
							w32 = 153;
						} else {
							w32 = 112;
						}
					} else {
						if (rel_time < 2702) {
							w32 = 87;
						} else {
							w32 = 113;
						}
					}
				} else {
					w32 = 177;
				}
			}
		} else {
			if (rel_time < 2987) {
				if (hops < 3) {
					if (hops < 2) {
						w32 = -123;
					} else {
						w32 = 3;
					}
				} else {
					if (hops < 4) {
						w32 = -178;
					} else {
						if (hops < 5) {
							w32 = -87;
						} else {
							w32 = -58;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 3273) {
						if (rel_time < 3130) {
							w32 = -12;
						} else {
							w32 = -92;
						}
					} else {
						if (hops < 2) {
							w32 = 4;
						} else {
							w32 = 22;
						}
					}
				} else {
					if (rel_time < 3273) {
						if (rel_time < 3130) {
							w32 = 91;
						} else {
							w32 = 51;
						}
					} else {
						if (hops < 5) {
							w32 = 3;
						} else {
							w32 = 56;
						}
					}
				}
			}
		}
	}
	int w33;
	if (rel_time < 5711) {
		if (rel_time < 5702) {
			if (rel_time < 5602) {
				if (rel_time < 5557) {
					if (rel_time < 5423) {
						if (rel_time < 5272) {
							w33 = 6;
						} else {
							w33 = -401;
						}
					} else {
						if (prod != 2) {
							w33 = 943;
						} else {
							w33 = -969;
						}
					}
				} else {
					if (prod != 3) {
						w33 = -984;
					} else {
						if (hops < 2) {
							w33 = 1276;
						} else {
							w33 = 1360;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w33 = -918;
					} else {
						w33 = -828;
					}
				} else {
					w33 = 867;
				}
			}
		} else {
			w33 = 888;
		}
	} else {
		if (rel_time < 5756) {
			if (prod != 0) {
				w33 = -1407;
			} else {
				w33 = 894;
			}
		} else {
			if (rel_time < 5798) {
				if (prod != 1) {
					w33 = 901;
				} else {
					w33 = -1399;
				}
			} else {
				if (rel_time < 5889) {
					if (prod != 3) {
						w33 = 905;
					} else {
						w33 = -1396;
					}
				} else {
					if (rel_time < 6077) {
						if (prod != 0) {
							w33 = 1202;
						} else {
							w33 = -873;
						}
					} else {
						if (rel_time < 6089) {
							w33 = -885;
						} else {
							w33 = 2;
						}
					}
				}
			}
		}
	}
	int w34;
	if (rel_time < 10120) {
		if (rel_time < 10085) {
			if (rel_time < 10055) {
				if (rel_time < 10009) {
					if (rel_time < 9707) {
						if (rel_time < 9679) {
							w34 = 0;
						} else {
							w34 = 533;
						}
					} else {
						if (prod != 3) {
							w34 = 35;
						} else {
							w34 = -593;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 3) {
							w34 = -260;
						} else {
							w34 = -128;
						}
					} else {
						if (hops < 5) {
							w34 = 321;
						} else {
							w34 = 600;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						if (hops < 3) {
							w34 = -238;
						} else {
							w34 = -185;
						}
					} else {
						w34 = -270;
					}
				} else {
					w34 = -354;
				}
			}
		} else {
			if (prod != 2) {
				if (hops < 3) {
					if (hops < 2) {
						w34 = 332;
					} else {
						w34 = 368;
					}
				} else {
					if (hops < 4) {
						w34 = 240;
					} else {
						if (hops < 5) {
							w34 = 327;
						} else {
							w34 = 516;
						}
					}
				}
			} else {
				w34 = -225;
			}
		}
	} else {
		if (prod != 1) {
			if (prod != 3) {
				if (rel_time < 10257) {
					if (prod != 0) {
						if (rel_time < 10160) {
							w34 = -205;
						} else {
							w34 = -282;
						}
					} else {
						if (hops < 2) {
							w34 = 189;
						} else {
							w34 = 100;
						}
					}
				} else {
					if (rel_time < 10416) {
						if (rel_time < 10375) {
							w34 = 198;
						} else {
							w34 = 496;
						}
					} else {
						if (hops < 5) {
							w34 = 80;
						} else {
							w34 = 163;
						}
					}
				}
			} else {
				if (rel_time < 10160) {
					if (hops < 5) {
						if (hops < 3) {
							w34 = 368;
						} else {
							w34 = 281;
						}
					} else {
						w34 = 539;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 10375) {
							w34 = -388;
						} else {
							w34 = -217;
						}
					} else {
						if (hops < 3) {
							w34 = -372;
						} else {
							w34 = -294;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 10296) {
							w34 = -305;
						} else {
							w34 = -328;
						}
					} else {
						w34 = -362;
					}
				} else {
					if (rel_time < 10296) {
						w34 = -388;
					} else {
						w34 = -231;
					}
				}
			} else {
				if (rel_time < 10296) {
					w34 = -493;
				} else {
					w34 = -345;
				}
			}
		}
	}
	int w35;
	if (rel_time < 6132) {
		if (rel_time < 6089) {
			if (rel_time < 6077) {
				if (rel_time < 6033) {
					if (rel_time < 5711) {
						if (rel_time < 5702) {
							w35 = 2;
						} else {
							w35 = 621;
						}
					} else {
						if (prod != 2) {
							w35 = -413;
						} else {
							w35 = 632;
						}
					}
				} else {
					if (prod != 1) {
						w35 = -1272;
					} else {
						if (hops < 2) {
							w35 = 1016;
						} else {
							w35 = 1087;
						}
					}
				}
			} else {
				if (hops < 2) {
					w35 = -661;
				} else {
					w35 = -598;
				}
			}
		} else {
			if (prod != 2) {
				if (hops < 2) {
					w35 = 1257;
				} else {
					w35 = 1316;
				}
			} else {
				w35 = -964;
			}
		}
	} else {
		if (rel_time < 6454) {
			if (prod != 0) {
				if (prod != 2) {
					if (rel_time < 6175) {
						if (prod != 3) {
							w35 = -1011;
						} else {
							w35 = 1334;
						}
					} else {
						if (prod != 4) {
							w35 = -1008;
						} else {
							w35 = -603;
						}
					}
				} else {
					if (hops < 5) {
						w35 = 624;
					} else {
						w35 = 911;
					}
				}
			} else {
				if (rel_time < 6275) {
					if (hops < 3) {
						if (hops < 2) {
							w35 = 777;
						} else {
							w35 = 730;
						}
					} else {
						w35 = 801;
					}
				} else {
					if (hops < 5) {
						w35 = 618;
					} else {
						w35 = 910;
					}
				}
			}
		} else {
			if (rel_time < 6466) {
				if (hops < 5) {
					w35 = 629;
				} else {
					w35 = 910;
				}
			} else {
				if (rel_time < 6564) {
					if (prod != 0) {
						if (hops < 5) {
							w35 = 618;
						} else {
							w35 = 915;
						}
					} else {
						if (hops < 5) {
							w35 = -625;
						} else {
							w35 = -890;
						}
					}
				} else {
					if (rel_time < 6606) {
						if (prod != 0) {
							w35 = 991;
						} else {
							w35 = -682;
						}
					} else {
						if (rel_time < 6740) {
							w35 = 199;
						} else {
							w35 = -11;
						}
					}
				}
			}
		}
	}
	int w36;
	if (rel_time < 569) {
		if (rel_time < 503) {
			if (rel_time < 438) {
				if (cons != 1) {
					if (cons != 3) {
						if (hops < 3) {
							w36 = 31;
						} else {
							w36 = -4;
						}
					} else {
						if (hops < 4) {
							w36 = 74;
						} else {
							w36 = 186;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w36 = 123;
						} else {
							w36 = 75;
						}
					} else {
						if (hops < 4) {
							w36 = 164;
						} else {
							w36 = 147;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w36 = -84;
					} else {
						w36 = -52;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w36 = -140;
						} else {
							w36 = -126;
						}
					} else {
						w36 = -84;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w36 = 160;
				} else {
					w36 = 215;
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						w36 = 112;
					} else {
						w36 = 134;
					}
				} else {
					w36 = 232;
				}
			}
		}
	} else {
		if (rel_time < 635) {
			if (hops < 2) {
				w36 = -326;
			} else {
				if (hops < 3) {
					w36 = 36;
				} else {
					if (hops < 4) {
						w36 = -97;
					} else {
						if (hops < 5) {
							w36 = -224;
						} else {
							w36 = -197;
						}
					}
				}
			}
		} else {
			if (cons != 0) {
				if (rel_time < 777) {
					if (rel_time < 686) {
						if (hops < 4) {
							w36 = 79;
						} else {
							w36 = 31;
						}
					} else {
						if (hops < 2) {
							w36 = 255;
						} else {
							w36 = 130;
						}
					}
				} else {
					if (rel_time < 822) {
						if (hops < 3) {
							w36 = -169;
						} else {
							w36 = -196;
						}
					} else {
						if (rel_time < 868) {
							w36 = 254;
						} else {
							w36 = 0;
						}
					}
				}
			} else {
				if (rel_time < 731) {
					if (hops < 4) {
						if (hops < 3) {
							w36 = -212;
						} else {
							w36 = -119;
						}
					} else {
						if (hops < 5) {
							w36 = 81;
						} else {
							w36 = 110;
						}
					}
				} else {
					if (rel_time < 1301) {
						if (rel_time < 1158) {
							w36 = -4;
						} else {
							w36 = 82;
						}
					} else {
						if (rel_time < 1444) {
							w36 = -111;
						} else {
							w36 = -27;
						}
					}
				}
			}
		}
	}
	int w37;
	if (hops < 3) {
		if (rel_time < 1587) {
			if (rel_time < 1501) {
				if (rel_time < 1301) {
					if (hops < 2) {
						if (rel_time < 1100) {
							w37 = -11;
						} else {
							w37 = 40;
						}
					} else {
						if (rel_time < 822) {
							w37 = 18;
						} else {
							w37 = 69;
						}
					}
				} else {
					if (rel_time < 1329) {
						if (hops < 2) {
							w37 = -164;
						} else {
							w37 = -145;
						}
					} else {
						if (cons != 1) {
							w37 = -40;
						} else {
							w37 = 163;
						}
					}
				}
			} else {
				if (rel_time < 1529) {
					if (hops < 2) {
						w37 = 158;
					} else {
						w37 = 278;
					}
				} else {
					if (rel_time < 1559) {
						if (hops < 2) {
							w37 = 43;
						} else {
							w37 = -24;
						}
					} else {
						if (hops < 2) {
							w37 = 30;
						} else {
							w37 = 128;
						}
					}
				}
			}
		} else {
			if (rel_time < 1672) {
				if (cons != 2) {
					if (hops < 2) {
						if (rel_time < 1615) {
							w37 = -165;
						} else {
							w37 = -294;
						}
					} else {
						if (rel_time < 1615) {
							w37 = -331;
						} else {
							w37 = -423;
						}
					}
				} else {
					if (hops < 2) {
						w37 = 58;
					} else {
						w37 = 140;
					}
				}
			} else {
				if (rel_time < 1815) {
					if (cons != 1) {
						if (rel_time < 1786) {
							w37 = -80;
						} else {
							w37 = 322;
						}
					} else {
						if (hops < 2) {
							w37 = 322;
						} else {
							w37 = 380;
						}
					}
				} else {
					if (rel_time < 2016) {
						if (cons != 1) {
							w37 = -99;
						} else {
							w37 = -377;
						}
					} else {
						if (rel_time < 2101) {
							w37 = 209;
						} else {
							w37 = -9;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2016) {
			if (rel_time < 1873) {
				if (rel_time < 1730) {
					if (hops < 4) {
						if (rel_time < 1587) {
							w37 = -22;
						} else {
							w37 = -171;
						}
					} else {
						if (rel_time < 1672) {
							w37 = 20;
						} else {
							w37 = 190;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 1815) {
							w37 = 347;
						} else {
							w37 = 95;
						}
					} else {
						if (hops < 4) {
							w37 = -80;
						} else {
							w37 = -311;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 1901) {
						if (hops < 4) {
							w37 = -477;
						} else {
							w37 = -392;
						}
					} else {
						if (rel_time < 1987) {
							w37 = -41;
						} else {
							w37 = -173;
						}
					}
				} else {
					if (hops < 5) {
						w37 = -458;
					} else {
						w37 = -389;
					}
				}
			}
		} else {
			if (rel_time < 2159) {
				if (cons != 3) {
					if (rel_time < 2044) {
						w37 = 371;
					} else {
						if (rel_time < 2130) {
							w37 = 105;
						} else {
							w37 = 161;
						}
					}
				} else {
					w37 = 407;
				}
			} else {
				if (rel_time < 2243) {
					if (cons != 2) {
						if (rel_time < 2187) {
							w37 = -557;
						} else {
							w37 = -697;
						}
					} else {
						if (hops < 4) {
							w37 = 188;
						} else {
							w37 = 120;
						}
					}
				} else {
					if (rel_time < 2386) {
						if (rel_time < 2358) {
							w37 = 130;
						} else {
							w37 = 718;
						}
					} else {
						if (rel_time < 2529) {
							w37 = -125;
						} else {
							w37 = 14;
						}
					}
				}
			}
		}
	}
	int w38;
	if (rel_time < 4090) {
		if (rel_time < 4044) {
			if (prod != 0) {
				if (rel_time < 2730) {
					if (rel_time < 2587) {
						if (rel_time < 2444) {
							w38 = 6;
						} else {
							w38 = -166;
						}
					} else {
						if (cons != 3) {
							w38 = 137;
						} else {
							w38 = 616;
						}
					}
				} else {
					if (rel_time < 2815) {
						if (cons != 2) {
							w38 = -516;
						} else {
							w38 = 37;
						}
					} else {
						if (rel_time < 2901) {
							w38 = 155;
						} else {
							w38 = -36;
						}
					}
				}
			} else {
				if (rel_time < 3715) {
					if (rel_time < 3462) {
						if (hops < 3) {
							w38 = 272;
						} else {
							w38 = 52;
						}
					} else {
						if (hops < 2) {
							w38 = 874;
						} else {
							w38 = 1638;
						}
					}
				} else {
					if (rel_time < 3760) {
						if (hops < 3) {
							w38 = -241;
						} else {
							w38 = 17;
						}
					} else {
						if (hops < 2) {
							w38 = 177;
						} else {
							w38 = 267;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (hops < 2) {
					w38 = 660;
				} else {
					w38 = 493;
				}
			} else {
				if (hops < 2) {
					w38 = -347;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w38 = -622;
						} else {
							w38 = -591;
						}
					} else {
						w38 = -699;
					}
				}
			}
		}
	} else {
		if (rel_time < 4136) {
			if (prod != 2) {
				if (hops < 2) {
					w38 = -410;
				} else {
					w38 = -592;
				}
			} else {
				if (hops < 2) {
					w38 = 376;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w38 = 513;
						} else {
							w38 = 557;
						}
					} else {
						w38 = 438;
					}
				}
			}
		} else {
			if (rel_time < 4138) {
				if (hops < 2) {
					w38 = -417;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w38 = -613;
						} else {
							w38 = -567;
						}
					} else {
						w38 = -698;
					}
				}
			} else {
				if (rel_time < 4570) {
					if (prod != 2) {
						if (prod != 1) {
							w38 = 133;
						} else {
							w38 = 901;
						}
					} else {
						if (rel_time < 4375) {
							w38 = -1011;
						} else {
							w38 = -742;
						}
					}
				} else {
					if (rel_time < 4615) {
						if (prod != 0) {
							w38 = -711;
						} else {
							w38 = 1412;
						}
					} else {
						if (rel_time < 5602) {
							w38 = 55;
						} else {
							w38 = -7;
						}
					}
				}
			}
		}
	}
	int w39;
	if (rel_time < 6983) {
		if (rel_time < 6940) {
			if (rel_time < 6898) {
				if (rel_time < 6885) {
					if (rel_time < 6839) {
						if (rel_time < 6740) {
							w39 = 2;
						} else {
							w39 = -647;
						}
					} else {
						if (prod != 0) {
							w39 = -1383;
						} else {
							w39 = 906;
						}
					}
				} else {
					w39 = -1396;
				}
			} else {
				if (prod != 1) {
					if (hops < 2) {
						w39 = 937;
					} else {
						if (hops < 3) {
							w39 = 867;
						} else {
							w39 = 931;
						}
					}
				} else {
					w39 = -1370;
				}
			}
		} else {
			if (prod != 2) {
				w39 = -1391;
			} else {
				w39 = 906;
			}
		}
	} else {
		if (rel_time < 7215) {
			if (prod != 0) {
				if (prod != 3) {
					if (prod != 2) {
						if (rel_time < 7126) {
							w39 = 907;
						} else {
							w39 = 1437;
						}
					} else {
						w39 = -853;
					}
				} else {
					w39 = -1391;
				}
			} else {
				if (hops < 2) {
					w39 = -907;
				} else {
					w39 = -858;
				}
			}
		} else {
			if (rel_time < 7260) {
				if (prod != 2) {
					w39 = 1448;
				} else {
					if (hops < 2) {
						w39 = -890;
					} else {
						w39 = -852;
					}
				}
			} else {
				if (rel_time < 7276) {
					if (hops < 2) {
						w39 = 897;
					} else {
						w39 = 935;
					}
				} else {
					if (rel_time < 7318) {
						if (prod != 3) {
							w39 = -829;
						} else {
							w39 = 1462;
						}
					} else {
						if (prod != 2) {
							w39 = -16;
						} else {
							w39 = 94;
						}
					}
				}
			}
		}
	}
	int w40;
	if (rel_time < 2301) {
		if (rel_time < 2159) {
			if (rel_time < 2016) {
				if (rel_time < 1873) {
					if (rel_time < 1730) {
						if (rel_time < 1644) {
							w40 = 3;
						} else {
							w40 = -92;
						}
					} else {
						if (cons != 2) {
							w40 = 134;
						} else {
							w40 = -102;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 1901) {
							w40 = -282;
						} else {
							w40 = -48;
						}
					} else {
						if (hops < 2) {
							w40 = -383;
						} else {
							w40 = -310;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 2101) {
						if (hops < 2) {
							w40 = 301;
						} else {
							w40 = 233;
						}
					} else {
						if (rel_time < 2130) {
							w40 = 65;
						} else {
							w40 = 114;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w40 = -85;
						} else {
							w40 = -36;
						}
					} else {
						if (hops < 5) {
							w40 = 57;
						} else {
							w40 = 38;
						}
					}
				}
			}
		} else {
			if (cons != 3) {
				if (rel_time < 2187) {
					if (hops < 4) {
						if (hops < 2) {
							w40 = -385;
						} else {
							w40 = -359;
						}
					} else {
						if (hops < 5) {
							w40 = -437;
						} else {
							w40 = -385;
						}
					}
				} else {
					if (rel_time < 2273) {
						if (rel_time < 2215) {
							w40 = 107;
						} else {
							w40 = 0;
						}
					} else {
						if (hops < 2) {
							w40 = -291;
						} else {
							w40 = -106;
						}
					}
				}
			} else {
				if (hops < 2) {
					w40 = -528;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w40 = -502;
						} else {
							w40 = -456;
						}
					} else {
						if (hops < 5) {
							w40 = -543;
						} else {
							w40 = -474;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2330) {
			if (hops < 4) {
				w40 = 549;
			} else {
				if (hops < 5) {
					w40 = 668;
				} else {
					w40 = 603;
				}
			}
		} else {
			if (rel_time < 2358) {
				if (hops < 4) {
					if (hops < 2) {
						w40 = -317;
					} else {
						if (hops < 3) {
							w40 = -344;
						} else {
							w40 = -316;
						}
					}
				} else {
					if (hops < 5) {
						w40 = -27;
					} else {
						w40 = -86;
					}
				}
			} else {
				if (rel_time < 2386) {
					if (hops < 4) {
						if (hops < 3) {
							w40 = 530;
						} else {
							w40 = 367;
						}
					} else {
						w40 = 639;
					}
				} else {
					if (rel_time < 2529) {
						if (cons != 2) {
							w40 = -195;
						} else {
							w40 = 337;
						}
					} else {
						if (rel_time < 2672) {
							w40 = 166;
						} else {
							w40 = -3;
						}
					}
				}
			}
		}
	}
	int w41;
	if (rel_time < 8266) {
		if (rel_time < 8087) {
			if (rel_time < 8067) {
				if (rel_time < 8021) {
					if (rel_time < 7591) {
						if (rel_time < 7547) {
							w41 = -1;
						} else {
							w41 = -513;
						}
					} else {
						if (prod != 3) {
							w41 = 20;
						} else {
							w41 = 611;
						}
					}
				} else {
					if (prod != 1) {
						w41 = 935;
					} else {
						if (hops < 3) {
							w41 = -665;
						} else {
							w41 = -636;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w41 = 520;
					} else {
						w41 = 479;
					}
				} else {
					w41 = 523;
				}
			}
		} else {
			if (prod != 4) {
				if (prod != 2) {
					if (rel_time < 8168) {
						if (rel_time < 8126) {
							w41 = -842;
						} else {
							w41 = -1042;
						}
					} else {
						if (hops < 2) {
							w41 = -718;
						} else {
							w41 = -647;
						}
					}
				} else {
					w41 = 733;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w41 = 575;
					} else {
						w41 = 530;
					}
				} else {
					w41 = 578;
				}
			}
		}
	} else {
		if (rel_time < 8443) {
			if (prod != 2) {
				if (prod != 0) {
					if (prod != 4) {
						if (rel_time < 8397) {
							w41 = 957;
						} else {
							w41 = 630;
						}
					} else {
						w41 = -473;
					}
				} else {
					if (hops < 2) {
						w41 = -712;
					} else {
						w41 = -647;
					}
				}
			} else {
				if (rel_time < 8353) {
					if (hops < 2) {
						w41 = -740;
					} else {
						w41 = -687;
					}
				} else {
					if (hops < 2) {
						w41 = -603;
					} else {
						w41 = -561;
					}
				}
			}
		} else {
			if (rel_time < 8465) {
				if (hops < 4) {
					w41 = -417;
				} else {
					if (hops < 5) {
						w41 = -307;
					} else {
						w41 = -418;
					}
				}
			} else {
				if (rel_time < 8558) {
					if (prod != 0) {
						if (hops < 5) {
							w41 = -332;
						} else {
							w41 = -466;
						}
					} else {
						if (hops < 2) {
							w41 = 467;
						} else {
							w41 = 441;
						}
					}
				} else {
					if (rel_time < 8599) {
						if (prod != 0) {
							w41 = -616;
						} else {
							w41 = 498;
						}
					} else {
						if (rel_time < 8897) {
							w41 = 118;
						} else {
							w41 = -11;
						}
					}
				}
			}
		}
	}
	int w42;
	if (rel_time < 9275) {
		if (rel_time < 9249) {
			if (rel_time < 9203) {
				if (rel_time < 9117) {
					if (rel_time < 8873) {
						if (rel_time < 8827) {
							w42 = -1;
						} else {
							w42 = -296;
						}
					} else {
						if (prod != 3) {
							w42 = -86;
						} else {
							w42 = 929;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 9160) {
							w42 = 415;
						} else {
							w42 = 498;
						}
					} else {
						if (rel_time < 9160) {
							w42 = -1592;
						} else {
							w42 = -559;
						}
					}
				}
			} else {
				if (prod != 2) {
					w42 = -561;
				} else {
					if (hops < 2) {
						w42 = 516;
					} else {
						if (hops < 3) {
							w42 = 478;
						} else {
							w42 = 506;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w42 = -545;
			} else {
				if (hops < 3) {
					w42 = -584;
				} else {
					w42 = -555;
				}
			}
		}
	} else {
		if (rel_time < 9579) {
			if (prod != 1) {
				if (prod != 3) {
					if (rel_time < 9312) {
						if (hops < 2) {
							w42 = 338;
						} else {
							w42 = 320;
						}
					} else {
						if (rel_time < 9536) {
							w42 = -390;
						} else {
							w42 = -1524;
						}
					}
				} else {
					if (rel_time < 9312) {
						w42 = -797;
					} else {
						if (hops < 3) {
							w42 = 747;
						} else {
							w42 = 450;
						}
					}
				}
			} else {
				if (hops < 2) {
					w42 = 714;
				} else {
					if (hops < 5) {
						w42 = 777;
					} else {
						w42 = 845;
					}
				}
			}
		} else {
			if (rel_time < 9679) {
				if (prod != 0) {
					if (hops < 3) {
						if (hops < 2) {
							w42 = -571;
						} else {
							w42 = -482;
						}
					} else {
						if (hops < 5) {
							w42 = -356;
						} else {
							w42 = -287;
						}
					}
				} else {
					w42 = 1181;
				}
			} else {
				if (rel_time < 9707) {
					if (hops < 5) {
						if (hops < 2) {
							w42 = 404;
						} else {
							w42 = 371;
						}
					} else {
						w42 = 491;
					}
				} else {
					if (rel_time < 9744) {
						if (prod != 0) {
							w42 = -553;
						} else {
							w42 = 1596;
						}
					} else {
						if (prod != 3) {
							w42 = 59;
						} else {
							w42 = -118;
						}
					}
				}
			}
		}
	}
	int w43;
	if (rel_time < 3760) {
		if (prod != 1) {
			if (prod != 3) {
				if (rel_time < 3159) {
					if (rel_time < 3016) {
						if (rel_time < 2929) {
							w43 = -6;
						} else {
							w43 = 198;
						}
					} else {
						if (cons != 3) {
							w43 = -71;
						} else {
							w43 = -463;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 3187) {
							w43 = 207;
						} else {
							w43 = 16;
						}
					} else {
						if (rel_time < 3244) {
							w43 = 255;
						} else {
							w43 = 135;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w43 = -311;
					} else {
						if (rel_time < 3553) {
							w43 = -73;
						} else {
							w43 = -52;
						}
					}
				} else {
					if (hops < 4) {
						w43 = -1004;
					} else {
						if (hops < 5) {
							w43 = -369;
						} else {
							w43 = -155;
						}
					}
				}
			}
		} else {
			if (rel_time < 3462) {
				if (hops < 3) {
					if (hops < 2) {
						w43 = -332;
					} else {
						w43 = -649;
					}
				} else {
					w43 = -1993;
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						if (hops < 2) {
							w43 = -324;
						} else {
							w43 = -399;
						}
					} else {
						w43 = -526;
					}
				} else {
					w43 = -222;
				}
			}
		}
	} else {
		if (rel_time < 3898) {
			if (prod != 2) {
				if (prod != 4) {
					if (hops < 2) {
						if (rel_time < 3761) {
							w43 = 107;
						} else {
							w43 = 246;
						}
					} else {
						if (hops < 4) {
							w43 = 671;
						} else {
							w43 = 421;
						}
					}
				} else {
					if (hops < 2) {
						w43 = -975;
					} else {
						w43 = -1671;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 3807) {
						w43 = -55;
					} else {
						w43 = -59;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w43 = -434;
						} else {
							w43 = -490;
						}
					} else {
						if (rel_time < 3807) {
							w43 = -864;
						} else {
							w43 = -621;
						}
					}
				}
			}
		} else {
			if (rel_time < 4090) {
				if (prod != 0) {
					if (hops < 2) {
						if (prod != 2) {
							w43 = -173;
						} else {
							w43 = 467;
						}
					} else {
						if (prod != 1) {
							w43 = -325;
						} else {
							w43 = -444;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3998) {
							w43 = 613;
						} else {
							w43 = 137;
						}
					} else {
						if (hops < 4) {
							w43 = 185;
						} else {
							w43 = 233;
						}
					}
				}
			} else {
				if (rel_time < 4136) {
					if (prod != 2) {
						if (hops < 2) {
							w43 = -292;
						} else {
							w43 = -425;
						}
					} else {
						if (hops < 2) {
							w43 = 264;
						} else {
							w43 = 354;
						}
					}
				} else {
					if (rel_time < 4138) {
						if (hops < 2) {
							w43 = -291;
						} else {
							w43 = -429;
						}
					} else {
						if (rel_time < 4466) {
							w43 = 92;
						} else {
							w43 = 1;
						}
					}
				}
			}
		}
	}
	int w44;
	if (rel_time < 8730) {
		if (rel_time < 8642) {
			if (rel_time < 8266) {
				if (rel_time < 8087) {
					if (rel_time < 8067) {
						if (rel_time < 8021) {
							w44 = 1;
						} else {
							w44 = -349;
						}
					} else {
						if (hops < 3) {
							w44 = 351;
						} else {
							w44 = 366;
						}
					}
				} else {
					if (prod != 4) {
						if (prod != 2) {
							w44 = -562;
						} else {
							w44 = 515;
						}
					} else {
						if (hops < 3) {
							w44 = 388;
						} else {
							w44 = 404;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 8353) {
						if (prod != 1) {
							w44 = -478;
						} else {
							w44 = 651;
						}
					} else {
						if (prod != 1) {
							w44 = 31;
						} else {
							w44 = -556;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 8397) {
							w44 = 812;
						} else {
							w44 = 502;
						}
					} else {
						if (hops < 5) {
							w44 = 112;
						} else {
							w44 = 508;
						}
					}
				}
			}
		} else {
			if (prod != 3) {
				if (rel_time < 8686) {
					if (hops < 2) {
						w44 = 638;
					} else {
						w44 = 599;
					}
				} else {
					w44 = 683;
				}
			} else {
				if (hops < 2) {
					w44 = -910;
				} else {
					w44 = -954;
				}
			}
		}
	} else {
		if (rel_time < 8897) {
			if (prod != 0) {
				if (rel_time < 8827) {
					if (hops < 2) {
						w44 = 707;
					} else {
						w44 = 672;
					}
				} else {
					if (rel_time < 8873) {
						w44 = 1243;
					} else {
						if (hops < 2) {
							w44 = 767;
						} else {
							w44 = 796;
						}
					}
				}
			} else {
				if (rel_time < 8827) {
					w44 = -583;
				} else {
					if (hops < 2) {
						w44 = -380;
					} else {
						if (hops < 5) {
							w44 = -353;
						} else {
							w44 = -322;
						}
					}
				}
			}
		} else {
			if (rel_time < 8935) {
				if (prod != 1) {
					if (hops < 2) {
						w44 = -548;
					} else {
						w44 = -523;
					}
				} else {
					w44 = 829;
				}
			} else {
				if (rel_time < 8975) {
					if (prod != 2) {
						if (hops < 2) {
							w44 = 503;
						} else {
							w44 = 532;
						}
					} else {
						w44 = -534;
					}
				} else {
					if (rel_time < 9203) {
						if (prod != 3) {
							w44 = -257;
						} else {
							w44 = 976;
						}
					} else {
						if (rel_time < 9249) {
							w44 = 280;
						} else {
							w44 = 0;
						}
					}
				}
			}
		}
	}
	int w45;
	if (rel_time < 4896) {
		if (rel_time < 4851) {
			if (rel_time < 4751) {
				if (rel_time < 4706) {
					if (rel_time < 4570) {
						if (rel_time < 4420) {
							w45 = -6;
						} else {
							w45 = 228;
						}
					} else {
						if (prod != 2) {
							w45 = -500;
						} else {
							w45 = 519;
						}
					}
				} else {
					if (prod != 3) {
						if (hops < 2) {
							w45 = 507;
						} else {
							w45 = 463;
						}
					} else {
						if (hops < 4) {
							w45 = -686;
						} else {
							w45 = -1057;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						if (hops < 2) {
							w45 = 463;
						} else {
							w45 = 422;
						}
					} else {
						if (hops < 5) {
							w45 = 613;
						} else {
							w45 = 697;
						}
					}
				} else {
					w45 = -478;
				}
			}
		} else {
			if (prod != 0) {
				w45 = 1128;
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w45 = -492;
					} else {
						w45 = -458;
					}
				} else {
					if (hops < 5) {
						w45 = -632;
					} else {
						w45 = -535;
					}
				}
			}
		}
	} else {
		if (rel_time < 4901) {
			if (hops < 4) {
				if (hops < 2) {
					w45 = 668;
				} else {
					w45 = 698;
				}
			} else {
				if (hops < 5) {
					w45 = 1001;
				} else {
					w45 = 666;
				}
			}
		} else {
			if (rel_time < 4947) {
				if (prod != 1) {
					if (hops < 4) {
						if (hops < 2) {
							w45 = -459;
						} else {
							w45 = -430;
						}
					} else {
						if (hops < 5) {
							w45 = -608;
						} else {
							w45 = -452;
						}
					}
				} else {
					if (hops < 4) {
						w45 = 691;
					} else {
						if (hops < 5) {
							w45 = 979;
						} else {
							w45 = 682;
						}
					}
				}
			} else {
				if (rel_time < 5036) {
					if (prod != 3) {
						if (rel_time < 4991) {
							w45 = -500;
						} else {
							w45 = -657;
						}
					} else {
						if (rel_time < 4991) {
							w45 = 717;
						} else {
							w45 = 1516;
						}
					}
				} else {
					if (rel_time < 5226) {
						if (prod != 0) {
							w45 = -888;
						} else {
							w45 = 650;
						}
					} else {
						if (rel_time < 5272) {
							w45 = 934;
						} else {
							w45 = -3;
						}
					}
				}
			}
		}
	}
	int w46;
	if (rel_time < 5317) {
		if (rel_time < 5272) {
			if (rel_time < 5226) {
				if (rel_time < 5181) {
					if (rel_time < 4896) {
						if (rel_time < 4851) {
							w46 = -2;
						} else {
							w46 = -284;
						}
					} else {
						if (prod != 4) {
							w46 = 274;
						} else {
							w46 = -410;
						}
					}
				} else {
					if (prod != 1) {
						w46 = 1364;
					} else {
						if (hops < 5) {
							w46 = -945;
						} else {
							w46 = -428;
						}
					}
				}
			} else {
				if (prod != 2) {
					w46 = -1473;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w46 = 828;
						} else {
							w46 = 736;
						}
					} else {
						w46 = 219;
					}
				}
			}
		} else {
			if (prod != 3) {
				w46 = 1194;
			} else {
				if (hops < 5) {
					if (hops < 4) {
						w46 = -1081;
					} else {
						w46 = -1156;
					}
				} else {
					w46 = -776;
				}
			}
		}
	} else {
		if (rel_time < 5323) {
			if (hops < 5) {
				w46 = 872;
			} else {
				w46 = 714;
			}
		} else {
			if (rel_time < 5423) {
				if (prod != 0) {
					if (hops < 5) {
						w46 = 885;
					} else {
						w46 = 766;
					}
				} else {
					if (hops < 2) {
						w46 = -914;
					} else {
						w46 = -855;
					}
				}
			} else {
				if (rel_time < 5602) {
					if (prod != 2) {
						if (prod != 0) {
							w46 = 912;
						} else {
							w46 = -1285;
						}
					} else {
						if (hops < 2) {
							w46 = -742;
						} else {
							w46 = -670;
						}
					}
				} else {
					if (rel_time < 5756) {
						if (prod != 0) {
							w46 = -727;
						} else {
							w46 = 469;
						}
					} else {
						if (rel_time < 6132) {
							w46 = 127;
						} else {
							w46 = -4;
						}
					}
				}
			}
		}
	}
	int w47;
	if (prod != 2) {
		if (rel_time < 6885) {
			if (rel_time < 6564) {
				if (rel_time < 6132) {
					if (rel_time < 6033) {
						if (rel_time < 5711) {
							w47 = 5;
						} else {
							w47 = -270;
						}
					} else {
						if (rel_time < 6077) {
							w47 = 712;
						} else {
							w47 = 873;
						}
					}
				} else {
					if (prod != 1) {
						if (prod != 3) {
							w47 = -25;
						} else {
							w47 = -467;
						}
					} else {
						if (hops < 5) {
							w47 = -682;
						} else {
							w47 = -1080;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (prod != 3) {
						if (rel_time < 6839) {
							w47 = 720;
						} else {
							w47 = 483;
						}
					} else {
						w47 = 1291;
					}
				} else {
					if (rel_time < 6740) {
						w47 = -1019;
					} else {
						if (hops < 4) {
							w47 = -666;
						} else {
							w47 = -696;
						}
					}
				}
			}
		} else {
			if (rel_time < 6983) {
				if (hops < 3) {
					if (hops < 2) {
						w47 = -946;
					} else {
						w47 = -1032;
					}
				} else {
					w47 = -947;
				}
			} else {
				if (rel_time < 7276) {
					if (prod != 0) {
						if (rel_time < 7028) {
							w47 = 111;
						} else {
							w47 = 812;
						}
					} else {
						if (hops < 3) {
							w47 = -623;
						} else {
							w47 = -585;
						}
					}
				} else {
					if (rel_time < 7591) {
						if (prod != 0) {
							w47 = -662;
						} else {
							w47 = 643;
						}
					} else {
						if (rel_time < 7835) {
							w47 = 269;
						} else {
							w47 = -7;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6695) {
			if (rel_time < 6409) {
				if (rel_time < 6132) {
					if (rel_time < 5844) {
						if (rel_time < 5557) {
							w47 = -69;
						} else {
							w47 = 408;
						}
					} else {
						if (rel_time < 6077) {
							w47 = -926;
						} else {
							w47 = -480;
						}
					}
				} else {
					if (hops < 5) {
						w47 = 442;
					} else {
						w47 = 640;
					}
				}
			} else {
				if (hops < 5) {
					w47 = -1019;
				} else {
					w47 = -928;
				}
			}
		} else {
			if (rel_time < 6983) {
				if (hops < 2) {
					w47 = 659;
				} else {
					if (hops < 3) {
						w47 = 606;
					} else {
						w47 = 654;
					}
				}
			} else {
				if (rel_time < 7260) {
					if (hops < 2) {
						w47 = -618;
					} else {
						w47 = -592;
					}
				} else {
					if (rel_time < 7547) {
						if (hops < 2) {
							w47 = 807;
						} else {
							w47 = 750;
						}
					} else {
						if (rel_time < 7835) {
							w47 = -329;
						} else {
							w47 = 23;
						}
					}
				}
			}
		}
	}
	int w48;
	if (prod != 3) {
		if (rel_time < 6898) {
			if (rel_time < 6885) {
				if (rel_time < 6839) {
					if (rel_time < 6651) {
						if (rel_time < 6364) {
							w48 = -2;
						} else {
							w48 = 118;
						}
					} else {
						if (prod != 0) {
							w48 = -588;
						} else {
							w48 = 891;
						}
					}
				} else {
					if (prod != 0) {
						w48 = -1111;
					} else {
						if (hops < 3) {
							w48 = 468;
						} else {
							w48 = 527;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w48 = -668;
					} else {
						w48 = -724;
					}
				} else {
					w48 = -665;
				}
			}
		} else {
			if (rel_time < 7028) {
				if (prod != 1) {
					if (rel_time < 6983) {
						if (hops < 2) {
							w48 = 462;
						} else {
							w48 = 444;
						}
					} else {
						if (hops < 2) {
							w48 = 646;
						} else {
							w48 = 581;
						}
					}
				} else {
					w48 = -673;
				}
			} else {
				if (rel_time < 7215) {
					if (prod != 0) {
						if (prod != 2) {
							w48 = 655;
						} else {
							w48 = -413;
						}
					} else {
						if (hops < 2) {
							w48 = -445;
						} else {
							w48 = -417;
						}
					}
				} else {
					if (rel_time < 7318) {
						if (rel_time < 7260) {
							w48 = -422;
						} else {
							w48 = -379;
						}
					} else {
						if (rel_time < 8897) {
							w48 = 54;
						} else {
							w48 = -21;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4184) {
			if (rel_time < 4138) {
				if (rel_time < 3598) {
					if (hops < 3) {
						if (hops < 2) {
							w48 = -217;
						} else {
							w48 = -41;
						}
					} else {
						if (hops < 4) {
							w48 = -702;
						} else {
							w48 = -221;
						}
					}
				} else {
					if (rel_time < 3898) {
						if (hops < 2) {
							w48 = 93;
						} else {
							w48 = 413;
						}
					} else {
						if (hops < 2) {
							w48 = -204;
						} else {
							w48 = -300;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						w48 = -1600;
					} else {
						w48 = -1409;
					}
				} else {
					w48 = -1150;
				}
			}
		} else {
			if (rel_time < 4466) {
				if (rel_time < 4420) {
					w48 = 1452;
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w48 = 548;
						} else {
							w48 = 599;
						}
					} else {
						w48 = 1027;
					}
				}
			} else {
				if (rel_time < 4751) {
					if (hops < 4) {
						if (hops < 2) {
							w48 = -476;
						} else {
							w48 = -538;
						}
					} else {
						if (rel_time < 4706) {
							w48 = -920;
						} else {
							w48 = -741;
						}
					}
				} else {
					if (rel_time < 5036) {
						if (rel_time < 4991) {
							w48 = 418;
						} else {
							w48 = 978;
						}
					} else {
						if (rel_time < 5317) {
							w48 = -772;
						} else {
							w48 = 3;
						}
					}
				}
			}
		}
	}
	int w49;
	if (rel_time < 9275) {
		if (rel_time < 9249) {
			if (rel_time < 9203) {
				if (rel_time < 9117) {
					if (rel_time < 8730) {
						if (rel_time < 8642) {
							w49 = -1;
						} else {
							w49 = -177;
						}
					} else {
						if (prod != 1) {
							w49 = -29;
						} else {
							w49 = 571;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 9160) {
							w49 = 378;
						} else {
							w49 = 428;
						}
					} else {
						if (rel_time < 9160) {
							w49 = -1028;
						} else {
							w49 = -304;
						}
					}
				}
			} else {
				if (prod != 2) {
					w49 = -474;
				} else {
					if (hops < 2) {
						w49 = 279;
					} else {
						if (hops < 3) {
							w49 = 252;
						} else {
							w49 = 272;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w49 = -379;
			} else {
				if (hops < 3) {
					w49 = -406;
				} else {
					w49 = -385;
				}
			}
		}
	} else {
		if (rel_time < 9579) {
			if (prod != 2) {
				if (prod != 0) {
					if (prod != 4) {
						if (rel_time < 9312) {
							w49 = -558;
						} else {
							w49 = 495;
						}
					} else {
						if (rel_time < 9407) {
							w49 = 295;
						} else {
							w49 = -1058;
						}
					}
				} else {
					if (rel_time < 9407) {
						if (hops < 2) {
							w49 = -298;
						} else {
							w49 = -272;
						}
					} else {
						if (hops < 5) {
							w49 = -352;
						} else {
							w49 = -203;
						}
					}
				}
			} else {
				if (hops < 2) {
					w49 = -441;
				} else {
					if (rel_time < 9493) {
						if (hops < 3) {
							w49 = -359;
						} else {
							w49 = -460;
						}
					} else {
						if (hops < 3) {
							w49 = -382;
						} else {
							w49 = -293;
						}
					}
				}
			}
		} else {
			if (rel_time < 9679) {
				if (prod != 0) {
					if (hops < 3) {
						if (hops < 2) {
							w49 = -389;
						} else {
							w49 = -327;
						}
					} else {
						if (hops < 5) {
							w49 = -239;
						} else {
							w49 = -191;
						}
					}
				} else {
					w49 = 838;
				}
			} else {
				if (rel_time < 9707) {
					if (hops < 5) {
						if (hops < 2) {
							w49 = 294;
						} else {
							w49 = 270;
						}
					} else {
						w49 = 355;
					}
				} else {
					if (rel_time < 9744) {
						if (prod != 0) {
							w49 = -377;
						} else {
							w49 = 1135;
						}
					} else {
						if (prod != 3) {
							w49 = 49;
						} else {
							w49 = -80;
						}
					}
				}
			}
		}
	}
	int w50;
	if (prod != 4) {
		if (rel_time < 8873) {
			if (rel_time < 8686) {
				if (rel_time < 8397) {
					if (rel_time < 8087) {
						if (rel_time < 7708) {
							w50 = -7;
						} else {
							w50 = 135;
						}
					} else {
						if (prod != 1) {
							w50 = -348;
						} else {
							w50 = 444;
						}
					}
				} else {
					if (prod != 1) {
						if (prod != 3) {
							w50 = 417;
						} else {
							w50 = 22;
						}
					} else {
						if (rel_time < 8599) {
							w50 = -276;
						} else {
							w50 = -719;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 8730) {
						if (hops < 2) {
							w50 = -571;
						} else {
							w50 = -611;
						}
					} else {
						if (rel_time < 8827) {
							w50 = -411;
						} else {
							w50 = -255;
						}
					}
				} else {
					w50 = 689;
				}
			}
		} else {
			if (rel_time < 9117) {
				if (prod != 2) {
					if (rel_time < 8975) {
						if (hops < 2) {
							w50 = 359;
						} else {
							w50 = 380;
						}
					} else {
						if (rel_time < 9019) {
							w50 = 695;
						} else {
							w50 = 552;
						}
					}
				} else {
					if (hops < 2) {
						w50 = -374;
					} else {
						if (hops < 4) {
							w50 = -350;
						} else {
							w50 = -372;
						}
					}
				}
			} else {
				if (rel_time < 9407) {
					if (prod != 2) {
						if (prod != 0) {
							w50 = -319;
						} else {
							w50 = 0;
						}
					} else {
						if (rel_time < 9203) {
							w50 = 300;
						} else {
							w50 = 188;
						}
					}
				} else {
					if (rel_time < 9707) {
						if (prod != 2) {
							w50 = 263;
						} else {
							w50 = -264;
						}
					} else {
						if (rel_time < 9744) {
							w50 = -242;
						} else {
							w50 = -12;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5988) {
			if (rel_time < 5702) {
				if (rel_time < 5423) {
					if (rel_time < 5136) {
						if (rel_time < 4284) {
							w50 = 174;
						} else {
							w50 = -142;
						}
					} else {
						if (rel_time < 5317) {
							w50 = 840;
						} else {
							w50 = 608;
						}
					}
				} else {
					if (rel_time < 5602) {
						w50 = -977;
					} else {
						if (hops < 2) {
							w50 = -420;
						} else {
							w50 = -361;
						}
					}
				}
			} else {
				if (rel_time < 5889) {
					w50 = 805;
				} else {
					w50 = 717;
				}
			}
		} else {
			if (rel_time < 6275) {
				if (rel_time < 6175) {
					if (hops < 2) {
						w50 = -736;
					} else {
						w50 = -668;
					}
				} else {
					if (hops < 5) {
						w50 = -798;
					} else {
						w50 = -694;
					}
				}
			} else {
				if (rel_time < 6564) {
					if (rel_time < 6454) {
						w50 = 772;
					} else {
						if (hops < 5) {
							w50 = 417;
						} else {
							w50 = 617;
						}
					}
				} else {
					if (rel_time < 6839) {
						if (rel_time < 6740) {
							w50 = -537;
						} else {
							w50 = -295;
						}
					} else {
						if (rel_time < 7126) {
							w50 = 329;
						} else {
							w50 = -21;
						}
					}
				}
			}
		}
	}
	int w51;
	if (rel_time < 2702) {
		if (rel_time < 2587) {
			if (rel_time < 2444) {
				if (rel_time < 2301) {
					if (rel_time < 2159) {
						if (rel_time < 2016) {
							w51 = -1;
						} else {
							w51 = 100;
						}
					} else {
						if (cons != 3) {
							w51 = -71;
						} else {
							w51 = -349;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 2386) {
							w51 = 387;
						} else {
							w51 = 153;
						}
					} else {
						if (hops < 4) {
							w51 = -223;
						} else {
							w51 = -24;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 2529) {
						if (hops < 2) {
							w51 = -459;
						} else {
							w51 = -391;
						}
					} else {
						if (hops < 4) {
							w51 = 0;
						} else {
							w51 = -144;
						}
					}
				} else {
					if (hops < 2) {
						w51 = 63;
					} else {
						if (hops < 4) {
							w51 = 373;
						} else {
							w51 = 225;
						}
					}
				}
			}
		} else {
			if (cons != 2) {
				if (rel_time < 2672) {
					if (hops < 4) {
						if (rel_time < 2616) {
							w51 = 382;
						} else {
							w51 = 332;
						}
					} else {
						if (hops < 5) {
							w51 = 749;
						} else {
							w51 = 462;
						}
					}
				} else {
					if (hops < 2) {
						w51 = 73;
					} else {
						if (hops < 4) {
							w51 = 24;
						} else {
							w51 = 79;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w51 = -189;
					} else {
						if (hops < 3) {
							w51 = -273;
						} else {
							w51 = -250;
						}
					}
				} else {
					if (hops < 5) {
						w51 = 113;
					} else {
						w51 = 38;
					}
				}
			}
		}
	} else {
		if (rel_time < 2873) {
			if (cons != 3) {
				if (cons != 1) {
					if (rel_time < 2845) {
						if (rel_time < 2730) {
							w51 = -20;
						} else {
							w51 = 39;
						}
					} else {
						if (hops < 4) {
							w51 = -256;
						} else {
							w51 = -199;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w51 = -197;
						} else {
							w51 = -293;
						}
					} else {
						if (hops < 5) {
							w51 = -547;
						} else {
							w51 = -315;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w51 = -288;
					} else {
						w51 = -419;
					}
				} else {
					if (hops < 5) {
						w51 = -674;
					} else {
						w51 = -435;
					}
				}
			}
		} else {
			if (rel_time < 2901) {
				if (hops < 3) {
					if (hops < 2) {
						w51 = 504;
					} else {
						w51 = 653;
					}
				} else {
					if (hops < 4) {
						w51 = 414;
					} else {
						w51 = 576;
					}
				}
			} else {
				if (rel_time < 2929) {
					if (hops < 3) {
						if (hops < 2) {
							w51 = -573;
						} else {
							w51 = -415;
						}
					} else {
						if (hops < 4) {
							w51 = -672;
						} else {
							w51 = -516;
						}
					}
				} else {
					if (rel_time < 2958) {
						if (hops < 2) {
							w51 = 356;
						} else {
							w51 = 687;
						}
					} else {
						if (rel_time < 3101) {
							w51 = -145;
						} else {
							w51 = 2;
						}
					}
				}
			}
		}
	}
	int w52;
	if (rel_time < 569) {
		if (rel_time < 503) {
			if (rel_time < 438) {
				if (cons != 1) {
					if (cons != 3) {
						if (hops < 4) {
							w52 = 20;
						} else {
							w52 = -12;
						}
					} else {
						if (hops < 4) {
							w52 = 55;
						} else {
							w52 = 126;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w52 = 92;
						} else {
							w52 = 50;
						}
					} else {
						if (hops < 4) {
							w52 = 124;
						} else {
							w52 = 100;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w52 = -53;
					} else {
						w52 = -39;
					}
				} else {
					if (hops < 5) {
						w52 = -90;
					} else {
						w52 = -63;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w52 = 118;
				} else {
					w52 = 148;
				}
			} else {
				if (hops < 5) {
					w52 = 89;
				} else {
					w52 = 159;
				}
			}
		}
	} else {
		if (rel_time < 635) {
			if (hops < 2) {
				w52 = -223;
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w52 = 22;
					} else {
						w52 = -59;
					}
				} else {
					if (hops < 5) {
						w52 = -161;
					} else {
						w52 = -142;
					}
				}
			}
		} else {
			if (rel_time < 6885) {
				if (rel_time < 6651) {
					if (rel_time < 6409) {
						if (rel_time < 5889) {
							w52 = -3;
						} else {
							w52 = 69;
						}
					} else {
						if (prod != 1) {
							w52 = -321;
						} else {
							w52 = 628;
						}
					}
				} else {
					if (prod != 3) {
						if (prod != 0) {
							w52 = -363;
						} else {
							w52 = 375;
						}
					} else {
						if (hops < 5) {
							w52 = 901;
						} else {
							w52 = 975;
						}
					}
				}
			} else {
				if (rel_time < 6898) {
					if (hops < 4) {
						if (hops < 2) {
							w52 = -466;
						} else {
							w52 = -492;
						}
					} else {
						w52 = -453;
					}
				} else {
					if (rel_time < 6940) {
						if (prod != 1) {
							w52 = 318;
						} else {
							w52 = -471;
						}
					} else {
						if (rel_time < 6983) {
							w52 = -488;
						} else {
							w52 = -1;
						}
					}
				}
			}
		}
	}
	int w53;
	if (prod != 4) {
		if (rel_time < 5711) {
			if (rel_time < 5557) {
				if (rel_time < 5272) {
					if (rel_time < 5226) {
						if (rel_time < 5181) {
							w53 = 3;
						} else {
							w53 = -500;
						}
					} else {
						if (prod != 2) {
							w53 = -802;
						} else {
							w53 = 571;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 5512) {
							w53 = -584;
						} else {
							w53 = -87;
						}
					} else {
						if (hops < 5) {
							w53 = 759;
						} else {
							w53 = 625;
						}
					}
				}
			} else {
				if (rel_time < 5702) {
					if (rel_time < 5602) {
						if (hops < 2) {
							w53 = 607;
						} else {
							w53 = 661;
						}
					} else {
						w53 = 474;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w53 = 301;
						} else {
							w53 = 284;
						}
					} else {
						if (hops < 4) {
							w53 = 327;
						} else {
							w53 = 291;
						}
					}
				}
			}
		} else {
			if (rel_time < 5988) {
				if (prod != 2) {
					if (prod != 3) {
						if (prod != 0) {
							w53 = -581;
						} else {
							w53 = -296;
						}
					} else {
						w53 = -805;
					}
				} else {
					if (hops < 2) {
						w53 = 275;
					} else {
						if (hops < 4) {
							w53 = 300;
						} else {
							w53 = 284;
						}
					}
				}
			} else {
				if (rel_time < 6275) {
					if (prod != 2) {
						if (prod != 0) {
							w53 = 646;
						} else {
							w53 = -12;
						}
					} else {
						if (rel_time < 6089) {
							w53 = -351;
						} else {
							w53 = -589;
						}
					}
				} else {
					if (rel_time < 6564) {
						if (prod != 2) {
							w53 = -339;
						} else {
							w53 = 272;
						}
					} else {
						if (rel_time < 6885) {
							w53 = 145;
						} else {
							w53 = -10;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3998) {
			if (rel_time < 3715) {
				if (hops < 3) {
					if (hops < 2) {
						w53 = -147;
					} else {
						if (rel_time < 3598) {
							w53 = -121;
						} else {
							w53 = -188;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w53 = -12;
						} else {
							w53 = 85;
						}
					} else {
						w53 = 302;
					}
				}
			} else {
				if (rel_time < 3898) {
					if (hops < 2) {
						w53 = -739;
					} else {
						w53 = -1228;
					}
				} else {
					if (hops < 2) {
						w53 = -101;
					} else {
						if (hops < 4) {
							w53 = -245;
						} else {
							w53 = -380;
						}
					}
				}
			}
		} else {
			if (rel_time < 4284) {
				if (hops < 4) {
					if (hops < 3) {
						w53 = 643;
					} else {
						w53 = 697;
					}
				} else {
					w53 = 840;
				}
			} else {
				if (rel_time < 4570) {
					if (rel_time < 4466) {
						w53 = -1244;
					} else {
						if (hops < 4) {
							w53 = -275;
						} else {
							w53 = -745;
						}
					}
				} else {
					if (rel_time < 4851) {
						if (hops < 4) {
							w53 = 361;
						} else {
							w53 = 490;
						}
					} else {
						if (rel_time < 5136) {
							w53 = -245;
						} else {
							w53 = 23;
						}
					}
				}
			}
		}
	}
	int w54;
	if (prod != 2) {
		if (rel_time < 7276) {
			if (rel_time < 7171) {
				if (rel_time < 6885) {
					if (rel_time < 6606) {
						if (rel_time < 6320) {
							w54 = 6;
						} else {
							w54 = -84;
						}
					} else {
						if (prod != 4) {
							w54 = 412;
						} else {
							w54 = -154;
						}
					}
				} else {
					if (prod != 3) {
						if (prod != 4) {
							w54 = -179;
						} else {
							w54 = 223;
						}
					} else {
						if (rel_time < 6983) {
							w54 = -528;
						} else {
							w54 = -1000;
						}
					}
				}
			} else {
				if (rel_time < 7260) {
					if (rel_time < 7215) {
						if (hops < 2) {
							w54 = 546;
						} else {
							w54 = 585;
						}
					} else {
						w54 = 779;
					}
				} else {
					if (hops < 2) {
						w54 = 392;
					} else {
						if (hops < 4) {
							w54 = 426;
						} else {
							w54 = 396;
						}
					}
				}
			}
		} else {
			if (rel_time < 7591) {
				if (prod != 0) {
					if (prod != 1) {
						if (rel_time < 7547) {
							w54 = -380;
						} else {
							w54 = -158;
						}
					} else {
						if (hops < 2) {
							w54 = -709;
						} else {
							w54 = -763;
						}
					}
				} else {
					if (rel_time < 7414) {
						if (hops < 2) {
							w54 = 357;
						} else {
							w54 = 293;
						}
					} else {
						w54 = 745;
					}
				}
			} else {
				if (rel_time < 7835) {
					if (prod != 0) {
						if (prod != 1) {
							w54 = 333;
						} else {
							w54 = 474;
						}
					} else {
						if (rel_time < 7708) {
							w54 = -403;
						} else {
							w54 = -655;
						}
					}
				} else {
					if (rel_time < 8126) {
						if (prod != 0) {
							w54 = -332;
						} else {
							w54 = 301;
						}
					} else {
						if (rel_time < 8443) {
							w54 = 141;
						} else {
							w54 = -9;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6695) {
			if (rel_time < 6409) {
				if (rel_time < 4420) {
					if (rel_time < 4136) {
						if (rel_time < 3852) {
							w54 = -92;
						} else {
							w54 = 255;
						}
					} else {
						if (rel_time < 4375) {
							w54 = -710;
						} else {
							w54 = -521;
						}
					}
				} else {
					if (rel_time < 4706) {
						if (hops < 4) {
							w54 = 348;
						} else {
							w54 = 544;
						}
					} else {
						if (rel_time < 4991) {
							w54 = -388;
						} else {
							w54 = 43;
						}
					}
				}
			} else {
				if (rel_time < 6651) {
					if (hops < 2) {
						w54 = -723;
					} else {
						w54 = -684;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w54 = -449;
						} else {
							w54 = -487;
						}
					} else {
						w54 = -409;
					}
				}
			}
		} else {
			if (rel_time < 7547) {
				if (rel_time < 7260) {
					if (rel_time < 6983) {
						if (rel_time < 6940) {
							w54 = 225;
						} else {
							w54 = 461;
						}
					} else {
						if (hops < 2) {
							w54 = -302;
						} else {
							w54 = -284;
						}
					}
				} else {
					if (hops < 2) {
						w54 = 553;
					} else {
						if (hops < 3) {
							w54 = 484;
						} else {
							w54 = 535;
						}
					}
				}
			} else {
				if (rel_time < 7835) {
					if (hops < 4) {
						if (hops < 2) {
							w54 = -290;
						} else {
							w54 = -272;
						}
					} else {
						if (hops < 5) {
							w54 = -311;
						} else {
							w54 = -274;
						}
					}
				} else {
					if (rel_time < 8126) {
						if (rel_time < 8067) {
							w54 = 701;
						} else {
							w54 = 199;
						}
					} else {
						if (rel_time < 8397) {
							w54 = -309;
						} else {
							w54 = 45;
						}
					}
				}
			}
		}
	}
	int w55;
	if (prod != 4) {
		if (rel_time < 10296) {
			if (rel_time < 10085) {
				if (rel_time < 10055) {
					if (rel_time < 10009) {
						if (rel_time < 9783) {
							w55 = -1;
						} else {
							w55 = -165;
						}
					} else {
						if (prod != 1) {
							w55 = -228;
						} else {
							w55 = 237;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w55 = -231;
						} else {
							w55 = -201;
						}
					} else {
						if (hops < 5) {
							w55 = -250;
						} else {
							w55 = -309;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (prod != 3) {
						if (rel_time < 10257) {
							w55 = 93;
						} else {
							w55 = 176;
						}
					} else {
						if (hops < 5) {
							w55 = 313;
						} else {
							w55 = 458;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w55 = -210;
						} else {
							w55 = -241;
						}
					} else {
						if (hops < 4) {
							w55 = -275;
						} else {
							w55 = -352;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (rel_time < 10335) {
					if (hops < 3) {
						if (hops < 2) {
							w55 = -226;
						} else {
							w55 = -260;
						}
					} else {
						if (hops < 4) {
							w55 = -165;
						} else {
							w55 = -244;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w55 = -135;
						} else {
							w55 = -57;
						}
					} else {
						w55 = -196;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 10335) {
						w55 = 140;
					} else {
						w55 = 89;
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w55 = 61;
						} else {
							w55 = 14;
						}
					} else {
						w55 = 143;
					}
				}
			}
		}
	} else {
		if (rel_time < 5988) {
			if (rel_time < 5702) {
				if (rel_time < 5423) {
					if (rel_time < 5136) {
						if (rel_time < 3998) {
							w55 = -115;
						} else {
							w55 = 67;
						}
					} else {
						if (rel_time < 5317) {
							w55 = 583;
						} else {
							w55 = 417;
						}
					}
				} else {
					if (rel_time < 5602) {
						if (hops < 2) {
							w55 = -728;
						} else {
							w55 = -649;
						}
					} else {
						if (hops < 2) {
							w55 = -302;
						} else {
							w55 = -261;
						}
					}
				}
			} else {
				if (rel_time < 5889) {
					w55 = 556;
				} else {
					if (hops < 5) {
						w55 = 476;
					} else {
						w55 = 439;
					}
				}
			}
		} else {
			if (rel_time < 6275) {
				if (rel_time < 6175) {
					if (hops < 2) {
						w55 = -545;
					} else {
						w55 = -497;
					}
				} else {
					if (hops < 2) {
						w55 = -626;
					} else {
						if (hops < 5) {
							w55 = -573;
						} else {
							w55 = -517;
						}
					}
				}
			} else {
				if (rel_time < 6564) {
					if (rel_time < 6454) {
						w55 = 655;
					} else {
						if (hops < 5) {
							w55 = 406;
						} else {
							w55 = 547;
						}
					}
				} else {
					if (rel_time < 9679) {
						if (rel_time < 8827) {
							w55 = 17;
						} else {
							w55 = -185;
						}
					} else {
						if (rel_time < 9967) {
							w55 = 391;
						} else {
							w55 = -42;
						}
					}
				}
			}
		}
	}
	int w56;
	if (rel_time < 9275) {
		if (rel_time < 9249) {
			if (rel_time < 9203) {
				if (rel_time < 8897) {
					if (rel_time < 8730) {
						if (rel_time < 8642) {
							w56 = -1;
						} else {
							w56 = -96;
						}
					} else {
						if (prod != 0) {
							w56 = 358;
						} else {
							w56 = -184;
						}
					}
				} else {
					if (prod != 4) {
						if (prod != 3) {
							w56 = -54;
						} else {
							w56 = 334;
						}
					} else {
						if (hops < 2) {
							w56 = -470;
						} else {
							w56 = -427;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (hops < 2) {
						w56 = -209;
					} else {
						if (hops < 3) {
							w56 = -277;
						} else {
							w56 = -181;
						}
					}
				} else {
					if (hops < 2) {
						w56 = 128;
					} else {
						if (hops < 3) {
							w56 = 109;
						} else {
							w56 = 123;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w56 = -164;
			} else {
				if (hops < 4) {
					w56 = -180;
				} else {
					if (hops < 5) {
						w56 = -155;
					} else {
						w56 = -181;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 9450) {
				if (rel_time < 9312) {
					if (prod != 3) {
						if (hops < 4) {
							w56 = 205;
						} else {
							w56 = 227;
						}
					} else {
						w56 = -292;
					}
				} else {
					if (rel_time < 9407) {
						w56 = 543;
					} else {
						if (hops < 2) {
							w56 = 290;
						} else {
							w56 = 340;
						}
					}
				}
			} else {
				if (rel_time < 10120) {
					if (rel_time < 9869) {
						if (prod != 2) {
							w56 = -50;
						} else {
							w56 = 67;
						}
					} else {
						if (prod != 2) {
							w56 = 277;
						} else {
							w56 = -158;
						}
					}
				} else {
					if (rel_time < 10335) {
						if (prod != 3) {
							w56 = -130;
						} else {
							w56 = 237;
						}
					} else {
						if (prod != 3) {
							w56 = 72;
						} else {
							w56 = -92;
						}
					}
				}
			}
		} else {
			if (rel_time < 9450) {
				if (rel_time < 9407) {
					if (hops < 2) {
						w56 = -203;
					} else {
						w56 = -185;
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w56 = -359;
						} else {
							w56 = -307;
						}
					} else {
						w56 = -215;
					}
				}
			} else {
				if (rel_time < 9744) {
					if (rel_time < 9679) {
						w56 = 514;
					} else {
						if (rel_time < 9707) {
							w56 = 124;
						} else {
							w56 = 876;
						}
					}
				} else {
					if (rel_time < 10009) {
						if (hops < 4) {
							w56 = -244;
						} else {
							w56 = -369;
						}
					} else {
						if (hops < 2) {
							w56 = 137;
						} else {
							w56 = 71;
						}
					}
				}
			}
		}
	}
	int w57;
	if (cons != 4) {
		if (rel_time < 8465) {
			if (rel_time < 8443) {
				if (rel_time < 8397) {
					if (rel_time < 7879) {
						if (rel_time < 7708) {
							w57 = -3;
						} else {
							w57 = 78;
						}
					} else {
						if (rel_time < 8067) {
							w57 = -133;
						} else {
							w57 = -5;
						}
					}
				} else {
					if (prod != 3) {
						w57 = -400;
					} else {
						if (hops < 4) {
							w57 = 310;
						} else {
							w57 = 106;
						}
					}
				}
			} else {
				if (hops < 4) {
					w57 = -316;
				} else {
					if (hops < 5) {
						w57 = -239;
					} else {
						w57 = -317;
					}
				}
			}
		} else {
			if (prod != 3) {
				if (rel_time < 8827) {
					if (prod != 1) {
						if (prod != 0) {
							w57 = 412;
						} else {
							w57 = 145;
						}
					} else {
						if (rel_time < 8599) {
							w57 = -187;
						} else {
							w57 = -497;
						}
					}
				} else {
					if (rel_time < 9019) {
						if (prod != 1) {
							w57 = -215;
						} else {
							w57 = 180;
						}
					} else {
						if (rel_time < 10055) {
							w57 = 31;
						} else {
							w57 = -27;
						}
					}
				}
			} else {
				if (rel_time < 8730) {
					if (rel_time < 8686) {
						w57 = -576;
					} else {
						if (hops < 2) {
							w57 = -366;
						} else {
							w57 = -393;
						}
					}
				} else {
					if (rel_time < 9019) {
						if (rel_time < 8975) {
							w57 = 171;
						} else {
							w57 = 392;
						}
					} else {
						if (rel_time < 9579) {
							w57 = 57;
						} else {
							w57 = -62;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2845) {
			if (rel_time < 2273) {
				if (rel_time < 1702) {
					if (rel_time < 1559) {
						if (rel_time < 1273) {
							w57 = 27;
						} else {
							w57 = -19;
						}
					} else {
						if (hops < 4) {
							w57 = 61;
						} else {
							w57 = 258;
						}
					}
				} else {
					if (rel_time < 1844) {
						if (hops < 3) {
							w57 = -86;
						} else {
							w57 = 9;
						}
					} else {
						if (hops < 2) {
							w57 = -18;
						} else {
							w57 = 28;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 2702) {
						if (hops < 2) {
							w57 = 37;
						} else {
							w57 = 28;
						}
					} else {
						if (hops < 2) {
							w57 = 26;
						} else {
							w57 = 18;
						}
					}
				} else {
					if (rel_time < 2416) {
						if (hops < 5) {
							w57 = 108;
						} else {
							w57 = 70;
						}
					} else {
						if (hops < 5) {
							w57 = 31;
						} else {
							w57 = 80;
						}
					}
				}
			}
		} else {
			if (rel_time < 2987) {
				if (hops < 3) {
					if (hops < 2) {
						w57 = -88;
					} else {
						w57 = 0;
					}
				} else {
					if (hops < 4) {
						w57 = -133;
					} else {
						if (hops < 5) {
							w57 = -69;
						} else {
							w57 = -50;
						}
					}
				}
			} else {
				if (rel_time < 3130) {
					if (hops < 3) {
						if (hops < 2) {
							w57 = 46;
						} else {
							w57 = 4;
						}
					} else {
						if (hops < 4) {
							w57 = 100;
						} else {
							w57 = 83;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3273) {
							w57 = -55;
						} else {
							w57 = 17;
						}
					} else {
						if (rel_time < 3273) {
							w57 = 38;
						} else {
							w57 = 9;
						}
					}
				}
			}
		}
	}
	int w58;
	if (rel_time < 9744) {
		if (rel_time < 9707) {
			if (prod != 2) {
				if (rel_time < 9275) {
					if (rel_time < 7414) {
						if (rel_time < 7171) {
							w58 = 2;
						} else {
							w58 = 166;
						}
					} else {
						if (rel_time < 7547) {
							w58 = -352;
						} else {
							w58 = -9;
						}
					}
				} else {
					if (prod != 1) {
						if (prod != 3) {
							w58 = -23;
						} else {
							w58 = 214;
						}
					} else {
						if (rel_time < 9450) {
							w58 = 214;
						} else {
							w58 = 328;
						}
					}
				}
			} else {
				if (rel_time < 9249) {
					if (rel_time < 7260) {
						if (rel_time < 5272) {
							w58 = 14;
						} else {
							w58 = -102;
						}
					} else {
						if (rel_time < 7547) {
							w58 = 371;
						} else {
							w58 = -11;
						}
					}
				} else {
					if (hops < 2) {
						w58 = -270;
					} else {
						if (hops < 5) {
							w58 = -210;
						} else {
							w58 = -110;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					w58 = -229;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w58 = -55;
						} else {
							w58 = -98;
						}
					} else {
						w58 = -251;
					}
				}
			} else {
				w58 = 608;
			}
		}
	} else {
		if (rel_time < 9783) {
			if (prod != 1) {
				if (hops < 3) {
					if (hops < 2) {
						w58 = 373;
					} else {
						w58 = 395;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w58 = 165;
						} else {
							w58 = 128;
						}
					} else {
						w58 = 20;
					}
				}
			} else {
				if (hops < 3) {
					w58 = -600;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w58 = -429;
						} else {
							w58 = -496;
						}
					} else {
						w58 = -601;
					}
				}
			}
		} else {
			if (prod != 4) {
				if (rel_time < 9967) {
					if (prod != 2) {
						if (hops < 2) {
							w58 = -280;
						} else {
							w58 = -210;
						}
					} else {
						if (hops < 3) {
							w58 = 444;
						} else {
							w58 = 149;
						}
					}
				} else {
					if (rel_time < 10257) {
						if (prod != 1) {
							w58 = -17;
						} else {
							w58 = 250;
						}
					} else {
						if (prod != 1) {
							w58 = 20;
						} else {
							w58 = -114;
						}
					}
				}
			} else {
				if (rel_time < 9967) {
					if (rel_time < 9869) {
						if (hops < 3) {
							w58 = 290;
						} else {
							w58 = 447;
						}
					} else {
						if (hops < 3) {
							w58 = 77;
						} else {
							w58 = 227;
						}
					}
				} else {
					if (rel_time < 10257) {
						if (rel_time < 10160) {
							w58 = -89;
						} else {
							w58 = -145;
						}
					} else {
						if (rel_time < 10416) {
							w58 = 343;
						} else {
							w58 = 52;
						}
					}
				}
			}
		}
	}
	int w59;
	if (rel_time < 569) {
		if (rel_time < 503) {
			if (rel_time < 438) {
				if (cons != 1) {
					if (cons != 3) {
						if (rel_time < 372) {
							w59 = 1;
						} else {
							w59 = 24;
						}
					} else {
						if (hops < 2) {
							w59 = 77;
						} else {
							w59 = 32;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w59 = 63;
						} else {
							w59 = 33;
						}
					} else {
						if (hops < 4) {
							w59 = 86;
						} else {
							w59 = 68;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w59 = -39;
					} else {
						w59 = -29;
					}
				} else {
					if (hops < 5) {
						w59 = -65;
					} else {
						w59 = -45;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w59 = 81;
				} else {
					w59 = 102;
				}
			} else {
				if (hops < 5) {
					w59 = 61;
				} else {
					w59 = 110;
				}
			}
		}
	} else {
		if (rel_time < 635) {
			if (hops < 2) {
				w59 = -157;
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w59 = 14;
					} else {
						w59 = -43;
					}
				} else {
					if (hops < 5) {
						w59 = -114;
					} else {
						w59 = -101;
					}
				}
			}
		} else {
			if (rel_time < 4329) {
				if (rel_time < 4184) {
					if (prod != 3) {
						if (rel_time < 4136) {
							w59 = -1;
						} else {
							w59 = 455;
						}
					} else {
						if (rel_time < 4138) {
							w59 = -35;
						} else {
							w59 = -1046;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 4284) {
							w59 = 485;
						} else {
							w59 = 581;
						}
					} else {
						if (hops < 5) {
							w59 = -648;
						} else {
							w59 = -944;
						}
					}
				}
			} else {
				if (rel_time < 4375) {
					if (prod != 1) {
						if (hops < 2) {
							w59 = -519;
						} else {
							w59 = -481;
						}
					} else {
						if (hops < 4) {
							w59 = 579;
						} else {
							w59 = 718;
						}
					}
				} else {
					if (rel_time < 4420) {
						if (prod != 2) {
							w59 = 1019;
						} else {
							w59 = -367;
						}
					} else {
						if (rel_time < 4466) {
							w59 = 366;
						} else {
							w59 = 0;
						}
					}
				}
			}
		}
	}
	int w60;
	if (hops < 2) {
		if (rel_time < 9744) {
			if (rel_time < 9707) {
				if (cons != 0) {
					if (rel_time < 868) {
						if (rel_time < 822) {
							w60 = 12;
						} else {
							w60 = 184;
						}
					} else {
						if (rel_time < 1009) {
							w60 = -165;
						} else {
							w60 = -5;
						}
					}
				} else {
					if (rel_time < 3016) {
						if (rel_time < 2444) {
							w60 = -17;
						} else {
							w60 = -116;
						}
					} else {
						if (rel_time < 3159) {
							w60 = 35;
						} else {
							w60 = 58;
						}
					}
				}
			} else {
				w60 = -158;
			}
		} else {
			if (rel_time < 9783) {
				if (prod != 1) {
					w60 = 261;
				} else {
					w60 = -415;
				}
			} else {
				if (prod != 1) {
					if (rel_time < 10085) {
						if (prod != 4) {
							w60 = -138;
						} else {
							w60 = 119;
						}
					} else {
						if (rel_time < 10120) {
							w60 = 168;
						} else {
							w60 = 33;
						}
					}
				} else {
					if (rel_time < 10009) {
						w60 = 1810;
					} else {
						if (rel_time < 10055) {
							w60 = 4;
						} else {
							w60 = -71;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6740) {
			if (rel_time < 6695) {
				if (prod != 2) {
					if (rel_time < 6606) {
						if (rel_time < 6320) {
							w60 = 8;
						} else {
							w60 = -102;
						}
					} else {
						if (rel_time < 6651) {
							w60 = 700;
						} else {
							w60 = 474;
						}
					}
				} else {
					if (rel_time < 6409) {
						if (rel_time < 6132) {
							w60 = -21;
						} else {
							w60 = 209;
						}
					} else {
						if (rel_time < 6651) {
							w60 = -446;
						} else {
							w60 = -281;
						}
					}
				}
			} else {
				if (prod != 3) {
					w60 = -215;
				} else {
					if (hops < 3) {
						w60 = 503;
					} else {
						if (hops < 5) {
							w60 = 459;
						} else {
							w60 = 520;
						}
					}
				}
			}
		} else {
			if (rel_time < 7126) {
				if (prod != 3) {
					if (prod != 1) {
						if (rel_time < 7028) {
							w60 = 115;
						} else {
							w60 = -95;
						}
					} else {
						if (rel_time < 6885) {
							w60 = -867;
						} else {
							w60 = -278;
						}
					}
				} else {
					if (rel_time < 6983) {
						if (hops < 3) {
							w60 = -411;
						} else {
							w60 = -349;
						}
					} else {
						w60 = -707;
					}
				}
			} else {
				if (rel_time < 7215) {
					if (prod != 1) {
						if (rel_time < 7171) {
							w60 = -231;
						} else {
							w60 = -154;
						}
					} else {
						if (rel_time < 7171) {
							w60 = 642;
						} else {
							w60 = 362;
						}
					}
				} else {
					if (rel_time < 7260) {
						if (prod != 2) {
							w60 = 514;
						} else {
							w60 = -167;
						}
					} else {
						if (rel_time < 7276) {
							w60 = 245;
						} else {
							w60 = -5;
						}
					}
				}
			}
		}
	}
	int w61;
	if (rel_time < 3101) {
		if (rel_time < 3073) {
			if (rel_time < 3044) {
				if (rel_time < 3016) {
					if (rel_time < 2929) {
						if (rel_time < 2901) {
							w61 = 0;
						} else {
							w61 = -377;
						}
					} else {
						if (rel_time < 2958) {
							w61 = 402;
						} else {
							w61 = -18;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w61 = -269;
						} else {
							w61 = -481;
						}
					} else {
						if (hops < 5) {
							w61 = -173;
						} else {
							w61 = -152;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w61 = 12;
					} else {
						w61 = 67;
					}
				} else {
					w61 = 263;
				}
			}
		} else {
			if (hops < 2) {
				w61 = -234;
			} else {
				if (hops < 3) {
					w61 = -372;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w61 = -247;
						} else {
							w61 = -232;
						}
					} else {
						w61 = -291;
					}
				}
			}
		}
	} else {
		if (cons != 3) {
			if (cons != 2) {
				if (rel_time < 3187) {
					if (rel_time < 3159) {
						if (rel_time < 3130) {
							w61 = 34;
						} else {
							w61 = 8;
						}
					} else {
						if (hops < 3) {
							w61 = 182;
						} else {
							w61 = 88;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 3598) {
							w61 = -38;
						} else {
							w61 = 2;
						}
					} else {
						if (hops < 4) {
							w61 = -206;
						} else {
							w61 = -275;
						}
					}
				}
			} else {
				if (rel_time < 3215) {
					if (hops < 3) {
						if (hops < 2) {
							w61 = -91;
						} else {
							w61 = -14;
						}
					} else {
						if (hops < 5) {
							w61 = 100;
						} else {
							w61 = 65;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w61 = 158;
						} else {
							w61 = 66;
						}
					} else {
						if (hops < 5) {
							w61 = 247;
						} else {
							w61 = 377;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3244) {
					if (hops < 2) {
						w61 = 172;
					} else {
						w61 = 256;
					}
				} else {
					if (hops < 2) {
						w61 = 104;
					} else {
						w61 = 170;
					}
				}
			} else {
				if (rel_time < 3244) {
					if (hops < 4) {
						w61 = 193;
					} else {
						if (hops < 5) {
							w61 = 65;
						} else {
							w61 = 56;
						}
					}
				} else {
					if (hops < 4) {
						w61 = -47;
					} else {
						if (hops < 5) {
							w61 = 105;
						} else {
							w61 = 160;
						}
					}
				}
			}
		}
	}
	int w62;
	if (rel_time < 2301) {
		if (rel_time < 2159) {
			if (rel_time < 2016) {
				if (rel_time < 1873) {
					if (rel_time < 1730) {
						if (rel_time < 1644) {
							w62 = 4;
						} else {
							w62 = -70;
						}
					} else {
						if (rel_time < 1758) {
							w62 = 210;
						} else {
							w62 = 33;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 1958) {
							w62 = -211;
						} else {
							w62 = -61;
						}
					} else {
						if (hops < 2) {
							w62 = 74;
						} else {
							w62 = 12;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 2101) {
						if (hops < 2) {
							w62 = 188;
						} else {
							w62 = 136;
						}
					} else {
						if (rel_time < 2130) {
							w62 = 15;
						} else {
							w62 = 55;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w62 = -82;
						} else {
							w62 = -52;
						}
					} else {
						if (hops < 5) {
							w62 = 13;
						} else {
							w62 = 0;
						}
					}
				}
			}
		} else {
			if (cons != 2) {
				if (rel_time < 2243) {
					if (hops < 4) {
						if (hops < 2) {
							w62 = -250;
						} else {
							w62 = -229;
						}
					} else {
						if (hops < 5) {
							w62 = -278;
						} else {
							w62 = -236;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2273) {
							w62 = -113;
						} else {
							w62 = -172;
						}
					} else {
						if (rel_time < 2273) {
							w62 = 87;
						} else {
							w62 = -50;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w62 = 103;
					} else {
						w62 = 121;
					}
				} else {
					if (hops < 5) {
						w62 = 60;
					} else {
						w62 = 113;
					}
				}
			}
		}
	} else {
		if (rel_time < 2330) {
			if (hops < 4) {
				if (hops < 2) {
					w62 = 286;
				} else {
					if (hops < 3) {
						w62 = 254;
					} else {
						w62 = 277;
					}
				}
			} else {
				if (hops < 5) {
					w62 = 355;
				} else {
					w62 = 311;
				}
			}
		} else {
			if (rel_time < 2444) {
				if (rel_time < 2358) {
					if (hops < 4) {
						if (hops < 2) {
							w62 = -148;
						} else {
							w62 = -164;
						}
					} else {
						if (hops < 5) {
							w62 = -9;
						} else {
							w62 = -51;
						}
					}
				} else {
					if (cons != 4) {
						if (rel_time < 2386) {
							w62 = 251;
						} else {
							w62 = 153;
						}
					} else {
						if (hops < 3) {
							w62 = 21;
						} else {
							w62 = 70;
						}
					}
				}
			} else {
				if (rel_time < 2472) {
					if (hops < 2) {
						w62 = -330;
					} else {
						if (hops < 4) {
							w62 = -232;
						} else {
							w62 = -341;
						}
					}
				} else {
					if (rel_time < 2501) {
						if (hops < 2) {
							w62 = 45;
						} else {
							w62 = 229;
						}
					} else {
						if (rel_time < 2529) {
							w62 = -296;
						} else {
							w62 = 1;
						}
					}
				}
			}
		}
	}
	int w63;
	if (rel_time < 5711) {
		if (rel_time < 5423) {
			if (rel_time < 5323) {
				if (rel_time < 5317) {
					if (rel_time < 5272) {
						if (rel_time < 5226) {
							w63 = 0;
						} else {
							w63 = 334;
						}
					} else {
						if (prod != 3) {
							w63 = 410;
						} else {
							w63 = -350;
						}
					}
				} else {
					if (hops < 2) {
						w63 = 316;
					} else {
						if (hops < 3) {
							w63 = 247;
						} else {
							w63 = 307;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 5) {
						w63 = 303;
					} else {
						w63 = 221;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w63 = -464;
						} else {
							w63 = -439;
						}
					} else {
						if (hops < 4) {
							w63 = -375;
						} else {
							w63 = -466;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (prod != 4) {
					if (prod != 0) {
						if (rel_time < 5557) {
							w63 = 582;
						} else {
							w63 = 449;
						}
					} else {
						if (rel_time < 5467) {
							w63 = -727;
						} else {
							w63 = 218;
						}
					}
				} else {
					if (rel_time < 5602) {
						w63 = -487;
					} else {
						if (hops < 5) {
							w63 = -190;
						} else {
							w63 = -243;
						}
					}
				}
			} else {
				if (rel_time < 5512) {
					if (hops < 2) {
						w63 = -294;
					} else {
						w63 = -235;
					}
				} else {
					if (hops < 2) {
						w63 = -455;
					} else {
						if (hops < 5) {
							w63 = -394;
						} else {
							w63 = -439;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5756) {
			if (prod != 0) {
				w63 = -383;
			} else {
				w63 = 779;
			}
		} else {
			if (rel_time < 5889) {
				if (prod != 3) {
					if (prod != 1) {
						if (rel_time < 5844) {
							w63 = 226;
						} else {
							w63 = 388;
						}
					} else {
						w63 = -639;
					}
				} else {
					w63 = -566;
				}
			} else {
				if (rel_time < 6320) {
					if (prod != 3) {
						if (prod != 2) {
							w63 = 30;
						} else {
							w63 = -230;
						}
					} else {
						if (rel_time < 6132) {
							w63 = 395;
						} else {
							w63 = 861;
						}
					}
				} else {
					if (rel_time < 6454) {
						if (prod != 2) {
							w63 = -293;
						} else {
							w63 = 168;
						}
					} else {
						if (rel_time < 6466) {
							w63 = 310;
						} else {
							w63 = -3;
						}
					}
				}
			}
		}
	}
	int w64;
	if (hops < 5) {
		if (rel_time < 2873) {
			if (rel_time < 2730) {
				if (rel_time < 2587) {
					if (rel_time < 2444) {
						if (rel_time < 2301) {
							w64 = -6;
						} else {
							w64 = 83;
						}
					} else {
						if (cons != 2) {
							w64 = -116;
						} else {
							w64 = 120;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 2672) {
							w64 = 289;
						} else {
							w64 = 7;
						}
					} else {
						if (hops < 4) {
							w64 = -165;
						} else {
							w64 = 76;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 2758) {
						if (hops < 4) {
							w64 = -178;
						} else {
							w64 = -386;
						}
					} else {
						if (rel_time < 2845) {
							w64 = 18;
						} else {
							w64 = -165;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w64 = -201;
						} else {
							w64 = -296;
						}
					} else {
						w64 = -475;
					}
				}
			}
		} else {
			if (rel_time < 2901) {
				if (hops < 3) {
					if (hops < 2) {
						w64 = 354;
					} else {
						w64 = 454;
					}
				} else {
					if (hops < 4) {
						w64 = 287;
					} else {
						w64 = 395;
					}
				}
			} else {
				if (rel_time < 2929) {
					if (hops < 3) {
						if (hops < 2) {
							w64 = -287;
						} else {
							w64 = -181;
						}
					} else {
						if (hops < 4) {
							w64 = -361;
						} else {
							w64 = -256;
						}
					}
				} else {
					if (rel_time < 2958) {
						if (hops < 2) {
							w64 = 130;
						} else {
							w64 = 357;
						}
					} else {
						if (rel_time < 3101) {
							w64 = -72;
						} else {
							w64 = 2;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3760) {
			if (prod != 2) {
				if (prod != 0) {
					if (rel_time < 3598) {
						if (prod != 1) {
							w64 = 34;
						} else {
							w64 = -144;
						}
					} else {
						w64 = 242;
					}
				} else {
					if (rel_time < 3462) {
						w64 = 466;
					} else {
						w64 = 88;
					}
				}
			} else {
				w64 = 494;
			}
		} else {
			if (rel_time < 4329) {
				if (rel_time < 4284) {
					if (rel_time < 4184) {
						if (prod != 0) {
							w64 = -125;
						} else {
							w64 = 200;
						}
					} else {
						w64 = 369;
					}
				} else {
					w64 = -666;
				}
			} else {
				if (rel_time < 4466) {
					if (prod != 2) {
						if (rel_time < 4375) {
							w64 = 462;
						} else {
							w64 = 569;
						}
					} else {
						w64 = -193;
					}
				} else {
					if (rel_time < 4470) {
						w64 = -579;
					} else {
						if (rel_time < 4615) {
							w64 = 446;
						} else {
							w64 = -9;
						}
					}
				}
			}
		}
	}
	int w65;
	if (cons != 4) {
		if (rel_time < 2873) {
			if (rel_time < 2730) {
				if (rel_time < 2587) {
					if (rel_time < 2501) {
						if (rel_time < 2301) {
							w65 = -7;
						} else {
							w65 = 35;
						}
					} else {
						if (rel_time < 2529) {
							w65 = -175;
						} else {
							w65 = -27;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 2672) {
							w65 = 208;
						} else {
							w65 = -7;
						}
					} else {
						if (hops < 4) {
							w65 = -115;
						} else {
							w65 = 43;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (hops < 4) {
						if (cons != 3) {
							w65 = -121;
						} else {
							w65 = -180;
						}
					} else {
						if (rel_time < 2815) {
							w65 = -296;
						} else {
							w65 = -108;
						}
					}
				} else {
					if (hops < 2) {
						w65 = 71;
					} else {
						if (hops < 4) {
							w65 = -56;
						} else {
							w65 = 87;
						}
					}
				}
			}
		} else {
			if (rel_time < 2901) {
				if (hops < 5) {
					if (hops < 3) {
						if (hops < 2) {
							w65 = 248;
						} else {
							w65 = 318;
						}
					} else {
						if (hops < 4) {
							w65 = 201;
						} else {
							w65 = 277;
						}
					}
				} else {
					w65 = 403;
				}
			} else {
				if (rel_time < 2929) {
					if (hops < 3) {
						if (hops < 2) {
							w65 = -201;
						} else {
							w65 = -127;
						}
					} else {
						if (hops < 4) {
							w65 = -253;
						} else {
							w65 = -197;
						}
					}
				} else {
					if (rel_time < 2958) {
						if (hops < 2) {
							w65 = 91;
						} else {
							w65 = 257;
						}
					} else {
						if (cons != 1) {
							w65 = 1;
						} else {
							w65 = -79;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 918) {
			if (rel_time < 686) {
				if (rel_time < 372) {
					if (hops < 4) {
						if (hops < 2) {
							w65 = -1;
						} else {
							w65 = 15;
						}
					} else {
						if (hops < 5) {
							w65 = -27;
						} else {
							w65 = -33;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w65 = 51;
						} else {
							w65 = 28;
						}
					} else {
						w65 = -39;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w65 = -86;
					} else {
						w65 = -66;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w65 = 7;
						} else {
							w65 = -7;
						}
					} else {
						w65 = -44;
					}
				}
			}
		} else {
			if (rel_time < 1130) {
				if (hops < 3) {
					if (hops < 2) {
						w65 = 101;
					} else {
						w65 = 86;
					}
				} else {
					if (hops < 4) {
						w65 = 9;
					} else {
						w65 = 91;
					}
				}
			} else {
				if (rel_time < 1702) {
					if (rel_time < 1559) {
						if (hops < 3) {
							w65 = 40;
						} else {
							w65 = -64;
						}
					} else {
						if (hops < 2) {
							w65 = -6;
						} else {
							w65 = 137;
						}
					}
				} else {
					if (rel_time < 1844) {
						if (hops < 2) {
							w65 = -92;
						} else {
							w65 = -22;
						}
					} else {
						if (rel_time < 2845) {
							w65 = 18;
						} else {
							w65 = 3;
						}
					}
				}
			}
		}
	}
	int w66;
	if (rel_time < 1301) {
		if (rel_time < 1158) {
			if (rel_time < 964) {
				if (rel_time < 822) {
					if (rel_time < 777) {
						if (rel_time < 731) {
							w66 = -1;
						} else {
							w66 = 122;
						}
					} else {
						if (hops < 2) {
							w66 = -139;
						} else {
							w66 = -118;
						}
					}
				} else {
					if (cons != 4) {
						if (rel_time < 868) {
							w66 = 157;
						} else {
							w66 = 65;
						}
					} else {
						if (hops < 3) {
							w66 = -54;
						} else {
							w66 = -3;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 1100) {
							w66 = -137;
						} else {
							w66 = -77;
						}
					} else {
						if (hops < 3) {
							w66 = 66;
						} else {
							w66 = 35;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w66 = 142;
						} else {
							w66 = 13;
						}
					} else {
						w66 = 333;
					}
				}
			}
		} else {
			if (cons != 2) {
				if (rel_time < 1187) {
					if (hops < 3) {
						if (hops < 2) {
							w66 = 110;
						} else {
							w66 = 92;
						}
					} else {
						if (hops < 4) {
							w66 = 216;
						} else {
							w66 = 141;
						}
					}
				} else {
					if (rel_time < 1243) {
						if (hops < 3) {
							w66 = 34;
						} else {
							w66 = 156;
						}
					} else {
						if (hops < 5) {
							w66 = 39;
						} else {
							w66 = 101;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w66 = -59;
					} else {
						w66 = 10;
					}
				} else {
					if (hops < 4) {
						w66 = -85;
					} else {
						if (hops < 5) {
							w66 = -37;
						} else {
							w66 = -10;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1444) {
			if (hops < 3) {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 1386) {
							w66 = -105;
						} else {
							w66 = -60;
						}
					} else {
						if (hops < 2) {
							w66 = 98;
						} else {
							w66 = -51;
						}
					}
				} else {
					if (hops < 2) {
						w66 = 138;
					} else {
						w66 = -13;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1416) {
						if (cons != 2) {
							w66 = -284;
						} else {
							w66 = -87;
						}
					} else {
						w66 = -73;
					}
				} else {
					if (rel_time < 1329) {
						if (hops < 5) {
							w66 = -141;
						} else {
							w66 = -192;
						}
					} else {
						if (cons != 3) {
							w66 = -69;
						} else {
							w66 = -117;
						}
					}
				}
			}
		} else {
			if (rel_time < 1587) {
				if (cons != 2) {
					if (rel_time < 1529) {
						if (hops < 2) {
							w66 = 98;
						} else {
							w66 = 204;
						}
					} else {
						if (rel_time < 1559) {
							w66 = 13;
						} else {
							w66 = 84;
						}
					}
				} else {
					if (hops < 2) {
						w66 = -43;
					} else {
						if (hops < 3) {
							w66 = -69;
						} else {
							w66 = -61;
						}
					}
				}
			} else {
				if (rel_time < 1615) {
					if (hops < 4) {
						if (hops < 2) {
							w66 = -110;
						} else {
							w66 = -262;
						}
					} else {
						if (hops < 5) {
							w66 = 7;
						} else {
							w66 = -260;
						}
					}
				} else {
					if (rel_time < 1644) {
						if (hops < 4) {
							w66 = 90;
						} else {
							w66 = 283;
						}
					} else {
						if (rel_time < 1672) {
							w66 = -201;
						} else {
							w66 = 0;
						}
					}
				}
			}
		}
	}
	int w67;
	if (rel_time < 1873) {
		if (rel_time < 1730) {
			if (rel_time < 1587) {
				if (rel_time < 1501) {
					if (rel_time < 1301) {
						if (rel_time < 1158) {
							w67 = 0;
						} else {
							w67 = 36;
						}
					} else {
						if (rel_time < 1444) {
							w67 = -55;
						} else {
							w67 = 27;
						}
					}
				} else {
					if (rel_time < 1529) {
						if (hops < 3) {
							w67 = 110;
						} else {
							w67 = 192;
						}
					} else {
						if (rel_time < 1559) {
							w67 = 9;
						} else {
							w67 = 59;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 1672) {
						if (hops < 4) {
							w67 = -153;
						} else {
							w67 = -34;
						}
					} else {
						if (hops < 4) {
							w67 = -7;
						} else {
							w67 = 122;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w67 = 20;
						} else {
							w67 = 74;
						}
					} else {
						if (hops < 5) {
							w67 = 185;
						} else {
							w67 = -5;
						}
					}
				}
			}
		} else {
			if (cons != 3) {
				if (rel_time < 1758) {
					if (hops < 4) {
						if (hops < 3) {
							w67 = 147;
						} else {
							w67 = 267;
						}
					} else {
						if (hops < 5) {
							w67 = -37;
						} else {
							w67 = 298;
						}
					}
				} else {
					if (rel_time < 1844) {
						if (hops < 5) {
							w67 = -60;
						} else {
							w67 = 99;
						}
					} else {
						if (hops < 5) {
							w67 = 37;
						} else {
							w67 = 93;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w67 = 160;
						} else {
							w67 = 207;
						}
					} else {
						w67 = 297;
					}
				} else {
					if (hops < 5) {
						w67 = -60;
					} else {
						w67 = 408;
					}
				}
			}
		}
	} else {
		if (rel_time < 2016) {
			if (cons != 2) {
				if (cons != 4) {
					if (rel_time < 1958) {
						if (rel_time < 1901) {
							w67 = -126;
						} else {
							w67 = -163;
						}
					} else {
						if (hops < 4) {
							w67 = -79;
						} else {
							w67 = -122;
						}
					}
				} else {
					if (hops < 2) {
						w67 = 72;
					} else {
						if (hops < 4) {
							w67 = -45;
						} else {
							w67 = -8;
						}
					}
				}
			} else {
				if (hops < 2) {
					w67 = 55;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w67 = 14;
						} else {
							w67 = -8;
						}
					} else {
						w67 = 26;
					}
				}
			}
		} else {
			if (rel_time < 2101) {
				if (cons != 2) {
					if (hops < 3) {
						if (hops < 2) {
							w67 = 135;
						} else {
							w67 = 49;
						}
					} else {
						if (rel_time < 2044) {
							w67 = 122;
						} else {
							w67 = 147;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w67 = -54;
						} else {
							w67 = -33;
						}
					} else {
						if (hops < 5) {
							w67 = 13;
						} else {
							w67 = -8;
						}
					}
				}
			} else {
				if (rel_time < 2301) {
					if (cons != 3) {
						if (cons != 1) {
							w67 = 14;
						} else {
							w67 = -165;
						}
					} else {
						if (hops < 3) {
							w67 = -176;
						} else {
							w67 = -160;
						}
					}
				} else {
					if (rel_time < 2330) {
						if (hops < 4) {
							w67 = 156;
						} else {
							w67 = 210;
						}
					} else {
						if (rel_time < 2358) {
							w67 = -127;
						} else {
							w67 = 1;
						}
					}
				}
			}
		}
	}
	int w68;
	if (rel_time < 5711) {
		if (rel_time < 5423) {
			if (rel_time < 5323) {
				if (rel_time < 5317) {
					if (rel_time < 5272) {
						if (rel_time < 5226) {
							w68 = 0;
						} else {
							w68 = 233;
						}
					} else {
						if (prod != 3) {
							w68 = 288;
						} else {
							w68 = -246;
						}
					}
				} else {
					if (hops < 2) {
						w68 = 220;
					} else {
						if (hops < 3) {
							w68 = 172;
						} else {
							w68 = 214;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 5) {
						if (hops < 2) {
							w68 = 229;
						} else {
							w68 = 205;
						}
					} else {
						w68 = 157;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w68 = -326;
						} else {
							w68 = -309;
						}
					} else {
						if (hops < 4) {
							w68 = -264;
						} else {
							w68 = -327;
						}
					}
				}
			}
		} else {
			if (prod != 3) {
				if (prod != 1) {
					if (rel_time < 5702) {
						if (rel_time < 5602) {
							w68 = -307;
						} else {
							w68 = -102;
						}
					} else {
						if (hops < 3) {
							w68 = 137;
						} else {
							w68 = 147;
						}
					}
				} else {
					if (hops < 2) {
						w68 = 311;
					} else {
						if (hops < 5) {
							w68 = 376;
						} else {
							w68 = 263;
						}
					}
				}
			} else {
				if (rel_time < 5557) {
					if (hops < 2) {
						w68 = 567;
					} else {
						w68 = 640;
					}
				} else {
					if (hops < 2) {
						w68 = 290;
					} else {
						if (hops < 5) {
							w68 = 329;
						} else {
							w68 = 268;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5756) {
			if (prod != 0) {
				if (hops < 3) {
					w68 = -274;
				} else {
					if (hops < 4) {
						w68 = -250;
					} else {
						w68 = -275;
					}
				}
			} else {
				w68 = 547;
			}
		} else {
			if (rel_time < 6033) {
				if (prod != 0) {
					if (prod != 3) {
						if (rel_time < 5988) {
							w68 = 196;
						} else {
							w68 = 998;
						}
					} else {
						w68 = -397;
					}
				} else {
					if (rel_time < 5988) {
						if (hops < 2) {
							w68 = -426;
						} else {
							w68 = -356;
						}
					} else {
						if (hops < 2) {
							w68 = -516;
						} else {
							w68 = -445;
						}
					}
				}
			} else {
				if (rel_time < 6077) {
					if (prod != 1) {
						w68 = -476;
					} else {
						if (hops < 2) {
							w68 = 244;
						} else {
							w68 = 286;
						}
					}
				} else {
					if (rel_time < 6089) {
						if (hops < 2) {
							w68 = -175;
						} else {
							w68 = -130;
						}
					} else {
						if (rel_time < 6132) {
							w68 = 245;
						} else {
							w68 = -3;
						}
					}
				}
			}
		}
	}
	int w69;
	if (prod != 1) {
		if (rel_time < 8465) {
			if (rel_time < 8443) {
				if (rel_time < 8397) {
					if (rel_time < 8168) {
						if (rel_time < 7977) {
							w69 = 0;
						} else {
							w69 = 80;
						}
					} else {
						if (prod != 3) {
							w69 = -175;
						} else {
							w69 = 643;
						}
					}
				} else {
					if (prod != 3) {
						w69 = -276;
					} else {
						if (hops < 4) {
							w69 = 221;
						} else {
							w69 = 79;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w69 = -223;
					} else {
						w69 = -213;
					}
				} else {
					if (hops < 5) {
						w69 = -163;
					} else {
						w69 = -215;
					}
				}
			}
		} else {
			if (rel_time < 8642) {
				if (rel_time < 8599) {
					if (prod != 0) {
						if (hops < 4) {
							w69 = -460;
						} else {
							w69 = -354;
						}
					} else {
						if (rel_time < 8558) {
							w69 = 136;
						} else {
							w69 = 170;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w69 = 338;
						} else {
							w69 = 313;
						}
					} else {
						w69 = 483;
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 8827) {
						if (prod != 0) {
							w69 = 286;
						} else {
							w69 = -267;
						}
					} else {
						if (rel_time < 9019) {
							w69 = -146;
						} else {
							w69 = 18;
						}
					}
				} else {
					if (rel_time < 8730) {
						if (rel_time < 8686) {
							w69 = -399;
						} else {
							w69 = -266;
						}
					} else {
						if (rel_time < 9019) {
							w69 = 168;
						} else {
							w69 = -9;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3507) {
			if (rel_time < 3462) {
				if (hops < 3) {
					if (hops < 2) {
						w69 = -219;
					} else {
						w69 = -445;
					}
				} else {
					w69 = -1390;
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						if (hops < 3) {
							w69 = -276;
						} else {
							w69 = -205;
						}
					} else {
						w69 = -359;
					}
				} else {
					w69 = -102;
				}
			}
		} else {
			if (rel_time < 3807) {
				if (rel_time < 3761) {
					if (hops < 3) {
						if (hops < 2) {
							w69 = 77;
						} else {
							w69 = 222;
						}
					} else {
						if (hops < 4) {
							w69 = 647;
						} else {
							w69 = 277;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w69 = 408;
						} else {
							w69 = 683;
						}
					} else {
						if (hops < 5) {
							w69 = 309;
						} else {
							w69 = 12;
						}
					}
				}
			} else {
				if (rel_time < 4090) {
					if (hops < 2) {
						w69 = -188;
					} else {
						if (hops < 4) {
							w69 = -295;
						} else {
							w69 = -348;
						}
					}
				} else {
					if (rel_time < 4375) {
						if (hops < 4) {
							w69 = 403;
						} else {
							w69 = 463;
						}
					} else {
						if (rel_time < 4660) {
							w69 = -448;
						} else {
							w69 = -2;
						}
					}
				}
			}
		}
	}
	int w70;
	if (prod != 0) {
		if (rel_time < 7276) {
			if (rel_time < 7126) {
				if (rel_time < 6740) {
					if (rel_time < 6454) {
						if (rel_time < 6132) {
							w70 = 2;
						} else {
							w70 = -163;
						}
					} else {
						if (prod != 2) {
							w70 = 270;
						} else {
							w70 = -312;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 6898) {
							w70 = -191;
						} else {
							w70 = 164;
						}
					} else {
						if (rel_time < 6983) {
							w70 = -297;
						} else {
							w70 = -535;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 7171) {
						if (hops < 2) {
							w70 = 611;
						} else {
							w70 = 450;
						}
					} else {
						if (rel_time < 7260) {
							w70 = 296;
						} else {
							w70 = 189;
						}
					}
				} else {
					if (hops < 2) {
						w70 = -178;
					} else {
						if (hops < 3) {
							w70 = -106;
						} else {
							w70 = -123;
						}
					}
				}
			}
		} else {
			if (rel_time < 7459) {
				if (prod != 3) {
					if (rel_time < 7318) {
						if (hops < 2) {
							w70 = -221;
						} else {
							w70 = -193;
						}
					} else {
						if (rel_time < 7414) {
							w70 = -576;
						} else {
							w70 = -419;
						}
					}
				} else {
					w70 = 1298;
				}
			} else {
				if (rel_time < 7749) {
					if (prod != 3) {
						if (rel_time < 7503) {
							w70 = -59;
						} else {
							w70 = 306;
						}
					} else {
						if (rel_time < 7547) {
							w70 = -520;
						} else {
							w70 = -267;
						}
					}
				} else {
					if (rel_time < 8067) {
						if (prod != 3) {
							w70 = -260;
						} else {
							w70 = 312;
						}
					} else {
						if (rel_time < 8353) {
							w70 = 72;
						} else {
							w70 = -8;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3715) {
			if (rel_time < 3462) {
				if (hops < 3) {
					if (hops < 2) {
						w70 = 66;
					} else {
						w70 = 352;
					}
				} else {
					if (hops < 4) {
						w70 = -171;
					} else {
						if (hops < 5) {
							w70 = 177;
						} else {
							w70 = 327;
						}
					}
				}
			} else {
				if (hops < 2) {
					w70 = 611;
				} else {
					if (hops < 3) {
						w70 = 1021;
					} else {
						w70 = 1330;
					}
				}
			}
		} else {
			if (rel_time < 4329) {
				if (rel_time < 4044) {
					if (rel_time < 3760) {
						if (hops < 3) {
							w70 = -172;
						} else {
							w70 = 3;
						}
					} else {
						if (rel_time < 3998) {
							w70 = 440;
						} else {
							w70 = 112;
						}
					}
				} else {
					if (hops < 2) {
						w70 = -474;
					} else {
						if (hops < 4) {
							w70 = -438;
						} else {
							w70 = -472;
						}
					}
				}
			} else {
				if (rel_time < 4615) {
					if (rel_time < 4570) {
						if (hops < 4) {
							w70 = 315;
						} else {
							w70 = 546;
						}
					} else {
						if (hops < 4) {
							w70 = 1355;
						} else {
							w70 = 890;
						}
					}
				} else {
					if (rel_time < 4896) {
						if (hops < 4) {
							w70 = -263;
						} else {
							w70 = -346;
						}
					} else {
						if (rel_time < 5181) {
							w70 = 370;
						} else {
							w70 = -1;
						}
					}
				}
			}
		}
	}
	int w71;
	if (prod != 0) {
		if (rel_time < 9275) {
			if (rel_time < 9019) {
				if (rel_time < 8126) {
					if (rel_time < 7879) {
						if (rel_time < 7591) {
							w71 = -1;
						} else {
							w71 = 74;
						}
					} else {
						if (prod != 2) {
							w71 = -260;
						} else {
							w71 = 149;
						}
					}
				} else {
					if (rel_time < 8353) {
						if (prod != 3) {
							w71 = 182;
						} else {
							w71 = -532;
						}
					} else {
						if (rel_time < 8599) {
							w71 = -54;
						} else {
							w71 = 17;
						}
					}
				}
			} else {
				if (rel_time < 9160) {
					if (rel_time < 9117) {
						if (hops < 2) {
							w71 = -334;
						} else {
							w71 = -311;
						}
					} else {
						if (hops < 2) {
							w71 = -557;
						} else {
							w71 = -642;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 9203) {
							w71 = -97;
						} else {
							w71 = -132;
						}
					} else {
						if (rel_time < 9203) {
							w71 = 208;
						} else {
							w71 = 77;
						}
					}
				}
			}
		} else {
			if (rel_time < 9450) {
				if (prod != 3) {
					if (rel_time < 9312) {
						if (hops < 2) {
							w71 = 151;
						} else {
							w71 = 137;
						}
					} else {
						if (rel_time < 9407) {
							w71 = 377;
						} else {
							w71 = 155;
						}
					}
				} else {
					w71 = -279;
				}
			} else {
				if (rel_time < 9744) {
					if (prod != 3) {
						if (prod != 1) {
							w71 = -179;
						} else {
							w71 = 7;
						}
					} else {
						if (hops < 3) {
							w71 = 244;
						} else {
							w71 = 37;
						}
					}
				} else {
					if (rel_time < 10009) {
						if (rel_time < 9967) {
							w71 = 38;
						} else {
							w71 = 1559;
						}
					} else {
						if (prod != 3) {
							w71 = -24;
						} else {
							w71 = 54;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3715) {
			if (rel_time < 3462) {
				if (hops < 3) {
					if (hops < 2) {
						w71 = 46;
					} else {
						w71 = 247;
					}
				} else {
					if (hops < 4) {
						w71 = -120;
					} else {
						if (hops < 5) {
							w71 = 124;
						} else {
							w71 = 229;
						}
					}
				}
			} else {
				if (hops < 2) {
					w71 = 428;
				} else {
					if (hops < 3) {
						w71 = 717;
					} else {
						w71 = 936;
					}
				}
			}
		} else {
			if (rel_time < 4329) {
				if (rel_time < 4044) {
					if (rel_time < 3760) {
						if (hops < 3) {
							w71 = -121;
						} else {
							w71 = 2;
						}
					} else {
						if (hops < 2) {
							w71 = 52;
						} else {
							w71 = 93;
						}
					}
				} else {
					if (hops < 2) {
						w71 = -332;
					} else {
						if (hops < 4) {
							w71 = -307;
						} else {
							w71 = -331;
						}
					}
				}
			} else {
				if (rel_time < 4615) {
					if (rel_time < 4570) {
						if (hops < 4) {
							w71 = 220;
						} else {
							w71 = 382;
						}
					} else {
						if (hops < 4) {
							w71 = 950;
						} else {
							w71 = 624;
						}
					}
				} else {
					if (rel_time < 6033) {
						if (rel_time < 5756) {
							w71 = -19;
						} else {
							w71 = -310;
						}
					} else {
						if (rel_time < 6320) {
							w71 = 531;
						} else {
							w71 = -6;
						}
					}
				}
			}
		}
	}
	int w72;
	if (prod != 1) {
		if (rel_time < 10085) {
			if (rel_time < 9967) {
				if (rel_time < 9679) {
					if (rel_time < 9312) {
						if (rel_time < 9019) {
							w72 = 0;
						} else {
							w72 = 68;
						}
					} else {
						if (prod != 3) {
							w72 = -102;
						} else {
							w72 = 116;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 9869) {
							w72 = 146;
						} else {
							w72 = 20;
						}
					} else {
						if (rel_time < 9827) {
							w72 = -136;
						} else {
							w72 = -219;
						}
					}
				}
			} else {
				if (rel_time < 10009) {
					if (hops < 3) {
						if (hops < 2) {
							w72 = -155;
						} else {
							w72 = -117;
						}
					} else {
						if (hops < 5) {
							w72 = -222;
						} else {
							w72 = -329;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w72 = -60;
						} else {
							w72 = -76;
						}
					} else {
						if (hops < 5) {
							w72 = -109;
						} else {
							w72 = -148;
						}
					}
				}
			}
		} else {
			if (rel_time < 10120) {
				if (prod != 2) {
					if (hops < 2) {
						w72 = 106;
					} else {
						if (hops < 3) {
							w72 = 183;
						} else {
							w72 = 115;
						}
					}
				} else {
					w72 = -180;
				}
			} else {
				if (prod != 0) {
					if (prod != 2) {
						if (rel_time < 10416) {
							w72 = -37;
						} else {
							w72 = 39;
						}
					} else {
						if (rel_time < 10335) {
							w72 = 95;
						} else {
							w72 = 26;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w72 = 92;
						} else {
							w72 = 23;
						}
					} else {
						if (hops < 5) {
							w72 = 113;
						} else {
							w72 = 200;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3507) {
			if (hops < 2) {
				if (rel_time < 3462) {
					w72 = -153;
				} else {
					w72 = -130;
				}
			} else {
				if (rel_time < 3462) {
					if (hops < 3) {
						w72 = -312;
					} else {
						w72 = -976;
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w72 = -248;
						} else {
							w72 = -193;
						}
					} else {
						w72 = -72;
					}
				}
			}
		} else {
			if (rel_time < 3807) {
				if (rel_time < 3761) {
					if (hops < 3) {
						if (hops < 2) {
							w72 = 54;
						} else {
							w72 = 155;
						}
					} else {
						if (hops < 4) {
							w72 = 453;
						} else {
							w72 = 195;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w72 = 285;
						} else {
							w72 = 478;
						}
					} else {
						if (hops < 5) {
							w72 = 216;
						} else {
							w72 = 8;
						}
					}
				}
			} else {
				if (rel_time < 4090) {
					if (hops < 2) {
						w72 = -132;
					} else {
						if (hops < 4) {
							w72 = -207;
						} else {
							w72 = -244;
						}
					}
				} else {
					if (rel_time < 4375) {
						if (hops < 5) {
							w72 = 295;
						} else {
							w72 = 185;
						}
					} else {
						if (rel_time < 4660) {
							w72 = -314;
						} else {
							w72 = -1;
						}
					}
				}
			}
		}
	}
	int w73;
	if (rel_time < 5136) {
		if (rel_time < 4896) {
			if (prod != 3) {
				if (rel_time < 4470) {
					if (rel_time < 4375) {
						if (rel_time < 4090) {
							w73 = -1;
						} else {
							w73 = 86;
						}
					} else {
						if (rel_time < 4420) {
							w73 = -251;
						} else {
							w73 = -323;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 4851) {
							w73 = 210;
						} else {
							w73 = -180;
						}
					} else {
						if (rel_time < 4660) {
							w73 = -220;
						} else {
							w73 = 875;
						}
					}
				}
			} else {
				if (rel_time < 4466) {
					if (rel_time < 4184) {
						if (rel_time < 4138) {
							w73 = -23;
						} else {
							w73 = -731;
						}
					} else {
						if (rel_time < 4420) {
							w73 = 712;
						} else {
							w73 = 348;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 4706) {
							w73 = -387;
						} else {
							w73 = -330;
						}
					} else {
						if (hops < 5) {
							w73 = -566;
						} else {
							w73 = -457;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (prod != 4) {
					if (hops < 4) {
						if (rel_time < 4991) {
							w73 = 336;
						} else {
							w73 = 468;
						}
					} else {
						if (hops < 5) {
							w73 = 624;
						} else {
							w73 = 196;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 5036) {
							w73 = -246;
						} else {
							w73 = -190;
						}
					} else {
						w73 = 195;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w73 = -269;
					} else {
						if (rel_time < 4947) {
							w73 = -243;
						} else {
							w73 = -204;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 4947) {
							w73 = -368;
						} else {
							w73 = -428;
						}
					} else {
						w73 = -244;
					}
				}
			}
		}
	} else {
		if (rel_time < 5226) {
			if (prod != 1) {
				if (rel_time < 5181) {
					if (hops < 5) {
						if (hops < 4) {
							w73 = 291;
						} else {
							w73 = 217;
						}
					} else {
						w73 = -102;
					}
				} else {
					w73 = 1115;
				}
			} else {
				if (rel_time < 5181) {
					w73 = -1004;
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w73 = -469;
						} else {
							w73 = -533;
						}
					} else {
						w73 = -151;
					}
				}
			}
		} else {
			if (rel_time < 5272) {
				if (prod != 2) {
					w73 = -735;
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w73 = 273;
						} else {
							w73 = 220;
						}
					} else {
						w73 = -171;
					}
				}
			} else {
				if (rel_time < 5317) {
					if (prod != 3) {
						if (hops < 2) {
							w73 = 230;
						} else {
							w73 = 161;
						}
					} else {
						if (hops < 5) {
							w73 = -183;
						} else {
							w73 = 36;
						}
					}
				} else {
					if (rel_time < 5323) {
						if (hops < 5) {
							w73 = 143;
						} else {
							w73 = 43;
						}
					} else {
						if (rel_time < 5423) {
							w73 = -133;
						} else {
							w73 = 0;
						}
					}
				}
			}
		}
	}
	int w74;
	if (rel_time < 569) {
		if (rel_time < 503) {
			if (rel_time < 438) {
				if (cons != 1) {
					if (cons != 3) {
						if (hops < 3) {
							w74 = 12;
						} else {
							w74 = -8;
						}
					} else {
						if (hops < 4) {
							w74 = 22;
						} else {
							w74 = 75;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w74 = 43;
						} else {
							w74 = 24;
						}
					} else {
						if (hops < 4) {
							w74 = 60;
						} else {
							w74 = 45;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w74 = -28;
					} else {
						w74 = -20;
					}
				} else {
					w74 = -45;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w74 = 56;
				} else {
					w74 = 72;
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						w74 = 41;
					} else {
						w74 = 44;
					}
				} else {
					w74 = 65;
				}
			}
		}
	} else {
		if (rel_time < 731) {
			if (cons != 4) {
				if (hops < 3) {
					if (rel_time < 635) {
						if (hops < 2) {
							w74 = -111;
						} else {
							w74 = 10;
						}
					} else {
						if (hops < 2) {
							w74 = -102;
						} else {
							w74 = -190;
						}
					}
				} else {
					if (rel_time < 635) {
						if (hops < 4) {
							w74 = -30;
						} else {
							w74 = -81;
						}
					} else {
						if (hops < 4) {
							w74 = -75;
						} else {
							w74 = 55;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w74 = 17;
					} else {
						if (hops < 3) {
							w74 = 57;
						} else {
							w74 = 27;
						}
					}
				} else {
					if (hops < 5) {
						w74 = 10;
					} else {
						w74 = -27;
					}
				}
			}
		} else {
			if (rel_time < 777) {
				if (hops < 2) {
					w74 = 146;
				} else {
					if (hops < 3) {
						w74 = 76;
					} else {
						if (hops < 4) {
							w74 = 29;
						} else {
							w74 = 44;
						}
					}
				}
			} else {
				if (rel_time < 822) {
					if (hops < 3) {
						if (hops < 2) {
							w74 = -97;
						} else {
							w74 = -58;
						}
					} else {
						if (hops < 5) {
							w74 = -97;
						} else {
							w74 = -130;
						}
					}
				} else {
					if (rel_time < 868) {
						if (hops < 2) {
							w74 = 84;
						} else {
							w74 = 122;
						}
					} else {
						if (rel_time < 1009) {
							w74 = -29;
						} else {
							w74 = 0;
						}
					}
				}
			}
		}
	}
	int w75;
	if (cons != 4) {
		if (hops < 3) {
			if (rel_time < 9744) {
				if (rel_time < 9707) {
					if (prod != 4) {
						if (rel_time < 9536) {
							w75 = -3;
						} else {
							w75 = 105;
						}
					} else {
						if (rel_time < 9407) {
							w75 = -10;
						} else {
							w75 = -171;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 2) {
							w75 = -110;
						} else {
							w75 = -160;
						}
					} else {
						w75 = 387;
					}
				}
			} else {
				if (rel_time < 9783) {
					if (prod != 1) {
						if (hops < 2) {
							w75 = 124;
						} else {
							w75 = 220;
						}
					} else {
						if (hops < 2) {
							w75 = -300;
						} else {
							w75 = -429;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 10085) {
							w75 = -42;
						} else {
							w75 = 23;
						}
					} else {
						if (rel_time < 10009) {
							w75 = 1032;
						} else {
							w75 = -10;
						}
					}
				}
			}
		} else {
			if (rel_time < 1444) {
				if (rel_time < 1301) {
					if (rel_time < 1158) {
						if (rel_time < 964) {
							w75 = 3;
						} else {
							w75 = -72;
						}
					} else {
						if (cons != 2) {
							w75 = 88;
						} else {
							w75 = -51;
						}
					}
				} else {
					if (rel_time < 1329) {
						if (hops < 4) {
							w75 = -217;
						} else {
							w75 = -91;
						}
					} else {
						if (cons != 3) {
							w75 = -34;
						} else {
							w75 = -132;
						}
					}
				}
			} else {
				if (rel_time < 1587) {
					if (cons != 2) {
						if (hops < 4) {
							w75 = 162;
						} else {
							w75 = 60;
						}
					} else {
						if (hops < 5) {
							w75 = -50;
						} else {
							w75 = -58;
						}
					}
				} else {
					if (rel_time < 1615) {
						if (hops < 4) {
							w75 = -186;
						} else {
							w75 = -32;
						}
					} else {
						if (rel_time < 1644) {
							w75 = 112;
						} else {
							w75 = 4;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1702) {
			if (rel_time < 1559) {
				if (hops < 3) {
					if (rel_time < 918) {
						if (rel_time < 686) {
							w75 = 13;
						} else {
							w75 = -29;
						}
					} else {
						if (hops < 2) {
							w75 = 44;
						} else {
							w75 = 8;
						}
					}
				} else {
					if (rel_time < 1130) {
						if (rel_time < 918) {
							w75 = 4;
						} else {
							w75 = 24;
						}
					} else {
						if (rel_time < 1416) {
							w75 = -59;
						} else {
							w75 = 22;
						}
					}
				}
			} else {
				if (hops < 2) {
					w75 = -2;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w75 = 74;
						} else {
							w75 = 188;
						}
					} else {
						w75 = -85;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1844) {
					if (hops < 2) {
						w75 = -46;
					} else {
						w75 = -18;
					}
				} else {
					if (rel_time < 2416) {
						if (rel_time < 1987) {
							w75 = 16;
						} else {
							w75 = -13;
						}
					} else {
						if (rel_time < 2559) {
							w75 = 53;
						} else {
							w75 = 1;
						}
					}
				}
			} else {
				if (rel_time < 1987) {
					if (hops < 4) {
						if (rel_time < 1844) {
							w75 = -7;
						} else {
							w75 = -45;
						}
					} else {
						if (rel_time < 1844) {
							w75 = 31;
						} else {
							w75 = -6;
						}
					}
				} else {
					if (rel_time < 2987) {
						if (rel_time < 2845) {
							w75 = 25;
						} else {
							w75 = -51;
						}
					} else {
						if (rel_time < 3273) {
							w75 = 40;
						} else {
							w75 = 12;
						}
					}
				}
			}
		}
	}
	int w76;
	if (hops < 5) {
		if (rel_time < 6839) {
			if (rel_time < 6651) {
				if (rel_time < 6466) {
					if (rel_time < 6454) {
						if (rel_time < 6409) {
							w76 = 1;
						} else {
							w76 = -78;
						}
					} else {
						if (hops < 2) {
							w76 = 110;
						} else {
							w76 = 145;
						}
					}
				} else {
					if (prod != 1) {
						if (prod != 4) {
							w76 = -271;
						} else {
							w76 = 225;
						}
					} else {
						if (rel_time < 6606) {
							w76 = 182;
						} else {
							w76 = 447;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (prod != 0) {
						if (rel_time < 6740) {
							w76 = -194;
						} else {
							w76 = -28;
						}
					} else {
						if (hops < 2) {
							w76 = 381;
						} else {
							w76 = 282;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 6695) {
							w76 = 349;
						} else {
							w76 = 389;
						}
					} else {
						if (hops < 4) {
							w76 = 259;
						} else {
							w76 = 223;
						}
					}
				}
			}
		} else {
			if (rel_time < 6898) {
				if (prod != 0) {
					if (rel_time < 6885) {
						if (hops < 2) {
							w76 = -744;
						} else {
							w76 = -550;
						}
					} else {
						if (hops < 2) {
							w76 = -208;
						} else {
							w76 = -139;
						}
					}
				} else {
					if (hops < 2) {
						w76 = 88;
					} else {
						if (hops < 3) {
							w76 = -17;
						} else {
							w76 = 60;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 7028) {
						if (prod != 1) {
							w76 = 157;
						} else {
							w76 = -252;
						}
					} else {
						if (rel_time < 7126) {
							w76 = -120;
						} else {
							w76 = 2;
						}
					}
				} else {
					if (rel_time < 7028) {
						if (rel_time < 6983) {
							w76 = -208;
						} else {
							w76 = -384;
						}
					} else {
						if (rel_time < 7318) {
							w76 = 177;
						} else {
							w76 = -26;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3760) {
			if (prod != 2) {
				if (rel_time < 3321) {
					if (rel_time < 3302) {
						if (rel_time < 918) {
							w76 = -9;
						} else {
							w76 = 24;
						}
					} else {
						w76 = -213;
					}
				} else {
					if (rel_time < 3342) {
						w76 = 252;
					} else {
						if (prod != 1) {
							w76 = 83;
						} else {
							w76 = -51;
						}
					}
				}
			} else {
				w76 = 345;
			}
		} else {
			if (rel_time < 6606) {
				if (rel_time < 6564) {
					if (rel_time < 6320) {
						if (rel_time < 6275) {
							w76 = -20;
						} else {
							w76 = 561;
						}
					} else {
						if (prod != 2) {
							w76 = -262;
						} else {
							w76 = 271;
						}
					}
				} else {
					if (prod != 0) {
						w76 = 557;
					} else {
						w76 = -817;
					}
				}
			} else {
				if (rel_time < 6651) {
					w76 = 473;
				} else {
					if (prod != 0) {
						if (rel_time < 7503) {
							w76 = -35;
						} else {
							w76 = 15;
						}
					} else {
						if (rel_time < 7459) {
							w76 = 173;
						} else {
							w76 = 6;
						}
					}
				}
			}
		}
	}
	int w77;
	if (rel_time < 8310) {
		if (rel_time < 8087) {
			if (prod != 4) {
				if (rel_time < 7835) {
					if (rel_time < 7547) {
						if (rel_time < 7171) {
							w77 = 0;
						} else {
							w77 = 41;
						}
					} else {
						if (prod != 1) {
							w77 = -160;
						} else {
							w77 = 228;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 8067) {
							w77 = 296;
						} else {
							w77 = 48;
						}
					} else {
						if (rel_time < 8021) {
							w77 = -770;
						} else {
							w77 = -101;
						}
					}
				}
			} else {
				if (rel_time < 7691) {
					if (rel_time < 7414) {
						if (rel_time < 7126) {
							w77 = 1;
						} else {
							w77 = -183;
						}
					} else {
						if (rel_time < 7591) {
							w77 = 747;
						} else {
							w77 = 137;
						}
					}
				} else {
					if (rel_time < 7879) {
						w77 = -401;
					} else {
						if (hops < 3) {
							w77 = -205;
						} else {
							w77 = -248;
						}
					}
				}
			}
		} else {
			if (prod != 4) {
				if (prod != 1) {
					if (prod != 2) {
						if (rel_time < 8126) {
							w77 = -164;
						} else {
							w77 = -223;
						}
					} else {
						if (hops < 3) {
							w77 = 217;
						} else {
							w77 = 319;
						}
					}
				} else {
					if (hops < 2) {
						w77 = 141;
					} else {
						if (hops < 3) {
							w77 = 199;
						} else {
							w77 = 265;
						}
					}
				}
			} else {
				if (rel_time < 8168) {
					if (hops < 2) {
						w77 = 137;
					} else {
						if (hops < 3) {
							w77 = 104;
						} else {
							w77 = 127;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w77 = 201;
						} else {
							w77 = 176;
						}
					} else {
						if (hops < 5) {
							w77 = 209;
						} else {
							w77 = 189;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 9275) {
				if (rel_time < 8897) {
					if (rel_time < 8730) {
						if (rel_time < 8443) {
							w77 = 50;
						} else {
							w77 = -46;
						}
					} else {
						if (rel_time < 8873) {
							w77 = 179;
						} else {
							w77 = 102;
						}
					}
				} else {
					if (prod != 4) {
						if (prod != 1) {
							w77 = -20;
						} else {
							w77 = -161;
						}
					} else {
						if (rel_time < 9019) {
							w77 = -199;
						} else {
							w77 = -242;
						}
					}
				}
			} else {
				if (rel_time < 9493) {
					if (prod != 2) {
						if (rel_time < 9312) {
							w77 = 72;
						} else {
							w77 = 179;
						}
					} else {
						if (hops < 3) {
							w77 = -84;
						} else {
							w77 = -140;
						}
					}
				} else {
					if (rel_time < 9744) {
						if (prod != 3) {
							w77 = -78;
						} else {
							w77 = 76;
						}
					} else {
						if (rel_time < 10120) {
							w77 = 31;
						} else {
							w77 = -15;
						}
					}
				}
			}
		} else {
			if (rel_time < 9160) {
				if (rel_time < 8873) {
					if (rel_time < 8599) {
						if (hops < 5) {
							w77 = 98;
						} else {
							w77 = 142;
						}
					} else {
						if (rel_time < 8827) {
							w77 = -185;
						} else {
							w77 = -4;
						}
					}
				} else {
					if (rel_time < 9117) {
						if (hops < 2) {
							w77 = 405;
						} else {
							w77 = 359;
						}
					} else {
						if (hops < 3) {
							w77 = 264;
						} else {
							w77 = 250;
						}
					}
				}
			} else {
				if (rel_time < 9450) {
					if (rel_time < 9407) {
						if (hops < 2) {
							w77 = -116;
						} else {
							w77 = -104;
						}
					} else {
						if (hops < 5) {
							w77 = -199;
						} else {
							w77 = -125;
						}
					}
				} else {
					if (rel_time < 9679) {
						w77 = 357;
					} else {
						if (rel_time < 10009) {
							w77 = -50;
						} else {
							w77 = 42;
						}
					}
				}
			}
		}
	}
	int w78;
	if (prod != 1) {
		if (rel_time < 8465) {
			if (rel_time < 8087) {
				if (rel_time < 7977) {
					if (rel_time < 7691) {
						if (rel_time < 7318) {
							w78 = -1;
						} else {
							w78 = 84;
						}
					} else {
						if (prod != 3) {
							w78 = -149;
						} else {
							w78 = 194;
						}
					}
				} else {
					if (rel_time < 8067) {
						if (rel_time < 8021) {
							w78 = 142;
						} else {
							w78 = 457;
						}
					} else {
						if (hops < 2) {
							w78 = 43;
						} else {
							w78 = 29;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (prod != 0) {
						if (rel_time < 8443) {
							w78 = 39;
						} else {
							w78 = -114;
						}
					} else {
						if (hops < 2) {
							w78 = -160;
						} else {
							w78 = -117;
						}
					}
				} else {
					if (rel_time < 8126) {
						if (hops < 3) {
							w78 = 156;
						} else {
							w78 = 224;
						}
					} else {
						if (hops < 3) {
							w78 = -196;
						} else {
							w78 = -156;
						}
					}
				}
			}
		} else {
			if (rel_time < 8642) {
				if (rel_time < 8599) {
					if (prod != 0) {
						if (hops < 5) {
							w78 = -224;
						} else {
							w78 = -340;
						}
					} else {
						if (hops < 2) {
							w78 = 82;
						} else {
							w78 = 64;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w78 = 232;
						} else {
							w78 = 263;
						}
					} else {
						w78 = 349;
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 8730) {
						if (rel_time < 8686) {
							w78 = 156;
						} else {
							w78 = 352;
						}
					} else {
						if (rel_time < 9019) {
							w78 = -50;
						} else {
							w78 = 15;
						}
					}
				} else {
					if (rel_time < 8730) {
						if (rel_time < 8686) {
							w78 = -260;
						} else {
							w78 = -168;
						}
					} else {
						if (rel_time < 9019) {
							w78 = 128;
						} else {
							w78 = -21;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3507) {
			if (hops < 2) {
				if (rel_time < 3462) {
					w78 = -107;
				} else {
					w78 = -91;
				}
			} else {
				if (rel_time < 3462) {
					if (hops < 3) {
						w78 = -218;
					} else {
						if (hops < 4) {
							w78 = -655;
						} else {
							w78 = -837;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w78 = -131;
						} else {
							w78 = -195;
						}
					} else {
						w78 = -36;
					}
				}
			}
		} else {
			if (rel_time < 4947) {
				if (rel_time < 4660) {
					if (rel_time < 4615) {
						if (rel_time < 3807) {
							w78 = 171;
						} else {
							w78 = 2;
						}
					} else {
						if (hops < 4) {
							w78 = -245;
						} else {
							w78 = -615;
						}
					}
				} else {
					if (rel_time < 4896) {
						w78 = 614;
					} else {
						if (hops < 4) {
							w78 = 296;
						} else {
							w78 = 404;
						}
					}
				}
			} else {
				if (rel_time < 5226) {
					if (rel_time < 5181) {
						if (hops < 2) {
							w78 = -669;
						} else {
							w78 = -740;
						}
					} else {
						if (hops < 5) {
							w78 = -359;
						} else {
							w78 = -101;
						}
					}
				} else {
					if (rel_time < 5512) {
						if (hops < 2) {
							w78 = 219;
						} else {
							w78 = 258;
						}
					} else {
						if (rel_time < 5798) {
							w78 = -220;
						} else {
							w78 = -1;
						}
					}
				}
			}
		}
	}
	int w79;
	if (rel_time < 6839) {
		if (rel_time < 6651) {
			if (rel_time < 6466) {
				if (rel_time < 6454) {
					if (rel_time < 6409) {
						if (rel_time < 5889) {
							w79 = 0;
						} else {
							w79 = 29;
						}
					} else {
						if (prod != 3) {
							w79 = 637;
						} else {
							w79 = -151;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w79 = 77;
						} else {
							w79 = 101;
						}
					} else {
						w79 = 316;
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 6564) {
						if (prod != 0) {
							w79 = 213;
						} else {
							w79 = -134;
						}
					} else {
						if (rel_time < 6606) {
							w79 = -503;
						} else {
							w79 = -205;
						}
					}
				} else {
					if (rel_time < 6606) {
						if (hops < 2) {
							w79 = 82;
						} else {
							w79 = 159;
						}
					} else {
						if (hops < 2) {
							w79 = 461;
						} else {
							w79 = 275;
						}
					}
				}
			}
		} else {
			if (prod != 3) {
				if (prod != 0) {
					if (rel_time < 6740) {
						if (rel_time < 6695) {
							w79 = -73;
						} else {
							w79 = -217;
						}
					} else {
						if (hops < 3) {
							w79 = 0;
						} else {
							w79 = -43;
						}
					}
				} else {
					if (hops < 2) {
						w79 = 268;
					} else {
						if (hops < 3) {
							w79 = 187;
						} else {
							w79 = 234;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 6695) {
						w79 = 245;
					} else {
						w79 = 273;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w79 = 181;
						} else {
							w79 = 157;
						}
					} else {
						w79 = 297;
					}
				}
			}
		}
	} else {
		if (rel_time < 7708) {
			if (prod != 2) {
				if (rel_time < 7459) {
					if (rel_time < 7126) {
						if (prod != 4) {
							w79 = -114;
						} else {
							w79 = 89;
						}
					} else {
						if (prod != 4) {
							w79 = 79;
						} else {
							w79 = -132;
						}
					}
				} else {
					if (prod != 4) {
						if (rel_time < 7547) {
							w79 = -395;
						} else {
							w79 = -175;
						}
					} else {
						if (rel_time < 7591) {
							w79 = 498;
						} else {
							w79 = 71;
						}
					}
				}
			} else {
				if (rel_time < 7260) {
					if (rel_time < 6983) {
						if (rel_time < 6940) {
							w79 = 75;
						} else {
							w79 = 243;
						}
					} else {
						if (hops < 2) {
							w79 = -136;
						} else {
							w79 = -93;
						}
					}
				} else {
					if (rel_time < 7503) {
						if (hops < 2) {
							w79 = 261;
						} else {
							w79 = 226;
						}
					} else {
						if (hops < 5) {
							w79 = 127;
						} else {
							w79 = 176;
						}
					}
				}
			}
		} else {
			if (rel_time < 7749) {
				if (prod != 0) {
					if (hops < 2) {
						w79 = 113;
					} else {
						if (hops < 4) {
							w79 = 149;
						} else {
							w79 = 121;
						}
					}
				} else {
					w79 = -385;
				}
			} else {
				if (prod != 0) {
					if (rel_time < 8126) {
						if (prod != 4) {
							w79 = -10;
						} else {
							w79 = -164;
						}
					} else {
						if (rel_time < 8443) {
							w79 = 54;
						} else {
							w79 = -6;
						}
					}
				} else {
					if (rel_time < 9160) {
						if (rel_time < 8873) {
							w79 = 23;
						} else {
							w79 = 215;
						}
					} else {
						if (rel_time < 9450) {
							w79 = -96;
						} else {
							w79 = -9;
						}
					}
				}
			}
		}
	}
	int w80;
	if (prod != 1) {
		if (rel_time < 4947) {
			if (rel_time < 4851) {
				if (rel_time < 4470) {
					if (rel_time < 4184) {
						if (prod != 3) {
							w80 = 4;
						} else {
							w80 = -64;
						}
					} else {
						if (prod != 3) {
							w80 = -193;
						} else {
							w80 = 264;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 4570) {
							w80 = 66;
						} else {
							w80 = 182;
						}
					} else {
						if (hops < 4) {
							w80 = -252;
						} else {
							w80 = -378;
						}
					}
				}
			} else {
				if (rel_time < 4896) {
					if (hops < 4) {
						if (hops < 3) {
							w80 = -114;
						} else {
							w80 = -92;
						}
					} else {
						if (hops < 5) {
							w80 = -200;
						} else {
							w80 = -124;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w80 = -186;
						} else {
							w80 = -170;
						}
					} else {
						if (hops < 5) {
							w80 = -259;
						} else {
							w80 = -181;
						}
					}
				}
			}
		} else {
			if (rel_time < 5272) {
				if (prod != 4) {
					if (hops < 5) {
						if (rel_time < 5226) {
							w80 = 237;
						} else {
							w80 = 127;
						}
					} else {
						if (prod != 2) {
							w80 = -69;
						} else {
							w80 = -132;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w80 = -142;
						} else {
							w80 = -198;
						}
					} else {
						w80 = 142;
					}
				}
			} else {
				if (rel_time < 5512) {
					if (prod != 4) {
						if (prod != 0) {
							w80 = -112;
						} else {
							w80 = -232;
						}
					} else {
						if (rel_time < 5323) {
							w80 = 102;
						} else {
							w80 = 182;
						}
					}
				} else {
					if (rel_time < 5798) {
						if (prod != 3) {
							w80 = -17;
						} else {
							w80 = 279;
						}
					} else {
						if (rel_time < 6089) {
							w80 = -77;
						} else {
							w80 = 5;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6077) {
			if (rel_time < 5798) {
				if (rel_time < 4947) {
					if (rel_time < 4660) {
						if (rel_time < 4615) {
							w80 = 4;
						} else {
							w80 = -284;
						}
					} else {
						if (rel_time < 4896) {
							w80 = 431;
						} else {
							w80 = 223;
						}
					}
				} else {
					if (rel_time < 5226) {
						if (rel_time < 5181) {
							w80 = -492;
						} else {
							w80 = -241;
						}
					} else {
						if (rel_time < 5512) {
							w80 = 172;
						} else {
							w80 = -154;
						}
					}
				}
			} else {
				if (rel_time < 6033) {
					if (hops < 2) {
						w80 = 659;
					} else {
						w80 = 724;
					}
				} else {
					if (hops < 2) {
						w80 = 164;
					} else {
						if (hops < 5) {
							w80 = 194;
						} else {
							w80 = 170;
						}
					}
				}
			}
		} else {
			if (rel_time < 6364) {
				if (rel_time < 6320) {
					if (hops < 3) {
						if (hops < 2) {
							w80 = -362;
						} else {
							w80 = -397;
						}
					} else {
						w80 = -340;
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w80 = -215;
						} else {
							w80 = -204;
						}
					} else {
						w80 = -410;
					}
				}
			} else {
				if (rel_time < 7215) {
					if (rel_time < 6940) {
						if (rel_time < 6651) {
							w80 = 130;
						} else {
							w80 = -116;
						}
					} else {
						if (rel_time < 7171) {
							w80 = 344;
						} else {
							w80 = 153;
						}
					}
				} else {
					if (rel_time < 7503) {
						if (rel_time < 7459) {
							w80 = -329;
						} else {
							w80 = -277;
						}
					} else {
						if (rel_time < 7791) {
							w80 = 127;
						} else {
							w80 = -12;
						}
					}
				}
			}
		}
	}
	int w81;
	if (rel_time < 3101) {
		if (rel_time < 3073) {
			if (rel_time < 3044) {
				if (rel_time < 3016) {
					if (rel_time < 2873) {
						if (rel_time < 2730) {
							w81 = 1;
						} else {
							w81 = -65;
						}
					} else {
						if (cons != 2) {
							w81 = 86;
						} else {
							w81 = -134;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w81 = -144;
						} else {
							w81 = -293;
						}
					} else {
						if (hops < 5) {
							w81 = -79;
						} else {
							w81 = -103;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w81 = 29;
					} else {
						w81 = 67;
					}
				} else {
					if (hops < 5) {
						w81 = 200;
					} else {
						w81 = 182;
					}
				}
			}
		} else {
			if (hops < 2) {
				w81 = -143;
			} else {
				if (hops < 3) {
					w81 = -240;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w81 = -154;
						} else {
							w81 = -144;
						}
					} else {
						w81 = -224;
					}
				}
			}
		}
	} else {
		if (cons != 3) {
			if (rel_time < 3187) {
				if (rel_time < 3159) {
					if (hops < 4) {
						if (hops < 3) {
							w81 = 9;
						} else {
							w81 = 42;
						}
					} else {
						if (rel_time < 3130) {
							w81 = 26;
						} else {
							w81 = -72;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w81 = 126;
						} else {
							w81 = 180;
						}
					} else {
						w81 = 80;
					}
				}
			} else {
				if (cons != 1) {
					if (cons != 2) {
						if (rel_time < 3852) {
							w81 = -14;
						} else {
							w81 = 1;
						}
					} else {
						if (rel_time < 3215) {
							w81 = -2;
						} else {
							w81 = 114;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w81 = -119;
						} else {
							w81 = -110;
						}
					} else {
						if (hops < 4) {
							w81 = -147;
						} else {
							w81 = -158;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3244) {
					if (hops < 2) {
						w81 = 119;
					} else {
						w81 = 178;
					}
				} else {
					if (hops < 2) {
						w81 = 71;
					} else {
						w81 = 118;
					}
				}
			} else {
				if (rel_time < 3244) {
					if (hops < 4) {
						w81 = 132;
					} else {
						if (hops < 5) {
							w81 = 42;
						} else {
							w81 = 20;
						}
					}
				} else {
					if (hops < 4) {
						w81 = -37;
					} else {
						w81 = 71;
					}
				}
			}
		}
	}
	int w82;
	if (rel_time < 6466) {
		if (rel_time < 5889) {
			if (rel_time < 5798) {
				if (prod != 3) {
					if (rel_time < 4901) {
						if (rel_time < 4896) {
							w82 = 1;
						} else {
							w82 = 153;
						}
					} else {
						if (rel_time < 5036) {
							w82 = -118;
						} else {
							w82 = -9;
						}
					}
				} else {
					if (rel_time < 5317) {
						if (rel_time < 3598) {
							w82 = -134;
						} else {
							w82 = 18;
						}
					} else {
						if (rel_time < 5557) {
							w82 = 343;
						} else {
							w82 = 136;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 5844) {
						if (hops < 2) {
							w82 = 110;
						} else {
							w82 = 126;
						}
					} else {
						if (hops < 3) {
							w82 = 240;
						} else {
							w82 = 222;
						}
					}
				} else {
					if (hops < 2) {
						w82 = -264;
					} else {
						if (hops < 3) {
							w82 = -239;
						} else {
							w82 = -260;
						}
					}
				}
			}
		} else {
			if (rel_time < 5988) {
				if (prod != 0) {
					w82 = 276;
				} else {
					if (hops < 2) {
						w82 = -190;
					} else {
						if (hops < 3) {
							w82 = -151;
						} else {
							w82 = -118;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (rel_time < 6409) {
						if (rel_time < 6089) {
							w82 = -18;
						} else {
							w82 = 123;
						}
					} else {
						if (hops < 5) {
							w82 = -90;
						} else {
							w82 = -429;
						}
					}
				} else {
					if (rel_time < 6275) {
						if (rel_time < 6175) {
							w82 = -331;
						} else {
							w82 = -376;
						}
					} else {
						if (rel_time < 6454) {
							w82 = 445;
						} else {
							w82 = 71;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6564) {
			if (prod != 0) {
				if (hops < 5) {
					if (hops < 2) {
						w82 = 65;
					} else {
						if (hops < 3) {
							w82 = 132;
						} else {
							w82 = 88;
						}
					}
				} else {
					w82 = 359;
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w82 = -126;
					} else {
						if (hops < 4) {
							w82 = -62;
						} else {
							w82 = -111;
						}
					}
				} else {
					w82 = -284;
				}
			}
		} else {
			if (rel_time < 6651) {
				if (prod != 1) {
					if (rel_time < 6606) {
						if (hops < 4) {
							w82 = -317;
						} else {
							w82 = -391;
						}
					} else {
						if (hops < 2) {
							w82 = -237;
						} else {
							w82 = -78;
						}
					}
				} else {
					if (rel_time < 6606) {
						if (hops < 2) {
							w82 = 18;
						} else {
							w82 = 72;
						}
					} else {
						if (hops < 2) {
							w82 = 284;
						} else {
							w82 = 153;
						}
					}
				}
			} else {
				if (rel_time < 6740) {
					if (prod != 3) {
						if (hops < 2) {
							w82 = -174;
						} else {
							w82 = -57;
						}
					} else {
						if (hops < 2) {
							w82 = 180;
						} else {
							w82 = 127;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 7028) {
							w82 = 27;
						} else {
							w82 = -2;
						}
					} else {
						if (rel_time < 7028) {
							w82 = -149;
						} else {
							w82 = -5;
						}
					}
				}
			}
		}
	}
	int w83;
	if (prod != 1) {
		if (rel_time < 3101) {
			if (rel_time < 3073) {
				if (rel_time < 3044) {
					if (rel_time < 3016) {
						if (rel_time < 2873) {
							w83 = -2;
						} else {
							w83 = 29;
						}
					} else {
						if (hops < 3) {
							w83 = -148;
						} else {
							w83 = -58;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w83 = 20;
						} else {
							w83 = 47;
						}
					} else {
						if (hops < 5) {
							w83 = 140;
						} else {
							w83 = 128;
						}
					}
				}
			} else {
				if (hops < 2) {
					w83 = -100;
				} else {
					if (hops < 3) {
						w83 = -168;
					} else {
						if (hops < 5) {
							w83 = -106;
						} else {
							w83 = -158;
						}
					}
				}
			}
		} else {
			if (rel_time < 3553) {
				if (prod != 3) {
					if (rel_time < 3321) {
						if (rel_time < 3302) {
							w83 = 32;
						} else {
							w83 = -91;
						}
					} else {
						if (hops < 4) {
							w83 = 41;
						} else {
							w83 = 121;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w83 = -62;
						} else {
							w83 = 53;
						}
					} else {
						if (hops < 4) {
							w83 = -411;
						} else {
							w83 = -74;
						}
					}
				}
			} else {
				if (rel_time < 3852) {
					if (prod != 2) {
						if (rel_time < 3760) {
							w83 = -30;
						} else {
							w83 = 498;
						}
					} else {
						if (hops < 2) {
							w83 = 14;
						} else {
							w83 = -298;
						}
					}
				} else {
					if (rel_time < 3898) {
						if (prod != 3) {
							w83 = -710;
						} else {
							w83 = 239;
						}
					} else {
						if (rel_time < 3998) {
							w83 = -122;
						} else {
							w83 = 2;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3507) {
			if (hops < 2) {
				if (rel_time < 3462) {
					w83 = -72;
				} else {
					w83 = -60;
				}
			} else {
				if (rel_time < 3462) {
					if (hops < 3) {
						w83 = -150;
					} else {
						if (hops < 4) {
							w83 = -457;
						} else {
							w83 = -596;
						}
					}
				} else {
					if (hops < 3) {
						w83 = -131;
					} else {
						if (hops < 4) {
							w83 = -45;
						} else {
							w83 = -104;
						}
					}
				}
			}
		} else {
			if (rel_time < 3807) {
				if (rel_time < 3761) {
					if (hops < 3) {
						if (hops < 2) {
							w83 = -10;
						} else {
							w83 = 61;
						}
					} else {
						if (hops < 4) {
							w83 = 268;
						} else {
							w83 = 89;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w83 = 153;
						} else {
							w83 = 286;
						}
					} else {
						if (hops < 5) {
							w83 = 102;
						} else {
							w83 = -37;
						}
					}
				}
			} else {
				if (rel_time < 4090) {
					if (hops < 2) {
						w83 = -94;
					} else {
						if (hops < 4) {
							w83 = -147;
						} else {
							w83 = -172;
						}
					}
				} else {
					if (rel_time < 4375) {
						if (hops < 3) {
							w83 = 159;
						} else {
							w83 = 201;
						}
					} else {
						if (rel_time < 4660) {
							w83 = -98;
						} else {
							w83 = -8;
						}
					}
				}
			}
		}
	}
	int w84;
	if (hops < 5) {
		if (prod != 0) {
			if (rel_time < 6132) {
				if (rel_time < 5889) {
					if (rel_time < 5602) {
						if (rel_time < 5317) {
							w84 = -1;
						} else {
							w84 = 46;
						}
					} else {
						if (prod != 2) {
							w84 = -87;
						} else {
							w84 = 97;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 6033) {
							w84 = 275;
						} else {
							w84 = 145;
						}
					} else {
						if (rel_time < 6089) {
							w84 = -89;
						} else {
							w84 = -466;
						}
					}
				}
			} else {
				if (rel_time < 6320) {
					if (prod != 3) {
						if (rel_time < 6175) {
							w84 = -233;
						} else {
							w84 = -286;
						}
					} else {
						if (hops < 2) {
							w84 = 535;
						} else {
							w84 = 599;
						}
					}
				} else {
					if (rel_time < 9275) {
						if (rel_time < 8897) {
							w84 = -1;
						} else {
							w84 = -56;
						}
					} else {
						if (rel_time < 9536) {
							w84 = 56;
						} else {
							w84 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3715) {
				if (rel_time < 3462) {
					if (hops < 3) {
						if (hops < 2) {
							w84 = 24;
						} else {
							w84 = 165;
						}
					} else {
						if (hops < 4) {
							w84 = -94;
						} else {
							w84 = 53;
						}
					}
				} else {
					if (hops < 2) {
						w84 = 314;
					} else {
						if (hops < 3) {
							w84 = 516;
						} else {
							w84 = 669;
						}
					}
				}
			} else {
				if (rel_time < 6033) {
					if (rel_time < 5756) {
						if (rel_time < 5467) {
							w84 = -32;
						} else {
							w84 = 139;
						}
					} else {
						if (rel_time < 5988) {
							w84 = -116;
						} else {
							w84 = -214;
						}
					}
				} else {
					if (rel_time < 6320) {
						if (hops < 2) {
							w84 = 334;
						} else {
							w84 = 304;
						}
					} else {
						if (rel_time < 7171) {
							w84 = -69;
						} else {
							w84 = 18;
						}
					}
				}
			}
		}
	} else {
		if (prod != 1) {
			if (rel_time < 4851) {
				if (rel_time < 4570) {
					if (rel_time < 4466) {
						if (prod != 4) {
							w84 = 15;
						} else {
							w84 = 129;
						}
					} else {
						if (prod != 0) {
							w84 = -367;
						} else {
							w84 = 96;
						}
					}
				} else {
					if (prod != 3) {
						if (prod != 2) {
							w84 = 254;
						} else {
							w84 = 337;
						}
					} else {
						w84 = -209;
					}
				}
			} else {
				if (rel_time < 5702) {
					if (rel_time < 5423) {
						if (prod != 4) {
							w84 = -53;
						} else {
							w84 = 92;
						}
					} else {
						if (prod != 3) {
							w84 = -232;
						} else {
							w84 = 68;
						}
					}
				} else {
					if (rel_time < 6409) {
						if (rel_time < 6132) {
							w84 = 0;
						} else {
							w84 = 198;
						}
					} else {
						if (rel_time < 6454) {
							w84 = -302;
						} else {
							w84 = 8;
						}
					}
				}
			}
		} else {
			if (rel_time < 6364) {
				if (rel_time < 6077) {
					if (rel_time < 5798) {
						if (rel_time < 5756) {
							w84 = -15;
						} else {
							w84 = -378;
						}
					} else {
						w84 = 127;
					}
				} else {
					w84 = -322;
				}
			} else {
				if (rel_time < 6651) {
					if (rel_time < 6606) {
						w84 = 303;
					} else {
						w84 = 168;
					}
				} else {
					if (rel_time < 9493) {
						if (rel_time < 9203) {
							w84 = -6;
						} else {
							w84 = 246;
						}
					} else {
						if (rel_time < 9783) {
							w84 = -327;
						} else {
							w84 = 61;
						}
					}
				}
			}
		}
	}
	int w85;
	if (prod != 1) {
		if (rel_time < 10085) {
			if (rel_time < 9967) {
				if (rel_time < 8465) {
					if (rel_time < 8087) {
						if (rel_time < 7977) {
							w85 = 1;
						} else {
							w85 = 68;
						}
					} else {
						if (prod != 2) {
							w85 = -26;
						} else {
							w85 = -137;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 8827) {
							w85 = 106;
						} else {
							w85 = 4;
						}
					} else {
						if (rel_time < 8730) {
							w85 = -143;
						} else {
							w85 = -6;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 10055) {
						if (hops < 3) {
							w85 = -78;
						} else {
							w85 = -121;
						}
					} else {
						if (hops < 2) {
							w85 = -40;
						} else {
							w85 = -59;
						}
					}
				} else {
					if (rel_time < 10009) {
						if (hops < 5) {
							w85 = -173;
						} else {
							w85 = -225;
						}
					} else {
						if (hops < 5) {
							w85 = -92;
						} else {
							w85 = -126;
						}
					}
				}
			}
		} else {
			if (rel_time < 10120) {
				if (prod != 2) {
					if (hops < 2) {
						w85 = 73;
					} else {
						if (hops < 3) {
							w85 = 127;
						} else {
							w85 = 85;
						}
					}
				} else {
					if (hops < 5) {
						w85 = -125;
					} else {
						w85 = -201;
					}
				}
			} else {
				if (rel_time < 10257) {
					if (prod != 3) {
						if (prod != 0) {
							w85 = -66;
						} else {
							w85 = 2;
						}
					} else {
						if (hops < 5) {
							w85 = 183;
						} else {
							w85 = 284;
						}
					}
				} else {
					if (prod != 3) {
						if (hops < 2) {
							w85 = 64;
						} else {
							w85 = 24;
						}
					} else {
						if (hops < 4) {
							w85 = -31;
						} else {
							w85 = -80;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3507) {
			if (hops < 5) {
				if (hops < 2) {
					if (rel_time < 3462) {
						w85 = -50;
					} else {
						w85 = -42;
					}
				} else {
					if (rel_time < 3462) {
						if (hops < 3) {
							w85 = -105;
						} else {
							w85 = -339;
						}
					} else {
						if (hops < 4) {
							w85 = -62;
						} else {
							w85 = -102;
						}
					}
				}
			} else {
				w85 = 13;
			}
		} else {
			if (rel_time < 4947) {
				if (rel_time < 4660) {
					if (rel_time < 4615) {
						if (rel_time < 3807) {
							w85 = 87;
						} else {
							w85 = 3;
						}
					} else {
						if (hops < 4) {
							w85 = -58;
						} else {
							w85 = -316;
						}
					}
				} else {
					if (rel_time < 4896) {
						if (hops < 2) {
							w85 = 285;
						} else {
							w85 = 333;
						}
					} else {
						if (hops < 4) {
							w85 = 103;
						} else {
							w85 = 203;
						}
					}
				}
			} else {
				if (rel_time < 5226) {
					if (rel_time < 5181) {
						if (hops < 2) {
							w85 = -316;
						} else {
							w85 = -366;
						}
					} else {
						if (hops < 5) {
							w85 = -174;
						} else {
							w85 = 11;
						}
					}
				} else {
					if (rel_time < 6077) {
						if (rel_time < 5798) {
							w85 = 18;
						} else {
							w85 = 155;
						}
					} else {
						if (rel_time < 6364) {
							w85 = -197;
						} else {
							w85 = -3;
						}
					}
				}
			}
		}
	}
	int w86;
	if (cons != 0) {
		if (rel_time < 868) {
			if (rel_time < 822) {
				if (rel_time < 777) {
					if (rel_time < 686) {
						if (rel_time < 569) {
							w86 = 10;
						} else {
							w86 = -12;
						}
					} else {
						if (hops < 2) {
							w86 = 103;
						} else {
							w86 = 36;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w86 = -68;
						} else {
							w86 = -40;
						}
					} else {
						if (hops < 5) {
							w86 = -69;
						} else {
							w86 = -95;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w86 = 59;
					} else {
						if (hops < 4) {
							w86 = 97;
						} else {
							w86 = 62;
						}
					}
				} else {
					w86 = 21;
				}
			}
		} else {
			if (rel_time < 1009) {
				if (rel_time < 918) {
					if (hops < 3) {
						if (hops < 2) {
							w86 = -28;
						} else {
							w86 = -13;
						}
					} else {
						if (hops < 5) {
							w86 = 8;
						} else {
							w86 = -25;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w86 = -78;
						} else {
							w86 = -190;
						}
					} else {
						if (hops < 5) {
							w86 = -44;
						} else {
							w86 = -56;
						}
					}
				}
			} else {
				if (rel_time < 1055) {
					if (hops < 5) {
						if (hops < 3) {
							w86 = 99;
						} else {
							w86 = 30;
						}
					} else {
						w86 = 243;
					}
				} else {
					if (rel_time < 1100) {
						if (hops < 5) {
							w86 = -86;
						} else {
							w86 = 134;
						}
					} else {
						if (rel_time < 1187) {
							w86 = 49;
						} else {
							w86 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3159) {
			if (rel_time < 2444) {
				if (rel_time < 2301) {
					if (rel_time < 2159) {
						if (rel_time < 2016) {
							w86 = -9;
						} else {
							w86 = 36;
						}
					} else {
						if (hops < 2) {
							w86 = -121;
						} else {
							w86 = -38;
						}
					}
				} else {
					if (hops < 2) {
						w86 = 138;
					} else {
						if (hops < 3) {
							w86 = 16;
						} else {
							w86 = 53;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 3016) {
						if (rel_time < 2730) {
							w86 = -16;
						} else {
							w86 = -60;
						}
					} else {
						if (hops < 2) {
							w86 = 8;
						} else {
							w86 = -8;
						}
					}
				} else {
					if (rel_time < 2873) {
						if (rel_time < 2730) {
							w86 = -10;
						} else {
							w86 = -75;
						}
					} else {
						if (rel_time < 3016) {
							w86 = 107;
						} else {
							w86 = -21;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w86 = 45;
					} else {
						w86 = 101;
					}
				} else {
					w86 = 32;
				}
			} else {
				if (hops < 5) {
					w86 = -64;
				} else {
					w86 = -3;
				}
			}
		}
	}
	int w87;
	if (rel_time < 2529) {
		if (rel_time < 2444) {
			if (rel_time < 2358) {
				if (rel_time < 2330) {
					if (rel_time < 2301) {
						if (rel_time < 2159) {
							w87 = 1;
						} else {
							w87 = -42;
						}
					} else {
						if (hops < 4) {
							w87 = 109;
						} else {
							w87 = 142;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w87 = -101;
						} else {
							w87 = -113;
						}
					} else {
						if (hops < 5) {
							w87 = -6;
						} else {
							w87 = -32;
						}
					}
				}
			} else {
				if (rel_time < 2386) {
					if (hops < 4) {
						if (hops < 3) {
							w87 = 149;
						} else {
							w87 = 31;
						}
					} else {
						if (hops < 5) {
							w87 = 233;
						} else {
							w87 = 190;
						}
					}
				} else {
					if (rel_time < 2416) {
						if (hops < 3) {
							w87 = -13;
						} else {
							w87 = 10;
						}
					} else {
						if (hops < 2) {
							w87 = 96;
						} else {
							w87 = 26;
						}
					}
				}
			}
		} else {
			if (cons != 2) {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 2472) {
							w87 = -187;
						} else {
							w87 = -126;
						}
					} else {
						if (rel_time < 2472) {
							w87 = -104;
						} else {
							w87 = -53;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 2472) {
							w87 = -261;
						} else {
							w87 = -213;
						}
					} else {
						w87 = -137;
					}
				}
			} else {
				if (hops < 2) {
					w87 = -15;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w87 = 117;
						} else {
							w87 = 180;
						}
					} else {
						if (hops < 5) {
							w87 = 43;
						} else {
							w87 = 36;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2672) {
			if (cons != 1) {
				if (rel_time < 2644) {
					if (rel_time < 2559) {
						if (hops < 4) {
							w87 = 48;
						} else {
							w87 = -40;
						}
					} else {
						if (rel_time < 2587) {
							w87 = -17;
						} else {
							w87 = -62;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w87 = 100;
						} else {
							w87 = 69;
						}
					} else {
						if (hops < 5) {
							w87 = 315;
						} else {
							w87 = 189;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w87 = 63;
					} else {
						if (hops < 3) {
							w87 = 148;
						} else {
							w87 = 164;
						}
					}
				} else {
					if (hops < 5) {
						w87 = 423;
					} else {
						w87 = 280;
					}
				}
			}
		} else {
			if (rel_time < 2815) {
				if (rel_time < 2787) {
					if (cons != 1) {
						if (hops < 2) {
							w87 = 35;
						} else {
							w87 = 0;
						}
					} else {
						if (hops < 2) {
							w87 = -28;
						} else {
							w87 = -117;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w87 = -67;
						} else {
							w87 = -135;
						}
					} else {
						w87 = -227;
					}
				}
			} else {
				if (rel_time < 2901) {
					if (rel_time < 2873) {
						if (rel_time < 2845) {
							w87 = 26;
						} else {
							w87 = -43;
						}
					} else {
						if (hops < 5) {
							w87 = 149;
						} else {
							w87 = 235;
						}
					}
				} else {
					if (rel_time < 2929) {
						if (hops < 3) {
							w87 = -86;
						} else {
							w87 = -130;
						}
					} else {
						if (rel_time < 2958) {
							w87 = 105;
						} else {
							w87 = 0;
						}
					}
				}
			}
		}
	}
	int w88;
	if (hops < 2) {
		if (rel_time < 10375) {
			if (rel_time < 297) {
				if (rel_time < 230) {
					if (cons != 1) {
						if (rel_time < 63) {
							w88 = 14;
						} else {
							w88 = 11;
						}
					} else {
						w88 = 27;
					}
				} else {
					w88 = 43;
				}
			} else {
				if (rel_time < 4470) {
					if (rel_time < 4184) {
						if (prod != 3) {
							w88 = -2;
						} else {
							w88 = -76;
						}
					} else {
						if (prod != 3) {
							w88 = -107;
						} else {
							w88 = 123;
						}
					}
				} else {
					if (rel_time < 4660) {
						if (prod != 4) {
							w88 = 109;
						} else {
							w88 = -494;
						}
					} else {
						if (rel_time < 5272) {
							w88 = 13;
						} else {
							w88 = -4;
						}
					}
				}
			}
		} else {
			if (rel_time < 10416) {
				if (prod != 3) {
					w88 = 404;
				} else {
					w88 = 29;
				}
			} else {
				w88 = -14;
			}
		}
	} else {
		if (rel_time < 10160) {
			if (rel_time < 10085) {
				if (rel_time < 10055) {
					if (rel_time < 8686) {
						if (rel_time < 8443) {
							w88 = 2;
						} else {
							w88 = -41;
						}
					} else {
						if (rel_time < 8897) {
							w88 = 44;
						} else {
							w88 = 2;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w88 = -43;
						} else {
							w88 = -39;
						}
					} else {
						if (hops < 5) {
							w88 = -64;
						} else {
							w88 = -88;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (hops < 5) {
						if (hops < 4) {
							w88 = -9;
						} else {
							w88 = -48;
						}
					} else {
						w88 = -177;
					}
				} else {
					if (rel_time < 10120) {
						if (hops < 5) {
							w88 = 71;
						} else {
							w88 = 176;
						}
					} else {
						if (hops < 3) {
							w88 = 205;
						} else {
							w88 = 133;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (prod != 3) {
					if (rel_time < 10257) {
						if (hops < 5) {
							w88 = -14;
						} else {
							w88 = -129;
						}
					} else {
						if (hops < 5) {
							w88 = 10;
						} else {
							w88 = 83;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 10375) {
							w88 = -56;
						} else {
							w88 = -73;
						}
					} else {
						if (hops < 4) {
							w88 = 29;
						} else {
							w88 = -56;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 10296) {
							w88 = -60;
						} else {
							w88 = -73;
						}
					} else {
						if (rel_time < 10296) {
							w88 = -88;
						} else {
							w88 = -10;
						}
					}
				} else {
					if (rel_time < 10296) {
						w88 = -146;
					} else {
						if (hops < 5) {
							w88 = -66;
						} else {
							w88 = -86;
						}
					}
				}
			}
		}
	}
	int w89;
	if (rel_time < 3159) {
		if (rel_time < 2958) {
			if (rel_time < 2929) {
				if (rel_time < 2901) {
					if (rel_time < 2873) {
						if (rel_time < 2730) {
							w89 = 0;
						} else {
							w89 = -28;
						}
					} else {
						if (hops < 5) {
							w89 = 104;
						} else {
							w89 = 164;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w89 = -84;
						} else {
							w89 = -33;
						}
					} else {
						if (hops < 4) {
							w89 = -110;
						} else {
							w89 = -74;
						}
					}
				}
			} else {
				if (hops < 2) {
					w89 = -2;
				} else {
					if (hops < 3) {
						w89 = 205;
					} else {
						if (hops < 4) {
							w89 = -48;
						} else {
							w89 = 134;
						}
					}
				}
			}
		} else {
			if (cons != 2) {
				if (rel_time < 3101) {
					if (cons != 0) {
						if (rel_time < 2987) {
							w89 = -55;
						} else {
							w89 = -84;
						}
					} else {
						if (hops < 3) {
							w89 = -48;
						} else {
							w89 = 75;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w89 = -4;
						} else {
							w89 = 22;
						}
					} else {
						if (rel_time < 3130) {
							w89 = 6;
						} else {
							w89 = -56;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w89 = 15;
					} else {
						w89 = 32;
					}
				} else {
					if (hops < 5) {
						w89 = 97;
					} else {
						w89 = 84;
					}
				}
			}
		}
	} else {
		if (rel_time < 3244) {
			if (cons != 2) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w89 = 76;
						} else {
							w89 = 115;
						}
					} else {
						if (rel_time < 3187) {
							w89 = 47;
						} else {
							w89 = 82;
						}
					}
				} else {
					if (rel_time < 3187) {
						w89 = 43;
					} else {
						if (hops < 5) {
							w89 = 19;
						} else {
							w89 = -1;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w89 = -74;
					} else {
						w89 = -21;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w89 = 55;
						} else {
							w89 = 59;
						}
					} else {
						w89 = 11;
					}
				}
			}
		} else {
			if (cons != 1) {
				if (cons != 2) {
					if (rel_time < 5272) {
						if (rel_time < 4947) {
							w89 = -1;
						} else {
							w89 = 40;
						}
					} else {
						if (rel_time < 5317) {
							w89 = -87;
						} else {
							w89 = -1;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w89 = 63;
						} else {
							w89 = -2;
						}
					} else {
						if (hops < 4) {
							w89 = 130;
						} else {
							w89 = 91;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w89 = -55;
					} else {
						w89 = -51;
					}
				} else {
					if (hops < 4) {
						w89 = -77;
					} else {
						w89 = -86;
					}
				}
			}
		}
	}
	int w90;
	if (rel_time < 2016) {
		if (rel_time < 1873) {
			if (rel_time < 1730) {
				if (rel_time < 1644) {
					if (rel_time < 1615) {
						if (rel_time < 1587) {
							w90 = 1;
						} else {
							w90 = -70;
						}
					} else {
						if (hops < 4) {
							w90 = 31;
						} else {
							w90 = 119;
						}
					}
				} else {
					if (rel_time < 1672) {
						if (hops < 2) {
							w90 = -42;
						} else {
							w90 = -134;
						}
					} else {
						if (rel_time < 1702) {
							w90 = 38;
						} else {
							w90 = -32;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 1815) {
						if (hops < 4) {
							w90 = 134;
						} else {
							w90 = 33;
						}
					} else {
						if (rel_time < 1844) {
							w90 = -13;
						} else {
							w90 = 29;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w90 = -55;
						} else {
							w90 = -10;
						}
					} else {
						if (hops < 5) {
							w90 = -298;
						} else {
							w90 = 100;
						}
					}
				}
			}
		} else {
			if (cons != 2) {
				if (cons != 4) {
					if (rel_time < 1958) {
						if (rel_time < 1901) {
							w90 = -90;
						} else {
							w90 = -116;
						}
					} else {
						if (hops < 4) {
							w90 = -54;
						} else {
							w90 = -88;
						}
					}
				} else {
					if (hops < 2) {
						w90 = 45;
					} else {
						if (hops < 4) {
							w90 = -31;
						} else {
							w90 = -8;
						}
					}
				}
			} else {
				if (hops < 2) {
					w90 = 39;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w90 = 9;
						} else {
							w90 = -8;
						}
					} else {
						if (hops < 5) {
							w90 = 15;
						} else {
							w90 = 5;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2101) {
			if (cons != 2) {
				if (hops < 2) {
					if (rel_time < 2044) {
						w90 = 90;
					} else {
						w90 = 100;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 2044) {
							w90 = 3;
						} else {
							w90 = 63;
						}
					} else {
						if (hops < 5) {
							w90 = 95;
						} else {
							w90 = 56;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w90 = -37;
					} else {
						w90 = -24;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w90 = 4;
						} else {
							w90 = 9;
						}
					} else {
						w90 = -20;
					}
				}
			}
		} else {
			if (rel_time < 2243) {
				if (cons != 2) {
					if (rel_time < 2159) {
						if (rel_time < 2130) {
							w90 = 0;
						} else {
							w90 = 25;
						}
					} else {
						if (hops < 4) {
							w90 = -100;
						} else {
							w90 = -131;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w90 = 84;
						} else {
							w90 = 94;
						}
					} else {
						if (hops < 5) {
							w90 = 52;
						} else {
							w90 = 65;
						}
					}
				}
			} else {
				if (rel_time < 2444) {
					if (cons != 2) {
						if (cons != 3) {
							w90 = 19;
						} else {
							w90 = 98;
						}
					} else {
						if (hops < 4) {
							w90 = -76;
						} else {
							w90 = -9;
						}
					}
				} else {
					if (rel_time < 2472) {
						if (hops < 4) {
							w90 = -118;
						} else {
							w90 = -162;
						}
					} else {
						if (rel_time < 2501) {
							w90 = 49;
						} else {
							w90 = 0;
						}
					}
				}
			}
		}
	}
	int w91;
	if (rel_time < 1444) {
		if (rel_time < 1301) {
			if (rel_time < 1158) {
				if (rel_time < 1055) {
					if (rel_time < 1009) {
						if (rel_time < 964) {
							w91 = 4;
						} else {
							w91 = -66;
						}
					} else {
						if (hops < 5) {
							w91 = 52;
						} else {
							w91 = 169;
						}
					}
				} else {
					if (cons != 4) {
						if (hops < 4) {
							w91 = -56;
						} else {
							w91 = -20;
						}
					} else {
						if (hops < 3) {
							w91 = 22;
						} else {
							w91 = -1;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 1243) {
						if (hops < 3) {
							w91 = 29;
						} else {
							w91 = 69;
						}
					} else {
						if (hops < 5) {
							w91 = 12;
						} else {
							w91 = 44;
						}
					}
				} else {
					if (hops < 2) {
						w91 = -52;
					} else {
						if (hops < 3) {
							w91 = -5;
						} else {
							w91 = -39;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 2) {
					if (rel_time < 1386) {
						if (rel_time < 1329) {
							w91 = -61;
						} else {
							w91 = -68;
						}
					} else {
						if (rel_time < 1416) {
							w91 = 71;
						} else {
							w91 = 16;
						}
					}
				} else {
					w91 = 113;
				}
			} else {
				if (cons != 2) {
					if (rel_time < 1386) {
						if (hops < 3) {
							w91 = -50;
						} else {
							w91 = -103;
						}
					} else {
						if (hops < 4) {
							w91 = -57;
						} else {
							w91 = -30;
						}
					}
				} else {
					if (hops < 3) {
						w91 = 6;
					} else {
						if (hops < 4) {
							w91 = -36;
						} else {
							w91 = -10;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1473) {
			if (hops < 2) {
				w91 = 43;
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w91 = 94;
					} else {
						w91 = 123;
					}
				} else {
					if (hops < 5) {
						w91 = 3;
					} else {
						w91 = 158;
					}
				}
			}
		} else {
			if (rel_time < 1501) {
				if (hops < 2) {
					w91 = -38;
				} else {
					if (hops < 3) {
						w91 = -58;
					} else {
						if (hops < 5) {
							w91 = -37;
						} else {
							w91 = -54;
						}
					}
				}
			} else {
				if (rel_time < 1529) {
					if (hops < 5) {
						if (hops < 4) {
							w91 = 89;
						} else {
							w91 = 20;
						}
					} else {
						w91 = 185;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 9744) {
							w91 = -3;
						} else {
							w91 = 9;
						}
					} else {
						if (rel_time < 9536) {
							w91 = 5;
						} else {
							w91 = -11;
						}
					}
				}
			}
		}
	}
	int w92;
	if (rel_time < 8266) {
		if (rel_time < 8087) {
			if (prod != 1) {
				if (rel_time < 7791) {
					if (rel_time < 7691) {
						if (rel_time < 7318) {
							w92 = 0;
						} else {
							w92 = 48;
						}
					} else {
						if (rel_time < 7749) {
							w92 = -130;
						} else {
							w92 = -68;
						}
					}
				} else {
					if (prod != 4) {
						if (prod != 2) {
							w92 = 122;
						} else {
							w92 = 11;
						}
					} else {
						if (rel_time < 7879) {
							w92 = -188;
						} else {
							w92 = -67;
						}
					}
				}
			} else {
				if (rel_time < 7215) {
					if (rel_time < 6940) {
						if (rel_time < 6077) {
							w92 = 6;
						} else {
							w92 = -53;
						}
					} else {
						if (rel_time < 7171) {
							w92 = 245;
						} else {
							w92 = 111;
						}
					}
				} else {
					if (rel_time < 7503) {
						if (hops < 2) {
							w92 = -186;
						} else {
							w92 = -224;
						}
					} else {
						if (rel_time < 7791) {
							w92 = 93;
						} else {
							w92 = -105;
						}
					}
				}
			}
		} else {
			if (prod != 4) {
				if (prod != 2) {
					if (rel_time < 8168) {
						if (rel_time < 8126) {
							w92 = -116;
						} else {
							w92 = -323;
						}
					} else {
						if (hops < 2) {
							w92 = -110;
						} else {
							w92 = -76;
						}
					}
				} else {
					w92 = 192;
				}
			} else {
				if (rel_time < 8168) {
					if (hops < 2) {
						w92 = 76;
					} else {
						if (hops < 5) {
							w92 = 59;
						} else {
							w92 = -12;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w92 = 114;
						} else {
							w92 = 130;
						}
					} else {
						w92 = 107;
					}
				}
			}
		}
	} else {
		if (rel_time < 8443) {
			if (prod != 2) {
				if (prod != 0) {
					if (prod != 4) {
						if (rel_time < 8397) {
							w92 = 192;
						} else {
							w92 = 124;
						}
					} else {
						w92 = -209;
					}
				} else {
					if (hops < 2) {
						w92 = -132;
					} else {
						if (hops < 4) {
							w92 = -97;
						} else {
							w92 = -107;
						}
					}
				}
			} else {
				if (rel_time < 8353) {
					if (hops < 3) {
						if (hops < 2) {
							w92 = -144;
						} else {
							w92 = -122;
						}
					} else {
						w92 = -93;
					}
				} else {
					if (hops < 2) {
						w92 = -106;
					} else {
						if (hops < 5) {
							w92 = -87;
						} else {
							w92 = -104;
						}
					}
				}
			}
		} else {
			if (rel_time < 8599) {
				if (prod != 0) {
					if (hops < 4) {
						if (rel_time < 8465) {
							w92 = -68;
						} else {
							w92 = -97;
						}
					} else {
						if (rel_time < 8558) {
							w92 = -51;
						} else {
							w92 = 86;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w92 = 14;
						} else {
							w92 = -6;
						}
					} else {
						if (hops < 4) {
							w92 = 51;
						} else {
							w92 = 1;
						}
					}
				}
			} else {
				if (rel_time < 8897) {
					if (prod != 3) {
						if (prod != 0) {
							w92 = 76;
						} else {
							w92 = -26;
						}
					} else {
						if (rel_time < 8686) {
							w92 = -130;
						} else {
							w92 = -83;
						}
					}
				} else {
					if (rel_time < 8935) {
						if (prod != 1) {
							w92 = -102;
						} else {
							w92 = 350;
						}
					} else {
						if (rel_time < 8975) {
							w92 = 34;
						} else {
							w92 = 0;
						}
					}
				}
			}
		}
	}
	int w93;
	if (prod != 1) {
		if (rel_time < 6089) {
			if (rel_time < 5988) {
				if (prod != 4) {
					if (rel_time < 5798) {
						if (rel_time < 5557) {
							w93 = -1;
						} else {
							w93 = 89;
						}
					} else {
						if (prod != 2) {
							w93 = -138;
						} else {
							w93 = 59;
						}
					}
				} else {
					if (rel_time < 5702) {
						if (rel_time < 4284) {
							w93 = 63;
						} else {
							w93 = -32;
						}
					} else {
						if (rel_time < 5889) {
							w93 = 191;
						} else {
							w93 = 117;
						}
					}
				}
			} else {
				if (rel_time < 6077) {
					if (rel_time < 6033) {
						if (hops < 2) {
							w93 = -183;
						} else {
							w93 = -143;
						}
					} else {
						if (hops < 2) {
							w93 = -318;
						} else {
							w93 = -230;
						}
					}
				} else {
					if (hops < 2) {
						w93 = -75;
					} else {
						if (hops < 5) {
							w93 = -46;
						} else {
							w93 = -94;
						}
					}
				}
			}
		} else {
			if (rel_time < 6409) {
				if (prod != 4) {
					if (rel_time < 6364) {
						if (rel_time < 6132) {
							w93 = 89;
						} else {
							w93 = 233;
						}
					} else {
						if (prod != 2) {
							w93 = -339;
						} else {
							w93 = 103;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w93 = -165;
						} else {
							w93 = -198;
						}
					} else {
						if (rel_time < 6175) {
							w93 = -190;
						} else {
							w93 = -277;
						}
					}
				}
			} else {
				if (rel_time < 6651) {
					if (prod != 4) {
						if (hops < 5) {
							w93 = -74;
						} else {
							w93 = -250;
						}
					} else {
						if (rel_time < 6454) {
							w93 = 312;
						} else {
							w93 = 52;
						}
					}
				} else {
					if (rel_time < 6940) {
						if (prod != 4) {
							w93 = 64;
						} else {
							w93 = -52;
						}
					} else {
						if (rel_time < 7260) {
							w93 = -58;
						} else {
							w93 = 3;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3507) {
			if (hops < 2) {
				if (rel_time < 3462) {
					w93 = -35;
				} else {
					w93 = -30;
				}
			} else {
				if (rel_time < 3462) {
					if (hops < 3) {
						w93 = -75;
					} else {
						if (hops < 4) {
							w93 = -224;
						} else {
							w93 = -333;
						}
					}
				} else {
					if (hops < 3) {
						w93 = -74;
					} else {
						if (hops < 4) {
							w93 = -16;
						} else {
							w93 = -54;
						}
					}
				}
			}
		} else {
			if (rel_time < 4947) {
				if (rel_time < 4090) {
					if (rel_time < 3807) {
						if (rel_time < 3761) {
							w93 = 17;
						} else {
							w93 = 98;
						}
					} else {
						if (hops < 2) {
							w93 = -67;
						} else {
							w93 = -111;
						}
					}
				} else {
					if (rel_time < 4375) {
						if (hops < 5) {
							w93 = 135;
						} else {
							w93 = 47;
						}
					} else {
						if (rel_time < 4660) {
							w93 = -68;
						} else {
							w93 = 90;
						}
					}
				}
			} else {
				if (rel_time < 5226) {
					if (rel_time < 5181) {
						if (hops < 2) {
							w93 = -238;
						} else {
							w93 = -271;
						}
					} else {
						if (hops < 5) {
							w93 = -138;
						} else {
							w93 = -8;
						}
					}
				} else {
					if (rel_time < 5512) {
						if (hops < 2) {
							w93 = 88;
						} else {
							w93 = 114;
						}
					} else {
						if (rel_time < 5798) {
							w93 = -83;
						} else {
							w93 = -3;
						}
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32 + w33 + w34 + w35 + w36 + w37 + w38 + w39 + w40 + w41 + w42 + w43 + w44 + w45 + w46 + w47 + w48 + w49 + w50 + w51 + w52 + w53 + w54 + w55 + w56 + w57 + w58 + w59 + w60 + w61 + w62 + w63 + w64 + w65 + w66 + w67 + w68 + w69 + w70 + w71 + w72 + w73 + w74 + w75 + w76 + w77 + w78 + w79 + w80 + w81 + w82 + w83 + w84 + w85 + w86 + w87 + w88 + w89 + w90 + w91 + w92 + w93) >> 8;
}
