#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 3528) {
				if (hops < 3) {
					if (rel_time < 1340) {
						if (cons != 2) {
							w0 = -20593;
						} else {
							w0 = -22974;
						}
					} else {
						if (hops < 2) {
							w0 = -24251;
						} else {
							w0 = -23354;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1340) {
							w0 = -19985;
						} else {
							w0 = -22461;
						}
					} else {
						if (rel_time < 1340) {
							w0 = -18896;
						} else {
							w0 = -21343;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (hops < 3) {
						if (hops < 2) {
							w0 = -19376;
						} else {
							w0 = -18489;
						}
					} else {
						if (hops < 4) {
							w0 = -17571;
						} else {
							w0 = -16454;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w0 = -15278;
						} else {
							w0 = -14381;
						}
					} else {
						if (hops < 4) {
							w0 = -13478;
						} else {
							w0 = -12367;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1250) {
						w0 = -28425;
					} else {
						if (rel_time < 3356) {
							w0 = -27071;
						} else {
							w0 = -25740;
						}
					}
				} else {
					if (rel_time < 1250) {
						w0 = -27550;
					} else {
						if (rel_time < 3356) {
							w0 = -26178;
						} else {
							w0 = -24865;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 3356) {
						if (rel_time < 1250) {
							w0 = -26587;
						} else {
							w0 = -25276;
						}
					} else {
						w0 = -23904;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 3356) {
							w0 = -24472;
						} else {
							w0 = -23015;
						}
					} else {
						w0 = -23482;
					}
				}
			}
		}
	} else {
		if (rel_time < 403) {
			if (rel_time < 69) {
				if (hops < 3) {
					if (hops < 2) {
						w0 = 17065;
					} else {
						w0 = 17956;
					}
				} else {
					if (hops < 4) {
						w0 = 18858;
					} else {
						w0 = 20057;
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 321) {
						if (hops < 3) {
							w0 = 36529;
						} else {
							w0 = 38445;
						}
					} else {
						if (hops < 3) {
							w0 = 32601;
						} else {
							w0 = 34543;
						}
					}
				} else {
					if (hops < 3) {
						w0 = 30282;
					} else {
						w0 = 32237;
					}
				}
			}
		} else {
			if (rel_time < 3952) {
				if (rel_time < 3681) {
					if (rel_time < 743) {
						if (hops < 3) {
							w0 = 15339;
						} else {
							w0 = 17263;
						}
					} else {
						if (rel_time < 993) {
							w0 = 11550;
						} else {
							w0 = 8833;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 2) {
							w0 = -1293;
						} else {
							w0 = 1355;
						}
					} else {
						if (hops < 3) {
							w0 = 9927;
						} else {
							w0 = 11821;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11113) {
							w0 = 11497;
						} else {
							w0 = 12894;
						}
					} else {
						if (rel_time < 11113) {
							w0 = 12449;
						} else {
							w0 = 13851;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11113) {
							w0 = 13306;
						} else {
							w0 = 14730;
						}
					} else {
						if (hops < 5) {
							w0 = 14234;
						} else {
							w0 = 15097;
						}
					}
				}
			}
		}
	}
	int w1;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 3528) {
				if (hops < 3) {
					if (rel_time < 3477) {
						if (rel_time < 3327) {
							w1 = -11946;
						} else {
							w1 = -9871;
						}
					} else {
						w1 = -14853;
					}
				} else {
					if (rel_time < 3477) {
						if (rel_time < 3327) {
							w1 = -10980;
						} else {
							w1 = -8914;
						}
					} else {
						w1 = -13885;
					}
				}
			} else {
				if (cons != 3) {
					if (hops < 3) {
						if (rel_time < 3550) {
							w1 = -9179;
						} else {
							w1 = -9794;
						}
					} else {
						if (hops < 5) {
							w1 = -8645;
						} else {
							w1 = -7579;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w1 = -7647;
						} else {
							w1 = -7199;
						}
					} else {
						if (hops < 5) {
							w1 = -6612;
						} else {
							w1 = -5486;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1250) {
						w1 = -14227;
					} else {
						if (rel_time < 1401) {
							w1 = -12473;
						} else {
							w1 = -13567;
						}
					}
				} else {
					if (rel_time < 1250) {
						w1 = -13791;
					} else {
						if (rel_time < 1401) {
							w1 = -12047;
						} else {
							w1 = -13118;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1250) {
						w1 = -13317;
					} else {
						if (rel_time < 1401) {
							w1 = -11544;
						} else {
							w1 = -12672;
						}
					}
				} else {
					if (rel_time < 1250) {
						w1 = -13400;
					} else {
						if (rel_time < 1401) {
							w1 = -10966;
						} else {
							w1 = -12066;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 403) {
			if (rel_time < 69) {
				if (hops < 3) {
					if (hops < 2) {
						w1 = 8541;
					} else {
						w1 = 8988;
					}
				} else {
					if (hops < 5) {
						w1 = 9621;
					} else {
						w1 = 10578;
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 321) {
						if (hops < 2) {
							w1 = 17852;
						} else {
							w1 = 19028;
						}
					} else {
						if (hops < 2) {
							w1 = 15903;
						} else {
							w1 = 17081;
						}
					}
				} else {
					if (hops < 2) {
						w1 = 14739;
					} else {
						if (hops < 4) {
							w1 = 15607;
						} else {
							w1 = 16668;
						}
					}
				}
			}
		} else {
			if (rel_time < 3952) {
				if (rel_time < 3681) {
					if (rel_time < 743) {
						if (cons != 3) {
							w1 = 8374;
						} else {
							w1 = 6656;
						}
					} else {
						if (rel_time < 792) {
							w1 = 919;
						} else {
							w1 = 5440;
						}
					}
				} else {
					if (rel_time < 3827) {
						if (prod != 2) {
							w1 = -1967;
						} else {
							w1 = 678;
						}
					} else {
						if (prod != 0) {
							w1 = 2007;
						} else {
							w1 = 5303;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 10944) {
							w1 = 5771;
						} else {
							w1 = 5264;
						}
					} else {
						if (rel_time < 10944) {
							w1 = 6250;
						} else {
							w1 = 5699;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11069) {
							w1 = 6673;
						} else {
							w1 = 5824;
						}
					} else {
						if (hops < 5) {
							w1 = 7117;
						} else {
							w1 = 7549;
						}
					}
				}
			}
		}
	}
	int w2;
	if (size < 38) {
		if (cons != 0) {
			if (rel_time < 3528) {
				if (rel_time < 1371) {
					if (cons != 2) {
						if (rel_time < 1340) {
							w2 = -3993;
						} else {
							w2 = -4946;
						}
					} else {
						if (hops < 2) {
							w2 = -5945;
						} else {
							w2 = -5496;
						}
					}
				} else {
					if (rel_time < 1490) {
						if (cons != 2) {
							w2 = -8814;
						} else {
							w2 = -6540;
						}
					} else {
						if (rel_time < 1672) {
							w2 = -4300;
						} else {
							w2 = -5843;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (hops < 2) {
						if (rel_time < 3550) {
							w2 = -4801;
						} else {
							w2 = -5089;
						}
					} else {
						if (rel_time < 3550) {
							w2 = -4132;
						} else {
							w2 = -4610;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w2 = -3827;
						} else {
							w2 = -3544;
						}
					} else {
						if (hops < 5) {
							w2 = -3109;
						} else {
							w2 = -2763;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1551) {
					if (rel_time < 1401) {
						if (rel_time < 1250) {
							w2 = -7022;
						} else {
							w2 = -6147;
						}
					} else {
						w2 = -7908;
					}
				} else {
					if (rel_time < 1702) {
						w2 = -5351;
					} else {
						if (rel_time < 1852) {
							w2 = -7779;
						} else {
							w2 = -6590;
						}
					}
				}
			} else {
				if (rel_time < 1551) {
					if (rel_time < 1401) {
						if (rel_time < 1250) {
							w2 = -6697;
						} else {
							w2 = -5646;
						}
					} else {
						w2 = -7389;
					}
				} else {
					if (rel_time < 1702) {
						if (hops < 5) {
							w2 = -4897;
						} else {
							w2 = -4368;
						}
					} else {
						if (rel_time < 1852) {
							w2 = -7267;
						} else {
							w2 = -6101;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 403) {
			if (rel_time < 69) {
				if (hops < 4) {
					if (hops < 2) {
						w2 = 4275;
					} else {
						w2 = 4558;
					}
				} else {
					w2 = 5119;
				}
			} else {
				if (cons != 2) {
					if (rel_time < 321) {
						if (hops < 4) {
							w2 = 9101;
						} else {
							w2 = 10288;
						}
					} else {
						if (hops < 4) {
							w2 = 8125;
						} else {
							w2 = 9292;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w2 = 7377;
						} else {
							w2 = 7809;
						}
					} else {
						if (hops < 5) {
							w2 = 8120;
						} else {
							w2 = 9012;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3952) {
					if (rel_time < 993) {
						if (cons != 0) {
							w2 = 3538;
						} else {
							w2 = 1908;
						}
					} else {
						if (prod != 3) {
							w2 = 601;
						} else {
							w2 = -1757;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11113) {
							w2 = 2870;
						} else {
							w2 = 3826;
						}
					} else {
						if (rel_time < 11113) {
							w2 = 3108;
						} else {
							w2 = 4089;
						}
					}
				}
			} else {
				if (rel_time < 993) {
					if (rel_time < 792) {
						if (rel_time < 743) {
							w2 = 4617;
						} else {
							w2 = 1697;
						}
					} else {
						if (rel_time < 841) {
							w2 = 6755;
						} else {
							w2 = 5044;
						}
					}
				} else {
					if (rel_time < 3951) {
						if (rel_time < 3681) {
							w2 = 2908;
						} else {
							w2 = 1120;
						}
					} else {
						if (hops < 4) {
							w2 = 3326;
						} else {
							w2 = 3614;
						}
					}
				}
			}
		}
	}
	int w3;
	if (size < 38) {
		if (hops < 4) {
			if (rel_time < 3356) {
				if (rel_time < 3206) {
					if (rel_time < 3056) {
						if (rel_time < 2905) {
							w3 = -2977;
						} else {
							w3 = -4884;
						}
					} else {
						if (rel_time < 3145) {
							w3 = -479;
						} else {
							w3 = -2282;
						}
					}
				} else {
					if (rel_time < 3236) {
						if (hops < 2) {
							w3 = -6554;
						} else {
							w3 = -6122;
						}
					} else {
						if (cons != 3) {
							w3 = -4034;
						} else {
							w3 = -5919;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 3387) {
						if (hops < 2) {
							w3 = -1069;
						} else {
							w3 = -634;
						}
					} else {
						if (cons != 1) {
							w3 = -2770;
						} else {
							w3 = -4463;
						}
					}
				} else {
					if (rel_time < 3446) {
						if (hops < 2) {
							w3 = -942;
						} else {
							w3 = -506;
						}
					} else {
						if (hops < 3) {
							w3 = -1879;
						} else {
							w3 = -1681;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (cons != 0) {
					if (rel_time < 3327) {
						if (rel_time < 3176) {
							w3 = -2419;
						} else {
							w3 = -4441;
						}
					} else {
						if (rel_time < 3446) {
							w3 = -1151;
						} else {
							w3 = -2399;
						}
					}
				} else {
					if (rel_time < 3356) {
						if (rel_time < 3206) {
							w3 = -3016;
						} else {
							w3 = -4302;
						}
					} else {
						w3 = -2474;
					}
				}
			} else {
				if (cons != 0) {
					if (rel_time < 1822) {
						if (rel_time < 1672) {
							w3 = -1418;
						} else {
							w3 = -3557;
						}
					} else {
						if (rel_time < 1942) {
							w3 = 872;
						} else {
							w3 = -1655;
						}
					}
				} else {
					if (rel_time < 3356) {
						if (rel_time < 3206) {
							w3 = -2627;
						} else {
							w3 = -3887;
						}
					} else {
						w3 = -1339;
					}
				}
			}
		}
	} else {
		if (rel_time < 474) {
			if (cons != 0) {
				if (cons != 2) {
					if (hops < 5) {
						if (rel_time < 321) {
							w3 = 4608;
						} else {
							w3 = 4122;
						}
					} else {
						w3 = 5609;
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w3 = 3692;
						} else {
							w3 = 3907;
						}
					} else {
						if (hops < 5) {
							w3 = 4069;
						} else {
							w3 = 4539;
						}
					}
				}
			} else {
				if (rel_time < 69) {
					if (hops < 3) {
						w3 = 2180;
					} else {
						if (hops < 5) {
							w3 = 2419;
						} else {
							w3 = 2782;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w3 = 3096;
						} else {
							w3 = 2543;
						}
					} else {
						w3 = 3914;
					}
				}
			}
		} else {
			if (rel_time < 3951) {
				if (rel_time < 3681) {
					if (hops < 4) {
						if (rel_time < 939) {
							w3 = 1613;
						} else {
							w3 = 700;
						}
					} else {
						if (rel_time < 939) {
							w3 = 2917;
						} else {
							w3 = 2067;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 1) {
							w3 = -298;
						} else {
							w3 = -1782;
						}
					} else {
						if (rel_time < 3827) {
							w3 = 758;
						} else {
							w3 = 2316;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 4099) {
						if (prod != 2) {
							w3 = 2930;
						} else {
							w3 = -487;
						}
					} else {
						if (rel_time < 4404) {
							w3 = 902;
						} else {
							w3 = 1509;
						}
					}
				} else {
					if (rel_time < 11113) {
						if (rel_time < 11069) {
							w3 = 1742;
						} else {
							w3 = -450;
						}
					} else {
						if (hops < 4) {
							w3 = 2812;
						} else {
							w3 = 3334;
						}
					}
				}
			}
		}
	}
	int w4;
	if (size < 38) {
		if (rel_time < 1852) {
			if (rel_time < 1702) {
				if (rel_time < 1551) {
					if (rel_time < 1401) {
						if (cons != 0) {
							w4 = -912;
						} else {
							w4 = -1735;
						}
					} else {
						if (cons != 2) {
							w4 = -2829;
						} else {
							w4 = -1859;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 1581) {
							w4 = 914;
						} else {
							w4 = -1276;
						}
					} else {
						if (hops < 2) {
							w4 = 740;
						} else {
							w4 = 1215;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 1731) {
						if (hops < 5) {
							w4 = -4481;
						} else {
							w4 = -2816;
						}
					} else {
						if (hops < 5) {
							w4 = -2276;
						} else {
							w4 = -997;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w4 = -4996;
						} else {
							w4 = -4569;
						}
					} else {
						w4 = -3060;
					}
				}
			}
		} else {
			if (rel_time < 1942) {
				if (cons != 2) {
					if (hops < 2) {
						if (rel_time < 1882) {
							w4 = 1499;
						} else {
							w4 = 1430;
						}
					} else {
						if (hops < 5) {
							w4 = 1910;
						} else {
							w4 = 1191;
						}
					}
				} else {
					if (hops < 2) {
						w4 = -820;
					} else {
						if (hops < 5) {
							w4 = -379;
						} else {
							w4 = -1079;
						}
					}
				}
			} else {
				if (rel_time < 2153) {
					if (rel_time < 2003) {
						if (hops < 2) {
							w4 = -922;
						} else {
							w4 = -533;
						}
					} else {
						if (rel_time < 2032) {
							w4 = -4748;
						} else {
							w4 = -2925;
						}
					}
				} else {
					if (rel_time < 2242) {
						if (cons != 2) {
							w4 = 1831;
						} else {
							w4 = -734;
						}
					} else {
						if (rel_time < 2454) {
							w4 = -2474;
						} else {
							w4 = -1273;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 474) {
			if (cons != 0) {
				if (hops < 2) {
					if (rel_time < 176) {
						w4 = 2137;
					} else {
						if (cons != 3) {
							w4 = 1845;
						} else {
							w4 = 2018;
						}
					}
				} else {
					if (cons != 2) {
						if (hops < 4) {
							w4 = 2285;
						} else {
							w4 = 2619;
						}
					} else {
						if (hops < 5) {
							w4 = 1976;
						} else {
							w4 = 2286;
						}
					}
				}
			} else {
				if (rel_time < 69) {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 1051;
						} else {
							w4 = 1145;
						}
					} else {
						if (hops < 5) {
							w4 = 1274;
						} else {
							w4 = 1400;
						}
					}
				} else {
					if (hops < 2) {
						w4 = 1139;
					} else {
						if (hops < 3) {
							w4 = 2018;
						} else {
							w4 = 1363;
						}
					}
				}
			}
		} else {
			if (cons != 0) {
				if (hops < 2) {
					if (rel_time < 3952) {
						if (rel_time < 939) {
							w4 = 738;
						} else {
							w4 = -424;
						}
					} else {
						if (rel_time < 11069) {
							w4 = 705;
						} else {
							w4 = 46;
						}
					}
				} else {
					if (rel_time < 939) {
						if (rel_time < 545) {
							w4 = -174;
						} else {
							w4 = 1806;
						}
					} else {
						if (cons != 3) {
							w4 = 833;
						} else {
							w4 = -608;
						}
					}
				}
			} else {
				if (rel_time < 792) {
					if (hops < 3) {
						if (hops < 2) {
							w4 = -2446;
						} else {
							w4 = -1580;
						}
					} else {
						if (hops < 5) {
							w4 = -423;
						} else {
							w4 = 611;
						}
					}
				} else {
					if (hops < 2) {
						w4 = 89;
					} else {
						if (hops < 5) {
							w4 = 892;
						} else {
							w4 = 1836;
						}
					}
				}
			}
		}
	}
	int w5;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 2755) {
				if (rel_time < 2604) {
					if (rel_time < 2454) {
						if (rel_time < 2304) {
							w5 = -918;
						} else {
							w5 = -2338;
						}
					} else {
						if (rel_time < 2543) {
							w5 = 1376;
						} else {
							w5 = -259;
						}
					}
				} else {
					if (rel_time < 2634) {
						w5 = -4431;
					} else {
						if (cons != 3) {
							w5 = -2059;
						} else {
							w5 = -4048;
						}
					}
				}
			} else {
				if (rel_time < 2844) {
					if (cons != 2) {
						if (rel_time < 2785) {
							w5 = 2090;
						} else {
							w5 = 2218;
						}
					} else {
						w5 = -418;
					}
				} else {
					if (rel_time < 3056) {
						if (rel_time < 2905) {
							w5 = -209;
						} else {
							w5 = -2035;
						}
					} else {
						if (rel_time < 3145) {
							w5 = 139;
						} else {
							w5 = -1117;
						}
					}
				}
			}
		} else {
			if (rel_time < 2604) {
				if (rel_time < 2454) {
					if (rel_time < 2304) {
						if (rel_time < 2153) {
							w5 = -716;
						} else {
							w5 = 749;
						}
					} else {
						if (cons != 3) {
							w5 = -1528;
						} else {
							w5 = -3355;
						}
					}
				} else {
					if (rel_time < 2543) {
						if (cons != 2) {
							w5 = 2636;
						} else {
							w5 = 316;
						}
					} else {
						if (hops < 5) {
							w5 = 100;
						} else {
							w5 = 551;
						}
					}
				}
			} else {
				if (rel_time < 2755) {
					if (rel_time < 2634) {
						if (hops < 5) {
							w5 = -3991;
						} else {
							w5 = -3427;
						}
					} else {
						if (cons != 3) {
							w5 = -1642;
						} else {
							w5 = -3569;
						}
					}
				} else {
					if (rel_time < 2844) {
						if (cons != 2) {
							w5 = 2636;
						} else {
							w5 = 63;
						}
					} else {
						if (rel_time < 3056) {
							w5 = -1283;
						} else {
							w5 = -492;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 474) {
			if (cons != 0) {
				if (rel_time < 176) {
					if (hops < 2) {
						w5 = 1070;
					} else {
						if (hops < 5) {
							w5 = 1292;
						} else {
							w5 = 1758;
						}
					}
				} else {
					if (cons != 3) {
						if (hops < 4) {
							w5 = 953;
						} else {
							w5 = 1093;
						}
					} else {
						if (hops < 2) {
							w5 = 1010;
						} else {
							w5 = 1225;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w5 = 548;
						} else {
							w5 = 787;
						}
					} else {
						if (rel_time < 69) {
							w5 = 590;
						} else {
							w5 = 190;
						}
					}
				} else {
					if (rel_time < 69) {
						if (hops < 5) {
							w5 = 639;
						} else {
							w5 = 705;
						}
					} else {
						if (hops < 5) {
							w5 = 1155;
						} else {
							w5 = 1294;
						}
					}
				}
			}
		} else {
			if (cons != 4) {
				if (rel_time < 3827) {
					if (rel_time < 3681) {
						if (cons != 2) {
							w5 = 109;
						} else {
							w5 = 669;
						}
					} else {
						if (prod != 2) {
							w5 = -877;
						} else {
							w5 = -217;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 4303) {
							w5 = 627;
						} else {
							w5 = 373;
						}
					} else {
						if (rel_time < 4050) {
							w5 = 1311;
						} else {
							w5 = 675;
						}
					}
				}
			} else {
				if (rel_time < 993) {
					if (rel_time < 743) {
						if (hops < 5) {
							w5 = 1224;
						} else {
							w5 = 1982;
						}
					} else {
						if (hops < 5) {
							w5 = 232;
						} else {
							w5 = 1526;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w5 = 1255;
						} else {
							w5 = 1415;
						}
					} else {
						w5 = 2359;
					}
				}
			}
		}
	}
	int w6;
	if (size < 38) {
		if (rel_time < 3206) {
			if (rel_time < 3056) {
				if (rel_time < 2905) {
					if (rel_time < 2755) {
						if (rel_time < 2604) {
							w6 = -309;
						} else {
							w6 = -1320;
						}
					} else {
						if (cons != 2) {
							w6 = 875;
						} else {
							w6 = -47;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 2935) {
							w6 = -2190;
						} else {
							w6 = -329;
						}
					} else {
						if (hops < 4) {
							w6 = -2430;
						} else {
							w6 = -3189;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 3145) {
						if (hops < 4) {
							w6 = 1279;
						} else {
							w6 = 3003;
						}
					} else {
						if (hops < 4) {
							w6 = -129;
						} else {
							w6 = 438;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w6 = -1480;
						} else {
							w6 = -734;
						}
					} else {
						if (hops < 5) {
							w6 = 555;
						} else {
							w6 = 1082;
						}
					}
				}
			}
		} else {
			if (rel_time < 3356) {
				if (rel_time < 3236) {
					if (hops < 4) {
						if (hops < 2) {
							w6 = -2087;
						} else {
							w6 = -2181;
						}
					} else {
						if (hops < 5) {
							w6 = -2701;
						} else {
							w6 = -3182;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 3327) {
							w6 = -642;
						} else {
							w6 = -1497;
						}
					} else {
						if (hops < 4) {
							w6 = -1950;
						} else {
							w6 = -2436;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 3387) {
						if (hops < 5) {
							w6 = 684;
						} else {
							w6 = 2274;
						}
					} else {
						if (rel_time < 3528) {
							w6 = -798;
						} else {
							w6 = 35;
						}
					}
				} else {
					if (rel_time < 3446) {
						if (hops < 5) {
							w6 = 755;
						} else {
							w6 = 2402;
						}
					} else {
						if (hops < 4) {
							w6 = 93;
						} else {
							w6 = 468;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 474) {
				if (cons != 0) {
					if (rel_time < 176) {
						if (hops < 2) {
							w6 = 535;
						} else {
							w6 = 623;
						}
					} else {
						if (cons != 3) {
							w6 = 476;
						} else {
							w6 = 541;
						}
					}
				} else {
					if (rel_time < 69) {
						if (hops < 3) {
							w6 = 213;
						} else {
							w6 = 295;
						}
					} else {
						if (hops < 3) {
							w6 = 446;
						} else {
							w6 = 95;
						}
					}
				}
			} else {
				if (rel_time < 4404) {
					if (rel_time < 4401) {
						if (rel_time < 4352) {
							w6 = 22;
						} else {
							w6 = 1878;
						}
					} else {
						if (hops < 3) {
							w6 = -1995;
						} else {
							w6 = -2328;
						}
					}
				} else {
					if (rel_time < 4754) {
						if (prod != 2) {
							w6 = 1307;
						} else {
							w6 = -1311;
						}
					} else {
						if (rel_time < 4860) {
							w6 = -1314;
						} else {
							w6 = 178;
						}
					}
				}
			}
		} else {
			if (rel_time < 4148) {
				if (prod != 2) {
					if (rel_time < 4000) {
						if (rel_time < 3952) {
							w6 = 485;
						} else {
							w6 = -1867;
						}
					} else {
						if (prod != 4) {
							w6 = 2118;
						} else {
							w6 = -1738;
						}
					}
				} else {
					if (rel_time < 3779) {
						if (hops < 5) {
							w6 = 737;
						} else {
							w6 = 1557;
						}
					} else {
						w6 = -1808;
					}
				}
			} else {
				if (rel_time < 4254) {
					if (hops < 5) {
						w6 = -1830;
					} else {
						w6 = -1629;
					}
				} else {
					if (rel_time < 4303) {
						w6 = 1686;
					} else {
						if (rel_time < 4352) {
							w6 = -2088;
						} else {
							w6 = 310;
						}
					}
				}
			}
		}
	}
	int w7;
	if (size < 38) {
		if (rel_time < 1852) {
			if (rel_time < 1702) {
				if (rel_time < 1551) {
					if (rel_time < 1401) {
						if (cons != 1) {
							w7 = -148;
						} else {
							w7 = 465;
						}
					} else {
						if (cons != 2) {
							w7 = -869;
						} else {
							w7 = -384;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 1581) {
							w7 = 1004;
						} else {
							w7 = -92;
						}
					} else {
						if (hops < 5) {
							w7 = 1054;
						} else {
							w7 = 1519;
						}
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 1731) {
						if (hops < 2) {
							w7 = -1915;
						} else {
							w7 = -1525;
						}
					} else {
						if (hops < 2) {
							w7 = -771;
						} else {
							w7 = -459;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w7 = -1887;
						} else {
							w7 = -1774;
						}
					} else {
						w7 = -1032;
					}
				}
			}
		} else {
			if (rel_time < 1942) {
				if (cons != 2) {
					if (hops < 5) {
						if (hops < 2) {
							w7 = 1347;
						} else {
							w7 = 1468;
						}
					} else {
						w7 = 1108;
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w7 = 203;
						} else {
							w7 = 323;
						}
					} else {
						w7 = -34;
					}
				}
			} else {
				if (rel_time < 2153) {
					if (cons != 3) {
						if (cons != 1) {
							w7 = -172;
						} else {
							w7 = -1829;
						}
					} else {
						if (hops < 2) {
							w7 = -2634;
						} else {
							w7 = -2252;
						}
					}
				} else {
					if (rel_time < 2304) {
						if (cons != 2) {
							w7 = 907;
						} else {
							w7 = -311;
						}
					} else {
						if (rel_time < 2393) {
							w7 = -1263;
						} else {
							w7 = -115;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 11113) {
			if (rel_time < 11069) {
				if (rel_time < 11027) {
					if (rel_time < 10986) {
						if (rel_time < 10680) {
							w7 = 89;
						} else {
							w7 = 524;
						}
					} else {
						if (prod != 1) {
							w7 = 1785;
						} else {
							w7 = -2251;
						}
					}
				} else {
					if (prod != 2) {
						w7 = -2157;
					} else {
						if (hops < 3) {
							w7 = 1830;
						} else {
							w7 = 1639;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (hops < 3) {
						if (hops < 2) {
							w7 = 2060;
						} else {
							w7 = 1787;
						}
					} else {
						w7 = 2963;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w7 = -1827;
						} else {
							w7 = -2116;
						}
					} else {
						if (hops < 4) {
							w7 = -887;
						} else {
							w7 = -1245;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w7 = 863;
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w7 = 603;
					} else {
						w7 = 718;
					}
				} else {
					w7 = 876;
				}
			}
		}
	}
	int w8;
	if (size < 38) {
		if (hops < 5) {
			if (hops < 2) {
				if (rel_time < 1522) {
					if (rel_time < 1401) {
						if (rel_time < 1310) {
							w8 = -430;
						} else {
							w8 = -171;
						}
					} else {
						if (cons != 2) {
							w8 = -839;
						} else {
							w8 = -441;
						}
					}
				} else {
					if (rel_time < 2604) {
						if (rel_time < 2454) {
							w8 = -178;
						} else {
							w8 = 570;
						}
					} else {
						if (rel_time < 2694) {
							w8 = -1004;
						} else {
							w8 = -204;
						}
					}
				}
			} else {
				if (rel_time < 3206) {
					if (rel_time < 3056) {
						if (rel_time < 2905) {
							w8 = -7;
						} else {
							w8 = -569;
						}
					} else {
						if (rel_time < 3086) {
							w8 = 1164;
						} else {
							w8 = 240;
						}
					}
				} else {
					if (rel_time < 3356) {
						if (cons != 4) {
							w8 = -744;
						} else {
							w8 = -112;
						}
					} else {
						if (cons != 3) {
							w8 = -140;
						} else {
							w8 = 273;
						}
					}
				}
			}
		} else {
			if (rel_time < 3206) {
				if (rel_time < 3056) {
					if (rel_time < 2905) {
						if (rel_time < 2755) {
							w8 = 344;
						} else {
							w8 = 1049;
						}
					} else {
						if (cons != 2) {
							w8 = -913;
						} else {
							w8 = 43;
						}
					}
				} else {
					if (rel_time < 3145) {
						if (cons != 2) {
							w8 = 1938;
						} else {
							w8 = 602;
						}
					} else {
						if (rel_time < 3176) {
							w8 = 674;
						} else {
							w8 = 426;
						}
					}
				}
			} else {
				if (rel_time < 3295) {
					if (cons != 2) {
						w8 = -1545;
					} else {
						w8 = -326;
					}
				} else {
					if (rel_time < 3507) {
						if (rel_time < 3356) {
							w8 = -236;
						} else {
							w8 = 780;
						}
					} else {
						if (rel_time < 3528) {
							w8 = -905;
						} else {
							w8 = 125;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10348) {
			if (rel_time < 10324) {
				if (rel_time < 10220) {
					if (rel_time < 10173) {
						if (rel_time < 10033) {
							w8 = 44;
						} else {
							w8 = 575;
						}
					} else {
						if (prod != 3) {
							w8 = -1397;
						} else {
							w8 = 2531;
						}
					}
				} else {
					if (prod != 0) {
						w8 = -1397;
					} else {
						w8 = 1492;
					}
				}
			} else {
				if (hops < 4) {
					w8 = 1506;
				} else {
					w8 = 1675;
				}
			}
		} else {
			if (rel_time < 10392) {
				if (prod != 0) {
					w8 = -2474;
				} else {
					w8 = 1583;
				}
			} else {
				if (prod != 3) {
					if (rel_time < 10726) {
						if (prod != 0) {
							w8 = 1518;
						} else {
							w8 = -1403;
						}
					} else {
						if (prod != 0) {
							w8 = -721;
						} else {
							w8 = 1372;
						}
					}
				} else {
					if (rel_time < 10530) {
						if (hops < 2) {
							w8 = -2530;
						} else {
							w8 = -2428;
						}
					} else {
						if (rel_time < 10838) {
							w8 = 2342;
						} else {
							w8 = -829;
						}
					}
				}
			}
		}
	}
	int w9;
	if (rel_time < 11027) {
		if (rel_time < 10795) {
			if (rel_time < 10752) {
				if (rel_time < 10726) {
					if (rel_time < 10680) {
						if (rel_time < 10348) {
							w9 = 4;
						} else {
							w9 = -320;
						}
					} else {
						if (prod != 1) {
							w9 = -2397;
						} else {
							w9 = 1597;
						}
					}
				} else {
					if (hops < 2) {
						w9 = -1324;
					} else {
						w9 = -1239;
					}
				}
			} else {
				if (prod != 2) {
					if (hops < 2) {
						w9 = 1120;
					} else {
						if (hops < 3) {
							w9 = 1241;
						} else {
							w9 = 1160;
						}
					}
				} else {
					w9 = -1249;
				}
			}
		} else {
			if (prod != 0) {
				if (prod != 2) {
					if (prod != 3) {
						if (rel_time < 10986) {
							w9 = -1516;
						} else {
							w9 = -766;
						}
					} else {
						w9 = 1170;
					}
				} else {
					if (hops < 3) {
						w9 = 1295;
					} else {
						w9 = 1040;
					}
				}
			} else {
				if (rel_time < 10944) {
					if (hops < 2) {
						w9 = 585;
					} else {
						w9 = 653;
					}
				} else {
					if (hops < 3) {
						w9 = 880;
					} else {
						w9 = 682;
					}
				}
			}
		}
	} else {
		if (prod != 3) {
			if (rel_time < 11113) {
				if (rel_time < 11069) {
					if (hops < 3) {
						w9 = 1276;
					} else {
						if (hops < 4) {
							w9 = 1102;
						} else {
							w9 = 1236;
						}
					}
				} else {
					if (hops < 3) {
						w9 = 1346;
					} else {
						w9 = 1879;
					}
				}
			} else {
				if (hops < 2) {
					w9 = 792;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w9 = 662;
						} else {
							w9 = 719;
						}
					} else {
						w9 = 798;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 11069) {
						w9 = -622;
					} else {
						w9 = -501;
					}
				} else {
					w9 = -644;
				}
			} else {
				if (rel_time < 11069) {
					w9 = -904;
				} else {
					if (hops < 4) {
						w9 = -31;
					} else {
						if (hops < 5) {
							w9 = -221;
						} else {
							w9 = -176;
						}
					}
				}
			}
		}
	}
	int w10;
	if (hops < 2) {
		if (rel_time < 4559) {
			if (rel_time < 4453) {
				if (prod != 0) {
					if (rel_time < 4148) {
						if (prod != 2) {
							w10 = -98;
						} else {
							w10 = -872;
						}
					} else {
						if (rel_time < 4352) {
							w10 = -1908;
						} else {
							w10 = 148;
						}
					}
				} else {
					if (rel_time < 4000) {
						if (rel_time < 3952) {
							w10 = 181;
						} else {
							w10 = -2697;
						}
					} else {
						w10 = 1716;
					}
				}
			} else {
				if (prod != 0) {
					w10 = 892;
				} else {
					w10 = -2076;
				}
			}
		} else {
			if (rel_time < 4864) {
				if (prod != 1) {
					if (prod != 3) {
						if (rel_time < 4860) {
							w10 = -1001;
						} else {
							w10 = 1472;
						}
					} else {
						w10 = 1933;
					}
				} else {
					w10 = 1923;
				}
			} else {
				if (rel_time < 4913) {
					if (prod != 0) {
						w10 = -2436;
					} else {
						w10 = 1464;
					}
				} else {
					if (rel_time < 5316) {
						if (prod != 0) {
							w10 = 496;
						} else {
							w10 = -1504;
						}
					} else {
						if (rel_time < 5623) {
							w10 = -575;
						} else {
							w10 = 7;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1042) {
			if (rel_time < 890) {
				if (rel_time < 841) {
					if (rel_time < 792) {
						if (rel_time < 743) {
							w10 = 191;
						} else {
							w10 = -632;
						}
					} else {
						if (hops < 3) {
							w10 = 1671;
						} else {
							w10 = 1108;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w10 = -1166;
						} else {
							w10 = -982;
						}
					} else {
						w10 = -41;
					}
				}
			} else {
				if (rel_time < 939) {
					if (hops < 5) {
						if (hops < 3) {
							w10 = 1569;
						} else {
							w10 = 1744;
						}
					} else {
						w10 = 2664;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 993) {
							w10 = 128;
						} else {
							w10 = 262;
						}
					} else {
						if (rel_time < 993) {
							w10 = 460;
						} else {
							w10 = 562;
						}
					}
				}
			}
		} else {
			if (rel_time < 1091) {
				if (hops < 5) {
					if (hops < 3) {
						w10 = -1081;
					} else {
						w10 = -1314;
					}
				} else {
					w10 = -431;
				}
			} else {
				if (rel_time < 1140) {
					if (hops < 5) {
						if (hops < 3) {
							w10 = 1062;
						} else {
							w10 = 836;
						}
					} else {
						w10 = 1766;
					}
				} else {
					if (rel_time < 2454) {
						if (rel_time < 2003) {
							w10 = 17;
						} else {
							w10 = -251;
						}
					} else {
						if (rel_time < 2543) {
							w10 = 1130;
						} else {
							w10 = 19;
						}
					}
				}
			}
		}
	}
	int w11;
	if (cons != 4) {
		if (rel_time < 5059) {
			if (rel_time < 5010) {
				if (rel_time < 4864) {
					if (rel_time < 4705) {
						if (prod != 1) {
							w11 = -66;
						} else {
							w11 = 233;
						}
					} else {
						if (prod != 4) {
							w11 = 1538;
						} else {
							w11 = -712;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 0) {
							w11 = -2247;
						} else {
							w11 = 1392;
						}
					} else {
						if (hops < 2) {
							w11 = 1213;
						} else {
							w11 = 1519;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (hops < 2) {
						w11 = 1217;
					} else {
						w11 = 1501;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w11 = -2695;
						} else {
							w11 = -2534;
						}
					} else {
						if (hops < 4) {
							w11 = -2470;
						} else {
							w11 = -2317;
						}
					}
				}
			}
		} else {
			if (rel_time < 5219) {
				if (prod != 0) {
					if (rel_time < 5165) {
						if (hops < 2) {
							w11 = 1210;
						} else {
							w11 = 1531;
						}
					} else {
						if (hops < 2) {
							w11 = 2261;
						} else {
							w11 = 2584;
						}
					}
				} else {
					if (hops < 2) {
						w11 = -753;
					} else {
						w11 = -1470;
					}
				}
			} else {
				if (rel_time < 5267) {
					if (prod != 1) {
						if (hops < 2) {
							w11 = -1759;
						} else {
							w11 = -1446;
						}
					} else {
						w11 = 2498;
					}
				} else {
					if (rel_time < 5316) {
						if (prod != 2) {
							w11 = 2473;
						} else {
							w11 = -1502;
						}
					} else {
						if (rel_time < 5623) {
							w11 = -403;
						} else {
							w11 = 34;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1221) {
			if (rel_time < 993) {
				if (rel_time < 743) {
					if (rel_time < 403) {
						if (hops < 2) {
							w11 = 186;
						} else {
							w11 = 116;
						}
					} else {
						if (hops < 3) {
							w11 = 616;
						} else {
							w11 = 207;
						}
					}
				} else {
					if (hops < 2) {
						w11 = -177;
					} else {
						if (hops < 3) {
							w11 = 17;
						} else {
							w11 = 120;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w11 = 598;
					} else {
						w11 = 697;
					}
				} else {
					if (hops < 5) {
						w11 = 454;
					} else {
						w11 = 870;
					}
				}
			}
		} else {
			if (rel_time < 1822) {
				if (rel_time < 1371) {
					if (hops < 2) {
						w11 = -92;
					} else {
						if (hops < 5) {
							w11 = 95;
						} else {
							w11 = 362;
						}
					}
				} else {
					if (rel_time < 1522) {
						if (hops < 5) {
							w11 = -422;
						} else {
							w11 = -196;
						}
					} else {
						if (rel_time < 1672) {
							w11 = -23;
						} else {
							w11 = -250;
						}
					}
				}
			} else {
				if (rel_time < 3026) {
					if (hops < 2) {
						if (rel_time < 2424) {
							w11 = 251;
						} else {
							w11 = -31;
						}
					} else {
						if (rel_time < 2725) {
							w11 = 245;
						} else {
							w11 = 461;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3477) {
							w11 = -108;
						} else {
							w11 = 69;
						}
					} else {
						if (rel_time < 3327) {
							w11 = 155;
						} else {
							w11 = 23;
						}
					}
				}
			}
		}
	}
	int w12;
	if (hops < 5) {
		if (rel_time < 474) {
			if (rel_time < 69) {
				if (hops < 2) {
					w12 = 159;
				} else {
					if (hops < 3) {
						w12 = -68;
					} else {
						if (hops < 4) {
							w12 = 17;
						} else {
							w12 = -52;
						}
					}
				}
			} else {
				if (rel_time < 321) {
					if (hops < 2) {
						if (rel_time < 176) {
							w12 = 282;
						} else {
							w12 = 238;
						}
					} else {
						if (hops < 4) {
							w12 = 156;
						} else {
							w12 = 260;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 403) {
							w12 = 78;
						} else {
							w12 = 169;
						}
					} else {
						if (hops < 4) {
							w12 = -33;
						} else {
							w12 = 140;
						}
					}
				}
			}
		} else {
			if (rel_time < 545) {
				if (hops < 2) {
					w12 = -1273;
				} else {
					if (hops < 3) {
						w12 = -73;
					} else {
						w12 = -674;
					}
				}
			} else {
				if (rel_time < 617) {
					if (hops < 3) {
						if (hops < 2) {
							w12 = 869;
						} else {
							w12 = 1097;
						}
					} else {
						w12 = 483;
					}
				} else {
					if (rel_time < 792) {
						if (cons != 4) {
							w12 = -582;
						} else {
							w12 = 218;
						}
					} else {
						if (rel_time < 841) {
							w12 = 926;
						} else {
							w12 = -12;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2604) {
			if (cons != 0) {
				if (rel_time < 2424) {
					if (rel_time < 1280) {
						if (cons != 4) {
							w12 = 585;
						} else {
							w12 = 320;
						}
					} else {
						if (rel_time < 1310) {
							w12 = -502;
						} else {
							w12 = 240;
						}
					}
				} else {
					if (rel_time < 2484) {
						w12 = 1384;
					} else {
						if (cons != 3) {
							w12 = 206;
						} else {
							w12 = 1257;
						}
					}
				}
			} else {
				if (rel_time < 1042) {
					if (rel_time < 69) {
						w12 = -16;
					} else {
						w12 = 297;
					}
				} else {
					if (rel_time < 1250) {
						w12 = -456;
					} else {
						if (rel_time < 1702) {
							w12 = 213;
						} else {
							w12 = -6;
						}
					}
				}
			}
		} else {
			if (rel_time < 2634) {
				w12 = -1162;
			} else {
				if (rel_time < 9772) {
					if (rel_time < 9725) {
						if (rel_time < 9621) {
							w12 = 138;
						} else {
							w12 = -1405;
						}
					} else {
						w12 = 1641;
					}
				} else {
					if (rel_time < 9818) {
						w12 = -2464;
					} else {
						if (rel_time < 9865) {
							w12 = 1618;
						} else {
							w12 = -54;
						}
					}
				}
			}
		}
	}
	int w13;
	if (cons != 1) {
		if (rel_time < 9004) {
			if (rel_time < 8956) {
				if (rel_time < 8910) {
					if (rel_time < 8816) {
						if (rel_time < 8554) {
							w13 = 21;
						} else {
							w13 = -592;
						}
					} else {
						if (prod != 1) {
							w13 = -1447;
						} else {
							w13 = 2488;
						}
					}
				} else {
					if (prod != 2) {
						w13 = 2478;
					} else {
						w13 = -1447;
					}
				}
			} else {
				if (prod != 3) {
					w13 = -1447;
				} else {
					w13 = 2489;
				}
			}
		} else {
			if (rel_time < 9026) {
				w13 = -1442;
			} else {
				if (rel_time < 9125) {
					if (prod != 0) {
						w13 = -1458;
					} else {
						if (hops < 4) {
							w13 = 1468;
						} else {
							w13 = 1617;
						}
					}
				} else {
					if (rel_time < 9170) {
						if (prod != 0) {
							w13 = -2523;
						} else {
							w13 = 1507;
						}
					} else {
						if (rel_time < 9312) {
							w13 = -539;
						} else {
							w13 = 33;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3387) {
			if (rel_time < 3236) {
				if (rel_time < 3086) {
					if (rel_time < 2935) {
						if (rel_time < 2785) {
							w13 = -35;
						} else {
							w13 = -763;
						}
					} else {
						if (hops < 4) {
							w13 = 512;
						} else {
							w13 = 951;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w13 = -799;
						} else {
							w13 = -635;
						}
					} else {
						w13 = -882;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w13 = 562;
					} else {
						if (hops < 3) {
							w13 = 390;
						} else {
							w13 = 360;
						}
					}
				} else {
					if (hops < 5) {
						w13 = 954;
					} else {
						w13 = 768;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					w13 = -652;
				} else {
					if (hops < 3) {
						w13 = -607;
					} else {
						w13 = -642;
					}
				}
			} else {
				if (hops < 5) {
					w13 = -1335;
				} else {
					w13 = -503;
				}
			}
		}
	}
	int w14;
	if (rel_time < 8218) {
		if (rel_time < 8201) {
			if (rel_time < 8095) {
				if (rel_time < 8048) {
					if (rel_time < 7905) {
						if (rel_time < 7741) {
							w14 = -7;
						} else {
							w14 = 710;
						}
					} else {
						if (prod != 2) {
							w14 = -1789;
						} else {
							w14 = 1496;
						}
					}
				} else {
					if (prod != 3) {
						w14 = 1473;
					} else {
						w14 = -2500;
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						w14 = 1463;
					} else {
						w14 = 1597;
					}
				} else {
					w14 = -1445;
				}
			}
		} else {
			w14 = -1451;
		}
	} else {
		if (rel_time < 8263) {
			if (prod != 0) {
				w14 = 2479;
			} else {
				w14 = -1429;
			}
		} else {
			if (rel_time < 8308) {
				if (prod != 1) {
					if (hops < 2) {
						w14 = -1493;
					} else {
						if (hops < 4) {
							w14 = -1399;
						} else {
							w14 = -1511;
						}
					}
				} else {
					w14 = 2473;
				}
			} else {
				if (rel_time < 8355) {
					if (prod != 2) {
						w14 = 2484;
					} else {
						w14 = -1456;
					}
				} else {
					if (prod != 2) {
						if (rel_time < 8665) {
							w14 = -703;
						} else {
							w14 = 33;
						}
					} else {
						if (rel_time < 8665) {
							w14 = 1783;
						} else {
							w14 = 7;
						}
					}
				}
			}
		}
	}
	int w15;
	if (rel_time < 9772) {
		if (rel_time < 9463) {
			if (rel_time < 9416) {
				if (rel_time < 9312) {
					if (rel_time < 9265) {
						if (prod != 0) {
							w15 = -9;
						} else {
							w15 = 123;
						}
					} else {
						if (prod != 3) {
							w15 = 1703;
						} else {
							w15 = -2254;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w15 = 1423;
						} else {
							w15 = 1583;
						}
					} else {
						w15 = -1488;
					}
				}
			} else {
				if (prod != 0) {
					w15 = 2415;
				} else {
					w15 = -1488;
				}
			}
		} else {
			if (prod != 3) {
				if (rel_time < 9486) {
					w15 = 2451;
				} else {
					if (prod != 0) {
						if (rel_time < 9725) {
							w15 = -1366;
						} else {
							w15 = -2569;
						}
					} else {
						if (hops < 5) {
							w15 = 1455;
						} else {
							w15 = 793;
						}
					}
				}
			} else {
				w15 = 2453;
			}
		}
	} else {
		if (rel_time < 9818) {
			if (prod != 1) {
				w15 = 1454;
			} else {
				if (hops < 5) {
					w15 = -2532;
				} else {
					w15 = -1273;
				}
			}
		} else {
			if (rel_time < 9865) {
				if (prod != 2) {
					w15 = -2555;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w15 = 1439;
						} else {
							w15 = 1588;
						}
					} else {
						w15 = 795;
					}
				}
			} else {
				if (rel_time < 9888) {
					w15 = -2538;
				} else {
					if (rel_time < 9931) {
						if (prod != 3) {
							w15 = 1441;
						} else {
							w15 = -2516;
						}
					} else {
						if (rel_time < 10033) {
							w15 = -789;
						} else {
							w15 = 19;
						}
					}
				}
			}
		}
	}
	int w16;
	if (rel_time < 10348) {
		if (rel_time < 10324) {
			if (rel_time < 10220) {
				if (rel_time < 10173) {
					if (rel_time < 10127) {
						if (rel_time < 10033) {
							w16 = -1;
						} else {
							w16 = 590;
						}
					} else {
						if (prod != 2) {
							w16 = 2185;
						} else {
							w16 = -1738;
						}
					}
				} else {
					if (prod != 3) {
						w16 = -762;
					} else {
						if (hops < 2) {
							w16 = 1142;
						} else {
							w16 = 1229;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w16 = -792;
					} else {
						if (hops < 4) {
							w16 = -726;
						} else {
							w16 = -787;
						}
					}
				} else {
					w16 = 690;
				}
			}
		} else {
			if (hops < 4) {
				w16 = 691;
			} else {
				w16 = 780;
			}
		}
	} else {
		if (rel_time < 10392) {
			if (prod != 0) {
				if (hops < 2) {
					w16 = -1193;
				} else {
					w16 = -1104;
				}
			} else {
				if (hops < 4) {
					w16 = 795;
				} else {
					w16 = 955;
				}
			}
		} else {
			if (prod != 2) {
				if (rel_time < 10484) {
					if (rel_time < 10435) {
						w16 = -3087;
					} else {
						w16 = -1132;
					}
				} else {
					if (rel_time < 10795) {
						if (prod != 0) {
							w16 = 535;
						} else {
							w16 = -601;
						}
					} else {
						if (prod != 1) {
							w16 = -27;
						} else {
							w16 = -859;
						}
					}
				}
			} else {
				if (rel_time < 10484) {
					if (hops < 4) {
						w16 = 853;
					} else {
						w16 = 1022;
					}
				} else {
					if (rel_time < 10795) {
						if (rel_time < 10726) {
							w16 = -1253;
						} else {
							w16 = -681;
						}
					} else {
						if (hops < 3) {
							w16 = 597;
						} else {
							w16 = 536;
						}
					}
				}
			}
		}
	}
	int w17;
	if (rel_time < 11113) {
		if (rel_time < 9772) {
			if (rel_time < 9463) {
				if (rel_time < 9416) {
					if (rel_time < 9312) {
						if (rel_time < 9125) {
							w17 = 6;
						} else {
							w17 = -300;
						}
					} else {
						if (prod != 0) {
							w17 = 735;
						} else {
							w17 = -746;
						}
					}
				} else {
					if (prod != 0) {
						w17 = 1213;
					} else {
						if (hops < 2) {
							w17 = -778;
						} else {
							w17 = -728;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (prod != 4) {
						if (rel_time < 9725) {
							w17 = 1176;
						} else {
							w17 = 16;
						}
					} else {
						if (hops < 5) {
							w17 = -792;
						} else {
							w17 = -77;
						}
					}
				} else {
					if (hops < 2) {
						w17 = -825;
					} else {
						if (hops < 4) {
							w17 = -731;
						} else {
							w17 = -829;
						}
					}
				}
			}
		} else {
			if (rel_time < 9818) {
				if (prod != 1) {
					w17 = 730;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w17 = -1286;
						} else {
							w17 = -1196;
						}
					} else {
						w17 = -640;
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 10173) {
						if (prod != 4) {
							w17 = -721;
						} else {
							w17 = 967;
						}
					} else {
						if (rel_time < 10220) {
							w17 = 482;
						} else {
							w17 = -31;
						}
					}
				} else {
					if (rel_time < 10127) {
						if (hops < 2) {
							w17 = 1827;
						} else {
							w17 = 1914;
						}
					} else {
						if (rel_time < 10435) {
							w17 = -762;
						} else {
							w17 = 118;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			w17 = 354;
		} else {
			if (hops < 4) {
				if (hops < 3) {
					w17 = 282;
				} else {
					w17 = 311;
				}
			} else {
				w17 = 356;
			}
		}
	}
	int w18;
	if (prod != 2) {
		if (rel_time < 8554) {
			if (rel_time < 8218) {
				if (rel_time < 7759) {
					if (rel_time < 7645) {
						if (rel_time < 7340) {
							w18 = 9;
						} else {
							w18 = -955;
						}
					} else {
						if (rel_time < 7741) {
							w18 = 2529;
						} else {
							w18 = 2180;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 8095) {
							w18 = -1474;
						} else {
							w18 = 750;
						}
					} else {
						if (rel_time < 7953) {
							w18 = 1452;
						} else {
							w18 = -790;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (prod != 1) {
						if (rel_time < 8355) {
							w18 = 1098;
						} else {
							w18 = 2091;
						}
					} else {
						if (rel_time < 8308) {
							w18 = 1243;
						} else {
							w18 = -2197;
						}
					}
				} else {
					if (hops < 2) {
						w18 = -1127;
					} else {
						if (hops < 4) {
							w18 = -1057;
						} else {
							w18 = -1139;
						}
					}
				}
			}
		} else {
			if (rel_time < 8665) {
				if (hops < 2) {
					w18 = -1917;
				} else {
					w18 = -1834;
				}
			} else {
				if (rel_time < 9004) {
					if (prod != 0) {
						if (prod != 3) {
							w18 = 1401;
						} else {
							w18 = 697;
						}
					} else {
						if (rel_time < 8816) {
							w18 = -1241;
						} else {
							w18 = -810;
						}
					}
				} else {
					if (rel_time < 9265) {
						if (prod != 0) {
							w18 = -1277;
						} else {
							w18 = 695;
						}
					} else {
						if (rel_time < 9572) {
							w18 = 169;
						} else {
							w18 = -50;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4099) {
			if (rel_time < 3779) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 3730) {
							w18 = -293;
						} else {
							w18 = -246;
						}
					} else {
						w18 = -474;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w18 = 201;
						} else {
							w18 = 326;
						}
					} else {
						w18 = 666;
					}
				}
			} else {
				if (hops < 2) {
					w18 = -550;
				} else {
					if (hops < 3) {
						w18 = -988;
					} else {
						if (hops < 4) {
							w18 = -1849;
						} else {
							w18 = -968;
						}
					}
				}
			}
		} else {
			if (rel_time < 4401) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w18 = 877;
						} else {
							w18 = 966;
						}
					} else {
						w18 = 704;
					}
				} else {
					w18 = 1592;
				}
			} else {
				if (rel_time < 4705) {
					if (hops < 4) {
						if (hops < 2) {
							w18 = -235;
						} else {
							w18 = -666;
						}
					} else {
						w18 = -1413;
					}
				} else {
					if (rel_time < 5616) {
						if (rel_time < 5316) {
							w18 = -37;
						} else {
							w18 = 1801;
						}
					} else {
						if (rel_time < 5921) {
							w18 = -1486;
						} else {
							w18 = 127;
						}
					}
				}
			}
		}
	}
	int w19;
	if (rel_time < 5623) {
		if (rel_time < 5616) {
			if (rel_time < 5567) {
				if (rel_time < 5519) {
					if (rel_time < 5214) {
						if (rel_time < 4303) {
							w19 = 2;
						} else {
							w19 = -167;
						}
					} else {
						if (prod != 4) {
							w19 = 738;
						} else {
							w19 = -1170;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 2) {
							w19 = 1029;
						} else {
							w19 = 787;
						}
					} else {
						if (hops < 2) {
							w19 = -1993;
						} else {
							w19 = -2238;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (hops < 2) {
						w19 = -1961;
					} else {
						w19 = -2292;
					}
				} else {
					if (hops < 2) {
						w19 = 1059;
					} else {
						if (hops < 4) {
							w19 = 806;
						} else {
							w19 = 863;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w19 = -1958;
			} else {
				if (hops < 4) {
					w19 = -2321;
				} else {
					w19 = -2147;
				}
			}
		}
	} else {
		if (rel_time < 5969) {
			if (prod != 0) {
				if (prod != 2) {
					if (prod != 4) {
						if (rel_time < 5670) {
							w19 = -2398;
						} else {
							w19 = 2532;
						}
					} else {
						if (rel_time < 5775) {
							w19 = 1480;
						} else {
							w19 = -1497;
						}
					}
				} else {
					if (hops < 2) {
						w19 = -783;
					} else {
						w19 = -723;
					}
				}
			} else {
				w19 = -1575;
			}
		} else {
			if (rel_time < 6075) {
				if (prod != 0) {
					w19 = -1486;
				} else {
					w19 = 1356;
				}
			} else {
				if (rel_time < 6083) {
					w19 = 1414;
				} else {
					if (rel_time < 6132) {
						if (prod != 0) {
							w19 = -2484;
						} else {
							w19 = 1473;
						}
					} else {
						if (prod != 3) {
							w19 = 50;
						} else {
							w19 = -126;
						}
					}
				}
			}
		}
	}
	int w20;
	if (cons != 0) {
		if (rel_time < 939) {
			if (rel_time < 890) {
				if (rel_time < 841) {
					if (rel_time < 743) {
						if (cons != 2) {
							w20 = -25;
						} else {
							w20 = 235;
						}
					} else {
						if (hops < 2) {
							w20 = 973;
						} else {
							w20 = 276;
						}
					}
				} else {
					if (hops < 2) {
						w20 = -1427;
					} else {
						if (hops < 3) {
							w20 = -555;
						} else {
							w20 = -443;
						}
					}
				}
			} else {
				if (hops < 2) {
					w20 = 1315;
				} else {
					if (hops < 3) {
						w20 = 814;
					} else {
						if (hops < 5) {
							w20 = 902;
						} else {
							w20 = 1073;
						}
					}
				}
			}
		} else {
			if (rel_time < 1091) {
				if (rel_time < 993) {
					if (hops < 2) {
						w20 = -93;
					} else {
						if (hops < 3) {
							w20 = 4;
						} else {
							w20 = 36;
						}
					}
				} else {
					if (hops < 2) {
						w20 = -1225;
					} else {
						if (hops < 3) {
							w20 = -484;
						} else {
							w20 = -584;
						}
					}
				}
			} else {
				if (rel_time < 1140) {
					if (hops < 2) {
						w20 = 900;
					} else {
						if (hops < 3) {
							w20 = 560;
						} else {
							w20 = 468;
						}
					}
				} else {
					if (rel_time < 1189) {
						if (hops < 2) {
							w20 = -1323;
						} else {
							w20 = -502;
						}
					} else {
						if (rel_time < 1340) {
							w20 = 228;
						} else {
							w20 = 2;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3356) {
			if (rel_time < 2604) {
				if (rel_time < 2153) {
					if (rel_time < 2003) {
						if (rel_time < 1852) {
							w20 = -62;
						} else {
							w20 = 423;
						}
					} else {
						if (hops < 4) {
							w20 = -708;
						} else {
							w20 = -451;
						}
					}
				} else {
					if (rel_time < 2304) {
						if (hops < 2) {
							w20 = 927;
						} else {
							w20 = 364;
						}
					} else {
						if (rel_time < 2454) {
							w20 = -370;
						} else {
							w20 = 243;
						}
					}
				}
			} else {
				if (rel_time < 2755) {
					if (hops < 2) {
						w20 = -480;
					} else {
						if (hops < 4) {
							w20 = -617;
						} else {
							w20 = -451;
						}
					}
				} else {
					if (rel_time < 2905) {
						if (hops < 2) {
							w20 = -357;
						} else {
							w20 = 263;
						}
					} else {
						if (rel_time < 3056) {
							w20 = -467;
						} else {
							w20 = -182;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w20 = 396;
			} else {
				if (hops < 4) {
					w20 = 204;
				} else {
					if (hops < 5) {
						w20 = 183;
					} else {
						w20 = 210;
					}
				}
			}
		}
	}
	int w21;
	if (rel_time < 6996) {
		if (rel_time < 6892) {
			if (rel_time < 6880) {
				if (rel_time < 6831) {
					if (rel_time < 6783) {
						if (rel_time < 6735) {
							w21 = 2;
						} else {
							w21 = -1272;
						}
					} else {
						if (prod != 2) {
							w21 = -2443;
						} else {
							w21 = 1405;
						}
					}
				} else {
					if (prod != 3) {
						w21 = 1429;
					} else {
						if (hops < 4) {
							w21 = -2452;
						} else {
							w21 = -2295;
						}
					}
				}
			} else {
				if (hops < 3) {
					w21 = 1429;
				} else {
					w21 = 1489;
				}
			}
		} else {
			if (prod != 0) {
				w21 = 1451;
			} else {
				w21 = -1606;
			}
		}
	} else {
		if (rel_time < 7042) {
			if (prod != 0) {
				w21 = 2509;
			} else {
				w21 = -1574;
			}
		} else {
			if (rel_time < 7187) {
				if (prod != 3) {
					if (prod != 1) {
						if (hops < 2) {
							w21 = -1595;
						} else {
							w21 = -1543;
						}
					} else {
						w21 = 2488;
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w21 = 2544;
						} else {
							w21 = 2667;
						}
					} else {
						w21 = 2496;
					}
				}
			} else {
				if (rel_time < 7355) {
					if (prod != 0) {
						if (rel_time < 7292) {
							w21 = -1511;
						} else {
							w21 = -2083;
						}
					} else {
						w21 = 1393;
					}
				} else {
					if (rel_time < 7399) {
						if (prod != 1) {
							w21 = 1388;
						} else {
							w21 = -1937;
						}
					} else {
						if (rel_time < 7445) {
							w21 = -1314;
						} else {
							w21 = 18;
						}
					}
				}
			}
		}
	}
	int w22;
	if (rel_time < 1852) {
		if (rel_time < 1702) {
			if (rel_time < 1522) {
				if (rel_time < 1401) {
					if (rel_time < 1310) {
						if (rel_time < 1280) {
							w22 = 2;
						} else {
							w22 = -337;
						}
					} else {
						if (rel_time < 1340) {
							w22 = 384;
						} else {
							w22 = 41;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 1490) {
							w22 = -428;
						} else {
							w22 = -218;
						}
					} else {
						if (hops < 5) {
							w22 = -104;
						} else {
							w22 = 83;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 1641) {
						if (rel_time < 1551) {
							w22 = 101;
						} else {
							w22 = 588;
						}
					} else {
						if (rel_time < 1672) {
							w22 = -24;
						} else {
							w22 = 217;
						}
					}
				} else {
					if (hops < 2) {
						w22 = -297;
					} else {
						if (hops < 5) {
							w22 = -104;
						} else {
							w22 = 57;
						}
					}
				}
			}
		} else {
			if (cons != 3) {
				if (rel_time < 1731) {
					if (hops < 5) {
						w22 = -766;
					} else {
						w22 = -402;
					}
				} else {
					if (rel_time < 1822) {
						if (hops < 5) {
							w22 = -161;
						} else {
							w22 = 424;
						}
					} else {
						if (hops < 5) {
							w22 = -264;
						} else {
							w22 = -765;
						}
					}
				}
			} else {
				if (hops < 2) {
					w22 = -782;
				} else {
					if (hops < 4) {
						w22 = -882;
					} else {
						w22 = -815;
					}
				}
			}
		}
	} else {
		if (rel_time < 1942) {
			if (cons != 2) {
				if (hops < 5) {
					if (rel_time < 1882) {
						if (hops < 2) {
							w22 = 882;
						} else {
							w22 = 815;
						}
					} else {
						if (hops < 2) {
							w22 = 819;
						} else {
							w22 = 721;
						}
					}
				} else {
					if (rel_time < 1882) {
						w22 = 335;
					} else {
						w22 = 239;
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w22 = 264;
					} else {
						if (hops < 4) {
							w22 = 172;
						} else {
							w22 = 211;
						}
					}
				} else {
					w22 = -297;
				}
			}
		} else {
			if (rel_time < 2153) {
				if (cons != 3) {
					if (cons != 1) {
						if (rel_time < 2123) {
							w22 = 64;
						} else {
							w22 = -331;
						}
					} else {
						if (hops < 2) {
							w22 = -978;
						} else {
							w22 = -629;
						}
					}
				} else {
					if (hops < 2) {
						w22 = -1155;
					} else {
						if (hops < 5) {
							w22 = -1010;
						} else {
							w22 = -766;
						}
					}
				}
			} else {
				if (rel_time < 2304) {
					if (cons != 2) {
						if (rel_time < 2242) {
							w22 = 674;
						} else {
							w22 = 319;
						}
					} else {
						if (hops < 2) {
							w22 = 244;
						} else {
							w22 = -139;
						}
					}
				} else {
					if (rel_time < 2333) {
						if (hops < 5) {
							w22 = -1286;
						} else {
							w22 = -1029;
						}
					} else {
						if (rel_time < 2363) {
							w22 = 922;
						} else {
							w22 = 2;
						}
					}
				}
			}
		}
	}
	int w23;
	if (rel_time < 4608) {
		if (rel_time < 4303) {
			if (rel_time < 4254) {
				if (prod != 4) {
					if (rel_time < 4000) {
						if (rel_time < 3681) {
							w23 = -4;
						} else {
							w23 = -289;
						}
					} else {
						if (prod != 2) {
							w23 = 1394;
						} else {
							w23 = -507;
						}
					}
				} else {
					if (rel_time < 3951) {
						if (hops < 3) {
							w23 = -361;
						} else {
							w23 = 241;
						}
					} else {
						if (rel_time < 4148) {
							w23 = -1698;
						} else {
							w23 = -1243;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w23 = 820;
					} else {
						if (hops < 3) {
							w23 = 1692;
						} else {
							w23 = 1402;
						}
					}
				} else {
					if (hops < 5) {
						w23 = 690;
					} else {
						w23 = 763;
					}
				}
			}
		} else {
			if (prod != 4) {
				if (prod != 2) {
					if (rel_time < 4559) {
						if (hops < 2) {
							w23 = -1133;
						} else {
							w23 = -1804;
						}
					} else {
						if (prod != 0) {
							w23 = 1564;
						} else {
							w23 = -1689;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w23 = 540;
						} else {
							w23 = 433;
						}
					} else {
						w23 = 878;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 4453) {
							w23 = 939;
						} else {
							w23 = 558;
						}
					} else {
						w23 = 1032;
					}
				} else {
					w23 = 1674;
				}
			}
		}
	} else {
		if (rel_time < 4754) {
			if (prod != 2) {
				if (hops < 2) {
					if (rel_time < 4705) {
						if (rel_time < 4657) {
							w23 = 932;
						} else {
							w23 = 1069;
						}
					} else {
						if (prod != 3) {
							w23 = -1067;
						} else {
							w23 = 276;
						}
					}
				} else {
					if (rel_time < 4705) {
						if (hops < 4) {
							w23 = 2011;
						} else {
							w23 = 2448;
						}
					} else {
						if (prod != 3) {
							w23 = -1495;
						} else {
							w23 = 1480;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 4657) {
							w23 = -51;
						} else {
							w23 = -27;
						}
					} else {
						w23 = -253;
					}
				} else {
					w23 = -628;
				}
			}
		} else {
			if (rel_time < 5059) {
				if (prod != 3) {
					if (prod != 1) {
						if (rel_time < 4860) {
							w23 = -271;
						} else {
							w23 = 670;
						}
					} else {
						if (hops < 2) {
							w23 = -331;
						} else {
							w23 = -1255;
						}
					}
				} else {
					if (rel_time < 5010) {
						if (hops < 2) {
							w23 = -1492;
						} else {
							w23 = -1334;
						}
					} else {
						if (hops < 2) {
							w23 = -1273;
						} else {
							w23 = -1150;
						}
					}
				}
			} else {
				if (rel_time < 5165) {
					if (prod != 0) {
						if (hops < 2) {
							w23 = 683;
						} else {
							w23 = 836;
						}
					} else {
						if (hops < 2) {
							w23 = -372;
						} else {
							w23 = -720;
						}
					}
				} else {
					if (rel_time < 5214) {
						if (prod != 0) {
							w23 = 1301;
						} else {
							w23 = -618;
						}
					} else {
						if (rel_time < 5219) {
							w23 = 860;
						} else {
							w23 = 4;
						}
					}
				}
			}
		}
	}
	int w24;
	if (rel_time < 9865) {
		if (rel_time < 9818) {
			if (rel_time < 9772) {
				if (rel_time < 6429) {
					if (rel_time < 6083) {
						if (rel_time < 5775) {
							w24 = -8;
						} else {
							w24 = 310;
						}
					} else {
						if (prod != 3) {
							w24 = 65;
						} else {
							w24 = -2426;
						}
					}
				} else {
					if (rel_time < 6478) {
						if (prod != 1) {
							w24 = -1596;
						} else {
							w24 = 2495;
						}
					} else {
						if (rel_time < 6487) {
							w24 = -1577;
						} else {
							w24 = 34;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 2) {
						w24 = 280;
					} else {
						w24 = 243;
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w24 = -690;
						} else {
							w24 = -627;
						}
					} else {
						w24 = -335;
					}
				}
			}
		} else {
			if (prod != 2) {
				w24 = -852;
			} else {
				if (hops < 5) {
					if (hops < 4) {
						w24 = 979;
					} else {
						w24 = 1055;
					}
				} else {
					w24 = 658;
				}
			}
		}
	} else {
		if (rel_time < 9888) {
			if (hops < 2) {
				w24 = -900;
			} else {
				if (hops < 3) {
					w24 = -779;
				} else {
					if (hops < 4) {
						w24 = -849;
					} else {
						w24 = -782;
					}
				}
			}
		} else {
			if (prod != 2) {
				if (rel_time < 10220) {
					if (prod != 0) {
						if (rel_time < 9931) {
							w24 = 147;
						} else {
							w24 = 832;
						}
					} else {
						if (rel_time < 10033) {
							w24 = -739;
						} else {
							w24 = -1693;
						}
					}
				} else {
					if (rel_time < 10530) {
						if (prod != 3) {
							w24 = -42;
						} else {
							w24 = -834;
						}
					} else {
						if (rel_time < 10795) {
							w24 = 281;
						} else {
							w24 = -116;
						}
					}
				}
			} else {
				if (rel_time < 10127) {
					w24 = -1763;
				} else {
					if (rel_time < 10173) {
						if (hops < 2) {
							w24 = -656;
						} else {
							w24 = -591;
						}
					} else {
						if (rel_time < 10484) {
							w24 = 356;
						} else {
							w24 = -119;
						}
					}
				}
			}
		}
	}
	int w25;
	if (prod != 1) {
		if (rel_time < 10944) {
			if (rel_time < 9865) {
				if (rel_time < 9725) {
					if (rel_time < 9265) {
						if (rel_time < 9170) {
							w25 = 12;
						} else {
							w25 = 873;
						}
					} else {
						if (rel_time < 9528) {
							w25 = -328;
						} else {
							w25 = 58;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 9772) {
							w25 = 665;
						} else {
							w25 = 450;
						}
					} else {
						if (hops < 2) {
							w25 = -470;
						} else {
							w25 = -375;
						}
					}
				}
			} else {
				if (rel_time < 10127) {
					if (prod != 4) {
						if (rel_time < 10033) {
							w25 = -416;
						} else {
							w25 = -867;
						}
					} else {
						if (rel_time < 9931) {
							w25 = 151;
						} else {
							w25 = 996;
						}
					}
				} else {
					if (rel_time < 10634) {
						if (rel_time < 10324) {
							w25 = -94;
						} else {
							w25 = 123;
						}
					} else {
						if (prod != 3) {
							w25 = -302;
						} else {
							w25 = 300;
						}
					}
				}
			}
		} else {
			if (prod != 3) {
				if (rel_time < 11113) {
					if (rel_time < 11069) {
						if (rel_time < 10986) {
							w25 = 401;
						} else {
							w25 = 261;
						}
					} else {
						if (hops < 3) {
							w25 = 690;
						} else {
							w25 = 982;
						}
					}
				} else {
					if (hops < 2) {
						w25 = 222;
					} else {
						if (hops < 4) {
							w25 = 193;
						} else {
							w25 = 223;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11069) {
							w25 = -208;
						} else {
							w25 = -145;
						}
					} else {
						w25 = -223;
					}
				} else {
					if (rel_time < 11069) {
						w25 = -364;
					} else {
						if (hops < 4) {
							w25 = 84;
						} else {
							w25 = -1;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6783) {
			if (rel_time < 6478) {
				if (rel_time < 6178) {
					if (rel_time < 5873) {
						if (rel_time < 5567) {
							w25 = -205;
						} else {
							w25 = 1105;
						}
					} else {
						if (rel_time < 6132) {
							w25 = -1280;
						} else {
							w25 = -2502;
						}
					}
				} else {
					if (rel_time < 6429) {
						w25 = 2485;
					} else {
						if (hops < 4) {
							w25 = 1275;
						} else {
							w25 = 1160;
						}
					}
				}
			} else {
				if (rel_time < 6735) {
					w25 = -2544;
				} else {
					if (hops < 4) {
						w25 = -1927;
					} else {
						w25 = -1751;
					}
				}
			}
		} else {
			if (rel_time < 7090) {
				if (hops < 4) {
					if (hops < 2) {
						w25 = 1186;
					} else {
						if (hops < 3) {
							w25 = 1344;
						} else {
							w25 = 1240;
						}
					}
				} else {
					w25 = 1141;
				}
			} else {
				if (rel_time < 7399) {
					if (rel_time < 7340) {
						w25 = -1500;
					} else {
						if (hops < 4) {
							w25 = -1032;
						} else {
							w25 = -871;
						}
					}
				} else {
					if (rel_time < 7693) {
						if (rel_time < 7645) {
							w25 = 2975;
						} else {
							w25 = 1209;
						}
					} else {
						if (rel_time < 8000) {
							w25 = -921;
						} else {
							w25 = -72;
						}
					}
				}
			}
		}
	}
	int w26;
	if (prod != 3) {
		if (rel_time < 8603) {
			if (rel_time < 7693) {
				if (rel_time < 7355) {
					if (rel_time < 6892) {
						if (rel_time < 6783) {
							w26 = -12;
						} else {
							w26 = 690;
						}
					} else {
						if (prod != 2) {
							w26 = -160;
						} else {
							w26 = -822;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 4) {
							w26 = 662;
						} else {
							w26 = 1898;
						}
					} else {
						w26 = -1155;
					}
				}
			} else {
				if (rel_time < 7802) {
					if (rel_time < 7741) {
						w26 = -1607;
					} else {
						if (hops < 2) {
							w26 = -1204;
						} else {
							w26 = -1149;
						}
					}
				} else {
					if (rel_time < 8263) {
						if (prod != 2) {
							w26 = 98;
						} else {
							w26 = 626;
						}
					} else {
						if (prod != 0) {
							w26 = -692;
						} else {
							w26 = 665;
						}
					}
				}
			}
		} else {
			if (rel_time < 8710) {
				if (rel_time < 8665) {
					if (hops < 4) {
						w26 = 738;
					} else {
						w26 = 893;
					}
				} else {
					if (hops < 4) {
						w26 = 971;
					} else {
						w26 = 1121;
					}
				}
			} else {
				if (rel_time < 9026) {
					if (prod != 1) {
						if (prod != 4) {
							w26 = -719;
						} else {
							w26 = 31;
						}
					} else {
						if (hops < 2) {
							w26 = 455;
						} else {
							w26 = 538;
						}
					}
				} else {
					if (rel_time < 9416) {
						if (prod != 1) {
							w26 = 690;
						} else {
							w26 = -818;
						}
					} else {
						if (rel_time < 9818) {
							w26 = -150;
						} else {
							w26 = 21;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6582) {
			if (rel_time < 6275) {
				if (rel_time < 5969) {
					if (rel_time < 5670) {
						if (rel_time < 5364) {
							w26 = 175;
						} else {
							w26 = -1103;
						}
					} else {
						if (hops < 4) {
							w26 = 1123;
						} else {
							w26 = 1006;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w26 = -1210;
						} else {
							w26 = -1276;
						}
					} else {
						w26 = -1094;
					}
				}
			} else {
				w26 = 2568;
			}
		} else {
			if (rel_time < 6880) {
				if (hops < 4) {
					if (hops < 2) {
						w26 = -1209;
					} else {
						w26 = -1283;
					}
				} else {
					w26 = -1175;
				}
			} else {
				if (rel_time < 7187) {
					if (hops < 4) {
						if (hops < 2) {
							w26 = 1247;
						} else {
							w26 = 1309;
						}
					} else {
						w26 = 1224;
					}
				} else {
					if (rel_time < 7493) {
						if (rel_time < 7445) {
							w26 = -1330;
						} else {
							w26 = -1928;
						}
					} else {
						if (rel_time < 7802) {
							w26 = 1165;
						} else {
							w26 = -55;
						}
					}
				}
			}
		}
	}
	int w27;
	if (hops < 5) {
		if (hops < 2) {
			if (rel_time < 2153) {
				if (rel_time < 2003) {
					if (rel_time < 1852) {
						if (rel_time < 474) {
							w27 = 81;
						} else {
							w27 = -91;
						}
					} else {
						if (cons != 4) {
							w27 = 325;
						} else {
							w27 = 89;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 2032) {
							w27 = -483;
						} else {
							w27 = -284;
						}
					} else {
						w27 = -572;
					}
				}
			} else {
				if (rel_time < 2304) {
					if (cons != 2) {
						if (rel_time < 2242) {
							w27 = 598;
						} else {
							w27 = 384;
						}
					} else {
						w27 = 128;
					}
				} else {
					if (rel_time < 2393) {
						if (cons != 2) {
							w27 = -1191;
						} else {
							w27 = 437;
						}
					} else {
						if (rel_time < 2543) {
							w27 = 413;
						} else {
							w27 = -25;
						}
					}
				}
			}
		} else {
			if (prod != 3) {
				if (rel_time < 2604) {
					if (rel_time < 2454) {
						if (rel_time < 2363) {
							w27 = 8;
						} else {
							w27 = -310;
						}
					} else {
						if (rel_time < 2484) {
							w27 = 1053;
						} else {
							w27 = 247;
						}
					}
				} else {
					if (rel_time < 2694) {
						if (cons != 2) {
							w27 = -1156;
						} else {
							w27 = 50;
						}
					} else {
						if (rel_time < 2875) {
							w27 = 339;
						} else {
							w27 = -9;
						}
					}
				}
			} else {
				if (rel_time < 8403) {
					if (rel_time < 8095) {
						if (rel_time < 7802) {
							w27 = 97;
						} else {
							w27 = -526;
						}
					} else {
						if (rel_time < 8355) {
							w27 = 791;
						} else {
							w27 = 1861;
						}
					}
				} else {
					if (rel_time < 8710) {
						if (rel_time < 8665) {
							w27 = -861;
						} else {
							w27 = -2468;
						}
					} else {
						if (rel_time < 9004) {
							w27 = 974;
						} else {
							w27 = -85;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2875) {
			if (rel_time < 2755) {
				if (rel_time < 2604) {
					if (rel_time < 2454) {
						if (rel_time < 939) {
							w27 = 230;
						} else {
							w27 = 89;
						}
					} else {
						if (rel_time < 2484) {
							w27 = 718;
						} else {
							w27 = 244;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 2634) {
							w27 = -564;
						} else {
							w27 = 143;
						}
					} else {
						w27 = -786;
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 2844) {
						w27 = 875;
					} else {
						w27 = 264;
					}
				} else {
					w27 = 55;
				}
			}
		} else {
			if (rel_time < 3056) {
				if (cons != 3) {
					if (rel_time < 3026) {
						if (cons != 1) {
							w27 = -13;
						} else {
							w27 = -475;
						}
					} else {
						w27 = -559;
					}
				} else {
					w27 = -750;
				}
			} else {
				if (rel_time < 3145) {
					if (rel_time < 3115) {
						if (rel_time < 3086) {
							w27 = 515;
						} else {
							w27 = 248;
						}
					} else {
						w27 = 850;
					}
				} else {
					if (rel_time < 3356) {
						if (rel_time < 3206) {
							w27 = 215;
						} else {
							w27 = -352;
						}
					} else {
						if (rel_time < 3952) {
							w27 = 231;
						} else {
							w27 = 35;
						}
					}
				}
			}
		}
	}
	int w28;
	if (cons != 0) {
		if (rel_time < 939) {
			if (rel_time < 890) {
				if (rel_time < 841) {
					if (rel_time < 688) {
						if (rel_time < 617) {
							w28 = 34;
						} else {
							w28 = -207;
						}
					} else {
						if (hops < 3) {
							w28 = 324;
						} else {
							w28 = -6;
						}
					}
				} else {
					if (hops < 2) {
						w28 = -665;
					} else {
						if (hops < 3) {
							w28 = -278;
						} else {
							w28 = -234;
						}
					}
				}
			} else {
				if (hops < 2) {
					w28 = 707;
				} else {
					if (hops < 3) {
						w28 = 408;
					} else {
						w28 = 449;
					}
				}
			}
		} else {
			if (rel_time < 1091) {
				if (rel_time < 993) {
					if (hops < 5) {
						if (hops < 3) {
							w28 = 2;
						} else {
							w28 = 22;
						}
					} else {
						w28 = -55;
					}
				} else {
					if (hops < 2) {
						w28 = -564;
					} else {
						if (hops < 3) {
							w28 = -243;
						} else {
							w28 = -297;
						}
					}
				}
			} else {
				if (rel_time < 1140) {
					if (hops < 2) {
						w28 = 499;
					} else {
						if (hops < 5) {
							w28 = 244;
						} else {
							w28 = 349;
						}
					}
				} else {
					if (rel_time < 1189) {
						if (hops < 2) {
							w28 = -613;
						} else {
							w28 = -254;
						}
					} else {
						if (rel_time < 1280) {
							w28 = 217;
						} else {
							w28 = 2;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3356) {
			if (rel_time < 3206) {
				if (rel_time < 3056) {
					if (rel_time < 2604) {
						if (rel_time < 1250) {
							w28 = -78;
						} else {
							w28 = 10;
						}
					} else {
						if (rel_time < 2755) {
							w28 = -371;
						} else {
							w28 = -84;
						}
					}
				} else {
					if (hops < 2) {
						w28 = 337;
					} else {
						if (hops < 4) {
							w28 = -52;
						} else {
							w28 = 198;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w28 = -408;
					} else {
						if (hops < 3) {
							w28 = -316;
						} else {
							w28 = -291;
						}
					}
				} else {
					if (hops < 5) {
						w28 = 16;
					} else {
						w28 = 50;
					}
				}
			}
		} else {
			if (hops < 2) {
				w28 = 215;
			} else {
				if (hops < 5) {
					if (hops < 4) {
						w28 = 111;
					} else {
						w28 = 100;
					}
				} else {
					w28 = -5;
				}
			}
		}
	}
	int w29;
	if (rel_time < 2755) {
		if (rel_time < 2604) {
			if (rel_time < 2454) {
				if (rel_time < 2363) {
					if (rel_time < 2333) {
						if (rel_time < 2304) {
							w29 = 2;
						} else {
							w29 = -441;
						}
					} else {
						if (hops < 2) {
							w29 = 218;
						} else {
							w29 = 475;
						}
					}
				} else {
					if (rel_time < 2393) {
						if (hops < 2) {
							w29 = -1116;
						} else {
							w29 = -613;
						}
					} else {
						if (hops < 2) {
							w29 = -231;
						} else {
							w29 = 73;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 2543) {
						if (hops < 2) {
							w29 = 1280;
						} else {
							w29 = 635;
						}
					} else {
						if (hops < 2) {
							w29 = -182;
						} else {
							w29 = 21;
						}
					}
				} else {
					if (hops < 2) {
						w29 = -1051;
					} else {
						if (hops < 5) {
							w29 = -323;
						} else {
							w29 = -43;
						}
					}
				}
			}
		} else {
			if (rel_time < 2634) {
				if (hops < 2) {
					w29 = -881;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w29 = -659;
						} else {
							w29 = -621;
						}
					} else {
						w29 = -285;
					}
				}
			} else {
				if (cons != 3) {
					if (rel_time < 2664) {
						if (hops < 2) {
							w29 = 385;
						} else {
							w29 = 41;
						}
					} else {
						if (hops < 2) {
							w29 = 32;
						} else {
							w29 = -184;
						}
					}
				} else {
					if (hops < 2) {
						w29 = -717;
					} else {
						if (hops < 5) {
							w29 = -506;
						} else {
							w29 = -396;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2844) {
			if (cons != 2) {
				if (hops < 5) {
					if (hops < 2) {
						w29 = 906;
					} else {
						if (rel_time < 2785) {
							w29 = 718;
						} else {
							w29 = 819;
						}
					}
				} else {
					if (rel_time < 2785) {
						w29 = 388;
					} else {
						w29 = 487;
					}
				}
			} else {
				if (hops < 2) {
					w29 = 64;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w29 = -81;
						} else {
							w29 = -44;
						}
					} else {
						w29 = 27;
					}
				}
			}
		} else {
			if (rel_time < 2995) {
				if (rel_time < 2965) {
					if (rel_time < 2935) {
						if (rel_time < 2905) {
							w29 = 45;
						} else {
							w29 = -362;
						}
					} else {
						if (hops < 4) {
							w29 = 659;
						} else {
							w29 = -146;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w29 = -897;
						} else {
							w29 = -1359;
						}
					} else {
						w29 = -378;
					}
				}
			} else {
				if (rel_time < 3145) {
					if (rel_time < 3115) {
						if (rel_time < 3086) {
							w29 = 124;
						} else {
							w29 = -311;
						}
					} else {
						if (hops < 2) {
							w29 = 384;
						} else {
							w29 = 904;
						}
					}
				} else {
					if (rel_time < 3356) {
						if (cons != 3) {
							w29 = -81;
						} else {
							w29 = -615;
						}
					} else {
						if (cons != 3) {
							w29 = 0;
						} else {
							w29 = 283;
						}
					}
				}
			}
		}
	}
	int w30;
	if (rel_time < 9463) {
		if (rel_time < 9218) {
			if (prod != 1) {
				if (rel_time < 9170) {
					if (rel_time < 5267) {
						if (rel_time < 5214) {
							w30 = -3;
						} else {
							w30 = -1128;
						}
					} else {
						if (rel_time < 5616) {
							w30 = 483;
						} else {
							w30 = -8;
						}
					}
				} else {
					if (hops < 4) {
						w30 = 999;
					} else {
						w30 = 1121;
					}
				}
			} else {
				if (rel_time < 9170) {
					if (rel_time < 5267) {
						if (rel_time < 4352) {
							w30 = -167;
						} else {
							w30 = 417;
						}
					} else {
						if (rel_time < 5567) {
							w30 = -1379;
						} else {
							w30 = -3;
						}
					}
				} else {
					w30 = -1057;
				}
			}
		} else {
			if (prod != 3) {
				if (rel_time < 9312) {
					if (rel_time < 9265) {
						if (hops < 4) {
							w30 = 980;
						} else {
							w30 = 1116;
						}
					} else {
						w30 = 690;
					}
				} else {
					if (prod != 0) {
						if (rel_time < 9416) {
							w30 = 52;
						} else {
							w30 = 589;
						}
					} else {
						if (rel_time < 9416) {
							w30 = -686;
						} else {
							w30 = -268;
						}
					}
				}
			} else {
				if (rel_time < 9265) {
					if (hops < 2) {
						w30 = -1880;
					} else {
						w30 = -1754;
					}
				} else {
					if (hops < 2) {
						w30 = -890;
					} else {
						if (hops < 5) {
							w30 = -764;
						} else {
							w30 = -876;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9486) {
			if (hops < 2) {
				w30 = 565;
			} else {
				if (hops < 5) {
					if (hops < 3) {
						w30 = 672;
					} else {
						if (hops < 4) {
							w30 = 607;
						} else {
							w30 = 650;
						}
					}
				} else {
					w30 = 537;
				}
			}
		} else {
			if (prod != 3) {
				if (rel_time < 9818) {
					if (prod != 0) {
						if (rel_time < 9528) {
							w30 = -111;
						} else {
							w30 = -417;
						}
					} else {
						if (rel_time < 9725) {
							w30 = 160;
						} else {
							w30 = 412;
						}
					}
				} else {
					if (rel_time < 10127) {
						if (prod != 1) {
							w30 = -10;
						} else {
							w30 = 546;
						}
					} else {
						if (rel_time < 10324) {
							w30 = -315;
						} else {
							w30 = 23;
						}
					}
				}
			} else {
				if (rel_time < 9621) {
					if (hops < 2) {
						if (rel_time < 9572) {
							w30 = 540;
						} else {
							w30 = 641;
						}
					} else {
						if (rel_time < 9572) {
							w30 = 669;
						} else {
							w30 = 742;
						}
					}
				} else {
					if (rel_time < 10220) {
						if (rel_time < 9931) {
							w30 = -184;
						} else {
							w30 = 444;
						}
					} else {
						if (rel_time < 10530) {
							w30 = -422;
						} else {
							w30 = 106;
						}
					}
				}
			}
		}
	}
	int w31;
	if (rel_time < 176) {
		if (rel_time < 69) {
			if (hops < 2) {
				w31 = 104;
			} else {
				if (hops < 5) {
					if (hops < 3) {
						w31 = 26;
					} else {
						if (hops < 4) {
							w31 = 69;
						} else {
							w31 = 34;
						}
					}
				} else {
					w31 = -58;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w31 = 118;
					} else {
						w31 = 129;
					}
				} else {
					w31 = 97;
				}
			} else {
				if (hops < 5) {
					w31 = 237;
				} else {
					w31 = 127;
				}
			}
		}
	} else {
		if (hops < 4) {
			if (prod != 3) {
				if (rel_time < 6381) {
					if (rel_time < 6132) {
						if (rel_time < 5670) {
							w31 = -2;
						} else {
							w31 = -264;
						}
					} else {
						if (prod != 0) {
							w31 = 1254;
						} else {
							w31 = -1643;
						}
					}
				} else {
					if (rel_time < 6582) {
						if (prod != 1) {
							w31 = -1261;
						} else {
							w31 = 778;
						}
					} else {
						if (rel_time < 6687) {
							w31 = 674;
						} else {
							w31 = -4;
						}
					}
				}
			} else {
				if (rel_time < 3827) {
					if (hops < 3) {
						if (hops < 2) {
							w31 = -421;
						} else {
							w31 = -281;
						}
					} else {
						w31 = -748;
					}
				} else {
					if (rel_time < 4148) {
						if (rel_time < 4099) {
							w31 = 638;
						} else {
							w31 = 1402;
						}
					} else {
						if (rel_time < 4453) {
							w31 = -657;
						} else {
							w31 = 37;
						}
					}
				}
			}
		} else {
			if (cons != 1) {
				if (rel_time < 1310) {
					if (rel_time < 1221) {
						if (cons != 0) {
							w31 = -7;
						} else {
							w31 = 148;
						}
					} else {
						if (hops < 5) {
							w31 = -570;
						} else {
							w31 = -230;
						}
					}
				} else {
					if (rel_time < 1340) {
						if (hops < 5) {
							w31 = 538;
						} else {
							w31 = 598;
						}
					} else {
						if (rel_time < 6381) {
							w31 = 41;
						} else {
							w31 = 2;
						}
					}
				}
			} else {
				if (rel_time < 3387) {
					if (rel_time < 3236) {
						if (rel_time < 2785) {
							w31 = 11;
						} else {
							w31 = -234;
						}
					} else {
						if (hops < 5) {
							w31 = 487;
						} else {
							w31 = 276;
						}
					}
				} else {
					if (hops < 5) {
						w31 = -660;
					} else {
						w31 = -364;
					}
				}
			}
		}
	}
	int w32;
	if (prod != 0) {
		if (rel_time < 10726) {
			if (rel_time < 10530) {
				if (rel_time < 10173) {
					if (rel_time < 9818) {
						if (rel_time < 9621) {
							w32 = -3;
						} else {
							w32 = -218;
						}
					} else {
						if (prod != 2) {
							w32 = 188;
						} else {
							w32 = -3;
						}
					}
				} else {
					if (prod != 1) {
						if (prod != 3) {
							w32 = 36;
						} else {
							w32 = -179;
						}
					} else {
						if (rel_time < 10392) {
							w32 = -158;
						} else {
							w32 = -1141;
						}
					}
				}
			} else {
				if (rel_time < 10680) {
					if (rel_time < 10634) {
						if (hops < 4) {
							w32 = 369;
						} else {
							w32 = 540;
						}
					} else {
						w32 = 1441;
					}
				} else {
					if (prod != 1) {
						w32 = -519;
					} else {
						if (hops < 5) {
							w32 = 272;
						} else {
							w32 = 407;
						}
					}
				}
			}
		} else {
			if (rel_time < 10986) {
				if (rel_time < 10944) {
					if (prod != 3) {
						if (rel_time < 10795) {
							w32 = -231;
						} else {
							w32 = -355;
						}
					} else {
						if (rel_time < 10795) {
							w32 = 48;
						} else {
							w32 = 531;
						}
					}
				} else {
					if (hops < 3) {
						w32 = -931;
					} else {
						w32 = -1142;
					}
				}
			} else {
				if (prod != 3) {
					if (prod != 1) {
						if (rel_time < 11113) {
							w32 = 136;
						} else {
							w32 = 89;
						}
					} else {
						if (hops < 3) {
							w32 = 66;
						} else {
							w32 = -74;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11069) {
							w32 = -122;
						} else {
							w32 = -109;
						}
					} else {
						if (rel_time < 11069) {
							w32 = -188;
						} else {
							w32 = 20;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4303) {
			if (rel_time < 4000) {
				if (rel_time < 3952) {
					if (rel_time < 3951) {
						if (rel_time < 3681) {
							w32 = 229;
						} else {
							w32 = 1723;
						}
					} else {
						if (hops < 3) {
							w32 = 150;
						} else {
							w32 = -166;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w32 = -1258;
						} else {
							w32 = -2173;
						}
					} else {
						if (hops < 5) {
							w32 = -841;
						} else {
							w32 = -1113;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 4254) {
						w32 = 120;
					} else {
						w32 = 429;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w32 = 867;
						} else {
							w32 = 714;
						}
					} else {
						w32 = 339;
					}
				}
			}
		} else {
			if (rel_time < 4608) {
				if (hops < 2) {
					if (rel_time < 4559) {
						w32 = -412;
					} else {
						w32 = -663;
					}
				} else {
					if (hops < 4) {
						w32 = -1098;
					} else {
						w32 = -597;
					}
				}
			} else {
				if (rel_time < 5519) {
					if (rel_time < 5214) {
						if (rel_time < 4913) {
							w32 = 182;
						} else {
							w32 = -297;
						}
					} else {
						if (hops < 2) {
							w32 = 1297;
						} else {
							w32 = 1031;
						}
					}
				} else {
					if (rel_time < 5824) {
						if (rel_time < 5775) {
							w32 = -668;
						} else {
							w32 = -845;
						}
					} else {
						if (rel_time < 6132) {
							w32 = 673;
						} else {
							w32 = -11;
						}
					}
				}
			}
		}
	}
	int w33;
	if (rel_time < 5623) {
		if (rel_time < 5616) {
			if (prod != 4) {
				if (rel_time < 5316) {
					if (rel_time < 4864) {
						if (rel_time < 4608) {
							w33 = -2;
						} else {
							w33 = 246;
						}
					} else {
						if (rel_time < 5059) {
							w33 = -245;
						} else {
							w33 = -39;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 5364) {
							w33 = 2023;
						} else {
							w33 = 352;
						}
					} else {
						if (rel_time < 5519) {
							w33 = -1712;
						} else {
							w33 = -287;
						}
					}
				}
			} else {
				if (rel_time < 5165) {
					if (rel_time < 4254) {
						if (rel_time < 3951) {
							w33 = -60;
						} else {
							w33 = -691;
						}
					} else {
						if (rel_time < 4559) {
							w33 = 562;
						} else {
							w33 = 142;
						}
					}
				} else {
					if (hops < 2) {
						w33 = -657;
					} else {
						w33 = -908;
					}
				}
			}
		} else {
			if (hops < 2) {
				w33 = -437;
			} else {
				if (hops < 3) {
					w33 = -704;
				} else {
					if (hops < 4) {
						w33 = -640;
					} else {
						w33 = -590;
					}
				}
			}
		}
	} else {
		if (rel_time < 5670) {
			if (prod != 3) {
				if (hops < 3) {
					w33 = 731;
				} else {
					w33 = 780;
				}
			} else {
				if (hops < 4) {
					w33 = -787;
				} else {
					w33 = -652;
				}
			}
		} else {
			if (rel_time < 5969) {
				if (prod != 1) {
					if (prod != 3) {
						if (prod != 4) {
							w33 = -396;
						} else {
							w33 = 360;
						}
					} else {
						if (hops < 3) {
							w33 = 534;
						} else {
							w33 = 470;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w33 = 664;
						} else {
							w33 = 764;
						}
					} else {
						w33 = 448;
					}
				}
			} else {
				if (rel_time < 6075) {
					if (prod != 0) {
						if (hops < 4) {
							w33 = -761;
						} else {
							w33 = -907;
						}
					} else {
						w33 = 333;
					}
				} else {
					if (rel_time < 6083) {
						if (hops < 4) {
							w33 = 347;
						} else {
							w33 = 232;
						}
					} else {
						if (rel_time < 6132) {
							w33 = -422;
						} else {
							w33 = 10;
						}
					}
				}
			}
		}
	}
	return (181882 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32 + w33) >> 8;
}
