#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 65) {
				if (hops < 3) {
					w0 = -27653;
				} else {
					w0 = -25747;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1341) {
						if (rel_time < 856) {
							w0 = -19434;
						} else {
							w0 = -23824;
						}
					} else {
						if (hops < 2) {
							w0 = -19397;
						} else {
							w0 = -18520;
						}
					}
				} else {
					if (rel_time < 1341) {
						if (rel_time < 972) {
							w0 = -17491;
						} else {
							w0 = -21871;
						}
					} else {
						if (hops < 4) {
							w0 = -17661;
						} else {
							w0 = -16521;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 670) {
					if (hops < 3) {
						if (rel_time < 584) {
							w0 = 10446;
						} else {
							w0 = 11746;
						}
					} else {
						if (rel_time < 584) {
							w0 = 12406;
						} else {
							w0 = 13658;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11435) {
							w0 = 1759;
						} else {
							w0 = 17310;
						}
					} else {
						if (hops < 3) {
							w0 = -1498;
						} else {
							w0 = 411;
						}
					}
				}
			} else {
				if (rel_time < 423) {
					if (hops < 3) {
						if (hops < 2) {
							w0 = 7251;
						} else {
							w0 = 8125;
						}
					} else {
						if (hops < 4) {
							w0 = 9004;
						} else {
							w0 = 10091;
						}
					}
				} else {
					if (rel_time < 1808) {
						if (hops < 3) {
							w0 = -4616;
						} else {
							w0 = -1776;
						}
					} else {
						if (hops < 3) {
							w0 = -8752;
						} else {
							w0 = -6809;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 337) {
			if (hops < 3) {
				w0 = 33100;
			} else {
				w0 = 35031;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1313) {
					w0 = 23911;
				} else {
					if (rel_time < 11090) {
						if (hops < 2) {
							w0 = 21495;
						} else {
							w0 = 22273;
						}
					} else {
						w0 = 23897;
					}
				}
			} else {
				if (rel_time < 1313) {
					if (hops < 4) {
						w0 = 25217;
					} else {
						w0 = 26350;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11090) {
							w0 = 23248;
						} else {
							w0 = 25255;
						}
					} else {
						if (rel_time < 11090) {
							w0 = 24342;
						} else {
							w0 = 26373;
						}
					}
				}
			}
		}
	}
	int w1;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 65) {
				if (hops < 4) {
					if (hops < 2) {
						w1 = -14240;
					} else {
						w1 = -13387;
					}
				} else {
					w1 = -12271;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1341) {
						if (rel_time < 856) {
							w1 = -9719;
						} else {
							w1 = -11918;
						}
					} else {
						if (hops < 2) {
							w1 = -9699;
						} else {
							w1 = -9260;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1341) {
							w1 = -9665;
						} else {
							w1 = -8699;
						}
					} else {
						if (rel_time < 1341) {
							w1 = -8215;
						} else {
							w1 = -7520;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 670) {
					if (hops < 4) {
						if (hops < 2) {
							w1 = 5241;
						} else {
							w1 = 6121;
						}
					} else {
						if (hops < 5) {
							w1 = 6971;
						} else {
							w1 = 7833;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11435) {
							w1 = 880;
						} else {
							w1 = 8658;
						}
					} else {
						if (hops < 2) {
							w1 = -1180;
						} else {
							w1 = 8;
						}
					}
				}
			} else {
				if (rel_time < 423) {
					if (hops < 3) {
						if (hops < 2) {
							w1 = 3629;
						} else {
							w1 = 4067;
						}
					} else {
						if (hops < 5) {
							w1 = 4646;
						} else {
							w1 = 5715;
						}
					}
				} else {
					if (rel_time < 1266) {
						if (rel_time < 855) {
							w1 = -3420;
						} else {
							w1 = 912;
						}
					} else {
						if (hops < 4) {
							w1 = -4202;
						} else {
							w1 = -2784;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 337) {
			if (hops < 4) {
				if (hops < 2) {
					w1 = 16137;
				} else {
					w1 = 17012;
				}
			} else {
				w1 = 18096;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1313) {
					if (hops < 2) {
						w1 = 11601;
					} else {
						w1 = 12374;
					}
				} else {
					if (rel_time < 11090) {
						if (hops < 2) {
							w1 = 10748;
						} else {
							w1 = 11137;
						}
					} else {
						if (hops < 2) {
							w1 = 11601;
						} else {
							w1 = 12349;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 1313) {
						w1 = 12766;
					} else {
						if (rel_time < 11090) {
							w1 = 11762;
						} else {
							w1 = 12802;
						}
					}
				} else {
					if (rel_time < 1313) {
						w1 = 13803;
					} else {
						w1 = 12867;
					}
				}
			}
		}
	}
	int w2;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 65) {
				if (hops < 5) {
					if (hops < 2) {
						w2 = -7127;
					} else {
						w2 = -6634;
					}
				} else {
					w2 = -5365;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1341) {
						if (rel_time < 542) {
							w2 = -4187;
						} else {
							w2 = -5737;
						}
					} else {
						if (hops < 2) {
							w2 = -4850;
						} else {
							w2 = -4571;
						}
					}
				} else {
					if (rel_time < 542) {
						w2 = -2958;
					} else {
						if (rel_time < 1341) {
							w2 = -4939;
						} else {
							w2 = -4061;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 670) {
					if (rel_time < 584) {
						if (hops < 4) {
							w2 = 2442;
						} else {
							w2 = 3189;
						}
					} else {
						if (hops < 4) {
							w2 = 3094;
						} else {
							w2 = 3802;
						}
					}
				} else {
					if (hops < 4) {
						if (cons != 5) {
							w2 = -570;
						} else {
							w2 = 53;
						}
					} else {
						if (size < 69) {
							w2 = 2397;
						} else {
							w2 = 747;
						}
					}
				}
			} else {
				if (rel_time < 423) {
					if (hops < 4) {
						if (hops < 2) {
							w2 = 1816;
						} else {
							w2 = 2101;
						}
					} else {
						if (hops < 5) {
							w2 = 2504;
						} else {
							w2 = 2877;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1808) {
							w2 = -1965;
						} else {
							w2 = -2684;
						}
					} else {
						if (rel_time < 1808) {
							w2 = -53;
						} else {
							w2 = -1711;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 337) {
			if (hops < 4) {
				if (hops < 2) {
					w2 = 8077;
				} else {
					w2 = 8512;
				}
			} else {
				w2 = 9064;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 1313) {
					if (hops < 2) {
						w2 = 5804;
					} else {
						w2 = 6214;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11070) {
							w2 = 5374;
						} else {
							w2 = 5806;
						}
					} else {
						if (rel_time < 11090) {
							w2 = 5641;
						} else {
							w2 = 6217;
						}
					}
				}
			} else {
				if (rel_time < 1313) {
					w2 = 6673;
				} else {
					if (rel_time < 11090) {
						if (hops < 5) {
							w2 = 6070;
						} else {
							w2 = 6376;
						}
					} else {
						if (hops < 5) {
							w2 = 6603;
						} else {
							w2 = 7359;
						}
					}
				}
			}
		}
	}
	int w3;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 65) {
				if (hops < 4) {
					if (hops < 2) {
						w3 = -3567;
					} else {
						w3 = -3383;
					}
				} else {
					if (hops < 5) {
						w3 = -3077;
					} else {
						w3 = -2703;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1341) {
						if (rel_time < 856) {
							w3 = -2793;
						} else {
							w3 = -3518;
						}
					} else {
						if (rel_time < 1953) {
							w3 = -2582;
						} else {
							w3 = -2414;
						}
					}
				} else {
					if (rel_time < 972) {
						if (hops < 4) {
							w3 = -1923;
						} else {
							w3 = -1576;
						}
					} else {
						if (rel_time < 1341) {
							w3 = -3137;
						} else {
							w3 = -2216;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (hops < 2) {
					if (rel_time < 769) {
						if (cons != 5) {
							w3 = 1295;
						} else {
							w3 = 924;
						}
					} else {
						if (rel_time < 1196) {
							w3 = -2741;
						} else {
							w3 = -431;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11435) {
							w3 = 710;
						} else {
							w3 = 4572;
						}
					} else {
						if (rel_time < 769) {
							w3 = 1631;
						} else {
							w3 = 3;
						}
					}
				}
			} else {
				if (rel_time < 423) {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 909;
						} else {
							w3 = 987;
						}
					} else {
						if (hops < 5) {
							w3 = 1191;
						} else {
							w3 = 1448;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1808) {
							w3 = -983;
						} else {
							w3 = -1342;
						}
					} else {
						if (rel_time < 1266) {
							w3 = 233;
						} else {
							w3 = -838;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 337) {
			if (hops < 5) {
				if (hops < 2) {
					w3 = 4042;
				} else {
					w3 = 4273;
				}
			} else {
				w3 = 5171;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1313) {
					if (hops < 2) {
						w3 = 2903;
					} else {
						w3 = 3086;
					}
				} else {
					if (rel_time < 11090) {
						if (hops < 2) {
							w3 = 2687;
						} else {
							w3 = 2749;
						}
					} else {
						if (hops < 2) {
							w3 = 2906;
						} else {
							w3 = 3077;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 1313) {
						w3 = 3184;
					} else {
						if (rel_time < 11090) {
							w3 = 2971;
						} else {
							w3 = 3223;
						}
					}
				} else {
					if (rel_time < 1313) {
						w3 = 3599;
					} else {
						if (rel_time < 11090) {
							w3 = 3189;
						} else {
							w3 = 3705;
						}
					}
				}
			}
		}
	}
	int w4;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 65) {
				if (hops < 4) {
					if (hops < 2) {
						w4 = -1786;
					} else {
						w4 = -1693;
					}
				} else {
					if (hops < 5) {
						w4 = -1543;
					} else {
						w4 = -1362;
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 3) {
						if (rel_time < 542) {
							w4 = -983;
						} else {
							w4 = -1245;
						}
					} else {
						if (rel_time < 1341) {
							w4 = -1301;
						} else {
							w4 = -1062;
						}
					}
				} else {
					if (rel_time < 1953) {
						if (rel_time < 972) {
							w4 = -630;
						} else {
							w4 = -1152;
						}
					} else {
						if (rel_time < 4368) {
							w4 = -567;
						} else {
							w4 = -630;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 769) {
					if (rel_time < 670) {
						if (hops < 2) {
							w4 = 562;
						} else {
							w4 = 869;
						}
					} else {
						if (hops < 4) {
							w4 = 357;
						} else {
							w4 = 833;
						}
					}
				} else {
					if (rel_time < 1196) {
						if (hops < 2) {
							w4 = -1103;
						} else {
							w4 = -1753;
						}
					} else {
						if (cons != 5) {
							w4 = -268;
						} else {
							w4 = 93;
						}
					}
				}
			} else {
				if (cons != 5) {
					if (size < 69) {
						if (rel_time < 1266) {
							w4 = 1110;
						} else {
							w4 = 504;
						}
					} else {
						if (rel_time < 670) {
							w4 = 1438;
						} else {
							w4 = 887;
						}
					}
				} else {
					if (rel_time < 1658) {
						if (size < 69) {
							w4 = -110;
						} else {
							w4 = 1728;
						}
					} else {
						if (size < 69) {
							w4 = 1701;
						} else {
							w4 = 1308;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 337) {
			if (hops < 5) {
				if (hops < 2) {
					w4 = 2023;
				} else {
					w4 = 2138;
				}
			} else {
				w4 = 2603;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 1313) {
					if (hops < 2) {
						w4 = 1452;
					} else {
						if (rel_time < 733) {
							w4 = 1511;
						} else {
							w4 = 1580;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11090) {
							w4 = 1358;
						} else {
							w4 = 1495;
						}
					} else {
						if (rel_time < 11090) {
							w4 = 1439;
						} else {
							w4 = 1548;
						}
					}
				}
			} else {
				if (rel_time < 11090) {
					if (rel_time < 1313) {
						if (hops < 5) {
							w4 = 1652;
						} else {
							w4 = 1805;
						}
					} else {
						if (hops < 5) {
							w4 = 1550;
						} else {
							w4 = 1595;
						}
					}
				} else {
					w4 = 1748;
				}
			}
		}
	}
	int w5;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1953) {
				if (hops < 2) {
					if (rel_time < 1341) {
						if (rel_time < 542) {
							w5 = -792;
						} else {
							w5 = -1067;
						}
					} else {
						w5 = -671;
					}
				} else {
					if (rel_time < 972) {
						if (rel_time < 65) {
							w5 = -822;
						} else {
							w5 = -327;
						}
					} else {
						if (hops < 3) {
							w5 = -600;
						} else {
							w5 = -938;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						if (rel_time < 3789) {
							w5 = -534;
						} else {
							w5 = -597;
						}
					} else {
						if (rel_time < 7458) {
							w5 = -509;
						} else {
							w5 = -466;
						}
					}
				} else {
					if (rel_time < 3755) {
						w5 = -276;
					} else {
						if (rel_time < 7424) {
							w5 = -330;
						} else {
							w5 = -301;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 11768) {
					if (prod != 3) {
						if (hops < 2) {
							w5 = -332;
						} else {
							w5 = -92;
						}
					} else {
						if (rel_time < 670) {
							w5 = 422;
						} else {
							w5 = 100;
						}
					}
				} else {
					if (rel_time < 12206) {
						if (hops < 2) {
							w5 = 3280;
						} else {
							w5 = 2091;
						}
					} else {
						if (prod != 3) {
							w5 = -217;
						} else {
							w5 = 138;
						}
					}
				}
			} else {
				if (cons != 5) {
					if (rel_time < 1282) {
						if (rel_time < 1198) {
							w5 = 208;
						} else {
							w5 = 1450;
						}
					} else {
						if (hops < 5) {
							w5 = -28;
						} else {
							w5 = 380;
						}
					}
				} else {
					if (rel_time < 1658) {
						if (rel_time < 1342) {
							w5 = 325;
						} else {
							w5 = -1411;
						}
					} else {
						if (rel_time < 11768) {
							w5 = 553;
						} else {
							w5 = 1421;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 337) {
			if (hops < 5) {
				if (hops < 2) {
					w5 = 1012;
				} else {
					w5 = 1069;
				}
			} else {
				w5 = 1310;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 2507) {
					if (hops < 2) {
						w5 = 716;
					} else {
						if (hops < 3) {
							w5 = 774;
						} else {
							w5 = 750;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 10458) {
							w5 = 658;
						} else {
							w5 = 696;
						}
					} else {
						if (rel_time < 11682) {
							w5 = 700;
						} else {
							w5 = 795;
						}
					}
				}
			} else {
				if (rel_time < 11090) {
					if (rel_time < 1313) {
						if (hops < 5) {
							w5 = 827;
						} else {
							w5 = 906;
						}
					} else {
						if (hops < 5) {
							w5 = 775;
						} else {
							w5 = 798;
						}
					}
				} else {
					if (hops < 5) {
						w5 = 830;
					} else {
						w5 = 997;
					}
				}
			}
		}
	}
	int w6;
	if (size < 133) {
		if (size < 37) {
			if (hops < 4) {
				if (rel_time < 1953) {
					if (rel_time < 542) {
						if (rel_time < 65) {
							w6 = -461;
						} else {
							w6 = -165;
						}
					} else {
						if (hops < 3) {
							w6 = -397;
						} else {
							w6 = -539;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 8069) {
							w6 = -289;
						} else {
							w6 = -329;
						}
					} else {
						if (rel_time < 7424) {
							w6 = -279;
						} else {
							w6 = -234;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 972) {
						if (rel_time < 65) {
							w6 = -363;
						} else {
							w6 = -27;
						}
					} else {
						if (rel_time < 1341) {
							w6 = -619;
						} else {
							w6 = -233;
						}
					}
				} else {
					if (rel_time < 1341) {
						if (rel_time < 972) {
							w6 = -194;
						} else {
							w6 = -473;
						}
					} else {
						if (rel_time < 1953) {
							w6 = 255;
						} else {
							w6 = -154;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (hops < 3) {
					if (rel_time < 769) {
						if (rel_time < 656) {
							w6 = 542;
						} else {
							w6 = 255;
						}
					} else {
						if (rel_time < 1658) {
							w6 = -715;
						} else {
							w6 = -18;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 1658) {
							w6 = -467;
						} else {
							w6 = 742;
						}
					} else {
						if (hops < 4) {
							w6 = -72;
						} else {
							w6 = 151;
						}
					}
				}
			} else {
				if (rel_time < 1808) {
					if (rel_time < 855) {
						if (rel_time < 423) {
							w6 = 195;
						} else {
							w6 = -528;
						}
					} else {
						if (hops < 2) {
							w6 = -17;
						} else {
							w6 = 831;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 2421) {
							w6 = -570;
						} else {
							w6 = -335;
						}
					} else {
						if (rel_time < 2421) {
							w6 = -187;
						} else {
							w6 = 71;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 337) {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w6 = 507;
					} else {
						w6 = 557;
					}
				} else {
					w6 = 468;
				}
			} else {
				if (hops < 5) {
					w6 = 579;
				} else {
					w6 = 660;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 2529) {
					if (hops < 2) {
						if (rel_time < 1313) {
							w6 = 369;
						} else {
							w6 = 347;
						}
					} else {
						if (rel_time < 733) {
							w6 = 371;
						} else {
							w6 = 393;
						}
					}
				} else {
					if (rel_time < 11682) {
						if (rel_time < 11090) {
							w6 = 331;
						} else {
							w6 = 361;
						}
					} else {
						w6 = 412;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1313) {
						if (rel_time < 733) {
							w6 = 378;
						} else {
							w6 = 424;
						}
					} else {
						if (rel_time < 2529) {
							w6 = 315;
						} else {
							w6 = 376;
						}
					}
				} else {
					if (rel_time < 11090) {
						if (rel_time < 1313) {
							w6 = 425;
						} else {
							w6 = 391;
						}
					} else {
						if (hops < 5) {
							w6 = 416;
						} else {
							w6 = 502;
						}
					}
				}
			}
		}
	}
	int w7;
	if (size < 133) {
		if (rel_time < 11768) {
			if (prod != 3) {
				if (rel_time < 769) {
					if (rel_time < 542) {
						if (rel_time < 65) {
							w7 = -222;
						} else {
							w7 = 21;
						}
					} else {
						if (hops < 3) {
							w7 = 240;
						} else {
							w7 = 546;
						}
					}
				} else {
					if (cons != 5) {
						if (rel_time < 1266) {
							w7 = 78;
						} else {
							w7 = -136;
						}
					} else {
						if (rel_time < 1658) {
							w7 = -633;
						} else {
							w7 = 36;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1282) {
						if (rel_time < 670) {
							w7 = 13;
						} else {
							w7 = 324;
						}
					} else {
						if (rel_time < 3117) {
							w7 = -71;
						} else {
							w7 = 22;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3730) {
							w7 = 95;
						} else {
							w7 = 212;
						}
					} else {
						if (hops < 5) {
							w7 = 55;
						} else {
							w7 = 254;
						}
					}
				}
			}
		} else {
			if (rel_time < 12206) {
				if (hops < 2) {
					w7 = 1650;
				} else {
					if (hops < 3) {
						w7 = 708;
					} else {
						if (hops < 4) {
							w7 = 1214;
						} else {
							w7 = 1334;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (hops < 4) {
						if (hops < 2) {
							w7 = -135;
						} else {
							w7 = -65;
						}
					} else {
						if (rel_time < 12278) {
							w7 = -38;
						} else {
							w7 = -383;
						}
					}
				} else {
					if (hops < 2) {
						w7 = 7;
					} else {
						if (hops < 3) {
							w7 = 217;
						} else {
							w7 = 57;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 337) {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w7 = 254;
					} else {
						w7 = 279;
					}
				} else {
					w7 = 234;
				}
			} else {
				if (hops < 5) {
					w7 = 290;
				} else {
					w7 = 332;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 2529) {
					if (hops < 2) {
						if (rel_time < 733) {
							w7 = 191;
						} else {
							w7 = 175;
						}
					} else {
						if (rel_time < 1917) {
							w7 = 199;
						} else {
							w7 = 179;
						}
					}
				} else {
					if (rel_time < 11682) {
						if (rel_time < 11090) {
							w7 = 166;
						} else {
							w7 = 180;
						}
					} else {
						w7 = 207;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 1313) {
						if (rel_time < 733) {
							w7 = 186;
						} else {
							w7 = 216;
						}
					} else {
						if (rel_time < 2529) {
							w7 = 164;
						} else {
							w7 = 191;
						}
					}
				} else {
					if (rel_time < 1917) {
						w7 = 239;
					} else {
						if (rel_time < 11090) {
							w7 = 202;
						} else {
							w7 = 253;
						}
					}
				}
			}
		}
	}
	int w8;
	if (size < 133) {
		if (hops < 3) {
			if (size < 69) {
				if (rel_time < 11596) {
					if (rel_time < 1658) {
						if (rel_time < 1341) {
							w8 = -86;
						} else {
							w8 = -1584;
						}
					} else {
						if (rel_time < 1984) {
							w8 = 183;
						} else {
							w8 = -88;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 826;
					} else {
						if (rel_time < 11773) {
							w8 = 342;
						} else {
							w8 = 372;
						}
					}
				}
			} else {
				if (rel_time < 1412) {
					if (rel_time < 1282) {
						if (rel_time < 1198) {
							w8 = 106;
						} else {
							w8 = 231;
						}
					} else {
						if (hops < 2) {
							w8 = 959;
						} else {
							w8 = 901;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 1982) {
							w8 = 139;
						} else {
							w8 = -68;
						}
					} else {
						if (rel_time < 2506) {
							w8 = -76;
						} else {
							w8 = 51;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 5) {
					if (rel_time < 1266) {
						if (rel_time < 1200) {
							w8 = -66;
						} else {
							w8 = 1684;
						}
					} else {
						if (rel_time < 1341) {
							w8 = -382;
						} else {
							w8 = -39;
						}
					}
				} else {
					if (prod != 2) {
						if (size < 37) {
							w8 = -17;
						} else {
							w8 = 126;
						}
					} else {
						if (rel_time < 1982) {
							w8 = 684;
						} else {
							w8 = 252;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1658) {
						if (rel_time < 1196) {
							w8 = 269;
						} else {
							w8 = -1062;
						}
					} else {
						if (rel_time < 2262) {
							w8 = 1116;
						} else {
							w8 = 565;
						}
					}
				} else {
					if (rel_time < 584) {
						if (hops < 5) {
							w8 = 513;
						} else {
							w8 = 1384;
						}
					} else {
						if (rel_time < 11435) {
							w8 = -44;
						} else {
							w8 = 668;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 337) {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w8 = 127;
					} else {
						w8 = 140;
					}
				} else {
					w8 = 117;
				}
			} else {
				w8 = 151;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 4957) {
					if (hops < 2) {
						if (rel_time < 2529) {
							w8 = 90;
						} else {
							w8 = 77;
						}
					} else {
						if (rel_time < 2529) {
							w8 = 93;
						} else {
							w8 = 101;
						}
					}
				} else {
					if (rel_time < 11090) {
						if (rel_time < 6809) {
							w8 = 79;
						} else {
							w8 = 84;
						}
					} else {
						if (rel_time < 11682) {
							w8 = 90;
						} else {
							w8 = 100;
						}
					}
				}
			} else {
				if (rel_time < 10465) {
					if (rel_time < 6198) {
						if (rel_time < 4364) {
							w8 = 101;
						} else {
							w8 = 111;
						}
					} else {
						w8 = 92;
					}
				} else {
					w8 = 114;
				}
			}
		}
	}
	int w9;
	if (size < 69) {
		if (rel_time < 11596) {
			if (hops < 2) {
				if (rel_time < 1414) {
					if (rel_time < 1341) {
						if (rel_time < 1196) {
							w9 = -6;
						} else {
							w9 = -399;
						}
					} else {
						w9 = -1301;
					}
				} else {
					if (rel_time < 1808) {
						if (prod != 0) {
							w9 = 701;
						} else {
							w9 = -1293;
						}
					} else {
						if (rel_time < 1984) {
							w9 = 61;
						} else {
							w9 = -83;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 1266) {
						if (rel_time < 972) {
							w9 = -110;
						} else {
							w9 = 788;
						}
					} else {
						if (rel_time < 1808) {
							w9 = -212;
						} else {
							w9 = -50;
						}
					}
				} else {
					if (rel_time < 1658) {
						if (rel_time < 584) {
							w9 = 383;
						} else {
							w9 = -587;
						}
					} else {
						if (rel_time < 2262) {
							w9 = 549;
						} else {
							w9 = 122;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w9 = 413;
			} else {
				if (hops < 3) {
					w9 = 178;
				} else {
					w9 = 331;
				}
			}
		}
	} else {
		if (rel_time < 1982) {
			if (prod != 2) {
				if (rel_time < 670) {
					if (hops < 3) {
						if (rel_time < 656) {
							w9 = 88;
						} else {
							w9 = 0;
						}
					} else {
						if (rel_time < 337) {
							w9 = 67;
						} else {
							w9 = 261;
						}
					}
				} else {
					if (prod != 4) {
						if (hops < 4) {
							w9 = 47;
						} else {
							w9 = 6;
						}
					} else {
						if (hops < 3) {
							w9 = 5;
						} else {
							w9 = -80;
						}
					}
				}
			} else {
				if (rel_time < 769) {
					if (hops < 2) {
						w9 = 121;
					} else {
						if (hops < 3) {
							w9 = -125;
						} else {
							w9 = -28;
						}
					}
				} else {
					if (rel_time < 1412) {
						if (hops < 4) {
							w9 = 501;
						} else {
							w9 = 836;
						}
					} else {
						if (hops < 2) {
							w9 = 171;
						} else {
							w9 = 304;
						}
					}
				}
			}
		} else {
			if (prod != 2) {
				if (prod != 4) {
					if (hops < 2) {
						if (size < 133) {
							w9 = -16;
						} else {
							w9 = 41;
						}
					} else {
						if (rel_time < 3117) {
							w9 = 29;
						} else {
							w9 = 53;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w9 = -16;
						} else {
							w9 = -36;
						}
					} else {
						if (rel_time < 11667) {
							w9 = 67;
						} else {
							w9 = -20;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						if (rel_time < 11156) {
							w9 = -38;
						} else {
							w9 = -19;
						}
					} else {
						if (hops < 4) {
							w9 = -88;
						} else {
							w9 = -18;
						}
					}
				} else {
					if (rel_time < 11768) {
						if (rel_time < 2566) {
							w9 = 200;
						} else {
							w9 = 139;
						}
					} else {
						w9 = -109;
					}
				}
			}
		}
	}
	int w10;
	if (rel_time < 670) {
		if (prod != 6) {
			if (rel_time < 584) {
				if (hops < 5) {
					if (hops < 4) {
						if (rel_time < 423) {
							w10 = 181;
						} else {
							w10 = 129;
						}
					} else {
						if (rel_time < 423) {
							w10 = 104;
						} else {
							w10 = 66;
						}
					}
				} else {
					if (rel_time < 423) {
						w10 = -41;
					} else {
						w10 = 507;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 656) {
						w10 = 66;
					} else {
						if (hops < 2) {
							w10 = -46;
						} else {
							w10 = 57;
						}
					}
				} else {
					if (rel_time < 656) {
						if (hops < 4) {
							w10 = 132;
						} else {
							w10 = 18;
						}
					} else {
						if (hops < 4) {
							w10 = 141;
						} else {
							w10 = 225;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (size < 37) {
					if (rel_time < 65) {
						w10 = -111;
					} else {
						w10 = -180;
					}
				} else {
					w10 = 20;
				}
			} else {
				if (rel_time < 337) {
					if (rel_time < 65) {
						if (hops < 3) {
							w10 = 29;
						} else {
							w10 = -18;
						}
					} else {
						if (hops < 5) {
							w10 = 28;
						} else {
							w10 = 59;
						}
					}
				} else {
					if (hops < 3) {
						w10 = 80;
					} else {
						if (hops < 4) {
							w10 = 114;
						} else {
							w10 = 138;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1196) {
			if (rel_time < 769) {
				if (hops < 2) {
					if (size < 133) {
						w10 = 60;
					} else {
						w10 = 28;
					}
				} else {
					if (size < 133) {
						if (hops < 5) {
							w10 = -46;
						} else {
							w10 = 108;
						}
					} else {
						if (hops < 5) {
							w10 = 24;
						} else {
							w10 = 85;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (size < 37) {
						w10 = -254;
					} else {
						if (rel_time < 855) {
							w10 = 151;
						} else {
							w10 = 64;
						}
					}
				} else {
					if (rel_time < 855) {
						if (hops < 3) {
							w10 = -232;
						} else {
							w10 = -553;
						}
					} else {
						if (hops < 3) {
							w10 = -228;
						} else {
							w10 = -8;
						}
					}
				}
			}
		} else {
			if (rel_time < 1342) {
				if (prod != 2) {
					if (prod != 1) {
						if (hops < 3) {
							w10 = 75;
						} else {
							w10 = -104;
						}
					} else {
						if (hops < 2) {
							w10 = -299;
						} else {
							w10 = 394;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w10 = 234;
						} else {
							w10 = 203;
						}
					} else {
						if (hops < 5) {
							w10 = 362;
						} else {
							w10 = 103;
						}
					}
				}
			} else {
				if (rel_time < 1414) {
					if (size < 69) {
						if (hops < 5) {
							w10 = -566;
						} else {
							w10 = 589;
						}
					} else {
						if (hops < 4) {
							w10 = 230;
						} else {
							w10 = 1155;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 1658) {
							w10 = -554;
						} else {
							w10 = 6;
						}
					} else {
						if (rel_time < 1658) {
							w10 = 389;
						} else {
							w10 = -41;
						}
					}
				}
			}
		}
	}
	int w11;
	if (hops < 5) {
		if (hops < 2) {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 1808) {
						if (rel_time < 1412) {
							w11 = -5;
						} else {
							w11 = 319;
						}
					} else {
						if (rel_time < 1953) {
							w11 = -99;
						} else {
							w11 = -11;
						}
					}
				} else {
					if (rel_time < 3730) {
						if (rel_time < 2529) {
							w11 = 8;
						} else {
							w11 = -2;
						}
					} else {
						if (rel_time < 4957) {
							w11 = 30;
						} else {
							w11 = 17;
						}
					}
				}
			} else {
				if (rel_time < 11435) {
					if (rel_time < 1196) {
						if (rel_time < 584) {
							w11 = -34;
						} else {
							w11 = 32;
						}
					} else {
						if (rel_time < 1658) {
							w11 = -370;
						} else {
							w11 = -73;
						}
					}
				} else {
					if (rel_time < 11773) {
						w11 = 211;
					} else {
						w11 = 192;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (prod != 3) {
					if (hops < 4) {
						if (size < 133) {
							w11 = -27;
						} else {
							w11 = 16;
						}
					} else {
						if (rel_time < 12278) {
							w11 = 21;
						} else {
							w11 = -238;
						}
					}
				} else {
					if (rel_time < 1282) {
						if (hops < 4) {
							w11 = 102;
						} else {
							w11 = -97;
						}
					} else {
						if (rel_time < 2506) {
							w11 = -10;
						} else {
							w11 = 29;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 1658) {
							w11 = -213;
						} else {
							w11 = 56;
						}
					} else {
						if (rel_time < 1658) {
							w11 = 121;
						} else {
							w11 = 217;
						}
					}
				} else {
					if (rel_time < 11435) {
						if (rel_time < 2262) {
							w11 = 15;
						} else {
							w11 = -101;
						}
					} else {
						if (rel_time < 11773) {
							w11 = 154;
						} else {
							w11 = 182;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 973) {
			if (rel_time < 769) {
				if (prod != 0) {
					if (rel_time < 423) {
						if (size < 69) {
							w11 = -11;
						} else {
							w11 = 29;
						}
					} else {
						if (prod != 4) {
							w11 = 55;
						} else {
							w11 = 111;
						}
					}
				} else {
					w11 = 255;
				}
			} else {
				if (rel_time < 855) {
					w11 = -436;
				} else {
					if (rel_time < 972) {
						w11 = -155;
					} else {
						w11 = -41;
					}
				}
			}
		} else {
			if (rel_time < 1266) {
				if (rel_time < 1198) {
					w11 = 73;
				} else {
					w11 = 506;
				}
			} else {
				if (rel_time < 1282) {
					w11 = -272;
				} else {
					if (rel_time < 1984) {
						if (prod != 0) {
							w11 = 87;
						} else {
							w11 = 414;
						}
					} else {
						if (prod != 1) {
							w11 = 38;
						} else {
							w11 = 78;
						}
					}
				}
			}
		}
	}
	int w12;
	if (rel_time < 657) {
		if (prod != 6) {
			if (rel_time < 584) {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 423) {
							w12 = 191;
						} else {
							w12 = -17;
						}
					} else {
						if (rel_time < 423) {
							w12 = 37;
						} else {
							w12 = 174;
						}
					}
				} else {
					if (rel_time < 423) {
						if (hops < 5) {
							w12 = 42;
						} else {
							w12 = -15;
						}
					} else {
						if (hops < 5) {
							w12 = 26;
						} else {
							w12 = 128;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 656) {
						if (hops < 2) {
							w12 = 32;
						} else {
							w12 = 51;
						}
					} else {
						w12 = -18;
					}
				} else {
					if (rel_time < 656) {
						if (hops < 4) {
							w12 = 80;
						} else {
							w12 = -12;
						}
					} else {
						if (hops < 4) {
							w12 = 10;
						} else {
							w12 = 141;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (size < 37) {
					if (rel_time < 65) {
						w12 = -53;
					} else {
						w12 = -87;
					}
				} else {
					w12 = 6;
				}
			} else {
				if (rel_time < 337) {
					if (hops < 3) {
						if (rel_time < 65) {
							w12 = 28;
						} else {
							w12 = 4;
						}
					} else {
						if (hops < 4) {
							w12 = -9;
						} else {
							w12 = 13;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w12 = 54;
						} else {
							w12 = 69;
						}
					} else {
						w12 = 21;
					}
				}
			}
		}
	} else {
		if (rel_time < 1196) {
			if (prod != 1) {
				if (rel_time < 769) {
					if (hops < 2) {
						if (rel_time < 670) {
							w12 = -31;
						} else {
							w12 = 21;
						}
					} else {
						if (hops < 3) {
							w12 = -17;
						} else {
							w12 = 12;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w12 = -54;
						} else {
							w12 = 54;
						}
					} else {
						if (rel_time < 972) {
							w12 = -58;
						} else {
							w12 = -107;
						}
					}
				}
			} else {
				if (hops < 2) {
					w12 = 78;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w12 = -102;
						} else {
							w12 = -578;
						}
					} else {
						if (hops < 5) {
							w12 = 209;
						} else {
							w12 = -220;
						}
					}
				}
			}
		} else {
			if (rel_time < 1342) {
				if (prod != 2) {
					if (hops < 2) {
						if (size < 69) {
							w12 = -140;
						} else {
							w12 = 22;
						}
					} else {
						if (prod != 1) {
							w12 = 10;
						} else {
							w12 = 186;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w12 = 118;
						} else {
							w12 = 184;
						}
					} else {
						w12 = 9;
					}
				}
			} else {
				if (rel_time < 1808) {
					if (size < 69) {
						if (hops < 2) {
							w12 = -17;
						} else {
							w12 = -207;
						}
					} else {
						if (hops < 4) {
							w12 = 124;
						} else {
							w12 = 566;
						}
					}
				} else {
					if (rel_time < 1984) {
						if (cons != 5) {
							w12 = -14;
						} else {
							w12 = 184;
						}
					} else {
						if (rel_time < 2421) {
							w12 = -109;
						} else {
							w12 = -2;
						}
					}
				}
			}
		}
	}
	int w13;
	if (hops < 5) {
		if (prod != 2) {
			if (hops < 2) {
				if (prod != 0) {
					if (rel_time < 6703) {
						if (size < 37) {
							w13 = -17;
						} else {
							w13 = 8;
						}
					} else {
						if (prod != 6) {
							w13 = -15;
						} else {
							w13 = 8;
						}
					}
				} else {
					if (rel_time < 11435) {
						if (rel_time < 2262) {
							w13 = 15;
						} else {
							w13 = -57;
						}
					} else {
						w13 = 103;
					}
				}
			} else {
				if (prod != 0) {
					if (size < 69) {
						if (hops < 3) {
							w13 = 7;
						} else {
							w13 = -24;
						}
					} else {
						if (prod != 4) {
							w13 = 12;
						} else {
							w13 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w13 = 6;
						} else {
							w13 = 97;
						}
					} else {
						if (rel_time < 11435) {
							w13 = -35;
						} else {
							w13 = 82;
						}
					}
				}
			}
		} else {
			if (rel_time < 1982) {
				if (rel_time < 769) {
					if (hops < 2) {
						w13 = 22;
					} else {
						if (hops < 4) {
							w13 = -7;
						} else {
							w13 = -39;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w13 = 27;
						} else {
							w13 = 58;
						}
					} else {
						if (rel_time < 1341) {
							w13 = 254;
						} else {
							w13 = 88;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 11768) {
						if (rel_time < 3180) {
							w13 = -31;
						} else {
							w13 = -16;
						}
					} else {
						if (hops < 2) {
							w13 = -4;
						} else {
							w13 = 78;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11768) {
							w13 = -63;
						} else {
							w13 = 32;
						}
					} else {
						if (rel_time < 11768) {
							w13 = -8;
						} else {
							w13 = -119;
						}
					}
				}
			}
		}
	} else {
		if (prod != 6) {
			if (rel_time < 12284) {
				if (rel_time < 11679) {
					if (prod != 4) {
						if (rel_time < 855) {
							w13 = -11;
						} else {
							w13 = 29;
						}
					} else {
						if (rel_time < 11602) {
							w13 = 48;
						} else {
							w13 = -11;
						}
					}
				} else {
					if (prod != 4) {
						if (rel_time < 11768) {
							w13 = 73;
						} else {
							w13 = 141;
						}
					} else {
						if (rel_time < 12212) {
							w13 = -28;
						} else {
							w13 = 32;
						}
					}
				}
			} else {
				w13 = -76;
			}
		} else {
			if (rel_time < 3177) {
				if (rel_time < 1917) {
					if (size < 37) {
						if (rel_time < 542) {
							w13 = 5;
						} else {
							w13 = -52;
						}
					} else {
						if (rel_time < 733) {
							w13 = 9;
						} else {
							w13 = 40;
						}
					}
				} else {
					if (rel_time < 1953) {
						w13 = 190;
					} else {
						w13 = 21;
					}
				}
			} else {
				if (rel_time < 7424) {
					if (rel_time < 7421) {
						if (rel_time < 6809) {
							w13 = 3;
						} else {
							w13 = -17;
						}
					} else {
						w13 = -93;
					}
				} else {
					if (rel_time < 8036) {
						if (rel_time < 8033) {
							w13 = 16;
						} else {
							w13 = 116;
						}
					} else {
						if (rel_time < 11093) {
							w13 = -2;
						} else {
							w13 = 24;
						}
					}
				}
			}
		}
	}
	int w14;
	if (hops < 4) {
		if (rel_time < 656) {
			if (prod != 6) {
				if (rel_time < 423) {
					if (hops < 2) {
						w14 = 91;
					} else {
						if (hops < 3) {
							w14 = -3;
						} else {
							w14 = 57;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 584) {
							w14 = -16;
						} else {
							w14 = 12;
						}
					} else {
						if (hops < 3) {
							w14 = 74;
						} else {
							w14 = 10;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 337) {
						if (rel_time < 65) {
							w14 = -18;
						} else {
							w14 = -1;
						}
					} else {
						w14 = -35;
					}
				} else {
					if (rel_time < 337) {
						w14 = 1;
					} else {
						if (hops < 3) {
							w14 = 23;
						} else {
							w14 = 48;
						}
					}
				}
			}
		} else {
			if (rel_time < 1953) {
				if (prod != 0) {
					if (rel_time < 1658) {
						if (rel_time < 1412) {
							w14 = 3;
						} else {
							w14 = 379;
						}
					} else {
						if (size < 69) {
							w14 = -87;
						} else {
							w14 = -21;
						}
					}
				} else {
					if (rel_time < 1196) {
						if (hops < 2) {
							w14 = 36;
						} else {
							w14 = -70;
						}
					} else {
						if (hops < 3) {
							w14 = -231;
						} else {
							w14 = 38;
						}
					}
				}
			} else {
				if (rel_time < 1984) {
					if (size < 69) {
						if (hops < 2) {
							w14 = 188;
						} else {
							w14 = 76;
						}
					} else {
						if (hops < 2) {
							w14 = -16;
						} else {
							w14 = 15;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 2262) {
							w14 = 356;
						} else {
							w14 = 0;
						}
					} else {
						if (hops < 3) {
							w14 = 1;
						} else {
							w14 = -71;
						}
					}
				}
			}
		}
	} else {
		if (prod != 1) {
			if (rel_time < 2506) {
				if (rel_time < 1282) {
					if (rel_time < 1198) {
						if (rel_time < 972) {
							w14 = 16;
						} else {
							w14 = -55;
						}
					} else {
						if (hops < 5) {
							w14 = -275;
						} else {
							w14 = -157;
						}
					}
				} else {
					if (prod != 3) {
						if (size < 69) {
							w14 = 122;
						} else {
							w14 = 43;
						}
					} else {
						if (hops < 5) {
							w14 = 206;
						} else {
							w14 = 106;
						}
					}
				}
			} else {
				if (size < 69) {
					if (rel_time < 10824) {
						if (rel_time < 2873) {
							w14 = -58;
						} else {
							w14 = -23;
						}
					} else {
						if (rel_time < 11435) {
							w14 = 23;
						} else {
							w14 = 53;
						}
					}
				} else {
					if (rel_time < 3117) {
						if (rel_time < 3102) {
							w14 = 8;
						} else {
							w14 = 123;
						}
					} else {
						if (rel_time < 12284) {
							w14 = 4;
						} else {
							w14 = -51;
						}
					}
				}
			}
		} else {
			if (rel_time < 2421) {
				if (rel_time < 1266) {
					if (rel_time < 855) {
						if (hops < 5) {
							w14 = 75;
						} else {
							w14 = -55;
						}
					} else {
						if (hops < 5) {
							w14 = -89;
						} else {
							w14 = 148;
						}
					}
				} else {
					if (rel_time < 1808) {
						if (rel_time < 1658) {
							w14 = -356;
						} else {
							w14 = -172;
						}
					} else {
						if (hops < 5) {
							w14 = -13;
						} else {
							w14 = -43;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 6703) {
						if (rel_time < 6091) {
							w14 = 76;
						} else {
							w14 = 104;
						}
					} else {
						if (rel_time < 8536) {
							w14 = 13;
						} else {
							w14 = 73;
						}
					}
				} else {
					if (rel_time < 8536) {
						if (rel_time < 7159) {
							w14 = 41;
						} else {
							w14 = -43;
						}
					} else {
						if (rel_time < 9148) {
							w14 = 101;
						} else {
							w14 = 38;
						}
					}
				}
			}
		}
	}
	int w15;
	if (rel_time < 11161) {
		if (prod != 2) {
			if (hops < 2) {
				if (prod != 0) {
					if (rel_time < 1341) {
						if (rel_time < 1200) {
							w15 = 3;
						} else {
							w15 = -50;
						}
					} else {
						if (rel_time < 1658) {
							w15 = 470;
						} else {
							w15 = 0;
						}
					}
				} else {
					if (rel_time < 2262) {
						if (rel_time < 1658) {
							w15 = -20;
						} else {
							w15 = 99;
						}
					} else {
						if (rel_time < 2873) {
							w15 = -134;
						} else {
							w15 = -20;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						if (hops < 3) {
							w15 = 4;
						} else {
							w15 = -10;
						}
					} else {
						if (rel_time < 1808) {
							w15 = -9;
						} else {
							w15 = 10;
						}
					}
				} else {
					if (rel_time < 1658) {
						if (rel_time < 584) {
							w15 = 39;
						} else {
							w15 = -49;
						}
					} else {
						if (hops < 4) {
							w15 = 31;
						} else {
							w15 = -11;
						}
					}
				}
			}
		} else {
			if (rel_time < 1982) {
				if (rel_time < 769) {
					if (hops < 2) {
						w15 = 10;
					} else {
						if (hops < 5) {
							w15 = -10;
						} else {
							w15 = 18;
						}
					}
				} else {
					if (rel_time < 1953) {
						if (hops < 5) {
							w15 = 40;
						} else {
							w15 = -22;
						}
					} else {
						if (hops < 4) {
							w15 = 1;
						} else {
							w15 = 33;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 3) {
						if (rel_time < 8100) {
							w15 = -7;
						} else {
							w15 = -15;
						}
					} else {
						if (hops < 4) {
							w15 = -33;
						} else {
							w15 = -8;
						}
					}
				} else {
					if (rel_time < 10518) {
						if (rel_time < 9294) {
							w15 = 30;
						} else {
							w15 = 46;
						}
					} else {
						w15 = 13;
					}
				}
			}
		}
	} else {
		if (size < 69) {
			if (rel_time < 11442) {
				if (hops < 2) {
					if (rel_time < 11435) {
						w15 = -57;
					} else {
						w15 = 21;
					}
				} else {
					if (rel_time < 11435) {
						if (hops < 4) {
							w15 = 70;
						} else {
							w15 = 8;
						}
					} else {
						if (hops < 4) {
							w15 = 17;
						} else {
							w15 = 44;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 11596) {
						w15 = 39;
					} else {
						w15 = 53;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 11596) {
							w15 = 44;
						} else {
							w15 = 8;
						}
					} else {
						w15 = 65;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 11596) {
						w15 = 66;
					} else {
						if (prod != 4) {
							w15 = 2;
						} else {
							w15 = -29;
						}
					}
				} else {
					if (rel_time < 11768) {
						if (prod != 3) {
							w15 = 8;
						} else {
							w15 = 36;
						}
					} else {
						if (rel_time < 12212) {
							w15 = 26;
						} else {
							w15 = 36;
						}
					}
				}
			} else {
				if (rel_time < 11768) {
					if (rel_time < 11596) {
						if (hops < 5) {
							w15 = -23;
						} else {
							w15 = 25;
						}
					} else {
						if (rel_time < 11602) {
							w15 = 43;
						} else {
							w15 = 4;
						}
					}
				} else {
					if (hops < 5) {
						if (prod != 2) {
							w15 = -26;
						} else {
							w15 = -5;
						}
					} else {
						if (prod != 3) {
							w15 = -8;
						} else {
							w15 = 50;
						}
					}
				}
			}
		}
	}
	int w16;
	if (rel_time < 1313) {
		if (rel_time < 1196) {
			if (rel_time < 769) {
				if (prod != 1) {
					if (hops < 2) {
						if (size < 37) {
							w16 = -15;
						} else {
							w16 = -3;
						}
					} else {
						if (size < 69) {
							w16 = 16;
						} else {
							w16 = 2;
						}
					}
				} else {
					if (hops < 2) {
						w16 = 44;
					} else {
						if (hops < 3) {
							w16 = -3;
						} else {
							w16 = 21;
						}
					}
				}
			} else {
				if (rel_time < 856) {
					if (hops < 3) {
						if (rel_time < 770) {
							w16 = 34;
						} else {
							w16 = -25;
						}
					} else {
						if (hops < 4) {
							w16 = -273;
						} else {
							w16 = 44;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 28;
						} else {
							w16 = -64;
						}
					} else {
						if (hops < 4) {
							w16 = 40;
						} else {
							w16 = -4;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (rel_time < 1200) {
						if (hops < 2) {
							w16 = 79;
						} else {
							w16 = 25;
						}
					} else {
						if (prod != 3) {
							w16 = -28;
						} else {
							w16 = 34;
						}
					}
				} else {
					if (size < 69) {
						w16 = 373;
					} else {
						if (rel_time < 1200) {
							w16 = -63;
						} else {
							w16 = 97;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 1266) {
						if (hops < 5) {
							w16 = -50;
						} else {
							w16 = 60;
						}
					} else {
						if (hops < 5) {
							w16 = 73;
						} else {
							w16 = 23;
						}
					}
				} else {
					if (hops < 5) {
						w16 = -133;
					} else {
						w16 = -74;
					}
				}
			}
		}
	} else {
		if (rel_time < 1878) {
			if (hops < 3) {
				if (prod != 0) {
					if (size < 69) {
						if (hops < 2) {
							w16 = 30;
						} else {
							w16 = 198;
						}
					} else {
						if (rel_time < 1809) {
							w16 = 1;
						} else {
							w16 = -74;
						}
					}
				} else {
					if (hops < 2) {
						w16 = -59;
					} else {
						w16 = -146;
					}
				}
			} else {
				if (prod != 1) {
					if (size < 37) {
						if (hops < 4) {
							w16 = -417;
						} else {
							w16 = 13;
						}
					} else {
						if (hops < 5) {
							w16 = 21;
						} else {
							w16 = 74;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1658) {
							w16 = -753;
						} else {
							w16 = -312;
						}
					} else {
						if (hops < 5) {
							w16 = -148;
						} else {
							w16 = 9;
						}
					}
				}
			}
		} else {
			if (rel_time < 1984) {
				if (hops < 3) {
					if (size < 37) {
						if (hops < 2) {
							w16 = -86;
						} else {
							w16 = -220;
						}
					} else {
						if (size < 69) {
							w16 = 47;
						} else {
							w16 = 6;
						}
					}
				} else {
					if (size < 37) {
						if (hops < 4) {
							w16 = 275;
						} else {
							w16 = 115;
						}
					} else {
						if (hops < 4) {
							w16 = -15;
						} else {
							w16 = 64;
						}
					}
				}
			} else {
				if (rel_time < 2421) {
					if (prod != 0) {
						if (hops < 4) {
							w16 = -68;
						} else {
							w16 = -16;
						}
					} else {
						if (hops < 3) {
							w16 = 212;
						} else {
							w16 = 80;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 5479) {
							w16 = 4;
						} else {
							w16 = -1;
						}
					} else {
						if (hops < 5) {
							w16 = -6;
						} else {
							w16 = 15;
						}
					}
				}
			}
		}
	}
	int w17;
	if (rel_time < 10983) {
		if (rel_time < 10465) {
			if (rel_time < 7995) {
				if (rel_time < 6787) {
					if (rel_time < 6267) {
						if (rel_time < 6198) {
							w17 = 0;
						} else {
							w17 = -13;
						}
					} else {
						if (prod != 1) {
							w17 = -1;
						} else {
							w17 = 49;
						}
					}
				} else {
					if (size < 37) {
						if (hops < 2) {
							w17 = 10;
						} else {
							w17 = -60;
						}
					} else {
						if (prod != 1) {
							w17 = -1;
						} else {
							w17 = -33;
						}
					}
				}
			} else {
				if (rel_time < 8074) {
					if (size < 37) {
						if (hops < 2) {
							w17 = 27;
						} else {
							w17 = 130;
						}
					} else {
						if (rel_time < 8013) {
							w17 = 5;
						} else {
							w17 = 15;
						}
					}
				} else {
					if (rel_time < 8536) {
						if (prod != 1) {
							w17 = 3;
						} else {
							w17 = -62;
						}
					} else {
						if (size < 37) {
							w17 = -21;
						} else {
							w17 = 4;
						}
					}
				}
			}
		} else {
			if (size < 37) {
				if (rel_time < 10481) {
					if (hops < 2) {
						w17 = 12;
					} else {
						if (hops < 5) {
							w17 = -22;
						} else {
							w17 = 49;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w17 = -45;
						} else {
							w17 = -57;
						}
					} else {
						if (hops < 5) {
							w17 = -25;
						} else {
							w17 = 12;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (prod != 0) {
						if (rel_time < 10518) {
							w17 = 8;
						} else {
							w17 = -11;
						}
					} else {
						if (rel_time < 10545) {
							w17 = -3;
						} else {
							w17 = 32;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w17 = -14;
						} else {
							w17 = 5;
						}
					} else {
						if (hops < 3) {
							w17 = -42;
						} else {
							w17 = -17;
						}
					}
				}
			}
		}
	} else {
		if (size < 69) {
			if (rel_time < 11093) {
				if (hops < 5) {
					if (hops < 2) {
						w17 = 88;
					} else {
						if (hops < 3) {
							w17 = 22;
						} else {
							w17 = 80;
						}
					}
				} else {
					w17 = -35;
				}
			} else {
				if (rel_time < 11127) {
					if (hops < 2) {
						w17 = -30;
					} else {
						w17 = -12;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11435) {
							w17 = -44;
						} else {
							w17 = 20;
						}
					} else {
						if (rel_time < 11435) {
							w17 = 29;
						} else {
							w17 = 15;
						}
					}
				}
			}
		} else {
			if (rel_time < 11054) {
				if (prod != 3) {
					if (hops < 3) {
						if (rel_time < 10990) {
							w17 = -11;
						} else {
							w17 = 20;
						}
					} else {
						if (rel_time < 10990) {
							w17 = 28;
						} else {
							w17 = -16;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w17 = 15;
						} else {
							w17 = 57;
						}
					} else {
						w17 = -17;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (size < 133) {
							w17 = -4;
						} else {
							w17 = 9;
						}
					} else {
						if (size < 133) {
							w17 = 12;
						} else {
							w17 = -4;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 11596) {
							w17 = -13;
						} else {
							w17 = -1;
						}
					} else {
						w17 = 5;
					}
				}
			}
		}
	}
	int w18;
	if (rel_time < 3484) {
		if (rel_time < 3180) {
			if (prod != 6) {
				if (rel_time < 1984) {
					if (rel_time < 1982) {
						if (rel_time < 1658) {
							w18 = 4;
						} else {
							w18 = -14;
						}
					} else {
						if (hops < 4) {
							w18 = 15;
						} else {
							w18 = 92;
						}
					}
				} else {
					if (prod != 4) {
						if (hops < 4) {
							w18 = -27;
						} else {
							w18 = 2;
						}
					} else {
						if (hops < 2) {
							w18 = 31;
						} else {
							w18 = -14;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1953) {
						if (size < 37) {
							w18 = -37;
						} else {
							w18 = 1;
						}
					} else {
						if (rel_time < 3142) {
							w18 = 8;
						} else {
							w18 = 37;
						}
					}
				} else {
					if (rel_time < 2529) {
						if (hops < 5) {
							w18 = 10;
						} else {
							w18 = -19;
						}
					} else {
						if (rel_time < 2566) {
							w18 = 53;
						} else {
							w18 = 21;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (size < 69) {
					w18 = -12;
				} else {
					w18 = 51;
				}
			} else {
				if (hops < 3) {
					w18 = -89;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w18 = -17;
						} else {
							w18 = -58;
						}
					} else {
						w18 = 33;
					}
				}
			}
		}
	} else {
		if (rel_time < 4368) {
			if (prod != 0) {
				if (rel_time < 3645) {
					if (hops < 5) {
						if (hops < 2) {
							w18 = 10;
						} else {
							w18 = 26;
						}
					} else {
						if (rel_time < 3486) {
							w18 = 9;
						} else {
							w18 = -36;
						}
					}
				} else {
					if (rel_time < 4364) {
						if (size < 133) {
							w18 = 6;
						} else {
							w18 = -2;
						}
					} else {
						if (hops < 2) {
							w18 = 52;
						} else {
							w18 = 6;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 3819) {
							w18 = -33;
						} else {
							w18 = -19;
						}
					} else {
						w18 = 22;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w18 = 126;
						} else {
							w18 = 87;
						}
					} else {
						if (rel_time < 3819) {
							w18 = -57;
						} else {
							w18 = -15;
						}
					}
				}
			}
		} else {
			if (size < 37) {
				if (hops < 2) {
					if (rel_time < 6235) {
						if (rel_time < 6201) {
							w18 = 32;
						} else {
							w18 = 72;
						}
					} else {
						if (rel_time < 9869) {
							w18 = 10;
						} else {
							w18 = -5;
						}
					}
				} else {
					if (rel_time < 7424) {
						if (hops < 3) {
							w18 = -55;
						} else {
							w18 = -16;
						}
					} else {
						if (rel_time < 8036) {
							w18 = 66;
						} else {
							w18 = -12;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 4707) {
						if (rel_time < 4429) {
							w18 = 19;
						} else {
							w18 = 66;
						}
					} else {
						if (rel_time < 5319) {
							w18 = -23;
						} else {
							w18 = -3;
						}
					}
				} else {
					if (rel_time < 4707) {
						if (hops < 4) {
							w18 = -17;
						} else {
							w18 = -32;
						}
					} else {
						if (size < 69) {
							w18 = 8;
						} else {
							w18 = 1;
						}
					}
				}
			}
		}
	}
	int w19;
	if (rel_time < 10983) {
		if (rel_time < 9600) {
			if (rel_time < 8712) {
				if (rel_time < 8100) {
					if (rel_time < 8033) {
						if (rel_time < 6703) {
							w19 = 1;
						} else {
							w19 = -4;
						}
					} else {
						if (rel_time < 8036) {
							w19 = 55;
						} else {
							w19 = 7;
						}
					}
				} else {
					if (prod != 1) {
						if (prod != 2) {
							w19 = 0;
						} else {
							w19 = -23;
						}
					} else {
						if (hops < 4) {
							w19 = -42;
						} else {
							w19 = 4;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 4) {
						if (prod != 0) {
							w19 = 1;
						} else {
							w19 = 16;
						}
					} else {
						if (prod != 4) {
							w19 = -18;
						} else {
							w19 = 15;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w19 = 69;
						} else {
							w19 = 56;
						}
					} else {
						if (hops < 4) {
							w19 = 12;
						} else {
							w19 = 60;
						}
					}
				}
			}
		} else {
			if (prod != 6) {
				if (hops < 2) {
					if (rel_time < 10376) {
						if (prod != 0) {
							w19 = -5;
						} else {
							w19 = -66;
						}
					} else {
						if (prod != 1) {
							w19 = 10;
						} else {
							w19 = -8;
						}
					}
				} else {
					if (rel_time < 10518) {
						if (prod != 0) {
							w19 = 1;
						} else {
							w19 = 24;
						}
					} else {
						if (cons != 5) {
							w19 = -7;
						} else {
							w19 = -16;
						}
					}
				}
			} else {
				if (rel_time < 9869) {
					if (hops < 2) {
						if (rel_time < 9851) {
							w19 = -4;
						} else {
							w19 = 14;
						}
					} else {
						if (hops < 5) {
							w19 = -21;
						} else {
							w19 = 14;
						}
					}
				} else {
					if (rel_time < 10481) {
						if (hops < 2) {
							w19 = 1;
						} else {
							w19 = -4;
						}
					} else {
						if (hops < 3) {
							w19 = -21;
						} else {
							w19 = -4;
						}
					}
				}
			}
		}
	} else {
		if (size < 37) {
			if (rel_time < 11093) {
				if (hops < 5) {
					if (hops < 3) {
						if (hops < 2) {
							w19 = 47;
						} else {
							w19 = 17;
						}
					} else {
						w19 = 46;
					}
				} else {
					w19 = -12;
				}
			} else {
				if (hops < 2) {
					w19 = -13;
				} else {
					w19 = 0;
				}
			}
		} else {
			if (rel_time < 11161) {
				if (prod != 2) {
					if (hops < 2) {
						if (rel_time < 11070) {
							w19 = 2;
						} else {
							w19 = -30;
						}
					} else {
						if (hops < 4) {
							w19 = 8;
						} else {
							w19 = -4;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w19 = -9;
						} else {
							w19 = -19;
						}
					} else {
						w19 = 10;
					}
				}
			} else {
				if (hops < 3) {
					if (prod != 4) {
						if (rel_time < 11435) {
							w19 = -7;
						} else {
							w19 = 8;
						}
					} else {
						if (rel_time < 11596) {
							w19 = 34;
						} else {
							w19 = -7;
						}
					}
				} else {
					if (rel_time < 11435) {
						if (hops < 4) {
							w19 = 53;
						} else {
							w19 = -14;
						}
					} else {
						if (hops < 5) {
							w19 = -4;
						} else {
							w19 = 11;
						}
					}
				}
			}
		}
	}
	int w20;
	if (rel_time < 3484) {
		if (rel_time < 3180) {
			if (prod != 1) {
				if (rel_time < 2566) {
					if (rel_time < 2506) {
						if (rel_time < 2491) {
							w20 = 1;
						} else {
							w20 = -21;
						}
					} else {
						if (size < 37) {
							w20 = 24;
						} else {
							w20 = 3;
						}
					}
				} else {
					if (prod != 6) {
						if (size < 69) {
							w20 = -20;
						} else {
							w20 = -5;
						}
					} else {
						if (rel_time < 3119) {
							w20 = -2;
						} else {
							w20 = 10;
						}
					}
				}
			} else {
				if (rel_time < 1658) {
					if (rel_time < 855) {
						if (hops < 2) {
							w20 = 28;
						} else {
							w20 = -29;
						}
					} else {
						if (hops < 4) {
							w20 = 44;
						} else {
							w20 = -26;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1808) {
							w20 = 1;
						} else {
							w20 = -11;
						}
					} else {
						if (hops < 4) {
							w20 = -71;
						} else {
							w20 = -3;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 3207) {
					w20 = 0;
				} else {
					w20 = -12;
				}
			} else {
				if (hops < 3) {
					if (size < 69) {
						w20 = -46;
					} else {
						w20 = -10;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w20 = -9;
						} else {
							w20 = -29;
						}
					} else {
						w20 = 16;
					}
				}
			}
		}
	} else {
		if (rel_time < 5930) {
			if (rel_time < 5588) {
				if (rel_time < 5586) {
					if (size < 69) {
						if (rel_time < 5319) {
							w20 = 4;
						} else {
							w20 = 26;
						}
					} else {
						if (rel_time < 3645) {
							w20 = 17;
						} else {
							w20 = -1;
						}
					}
				} else {
					if (hops < 2) {
						w20 = -1;
					} else {
						if (hops < 5) {
							w20 = -37;
						} else {
							w20 = -12;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (size < 69) {
						w20 = 35;
					} else {
						w20 = 14;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 5652) {
							w20 = 26;
						} else {
							w20 = -50;
						}
					} else {
						if (hops < 4) {
							w20 = 42;
						} else {
							w20 = 6;
						}
					}
				}
			}
		} else {
			if (rel_time < 5934) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w20 = -35;
						} else {
							w20 = -12;
						}
					} else {
						w20 = -51;
					}
				} else {
					if (hops < 5) {
						w20 = 9;
					} else {
						w20 = -15;
					}
				}
			} else {
				if (prod != 3) {
					if (hops < 3) {
						if (rel_time < 7773) {
							w20 = -6;
						} else {
							w20 = -1;
						}
					} else {
						if (prod != 0) {
							w20 = -1;
						} else {
							w20 = 11;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w20 = 4;
						} else {
							w20 = 23;
						}
					} else {
						if (rel_time < 10458) {
							w20 = -12;
						} else {
							w20 = -1;
						}
					}
				}
			}
		}
	}
	int w21;
	if (rel_time < 584) {
		if (rel_time < 337) {
			if (hops < 2) {
				if (rel_time < 65) {
					w21 = 15;
				} else {
					w21 = -2;
				}
			} else {
				if (hops < 4) {
					w21 = -9;
				} else {
					w21 = -2;
				}
			}
		} else {
			if (hops < 2) {
				w21 = 4;
			} else {
				if (hops < 3) {
					if (rel_time < 542) {
						if (rel_time < 423) {
							w21 = 10;
						} else {
							w21 = -4;
						}
					} else {
						w21 = 56;
					}
				} else {
					if (rel_time < 542) {
						if (hops < 4) {
							w21 = 25;
						} else {
							w21 = 15;
						}
					} else {
						if (hops < 4) {
							w21 = -57;
						} else {
							w21 = 2;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 972) {
			if (hops < 4) {
				if (prod != 1) {
					if (hops < 2) {
						if (rel_time < 769) {
							w21 = -5;
						} else {
							w21 = -62;
						}
					} else {
						if (rel_time < 769) {
							w21 = -5;
						} else {
							w21 = 32;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w21 = 22;
						} else {
							w21 = -45;
						}
					} else {
						if (rel_time < 770) {
							w21 = -184;
						} else {
							w21 = -81;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (prod != 1) {
						if (hops < 5) {
							w21 = -22;
						} else {
							w21 = 7;
						}
					} else {
						if (hops < 5) {
							w21 = 74;
						} else {
							w21 = -83;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 657) {
							w21 = 90;
						} else {
							w21 = 154;
						}
					} else {
						if (rel_time < 657) {
							w21 = -25;
						} else {
							w21 = 33;
						}
					}
				}
			}
		} else {
			if (rel_time < 1313) {
				if (hops < 3) {
					if (prod != 1) {
						if (prod != 4) {
							w21 = -1;
						} else {
							w21 = 24;
						}
					} else {
						if (hops < 2) {
							w21 = -68;
						} else {
							w21 = -23;
						}
					}
				} else {
					if (prod != 1) {
						if (prod != 4) {
							w21 = 17;
						} else {
							w21 = -31;
						}
					} else {
						if (hops < 4) {
							w21 = 162;
						} else {
							w21 = 12;
						}
					}
				}
			} else {
				if (rel_time < 1878) {
					if (hops < 3) {
						if (prod != 0) {
							w21 = 25;
						} else {
							w21 = -52;
						}
					} else {
						if (cons != 5) {
							w21 = -70;
						} else {
							w21 = 15;
						}
					}
				} else {
					if (rel_time < 1984) {
						if (hops < 3) {
							w21 = -7;
						} else {
							w21 = 25;
						}
					} else {
						if (size < 133) {
							w21 = 0;
						} else {
							w21 = 2;
						}
					}
				}
			}
		}
	}
	int w22;
	if (rel_time < 9239) {
		if (rel_time < 8989) {
			if (rel_time < 8100) {
				if (rel_time < 7995) {
					if (rel_time < 7492) {
						if (rel_time < 7458) {
							w22 = 0;
						} else {
							w22 = 12;
						}
					} else {
						if (prod != 1) {
							w22 = 1;
						} else {
							w22 = -31;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w22 = 4;
						} else {
							w22 = 31;
						}
					} else {
						if (prod != 2) {
							w22 = -14;
						} else {
							w22 = 17;
						}
					}
				}
			} else {
				if (rel_time < 8536) {
					if (hops < 2) {
						if (prod != 0) {
							w22 = -28;
						} else {
							w22 = 46;
						}
					} else {
						if (rel_time < 8379) {
							w22 = -29;
						} else {
							w22 = -5;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 0) {
							w22 = -3;
						} else {
							w22 = -46;
						}
					} else {
						if (prod != 2) {
							w22 = 7;
						} else {
							w22 = -16;
						}
					}
				}
			}
		} else {
			if (rel_time < 9148) {
				if (hops < 3) {
					if (rel_time < 8991) {
						w22 = 26;
					} else {
						w22 = 36;
					}
				} else {
					if (hops < 4) {
						w22 = 7;
					} else {
						if (rel_time < 8991) {
							w22 = 19;
						} else {
							w22 = 42;
						}
					}
				}
			} else {
				if (rel_time < 9152) {
					if (hops < 2) {
						w22 = -50;
					} else {
						if (hops < 4) {
							w22 = 7;
						} else {
							w22 = -6;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 3) {
							w22 = 24;
						} else {
							w22 = 4;
						}
					} else {
						if (prod != 3) {
							w22 = -4;
						} else {
							w22 = 5;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9257) {
			if (hops < 2) {
				w22 = 35;
			} else {
				if (size < 37) {
					w22 = -76;
				} else {
					w22 = -4;
				}
			}
		} else {
			if (rel_time < 9263) {
				if (hops < 3) {
					if (hops < 2) {
						w22 = 22;
					} else {
						w22 = -8;
					}
				} else {
					if (hops < 5) {
						w22 = 29;
					} else {
						w22 = 60;
					}
				}
			} else {
				if (rel_time < 9294) {
					if (size < 37) {
						if (hops < 2) {
							w22 = 4;
						} else {
							w22 = -63;
						}
					} else {
						w22 = -5;
					}
				} else {
					if (rel_time < 10983) {
						if (hops < 3) {
							w22 = 0;
						} else {
							w22 = -4;
						}
					} else {
						if (size < 69) {
							w22 = 3;
						} else {
							w22 = -1;
						}
					}
				}
			}
		}
	}
	int w23;
	if (rel_time < 656) {
		if (hops < 5) {
			if (hops < 4) {
				if (prod != 6) {
					if (hops < 3) {
						if (rel_time < 584) {
							w23 = 8;
						} else {
							w23 = -4;
						}
					} else {
						if (prod != 0) {
							w23 = 31;
						} else {
							w23 = -28;
						}
					}
				} else {
					if (hops < 2) {
						w23 = 3;
					} else {
						w23 = -3;
					}
				}
			} else {
				if (size < 37) {
					if (rel_time < 65) {
						w23 = 5;
					} else {
						w23 = 19;
					}
				} else {
					if (rel_time < 584) {
						w23 = -8;
					} else {
						w23 = -24;
					}
				}
			}
		} else {
			if (prod != 6) {
				w23 = 27;
			} else {
				w23 = 1;
			}
		}
	} else {
		if (rel_time < 972) {
			if (hops < 4) {
				if (prod != 1) {
					if (rel_time < 856) {
						if (hops < 2) {
							w23 = -12;
						} else {
							w23 = 3;
						}
					} else {
						w23 = -29;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 770) {
							w23 = 27;
						} else {
							w23 = -19;
						}
					} else {
						if (rel_time < 770) {
							w23 = -92;
						} else {
							w23 = -41;
						}
					}
				}
			} else {
				if (rel_time < 670) {
					if (hops < 5) {
						if (rel_time < 657) {
							w23 = 45;
						} else {
							w23 = 78;
						}
					} else {
						w23 = -8;
					}
				} else {
					if (prod != 1) {
						if (rel_time < 733) {
							w23 = 3;
						} else {
							w23 = -11;
						}
					} else {
						if (hops < 5) {
							w23 = 37;
						} else {
							w23 = -42;
						}
					}
				}
			}
		} else {
			if (rel_time < 1314) {
				if (hops < 4) {
					if (prod != 3) {
						if (hops < 3) {
							w23 = -1;
						} else {
							w23 = 7;
						}
					} else {
						if (hops < 2) {
							w23 = -21;
						} else {
							w23 = 60;
						}
					}
				} else {
					if (prod != 3) {
						if (hops < 5) {
							w23 = -4;
						} else {
							w23 = 32;
						}
					} else {
						if (hops < 5) {
							w23 = -78;
						} else {
							w23 = -49;
						}
					}
				}
			} else {
				if (rel_time < 1878) {
					if (hops < 5) {
						if (hops < 3) {
							w23 = 0;
						} else {
							w23 = -19;
						}
					} else {
						if (rel_time < 1342) {
							w23 = -61;
						} else {
							w23 = 74;
						}
					}
				} else {
					if (rel_time < 6703) {
						if (rel_time < 6543) {
							w23 = 0;
						} else {
							w23 = 23;
						}
					} else {
						if (rel_time < 7155) {
							w23 = -5;
						} else {
							w23 = 0;
						}
					}
				}
			}
		}
	}
	int w24;
	if (rel_time < 7421) {
		if (rel_time < 7155) {
			if (rel_time < 6846) {
				if (rel_time < 6812) {
					if (rel_time < 6809) {
						if (rel_time < 6201) {
							w24 = 0;
						} else {
							w24 = 4;
						}
					} else {
						if (hops < 2) {
							w24 = -5;
						} else {
							w24 = -30;
						}
					}
				} else {
					if (hops < 3) {
						w24 = 26;
					} else {
						if (hops < 5) {
							w24 = 46;
						} else {
							w24 = 82;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (prod != 0) {
						if (rel_time < 6876) {
							w24 = -2;
						} else {
							w24 = -21;
						}
					} else {
						if (rel_time < 6879) {
							w24 = 41;
						} else {
							w24 = 21;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w24 = -18;
						} else {
							w24 = 17;
						}
					} else {
						if (hops < 5) {
							w24 = -36;
						} else {
							w24 = 24;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 7402) {
					if (hops < 3) {
						if (rel_time < 7383) {
							w24 = 4;
						} else {
							w24 = 12;
						}
					} else {
						if (rel_time < 7398) {
							w24 = 6;
						} else {
							w24 = -154;
						}
					}
				} else {
					if (hops < 4) {
						w24 = 30;
					} else {
						w24 = -6;
					}
				}
			} else {
				if (rel_time < 7315) {
					w24 = 60;
				} else {
					if (rel_time < 7385) {
						w24 = 12;
					} else {
						w24 = -8;
					}
				}
			}
		}
	} else {
		if (rel_time < 7424) {
			if (hops < 3) {
				if (hops < 2) {
					w24 = -25;
				} else {
					w24 = -62;
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						w24 = -20;
					} else {
						w24 = -36;
					}
				} else {
					w24 = -1;
				}
			}
		} else {
			if (rel_time < 7492) {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w24 = 12;
						} else {
							w24 = -5;
						}
					} else {
						if (hops < 2) {
							w24 = -44;
						} else {
							w24 = 20;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w24 = 3;
						} else {
							w24 = -14;
						}
					} else {
						if (hops < 5) {
							w24 = 73;
						} else {
							w24 = -38;
						}
					}
				}
			} else {
				if (rel_time < 7773) {
					if (hops < 4) {
						if (prod != 0) {
							w24 = -24;
						} else {
							w24 = 16;
						}
					} else {
						if (prod != 0) {
							w24 = 20;
						} else {
							w24 = 77;
						}
					}
				} else {
					if (rel_time < 8036) {
						if (size < 37) {
							w24 = 24;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 8536) {
							w24 = -4;
						} else {
							w24 = 0;
						}
					}
				}
			}
		}
	}
	int w25;
	if (rel_time < 5011) {
		if (rel_time < 4976) {
			if (rel_time < 4957) {
				if (rel_time < 3732) {
					if (hops < 4) {
						if (prod != 3) {
							w25 = 0;
						} else {
							w25 = -11;
						}
					} else {
						if (prod != 3) {
							w25 = -1;
						} else {
							w25 = 34;
						}
					}
				} else {
					if (rel_time < 4096) {
						if (hops < 2) {
							w25 = -1;
						} else {
							w25 = 14;
						}
					} else {
						if (hops < 2) {
							w25 = 8;
						} else {
							w25 = -3;
						}
					}
				}
			} else {
				if (hops < 2) {
					w25 = 0;
				} else {
					w25 = -20;
				}
			}
		} else {
			if (hops < 2) {
				w25 = 30;
			} else {
				if (hops < 5) {
					if (hops < 4) {
						w25 = 13;
					} else {
						w25 = -12;
					}
				} else {
					w25 = 38;
				}
			}
		}
	} else {
		if (rel_time < 5319) {
			if (hops < 3) {
				if (rel_time < 5040) {
					if (hops < 2) {
						w25 = -3;
					} else {
						w25 = -18;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 5042) {
							w25 = -74;
						} else {
							w25 = -95;
						}
					} else {
						w25 = -14;
					}
				}
			} else {
				if (rel_time < 5040) {
					if (hops < 4) {
						w25 = -38;
					} else {
						w25 = 5;
					}
				} else {
					if (hops < 4) {
						w25 = 73;
					} else {
						if (hops < 5) {
							w25 = 25;
						} else {
							w25 = -20;
						}
					}
				}
			}
		} else {
			if (rel_time < 5479) {
				if (hops < 3) {
					if (hops < 2) {
						if (size < 69) {
							w25 = 10;
						} else {
							w25 = 50;
						}
					} else {
						if (rel_time < 5322) {
							w25 = 23;
						} else {
							w25 = 36;
						}
					}
				} else {
					if (hops < 4) {
						w25 = -12;
					} else {
						if (size < 69) {
							w25 = 21;
						} else {
							w25 = -16;
						}
					}
				}
			} else {
				if (size < 37) {
					if (rel_time < 6201) {
						if (hops < 2) {
							w25 = 5;
						} else {
							w25 = -24;
						}
					} else {
						if (rel_time < 6235) {
							w25 = 22;
						} else {
							w25 = -2;
						}
					}
				} else {
					if (rel_time < 5553) {
						if (hops < 3) {
							w25 = 5;
						} else {
							w25 = -25;
						}
					} else {
						if (rel_time < 5655) {
							w25 = 8;
						} else {
							w25 = 0;
						}
					}
				}
			}
		}
	}
	int w26;
	if (prod != 4) {
		if (hops < 4) {
			if (prod != 1) {
				if (hops < 3) {
					if (size < 69) {
						if (rel_time < 1341) {
							w26 = 9;
						} else {
							w26 = -4;
						}
					} else {
						if (rel_time < 4429) {
							w26 = -1;
						} else {
							w26 = 3;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 1341) {
							w26 = -12;
						} else {
							w26 = 3;
						}
					} else {
						if (rel_time < 3484) {
							w26 = -4;
						} else {
							w26 = 32;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1808) {
							w26 = 10;
						} else {
							w26 = -5;
						}
					} else {
						if (rel_time < 1266) {
							w26 = -11;
						} else {
							w26 = 14;
						}
					}
				} else {
					if (rel_time < 1266) {
						if (rel_time < 855) {
							w26 = -12;
						} else {
							w26 = 78;
						}
					} else {
						if (rel_time < 1658) {
							w26 = -360;
						} else {
							w26 = -24;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (prod != 1) {
					if (rel_time < 3117) {
						if (hops < 5) {
							w26 = 14;
						} else {
							w26 = -15;
						}
					} else {
						if (prod != 2) {
							w26 = -5;
						} else {
							w26 = 2;
						}
					}
				} else {
					if (rel_time < 2421) {
						if (rel_time < 770) {
							w26 = 15;
						} else {
							w26 = -6;
						}
					} else {
						if (hops < 5) {
							w26 = 19;
						} else {
							w26 = 3;
						}
					}
				}
			} else {
				if (rel_time < 2262) {
					if (hops < 5) {
						if (rel_time < 1658) {
							w26 = -23;
						} else {
							w26 = 40;
						}
					} else {
						if (rel_time < 584) {
							w26 = 18;
						} else {
							w26 = 61;
						}
					}
				} else {
					if (rel_time < 2873) {
						if (hops < 5) {
							w26 = -100;
						} else {
							w26 = -47;
						}
					} else {
						if (rel_time < 4096) {
							w26 = 5;
						} else {
							w26 = -18;
						}
					}
				}
			}
		}
	} else {
		if (hops < 5) {
			if (rel_time < 8538) {
				if (rel_time < 7995) {
					if (hops < 2) {
						if (rel_time < 5479) {
							w26 = 10;
						} else {
							w26 = -10;
						}
					} else {
						if (rel_time < 5550) {
							w26 = -6;
						} else {
							w26 = 5;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w26 = 65;
						} else {
							w26 = 23;
						}
					} else {
						w26 = -70;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 10376) {
						if (rel_time < 9830) {
							w26 = -19;
						} else {
							w26 = -39;
						}
					} else {
						if (rel_time < 10442) {
							w26 = 22;
						} else {
							w26 = -4;
						}
					}
				} else {
					if (rel_time < 11602) {
						if (hops < 4) {
							w26 = 1;
						} else {
							w26 = 10;
						}
					} else {
						if (rel_time < 11667) {
							w26 = -38;
						} else {
							w26 = 2;
						}
					}
				}
			}
		} else {
			if (rel_time < 6707) {
				if (rel_time < 6703) {
					if (rel_time < 4258) {
						if (rel_time < 3102) {
							w26 = 8;
						} else {
							w26 = -12;
						}
					} else {
						if (rel_time < 4870) {
							w26 = 30;
						} else {
							w26 = 6;
						}
					}
				} else {
					w26 = -25;
				}
			} else {
				if (rel_time < 11602) {
					if (rel_time < 10983) {
						if (rel_time < 10376) {
							w26 = 22;
						} else {
							w26 = -37;
						}
					} else {
						if (rel_time < 10990) {
							w26 = 55;
						} else {
							w26 = 27;
						}
					}
				} else {
					if (rel_time < 12212) {
						w26 = -15;
					} else {
						w26 = 14;
					}
				}
			}
		}
	}
	int w27;
	if (size < 37) {
		if (hops < 3) {
			if (rel_time < 1341) {
				if (hops < 2) {
					if (rel_time < 542) {
						w27 = -1;
					} else {
						if (rel_time < 1314) {
							w27 = -29;
						} else {
							w27 = -51;
						}
					}
				} else {
					if (rel_time < 856) {
						if (rel_time < 542) {
							w27 = -5;
						} else {
							w27 = 40;
						}
					} else {
						if (rel_time < 1314) {
							w27 = 142;
						} else {
							w27 = 124;
						}
					}
				}
			} else {
				if (rel_time < 1953) {
					if (hops < 2) {
						if (rel_time < 1918) {
							w27 = -27;
						} else {
							w27 = -12;
						}
					} else {
						if (rel_time < 1918) {
							w27 = -102;
						} else {
							w27 = -120;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 7458) {
							w27 = 12;
						} else {
							w27 = 0;
						}
					} else {
						if (rel_time < 2566) {
							w27 = 30;
						} else {
							w27 = -9;
						}
					}
				}
			}
		} else {
			if (rel_time < 1341) {
				if (rel_time < 972) {
					if (rel_time < 542) {
						if (rel_time < 65) {
							w27 = -2;
						} else {
							w27 = 7;
						}
					} else {
						w27 = -8;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1314) {
							w27 = -184;
						} else {
							w27 = -160;
						}
					} else {
						if (hops < 5) {
							w27 = 69;
						} else {
							w27 = -23;
						}
					}
				}
			} else {
				if (rel_time < 2529) {
					if (hops < 4) {
						if (rel_time < 1953) {
							w27 = 118;
						} else {
							w27 = 54;
						}
					} else {
						if (hops < 5) {
							w27 = 52;
						} else {
							w27 = -7;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 8069) {
							w27 = 12;
						} else {
							w27 = 0;
						}
					} else {
						if (hops < 5) {
							w27 = -7;
						} else {
							w27 = 10;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1658) {
			if (rel_time < 1414) {
				if (hops < 3) {
					if (rel_time < 1342) {
						if (size < 69) {
							w27 = -7;
						} else {
							w27 = 0;
						}
					} else {
						if (hops < 2) {
							w27 = -4;
						} else {
							w27 = -45;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1200) {
							w27 = 7;
						} else {
							w27 = 34;
						}
					} else {
						if (prod != 3) {
							w27 = -2;
						} else {
							w27 = -30;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w27 = 179;
						} else {
							w27 = 347;
						}
					} else {
						if (hops < 2) {
							w27 = -15;
						} else {
							w27 = -62;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w27 = -182;
						} else {
							w27 = -67;
						}
					} else {
						if (hops < 5) {
							w27 = -10;
						} else {
							w27 = 562;
						}
					}
				}
			}
		} else {
			if (rel_time < 1808) {
				if (hops < 2) {
					w27 = 17;
				} else {
					if (hops < 4) {
						w27 = -57;
					} else {
						if (hops < 5) {
							w27 = -1;
						} else {
							w27 = 48;
						}
					}
				}
			} else {
				if (rel_time < 1984) {
					if (hops < 2) {
						if (prod != 3) {
							w27 = 3;
						} else {
							w27 = 50;
						}
					} else {
						if (prod != 3) {
							w27 = 3;
						} else {
							w27 = -23;
						}
					}
				} else {
					if (rel_time < 3484) {
						if (prod != 3) {
							w27 = -1;
						} else {
							w27 = -8;
						}
					} else {
						if (rel_time < 4344) {
							w27 = 2;
						} else {
							w27 = 0;
						}
					}
				}
			}
		}
	}
	int w28;
	if (prod != 3) {
		if (rel_time < 11442) {
			if (rel_time < 11127) {
				if (rel_time < 11090) {
					if (rel_time < 10518) {
						if (rel_time < 8712) {
							w28 = 0;
						} else {
							w28 = 1;
						}
					} else {
						if (hops < 2) {
							w28 = 3;
						} else {
							w28 = -5;
						}
					}
				} else {
					if (rel_time < 11093) {
						if (hops < 5) {
							w28 = 21;
						} else {
							w28 = -8;
						}
					} else {
						w28 = 0;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 11156) {
						w28 = -7;
					} else {
						if (hops < 2) {
							w28 = -5;
						} else {
							w28 = 2;
						}
					}
				} else {
					if (prod != 0) {
						w28 = 10;
					} else {
						if (rel_time < 11161) {
							w28 = -67;
						} else {
							w28 = -27;
						}
					}
				}
			}
		} else {
			if (rel_time < 11596) {
				if (hops < 2) {
					w28 = 20;
				} else {
					w28 = 4;
				}
			} else {
				if (prod != 4) {
					if (hops < 3) {
						if (size < 69) {
							w28 = 14;
						} else {
							w28 = 0;
						}
					} else {
						if (size < 69) {
							w28 = -13;
						} else {
							w28 = 4;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11602) {
							w28 = -19;
						} else {
							w28 = 3;
						}
					} else {
						if (rel_time < 11602) {
							w28 = 9;
						} else {
							w28 = -2;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 11679) {
			if (rel_time < 3117) {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 1282) {
							w28 = -4;
						} else {
							w28 = 13;
						}
					} else {
						if (rel_time < 1282) {
							w28 = 14;
						} else {
							w28 = -34;
						}
					}
				} else {
					if (rel_time < 1282) {
						if (rel_time < 670) {
							w28 = 12;
						} else {
							w28 = -41;
						}
					} else {
						if (hops < 5) {
							w28 = 65;
						} else {
							w28 = 6;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 6162) {
							w28 = -12;
						} else {
							w28 = 2;
						}
					} else {
						if (rel_time < 11054) {
							w28 = 17;
						} else {
							w28 = -5;
						}
					}
				} else {
					if (rel_time < 4328) {
						if (hops < 5) {
							w28 = 21;
						} else {
							w28 = -23;
						}
					} else {
						if (rel_time < 10458) {
							w28 = -8;
						} else {
							w28 = 5;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					w28 = -7;
				} else {
					if (rel_time < 12278) {
						w28 = -40;
					} else {
						w28 = -18;
					}
				}
			} else {
				if (hops < 5) {
					w28 = 4;
				} else {
					w28 = 24;
				}
			}
		}
	}
	int w29;
	if (hops < 5) {
		if (rel_time < 5930) {
			if (rel_time < 5588) {
				if (rel_time < 5011) {
					if (rel_time < 4976) {
						if (rel_time < 1879) {
							w29 = -1;
						} else {
							w29 = 1;
						}
					} else {
						w29 = 8;
					}
				} else {
					if (prod != 1) {
						if (hops < 2) {
							w29 = -10;
						} else {
							w29 = 0;
						}
					} else {
						if (rel_time < 5322) {
							w29 = 6;
						} else {
							w29 = 15;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 5652) {
							w29 = 10;
						} else {
							w29 = -2;
						}
					} else {
						if (size < 69) {
							w29 = 27;
						} else {
							w29 = -8;
						}
					}
				} else {
					if (rel_time < 5652) {
						w29 = 7;
					} else {
						w29 = -18;
					}
				}
			}
		} else {
			if (rel_time < 5934) {
				w29 = -12;
			} else {
				if (rel_time < 6201) {
					if (size < 69) {
						if (hops < 2) {
							w29 = -15;
						} else {
							w29 = -27;
						}
					} else {
						if (rel_time < 6177) {
							w29 = 0;
						} else {
							w29 = 16;
						}
					}
				} else {
					if (rel_time < 6703) {
						if (cons != 5) {
							w29 = 12;
						} else {
							w29 = -4;
						}
					} else {
						if (rel_time < 6707) {
							w29 = -9;
						} else {
							w29 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1894) {
			if (prod != 0) {
				if (rel_time < 1658) {
					if (rel_time < 1341) {
						if (rel_time < 1313) {
							w29 = 7;
						} else {
							w29 = -11;
						}
					} else {
						if (rel_time < 1412) {
							w29 = -25;
						} else {
							w29 = -77;
						}
					}
				} else {
					if (prod != 4) {
						w29 = 26;
					} else {
						w29 = 3;
					}
				}
			} else {
				if (rel_time < 1414) {
					if (rel_time < 973) {
						w29 = 13;
					} else {
						w29 = 33;
					}
				} else {
					w29 = 307;
				}
			}
		} else {
			if (rel_time < 1982) {
				if (size < 37) {
					w29 = -19;
				} else {
					if (rel_time < 1917) {
						w29 = -56;
					} else {
						w29 = -91;
					}
				}
			} else {
				if (rel_time < 4097) {
					if (rel_time < 3033) {
						if (rel_time < 2491) {
							w29 = -9;
						} else {
							w29 = 17;
						}
					} else {
						if (prod != 3) {
							w29 = -11;
						} else {
							w29 = -30;
						}
					}
				} else {
					if (rel_time < 4255) {
						w29 = 62;
					} else {
						if (rel_time < 12353) {
							w29 = 4;
						} else {
							w29 = -38;
						}
					}
				}
			}
		}
	}
	int w30;
	if (rel_time < 656) {
		if (prod != 6) {
			if (hops < 2) {
				w30 = -1;
			} else {
				if (hops < 4) {
					w30 = 8;
				} else {
					if (prod != 0) {
						w30 = -4;
					} else {
						w30 = 8;
					}
				}
			}
		} else {
			w30 = 0;
		}
	} else {
		if (rel_time < 733) {
			if (hops < 3) {
				if (hops < 2) {
					w30 = 1;
				} else {
					if (size < 133) {
						if (rel_time < 657) {
							w30 = -21;
						} else {
							w30 = -41;
						}
					} else {
						w30 = -9;
					}
				}
			} else {
				if (size < 133) {
					if (rel_time < 657) {
						if (hops < 5) {
							w30 = 5;
						} else {
							w30 = -13;
						}
					} else {
						w30 = 36;
					}
				} else {
					w30 = -3;
				}
			}
		} else {
			if (rel_time < 770) {
				if (hops < 5) {
					if (rel_time < 769) {
						if (hops < 2) {
							w30 = 13;
						} else {
							w30 = -3;
						}
					} else {
						if (hops < 4) {
							w30 = 0;
						} else {
							w30 = 87;
						}
					}
				} else {
					if (rel_time < 769) {
						w30 = 13;
					} else {
						w30 = -86;
					}
				}
			} else {
				if (rel_time < 855) {
					if (hops < 2) {
						w30 = 26;
					} else {
						if (hops < 3) {
							w30 = -57;
						} else {
							w30 = -13;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 1342) {
							w30 = -1;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 1282) {
							w30 = 7;
						} else {
							w30 = 0;
						}
					}
				}
			}
		}
	}
	int w31;
	w31 = 0;
	return (180401 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31) >> 8;
}
