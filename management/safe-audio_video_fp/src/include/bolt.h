#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

float bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	float w0;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 65) {
				if (hops < 3) {
					w0 = -102.093185;
				} else {
					w0 = -96.323975;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1338) {
						if (rel_time < 969) {
							w0 = -71.103455;
						} else {
							w0 = -88.04663;
						}
					} else {
						if (hops < 2) {
							w0 = -71.27733;
						} else {
							w0 = -68.017876;
						}
					}
				} else {
					if (rel_time < 1338) {
						if (rel_time < 969) {
							w0 = -65.23628;
						} else {
							w0 = -82.046196;
						}
					} else {
						if (hops < 4) {
							w0 = -64.74449;
						} else {
							w0 = -61.211643;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 669) {
					if (hops < 3) {
						if (rel_time < 583) {
							w0 = 41.16328;
						} else {
							w0 = 46.261005;
						}
					} else {
						if (rel_time < 583) {
							w0 = 47.344025;
						} else {
							w0 = 52.27106;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11417) {
							w0 = 6.288279;
						} else {
							w0 = 67.4922;
						}
					} else {
						if (hops < 3) {
							w0 = -5.769432;
						} else {
							w0 = 0.24573274;
						}
					}
				}
			} else {
				if (rel_time < 422) {
					if (hops < 3) {
						if (hops < 2) {
							w0 = 28.384724;
						} else {
							w0 = 31.860056;
						}
					} else {
						if (hops < 4) {
							w0 = 35.59986;
						} else {
							w0 = 38.70116;
						}
					}
				} else {
					if (rel_time < 1805) {
						if (hops < 3) {
							w0 = -18.778599;
						} else {
							w0 = -10.231335;
						}
					} else {
						if (hops < 3) {
							w0 = -33.74805;
						} else {
							w0 = -27.82994;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 3) {
				w0 = 129.25163;
			} else {
				w0 = 135.27734;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1311) {
					if (hops < 2) {
						w0 = 90.259834;
					} else {
						w0 = 93.850784;
					}
				} else {
					if (rel_time < 11071) {
						if (hops < 2) {
							w0 = 82.4165;
						} else {
							w0 = 85.70228;
						}
					} else {
						w0 = 92.1504;
					}
				}
			} else {
				if (rel_time < 1311) {
					w0 = 98.542336;
				} else {
					if (rel_time < 11071) {
						if (hops < 4) {
							w0 = 89.59705;
						} else {
							w0 = 92.87046;
						}
					} else {
						w0 = 98.46919;
					}
				}
			}
		}
	}
	float w1;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 65) {
				if (hops < 2) {
					w1 = -53.010513;
				} else {
					if (hops < 4) {
						w1 = -49.27652;
					} else {
						w1 = -45.391666;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1338) {
						if (rel_time < 969) {
							w1 = -35.558804;
						} else {
							w1 = -44.040833;
						}
					} else {
						if (hops < 2) {
							w1 = -35.640602;
						} else {
							w1 = -34.010487;
						}
					}
				} else {
					if (rel_time < 1338) {
						if (rel_time < 969) {
							w1 = -32.628876;
						} else {
							w1 = -41.050068;
						}
					} else {
						if (hops < 4) {
							w1 = -32.374012;
						} else {
							w1 = -30.610855;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 669) {
					if (hops < 2) {
						if (rel_time < 583) {
							w1 = 18.68199;
						} else {
							w1 = 21.313368;
						}
					} else {
						if (hops < 4) {
							w1 = 24.174215;
						} else {
							w1 = 27.83489;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11417) {
							w1 = 3.1441877;
						} else {
							w1 = 33.754475;
						}
					} else {
						if (hops < 2) {
							w1 = -4.811073;
						} else {
							w1 = -0.52257484;
						}
					}
				}
			} else {
				if (rel_time < 422) {
					if (hops < 3) {
						if (hops < 2) {
							w1 = 14.20468;
						} else {
							w1 = 15.9417715;
						}
					} else {
						if (hops < 4) {
							w1 = 17.815332;
						} else {
							w1 = 19.402874;
						}
					}
				} else {
					if (rel_time < 1805) {
						if (rel_time < 852) {
							w1 = -12.72013;
						} else {
							w1 = -5.3022404;
						}
					} else {
						if (hops < 2) {
							w1 = -18.77107;
						} else {
							w1 = -14.549987;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 2) {
				w1 = 62.87127;
			} else {
				if (hops < 4) {
					w1 = 66.43539;
				} else {
					w1 = 70.23032;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1311) {
					if (hops < 2) {
						w1 = 45.149414;
					} else {
						w1 = 46.942894;
					}
				} else {
					if (rel_time < 11662) {
						if (hops < 2) {
							w1 = 41.389854;
						} else {
							w1 = 42.85314;
						}
					} else {
						w1 = 47.674362;
					}
				}
			} else {
				if (rel_time < 1311) {
					if (hops < 4) {
						w1 = 48.443825;
					} else {
						w1 = 51.62268;
					}
				} else {
					if (rel_time < 11071) {
						if (hops < 4) {
							w1 = 44.800995;
						} else {
							w1 = 46.44249;
						}
					} else {
						if (hops < 4) {
							w1 = 48.466545;
						} else {
							w1 = 51.4159;
						}
					}
				}
			}
		}
	}
	float w2;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 65) {
				if (hops < 2) {
					w2 = -26.528393;
				} else {
					if (hops < 4) {
						w2 = -24.648079;
					} else {
						w2 = -22.755562;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1338) {
						if (rel_time < 540) {
							w2 = -17.22319;
						} else {
							w2 = -22.944832;
						}
					} else {
						if (rel_time < 8667) {
							w2 = -17.948141;
						} else {
							w2 = -17.436798;
						}
					}
				} else {
					if (rel_time < 540) {
						if (hops < 4) {
							w2 = -14.214881;
						} else {
							w2 = -10.734967;
						}
					} else {
						if (rel_time < 1338) {
							w2 = -19.66018;
						} else {
							w2 = -16.46045;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 669) {
					if (rel_time < 583) {
						if (hops < 4) {
							w2 = 10.105682;
						} else {
							w2 = 12.367137;
						}
					} else {
						if (hops < 2) {
							w2 = 10.6613245;
						} else {
							w2 = 13.135843;
						}
					}
				} else {
					if (hops < 4) {
						if (size < 69) {
							w2 = 1.7129139;
						} else {
							w2 = -1.2819645;
						}
					} else {
						if (size < 69) {
							w2 = 8.696157;
						} else {
							w2 = 3.0560176;
						}
					}
				}
			} else {
				if (rel_time < 422) {
					if (hops < 3) {
						if (hops < 2) {
							w2 = 7.1085143;
						} else {
							w2 = 7.9767594;
						}
					} else {
						if (hops < 4) {
							w2 = 8.915383;
						} else {
							w2 = 9.727649;
						}
					}
				} else {
					if (rel_time < 1264) {
						if (rel_time < 852) {
							w2 = -6.36163;
						} else {
							w2 = 2.7405264;
						}
					} else {
						if (hops < 4) {
							w2 = -8.277719;
						} else {
							w2 = -4.020665;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 2) {
				w2 = 31.462776;
			} else {
				if (hops < 4) {
					w2 = 33.231117;
				} else {
					w2 = 35.20294;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1311) {
					if (hops < 2) {
						w2 = 22.58446;
					} else {
						w2 = 23.480206;
					}
				} else {
					if (rel_time < 11071) {
						if (hops < 2) {
							w2 = 20.516674;
						} else {
							w2 = 21.427565;
						}
					} else {
						w2 = 23.720814;
					}
				}
			} else {
				if (rel_time < 1311) {
					if (hops < 4) {
						w2 = 24.232567;
					} else {
						w2 = 25.843643;
					}
				} else {
					if (rel_time < 11071) {
						if (hops < 4) {
							w2 = 22.401714;
						} else {
							w2 = 23.224873;
						}
					} else {
						if (hops < 4) {
							w2 = 24.254599;
						} else {
							w2 = 25.772223;
						}
					}
				}
			}
		}
	}
	float w3;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 65) {
				if (hops < 2) {
					w3 = -13.275776;
				} else {
					if (hops < 4) {
						w3 = -12.328955;
					} else {
						w3 = -11.407725;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1338) {
						if (rel_time < 540) {
							w3 = -7.5854235;
						} else {
							w3 = -10.604677;
						}
					} else {
						if (hops < 3) {
							w3 = -8.838122;
						} else {
							w3 = -7.958112;
						}
					}
				} else {
					if (rel_time < 540) {
						w3 = -5.3816;
					} else {
						if (rel_time < 969) {
							w3 = -6.5597057;
						} else {
							w3 = -7.142626;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 767) {
					if (hops < 3) {
						if (cons != 5) {
							w3 = 5.7104464;
						} else {
							w3 = 4.664451;
						}
					} else {
						if (cons != 5) {
							w3 = 7.042001;
						} else {
							w3 = 5.9061623;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1194) {
							w3 = -11.423014;
						} else {
							w3 = -1.925102;
						}
					} else {
						if (size < 69) {
							w3 = 2.7334347;
						} else {
							w3 = -0.0041317656;
						}
					}
				}
			} else {
				if (rel_time < 422) {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 3.5573368;
						} else {
							w3 = 3.9913259;
						}
					} else {
						if (hops < 4) {
							w3 = 4.4615374;
						} else {
							w3 = 4.876963;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1805) {
							w3 = -6.3023057;
						} else {
							w3 = -5.24742;
						}
					} else {
						if (rel_time < 1264) {
							w3 = 1.2270288;
						} else {
							w3 = -3.3948271;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 3) {
				w3 = 16.072786;
			} else {
				w3 = 17.132448;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1311) {
					if (hops < 2) {
						w3 = 11.297101;
					} else {
						w3 = 11.744469;
					}
				} else {
					if (rel_time < 11071) {
						if (hops < 2) {
							w3 = 10.258897;
						} else {
							w3 = 10.714288;
						}
					} else {
						w3 = 11.865147;
					}
				}
			} else {
				if (rel_time < 1311) {
					if (hops < 4) {
						w3 = 12.121631;
					} else {
						w3 = 12.938002;
					}
				} else {
					if (rel_time < 11071) {
						if (hops < 4) {
							w3 = 11.201465;
						} else {
							w3 = 11.6142645;
						}
					} else {
						if (hops < 4) {
							w3 = 12.137986;
						} else {
							w3 = 12.918329;
						}
					}
				}
			}
		}
	}
	float w4;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 65) {
				if (hops < 3) {
					if (hops < 2) {
						w4 = -6.643674;
					} else {
						w4 = -6.3061094;
					}
				} else {
					w4 = -5.9298234;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1338) {
						if (rel_time < 853) {
							w4 = -4.9836364;
						} else {
							w4 = -7.216181;
						}
					} else {
						if (rel_time < 8056) {
							w4 = -4.574992;
						} else {
							w4 = -4.3111563;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 853) {
							w4 = -3.4004402;
						} else {
							w4 = -4.283151;
						}
					} else {
						if (rel_time < 540) {
							w4 = -2.697885;
						} else {
							w4 = -3.5566018;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 767) {
					if (hops < 2) {
						if (prod != 4) {
							w4 = 1.9227684;
						} else {
							w4 = 2.6051044;
						}
					} else {
						if (rel_time < 422) {
							w4 = 1.99713;
						} else {
							w4 = 2.9946506;
						}
					}
				} else {
					if (rel_time < 11747) {
						if (size < 69) {
							w4 = -2.0097923;
						} else {
							w4 = -0.6550567;
						}
					} else {
						if (size < 69) {
							w4 = 13.257299;
						} else {
							w4 = -0.6464261;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 1407) {
						if (rel_time < 767) {
							w4 = 3.092496;
						} else {
							w4 = 1.2699653;
						}
					} else {
						if (size < 69) {
							w4 = -1.33729;
						} else {
							w4 = 0.36461908;
						}
					}
				} else {
					if (rel_time < 11417) {
						if (rel_time < 1654) {
							w4 = -3.080289;
						} else {
							w4 = 3.1462314;
						}
					} else {
						w4 = 17.784567;
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 2) {
				w4 = 7.71551;
			} else {
				if (hops < 4) {
					w4 = 8.346323;
				} else {
					w4 = 9.100666;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1311) {
					if (rel_time < 669) {
						w4 = 5.5130486;
					} else {
						w4 = 5.846187;
					}
				} else {
					if (rel_time < 11071) {
						if (hops < 2) {
							w4 = 5.1297183;
						} else {
							w4 = 5.3573904;
						}
					} else {
						if (rel_time < 11662) {
							w4 = 5.7672615;
						} else {
							w4 = 6.075195;
						}
					}
				}
			} else {
				if (rel_time < 1311) {
					if (hops < 4) {
						w4 = 6.0634775;
					} else {
						w4 = 6.4771037;
					}
				} else {
					if (rel_time < 11071) {
						if (hops < 4) {
							w4 = 5.6010346;
						} else {
							w4 = 5.8080454;
						}
					} else {
						if (hops < 4) {
							w4 = 6.0743284;
						} else {
							w4 = 6.4753103;
						}
					}
				}
			}
		}
	}
	float w5;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1338) {
				if (rel_time < 969) {
					if (rel_time < 65) {
						if (hops < 3) {
							w5 = -3.2338517;
						} else {
							w5 = -2.9668677;
						}
					} else {
						if (hops < 2) {
							w5 = -2.4929028;
						} else {
							w5 = -1.8240815;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w5 = -3.3455756;
						} else {
							w5 = -4.1256666;
						}
					} else {
						w5 = -2.8023293;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 9278) {
						if (hops < 2) {
							w5 = -2.2791488;
						} else {
							w5 = -2.2465103;
						}
					} else {
						w5 = -2.0929878;
					}
				} else {
					if (rel_time < 8667) {
						if (rel_time < 8631) {
							w5 = -1.7064867;
						} else {
							w5 = -1.6208862;
						}
					} else {
						if (hops < 4) {
							w5 = -2.235565;
						} else {
							w5 = -1.8483291;
						}
					}
				}
			}
		} else {
			if (cons != 5) {
				if (hops < 4) {
					if (rel_time < 669) {
						if (rel_time < 422) {
							w5 = 0.8450364;
						} else {
							w5 = 1.5537947;
						}
					} else {
						if (prod != 3) {
							w5 = -1.1363355;
						} else {
							w5 = -0.13393337;
						}
					}
				} else {
					if (rel_time < 1264) {
						if (rel_time < 1196) {
							w5 = 1.2934836;
						} else {
							w5 = 10.601475;
						}
					} else {
						if (prod != 3) {
							w5 = 0.35309368;
						} else {
							w5 = 1.5080299;
						}
					}
				}
			} else {
				if (rel_time < 1654) {
					if (rel_time < 1407) {
						if (rel_time < 767) {
							w5 = 1.8024409;
						} else {
							w5 = -1.9345636;
						}
					} else {
						if (hops < 3) {
							w5 = -9.464422;
						} else {
							w5 = -4.9747276;
						}
					}
				} else {
					if (rel_time < 11747) {
						if (rel_time < 2257) {
							w5 = 2.7383215;
						} else {
							w5 = 0.47749275;
						}
					} else {
						if (rel_time < 12186) {
							w5 = 7.5156574;
						} else {
							w5 = 0.3495356;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 2) {
				w5 = 3.861084;
			} else {
				if (hops < 4) {
					w5 = 4.174851;
				} else {
					w5 = 4.561719;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1311) {
					if (hops < 2) {
						w5 = 2.8103085;
					} else {
						if (rel_time < 731) {
							w5 = 3.013921;
						} else {
							w5 = 2.8887346;
						}
					}
				} else {
					if (rel_time < 11051) {
						if (hops < 2) {
							w5 = 2.565007;
						} else {
							w5 = 2.6696436;
						}
					} else {
						if (rel_time < 11662) {
							w5 = 2.8488696;
						} else {
							w5 = 3.0398607;
						}
					}
				}
			} else {
				if (rel_time < 1311) {
					if (hops < 4) {
						w5 = 3.0330741;
					} else {
						w5 = 3.2426014;
					}
				} else {
					if (rel_time < 11071) {
						if (hops < 4) {
							w5 = 2.8006823;
						} else {
							w5 = 2.904478;
						}
					} else {
						if (hops < 4) {
							w5 = 3.0398314;
						} else {
							w5 = 3.2457638;
						}
					}
				}
			}
		}
	}
	float w6;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1338) {
				if (rel_time < 969) {
					if (rel_time < 65) {
						if (hops < 4) {
							w6 = -1.5970126;
						} else {
							w6 = -1.2822508;
						}
					} else {
						if (rel_time < 540) {
							w6 = -0.79312706;
						} else {
							w6 = -1.2214404;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w6 = -1.6734507;
						} else {
							w6 = -2.0646372;
						}
					} else {
						w6 = -1.4048629;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 9278) {
						if (rel_time < 1949) {
							w6 = -1.1685177;
						} else {
							w6 = -1.127606;
						}
					} else {
						w6 = -1.0466177;
					}
				} else {
					if (rel_time < 9246) {
						if (rel_time < 8667) {
							w6 = -0.8508769;
						} else {
							w6 = -0.96718967;
						}
					} else {
						if (hops < 4) {
							w6 = -1.1560616;
						} else {
							w6 = -0.92853045;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (size < 69) {
					if (rel_time < 11577) {
						if (rel_time < 1805) {
							w6 = -1.9093621;
						} else {
							w6 = -0.87237954;
						}
					} else {
						if (rel_time < 11747) {
							w6 = 12.964356;
						} else {
							w6 = 2.1908054;
						}
					}
				} else {
					if (prod != 4) {
						if (rel_time < 1407) {
							w6 = 0.5837786;
						} else {
							w6 = -0.27346966;
						}
					} else {
						if (rel_time < 655) {
							w6 = 0.52748173;
						} else {
							w6 = -0.9043374;
						}
					}
				}
			} else {
				if (cons != 5) {
					if (rel_time < 1264) {
						if (rel_time < 1196) {
							w6 = -0.0575391;
						} else {
							w6 = 3.9533744;
						}
					} else {
						if (prod != 3) {
							w6 = -0.33758938;
						} else {
							w6 = 0.14352086;
						}
					}
				} else {
					if (rel_time < 1654) {
						if (size < 69) {
							w6 = -2.0653615;
						} else {
							w6 = 1.6883781;
						}
					} else {
						if (rel_time < 11747) {
							w6 = 0.6067153;
						} else {
							w6 = 2.3335094;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 2) {
				w6 = 1.932209;
			} else {
				if (hops < 4) {
					w6 = 2.088261;
				} else {
					w6 = 2.2865677;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 11071) {
					if (rel_time < 1311) {
						if (rel_time < 669) {
							w6 = 1.3550525;
						} else {
							w6 = 1.4701803;
						}
					} else {
						if (rel_time < 2502) {
							w6 = 1.1703126;
						} else {
							w6 = 1.3256862;
						}
					}
				} else {
					w6 = 1.4947243;
				}
			} else {
				if (rel_time < 1311) {
					if (hops < 4) {
						if (rel_time < 731) {
							w6 = 1.47384;
						} else {
							w6 = 1.5592273;
						}
					} else {
						w6 = 1.6233231;
					}
				} else {
					if (rel_time < 11071) {
						if (rel_time < 1913) {
							w6 = 1.2977482;
						} else {
							w6 = 1.421718;
						}
					} else {
						if (hops < 4) {
							w6 = 1.5212414;
						} else {
							w6 = 1.6269268;
						}
					}
				}
			}
		}
	}
	float w7;
	if (size < 133) {
		if (hops < 4) {
			if (size < 37) {
				if (rel_time < 1338) {
					if (rel_time < 853) {
						if (rel_time < 65) {
							w7 = -0.7987235;
						} else {
							w7 = -0.48641574;
						}
					} else {
						if (hops < 3) {
							w7 = -0.72647685;
						} else {
							w7 = -1.0743937;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 9278) {
							w7 = -0.565421;
						} else {
							w7 = -0.52337176;
						}
					} else {
						if (rel_time < 9278) {
							w7 = -0.43390474;
						} else {
							w7 = -0.58412373;
						}
					}
				}
			} else {
				if (rel_time < 669) {
					if (prod != 0) {
						if (hops < 2) {
							w7 = 0.6471803;
						} else {
							w7 = 0.75400823;
						}
					} else {
						if (hops < 3) {
							w7 = 1.2667667;
						} else {
							w7 = 4.4185324;
						}
					}
				} else {
					if (rel_time < 1194) {
						if (rel_time < 852) {
							w7 = -1.0714885;
						} else {
							w7 = -3.8256662;
						}
					} else {
						if (prod != 0) {
							w7 = -0.18434799;
						} else {
							w7 = 0.21427464;
						}
					}
				}
			}
		} else {
			if (size < 37) {
				if (rel_time < 969) {
					if (rel_time < 65) {
						w7 = -0.6428094;
					} else {
						if (rel_time < 540) {
							w7 = -0.04731646;
						} else {
							w7 = 0.0038783827;
						}
					}
				} else {
					if (rel_time < 1338) {
						w7 = -0.7042883;
					} else {
						if (rel_time < 7446) {
							w7 = -0.39852712;
						} else {
							w7 = -0.46955174;
						}
					}
				}
			} else {
				if (rel_time < 669) {
					if (prod != 0) {
						if (rel_time < 422) {
							w7 = 0.28674176;
						} else {
							w7 = 2.4658;
						}
					} else {
						w7 = 4.921469;
					}
				} else {
					if (rel_time < 1196) {
						if (rel_time < 767) {
							w7 = 0.6496682;
						} else {
							w7 = -1.2700663;
						}
					} else {
						if (cons != 5) {
							w7 = 0.51636153;
						} else {
							w7 = 1.129331;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 3) {
				if (hops < 2) {
					w7 = 0.9669484;
				} else {
					w7 = 1.0139794;
				}
			} else {
				w7 = 1.0977578;
			}
		} else {
			if (hops < 2) {
				if (rel_time < 3723) {
					if (rel_time < 1280) {
						if (rel_time < 731) {
							w7 = 0.67642826;
						} else {
							w7 = 0.72701705;
						}
					} else {
						if (rel_time < 2503) {
							w7 = 0.4760438;
						} else {
							w7 = 0.5696018;
						}
					}
				} else {
					if (rel_time < 7389) {
						if (rel_time < 6165) {
							w7 = 0.6792183;
						} else {
							w7 = 0.71991533;
						}
					} else {
						if (rel_time < 11051) {
							w7 = 0.6150772;
						} else {
							w7 = 0.716177;
						}
					}
				}
			} else {
				if (rel_time < 2524) {
					if (rel_time < 1913) {
						if (hops < 4) {
							w7 = 0.70671;
						} else {
							w7 = 0.9210258;
						}
					} else {
						if (hops < 4) {
							w7 = 0.89286226;
						} else {
							w7 = 0.6183518;
						}
					}
				} else {
					if (rel_time < 8000) {
						if (hops < 4) {
							w7 = 0.6501803;
						} else {
							w7 = 0.7615803;
						}
					} else {
						if (rel_time < 11071) {
							w7 = 0.7119871;
						} else {
							w7 = 0.775403;
						}
					}
				}
			}
		}
	}
	float w8;
	if (size < 133) {
		if (hops < 3) {
			if (size < 69) {
				if (rel_time < 11577) {
					if (rel_time < 1654) {
						if (rel_time < 1338) {
							w8 = -0.31476295;
						} else {
							w8 = -3.7308655;
						}
					} else {
						if (rel_time < 2257) {
							w8 = 0.3419577;
						} else {
							w8 = -0.31954202;
						}
					}
				} else {
					if (rel_time < 11747) {
						if (hops < 2) {
							w8 = 6.5247884;
						} else {
							w8 = 13.482135;
						}
					} else {
						if (hops < 2) {
							w8 = 0.98933005;
						} else {
							w8 = 2.1925063;
						}
					}
				}
			} else {
				if (rel_time < 1407) {
					if (rel_time < 1279) {
						if (hops < 2) {
							w8 = -0.18359414;
						} else {
							w8 = 0.23187931;
						}
					} else {
						if (hops < 2) {
							w8 = 2.123554;
						} else {
							w8 = 2.3600638;
						}
					}
				} else {
					if (prod != 4) {
						if (rel_time < 12263) {
							w8 = -0.022903059;
						} else {
							w8 = -0.46245274;
						}
					} else {
						if (hops < 2) {
							w8 = -0.36298272;
						} else {
							w8 = -0.032855313;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 4) {
					if (rel_time < 1196) {
						if (rel_time < 767) {
							w8 = 0.018318227;
						} else {
							w8 = -1.5422513;
						}
					} else {
						if (rel_time < 1264) {
							w8 = 3.149232;
						} else {
							w8 = -0.08795029;
						}
					}
				} else {
					if (size < 37) {
						if (rel_time < 969) {
							w8 = -0.11488196;
						} else {
							w8 = -0.22101;
						}
					} else {
						if (rel_time < 1407) {
							w8 = 0.8318793;
						} else {
							w8 = 0.3079202;
						}
					}
				}
			} else {
				if (rel_time < 11417) {
					if (rel_time < 583) {
						if (hops < 4) {
							w8 = 2.2111619;
						} else {
							w8 = 2.4671369;
						}
					} else {
						if (rel_time < 1654) {
							w8 = -1.071285;
						} else {
							w8 = 0.7401975;
						}
					}
				} else {
					if (rel_time < 11747) {
						w8 = 7.4177094;
					} else {
						if (hops < 4) {
							w8 = 3.8993852;
						} else {
							w8 = 3.313219;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 4) {
				if (hops < 2) {
					w8 = 0.48390642;
				} else {
					w8 = 0.5185707;
				}
			} else {
				w8 = 0.5986288;
			}
		} else {
			if (hops < 2) {
				if (rel_time < 3723) {
					if (rel_time < 1280) {
						if (rel_time < 731) {
							w8 = 0.338494;
						} else {
							w8 = 0.36384413;
						}
					} else {
						if (rel_time < 1913) {
							w8 = 0.29221356;
						} else {
							w8 = 0.24097148;
						}
					}
				} else {
					if (rel_time < 9219) {
						if (rel_time < 3725) {
							w8 = 0.40749857;
						} else {
							w8 = 0.33782327;
						}
					} else {
						if (rel_time < 9830) {
							w8 = 0.2467815;
						} else {
							w8 = 0.3230314;
						}
					}
				}
			} else {
				if (rel_time < 3746) {
					if (hops < 4) {
						if (rel_time < 1892) {
							w8 = 0.3956631;
						} else {
							w8 = 0.35145858;
						}
					} else {
						if (rel_time < 731) {
							w8 = 0.30228814;
						} else {
							w8 = 0.44214818;
						}
					}
				} else {
					if (rel_time < 8000) {
						if (hops < 3) {
							w8 = 0.30104744;
						} else {
							w8 = 0.34470913;
						}
					} else {
						if (rel_time < 8020) {
							w8 = 0.42639804;
						} else {
							w8 = 0.35506478;
						}
					}
				}
			}
		}
	}
	float w9;
	if (size < 133) {
		if (hops < 2) {
			if (rel_time < 852) {
				if (prod != 1) {
					if (prod != 0) {
						if (rel_time < 540) {
							w9 = -0.32682216;
						} else {
							w9 = 0.059270307;
						}
					} else {
						w9 = 0.5875221;
					}
				} else {
					if (rel_time < 422) {
						w9 = 1.1853114;
					} else {
						w9 = 0.6342049;
					}
				}
			} else {
				if (rel_time < 1949) {
					if (prod != 0) {
						if (prod != 2) {
							w9 = -0.49734512;
						} else {
							w9 = 1.0526248;
						}
					} else {
						if (rel_time < 1194) {
							w9 = -0.7236025;
						} else {
							w9 = -2.630705;
						}
					}
				} else {
					if (rel_time < 2257) {
						if (size < 69) {
							w9 = 0.9110613;
						} else {
							w9 = 0.39392057;
						}
					} else {
						if (prod != 1) {
							w9 = -0.11846296;
						} else {
							w9 = -0.36279702;
						}
					}
				}
			}
		} else {
			if (cons != 5) {
				if (prod != 3) {
					if (rel_time < 1264) {
						if (rel_time < 1196) {
							w9 = -0.14119375;
						} else {
							w9 = 1.4141659;
						}
					} else {
						if (rel_time < 2417) {
							w9 = -0.23830342;
						} else {
							w9 = -0.09634547;
						}
					}
				} else {
					if (rel_time < 669) {
						if (hops < 4) {
							w9 = 0.43914515;
						} else {
							w9 = 0.77985567;
						}
					} else {
						if (hops < 4) {
							w9 = 0.094938055;
						} else {
							w9 = 0.25649953;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1194) {
						if (rel_time < 767) {
							w9 = 0.47063503;
						} else {
							w9 = -4.19367;
						}
					} else {
						if (rel_time < 1407) {
							w9 = 1.1809076;
						} else {
							w9 = 0.008783071;
						}
					}
				} else {
					if (rel_time < 12186) {
						if (rel_time < 11747) {
							w9 = 0.2685911;
						} else {
							w9 = 1.8807224;
						}
					} else {
						if (hops < 4) {
							w9 = -0.82373905;
						} else {
							w9 = -0.4439476;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 3) {
				w9 = 0.24555144;
			} else {
				w9 = 0.2797103;
			}
		} else {
			if (rel_time < 11071) {
				if (hops < 2) {
					if (rel_time < 2503) {
						if (rel_time < 1913) {
							w9 = 0.16569532;
						} else {
							w9 = 0.062063005;
						}
					} else {
						if (rel_time < 9219) {
							w9 = 0.17058557;
						} else {
							w9 = 0.13703512;
						}
					}
				} else {
					if (rel_time < 3746) {
						if (rel_time < 1913) {
							w9 = 0.17365587;
						} else {
							w9 = 0.20321946;
						}
					} else {
						if (rel_time < 6797) {
							w9 = 0.15940535;
						} else {
							w9 = 0.17359538;
						}
					}
				}
			} else {
				if (hops < 4) {
					w9 = 0.20157398;
				} else {
					w9 = 0.2516809;
				}
			}
		}
	}
	float w10;
	if (rel_time < 731) {
		if (prod != 6) {
			if (prod != 0) {
				if (prod != 4) {
					if (hops < 3) {
						if (rel_time < 422) {
							w10 = 0.5197141;
						} else {
							w10 = 0.15939003;
						}
					} else {
						if (rel_time < 422) {
							w10 = -0.06453922;
						} else {
							w10 = 0.24184296;
						}
					}
				} else {
					if (hops < 2) {
						w10 = 0.0027935035;
					} else {
						if (hops < 4) {
							w10 = 0.543777;
						} else {
							w10 = 0.9265031;
						}
					}
				}
			} else {
				if (hops < 2) {
					w10 = 0.29401156;
				} else {
					if (hops < 3) {
						w10 = 0.73586744;
					} else {
						if (hops < 4) {
							w10 = 0.9723229;
						} else {
							w10 = 1.1028004;
						}
					}
				}
			}
		} else {
			if (rel_time < 65) {
				if (hops < 3) {
					if (hops < 2) {
						w10 = -0.19188085;
					} else {
						w10 = -0.11479216;
					}
				} else {
					if (hops < 4) {
						w10 = -0.29216364;
					} else {
						w10 = -0.1945445;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (size < 37) {
							w10 = -0.1349355;
						} else {
							w10 = 0.103100404;
						}
					} else {
						if (size < 37) {
							w10 = 0.4412106;
						} else {
							w10 = 0.13085124;
						}
					}
				} else {
					if (size < 37) {
						if (hops < 4) {
							w10 = -0.34432292;
						} else {
							w10 = 0.10395677;
						}
					} else {
						if (rel_time < 336) {
							w10 = 0.13993935;
						} else {
							w10 = 0.09100282;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1194) {
			if (size < 37) {
				if (hops < 2) {
					w10 = -0.13933714;
				} else {
					if (rel_time < 853) {
						w10 = 0.1157268;
					} else {
						if (hops < 3) {
							w10 = 1.1284329;
						} else {
							w10 = 0.22990483;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 852) {
						if (rel_time < 767) {
							w10 = 0.023691269;
						} else {
							w10 = 0.31737182;
						}
					} else {
						w10 = -0.3620961;
					}
				} else {
					if (rel_time < 767) {
						if (hops < 3) {
							w10 = -0.2479536;
						} else {
							w10 = -0.18565655;
						}
					} else {
						if (rel_time < 852) {
							w10 = -1.2460196;
						} else {
							w10 = -0.99629307;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (size < 69) {
					if (rel_time < 1949) {
						if (prod != 0) {
							w10 = -0.46663567;
						} else {
							w10 = -1.3164941;
						}
					} else {
						if (rel_time < 11577) {
							w10 = -0.14794166;
						} else {
							w10 = 0.6618508;
						}
					}
				} else {
					if (prod != 4) {
						if (prod != 3) {
							w10 = 0.08906171;
						} else {
							w10 = -0.019917345;
						}
					} else {
						if (rel_time < 12186) {
							w10 = -0.12018121;
						} else {
							w10 = 0.24928239;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 1978) {
						if (prod != 2) {
							w10 = 0.04225659;
						} else {
							w10 = 0.83528167;
						}
					} else {
						if (rel_time < 12263) {
							w10 = -0.011723534;
						} else {
							w10 = -0.48091188;
						}
					}
				} else {
					if (rel_time < 1654) {
						if (hops < 4) {
							w10 = -1.2762505;
						} else {
							w10 = -1.7205966;
						}
					} else {
						if (rel_time < 2257) {
							w10 = 1.7005392;
						} else {
							w10 = 0.15899049;
						}
					}
				}
			}
		}
	}
	float w11;
	if (rel_time < 11747) {
		if (size < 69) {
			if (rel_time < 11577) {
				if (rel_time < 583) {
					if (size < 37) {
						if (hops < 3) {
							w11 = 0.007168421;
						} else {
							w11 = -0.12529176;
						}
					} else {
						if (rel_time < 422) {
							w11 = 0.14951114;
						} else {
							w11 = 0.3564788;
						}
					}
				} else {
					if (rel_time < 852) {
						if (hops < 3) {
							w11 = 0.1869726;
						} else {
							w11 = -1.3649131;
						}
					} else {
						if (hops < 3) {
							w11 = -0.08367415;
						} else {
							w11 = -0.00028628664;
						}
					}
				}
			} else {
				if (hops < 2) {
					w11 = 3.0710206;
				} else {
					if (hops < 3) {
						w11 = 7.058651;
					} else {
						w11 = 3.82193;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (size < 133) {
					if (rel_time < 3028) {
						if (prod != 2) {
							w11 = 0.028282752;
						} else {
							w11 = 0.16355985;
						}
					} else {
						if (prod != 3) {
							w11 = -0.058313105;
						} else {
							w11 = 0.03343401;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 336) {
							w11 = 0.068006106;
						} else {
							w11 = 0.035110734;
						}
					} else {
						if (rel_time < 1913) {
							w11 = 0.04498977;
						} else {
							w11 = 0.095421046;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (prod != 4) {
						if (rel_time < 1891) {
							w11 = -0.033533067;
						} else {
							w11 = 0.14407131;
						}
					} else {
						if (rel_time < 655) {
							w11 = 0.46446216;
						} else {
							w11 = -0.03822339;
						}
					}
				} else {
					if (rel_time < 767) {
						w11 = -0.13057277;
					} else {
						if (rel_time < 1978) {
							w11 = 0.90959746;
						} else {
							w11 = 0.30683726;
						}
					}
				}
			}
		}
	} else {
		if (size < 69) {
			if (hops < 2) {
				if (rel_time < 11752) {
					w11 = 0.20893739;
				} else {
					w11 = 0.24896929;
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w11 = 1.0132703;
					} else {
						w11 = 0.93236685;
					}
				} else {
					if (rel_time < 11752) {
						w11 = 0.6956104;
					} else {
						w11 = 0.5108428;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 12263) {
					if (rel_time < 12191) {
						if (rel_time < 12186) {
							w11 = 0.096036516;
						} else {
							w11 = 0.16263483;
						}
					} else {
						if (rel_time < 12257) {
							w11 = 0.091819435;
						} else {
							w11 = 0.1182211;
						}
					}
				} else {
					if (prod != 2) {
						w11 = 0.3663723;
					} else {
						w11 = 0.26656967;
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 12191) {
						if (hops < 3) {
							w11 = -0.24836436;
						} else {
							w11 = 0.028810138;
						}
					} else {
						if (hops < 3) {
							w11 = 0.20426558;
						} else {
							w11 = 0.008089123;
						}
					}
				} else {
					if (hops < 3) {
						w11 = -0.49757114;
					} else {
						if (hops < 4) {
							w11 = -0.17199501;
						} else {
							w11 = 0.0172934;
						}
					}
				}
			}
		}
	}
	float w12;
	if (rel_time < 11136) {
		if (size < 69) {
			if (rel_time < 10530) {
				if (rel_time < 583) {
					if (rel_time < 65) {
						if (hops < 2) {
							w12 = -0.0996;
						} else {
							w12 = -0.066571854;
						}
					} else {
						if (rel_time < 540) {
							w12 = 0.053987708;
						} else {
							w12 = 0.17826983;
						}
					}
				} else {
					if (rel_time < 1654) {
						if (prod != 0) {
							w12 = 0.05957111;
						} else {
							w12 = -0.51063585;
						}
					} else {
						if (rel_time < 2257) {
							w12 = 0.21656813;
						} else {
							w12 = -0.033717077;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 3) {
						if (rel_time < 10804) {
							w12 = -0.208316;
						} else {
							w12 = 0.021872882;
						}
					} else {
						if (rel_time < 10804) {
							w12 = -0.004692914;
						} else {
							w12 = -0.17811841;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w12 = -0.27118117;
						} else {
							w12 = -0.2971778;
						}
					} else {
						if (hops < 4) {
							w12 = -0.19284496;
						} else {
							w12 = -0.14869699;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (prod != 2) {
					if (hops < 2) {
						if (size < 133) {
							w12 = -0.032730836;
						} else {
							w12 = 0.017551688;
						}
					} else {
						if (rel_time < 669) {
							w12 = 0.13499843;
						} else {
							w12 = 0.026451852;
						}
					}
				} else {
					if (rel_time < 1407) {
						if (rel_time < 767) {
							w12 = -0.14952925;
						} else {
							w12 = 0.48920336;
						}
					} else {
						if (hops < 2) {
							w12 = 0.032134432;
						} else {
							w12 = -0.0861308;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 669) {
						if (rel_time < 336) {
							w12 = 0.107458726;
						} else {
							w12 = 0.26026097;
						}
					} else {
						if (rel_time < 1279) {
							w12 = -0.29765165;
						} else {
							w12 = 0.045878008;
						}
					}
				} else {
					if (rel_time < 767) {
						w12 = -0.0654639;
					} else {
						if (rel_time < 1407) {
							w12 = 0.6504547;
						} else {
							w12 = 0.1645906;
						}
					}
				}
			}
		}
	} else {
		if (size < 69) {
			if (rel_time < 11417) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w12 = 0.1270166;
						} else {
							w12 = 0.07379777;
						}
					} else {
						if (prod != 0) {
							w12 = 0.21472874;
						} else {
							w12 = 0.1238889;
						}
					}
				} else {
					if (prod != 0) {
						w12 = 0.18607275;
					} else {
						w12 = -0.3260958;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11747) {
						if (rel_time < 11577) {
							w12 = 0.26591602;
						} else {
							w12 = 1.5703964;
						}
					} else {
						w12 = 0.11203663;
					}
				} else {
					if (rel_time < 11577) {
						if (hops < 4) {
							w12 = 0.2253371;
						} else {
							w12 = 0.39437053;
						}
					} else {
						if (rel_time < 11747) {
							w12 = 3.156091;
						} else {
							w12 = 0.4661476;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (rel_time < 12263) {
					if (hops < 2) {
						if (rel_time < 11659) {
							w12 = -0.10397415;
						} else {
							w12 = 0.04999053;
						}
					} else {
						if (rel_time < 12186) {
							w12 = 0.077997126;
						} else {
							w12 = -0.0057678106;
						}
					}
				} else {
					if (hops < 2) {
						w12 = 0.18476827;
					} else {
						w12 = 0.30230948;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11747) {
						w12 = 0.018236727;
					} else {
						w12 = 0.13341622;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11723) {
							w12 = -0.08392216;
						} else {
							w12 = -0.17597863;
						}
					} else {
						if (rel_time < 11723) {
							w12 = 0.12841444;
						} else {
							w12 = 0.0009911605;
						}
					}
				}
			}
		}
	}
	float w13;
	if (size < 37) {
		if (hops < 3) {
			if (rel_time < 1949) {
				if (rel_time < 1338) {
					if (hops < 2) {
						if (rel_time < 65) {
							w13 = -0.049838774;
						} else {
							w13 = -0.08200785;
						}
					} else {
						if (rel_time < 65) {
							w13 = -0.02775866;
						} else {
							w13 = 0.11985701;
						}
					}
				} else {
					if (rel_time < 1914) {
						w13 = -0.28608817;
					} else {
						w13 = -0.25866705;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 2561) {
						if (rel_time < 2525) {
							w13 = 0.12402279;
						} else {
							w13 = 0.21715552;
						}
					} else {
						if (rel_time < 3171) {
							w13 = -0.07792067;
						} else {
							w13 = 0.08135159;
						}
					}
				} else {
					if (rel_time < 3136) {
						if (rel_time < 2525) {
							w13 = -0.02784795;
						} else {
							w13 = 0.10806652;
						}
					} else {
						if (rel_time < 7411) {
							w13 = -0.04613193;
						} else {
							w13 = 0.01311572;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 969) {
					if (rel_time < 540) {
						if (rel_time < 65) {
							w13 = -0.050355915;
						} else {
							w13 = -0.13671067;
						}
					} else {
						w13 = 0.11860932;
					}
				} else {
					if (rel_time < 1338) {
						if (rel_time < 1311) {
							w13 = -0.54210514;
						} else {
							w13 = -0.37403718;
						}
					} else {
						if (rel_time < 8635) {
							w13 = -0.10330418;
						} else {
							w13 = -0.15522149;
						}
					}
				}
			} else {
				if (rel_time < 540) {
					if (rel_time < 65) {
						w13 = -0.0018461528;
					} else {
						w13 = 0.08767282;
					}
				} else {
					if (rel_time < 1949) {
						if (rel_time < 969) {
							w13 = -0.01459704;
						} else {
							w13 = -0.14134419;
						}
					} else {
						if (rel_time < 2525) {
							w13 = 0.16736984;
						} else {
							w13 = -0.034609832;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (size < 69) {
				if (rel_time < 422) {
					w13 = 0.23185441;
				} else {
					if (rel_time < 8522) {
						if (rel_time < 7753) {
							w13 = -0.08970714;
						} else {
							w13 = -0.27021703;
						}
					} else {
						if (rel_time < 9132) {
							w13 = 0.12588602;
						} else {
							w13 = -0.02630458;
						}
					}
				}
			} else {
				if (rel_time < 3028) {
					if (rel_time < 2486) {
						if (prod != 3) {
							w13 = 0.047119647;
						} else {
							w13 = -0.10528857;
						}
					} else {
						if (prod != 3) {
							w13 = 0.010572048;
						} else {
							w13 = 0.3710796;
						}
					}
				} else {
					if (prod != 4) {
						if (rel_time < 3113) {
							w13 = -0.113332696;
						} else {
							w13 = 0.0077144415;
						}
					} else {
						if (rel_time < 10358) {
							w13 = -0.060243316;
						} else {
							w13 = 0.024825368;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 4) {
					if (rel_time < 1196) {
						if (rel_time < 767) {
							w13 = 0.02140737;
						} else {
							w13 = -0.3102384;
						}
					} else {
						if (rel_time < 1264) {
							w13 = 0.4933833;
						} else {
							w13 = -0.0014591434;
						}
					}
				} else {
					if (rel_time < 1264) {
						if (rel_time < 1196) {
							w13 = 0.037373424;
						} else {
							w13 = 1.9156021;
						}
					} else {
						if (rel_time < 1279) {
							w13 = -0.39621806;
						} else {
							w13 = 0.03420005;
						}
					}
				}
			} else {
				if (rel_time < 1654) {
					if (hops < 3) {
						if (rel_time < 583) {
							w13 = 0.10103597;
						} else {
							w13 = -0.8883043;
						}
					} else {
						if (rel_time < 1194) {
							w13 = 0.46288046;
						} else {
							w13 = -0.32808876;
						}
					}
				} else {
					if (rel_time < 2257) {
						if (hops < 3) {
							w13 = 0.51767886;
						} else {
							w13 = 0.96728677;
						}
					} else {
						if (hops < 4) {
							w13 = 0.10755661;
						} else {
							w13 = -0.20329638;
						}
					}
				}
			}
		}
	}
	float w14;
	if (prod != 1) {
		if (rel_time < 1949) {
			if (hops < 3) {
				if (prod != 0) {
					if (rel_time < 1195) {
						if (prod != 2) {
							w14 = 0.022105327;
						} else {
							w14 = -0.08569219;
						}
					} else {
						if (size < 133) {
							w14 = -0.08181811;
						} else {
							w14 = 0.010810441;
						}
					}
				} else {
					if (rel_time < 583) {
						if (hops < 2) {
							w14 = -0.07520912;
						} else {
							w14 = 0.050567813;
						}
					} else {
						if (hops < 2) {
							w14 = -0.078323595;
						} else {
							w14 = -0.4443205;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 1194) {
						if (rel_time < 969) {
							w14 = 0.030765897;
						} else {
							w14 = 0.4580934;
						}
					} else {
						if (size < 69) {
							w14 = -0.12998207;
						} else {
							w14 = -0.013465039;
						}
					}
				} else {
					if (rel_time < 767) {
						if (hops < 4) {
							w14 = -0.09775611;
						} else {
							w14 = -0.05143156;
						}
					} else {
						if (hops < 4) {
							w14 = 0.7830342;
						} else {
							w14 = 0.30064374;
						}
					}
				}
			}
		} else {
			if (rel_time < 2257) {
				if (size < 69) {
					if (hops < 4) {
						if (hops < 3) {
							w14 = 0.37641546;
						} else {
							w14 = 0.6243392;
						}
					} else {
						if (rel_time < 1978) {
							w14 = 0.13057764;
						} else {
							w14 = 0.04326514;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 0.031359766;
						} else {
							w14 = 0.15914851;
						}
					} else {
						if (hops < 4) {
							w14 = -0.10856789;
						} else {
							w14 = 0.16523021;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 3477) {
						if (prod != 0) {
							w14 = 0.0154727185;
						} else {
							w14 = -0.18983884;
						}
					} else {
						if (rel_time < 4088) {
							w14 = 0.07472374;
						} else {
							w14 = 0.008121273;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w14 = 0.012697681;
						} else {
							w14 = -0.050705094;
						}
					} else {
						if (rel_time < 8671) {
							w14 = 0.0826524;
						} else {
							w14 = -0.002522909;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8522) {
			if (rel_time < 6692) {
				if (rel_time < 6081) {
					if (hops < 3) {
						if (rel_time < 5470) {
							w14 = 0.031733654;
						} else {
							w14 = -0.16939828;
						}
					} else {
						if (rel_time < 2417) {
							w14 = -0.23532589;
						} else {
							w14 = 0.04560918;
						}
					}
				} else {
					if (rel_time < 6531) {
						if (hops < 3) {
							w14 = 0.048561327;
						} else {
							w14 = 0.13169822;
						}
					} else {
						if (hops < 4) {
							w14 = 0.18327297;
						} else {
							w14 = 0.28022772;
						}
					}
				}
			} else {
				if (rel_time < 8364) {
					if (hops < 2) {
						if (rel_time < 7303) {
							w14 = -0.14621504;
						} else {
							w14 = -0.076037064;
						}
					} else {
						if (hops < 3) {
							w14 = -0.22616597;
						} else {
							w14 = -0.11600576;
						}
					}
				} else {
					if (hops < 2) {
						w14 = -0.22036111;
					} else {
						if (hops < 3) {
							w14 = -0.35676074;
						} else {
							w14 = -0.26579574;
						}
					}
				}
			}
		} else {
			if (rel_time < 9132) {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 8976) {
							w14 = 0.16478603;
						} else {
							w14 = 0.19866881;
						}
					} else {
						if (rel_time < 8976) {
							w14 = 0.22279344;
						} else {
							w14 = 0.27285436;
						}
					}
				} else {
					w14 = 0.34565413;
				}
			} else {
				if (rel_time < 10966) {
					if (rel_time < 9743) {
						if (hops < 4) {
							w14 = 0.039663307;
						} else {
							w14 = 0.11997846;
						}
					} else {
						if (hops < 3) {
							w14 = -0.12560432;
						} else {
							w14 = -0.058158755;
						}
					}
				} else {
					if (rel_time < 11417) {
						if (hops < 3) {
							w14 = 0.049916483;
						} else {
							w14 = 0.10105158;
						}
					} else {
						if (hops < 4) {
							w14 = 0.12349084;
						} else {
							w14 = 0.1809339;
						}
					}
				}
			}
		}
	}
	float w15;
	if (rel_time < 11136) {
		if (size < 69) {
			if (rel_time < 10497) {
				if (prod != 0) {
					if (hops < 3) {
						if (rel_time < 969) {
							w15 = 0.054166734;
						} else {
							w15 = -0.007931659;
						}
					} else {
						if (rel_time < 852) {
							w15 = -0.15056728;
						} else {
							w15 = -0.023577075;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w15 = -0.028776966;
						} else {
							w15 = 0.13739711;
						}
					} else {
						if (rel_time < 1654) {
							w15 = -0.30315956;
						} else {
							w15 = -0.110138856;
						}
					}
				}
			} else {
				if (rel_time < 10966) {
					if (hops < 2) {
						if (rel_time < 10804) {
							w15 = -0.2177389;
						} else {
							w15 = -0.05981678;
						}
					} else {
						if (rel_time < 10804) {
							w15 = -0.03502924;
						} else {
							w15 = -0.07493728;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11074) {
							w15 = 0.013199889;
						} else {
							w15 = 0.04266281;
						}
					} else {
						if (hops < 4) {
							w15 = -0.055592056;
						} else {
							w15 = 0.04810823;
						}
					}
				}
			}
		} else {
			if (rel_time < 3028) {
				if (rel_time < 2418) {
					if (prod != 2) {
						if (rel_time < 731) {
							w15 = 0.026828941;
						} else {
							w15 = -0.02692262;
						}
					} else {
						if (rel_time < 767) {
							w15 = -0.042957906;
						} else {
							w15 = 0.08314005;
						}
					}
				} else {
					if (prod != 2) {
						if (size < 133) {
							w15 = 0.09643897;
						} else {
							w15 = 0.038306415;
						}
					} else {
						if (hops < 4) {
							w15 = 0.009013675;
						} else {
							w15 = 0.1355509;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (prod != 3) {
						if (prod != 4) {
							w15 = 0.004644101;
						} else {
							w15 = -0.026202027;
						}
					} else {
						if (rel_time < 3113) {
							w15 = -0.18350063;
						} else {
							w15 = -0.017806688;
						}
					}
				} else {
					if (prod != 2) {
						if (hops < 3) {
							w15 = 0.027364464;
						} else {
							w15 = 0.0011917591;
						}
					} else {
						if (rel_time < 3810) {
							w15 = 0.03147762;
						} else {
							w15 = -0.027546762;
						}
					}
				}
			}
		}
	} else {
		if (size < 69) {
			if (rel_time < 11577) {
				if (hops < 2) {
					if (rel_time < 11141) {
						w15 = 0.10721133;
					} else {
						if (rel_time < 11420) {
							w15 = 0.045068596;
						} else {
							w15 = 0.11421218;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 3) {
							w15 = 0.028936781;
						} else {
							w15 = 0.0716944;
						}
					} else {
						if (hops < 4) {
							w15 = -0.01026369;
						} else {
							w15 = -0.06612216;
						}
					}
				}
			} else {
				if (rel_time < 11747) {
					if (hops < 2) {
						w15 = 0.81194234;
					} else {
						if (hops < 3) {
							w15 = 2.1972942;
						} else {
							w15 = 0.6095403;
						}
					}
				} else {
					if (hops < 2) {
						w15 = 0.06514235;
					} else {
						if (hops < 3) {
							w15 = 0.21636878;
						} else {
							w15 = 0.17912054;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (rel_time < 12263) {
					if (hops < 2) {
						if (rel_time < 11577) {
							w15 = 0.20426841;
						} else {
							w15 = -0.027152065;
						}
					} else {
						if (rel_time < 12186) {
							w15 = 0.0332639;
						} else {
							w15 = -0.008660166;
						}
					}
				} else {
					if (hops < 2) {
						w15 = 0.08535952;
					} else {
						w15 = 0.14837153;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11747) {
						w15 = -0.0010639696;
					} else {
						w15 = 0.05657932;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11723) {
							w15 = 0.00151847;
						} else {
							w15 = -0.11823795;
						}
					} else {
						if (rel_time < 11747) {
							w15 = -0.028908487;
						} else {
							w15 = 0.018934496;
						}
					}
				}
			}
		}
	}
	float w16;
	if (rel_time < 1407) {
		if (hops < 3) {
			if (rel_time < 969) {
				if (rel_time < 853) {
					if (prod != 1) {
						if (prod != 6) {
							w16 = 0.012871883;
						} else {
							w16 = -0.030884176;
						}
					} else {
						if (rel_time < 422) {
							w16 = 0.056282878;
						} else {
							w16 = 0.12527357;
						}
					}
				} else {
					w16 = 0.4811808;
				}
			} else {
				if (hops < 2) {
					if (prod != 1) {
						if (rel_time < 1195) {
							w16 = 0.20424746;
						} else {
							w16 = 0.02244177;
						}
					} else {
						w16 = -0.28335726;
					}
				} else {
					if (rel_time < 1194) {
						w16 = -0.623574;
					} else {
						if (rel_time < 1338) {
							w16 = -0.027095063;
						} else {
							w16 = -0.152493;
						}
					}
				}
			}
		} else {
			if (rel_time < 969) {
				if (rel_time < 767) {
					if (prod != 4) {
						if (hops < 4) {
							w16 = -0.017853636;
						} else {
							w16 = 0.06416553;
						}
					} else {
						if (hops < 4) {
							w16 = 0.22009161;
						} else {
							w16 = 0.05568681;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 852) {
							w16 = -0.7036076;
						} else {
							w16 = 0.055767667;
						}
					} else {
						if (rel_time < 852) {
							w16 = 0.52137655;
						} else {
							w16 = -0.01091413;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (cons != 5) {
						if (size < 133) {
							w16 = -0.07547036;
						} else {
							w16 = 0.09768438;
						}
					} else {
						if (hops < 4) {
							w16 = 0.392982;
						} else {
							w16 = -0.14902903;
						}
					}
				} else {
					if (hops < 4) {
						w16 = 0.70164406;
					} else {
						w16 = 1.0895022;
					}
				}
			}
		}
	} else {
		if (rel_time < 3477) {
			if (prod != 1) {
				if (rel_time < 2589) {
					if (rel_time < 1950) {
						if (size < 69) {
							w16 = -0.049421914;
						} else {
							w16 = -0.008151526;
						}
					} else {
						if (prod != 0) {
							w16 = 0.010759131;
						} else {
							w16 = 0.20332754;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 3) {
							w16 = 0.017523544;
						} else {
							w16 = -0.041229904;
						}
					} else {
						if (hops < 2) {
							w16 = -0.15516748;
						} else {
							w16 = -0.078770794;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1654) {
						if (hops < 2) {
							w16 = 1.6562612;
						} else {
							w16 = 2.3561203;
						}
					} else {
						if (hops < 2) {
							w16 = -0.13618757;
						} else {
							w16 = 0.11469018;
						}
					}
				} else {
					if (rel_time < 2417) {
						if (rel_time < 1805) {
							w16 = -0.26223296;
						} else {
							w16 = -0.57553416;
						}
					} else {
						if (hops < 4) {
							w16 = 0.023053205;
						} else {
							w16 = 0.20899138;
						}
					}
				}
			}
		} else {
			if (rel_time < 4089) {
				if (prod != 0) {
					if (prod != 1) {
						if (hops < 2) {
							w16 = 0.032024216;
						} else {
							w16 = -0.022044417;
						}
					} else {
						if (hops < 3) {
							w16 = 0.019346785;
						} else {
							w16 = 0.11033854;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w16 = 0.073015146;
						} else {
							w16 = 0.3339193;
						}
					} else {
						if (rel_time < 3811) {
							w16 = -0.25013363;
						} else {
							w16 = -0.09710693;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 4861) {
						if (rel_time < 4420) {
							w16 = -0.011899785;
						} else {
							w16 = -0.060869865;
						}
					} else {
						if (rel_time < 5540) {
							w16 = 0.022642924;
						} else {
							w16 = -0.0039978996;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 4932) {
							w16 = 0.01988066;
						} else {
							w16 = -0.0066946577;
						}
					} else {
						if (hops < 4) {
							w16 = 0.035135806;
						} else {
							w16 = 0.076885745;
						}
					}
				}
			}
		}
	}
	float w17;
	if (rel_time < 11747) {
		if (hops < 2) {
			if (rel_time < 1806) {
				if (rel_time < 1407) {
					if (cons != 5) {
						if (rel_time < 1196) {
							w17 = -0.017952051;
						} else {
							w17 = -0.055237334;
						}
					} else {
						if (rel_time < 767) {
							w17 = 0.0043310886;
						} else {
							w17 = 0.12138181;
						}
					}
				} else {
					if (rel_time < 1805) {
						if (rel_time < 1654) {
							w17 = -0.21166857;
						} else {
							w17 = -0.31877056;
						}
					} else {
						w17 = -0.050221324;
					}
				}
			} else {
				if (rel_time < 1875) {
					w17 = 0.24804543;
				} else {
					if (size < 37) {
						if (rel_time < 1949) {
							w17 = -0.06392863;
						} else {
							w17 = 0.0329747;
						}
					} else {
						if (rel_time < 2418) {
							w17 = 0.059617314;
						} else {
							w17 = -0.011780915;
						}
					}
				}
			}
		} else {
			if (rel_time < 1805) {
				if (prod != 1) {
					if (rel_time < 1338) {
						if (cons != 5) {
							w17 = 0.0096710995;
						} else {
							w17 = -0.049082372;
						}
					} else {
						if (hops < 4) {
							w17 = 0.066627935;
						} else {
							w17 = -0.00499247;
						}
					}
				} else {
					if (rel_time < 852) {
						if (hops < 3) {
							w17 = 0.075493895;
						} else {
							w17 = -0.0791674;
						}
					} else {
						if (rel_time < 1654) {
							w17 = 0.20846978;
						} else {
							w17 = 0.078642294;
						}
					}
				}
			} else {
				if (rel_time < 2418) {
					if (rel_time < 1979) {
						if (hops < 3) {
							w17 = -0.044515718;
						} else {
							w17 = 0.02890262;
						}
					} else {
						if (hops < 3) {
							w17 = -0.050516732;
						} else {
							w17 = -0.2400782;
						}
					}
				} else {
					if (size < 37) {
						if (hops < 3) {
							w17 = -0.0052791974;
						} else {
							w17 = -0.03905775;
						}
					} else {
						if (rel_time < 2486) {
							w17 = 0.15788914;
						} else {
							w17 = 0.0047546276;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 12186) {
			if (hops < 2) {
				w17 = 0.03282671;
			} else {
				if (size < 69) {
					if (rel_time < 11752) {
						w17 = 0.10761874;
					} else {
						if (hops < 4) {
							w17 = 0.093310885;
						} else {
							w17 = 0.036698624;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w17 = 0.14104126;
						} else {
							w17 = 0.3112712;
						}
					} else {
						w17 = 0.01913871;
					}
				}
			}
		} else {
			if (rel_time < 12191) {
				if (hops < 4) {
					if (hops < 2) {
						w17 = 0.055647172;
					} else {
						if (hops < 3) {
							w17 = -0.19616173;
						} else {
							w17 = -0.085196614;
						}
					}
				} else {
					w17 = 0.21250659;
				}
			} else {
				if (rel_time < 12257) {
					if (hops < 3) {
						if (hops < 2) {
							w17 = 0.024427434;
						} else {
							w17 = 0.19281238;
						}
					} else {
						if (prod != 3) {
							w17 = -0.1491308;
						} else {
							w17 = 0.086163305;
						}
					}
				} else {
					if (hops < 2) {
						w17 = 0.03588477;
					} else {
						if (hops < 3) {
							w17 = -0.045507584;
						} else {
							w17 = -0.0018442173;
						}
					}
				}
			}
		}
	}
	float w18;
	if (rel_time < 336) {
		if (rel_time < 65) {
			if (hops < 3) {
				w18 = -0.040156335;
			} else {
				w18 = 0.034578554;
			}
		} else {
			if (hops < 2) {
				w18 = 0.0016571993;
			} else {
				if (hops < 4) {
					w18 = -0.058123223;
				} else {
					w18 = -0.030318527;
				}
			}
		}
	} else {
		if (rel_time < 655) {
			if (hops < 2) {
				if (rel_time < 422) {
					w18 = 0.053969264;
				} else {
					if (rel_time < 540) {
						w18 = -0.07078254;
					} else {
						w18 = -0.036833715;
					}
				}
			} else {
				if (rel_time < 583) {
					if (size < 37) {
						if (hops < 3) {
							w18 = 0.10283509;
						} else {
							w18 = 0.013382992;
						}
					} else {
						if (hops < 3) {
							w18 = 0.016265217;
						} else {
							w18 = 0.041239936;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w18 = 0.085029036;
						} else {
							w18 = 0.10532307;
						}
					} else {
						w18 = 0.023118708;
					}
				}
			}
		} else {
			if (size < 133) {
				if (rel_time < 8525) {
					if (rel_time < 8085) {
						if (rel_time < 7753) {
							w18 = -0.0009677107;
						} else {
							w18 = -0.017773492;
						}
					} else {
						if (prod != 1) {
							w18 = -0.056048155;
						} else {
							w18 = -0.13303879;
						}
					}
				} else {
					if (rel_time < 9206) {
						if (prod != 1) {
							w18 = 0.020565296;
						} else {
							w18 = 0.12586132;
						}
					} else {
						if (rel_time < 9241) {
							w18 = -0.087194964;
						} else {
							w18 = -0.0017726497;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 2503) {
						if (rel_time < 1892) {
							w18 = 0.017243993;
						} else {
							w18 = -0.07693457;
						}
					} else {
						if (rel_time < 2524) {
							w18 = 0.16166694;
						} else {
							w18 = 0.011673567;
						}
					}
				} else {
					if (rel_time < 1913) {
						if (rel_time < 1311) {
							w18 = 0.059090663;
						} else {
							w18 = 0.2456533;
						}
					} else {
						if (rel_time < 2524) {
							w18 = -0.15245193;
						} else {
							w18 = -0.025869321;
						}
					}
				}
			}
		}
	}
	float w19;
	if (rel_time < 11136) {
		if (rel_time < 10497) {
			if (rel_time < 9915) {
				if (rel_time < 9219) {
					if (rel_time < 8671) {
						if (rel_time < 7753) {
							w19 = 0.00052421016;
						} else {
							w19 = -0.01080168;
						}
					} else {
						if (hops < 2) {
							w19 = -0.006280146;
						} else {
							w19 = 0.047737136;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 1) {
							w19 = -0.0091180885;
						} else {
							w19 = 0.03333497;
						}
					} else {
						if (hops < 4) {
							w19 = -0.06937415;
						} else {
							w19 = 0.07077922;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 10358) {
						if (hops < 2) {
							w19 = -0.08663522;
						} else {
							w19 = -0.006275424;
						}
					} else {
						if (hops < 2) {
							w19 = 0.035698097;
						} else {
							w19 = 0.00019759292;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w19 = 0.04096578;
						} else {
							w19 = 0.1496362;
						}
					} else {
						if (rel_time < 9919) {
							w19 = -0.19208807;
						} else {
							w19 = -0.1344665;
						}
					}
				}
			}
		} else {
			if (rel_time < 10969) {
				if (hops < 2) {
					if (rel_time < 10966) {
						if (prod != 4) {
							w19 = -0.036297593;
						} else {
							w19 = 0.20148212;
						}
					} else {
						w19 = -0.36664715;
					}
				} else {
					if (rel_time < 10966) {
						if (rel_time < 10501) {
							w19 = -0.009499471;
						} else {
							w19 = -0.035376523;
						}
					} else {
						if (hops < 4) {
							w19 = 0.18641157;
						} else {
							w19 = -0.09589694;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (prod != 4) {
						if (prod != 6) {
							w19 = 0.028637003;
						} else {
							w19 = -0.011350922;
						}
					} else {
						w19 = 0.23239367;
					}
				} else {
					if (rel_time < 11112) {
						if (hops < 4) {
							w19 = -0.013493152;
						} else {
							w19 = 0.021921372;
						}
					} else {
						w19 = -0.0726927;
					}
				}
			}
		}
	} else {
		if (size < 69) {
			if (rel_time < 11417) {
				if (hops < 2) {
					if (rel_time < 11141) {
						w19 = 0.062444594;
					} else {
						w19 = 0.019988306;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w19 = -0.012363166;
						} else {
							w19 = 0.012859542;
						}
					} else {
						w19 = -0.027185194;
					}
				}
			} else {
				if (rel_time < 11577) {
					if (rel_time < 11420) {
						if (hops < 4) {
							w19 = 0.043382045;
						} else {
							w19 = 0.09008759;
						}
					} else {
						if (hops < 2) {
							w19 = 0.066053346;
						} else {
							w19 = 0.0042293468;
						}
					}
				} else {
					if (rel_time < 11747) {
						if (hops < 2) {
							w19 = 0.42378303;
						} else {
							w19 = 0.8482786;
						}
					} else {
						if (hops < 2) {
							w19 = 0.019101804;
						} else {
							w19 = 0.05102018;
						}
					}
				}
			}
		} else {
			if (rel_time < 12191) {
				if (rel_time < 12186) {
					if (hops < 2) {
						if (rel_time < 11582) {
							w19 = -0.11726563;
						} else {
							w19 = 0.007889494;
						}
					} else {
						if (rel_time < 11582) {
							w19 = 0.04169094;
						} else {
							w19 = -0.005956561;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w19 = 0.028755596;
						} else {
							w19 = -0.06751827;
						}
					} else {
						w19 = 0.10769901;
					}
				}
			} else {
				if (prod != 4) {
					if (hops < 2) {
						w19 = 0.02022511;
					} else {
						if (hops < 3) {
							w19 = -0.029495476;
						} else {
							w19 = 0.0065854467;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w19 = 0.0018554424;
						} else {
							w19 = 0.20207313;
						}
					} else {
						if (hops < 4) {
							w19 = -0.041112293;
						} else {
							w19 = -0.14905615;
						}
					}
				}
			}
		}
	}
	float w20;
	if (rel_time < 6151) {
		if (rel_time < 5615) {
			if (rel_time < 5031) {
				if (rel_time < 4966) {
					if (rel_time < 3171) {
						if (rel_time < 2589) {
							w20 = -7.515332e-05;
						} else {
							w20 = -0.022147369;
						}
					} else {
						if (hops < 3) {
							w20 = -0.0047835577;
						} else {
							w20 = 0.02154523;
						}
					}
				} else {
					if (rel_time < 4967) {
						if (hops < 3) {
							w20 = -0.13011594;
						} else {
							w20 = -0.024398603;
						}
					} else {
						if (rel_time < 5002) {
							w20 = -0.041403938;
						} else {
							w20 = -0.00921916;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 4) {
						if (size < 133) {
							w20 = 0.024223646;
						} else {
							w20 = -0.024892746;
						}
					} else {
						if (rel_time < 5543) {
							w20 = -0.13885988;
						} else {
							w20 = 0.011514113;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w20 = 0.08382917;
						} else {
							w20 = 0.043745656;
						}
					} else {
						if (rel_time < 5311) {
							w20 = 0.13293114;
						} else {
							w20 = 0.1863117;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (prod != 0) {
					if (rel_time < 6081) {
						if (prod != 4) {
							w20 = -0.020567603;
						} else {
							w20 = 0.1762018;
						}
					} else {
						if (rel_time < 6084) {
							w20 = -0.25037685;
						} else {
							w20 = 0.088601016;
						}
					}
				} else {
					if (rel_time < 5644) {
						w20 = -0.26818556;
					} else {
						w20 = -0.32590815;
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 3) {
						if (prod != 3) {
							w20 = 0.059572123;
						} else {
							w20 = -0.08587735;
						}
					} else {
						if (prod != 3) {
							w20 = -0.038241934;
						} else {
							w20 = 0.028782437;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 5922) {
							w20 = -0.09676972;
						} else {
							w20 = -0.14348902;
						}
					} else {
						if (rel_time < 5922) {
							w20 = -0.12016017;
						} else {
							w20 = -0.058458593;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6534) {
			if (rel_time < 6253) {
				if (hops < 2) {
					if (size < 37) {
						w20 = 0.07827343;
					} else {
						if (prod != 2) {
							w20 = 0.024210084;
						} else {
							w20 = -0.0039449786;
						}
					}
				} else {
					if (size < 37) {
						if (rel_time < 6190) {
							w20 = -0.071163975;
						} else {
							w20 = 0.03761865;
						}
					} else {
						if (prod != 2) {
							w20 = 0.02783318;
						} else {
							w20 = -0.0059068236;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 6531) {
							w20 = 0.05229187;
						} else {
							w20 = 0.121017545;
						}
					} else {
						if (prod != 0) {
							w20 = 0.060413644;
						} else {
							w20 = 0.24387991;
						}
					}
				} else {
					if (prod != 0) {
						w20 = 0.14520255;
					} else {
						w20 = -0.13783677;
					}
				}
			}
		} else {
			if (rel_time < 7303) {
				if (rel_time < 6864) {
					if (hops < 3) {
						if (rel_time < 6760) {
							w20 = 0.06612704;
						} else {
							w20 = -0.0101475315;
						}
					} else {
						if (prod != 4) {
							w20 = -0.0029218995;
						} else {
							w20 = -0.12832193;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w20 = -0.09269979;
						} else {
							w20 = -0.06492132;
						}
					} else {
						if (prod != 0) {
							w20 = -0.050424956;
						} else {
							w20 = 0.12311214;
						}
					}
				}
			} else {
				if (rel_time < 7753) {
					if (rel_time < 7371) {
						if (hops < 2) {
							w20 = 0.19294198;
						} else {
							w20 = 0.060971197;
						}
					} else {
						if (rel_time < 7448) {
							w20 = 0.010886933;
						} else {
							w20 = 0.053222068;
						}
					}
				} else {
					if (rel_time < 7911) {
						if (hops < 2) {
							w20 = -0.023875851;
						} else {
							w20 = -0.08486092;
						}
					} else {
						if (hops < 3) {
							w20 = 0.0038357868;
						} else {
							w20 = -0.0048998212;
						}
					}
				}
			}
		}
	}
	float w21;
	if (rel_time < 1950) {
		if (hops < 2) {
			if (rel_time < 1407) {
				if (cons != 5) {
					if (size < 69) {
						if (rel_time < 422) {
							w21 = 0.0040496415;
						} else {
							w21 = -0.03673542;
						}
					} else {
						if (rel_time < 731) {
							w21 = -0.0077641243;
						} else {
							w21 = 0.011399503;
						}
					}
				} else {
					if (rel_time < 583) {
						w21 = -0.013738402;
					} else {
						if (rel_time < 1194) {
							w21 = 0.044505265;
						} else {
							w21 = 0.07048442;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (rel_time < 1805) {
						if (rel_time < 1654) {
							w21 = -0.10567816;
						} else {
							w21 = -0.15927513;
						}
					} else {
						if (size < 37) {
							w21 = -0.031760678;
						} else {
							w21 = -0.055950984;
						}
					}
				} else {
					if (rel_time < 1806) {
						w21 = -0.024934089;
					} else {
						w21 = 0.124421045;
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 731) {
					if (hops < 4) {
						if (prod != 4) {
							w21 = -0.005636807;
						} else {
							w21 = 0.04698674;
						}
					} else {
						if (prod != 0) {
							w21 = 0.03405572;
						} else {
							w21 = 0.16280438;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1195) {
							w21 = -0.10865005;
						} else {
							w21 = -0.00393514;
						}
					} else {
						if (hops < 4) {
							w21 = 0.021286864;
						} else {
							w21 = -0.04087825;
						}
					}
				}
			} else {
				if (rel_time < 852) {
					if (hops < 3) {
						if (rel_time < 422) {
							w21 = -0.032257147;
						} else {
							w21 = 0.09963276;
						}
					} else {
						if (rel_time < 422) {
							w21 = 0.06389786;
						} else {
							w21 = -0.16368642;
						}
					}
				} else {
					if (rel_time < 1654) {
						if (hops < 3) {
							w21 = -0.09090665;
						} else {
							w21 = 0.27420756;
						}
					} else {
						if (hops < 3) {
							w21 = 0.28074294;
						} else {
							w21 = -0.18072999;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1979) {
			if (hops < 2) {
				if (size < 69) {
					if (rel_time < 1978) {
						w21 = 0.15938392;
					} else {
						w21 = 0.23015851;
					}
				} else {
					w21 = -0.080424845;
				}
			} else {
				if (size < 69) {
					if (hops < 3) {
						if (rel_time < 1978) {
							w21 = -0.05003522;
						} else {
							w21 = 0.010261959;
						}
					} else {
						if (hops < 4) {
							w21 = 0.1364075;
						} else {
							w21 = -0.034044996;
						}
					}
				} else {
					if (hops < 3) {
						w21 = -0.022844438;
					} else {
						w21 = -0.12673569;
					}
				}
			}
		} else {
			if (rel_time < 2417) {
				if (hops < 2) {
					if (rel_time < 2257) {
						w21 = -0.021832785;
					} else {
						w21 = 0.11584589;
					}
				} else {
					if (hops < 4) {
						if (prod != 0) {
							w21 = -0.090617165;
						} else {
							w21 = 0.19697015;
						}
					} else {
						if (rel_time < 2257) {
							w21 = 0.12148176;
						} else {
							w21 = -0.33887252;
						}
					}
				}
			} else {
				if (rel_time < 2524) {
					if (rel_time < 2418) {
						if (hops < 3) {
							w21 = 0.026763717;
						} else {
							w21 = -0.07735388;
						}
					} else {
						if (hops < 4) {
							w21 = 0.023280127;
						} else {
							w21 = 0.054569058;
						}
					}
				} else {
					if (rel_time < 2867) {
						if (rel_time < 2589) {
							w21 = 0.0042752945;
						} else {
							w21 = -0.0638595;
						}
					} else {
						if (rel_time < 2868) {
							w21 = 0.069341205;
						} else {
							w21 = 0.00042677243;
						}
					}
				}
			}
		}
	}
	float w22;
	if (prod != 4) {
		if (hops < 4) {
			if (prod != 0) {
				if (size < 133) {
					if (hops < 2) {
						if (rel_time < 1978) {
							w22 = -0.012358308;
						} else {
							w22 = 0.0069112494;
						}
					} else {
						if (rel_time < 540) {
							w22 = 0.019280676;
						} else {
							w22 = -0.007418741;
						}
					}
				} else {
					if (rel_time < 2502) {
						if (rel_time < 1892) {
							w22 = 0.003770017;
						} else {
							w22 = -0.1002735;
						}
					} else {
						if (rel_time < 3113) {
							w22 = 0.04455249;
						} else {
							w22 = 0.00580381;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 2867) {
						if (rel_time < 1654) {
							w22 = -0.019238703;
						} else {
							w22 = 0.06155199;
						}
					} else {
						if (rel_time < 3477) {
							w22 = -0.11865988;
						} else {
							w22 = -0.020751294;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1194) {
							w22 = -0.09042834;
						} else {
							w22 = 0.019075474;
						}
					} else {
						if (rel_time < 583) {
							w22 = -0.08045699;
						} else {
							w22 = 0.039311785;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 422) {
						if (rel_time < 65) {
							w22 = -0.01246876;
						} else {
							w22 = -0.14138876;
						}
					} else {
						if (rel_time < 1264) {
							w22 = 0.13250975;
						} else {
							w22 = 0.025003487;
						}
					}
				} else {
					if (rel_time < 1913) {
						if (rel_time < 1311) {
							w22 = 0.009884027;
						} else {
							w22 = 0.14327927;
						}
					} else {
						if (rel_time < 2524) {
							w22 = -0.10386764;
						} else {
							w22 = -0.014355946;
						}
					}
				}
			} else {
				if (rel_time < 2867) {
					if (rel_time < 583) {
						w22 = 0.08162541;
					} else {
						if (rel_time < 1408) {
							w22 = -0.2511522;
						} else {
							w22 = -0.09339944;
						}
					}
				} else {
					if (rel_time < 4698) {
						if (rel_time < 4088) {
							w22 = 0.03548837;
						} else {
							w22 = 0.19398336;
						}
					} else {
						if (rel_time < 8972) {
							w22 = -0.086846195;
						} else {
							w22 = -0.015155671;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 2486) {
				if (hops < 2) {
					if (rel_time < 2418) {
						if (rel_time < 655) {
							w22 = -0.01983078;
						} else {
							w22 = 0.033891745;
						}
					} else {
						w22 = -0.12193725;
					}
				} else {
					if (rel_time < 1875) {
						if (rel_time < 1806) {
							w22 = -0.02968843;
						} else {
							w22 = -0.16529205;
						}
					} else {
						if (rel_time < 2418) {
							w22 = 0.023287984;
						} else {
							w22 = 0.0772834;
						}
					}
				}
			} else {
				if (rel_time < 3028) {
					if (hops < 2) {
						w22 = 0.31273997;
					} else {
						w22 = 0.16090009;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 5470) {
							w22 = 0.041202348;
						} else {
							w22 = -0.019802777;
						}
					} else {
						if (rel_time < 4319) {
							w22 = -0.025949832;
						} else {
							w22 = 0.043683693;
						}
					}
				}
			}
		} else {
			if (rel_time < 1806) {
				if (hops < 4) {
					if (rel_time < 655) {
						w22 = 0.02897333;
					} else {
						if (rel_time < 1195) {
							w22 = 0.0937485;
						} else {
							w22 = 0.1476377;
						}
					}
				} else {
					if (rel_time < 655) {
						w22 = -0.0056447107;
					} else {
						if (rel_time < 1196) {
							w22 = -0.19681771;
						} else {
							w22 = -0.02225292;
						}
					}
				}
			} else {
				if (rel_time < 11577) {
					if (rel_time < 11036) {
						if (rel_time < 10966) {
							w22 = -0.049790427;
						} else {
							w22 = 0.013333239;
						}
					} else {
						w22 = -0.17291449;
					}
				} else {
					if (rel_time < 12186) {
						if (hops < 4) {
							w22 = 0.10645309;
						} else {
							w22 = -0.06478193;
						}
					} else {
						if (rel_time < 12191) {
							w22 = 0.006865612;
						} else {
							w22 = -0.034888122;
						}
					}
				}
			}
		}
	}
	float w23;
	if (rel_time < 336) {
		if (hops < 2) {
			w23 = -0.006005476;
		} else {
			if (rel_time < 65) {
				if (hops < 3) {
					w23 = -0.028368564;
				} else {
					w23 = 0.009268224;
				}
			} else {
				w23 = -0.029664285;
			}
		}
	} else {
		if (rel_time < 655) {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 422) {
						w23 = 0.030917985;
					} else {
						w23 = -0.0060620075;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 422) {
							w23 = -0.025761694;
						} else {
							w23 = 0.058047876;
						}
					} else {
						if (rel_time < 422) {
							w23 = 0.07778986;
						} else {
							w23 = -0.014780254;
						}
					}
				}
			} else {
				if (rel_time < 540) {
					if (rel_time < 422) {
						w23 = -0.070870645;
					} else {
						w23 = -0.023057958;
					}
				} else {
					if (rel_time < 583) {
						w23 = 0.040929385;
					} else {
						w23 = -0.0028444626;
					}
				}
			}
		} else {
			if (rel_time < 4392) {
				if (rel_time < 3746) {
					if (prod != 2) {
						if (rel_time < 3709) {
							w23 = -0.001926036;
						} else {
							w23 = -0.022740873;
						}
					} else {
						if (hops < 4) {
							w23 = 0.0069706747;
						} else {
							w23 = 0.055278935;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w23 = -0.0016247818;
						} else {
							w23 = 0.0667849;
						}
					} else {
						if (hops < 4) {
							w23 = 0.11735342;
						} else {
							w23 = -0.10298922;
						}
					}
				}
			} else {
				if (rel_time < 4861) {
					if (hops < 4) {
						if (prod != 0) {
							w23 = -0.031130308;
						} else {
							w23 = -0.06861264;
						}
					} else {
						if (prod != 0) {
							w23 = -0.011552533;
						} else {
							w23 = 0.09725041;
						}
					}
				} else {
					if (rel_time < 5470) {
						if (size < 37) {
							w23 = -0.027515376;
						} else {
							w23 = 0.016261548;
						}
					} else {
						if (rel_time < 6081) {
							w23 = -0.012855607;
						} else {
							w23 = 0.00056778174;
						}
					}
				}
			}
		}
	}
	float w24;
	if (rel_time < 9206) {
		if (rel_time < 8671) {
			if (rel_time < 8635) {
				if (rel_time < 8525) {
					if (rel_time < 8085) {
						if (rel_time < 8000) {
							w24 = 0.00026537143;
						} else {
							w24 = 0.019779736;
						}
					} else {
						if (hops < 2) {
							w24 = -0.0799465;
						} else {
							w24 = -0.022405226;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 4) {
							w24 = 0.0561321;
						} else {
							w24 = 0.38346002;
						}
					} else {
						if (rel_time < 8592) {
							w24 = -0.119293235;
						} else {
							w24 = -0.0003622415;
						}
					}
				}
			} else {
				if (rel_time < 8667) {
					if (hops < 4) {
						w24 = -0.053662475;
					} else {
						if (size < 37) {
							w24 = 0.075242266;
						} else {
							w24 = -0.032454375;
						}
					}
				} else {
					if (hops < 4) {
						w24 = -0.018171;
					} else {
						w24 = 0.020008212;
					}
				}
			}
		} else {
			if (prod != 1) {
				if (prod != 2) {
					if (hops < 4) {
						if (prod != 4) {
							w24 = 0.023485452;
						} else {
							w24 = -0.008846581;
						}
					} else {
						if (rel_time < 9136) {
							w24 = -0.13403359;
						} else {
							w24 = 0.08878532;
						}
					}
				} else {
					if (hops < 2) {
						w24 = 0.1771793;
					} else {
						w24 = 0.06675293;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 8976) {
						w24 = 0.033150747;
					} else {
						if (hops < 3) {
							w24 = 0.044381246;
						} else {
							w24 = 0.07991432;
						}
					}
				} else {
					if (rel_time < 8976) {
						w24 = 0.070128806;
					} else {
						w24 = 0.12669818;
					}
				}
			}
		}
	} else {
		if (rel_time < 9583) {
			if (hops < 2) {
				if (prod != 3) {
					if (rel_time < 9246) {
						w24 = 0.022289142;
					} else {
						if (rel_time < 9278) {
							w24 = -0.044153955;
						} else {
							w24 = 0.017700242;
						}
					}
				} else {
					w24 = -0.14561242;
				}
			} else {
				if (rel_time < 9307) {
					if (hops < 3) {
						if (rel_time < 9241) {
							w24 = -0.06435255;
						} else {
							w24 = -0.019443301;
						}
					} else {
						if (rel_time < 9222) {
							w24 = 0.07497282;
						} else {
							w24 = -0.01811847;
						}
					}
				} else {
					if (hops < 3) {
						w24 = -0.03728219;
					} else {
						if (hops < 4) {
							w24 = -0.1238299;
						} else {
							w24 = 0.0038218275;
						}
					}
				}
			}
		} else {
			if (rel_time < 10354) {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 2) {
							w24 = 0.015896475;
						} else {
							w24 = -0.005015263;
						}
					} else {
						if (rel_time < 9830) {
							w24 = -0.024651378;
						} else {
							w24 = 0.039631743;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w24 = 0.034260582;
						} else {
							w24 = 0.08348172;
						}
					} else {
						w24 = -0.078918934;
					}
				}
			} else {
				if (rel_time < 10358) {
					if (hops < 2) {
						w24 = -0.2760365;
					} else {
						if (hops < 3) {
							w24 = 0.1071663;
						} else {
							w24 = -0.05080599;
						}
					}
				} else {
					if (rel_time < 11074) {
						if (prod != 0) {
							w24 = -0.0032609927;
						} else {
							w24 = -0.029065015;
						}
					} else {
						if (size < 69) {
							w24 = 0.011398257;
						} else {
							w24 = -0.002632771;
						}
					}
				}
			}
		}
	}
	float w25;
	if (rel_time < 6762) {
		if (rel_time < 6253) {
			if (rel_time < 5615) {
				if (rel_time < 5578) {
					if (rel_time < 5031) {
						if (rel_time < 4392) {
							w25 = 0.0009915587;
						} else {
							w25 = -0.009501481;
						}
					} else {
						if (hops < 2) {
							w25 = -0.02036889;
						} else {
							w25 = 0.016942084;
						}
					}
				} else {
					if (rel_time < 5613) {
						if (hops < 2) {
							w25 = 0.02660535;
						} else {
							w25 = 0.05294105;
						}
					} else {
						if (hops < 2) {
							w25 = -0.0132227;
						} else {
							w25 = 0.016643755;
						}
					}
				}
			} else {
				if (rel_time < 6081) {
					if (hops < 4) {
						if (size < 69) {
							w25 = -0.042488985;
						} else {
							w25 = -0.0041305977;
						}
					} else {
						if (prod != 0) {
							w25 = -0.03807285;
						} else {
							w25 = 0.146388;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 6226) {
							w25 = 0.0034632413;
						} else {
							w25 = -0.023354277;
						}
					} else {
						if (hops < 4) {
							w25 = 0.064241365;
						} else {
							w25 = -0.24582699;
						}
					}
				}
			}
		} else {
			if (size < 69) {
				if (rel_time < 6531) {
					if (hops < 3) {
						if (prod != 0) {
							w25 = 0.005668629;
						} else {
							w25 = 0.032809746;
						}
					} else {
						if (hops < 4) {
							w25 = 0.0818721;
						} else {
							w25 = -0.0064628306;
						}
					}
				} else {
					if (hops < 2) {
						w25 = 0.034652807;
					} else {
						if (hops < 3) {
							w25 = 0.080253445;
						} else {
							w25 = 0.04763202;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 6692) {
							w25 = 0.051069252;
						} else {
							w25 = -0.0002648972;
						}
					} else {
						if (rel_time < 6760) {
							w25 = -0.08373875;
						} else {
							w25 = 0.06257491;
						}
					}
				} else {
					if (rel_time < 6692) {
						w25 = -0.059208103;
					} else {
						w25 = 0.14810757;
					}
				}
			}
		}
	} else {
		if (rel_time < 7303) {
			if (hops < 4) {
				if (prod != 0) {
					if (rel_time < 6864) {
						if (rel_time < 6800) {
							w25 = -0.017963653;
						} else {
							w25 = 0.011160708;
						}
					} else {
						if (hops < 3) {
							w25 = -0.043412983;
						} else {
							w25 = -0.0063570673;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 6864) {
							w25 = -0.077236734;
						} else {
							w25 = -0.029668469;
						}
					} else {
						w25 = -0.09604401;
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 6837) {
						if (rel_time < 6834) {
							w25 = 0.01153078;
						} else {
							w25 = 0.06534218;
						}
					} else {
						if (rel_time < 7145) {
							w25 = -0.008086009;
						} else {
							w25 = -0.048056617;
						}
					}
				} else {
					w25 = 0.10855055;
				}
			}
		} else {
			if (rel_time < 7386) {
				if (hops < 2) {
					if (size < 133) {
						if (rel_time < 7372) {
							w25 = 0.06704939;
						} else {
							w25 = 0.16257876;
						}
					} else {
						w25 = -0.22768703;
					}
				} else {
					if (rel_time < 7371) {
						w25 = 0.034302436;
					} else {
						if (rel_time < 7372) {
							w25 = -0.0809515;
						} else {
							w25 = 0.010916825;
						}
					}
				}
			} else {
				if (rel_time < 7753) {
					if (hops < 4) {
						if (prod != 0) {
							w25 = -0.0031334164;
						} else {
							w25 = 0.06526527;
						}
					} else {
						if (prod != 0) {
							w25 = 0.026132487;
						} else {
							w25 = -0.27476665;
						}
					}
				} else {
					if (rel_time < 7911) {
						if (hops < 3) {
							w25 = -0.05558934;
						} else {
							w25 = 0.0019726942;
						}
					} else {
						if (hops < 2) {
							w25 = -0.0042994116;
						} else {
							w25 = 0.0010329597;
						}
					}
				}
			}
		}
	}
	float w26;
	if (rel_time < 336) {
		w26 = -0.0083011845;
	} else {
		if (rel_time < 669) {
			if (hops < 3) {
				if (prod != 0) {
					if (prod != 3) {
						if (rel_time < 655) {
							w26 = 0.0007776403;
						} else {
							w26 = -0.019613856;
						}
					} else {
						w26 = 0.034790285;
					}
				} else {
					if (hops < 2) {
						w26 = 0.005135792;
					} else {
						w26 = 0.06776663;
					}
				}
			} else {
				if (rel_time < 422) {
					if (hops < 4) {
						w26 = 0.038303785;
					} else {
						w26 = -0.036144193;
					}
				} else {
					if (prod != 4) {
						if (hops < 4) {
							w26 = -0.027753698;
						} else {
							w26 = -0.00044048906;
						}
					} else {
						w26 = 0.015486686;
					}
				}
			}
		} else {
			if (rel_time < 1279) {
				if (rel_time < 1264) {
					if (hops < 3) {
						if (rel_time < 969) {
							w26 = 0.022886233;
						} else {
							w26 = -0.058694705;
						}
					} else {
						if (rel_time < 969) {
							w26 = -0.031504788;
						} else {
							w26 = 0.0991207;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w26 = -0.034682024;
						} else {
							w26 = -0.008052718;
						}
					} else {
						w26 = -0.116761066;
					}
				}
			} else {
				if (rel_time < 1654) {
					if (prod != 1) {
						if (size < 69) {
							w26 = -0.0021265096;
						} else {
							w26 = 0.023413649;
						}
					} else {
						if (hops < 3) {
							w26 = 1.1121306;
						} else {
							w26 = -0.2039022;
						}
					}
				} else {
					if (rel_time < 1875) {
						if (hops < 3) {
							w26 = 0.007361529;
						} else {
							w26 = -0.06699551;
						}
					} else {
						if (rel_time < 1892) {
							w26 = 0.020526897;
						} else {
							w26 = -0.00012704164;
						}
					}
				}
			}
		}
	}
	float w27;
	if (prod != 2) {
		if (rel_time < 12263) {
			if (rel_time < 3477) {
				if (rel_time < 2589) {
					if (hops < 3) {
						if (rel_time < 1978) {
							w27 = 0.0011027454;
						} else {
							w27 = 0.022275312;
						}
					} else {
						if (rel_time < 1264) {
							w27 = 0.005722862;
						} else {
							w27 = -0.017061438;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 2867) {
							w27 = -0.0447646;
						} else {
							w27 = -0.017625464;
						}
					} else {
						if (rel_time < 3113) {
							w27 = 0.0073064268;
						} else {
							w27 = -0.01618736;
						}
					}
				}
			} else {
				if (rel_time < 3638) {
					if (hops < 2) {
						if (rel_time < 3479) {
							w27 = 0.07823316;
						} else {
							w27 = 0.1406217;
						}
					} else {
						if (hops < 3) {
							w27 = -0.03689267;
						} else {
							w27 = 0.05126393;
						}
					}
				} else {
					if (rel_time < 4088) {
						if (hops < 3) {
							w27 = -0.012137867;
						} else {
							w27 = 0.041085728;
						}
					} else {
						if (rel_time < 4319) {
							w27 = -0.015267174;
						} else {
							w27 = 0.0008726768;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w27 = 0.017110543;
			} else {
				w27 = 0.094432734;
			}
		}
	} else {
		if (hops < 4) {
			if (hops < 2) {
				if (rel_time < 6837) {
					if (rel_time < 1407) {
						if (rel_time < 767) {
							w27 = 0.0056406967;
						} else {
							w27 = 0.025632411;
						}
					} else {
						if (rel_time < 2562) {
							w27 = -0.030064203;
						} else {
							w27 = -0.0020669987;
						}
					}
				} else {
					if (rel_time < 6864) {
						w27 = 0.041750636;
					} else {
						if (rel_time < 8056) {
							w27 = -0.0027464177;
						} else {
							w27 = 0.014125849;
						}
					}
				}
			} else {
				if (rel_time < 5615) {
					if (rel_time < 2561) {
						if (hops < 3) {
							w27 = -0.024385061;
						} else {
							w27 = 0.00044510578;
						}
					} else {
						if (rel_time < 3199) {
							w27 = 0.023550384;
						} else {
							w27 = -0.0034118746;
						}
					}
				} else {
					if (rel_time < 5642) {
						if (hops < 3) {
							w27 = -0.050318778;
						} else {
							w27 = -0.015518088;
						}
					} else {
						if (rel_time < 6226) {
							w27 = 0.00671473;
						} else {
							w27 = -0.013711488;
						}
					}
				}
			}
		} else {
			if (rel_time < 767) {
				w27 = -0.06978623;
			} else {
				if (rel_time < 1407) {
					w27 = 0.16273184;
				} else {
					if (rel_time < 12332) {
						if (rel_time < 1949) {
							w27 = -0.25453186;
						} else {
							w27 = 0.015615174;
						}
					} else {
						w27 = -0.07560714;
					}
				}
			}
		}
	}
	return (687.4313 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27);
}
