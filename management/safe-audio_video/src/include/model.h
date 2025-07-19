#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int model(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (rel_time < 59) {
						if (hops < 3) {
							w0 = -25512;
						} else {
							w0 = -23583;
						}
					} else {
						if (hops < 3) {
							w0 = -18596;
						} else {
							w0 = -16684;
						}
					}
				} else {
					if (rel_time < 1838) {
						if (hops < 3) {
							w0 = 19379;
						} else {
							w0 = 21026;
						}
					} else {
						if (hops < 4) {
							w0 = 15261;
						} else {
							w0 = 18210;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w0 = -19421;
					} else {
						w0 = -18537;
					}
				} else {
					if (hops < 4) {
						w0 = -17635;
					} else {
						if (hops < 5) {
							w0 = -16742;
						} else {
							w0 = -15803;
						}
					}
				}
			}
		} else {
			if (rel_time < 807) {
				if (rel_time < 725) {
					if (rel_time < 640) {
						if (rel_time < 399) {
							w0 = 7962;
						} else {
							w0 = 11542;
						}
					} else {
						if (hops < 3) {
							w0 = -539;
						} else {
							w0 = 1431;
						}
					}
				} else {
					if (rel_time < 726) {
						w0 = 26184;
					} else {
						if (hops < 4) {
							w0 = 21059;
						} else {
							w0 = 19684;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (size < 69) {
						if (rel_time < 10961) {
							w0 = 1122;
						} else {
							w0 = 15838;
						}
					} else {
						if (hops < 3) {
							w0 = -1922;
						} else {
							w0 = 6;
						}
					}
				} else {
					if (rel_time < 1734) {
						if (hops < 3) {
							w0 = -5585;
						} else {
							w0 = -3663;
						}
					} else {
						if (hops < 3) {
							w0 = -9052;
						} else {
							w0 = -7109;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 3) {
				w0 = 31801;
			} else {
				w0 = 33698;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 699) {
						w0 = 22024;
					} else {
						if (rel_time < 10627) {
							w0 = 20304;
						} else {
							w0 = 22002;
						}
					}
				} else {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w0 = 22902;
						} else {
							w0 = 21103;
						}
					} else {
						w0 = 22919;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w0 = 23864;
						} else {
							w0 = 21974;
						}
					} else {
						w0 = 23949;
					}
				} else {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w0 = 24922;
						} else {
							w0 = 23118;
						}
					} else {
						w0 = 24976;
					}
				}
			}
		}
	}
	int w1;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (rel_time < 59) {
						if (hops < 2) {
							w1 = -13182;
						} else {
							w1 = -12010;
						}
					} else {
						if (hops < 2) {
							w1 = -9739;
						} else {
							w1 = -8543;
						}
					}
				} else {
					if (rel_time < 1838) {
						if (hops < 2) {
							w1 = 9169;
						} else {
							w1 = 10413;
						}
					} else {
						if (hops < 4) {
							w1 = 7639;
						} else {
							w1 = 9140;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w1 = -9711;
					} else {
						w1 = -9269;
					}
				} else {
					if (hops < 4) {
						w1 = -8818;
					} else {
						if (hops < 5) {
							w1 = -8372;
						} else {
							w1 = -7905;
						}
					}
				}
			}
		} else {
			if (rel_time < 807) {
				if (rel_time < 725) {
					if (rel_time < 640) {
						if (rel_time < 558) {
							w1 = 4367;
						} else {
							w1 = 6274;
						}
					} else {
						if (hops < 4) {
							w1 = -179;
						} else {
							w1 = 1287;
						}
					}
				} else {
					if (rel_time < 726) {
						if (hops < 4) {
							w1 = 13408;
						} else {
							w1 = 11655;
						}
					} else {
						if (hops < 5) {
							w1 = 10470;
						} else {
							w1 = 9196;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (size < 69) {
						if (rel_time < 10961) {
							w1 = 561;
						} else {
							w1 = 7922;
						}
					} else {
						if (hops < 4) {
							w1 = -867;
						} else {
							w1 = 568;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1734) {
							w1 = -2698;
						} else {
							w1 = -4432;
						}
					} else {
						if (rel_time < 1734) {
							w1 = -1242;
						} else {
							w1 = -2973;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 2) {
				w1 = 15496;
			} else {
				if (hops < 4) {
					w1 = 16361;
				} else {
					w1 = 17408;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 699) {
						w1 = 11023;
					} else {
						if (rel_time < 10627) {
							w1 = 10153;
						} else {
							w1 = 11012;
						}
					}
				} else {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w1 = 11465;
						} else {
							w1 = 10552;
						}
					} else {
						w1 = 11473;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w1 = 12093;
						} else {
							w1 = 11128;
						}
					} else {
						w1 = 12123;
					}
				} else {
					w1 = 12306;
				}
			}
		}
	}
	int w2;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (rel_time < 59) {
						if (hops < 4) {
							w2 = -6424;
						} else {
							w2 = -5269;
						}
					} else {
						if (hops < 4) {
							w2 = -4690;
						} else {
							w2 = -3548;
						}
					}
				} else {
					if (rel_time < 1838) {
						if (hops < 4) {
							w2 = 4835;
						} else {
							w2 = 5874;
						}
					} else {
						if (hops < 5) {
							w2 = 3880;
						} else {
							w2 = 5627;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w2 = -4856;
					} else {
						w2 = -4635;
					}
				} else {
					if (hops < 4) {
						w2 = -4410;
					} else {
						if (hops < 5) {
							w2 = -4187;
						} else {
							w2 = -3954;
						}
					}
				}
			}
		} else {
			if (rel_time < 807) {
				if (rel_time < 725) {
					if (rel_time < 640) {
						if (hops < 3) {
							w2 = 1935;
						} else {
							w2 = 3870;
						}
					} else {
						if (hops < 2) {
							w2 = -595;
						} else {
							w2 = 370;
						}
					}
				} else {
					if (rel_time < 726) {
						if (hops < 3) {
							w2 = 6856;
						} else {
							w2 = 6144;
						}
					} else {
						if (hops < 4) {
							w2 = 5304;
						} else {
							w2 = 4810;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 2) {
						if (rel_time < 1132) {
							w2 = -2810;
						} else {
							w2 = -866;
						}
					} else {
						if (size < 69) {
							w2 = 1048;
						} else {
							w2 = 29;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1734) {
							w2 = -1847;
						} else {
							w2 = -2721;
						}
					} else {
						if (rel_time < 1734) {
							w2 = -896;
						} else {
							w2 = -1752;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 5) {
				if (hops < 2) {
					w2 = 7756;
				} else {
					w2 = 8250;
				}
			} else {
				w2 = 9344;
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 699) {
						w2 = 5517;
					} else {
						if (rel_time < 10627) {
							w2 = 5077;
						} else {
							w2 = 5511;
						}
					}
				} else {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w2 = 5816;
						} else {
							w2 = 5337;
						}
					} else {
						w2 = 5829;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w2 = 6225;
						} else {
							w2 = 5760;
						}
					} else {
						w2 = 6226;
					}
				} else {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w2 = 6894;
						} else {
							w2 = 6058;
						}
					} else {
						w2 = 6986;
					}
				}
			}
		}
	}
	int w3;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (rel_time < 59) {
						if (hops < 5) {
							w3 = -3162;
						} else {
							w3 = -1953;
						}
					} else {
						if (rel_time < 512) {
							w3 = -1694;
						} else {
							w3 = -2505;
						}
					}
				} else {
					if (rel_time < 1838) {
						if (hops < 2) {
							w3 = 2179;
						} else {
							w3 = 2663;
						}
					} else {
						if (hops < 2) {
							w3 = 1686;
						} else {
							w3 = 2162;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w3 = -2428;
					} else {
						if (rel_time < 10092) {
							w3 = -2323;
						} else {
							w3 = -2241;
						}
					}
				} else {
					if (hops < 4) {
						w3 = -2205;
					} else {
						if (hops < 5) {
							w3 = -2094;
						} else {
							w3 = -1978;
						}
					}
				}
			}
		} else {
			if (rel_time < 807) {
				if (rel_time < 725) {
					if (rel_time < 640) {
						if (hops < 4) {
							w3 = 1060;
						} else {
							w3 = 2501;
						}
					} else {
						if (hops < 5) {
							w3 = -34;
						} else {
							w3 = 1118;
						}
					}
				} else {
					if (rel_time < 726) {
						if (hops < 5) {
							w3 = 3348;
						} else {
							w3 = 1982;
						}
					} else {
						if (hops < 2) {
							w3 = 2780;
						} else {
							w3 = 2498;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 4) {
						if (hops < 2) {
							w3 = -445;
						} else {
							w3 = -52;
						}
					} else {
						if (size < 69) {
							w3 = 1652;
						} else {
							w3 = 270;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w3 = -1313;
						} else {
							w3 = -902;
						}
					} else {
						if (rel_time < 1734) {
							w3 = 479;
						} else {
							w3 = 42;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 4) {
				if (hops < 2) {
					w3 = 3882;
				} else {
					w3 = 4064;
				}
			} else {
				w3 = 4448;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 699) {
					w3 = 2796;
				} else {
					if (rel_time < 10645) {
						if (hops < 2) {
							w3 = 2538;
						} else {
							w3 = 2608;
						}
					} else {
						w3 = 2794;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w3 = 3014;
						} else {
							w3 = 2756;
						}
					} else {
						w3 = 3034;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 10645) {
							w3 = 2894;
						} else {
							w3 = 3120;
						}
					} else {
						if (rel_time < 10645) {
							w3 = 3056;
						} else {
							w3 = 3516;
						}
					}
				}
			}
		}
	}
	int w4;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (hops < 5) {
						if (rel_time < 920) {
							w4 = -1387;
						} else {
							w4 = -940;
						}
					} else {
						if (rel_time < 59) {
							w4 = -983;
						} else {
							w4 = -28;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1838) {
							w4 = 1180;
						} else {
							w4 = 909;
						}
					} else {
						if (hops < 5) {
							w4 = 1364;
						} else {
							w4 = 1873;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 2458) {
							w4 = -1176;
						} else {
							w4 = -1217;
						}
					} else {
						if (rel_time < 7743) {
							w4 = -1169;
						} else {
							w4 = -1140;
						}
					}
				} else {
					if (hops < 4) {
						w4 = -1103;
					} else {
						if (hops < 5) {
							w4 = -1047;
						} else {
							w4 = -989;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 807) {
					if (rel_time < 399) {
						if (hops < 2) {
							w4 = -863;
						} else {
							w4 = 67;
						}
					} else {
						if (cons != 5) {
							w4 = 1203;
						} else {
							w4 = 240;
						}
					}
				} else {
					if (cons != 5) {
						if (size < 69) {
							w4 = -524;
						} else {
							w4 = -267;
						}
					} else {
						if (rel_time < 1574) {
							w4 = -1152;
						} else {
							w4 = 220;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (size < 69) {
						if (rel_time < 10961) {
							w4 = 1325;
						} else {
							w4 = 4987;
						}
					} else {
						if (rel_time < 640) {
							w4 = 2375;
						} else {
							w4 = 829;
						}
					}
				} else {
					if (rel_time < 807) {
						w4 = 1056;
					} else {
						if (rel_time < 1734) {
							w4 = 240;
						} else {
							w4 = 21;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 5) {
				if (hops < 2) {
					w4 = 1943;
				} else {
					w4 = 2054;
				}
			} else {
				w4 = 2490;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1250) {
					if (hops < 2) {
						if (rel_time < 699) {
							w4 = 1365;
						} else {
							w4 = 1291;
						}
					} else {
						w4 = 1422;
					}
				} else {
					if (rel_time < 10645) {
						if (hops < 2) {
							w4 = 1268;
						} else {
							w4 = 1298;
						}
					} else {
						if (hops < 2) {
							w4 = 1363;
						} else {
							w4 = 1437;
						}
					}
				}
			} else {
				if (rel_time < 699) {
					if (hops < 5) {
						if (hops < 4) {
							w4 = 1510;
						} else {
							w4 = 1676;
						}
					} else {
						w4 = 1951;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 10645) {
							w4 = 1378;
						} else {
							w4 = 1520;
						}
					} else {
						if (rel_time < 10645) {
							w4 = 1452;
						} else {
							w4 = 1621;
						}
					}
				}
			}
		}
	}
	int w5;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (hops < 2) {
						if (rel_time < 59) {
							w5 = -1116;
						} else {
							w5 = -792;
						}
					} else {
						if (rel_time < 59) {
							w5 = -745;
						} else {
							w5 = -399;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1838) {
							w5 = 502;
						} else {
							w5 = 391;
						}
					} else {
						if (rel_time < 1838) {
							w5 = 706;
						} else {
							w5 = 528;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 3046) {
							w5 = -624;
						} else {
							w5 = -605;
						}
					} else {
						if (rel_time < 2458) {
							w5 = -545;
						} else {
							w5 = -582;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2458) {
							w5 = -590;
						} else {
							w5 = -549;
						}
					} else {
						if (hops < 5) {
							w5 = -524;
						} else {
							w5 = -495;
						}
					}
				}
			}
		} else {
			if (rel_time < 11271) {
				if (hops < 2) {
					if (rel_time < 1333) {
						if (rel_time < 1228) {
							w5 = -151;
						} else {
							w5 = 887;
						}
					} else {
						if (rel_time < 1574) {
							w5 = -1810;
						} else {
							w5 = -257;
						}
					}
				} else {
					if (rel_time < 807) {
						if (prod != 2) {
							w5 = 652;
						} else {
							w5 = 16;
						}
					} else {
						if (rel_time < 921) {
							w5 = -1354;
						} else {
							w5 = -2;
						}
					}
				}
			} else {
				if (size < 69) {
					if (hops < 3) {
						if (hops < 2) {
							w5 = 3420;
						} else {
							w5 = 3030;
						}
					} else {
						if (hops < 5) {
							w5 = 3930;
						} else {
							w5 = 2510;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 4) {
							w5 = -202;
						} else {
							w5 = -368;
						}
					} else {
						if (hops < 5) {
							w5 = -21;
						} else {
							w5 = 389;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 4) {
				w5 = 993;
			} else {
				if (hops < 5) {
					w5 = 1096;
				} else {
					w5 = 1252;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1837) {
					if (hops < 2) {
						if (rel_time < 699) {
							w5 = 683;
						} else {
							w5 = 652;
						}
					} else {
						if (rel_time < 699) {
							w5 = 729;
						} else {
							w5 = 697;
						}
					}
				} else {
					if (rel_time < 10627) {
						if (rel_time < 10046) {
							w5 = 639;
						} else {
							w5 = 604;
						}
					} else {
						if (rel_time < 11214) {
							w5 = 685;
						} else {
							w5 = 716;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 1250) {
						if (hops < 4) {
							w5 = 752;
						} else {
							w5 = 805;
						}
					} else {
						if (rel_time < 10645) {
							w5 = 693;
						} else {
							w5 = 760;
						}
					}
				} else {
					if (rel_time < 699) {
						w5 = 982;
					} else {
						if (rel_time < 10645) {
							w5 = 777;
						} else {
							w5 = 965;
						}
					}
				}
			}
		}
	}
	int w6;
	if (size < 133) {
		if (cons != 5) {
			if (size < 69) {
				if (rel_time < 1871) {
					if (rel_time < 399) {
						if (hops < 4) {
							w6 = -418;
						} else {
							w6 = -120;
						}
					} else {
						if (size < 37) {
							w6 = -125;
						} else {
							w6 = 316;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w6 = -309;
						} else {
							w6 = -275;
						}
					} else {
						if (size < 37) {
							w6 = -258;
						} else {
							w6 = -93;
						}
					}
				}
			} else {
				if (rel_time < 640) {
					if (hops < 2) {
						if (rel_time < 627) {
							w6 = -14;
						} else {
							w6 = 2;
						}
					} else {
						if (hops < 5) {
							w6 = 468;
						} else {
							w6 = 867;
						}
					}
				} else {
					if (hops < 5) {
						if (prod != 3) {
							w6 = -145;
						} else {
							w6 = -32;
						}
					} else {
						if (prod != 3) {
							w6 = 218;
						} else {
							w6 = 375;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 11271) {
					if (size < 69) {
						if (rel_time < 1574) {
							w6 = -729;
						} else {
							w6 = -132;
						}
					} else {
						if (rel_time < 1899) {
							w6 = 313;
						} else {
							w6 = -16;
						}
					}
				} else {
					if (size < 69) {
						if (hops < 2) {
							w6 = 1712;
						} else {
							w6 = 1517;
						}
					} else {
						if (hops < 2) {
							w6 = -97;
						} else {
							w6 = 65;
						}
					}
				}
			} else {
				if (size < 69) {
					if (rel_time < 1574) {
						if (rel_time < 921) {
							w6 = 112;
						} else {
							w6 = -1114;
						}
					} else {
						if (rel_time < 10961) {
							w6 = 593;
						} else {
							w6 = 1877;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1899) {
							w6 = 478;
						} else {
							w6 = -8;
						}
					} else {
						if (rel_time < 725) {
							w6 = 143;
						} else {
							w6 = 618;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 4) {
				if (hops < 2) {
					w6 = 476;
				} else {
					if (hops < 3) {
						w6 = 534;
					} else {
						w6 = 477;
					}
				}
			} else {
				if (hops < 5) {
					w6 = 549;
				} else {
					w6 = 630;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 1837) {
						if (rel_time < 699) {
							w6 = 342;
						} else {
							w6 = 326;
						}
					} else {
						if (rel_time < 10627) {
							w6 = 314;
						} else {
							w6 = 340;
						}
					}
				} else {
					if (rel_time < 2424) {
						if (hops < 3) {
							w6 = 349;
						} else {
							w6 = 376;
						}
					} else {
						if (rel_time < 10645) {
							w6 = 328;
						} else {
							w6 = 370;
						}
					}
				}
			} else {
				if (rel_time < 699) {
					if (hops < 5) {
						w6 = 439;
					} else {
						w6 = 494;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 4756) {
							w6 = 367;
						} else {
							w6 = 354;
						}
					} else {
						if (rel_time < 10645) {
							w6 = 389;
						} else {
							w6 = 486;
						}
					}
				}
			}
		}
	}
	int w7;
	if (size < 133) {
		if (cons != 5) {
			if (rel_time < 807) {
				if (rel_time < 399) {
					if (rel_time < 59) {
						if (hops < 2) {
							w7 = -350;
						} else {
							w7 = -206;
						}
					} else {
						if (hops < 5) {
							w7 = -128;
						} else {
							w7 = 292;
						}
					}
				} else {
					if (rel_time < 640) {
						if (hops < 2) {
							w7 = -6;
						} else {
							w7 = 237;
						}
					} else {
						if (hops < 2) {
							w7 = 779;
						} else {
							w7 = 315;
						}
					}
				}
			} else {
				if (rel_time < 920) {
					if (hops < 4) {
						if (rel_time < 808) {
							w7 = -679;
						} else {
							w7 = -766;
						}
					} else {
						if (hops < 5) {
							w7 = -418;
						} else {
							w7 = -279;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 1871) {
							w7 = 8;
						} else {
							w7 = -108;
						}
					} else {
						if (hops < 2) {
							w7 = -74;
						} else {
							w7 = 28;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 11271) {
					if (rel_time < 558) {
						if (hops < 2) {
							w7 = 205;
						} else {
							w7 = 772;
						}
					} else {
						if (rel_time < 1574) {
							w7 = -323;
						} else {
							w7 = -29;
						}
					}
				} else {
					if (size < 69) {
						if (hops < 2) {
							w7 = 857;
						} else {
							w7 = 759;
						}
					} else {
						if (hops < 2) {
							w7 = -49;
						} else {
							w7 = 32;
						}
					}
				}
			} else {
				if (size < 69) {
					if (rel_time < 1574) {
						if (rel_time < 558) {
							w7 = 356;
						} else {
							w7 = -504;
						}
					} else {
						if (rel_time < 10961) {
							w7 = 297;
						} else {
							w7 = 939;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1899) {
							w7 = 239;
						} else {
							w7 = -4;
						}
					} else {
						if (rel_time < 1899) {
							w7 = 463;
						} else {
							w7 = 266;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 4) {
				if (hops < 2) {
					w7 = 238;
				} else {
					if (hops < 3) {
						w7 = 267;
					} else {
						w7 = 239;
					}
				}
			} else {
				if (hops < 5) {
					w7 = 275;
				} else {
					w7 = 317;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1837) {
					if (hops < 2) {
						if (rel_time < 699) {
							w7 = 171;
						} else {
							w7 = 163;
						}
					} else {
						if (rel_time < 699) {
							w7 = 191;
						} else {
							w7 = 174;
						}
					}
				} else {
					if (rel_time < 10627) {
						if (rel_time < 10046) {
							w7 = 159;
						} else {
							w7 = 144;
						}
					} else {
						w7 = 174;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 3012) {
						if (rel_time < 699) {
							w7 = 205;
						} else {
							w7 = 185;
						}
					} else {
						if (rel_time < 10645) {
							w7 = 172;
						} else {
							w7 = 199;
						}
					}
				} else {
					if (rel_time < 1250) {
						w7 = 239;
					} else {
						if (rel_time < 10645) {
							w7 = 192;
						} else {
							w7 = 245;
						}
					}
				}
			}
		}
	}
	int w8;
	if (size < 133) {
		if (hops < 5) {
			if (prod != 2) {
				if (rel_time < 11211) {
					if (rel_time < 807) {
						if (rel_time < 399) {
							w8 = -100;
						} else {
							w8 = 128;
						}
					} else {
						if (rel_time < 1574) {
							w8 = -229;
						} else {
							w8 = -33;
						}
					}
				} else {
					if (size < 69) {
						if (hops < 3) {
							w8 = 407;
						} else {
							w8 = 560;
						}
					} else {
						if (hops < 2) {
							w8 = -56;
						} else {
							w8 = 22;
						}
					}
				}
			} else {
				if (rel_time < 1899) {
					if (rel_time < 725) {
						if (hops < 3) {
							w8 = -171;
						} else {
							w8 = -357;
						}
					} else {
						if (rel_time < 1333) {
							w8 = 713;
						} else {
							w8 = 173;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11295) {
							w8 = -52;
						} else {
							w8 = -16;
						}
					} else {
						if (hops < 3) {
							w8 = 71;
						} else {
							w8 = -2;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 69) {
					if (rel_time < 2322) {
						if (rel_time < 1133) {
							w8 = 46;
						} else {
							w8 = 332;
						}
					} else {
						if (size < 37) {
							w8 = -65;
						} else {
							w8 = 107;
						}
					}
				} else {
					if (rel_time < 11271) {
						if (rel_time < 640) {
							w8 = 317;
						} else {
							w8 = 172;
						}
					} else {
						if (rel_time < 11786) {
							w8 = -29;
						} else {
							w8 = -69;
						}
					}
				}
			} else {
				if (rel_time < 1574) {
					if (rel_time < 558) {
						w8 = 531;
					} else {
						if (rel_time < 1132) {
							w8 = -472;
						} else {
							w8 = -660;
						}
					}
				} else {
					if (rel_time < 2156) {
						w8 = 1092;
					} else {
						if (rel_time < 10961) {
							w8 = 398;
						} else {
							w8 = -136;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 4) {
				if (hops < 2) {
					w8 = 119;
				} else {
					if (hops < 3) {
						w8 = 134;
					} else {
						w8 = 120;
					}
				}
			} else {
				if (hops < 5) {
					w8 = 138;
				} else {
					w8 = 159;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 1837) {
					if (hops < 2) {
						if (rel_time < 1250) {
							w8 = 81;
						} else {
							w8 = 87;
						}
					} else {
						if (hops < 3) {
							w8 = 90;
						} else {
							w8 = 94;
						}
					}
				} else {
					if (rel_time < 2404) {
						if (hops < 2) {
							w8 = 64;
						} else {
							w8 = 77;
						}
					} else {
						if (rel_time < 10645) {
							w8 = 81;
						} else {
							w8 = 89;
						}
					}
				}
			} else {
				if (rel_time < 699) {
					w8 = 121;
				} else {
					if (rel_time < 9473) {
						if (hops < 5) {
							w8 = 93;
						} else {
							w8 = 99;
						}
					} else {
						if (rel_time < 10645) {
							w8 = 75;
						} else {
							w8 = 107;
						}
					}
				}
			}
		}
	}
	int w9;
	if (size < 69) {
		if (hops < 4) {
			if (rel_time < 11132) {
				if (rel_time < 2156) {
					if (rel_time < 1734) {
						if (rel_time < 1333) {
							w9 = -22;
						} else {
							w9 = -335;
						}
					} else {
						if (prod != 1) {
							w9 = 498;
						} else {
							w9 = -136;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 0) {
							w9 = -83;
						} else {
							w9 = 68;
						}
					} else {
						if (hops < 3) {
							w9 = -117;
						} else {
							w9 = -35;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w9 = 226;
					} else {
						w9 = 177;
					}
				} else {
					w9 = 255;
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 1871) {
					if (rel_time < 1734) {
						if (rel_time < 920) {
							w9 = 17;
						} else {
							w9 = 172;
						}
					} else {
						if (rel_time < 1838) {
							w9 = 568;
						} else {
							w9 = 334;
						}
					}
				} else {
					if (size < 37) {
						if (hops < 5) {
							w9 = -62;
						} else {
							w9 = -32;
						}
					} else {
						if (hops < 5) {
							w9 = -13;
						} else {
							w9 = 51;
						}
					}
				}
			} else {
				if (rel_time < 1574) {
					if (rel_time < 558) {
						if (hops < 5) {
							w9 = 164;
						} else {
							w9 = 267;
						}
					} else {
						if (hops < 5) {
							w9 = -66;
						} else {
							w9 = -288;
						}
					}
				} else {
					if (rel_time < 2156) {
						if (hops < 5) {
							w9 = 759;
						} else {
							w9 = 550;
						}
					} else {
						if (hops < 5) {
							w9 = 100;
						} else {
							w9 = 182;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (size < 133) {
				if (prod != 4) {
					if (rel_time < 725) {
						if (rel_time < 640) {
							w9 = -62;
						} else {
							w9 = -235;
						}
					} else {
						if (rel_time < 1899) {
							w9 = 62;
						} else {
							w9 = -23;
						}
					}
				} else {
					if (rel_time < 11726) {
						if (rel_time < 1800) {
							w9 = -104;
						} else {
							w9 = -78;
						}
					} else {
						w9 = 80;
					}
				}
			} else {
				if (rel_time < 317) {
					w9 = 60;
				} else {
					if (rel_time < 6515) {
						if (rel_time < 5340) {
							w9 = 40;
						} else {
							w9 = 48;
						}
					} else {
						if (rel_time < 8869) {
							w9 = 30;
						} else {
							w9 = 39;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 2403) {
					if (prod != 2) {
						if (prod != 3) {
							w9 = 51;
						} else {
							w9 = 92;
						}
					} else {
						if (rel_time < 725) {
							w9 = 83;
						} else {
							w9 = 472;
						}
					}
				} else {
					if (prod != 4) {
						if (rel_time < 11266) {
							w9 = 42;
						} else {
							w9 = 11;
						}
					} else {
						if (rel_time < 11132) {
							w9 = 117;
						} else {
							w9 = 34;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (size < 133) {
						if (rel_time < 1333) {
							w9 = 41;
						} else {
							w9 = -10;
						}
					} else {
						if (rel_time < 317) {
							w9 = 64;
						} else {
							w9 = 45;
						}
					}
				} else {
					if (rel_time < 11271) {
						if (rel_time < 1228) {
							w9 = 22;
						} else {
							w9 = 84;
						}
					} else {
						if (rel_time < 11792) {
							w9 = -36;
						} else {
							w9 = 2;
						}
					}
				}
			}
		}
	}
	int w10;
	if (size < 37) {
		if (rel_time < 920) {
			if (rel_time < 512) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w10 = -86;
						} else {
							w10 = -1;
						}
					} else {
						w10 = -116;
					}
				} else {
					if (rel_time < 59) {
						if (hops < 5) {
							w10 = -17;
						} else {
							w10 = 5;
						}
					} else {
						if (hops < 5) {
							w10 = 132;
						} else {
							w10 = 394;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w10 = -261;
					} else {
						if (rel_time < 808) {
							w10 = -161;
						} else {
							w10 = -258;
						}
					}
				} else {
					if (hops < 5) {
						w10 = -103;
					} else {
						w10 = -172;
					}
				}
			}
		} else {
			if (rel_time < 1871) {
				if (hops < 4) {
					if (rel_time < 1283) {
						if (hops < 2) {
							w10 = -147;
						} else {
							w10 = -16;
						}
					} else {
						if (hops < 3) {
							w10 = 109;
						} else {
							w10 = -11;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1838) {
							w10 = 203;
						} else {
							w10 = 102;
						}
					} else {
						if (rel_time < 1283) {
							w10 = 239;
						} else {
							w10 = 309;
						}
					}
				}
			} else {
				if (rel_time < 7743) {
					if (rel_time < 6569) {
						if (hops < 3) {
							w10 = -27;
						} else {
							w10 = -42;
						}
					} else {
						if (hops < 4) {
							w10 = -66;
						} else {
							w10 = -21;
						}
					}
				} else {
					if (rel_time < 8332) {
						if (hops < 3) {
							w10 = 33;
						} else {
							w10 = -14;
						}
					} else {
						if (rel_time < 8920) {
							w10 = -55;
						} else {
							w10 = -30;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1333) {
			if (rel_time < 1250) {
				if (prod != 1) {
					if (rel_time < 699) {
						if (size < 69) {
							w10 = 128;
						} else {
							w10 = 23;
						}
					} else {
						if (rel_time < 1132) {
							w10 = -115;
						} else {
							w10 = 8;
						}
					}
				} else {
					if (rel_time < 399) {
						if (hops < 5) {
							w10 = -6;
						} else {
							w10 = 116;
						}
					} else {
						if (rel_time < 726) {
							w10 = 393;
						} else {
							w10 = 88;
						}
					}
				}
			} else {
				if (hops < 2) {
					w10 = 62;
				} else {
					if (size < 69) {
						if (hops < 3) {
							w10 = 1104;
						} else {
							w10 = 2260;
						}
					} else {
						if (hops < 3) {
							w10 = 504;
						} else {
							w10 = 273;
						}
					}
				}
			}
		} else {
			if (rel_time < 1574) {
				if (hops < 3) {
					if (hops < 2) {
						w10 = -98;
					} else {
						w10 = -1235;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w10 = -76;
						} else {
							w10 = -110;
						}
					} else {
						w10 = -190;
					}
				}
			} else {
				if (rel_time < 2156) {
					if (prod != 0) {
						if (rel_time < 1734) {
							w10 = 123;
						} else {
							w10 = -3;
						}
					} else {
						if (hops < 2) {
							w10 = 629;
						} else {
							w10 = 290;
						}
					}
				} else {
					if (hops < 4) {
						if (size < 69) {
							w10 = -26;
						} else {
							w10 = 5;
						}
					} else {
						if (prod != 0) {
							w10 = 14;
						} else {
							w10 = 60;
						}
					}
				}
			}
		}
	}
	int w11;
	if (size < 37) {
		if (rel_time < 920) {
			if (rel_time < 512) {
				if (hops < 4) {
					if (rel_time < 59) {
						if (hops < 2) {
							w11 = -71;
						} else {
							w11 = -46;
						}
					} else {
						if (rel_time < 400) {
							w11 = 10;
						} else {
							w11 = -59;
						}
					}
				} else {
					if (rel_time < 59) {
						if (hops < 5) {
							w11 = -9;
						} else {
							w11 = 3;
						}
					} else {
						if (hops < 5) {
							w11 = 66;
						} else {
							w11 = 198;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w11 = -130;
					} else {
						if (rel_time < 808) {
							w11 = -81;
						} else {
							w11 = -129;
						}
					}
				} else {
					if (hops < 5) {
						w11 = -52;
					} else {
						w11 = -87;
					}
				}
			}
		} else {
			if (rel_time < 1871) {
				if (hops < 2) {
					if (rel_time < 1283) {
						w11 = -73;
					} else {
						if (rel_time < 1838) {
							w11 = 23;
						} else {
							w11 = -32;
						}
					}
				} else {
					if (rel_time < 1283) {
						if (hops < 4) {
							w11 = -8;
						} else {
							w11 = 71;
						}
					} else {
						if (hops < 4) {
							w11 = 68;
						} else {
							w11 = 135;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 3) {
						if (hops < 2) {
							w11 = -22;
						} else {
							w11 = -8;
						}
					} else {
						if (hops < 4) {
							w11 = -30;
						} else {
							w11 = -13;
						}
					}
				} else {
					if (rel_time < 10092) {
						if (rel_time < 3046) {
							w11 = -9;
						} else {
							w11 = 6;
						}
					} else {
						w11 = -30;
					}
				}
			}
		}
	} else {
		if (rel_time < 1333) {
			if (rel_time < 1250) {
				if (prod != 1) {
					if (rel_time < 558) {
						if (hops < 3) {
							w11 = 69;
						} else {
							w11 = 4;
						}
					} else {
						if (cons != 5) {
							w11 = 5;
						} else {
							w11 = -57;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 399) {
							w11 = -3;
						} else {
							w11 = 84;
						}
					} else {
						if (rel_time < 399) {
							w11 = 58;
						} else {
							w11 = -225;
						}
					}
				}
			} else {
				if (hops < 2) {
					w11 = 31;
				} else {
					if (size < 69) {
						if (hops < 3) {
							w11 = 644;
						} else {
							w11 = 1256;
						}
					} else {
						if (hops < 3) {
							w11 = 252;
						} else {
							w11 = 137;
						}
					}
				}
			}
		} else {
			if (rel_time < 1574) {
				if (hops < 3) {
					if (hops < 2) {
						w11 = -49;
					} else {
						w11 = -618;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w11 = -38;
						} else {
							w11 = -55;
						}
					} else {
						w11 = -95;
					}
				}
			} else {
				if (rel_time < 1900) {
					if (prod != 0) {
						if (prod != 4) {
							w11 = 32;
						} else {
							w11 = -48;
						}
					} else {
						if (hops < 2) {
							w11 = 312;
						} else {
							w11 = 146;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 5) {
							w11 = -5;
						} else {
							w11 = 36;
						}
					} else {
						if (hops < 5) {
							w11 = 17;
						} else {
							w11 = 0;
						}
					}
				}
			}
		}
	}
	int w12;
	if (rel_time < 11271) {
		if (rel_time < 8360) {
			if (size < 37) {
				if (rel_time < 920) {
					if (rel_time < 512) {
						if (hops < 4) {
							w12 = -16;
						} else {
							w12 = 24;
						}
					} else {
						if (hops < 4) {
							w12 = -56;
						} else {
							w12 = -30;
						}
					}
				} else {
					if (rel_time < 1838) {
						if (rel_time < 1283) {
							w12 = -7;
						} else {
							w12 = 50;
						}
					} else {
						if (rel_time < 7743) {
							w12 = -10;
						} else {
							w12 = 16;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (prod != 0) {
						if (hops < 3) {
							w12 = 13;
						} else {
							w12 = -21;
						}
					} else {
						if (hops < 2) {
							w12 = 67;
						} else {
							w12 = -65;
						}
					}
				} else {
					if (rel_time < 640) {
						if (rel_time < 558) {
							w12 = 32;
						} else {
							w12 = 126;
						}
					} else {
						if (rel_time < 807) {
							w12 = -64;
						} else {
							w12 = 12;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w12 = -18;
						} else {
							w12 = 21;
						}
					} else {
						if (hops < 2) {
							w12 = 19;
						} else {
							w12 = -175;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w12 = -14;
						} else {
							w12 = 7;
						}
					} else {
						if (hops < 4) {
							w12 = 108;
						} else {
							w12 = 19;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 9369) {
						if (rel_time < 8781) {
							w12 = -74;
						} else {
							w12 = -45;
						}
					} else {
						if (rel_time < 10961) {
							w12 = -90;
						} else {
							w12 = -107;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 10543) {
							w12 = 16;
						} else {
							w12 = -50;
						}
					} else {
						if (hops < 4) {
							w12 = -69;
						} else {
							w12 = -34;
						}
					}
				}
			}
		}
	} else {
		if (size < 69) {
			if (hops < 5) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w12 = 128;
						} else {
							w12 = 104;
						}
					} else {
						w12 = 143;
					}
				} else {
					if (rel_time < 11295) {
						w12 = 186;
					} else {
						w12 = 246;
					}
				}
			} else {
				w12 = -207;
			}
		} else {
			if (rel_time < 11726) {
				if (hops < 4) {
					if (rel_time < 11295) {
						if (hops < 2) {
							w12 = -8;
						} else {
							w12 = -34;
						}
					} else {
						if (rel_time < 11718) {
							w12 = 165;
						} else {
							w12 = -7;
						}
					}
				} else {
					if (rel_time < 11295) {
						if (hops < 5) {
							w12 = 11;
						} else {
							w12 = -25;
						}
					} else {
						w12 = -54;
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						if (prod != 4) {
							w12 = -6;
						} else {
							w12 = 40;
						}
					} else {
						if (prod != 3) {
							w12 = 5;
						} else {
							w12 = 23;
						}
					}
				} else {
					if (rel_time < 11786) {
						if (prod != 3) {
							w12 = -19;
						} else {
							w12 = 46;
						}
					} else {
						if (rel_time < 11792) {
							w12 = -99;
						} else {
							w12 = -24;
						}
					}
				}
			}
		}
	}
	return (171004 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12) >> 8;
}
