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
	int w13;
	if (hops < 2) {
		if (prod != 0) {
			if (prod != 4) {
				if (size < 133) {
					if (rel_time < 807) {
						if (rel_time < 725) {
							w13 = -31;
						} else {
							w13 = 210;
						}
					} else {
						if (rel_time < 1146) {
							w13 = -43;
						} else {
							w13 = -12;
						}
					}
				} else {
					if (rel_time < 8869) {
						if (rel_time < 317) {
							w13 = -22;
						} else {
							w13 = 3;
						}
					} else {
						if (rel_time < 10039) {
							w13 = 16;
						} else {
							w13 = 19;
						}
					}
				}
			} else {
				if (rel_time < 11199) {
					if (rel_time < 1800) {
						if (rel_time < 559) {
							w13 = -22;
						} else {
							w13 = -65;
						}
					} else {
						if (rel_time < 10550) {
							w13 = -41;
						} else {
							w13 = -56;
						}
					}
				} else {
					if (rel_time < 11726) {
						w13 = -13;
					} else {
						w13 = 20;
					}
				}
			}
		} else {
			if (rel_time < 4500) {
				if (rel_time < 558) {
					w13 = -82;
				} else {
					if (rel_time < 1132) {
						w13 = 170;
					} else {
						if (rel_time < 1574) {
							w13 = -58;
						} else {
							w13 = 95;
						}
					}
				}
			} else {
				if (rel_time < 5088) {
					w13 = -66;
				} else {
					if (rel_time < 5675) {
						w13 = 68;
					} else {
						if (rel_time < 6263) {
							w13 = -68;
						} else {
							w13 = 17;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (hops < 3) {
				if (prod != 6) {
					if (rel_time < 8196) {
						if (size < 69) {
							w13 = 64;
						} else {
							w13 = 31;
						}
					} else {
						if (prod != 4) {
							w13 = 8;
						} else {
							w13 = 32;
						}
					}
				} else {
					if (rel_time < 10046) {
						if (rel_time < 9457) {
							w13 = 2;
						} else {
							w13 = 28;
						}
					} else {
						if (rel_time < 10627) {
							w13 = -70;
						} else {
							w13 = 8;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (size < 133) {
						if (hops < 4) {
							w13 = -10;
						} else {
							w13 = 5;
						}
					} else {
						if (hops < 4) {
							w13 = 20;
						} else {
							w13 = 4;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1734) {
							w13 = 17;
						} else {
							w13 = -61;
						}
					} else {
						if (rel_time < 2322) {
							w13 = -51;
						} else {
							w13 = -2;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 558) {
					w13 = 268;
				} else {
					if (rel_time < 1574) {
						if (rel_time < 1132) {
							w13 = -461;
						} else {
							w13 = -273;
						}
					} else {
						if (rel_time < 10374) {
							w13 = -135;
						} else {
							w13 = 26;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 558) {
						w13 = -40;
					} else {
						if (rel_time < 8360) {
							w13 = 145;
						} else {
							w13 = 57;
						}
					}
				} else {
					if (rel_time < 2156) {
						if (rel_time < 1574) {
							w13 = 20;
						} else {
							w13 = 138;
						}
					} else {
						if (hops < 5) {
							w13 = 8;
						} else {
							w13 = 43;
						}
					}
				}
			}
		}
	}
	int w14;
	if (hops < 2) {
		if (prod != 0) {
			if (prod != 4) {
				if (prod != 6) {
					if (rel_time < 1734) {
						if (rel_time < 725) {
							w14 = -23;
						} else {
							w14 = 35;
						}
					} else {
						if (size < 69) {
							w14 = -17;
						} else {
							w14 = -6;
						}
					}
				} else {
					if (rel_time < 3046) {
						if (rel_time < 2992) {
							w14 = -3;
						} else {
							w14 = -46;
						}
					} else {
						if (rel_time < 4165) {
							w14 = 26;
						} else {
							w14 = 1;
						}
					}
				}
			} else {
				if (rel_time < 7673) {
					if (rel_time < 7085) {
						if (rel_time < 6438) {
							w14 = -25;
						} else {
							w14 = 1;
						}
					} else {
						if (rel_time < 7609) {
							w14 = -64;
						} else {
							w14 = -34;
						}
					}
				} else {
					if (rel_time < 8785) {
						if (rel_time < 8260) {
							w14 = -11;
						} else {
							w14 = 13;
						}
					} else {
						if (rel_time < 9435) {
							w14 = -32;
						} else {
							w14 = -12;
						}
					}
				}
			}
		} else {
			if (rel_time < 3326) {
				if (rel_time < 2739) {
					if (rel_time < 558) {
						w14 = -41;
					} else {
						if (rel_time < 1132) {
							w14 = 85;
						} else {
							w14 = 26;
						}
					}
				} else {
					w14 = 141;
				}
			} else {
				if (rel_time < 3913) {
					w14 = -68;
				} else {
					if (rel_time < 10961) {
						if (rel_time < 4500) {
							w14 = 55;
						} else {
							w14 = -1;
						}
					} else {
						w14 = 56;
					}
				}
			}
		}
	} else {
		if (size < 69) {
			if (hops < 3) {
				if (prod != 0) {
					if (size < 37) {
						if (rel_time < 6569) {
							w14 = 9;
						} else {
							w14 = -13;
						}
					} else {
						if (rel_time < 3496) {
							w14 = 0;
						} else {
							w14 = 36;
						}
					}
				} else {
					if (rel_time < 558) {
						w14 = 134;
					} else {
						if (rel_time < 1574) {
							w14 = -183;
						} else {
							w14 = -58;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						if (rel_time < 8026) {
							w14 = -21;
						} else {
							w14 = -3;
						}
					} else {
						if (rel_time < 10679) {
							w14 = -2;
						} else {
							w14 = -69;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1574) {
							w14 = -8;
						} else {
							w14 = 67;
						}
					} else {
						if (rel_time < 10961) {
							w14 = 10;
						} else {
							w14 = 53;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (prod != 4) {
					if (rel_time < 1816) {
						if (prod != 2) {
							w14 = 3;
						} else {
							w14 = 105;
						}
					} else {
						if (rel_time < 1899) {
							w14 = -31;
						} else {
							w14 = 2;
						}
					}
				} else {
					if (rel_time < 1800) {
						if (rel_time < 627) {
							w14 = -21;
						} else {
							w14 = 2;
						}
					} else {
						if (rel_time < 8196) {
							w14 = 42;
						} else {
							w14 = 16;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (rel_time < 3012) {
						if (rel_time < 1228) {
							w14 = -7;
						} else {
							w14 = 22;
						}
					} else {
						if (rel_time < 3564) {
							w14 = -24;
						} else {
							w14 = 2;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 627) {
							w14 = -52;
						} else {
							w14 = -11;
						}
					} else {
						if (rel_time < 627) {
							w14 = 55;
						} else {
							w14 = -1;
						}
					}
				}
			}
		}
	}
	int w15;
	if (rel_time < 5394) {
		if (hops < 2) {
			if (prod != 0) {
				if (prod != 4) {
					if (rel_time < 5362) {
						if (rel_time < 4753) {
							w15 = 0;
						} else {
							w15 = -14;
						}
					} else {
						w15 = 26;
					}
				} else {
					if (rel_time < 4085) {
						if (rel_time < 3562) {
							w15 = -10;
						} else {
							w15 = -52;
						}
					} else {
						if (rel_time < 4673) {
							w15 = 9;
						} else {
							w15 = -9;
						}
					}
				}
			} else {
				if (rel_time < 3326) {
					if (rel_time < 1574) {
						if (rel_time < 1132) {
							w15 = 10;
						} else {
							w15 = -42;
						}
					} else {
						if (rel_time < 2156) {
							w15 = 85;
						} else {
							w15 = 33;
						}
					}
				} else {
					if (rel_time < 3913) {
						w15 = -34;
					} else {
						if (rel_time < 4500) {
							w15 = 27;
						} else {
							w15 = -33;
						}
					}
				}
			}
		} else {
			if (rel_time < 1132) {
				if (rel_time < 726) {
					if (rel_time < 725) {
						if (hops < 4) {
							w15 = -6;
						} else {
							w15 = 25;
						}
					} else {
						if (hops < 4) {
							w15 = 175;
						} else {
							w15 = -111;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 921) {
							w15 = -52;
						} else {
							w15 = -219;
						}
					} else {
						if (rel_time < 920) {
							w15 = -32;
						} else {
							w15 = 51;
						}
					}
				}
			} else {
				if (rel_time < 1333) {
					if (prod != 0) {
						if (prod != 2) {
							w15 = 9;
						} else {
							w15 = 57;
						}
					} else {
						w15 = 684;
					}
				} else {
					if (rel_time < 1574) {
						if (hops < 5) {
							w15 = -51;
						} else {
							w15 = -69;
						}
					} else {
						if (rel_time < 2156) {
							w15 = 16;
						} else {
							w15 = 2;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5675) {
			if (hops < 2) {
				if (rel_time < 5422) {
					w15 = -24;
				} else {
					w15 = 35;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 5422) {
						w15 = -20;
					} else {
						if (rel_time < 5424) {
							w15 = -115;
						} else {
							w15 = -128;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 5422) {
							w15 = 8;
						} else {
							w15 = -8;
						}
					} else {
						if (hops < 5) {
							w15 = -22;
						} else {
							w15 = -2;
						}
					}
				}
			}
		} else {
			if (rel_time < 11271) {
				if (size < 69) {
					if (rel_time < 9786) {
						if (rel_time < 9199) {
							w15 = -3;
						} else {
							w15 = 13;
						}
					} else {
						if (rel_time < 9956) {
							w15 = -43;
						} else {
							w15 = -12;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 5846) {
							w15 = -88;
						} else {
							w15 = -4;
						}
					} else {
						if (rel_time < 5846) {
							w15 = 67;
						} else {
							w15 = 2;
						}
					}
				}
			} else {
				if (size < 69) {
					if (hops < 5) {
						if (hops < 4) {
							w15 = 37;
						} else {
							w15 = 88;
						}
					} else {
						w15 = -152;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11726) {
							w15 = -5;
						} else {
							w15 = 8;
						}
					} else {
						if (prod != 2) {
							w15 = -27;
						} else {
							w15 = 4;
						}
					}
				}
			}
		}
	}
	int w16;
	if (rel_time < 59) {
		if (hops < 4) {
			w16 = -10;
		} else {
			w16 = -29;
		}
	} else {
		if (hops < 5) {
			if (rel_time < 1900) {
				if (rel_time < 1899) {
					if (prod != 1) {
						if (rel_time < 921) {
							w16 = 3;
						} else {
							w16 = -8;
						}
					} else {
						if (rel_time < 1133) {
							w16 = 10;
						} else {
							w16 = 49;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 21;
						} else {
							w16 = 11;
						}
					} else {
						if (hops < 4) {
							w16 = 194;
						} else {
							w16 = 74;
						}
					}
				}
			} else {
				if (rel_time < 2322) {
					if (prod != 0) {
						if (hops < 2) {
							w16 = -62;
						} else {
							w16 = -77;
						}
					} else {
						if (hops < 3) {
							w16 = 134;
						} else {
							w16 = 237;
						}
					}
				} else {
					if (rel_time < 2486) {
						if (size < 133) {
							w16 = 11;
						} else {
							w16 = -4;
						}
					} else {
						if (rel_time < 3496) {
							w16 = -6;
						} else {
							w16 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 1735) {
				if (rel_time < 1574) {
					if (rel_time < 699) {
						if (prod != 4) {
							w16 = 55;
						} else {
							w16 = -22;
						}
					} else {
						if (rel_time < 726) {
							w16 = -145;
						} else {
							w16 = -22;
						}
					}
				} else {
					if (rel_time < 1734) {
						w16 = -357;
					} else {
						w16 = -24;
					}
				}
			} else {
				if (rel_time < 1899) {
					if (prod != 2) {
						if (size < 133) {
							w16 = 55;
						} else {
							w16 = -38;
						}
					} else {
						w16 = 286;
					}
				} else {
					if (prod != 2) {
						if (prod != 6) {
							w16 = 18;
						} else {
							w16 = -5;
						}
					} else {
						if (rel_time < 3633) {
							w16 = -4;
						} else {
							w16 = -19;
						}
					}
				}
			}
		}
	}
	int w17;
	if (rel_time < 6434) {
		if (rel_time < 5984) {
			if (rel_time < 5394) {
				if (rel_time < 4500) {
					if (rel_time < 4247) {
						if (prod != 4) {
							w17 = 1;
						} else {
							w17 = -5;
						}
					} else {
						if (hops < 2) {
							w17 = 14;
						} else {
							w17 = -56;
						}
					}
				} else {
					if (rel_time < 4671) {
						if (hops < 3) {
							w17 = 66;
						} else {
							w17 = -40;
						}
					} else {
						if (hops < 2) {
							w17 = -5;
						} else {
							w17 = 7;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						if (prod != 1) {
							w17 = -5;
						} else {
							w17 = 54;
						}
					} else {
						if (size < 69) {
							w17 = -28;
						} else {
							w17 = 1;
						}
					}
				} else {
					if (prod != 3) {
						if (size < 69) {
							w17 = 30;
						} else {
							w17 = -8;
						}
					} else {
						if (rel_time < 5912) {
							w17 = 47;
						} else {
							w17 = 142;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (size < 69) {
					if (rel_time < 6266) {
						if (rel_time < 6263) {
							w17 = -36;
						} else {
							w17 = -28;
						}
					} else {
						w17 = -49;
					}
				} else {
					w17 = 9;
				}
			} else {
				if (hops < 3) {
					if (cons != 5) {
						if (rel_time < 6266) {
							w17 = 77;
						} else {
							w17 = 91;
						}
					} else {
						if (rel_time < 6013) {
							w17 = 13;
						} else {
							w17 = 27;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 4) {
							w17 = -2;
						} else {
							w17 = -41;
						}
					} else {
						if (hops < 4) {
							w17 = 93;
						} else {
							w17 = 43;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6438) {
			if (hops < 3) {
				if (hops < 2) {
					w17 = -27;
				} else {
					w17 = -65;
				}
			} else {
				if (hops < 4) {
					w17 = 54;
				} else {
					if (hops < 5) {
						w17 = -4;
					} else {
						w17 = -19;
					}
				}
			}
		} else {
			if (rel_time < 7776) {
				if (rel_time < 7709) {
					if (cons != 5) {
						if (rel_time < 7021) {
							w17 = 8;
						} else {
							w17 = -5;
						}
					} else {
						if (hops < 3) {
							w17 = -20;
						} else {
							w17 = 12;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 0) {
							w17 = -7;
						} else {
							w17 = 67;
						}
					} else {
						if (hops < 3) {
							w17 = -58;
						} else {
							w17 = -2;
						}
					}
				}
			} else {
				if (rel_time < 8196) {
					if (hops < 3) {
						if (prod != 0) {
							w17 = 49;
						} else {
							w17 = -34;
						}
					} else {
						if (prod != 1) {
							w17 = -34;
						} else {
							w17 = 16;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 8260) {
							w17 = -15;
						} else {
							w17 = 1;
						}
					} else {
						if (rel_time < 10543) {
							w17 = -7;
						} else {
							w17 = -30;
						}
					}
				}
			}
		}
	}
	int w18;
	if (rel_time < 399) {
		if (hops < 4) {
			if (rel_time < 317) {
				if (hops < 3) {
					if (rel_time < 59) {
						w18 = -6;
					} else {
						w18 = -12;
					}
				} else {
					if (rel_time < 59) {
						w18 = -4;
					} else {
						w18 = 19;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w18 = -3;
					} else {
						w18 = 2;
					}
				} else {
					w18 = -56;
				}
			}
		} else {
			if (rel_time < 317) {
				if (rel_time < 59) {
					w18 = -15;
				} else {
					w18 = -3;
				}
			} else {
				if (hops < 5) {
					w18 = 26;
				} else {
					w18 = 0;
				}
			}
		}
	} else {
		if (rel_time < 400) {
			if (hops < 2) {
				w18 = 3;
			} else {
				w18 = 36;
			}
		} else {
			if (rel_time < 725) {
				if (hops < 4) {
					if (hops < 3) {
						if (prod != 3) {
							w18 = 9;
						} else {
							w18 = -29;
						}
					} else {
						if (rel_time < 699) {
							w18 = -10;
						} else {
							w18 = -175;
						}
					}
				} else {
					if (cons != 5) {
						if (rel_time < 627) {
							w18 = 21;
						} else {
							w18 = 45;
						}
					} else {
						if (hops < 5) {
							w18 = -8;
						} else {
							w18 = -39;
						}
					}
				}
			} else {
				if (rel_time < 726) {
					if (hops < 3) {
						if (hops < 2) {
							w18 = 203;
						} else {
							w18 = 139;
						}
					} else {
						if (hops < 4) {
							w18 = -2;
						} else {
							w18 = -42;
						}
					}
				} else {
					if (rel_time < 807) {
						if (hops < 2) {
							w18 = 46;
						} else {
							w18 = -93;
						}
					} else {
						if (rel_time < 921) {
							w18 = 15;
						} else {
							w18 = 0;
						}
					}
				}
			}
		}
	}
	int w19;
	if (rel_time < 1212) {
		if (rel_time < 921) {
			if (rel_time < 920) {
				if (rel_time < 726) {
					if (rel_time < 725) {
						if (hops < 2) {
							w19 = -8;
						} else {
							w19 = 2;
						}
					} else {
						if (hops < 3) {
							w19 = 83;
						} else {
							w19 = -10;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w19 = -3;
						} else {
							w19 = -48;
						}
					} else {
						if (hops < 4) {
							w19 = 17;
						} else {
							w19 = -23;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						if (hops < 3) {
							w19 = 29;
						} else {
							w19 = 37;
						}
					} else {
						w19 = 74;
					}
				} else {
					w19 = -32;
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 2) {
					if (rel_time < 1146) {
						if (rel_time < 1132) {
							w19 = -35;
						} else {
							w19 = -55;
						}
					} else {
						w19 = -21;
					}
				} else {
					if (rel_time < 1146) {
						if (hops < 5) {
							w19 = 55;
						} else {
							w19 = -59;
						}
					} else {
						if (hops < 4) {
							w19 = 5;
						} else {
							w19 = -37;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w19 = 33;
					} else {
						w19 = -562;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w19 = -15;
						} else {
							w19 = 48;
						}
					} else {
						w19 = -75;
					}
				}
			}
		}
	} else {
		if (rel_time < 1333) {
			if (prod != 0) {
				if (prod != 6) {
					if (hops < 2) {
						if (rel_time < 1283) {
							w19 = 11;
						} else {
							w19 = 1;
						}
					} else {
						if (rel_time < 1228) {
							w19 = 10;
						} else {
							w19 = 32;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1250) {
							w19 = 2;
						} else {
							w19 = -19;
						}
					} else {
						if (rel_time < 1250) {
							w19 = -1;
						} else {
							w19 = 33;
						}
					}
				}
			} else {
				w19 = 370;
			}
		} else {
			if (rel_time < 1574) {
				if (rel_time < 1334) {
					if (hops < 4) {
						if (hops < 2) {
							w19 = -16;
						} else {
							w19 = -24;
						}
					} else {
						if (hops < 5) {
							w19 = -9;
						} else {
							w19 = -25;
						}
					}
				} else {
					if (hops < 4) {
						w19 = -21;
					} else {
						if (hops < 5) {
							w19 = -59;
						} else {
							w19 = -15;
						}
					}
				}
			} else {
				if (rel_time < 1735) {
					if (hops < 5) {
						if (hops < 4) {
							w19 = 28;
						} else {
							w19 = -19;
						}
					} else {
						if (rel_time < 1734) {
							w19 = -180;
						} else {
							w19 = -10;
						}
					}
				} else {
					if (rel_time < 1816) {
						if (hops < 2) {
							w19 = -27;
						} else {
							w19 = -8;
						}
					} else {
						if (rel_time < 1900) {
							w19 = 9;
						} else {
							w19 = 0;
						}
					}
				}
			}
		}
	}
	int w20;
	if (rel_time < 11295) {
		if (hops < 5) {
			if (hops < 4) {
				if (prod != 6) {
					if (rel_time < 725) {
						if (hops < 3) {
							w20 = 2;
						} else {
							w20 = -32;
						}
					} else {
						if (rel_time < 726) {
							w20 = 30;
						} else {
							w20 = 0;
						}
					}
				} else {
					if (rel_time < 10645) {
						if (rel_time < 8869) {
							w20 = 2;
						} else {
							w20 = -3;
						}
					} else {
						if (rel_time < 11214) {
							w20 = 13;
						} else {
							w20 = 2;
						}
					}
				}
			} else {
				if (rel_time < 1146) {
					if (rel_time < 1132) {
						if (rel_time < 920) {
							w20 = -1;
						} else {
							w20 = 33;
						}
					} else {
						w20 = 98;
					}
				} else {
					if (prod != 1) {
						if (rel_time < 7160) {
							w20 = -6;
						} else {
							w20 = -2;
						}
					} else {
						if (rel_time < 7607) {
							w20 = -3;
						} else {
							w20 = 13;
						}
					}
				}
			}
		} else {
			if (rel_time < 10968) {
				if (rel_time < 10550) {
					if (size < 133) {
						if (rel_time < 1800) {
							w20 = -6;
						} else {
							w20 = 8;
						}
					} else {
						if (rel_time < 699) {
							w20 = 8;
						} else {
							w20 = -10;
						}
					}
				} else {
					if (rel_time < 10611) {
						if (prod != 3) {
							w20 = -118;
						} else {
							w20 = -58;
						}
					} else {
						if (prod != 0) {
							w20 = -19;
						} else {
							w20 = 9;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 11132) {
						w20 = 112;
					} else {
						if (size < 133) {
							w20 = -18;
						} else {
							w20 = 15;
						}
					}
				} else {
					if (rel_time < 11199) {
						w20 = 93;
					} else {
						w20 = 156;
					}
				}
			}
		}
	} else {
		if (hops < 5) {
			if (rel_time < 11718) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w20 = 10;
						} else {
							w20 = 50;
						}
					} else {
						if (rel_time < 11300) {
							w20 = -8;
						} else {
							w20 = -20;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11300) {
							w20 = 55;
						} else {
							w20 = 30;
						}
					} else {
						w20 = -43;
					}
				}
			} else {
				if (rel_time < 11786) {
					if (hops < 4) {
						if (prod != 3) {
							w20 = -3;
						} else {
							w20 = 2;
						}
					} else {
						w20 = -16;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11792) {
							w20 = 16;
						} else {
							w20 = -7;
						}
					} else {
						if (prod != 2) {
							w20 = -1;
						} else {
							w20 = 24;
						}
					}
				}
			}
		} else {
			if (rel_time < 11718) {
				w20 = -91;
			} else {
				if (rel_time < 11786) {
					if (prod != 3) {
						w20 = -23;
					} else {
						w20 = 24;
					}
				} else {
					if (rel_time < 11792) {
						w20 = -49;
					} else {
						w20 = -9;
					}
				}
			}
		}
	}
	int w21;
	if (prod != 1) {
		if (rel_time < 3602) {
			if (rel_time < 3599) {
				if (rel_time < 1837) {
					if (rel_time < 1333) {
						if (hops < 2) {
							w21 = -5;
						} else {
							w21 = 3;
						}
					} else {
						if (hops < 3) {
							w21 = -1;
						} else {
							w21 = -13;
						}
					}
				} else {
					if (rel_time < 2403) {
						if (prod != 0) {
							w21 = 4;
						} else {
							w21 = 33;
						}
					} else {
						if (hops < 4) {
							w21 = 2;
						} else {
							w21 = -7;
						}
					}
				}
			} else {
				if (hops < 2) {
					w21 = 32;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w21 = 15;
						} else {
							w21 = 22;
						}
					} else {
						if (hops < 5) {
							w21 = 4;
						} else {
							w21 = 20;
						}
					}
				}
			}
		} else {
			if (rel_time < 4500) {
				if (hops < 3) {
					if (rel_time < 4247) {
						if (rel_time < 3660) {
							w21 = -18;
						} else {
							w21 = -3;
						}
					} else {
						if (hops < 2) {
							w21 = 7;
						} else {
							w21 = -88;
						}
					}
				} else {
					if (cons != 5) {
						if (hops < 5) {
							w21 = -15;
						} else {
							w21 = 34;
						}
					} else {
						if (hops < 4) {
							w21 = 37;
						} else {
							w21 = -5;
						}
					}
				}
			} else {
				if (rel_time < 4671) {
					if (hops < 3) {
						w21 = 98;
					} else {
						w21 = 2;
					}
				} else {
					if (rel_time < 5261) {
						if (rel_time < 4835) {
							w21 = -1;
						} else {
							w21 = 14;
						}
					} else {
						if (rel_time < 9373) {
							w21 = -1;
						} else {
							w21 = 1;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3496) {
			if (rel_time < 1734) {
				if (hops < 5) {
					if (rel_time < 1146) {
						if (rel_time < 807) {
							w21 = -4;
						} else {
							w21 = 3;
						}
					} else {
						if (hops < 2) {
							w21 = -1;
						} else {
							w21 = 22;
						}
					}
				} else {
					if (rel_time < 1133) {
						if (rel_time < 807) {
							w21 = 11;
						} else {
							w21 = -27;
						}
					} else {
						w21 = -88;
					}
				}
			} else {
				if (rel_time < 2322) {
					if (hops < 4) {
						if (hops < 3) {
							w21 = -35;
						} else {
							w21 = -54;
						}
					} else {
						w21 = -20;
					}
				} else {
					if (rel_time < 2909) {
						if (hops < 2) {
							w21 = -41;
						} else {
							w21 = 26;
						}
					} else {
						if (hops < 2) {
							w21 = 7;
						} else {
							w21 = -34;
						}
					}
				}
			}
		} else {
			if (rel_time < 4671) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 4083) {
							w21 = -2;
						} else {
							w21 = 22;
						}
					} else {
						if (rel_time < 4083) {
							w21 = 101;
						} else {
							w21 = 39;
						}
					}
				} else {
					if (hops < 4) {
						w21 = -41;
					} else {
						if (rel_time < 4083) {
							w21 = 35;
						} else {
							w21 = -2;
						}
					}
				}
			} else {
				if (rel_time < 10543) {
					if (hops < 3) {
						if (rel_time < 8194) {
							w21 = 10;
						} else {
							w21 = -10;
						}
					} else {
						if (rel_time < 8781) {
							w21 = -14;
						} else {
							w21 = 14;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w21 = -15;
						} else {
							w21 = -26;
						}
					} else {
						if (hops < 4) {
							w21 = 2;
						} else {
							w21 = -18;
						}
					}
				}
			}
		}
	}
	int w22;
	if (rel_time < 8612) {
		if (rel_time < 8026) {
			if (rel_time < 7748) {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w22 = -1;
						} else {
							w22 = 3;
						}
					} else {
						if (hops < 2) {
							w22 = 0;
						} else {
							w22 = -22;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w22 = -4;
						} else {
							w22 = 1;
						}
					} else {
						if (hops < 4) {
							w22 = 32;
						} else {
							w22 = 3;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (prod != 0) {
						if (rel_time < 7772) {
							w22 = 10;
						} else {
							w22 = -1;
						}
					} else {
						if (rel_time < 7776) {
							w22 = 34;
						} else {
							w22 = 93;
						}
					}
				} else {
					if (hops < 3) {
						if (prod != 0) {
							w22 = 6;
						} else {
							w22 = -103;
						}
					} else {
						if (rel_time < 7776) {
							w22 = -10;
						} else {
							w22 = 8;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (prod != 0) {
					if (prod != 3) {
						if (prod != 2) {
							w22 = -1;
						} else {
							w22 = -13;
						}
					} else {
						w22 = -23;
					}
				} else {
					if (rel_time < 8360) {
						w22 = -68;
					} else {
						w22 = -57;
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						if (size < 37) {
							w22 = 37;
						} else {
							w22 = 12;
						}
					} else {
						if (rel_time < 8260) {
							w22 = 17;
						} else {
							w22 = -12;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 8360) {
							w22 = 34;
						} else {
							w22 = 81;
						}
					} else {
						if (hops < 4) {
							w22 = 48;
						} else {
							w22 = 31;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9199) {
			if (hops < 2) {
				if (rel_time < 8945) {
					if (prod != 3) {
						if (rel_time < 8781) {
							w22 = -12;
						} else {
							w22 = 1;
						}
					} else {
						if (rel_time < 8851) {
							w22 = 10;
						} else {
							w22 = 22;
						}
					}
				} else {
					w22 = 71;
				}
			} else {
				if (rel_time < 8945) {
					if (size < 69) {
						if (hops < 3) {
							w22 = -36;
						} else {
							w22 = -5;
						}
					} else {
						if (prod != 3) {
							w22 = 2;
						} else {
							w22 = -21;
						}
					}
				} else {
					if (hops < 3) {
						w22 = -89;
					} else {
						if (hops < 5) {
							w22 = -37;
						} else {
							w22 = 15;
						}
					}
				}
			}
		} else {
			if (rel_time < 9369) {
				if (size < 69) {
					if (hops < 2) {
						w22 = -6;
					} else {
						if (hops < 5) {
							w22 = 27;
						} else {
							w22 = 3;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w22 = 17;
						} else {
							w22 = 129;
						}
					} else {
						if (hops < 5) {
							w22 = -19;
						} else {
							w22 = 177;
						}
					}
				}
			} else {
				if (rel_time < 9373) {
					if (hops < 2) {
						w22 = -14;
					} else {
						if (hops < 4) {
							w22 = -71;
						} else {
							w22 = 0;
						}
					}
				} else {
					if (rel_time < 9451) {
						if (hops < 4) {
							w22 = 4;
						} else {
							w22 = 46;
						}
					} else {
						if (hops < 4) {
							w22 = 1;
						} else {
							w22 = -6;
						}
					}
				}
			}
		}
	}
	int w23;
	if (size < 69) {
		if (rel_time < 11132) {
			if (rel_time < 9786) {
				if (rel_time < 9199) {
					if (rel_time < 8612) {
						if (rel_time < 8026) {
							w23 = 0;
						} else {
							w23 = 7;
						}
					} else {
						if (hops < 2) {
							w23 = 12;
						} else {
							w23 = -15;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 9507) {
							w23 = 2;
						} else {
							w23 = -58;
						}
					} else {
						if (hops < 3) {
							w23 = 44;
						} else {
							w23 = -5;
						}
					}
				}
			} else {
				if (rel_time < 10374) {
					if (hops < 2) {
						if (prod != 0) {
							w23 = -8;
						} else {
							w23 = 69;
						}
					} else {
						if (hops < 3) {
							w23 = -50;
						} else {
							w23 = -8;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 0) {
							w23 = -5;
						} else {
							w23 = -38;
						}
					} else {
						if (rel_time < 10543) {
							w23 = 26;
						} else {
							w23 = 3;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w23 = 4;
						} else {
							w23 = 27;
						}
					} else {
						if (rel_time < 11295) {
							w23 = 8;
						} else {
							w23 = -7;
						}
					}
				} else {
					if (rel_time < 11300) {
						w23 = 29;
					} else {
						w23 = 17;
					}
				}
			} else {
				w23 = -45;
			}
		}
	} else {
		if (rel_time < 1212) {
			if (hops < 4) {
				if (size < 133) {
					if (hops < 3) {
						if (prod != 2) {
							w23 = -7;
						} else {
							w23 = 15;
						}
					} else {
						if (prod != 2) {
							w23 = -2;
						} else {
							w23 = -72;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = 3;
						} else {
							w23 = -9;
						}
					} else {
						if (rel_time < 317) {
							w23 = 8;
						} else {
							w23 = 16;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (hops < 5) {
						if (rel_time < 725) {
							w23 = 9;
						} else {
							w23 = -11;
						}
					} else {
						if (rel_time < 699) {
							w23 = -4;
						} else {
							w23 = -48;
						}
					}
				} else {
					if (hops < 5) {
						w23 = 18;
					} else {
						w23 = 61;
					}
				}
			}
		} else {
			if (rel_time < 1735) {
				if (hops < 2) {
					if (rel_time < 1333) {
						if (rel_time < 1283) {
							w23 = 8;
						} else {
							w23 = 4;
						}
					} else {
						w23 = 73;
					}
				} else {
					if (prod != 2) {
						if (rel_time < 1250) {
							w23 = 1;
						} else {
							w23 = -19;
						}
					} else {
						if (hops < 3) {
							w23 = 8;
						} else {
							w23 = 21;
						}
					}
				}
			} else {
				if (rel_time < 1899) {
					if (hops < 5) {
						if (hops < 2) {
							w23 = 5;
						} else {
							w23 = -15;
						}
					} else {
						if (rel_time < 1837) {
							w23 = 14;
						} else {
							w23 = 132;
						}
					}
				} else {
					if (rel_time < 3562) {
						if (prod != 3) {
							w23 = 2;
						} else {
							w23 = 12;
						}
					} else {
						if (rel_time < 4165) {
							w23 = -6;
						} else {
							w23 = 1;
						}
					}
				}
			}
		}
	}
	int w24;
	if (hops < 2) {
		if (size < 133) {
			if (rel_time < 7160) {
				if (rel_time < 6569) {
					if (rel_time < 5849) {
						if (rel_time < 5325) {
							w24 = -2;
						} else {
							w24 = 11;
						}
					} else {
						if (prod != 2) {
							w24 = -13;
						} else {
							w24 = 5;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 6855) {
							w24 = 59;
						} else {
							w24 = 12;
						}
					} else {
						if (prod != 3) {
							w24 = 4;
						} else {
							w24 = -14;
						}
					}
				}
			} else {
				if (rel_time < 7609) {
					if (prod != 0) {
						if (rel_time < 7185) {
							w24 = -20;
						} else {
							w24 = -28;
						}
					} else {
						if (rel_time < 7185) {
							w24 = -56;
						} else {
							w24 = -64;
						}
					}
				} else {
					if (prod != 4) {
						if (rel_time < 8781) {
							w24 = -5;
						} else {
							w24 = 1;
						}
					} else {
						if (rel_time < 11132) {
							w24 = -8;
						} else {
							w24 = 1;
						}
					}
				}
			}
		} else {
			if (rel_time < 4168) {
				if (rel_time < 2992) {
					if (rel_time < 2404) {
						if (rel_time < 1837) {
							w24 = 1;
						} else {
							w24 = -7;
						}
					} else {
						w24 = 9;
					}
				} else {
					if (rel_time < 4165) {
						if (rel_time < 3580) {
							w24 = -9;
						} else {
							w24 = 24;
						}
					} else {
						w24 = -13;
					}
				}
			} else {
				if (rel_time < 4753) {
					w24 = 17;
				} else {
					if (rel_time < 8869) {
						if (rel_time < 7691) {
							w24 = 4;
						} else {
							w24 = -1;
						}
					} else {
						if (rel_time < 10627) {
							w24 = 10;
						} else {
							w24 = 1;
						}
					}
				}
			}
		}
	} else {
		if (prod != 4) {
			if (rel_time < 1838) {
				if (rel_time < 1837) {
					if (hops < 3) {
						if (rel_time < 1574) {
							w24 = 4;
						} else {
							w24 = 22;
						}
					} else {
						if (cons != 5) {
							w24 = 1;
						} else {
							w24 = -7;
						}
					}
				} else {
					if (hops < 3) {
						w24 = 57;
					} else {
						if (hops < 4) {
							w24 = -29;
						} else {
							w24 = 62;
						}
					}
				}
			} else {
				if (rel_time < 1899) {
					if (hops < 5) {
						if (size < 69) {
							w24 = -3;
						} else {
							w24 = -44;
						}
					} else {
						if (prod != 0) {
							w24 = 67;
						} else {
							w24 = -108;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3496) {
							w24 = -14;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 2156) {
							w24 = 30;
						} else {
							w24 = 1;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 11132) {
					if (rel_time < 10611) {
						if (rel_time < 2975) {
							w24 = -2;
						} else {
							w24 = 13;
						}
					} else {
						w24 = 98;
					}
				} else {
					if (rel_time < 11138) {
						w24 = -56;
					} else {
						if (rel_time < 11718) {
							w24 = 57;
						} else {
							w24 = -10;
						}
					}
				}
			} else {
				if (rel_time < 2910) {
					if (rel_time < 2388) {
						if (rel_time < 1800) {
							w24 = -6;
						} else {
							w24 = 9;
						}
					} else {
						if (hops < 5) {
							w24 = -52;
						} else {
							w24 = 17;
						}
					}
				} else {
					if (rel_time < 2975) {
						if (hops < 4) {
							w24 = 58;
						} else {
							w24 = 1;
						}
					} else {
						if (rel_time < 3498) {
							w24 = -17;
						} else {
							w24 = 1;
						}
					}
				}
			}
		}
	}
	int w25;
	if (rel_time < 4753) {
		if (rel_time < 4737) {
			if (rel_time < 317) {
				if (hops < 2) {
					if (rel_time < 59) {
						w25 = 4;
					} else {
						w25 = -2;
					}
				} else {
					if (hops < 3) {
						w25 = -9;
					} else {
						if (hops < 4) {
							w25 = 0;
						} else {
							w25 = -9;
						}
					}
				}
			} else {
				if (rel_time < 558) {
					if (hops < 3) {
						if (hops < 2) {
							w25 = -4;
						} else {
							w25 = 26;
						}
					} else {
						if (hops < 5) {
							w25 = -7;
						} else {
							w25 = 18;
						}
					}
				} else {
					if (rel_time < 1146) {
						if (rel_time < 921) {
							w25 = 0;
						} else {
							w25 = -14;
						}
					} else {
						if (rel_time < 4149) {
							w25 = 1;
						} else {
							w25 = -1;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (hops < 3) {
					if (hops < 2) {
						if (size < 133) {
							w25 = -18;
						} else {
							w25 = 8;
						}
					} else {
						if (rel_time < 4740) {
							w25 = 20;
						} else {
							w25 = 12;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 4740) {
							w25 = 91;
						} else {
							w25 = 63;
						}
					} else {
						w25 = 1;
					}
				}
			} else {
				w25 = -84;
			}
		}
	} else {
		if (rel_time < 4807) {
			if (hops < 3) {
				if (rel_time < 4774) {
					if (rel_time < 4756) {
						w25 = -12;
					} else {
						w25 = -28;
					}
				} else {
					if (hops < 2) {
						w25 = -13;
					} else {
						w25 = -4;
					}
				}
			} else {
				if (rel_time < 4756) {
					if (hops < 4) {
						w25 = 2;
					} else {
						w25 = 9;
					}
				} else {
					if (rel_time < 4774) {
						if (hops < 4) {
							w25 = -1;
						} else {
							w25 = -11;
						}
					} else {
						if (hops < 5) {
							w25 = -2;
						} else {
							w25 = 16;
						}
					}
				}
			}
		} else {
			if (rel_time < 5090) {
				if (hops < 3) {
					if (hops < 2) {
						if (size < 69) {
							w25 = -22;
						} else {
							w25 = 8;
						}
					} else {
						if (prod != 0) {
							w25 = -3;
						} else {
							w25 = 10;
						}
					}
				} else {
					if (rel_time < 4835) {
						if (rel_time < 4808) {
							w25 = -2;
						} else {
							w25 = -13;
						}
					} else {
						if (hops < 4) {
							w25 = 50;
						} else {
							w25 = 21;
						}
					}
				}
			} else {
				if (rel_time < 5849) {
					if (rel_time < 5846) {
						if (prod != 4) {
							w25 = -4;
						} else {
							w25 = 5;
						}
					} else {
						if (hops < 2) {
							w25 = 4;
						} else {
							w25 = -52;
						}
					}
				} else {
					if (rel_time < 6434) {
						if (hops < 2) {
							w25 = -5;
						} else {
							w25 = 9;
						}
					} else {
						if (rel_time < 6851) {
							w25 = -7;
						} else {
							w25 = 0;
						}
					}
				}
			}
		}
	}
	int w26;
	if (rel_time < 8785) {
		if (rel_time < 8781) {
			if (rel_time < 6851) {
				if (rel_time < 6597) {
					if (rel_time < 5982) {
						if (rel_time < 5394) {
							w26 = 0;
						} else {
							w26 = -2;
						}
					} else {
						if (size < 69) {
							w26 = 6;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w26 = 29;
					} else {
						if (hops < 3) {
							w26 = -67;
						} else {
							w26 = -26;
						}
					}
				}
			} else {
				if (rel_time < 7021) {
					if (hops < 3) {
						if (hops < 2) {
							w26 = 21;
						} else {
							w26 = 60;
						}
					} else {
						if (size < 69) {
							w26 = -36;
						} else {
							w26 = 18;
						}
					}
				} else {
					if (rel_time < 7087) {
						if (hops < 4) {
							w26 = -23;
						} else {
							w26 = 15;
						}
					} else {
						if (hops < 2) {
							w26 = -3;
						} else {
							w26 = 3;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w26 = 12;
				} else {
					w26 = 52;
				}
			} else {
				if (hops < 5) {
					w26 = -27;
				} else {
					w26 = 68;
				}
			}
		}
	} else {
		if (rel_time < 8851) {
			if (hops < 2) {
				if (rel_time < 8847) {
					w26 = -15;
				} else {
					w26 = 4;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 8847) {
						if (hops < 3) {
							w26 = -94;
						} else {
							w26 = 73;
						}
					} else {
						if (hops < 3) {
							w26 = 8;
						} else {
							w26 = -69;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 8847) {
							w26 = 28;
						} else {
							w26 = -20;
						}
					} else {
						if (rel_time < 8847) {
							w26 = -63;
						} else {
							w26 = -18;
						}
					}
				}
			}
		} else {
			if (prod != 3) {
				if (rel_time < 10374) {
					if (rel_time < 10092) {
						if (rel_time < 10061) {
							w26 = -1;
						} else {
							w26 = 9;
						}
					} else {
						if (hops < 2) {
							w26 = 9;
						} else {
							w26 = -21;
						}
					}
				} else {
					if (rel_time < 10627) {
						if (hops < 2) {
							w26 = 1;
						} else {
							w26 = 10;
						}
					} else {
						if (prod != 1) {
							w26 = 0;
						} else {
							w26 = -8;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11211) {
							w26 = 5;
						} else {
							w26 = -11;
						}
					} else {
						if (rel_time < 9451) {
							w26 = 24;
						} else {
							w26 = 8;
						}
					}
				} else {
					if (rel_time < 10039) {
						if (rel_time < 10022) {
							w26 = -7;
						} else {
							w26 = 20;
						}
					} else {
						if (hops < 4) {
							w26 = -28;
						} else {
							w26 = 0;
						}
					}
				}
			}
		}
	}
	int w27;
	if (prod != 1) {
		if (hops < 3) {
			if (prod != 0) {
				if (rel_time < 9960) {
					if (rel_time < 9533) {
						if (rel_time < 9457) {
							w27 = 0;
						} else {
							w27 = 8;
						}
					} else {
						if (rel_time < 9956) {
							w27 = 174;
						} else {
							w27 = 32;
						}
					}
				} else {
					if (rel_time < 10022) {
						if (hops < 2) {
							w27 = -30;
						} else {
							w27 = -78;
						}
					} else {
						if (prod != 2) {
							w27 = 1;
						} else {
							w27 = -4;
						}
					}
				}
			} else {
				if (rel_time < 921) {
					if (hops < 2) {
						if (rel_time < 558) {
							w27 = -24;
						} else {
							w27 = 17;
						}
					} else {
						if (rel_time < 558) {
							w27 = 57;
						} else {
							w27 = 23;
						}
					}
				} else {
					if (rel_time < 1132) {
						if (hops < 2) {
							w27 = 27;
						} else {
							w27 = -268;
						}
					} else {
						if (hops < 2) {
							w27 = 2;
						} else {
							w27 = -9;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 2458) {
					if (hops < 4) {
						if (rel_time < 1837) {
							w27 = -3;
						} else {
							w27 = -23;
						}
					} else {
						if (prod != 3) {
							w27 = 0;
						} else {
							w27 = 20;
						}
					}
				} else {
					if (rel_time < 3014) {
						if (hops < 4) {
							w27 = 36;
						} else {
							w27 = -12;
						}
					} else {
						if (prod != 3) {
							w27 = 1;
						} else {
							w27 = -4;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 8612) {
						if (rel_time < 1574) {
							w27 = -9;
						} else {
							w27 = 19;
						}
					} else {
						if (rel_time < 10374) {
							w27 = -12;
						} else {
							w27 = 8;
						}
					}
				} else {
					if (rel_time < 3913) {
						if (rel_time < 3326) {
							w27 = -1;
						} else {
							w27 = -31;
						}
					} else {
						if (rel_time < 7189) {
							w27 = 8;
						} else {
							w27 = 0;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 3496) {
				if (rel_time < 1734) {
					if (rel_time < 807) {
						if (hops < 2) {
							w27 = 20;
						} else {
							w27 = -36;
						}
					} else {
						if (rel_time < 1132) {
							w27 = 60;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (rel_time < 2740) {
						w27 = -15;
					} else {
						if (rel_time < 2909) {
							w27 = -2;
						} else {
							w27 = -12;
						}
					}
				}
			} else {
				if (rel_time < 4671) {
					if (hops < 2) {
						if (rel_time < 4502) {
							w27 = 2;
						} else {
							w27 = 22;
						}
					} else {
						if (rel_time < 4083) {
							w27 = 48;
						} else {
							w27 = 19;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 5258) {
							w27 = -19;
						} else {
							w27 = -2;
						}
					} else {
						if (rel_time < 5846) {
							w27 = -10;
						} else {
							w27 = 7;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 807) {
					if (rel_time < 726) {
						w27 = -7;
					} else {
						w27 = 64;
					}
				} else {
					if (rel_time < 8612) {
						if (rel_time < 2909) {
							w27 = -6;
						} else {
							w27 = -19;
						}
					} else {
						if (rel_time < 9791) {
							w27 = 0;
						} else {
							w27 = 8;
						}
					}
				}
			} else {
				if (rel_time < 6434) {
					if (rel_time < 2322) {
						if (rel_time < 1146) {
							w27 = 3;
						} else {
							w27 = -21;
						}
					} else {
						if (rel_time < 5088) {
							w27 = 9;
						} else {
							w27 = 22;
						}
					}
				} else {
					if (rel_time < 7607) {
						if (rel_time < 6855) {
							w27 = -1;
						} else {
							w27 = -42;
						}
					} else {
						if (hops < 5) {
							w27 = 5;
						} else {
							w27 = -19;
						}
					}
				}
			}
		}
	}
	int w28;
	if (rel_time < 920) {
		if (rel_time < 726) {
			if (rel_time < 725) {
				if (prod != 3) {
					if (hops < 2) {
						if (cons != 5) {
							w28 = 3;
						} else {
							w28 = -15;
						}
					} else {
						if (cons != 5) {
							w28 = 0;
						} else {
							w28 = 7;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w28 = -2;
						} else {
							w28 = -21;
						}
					} else {
						if (hops < 5) {
							w28 = 2;
						} else {
							w28 = 20;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w28 = 39;
					} else {
						w28 = 30;
					}
				} else {
					if (hops < 5) {
						w28 = -6;
					} else {
						w28 = -42;
					}
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 807) {
					if (hops < 2) {
						w28 = 18;
					} else {
						if (hops < 3) {
							w28 = -85;
						} else {
							w28 = -10;
						}
					}
				} else {
					if (hops < 2) {
						w28 = -20;
					} else {
						if (rel_time < 808) {
							w28 = 17;
						} else {
							w28 = -12;
						}
					}
				}
			} else {
				if (rel_time < 807) {
					w28 = 36;
				} else {
					w28 = 1;
				}
			}
		}
	} else {
		if (rel_time < 921) {
			if (hops < 5) {
				if (hops < 4) {
					w28 = 10;
				} else {
					w28 = 21;
				}
			} else {
				w28 = -12;
			}
		} else {
			if (rel_time < 1132) {
				if (prod != 0) {
					if (hops < 2) {
						w28 = -41;
					} else {
						if (hops < 3) {
							w28 = 75;
						} else {
							w28 = -16;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w28 = 14;
						} else {
							w28 = -135;
						}
					} else {
						if (hops < 5) {
							w28 = 1;
						} else {
							w28 = -27;
						}
					}
				}
			} else {
				if (rel_time < 2486) {
					if (cons != 5) {
						if (hops < 2) {
							w28 = -4;
						} else {
							w28 = 2;
						}
					} else {
						if (rel_time < 1900) {
							w28 = 2;
						} else {
							w28 = 16;
						}
					}
				} else {
					if (rel_time < 2975) {
						if (hops < 2) {
							w28 = -18;
						} else {
							w28 = 2;
						}
					} else {
						if (rel_time < 2990) {
							w28 = 14;
						} else {
							w28 = 0;
						}
					}
				}
			}
		}
	}
	int w29;
	if (rel_time < 11786) {
		if (rel_time < 10961) {
			if (rel_time < 10645) {
				if (rel_time < 10627) {
					if (rel_time < 8297) {
						if (rel_time < 8260) {
							w29 = 0;
						} else {
							w29 = 5;
						}
					} else {
						if (rel_time < 8885) {
							w29 = -2;
						} else {
							w29 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w29 = -3;
					} else {
						if (hops < 5) {
							w29 = -19;
						} else {
							w29 = -7;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (prod != 0) {
							w29 = 5;
						} else {
							w29 = -21;
						}
					} else {
						if (prod != 0) {
							w29 = 7;
						} else {
							w29 = 20;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 5) {
							w29 = -10;
						} else {
							w29 = 1;
						}
					} else {
						if (hops < 5) {
							w29 = -56;
						} else {
							w29 = -12;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 5) {
					if (rel_time < 11138) {
						if (rel_time < 11132) {
							w29 = -3;
						} else {
							w29 = -16;
						}
					} else {
						if (hops < 2) {
							w29 = 1;
						} else {
							w29 = -4;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 11138) {
							w29 = 19;
						} else {
							w29 = -5;
						}
					} else {
						if (rel_time < 11211) {
							w29 = 65;
						} else {
							w29 = 16;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w29 = 1;
					} else {
						if (hops < 3) {
							w29 = 18;
						} else {
							w29 = 2;
						}
					}
				} else {
					w29 = -23;
				}
			}
		}
	} else {
		if (hops < 3) {
			if (hops < 2) {
				if (prod != 2) {
					w29 = -6;
				} else {
					if (rel_time < 11857) {
						w29 = 18;
					} else {
						w29 = 12;
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 11792) {
						w29 = 19;
					} else {
						w29 = 1;
					}
				} else {
					if (rel_time < 11857) {
						w29 = -34;
					} else {
						w29 = -19;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 11792) {
					w29 = 34;
				} else {
					if (prod != 2) {
						w29 = -18;
					} else {
						if (rel_time < 11866) {
							w29 = 20;
						} else {
							w29 = 70;
						}
					}
				}
			} else {
				if (rel_time < 11857) {
					w29 = -8;
				} else {
					if (hops < 5) {
						w29 = 5;
					} else {
						w29 = -8;
					}
				}
			}
		}
	}
	int w30;
	if (rel_time < 317) {
		w30 = -2;
	} else {
		if (rel_time < 558) {
			if (hops < 3) {
				if (hops < 2) {
					if (size < 37) {
						w30 = 9;
					} else {
						w30 = -4;
					}
				} else {
					if (rel_time < 400) {
						w30 = 0;
					} else {
						w30 = 25;
					}
				}
			} else {
				if (rel_time < 512) {
					if (hops < 4) {
						w30 = 0;
					} else {
						w30 = 6;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w30 = -5;
						} else {
							w30 = -24;
						}
					} else {
						w30 = 9;
					}
				}
			}
		} else {
			if (rel_time < 920) {
				if (rel_time < 726) {
					if (rel_time < 725) {
						if (hops < 4) {
							w30 = -1;
						} else {
							w30 = 4;
						}
					} else {
						if (hops < 3) {
							w30 = 17;
						} else {
							w30 = -5;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w30 = -4;
						} else {
							w30 = -17;
						}
					} else {
						if (rel_time < 807) {
							w30 = 18;
						} else {
							w30 = 0;
						}
					}
				}
			} else {
				if (rel_time < 921) {
					if (hops < 5) {
						if (hops < 4) {
							w30 = 5;
						} else {
							w30 = 11;
						}
					} else {
						w30 = -6;
					}
				} else {
					if (rel_time < 1132) {
						if (prod != 0) {
							w30 = 5;
						} else {
							w30 = -18;
						}
					} else {
						if (rel_time < 2909) {
							w30 = 1;
						} else {
							w30 = 0;
						}
					}
				}
			}
		}
	}
	int w31;
	if (rel_time < 3496) {
		if (rel_time < 2909) {
			if (hops < 2) {
				if (rel_time < 2458) {
					if (rel_time < 2404) {
						if (prod != 2) {
							w31 = -2;
						} else {
							w31 = 9;
						}
					} else {
						if (rel_time < 2426) {
							w31 = 17;
						} else {
							w31 = 34;
						}
					}
				} else {
					if (rel_time < 2486) {
						w31 = -27;
					} else {
						if (rel_time < 2740) {
							w31 = -13;
						} else {
							w31 = -8;
						}
					}
				}
			} else {
				if (rel_time < 2458) {
					if (hops < 3) {
						if (prod != 3) {
							w31 = 1;
						} else {
							w31 = 12;
						}
					} else {
						if (rel_time < 2156) {
							w31 = -1;
						} else {
							w31 = -6;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 0) {
							w31 = 20;
						} else {
							w31 = 9;
						}
					} else {
						if (prod != 0) {
							w31 = 3;
						} else {
							w31 = -13;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (prod != 0) {
					if (prod != 3) {
						if (size < 37) {
							w31 = -22;
						} else {
							w31 = 4;
						}
					} else {
						w31 = 51;
					}
				} else {
					w31 = 54;
				}
			} else {
				if (hops < 3) {
					if (prod != 0) {
						if (prod != 3) {
							w31 = -13;
						} else {
							w31 = -50;
						}
					} else {
						if (rel_time < 3074) {
							w31 = -80;
						} else {
							w31 = -93;
						}
					}
				} else {
					if (rel_time < 2910) {
						if (hops < 4) {
							w31 = -54;
						} else {
							w31 = -2;
						}
					} else {
						if (hops < 4) {
							w31 = 9;
						} else {
							w31 = -2;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3498) {
			if (hops < 3) {
				w31 = 36;
			} else {
				if (hops < 5) {
					w31 = -13;
				} else {
					w31 = 24;
				}
			}
		} else {
			if (rel_time < 4149) {
				if (hops < 2) {
					if (size < 37) {
						if (rel_time < 3602) {
							w31 = 17;
						} else {
							w31 = 66;
						}
					} else {
						if (prod != 3) {
							w31 = -10;
						} else {
							w31 = -26;
						}
					}
				} else {
					if (rel_time < 3660) {
						if (rel_time < 3602) {
							w31 = 5;
						} else {
							w31 = -4;
						}
					} else {
						if (hops < 3) {
							w31 = 22;
						} else {
							w31 = 6;
						}
					}
				}
			} else {
				if (rel_time < 4165) {
					if (hops < 5) {
						if (hops < 2) {
							w31 = 9;
						} else {
							w31 = -27;
						}
					} else {
						w31 = 106;
					}
				} else {
					if (rel_time < 4247) {
						if (hops < 5) {
							w31 = 3;
						} else {
							w31 = -19;
						}
					} else {
						if (rel_time < 4500) {
							w31 = -9;
						} else {
							w31 = 0;
						}
					}
				}
			}
		}
	}
	int w32;
	if (rel_time < 9369) {
		if (rel_time < 9199) {
			if (hops < 2) {
				if (rel_time < 8945) {
					if (rel_time < 8260) {
						if (rel_time < 7673) {
							w32 = 0;
						} else {
							w32 = 8;
						}
					} else {
						if (prod != 0) {
							w32 = -1;
						} else {
							w32 = -30;
						}
					}
				} else {
					w32 = 28;
				}
			} else {
				if (rel_time < 8945) {
					if (rel_time < 7160) {
						if (rel_time < 6572) {
							w32 = 0;
						} else {
							w32 = -6;
						}
					} else {
						if (rel_time < 7189) {
							w32 = 36;
						} else {
							w32 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 8948) {
							w32 = -36;
						} else {
							w32 = -28;
						}
					} else {
						if (hops < 4) {
							w32 = -12;
						} else {
							w32 = 3;
						}
					}
				}
			}
		} else {
			if (size < 69) {
				if (hops < 3) {
					if (hops < 2) {
						w32 = -3;
					} else {
						if (rel_time < 9203) {
							w32 = -6;
						} else {
							w32 = -17;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 9203) {
							w32 = 17;
						} else {
							w32 = -5;
						}
					} else {
						if (hops < 5) {
							w32 = 23;
						} else {
							w32 = 14;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w32 = 13;
					} else {
						w32 = 59;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w32 = 21;
						} else {
							w32 = -15;
						}
					} else {
						w32 = 92;
					}
				}
			}
		}
	} else {
		if (rel_time < 9373) {
			if (hops < 2) {
				w32 = -3;
			} else {
				if (hops < 3) {
					w32 = -63;
				} else {
					if (hops < 4) {
						w32 = -15;
					} else {
						if (hops < 5) {
							w32 = 3;
						} else {
							w32 = -17;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (hops < 2) {
					if (rel_time < 10120) {
						if (prod != 0) {
							w32 = -2;
						} else {
							w32 = -29;
						}
					} else {
						if (rel_time < 10550) {
							w32 = 21;
						} else {
							w32 = -1;
						}
					}
				} else {
					if (rel_time < 10120) {
						if (prod != 0) {
							w32 = 2;
						} else {
							w32 = 29;
						}
					} else {
						if (rel_time < 10374) {
							w32 = -28;
						} else {
							w32 = 1;
						}
					}
				}
			} else {
				if (rel_time < 9791) {
					if (hops < 4) {
						if (hops < 2) {
							w32 = 0;
						} else {
							w32 = -6;
						}
					} else {
						w32 = -48;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 10374) {
							w32 = 0;
						} else {
							w32 = -6;
						}
					} else {
						if (rel_time < 10543) {
							w32 = 9;
						} else {
							w32 = -1;
						}
					}
				}
			}
		}
	}
	int w33;
	if (rel_time < 1837) {
		if (rel_time < 1735) {
			if (rel_time < 1574) {
				if (rel_time < 1333) {
					if (rel_time < 1283) {
						if (rel_time < 1229) {
							w33 = 0;
						} else {
							w33 = -3;
						}
					} else {
						if (size < 69) {
							w33 = 197;
						} else {
							w33 = 3;
						}
					}
				} else {
					if (hops < 2) {
						w33 = -9;
					} else {
						if (hops < 3) {
							w33 = 3;
						} else {
							w33 = -8;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1734) {
						if (hops < 2) {
							w33 = 3;
						} else {
							w33 = 13;
						}
					} else {
						if (hops < 2) {
							w33 = 39;
						} else {
							w33 = -19;
						}
					}
				} else {
					if (rel_time < 1734) {
						if (hops < 5) {
							w33 = -15;
						} else {
							w33 = -36;
						}
					} else {
						w33 = 20;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 1816) {
					if (rel_time < 1800) {
						w33 = -8;
					} else {
						w33 = -15;
					}
				} else {
					w33 = 0;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1816) {
						if (rel_time < 1801) {
							w33 = 14;
						} else {
							w33 = 7;
						}
					} else {
						w33 = -3;
					}
				} else {
					if (rel_time < 1800) {
						if (hops < 4) {
							w33 = -12;
						} else {
							w33 = -31;
						}
					} else {
						if (hops < 4) {
							w33 = -7;
						} else {
							w33 = 9;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1838) {
			if (hops < 2) {
				w33 = -7;
			} else {
				if (hops < 5) {
					if (hops < 4) {
						if (hops < 3) {
							w33 = 26;
						} else {
							w33 = -5;
						}
					} else {
						w33 = 48;
					}
				} else {
					w33 = -39;
				}
			}
		} else {
			if (rel_time < 1871) {
				if (hops < 3) {
					if (hops < 2) {
						w33 = -4;
					} else {
						w33 = 31;
					}
				} else {
					if (hops < 4) {
						w33 = -96;
					} else {
						if (hops < 5) {
							w33 = -21;
						} else {
							w33 = 31;
						}
					}
				}
			} else {
				if (rel_time < 2156) {
					if (hops < 2) {
						if (rel_time < 1872) {
							w33 = 38;
						} else {
							w33 = 7;
						}
					} else {
						if (prod != 0) {
							w33 = -18;
						} else {
							w33 = 12;
						}
					}
				} else {
					if (rel_time < 2322) {
						if (hops < 4) {
							w33 = -12;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 2388) {
							w33 = 5;
						} else {
							w33 = 0;
						}
					}
				}
			}
		}
	}
	int w34;
	if (rel_time < 7609) {
		if (rel_time < 7607) {
			if (rel_time < 6851) {
				if (rel_time < 6572) {
					if (rel_time < 6535) {
						if (prod != 3) {
							w34 = 0;
						} else {
							w34 = -1;
						}
					} else {
						if (rel_time < 6538) {
							w34 = 10;
						} else {
							w34 = 1;
						}
					}
				} else {
					if (hops < 2) {
						if (size < 69) {
							w34 = 21;
						} else {
							w34 = -6;
						}
					} else {
						if (prod != 0) {
							w34 = 7;
						} else {
							w34 = -37;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 7160) {
							w34 = 4;
						} else {
							w34 = -20;
						}
					} else {
						if (prod != 0) {
							w34 = 5;
						} else {
							w34 = 35;
						}
					}
				} else {
					if (rel_time < 7101) {
						if (rel_time < 7021) {
							w34 = -1;
						} else {
							w34 = 13;
						}
					} else {
						if (prod != 0) {
							w34 = -21;
						} else {
							w34 = 11;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w34 = -12;
				} else {
					w34 = 107;
				}
			} else {
				if (hops < 4) {
					w34 = -45;
				} else {
					if (hops < 5) {
						w34 = -6;
					} else {
						w34 = 40;
					}
				}
			}
		}
	} else {
		if (rel_time < 7673) {
			if (hops < 3) {
				if (hops < 2) {
					if (prod != 3) {
						w34 = -6;
					} else {
						w34 = 34;
					}
				} else {
					if (prod != 3) {
						w34 = -77;
					} else {
						w34 = -20;
					}
				}
			} else {
				if (hops < 5) {
					if (prod != 3) {
						if (hops < 4) {
							w34 = 57;
						} else {
							w34 = 43;
						}
					} else {
						w34 = -93;
					}
				} else {
					w34 = -62;
				}
			}
		} else {
			if (rel_time < 7676) {
				if (hops < 5) {
					if (hops < 2) {
						w34 = 10;
					} else {
						if (hops < 3) {
							w34 = -6;
						} else {
							w34 = 5;
						}
					}
				} else {
					w34 = 98;
				}
			} else {
				if (rel_time < 8026) {
					if (hops < 2) {
						if (prod != 0) {
							w34 = 1;
						} else {
							w34 = 23;
						}
					} else {
						if (prod != 0) {
							w34 = -3;
						} else {
							w34 = -28;
						}
					}
				} else {
					if (rel_time < 8196) {
						if (hops < 3) {
							w34 = 21;
						} else {
							w34 = -9;
						}
					} else {
						if (rel_time < 8260) {
							w34 = -13;
						} else {
							w34 = 0;
						}
					}
				}
			}
		}
	}
	int w35;
	if (hops < 3) {
		if (prod != 3) {
			if (rel_time < 9960) {
				if (rel_time < 9457) {
					if (rel_time < 8785) {
						if (rel_time < 8781) {
							w35 = 0;
						} else {
							w35 = 17;
						}
					} else {
						if (hops < 2) {
							w35 = 2;
						} else {
							w35 = -10;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 0) {
							w35 = 2;
						} else {
							w35 = -16;
						}
					} else {
						if (prod != 0) {
							w35 = 9;
						} else {
							w35 = 47;
						}
					}
				}
			} else {
				if (rel_time < 10022) {
					if (hops < 2) {
						w35 = -13;
					} else {
						w35 = -50;
					}
				} else {
					if (rel_time < 10543) {
						if (hops < 2) {
							w35 = -2;
						} else {
							w35 = -10;
						}
					} else {
						if (rel_time < 10550) {
							w35 = 9;
						} else {
							w35 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 640) {
				if (hops < 2) {
					w35 = 1;
				} else {
					if (rel_time < 627) {
						w35 = -10;
					} else {
						w35 = -19;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 2990) {
						if (rel_time < 2403) {
							w35 = -3;
						} else {
							w35 = 26;
						}
					} else {
						if (rel_time < 3578) {
							w35 = -13;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (rel_time < 2403) {
						if (rel_time < 2388) {
							w35 = 9;
						} else {
							w35 = 20;
						}
					} else {
						if (rel_time < 2990) {
							w35 = -24;
						} else {
							w35 = 4;
						}
					}
				}
			}
		}
	} else {
		if (prod != 3) {
			if (rel_time < 9960) {
				if (rel_time < 9457) {
					if (rel_time < 8785) {
						if (prod != 0) {
							w35 = 0;
						} else {
							w35 = 4;
						}
					} else {
						if (hops < 5) {
							w35 = 7;
						} else {
							w35 = -8;
						}
					}
				} else {
					if (rel_time < 9956) {
						if (size < 37) {
							w35 = -26;
						} else {
							w35 = -7;
						}
					} else {
						if (hops < 5) {
							w35 = -47;
						} else {
							w35 = 56;
						}
					}
				}
			} else {
				if (rel_time < 10092) {
					if (size < 133) {
						if (hops < 4) {
							w35 = 46;
						} else {
							w35 = 18;
						}
					} else {
						if (rel_time < 10046) {
							w35 = 4;
						} else {
							w35 = -5;
						}
					}
				} else {
					if (size < 37) {
						w35 = -10;
					} else {
						if (hops < 4) {
							w35 = -1;
						} else {
							w35 = 4;
						}
					}
				}
			}
		} else {
			if (rel_time < 10627) {
				if (rel_time < 7673) {
					if (rel_time < 6513) {
						if (rel_time < 6500) {
							w35 = -3;
						} else {
							w35 = 12;
						}
					} else {
						if (hops < 4) {
							w35 = -32;
						} else {
							w35 = 4;
						}
					}
				} else {
					if (rel_time < 8275) {
						if (hops < 4) {
							w35 = 22;
						} else {
							w35 = -3;
						}
					} else {
						if (rel_time < 8851) {
							w35 = -17;
						} else {
							w35 = 1;
						}
					}
				}
			} else {
				if (rel_time < 11211) {
					if (hops < 5) {
						if (hops < 4) {
							w35 = -37;
						} else {
							w35 = -23;
						}
					} else {
						if (rel_time < 11199) {
							w35 = 18;
						} else {
							w35 = 51;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11792) {
							w35 = 18;
						} else {
							w35 = -9;
						}
					} else {
						if (rel_time < 11792) {
							w35 = -2;
						} else {
							w35 = -18;
						}
					}
				}
			}
		}
	}
	int w36;
	if (cons != 5) {
		if (rel_time < 7609) {
			if (rel_time < 6535) {
				if (rel_time < 5912) {
					if (rel_time < 5849) {
						if (rel_time < 5846) {
							w36 = 0;
						} else {
							w36 = -14;
						}
					} else {
						if (hops < 2) {
							w36 = -1;
						} else {
							w36 = 24;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 6263) {
							w36 = -7;
						} else {
							w36 = -2;
						}
					} else {
						if (hops < 2) {
							w36 = 7;
						} else {
							w36 = -2;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 7085) {
							w36 = 5;
						} else {
							w36 = -2;
						}
					} else {
						if (rel_time < 7607) {
							w36 = 10;
						} else {
							w36 = 54;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 7122) {
							w36 = 1;
						} else {
							w36 = -8;
						}
					} else {
						if (hops < 5) {
							w36 = -13;
						} else {
							w36 = 9;
						}
					}
				}
			}
		} else {
			if (rel_time < 7673) {
				if (hops < 3) {
					if (hops < 2) {
						w36 = -3;
					} else {
						w36 = -38;
					}
				} else {
					if (hops < 5) {
						if (prod != 3) {
							w36 = 24;
						} else {
							w36 = -53;
						}
					} else {
						w36 = -32;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 8194) {
						if (size < 133) {
							w36 = -8;
						} else {
							w36 = 4;
						}
					} else {
						if (rel_time < 8196) {
							w36 = 12;
						} else {
							w36 = 0;
						}
					}
				} else {
					if (rel_time < 8194) {
						if (size < 133) {
							w36 = 23;
						} else {
							w36 = -6;
						}
					} else {
						if (rel_time < 8614) {
							w36 = -9;
						} else {
							w36 = 1;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 921) {
				if (hops < 2) {
					if (size < 69) {
						w36 = 1;
					} else {
						w36 = -15;
					}
				} else {
					if (size < 69) {
						if (rel_time < 558) {
							w36 = 12;
						} else {
							w36 = 4;
						}
					} else {
						w36 = 31;
					}
				}
			} else {
				if (rel_time < 1132) {
					if (hops < 2) {
						w36 = 17;
					} else {
						w36 = -59;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3326) {
							w36 = 3;
						} else {
							w36 = 0;
						}
					} else {
						if (rel_time < 8337) {
							w36 = -5;
						} else {
							w36 = 2;
						}
					}
				}
			}
		} else {
			if (rel_time < 725) {
				if (hops < 4) {
					if (rel_time < 558) {
						w36 = -4;
					} else {
						w36 = -35;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 558) {
							w36 = -14;
						} else {
							w36 = 7;
						}
					} else {
						if (rel_time < 558) {
							w36 = 3;
						} else {
							w36 = -35;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 8360) {
						if (rel_time < 3660) {
							w36 = 0;
						} else {
							w36 = 8;
						}
					} else {
						if (rel_time < 11718) {
							w36 = -1;
						} else {
							w36 = 11;
						}
					}
				} else {
					if (rel_time < 1334) {
						if (hops < 5) {
							w36 = 10;
						} else {
							w36 = 2;
						}
					} else {
						if (rel_time < 1900) {
							w36 = -13;
						} else {
							w36 = -1;
						}
					}
				}
			}
		}
	}
	int w37;
	if (rel_time < 11266) {
		if (rel_time < 11138) {
			if (rel_time < 11132) {
				if (rel_time < 10645) {
					if (rel_time < 10627) {
						if (rel_time < 10124) {
							w37 = 0;
						} else {
							w37 = -1;
						}
					} else {
						if (hops < 4) {
							w37 = -2;
						} else {
							w37 = -11;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 4) {
							w37 = 0;
						} else {
							w37 = -67;
						}
					} else {
						if (prod != 4) {
							w37 = 1;
						} else {
							w37 = 29;
						}
					}
				}
			} else {
				if (hops < 2) {
					w37 = 15;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w37 = -21;
						} else {
							w37 = -70;
						}
					} else {
						w37 = 17;
					}
				}
			}
		} else {
			if (prod != 4) {
				if (hops < 2) {
					if (rel_time < 11211) {
						w37 = 12;
					} else {
						w37 = 0;
					}
				} else {
					if (rel_time < 11211) {
						if (hops < 5) {
							w37 = -9;
						} else {
							w37 = 16;
						}
					} else {
						if (rel_time < 11214) {
							w37 = 98;
						} else {
							w37 = 2;
						}
					}
				}
			} else {
				if (hops < 2) {
					w37 = -36;
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w37 = 36;
						} else {
							w37 = 76;
						}
					} else {
						w37 = -139;
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 11792) {
				if (prod != 3) {
					if (rel_time < 11271) {
						w37 = -5;
					} else {
						if (rel_time < 11726) {
							w37 = 2;
						} else {
							w37 = 11;
						}
					}
				} else {
					w37 = -6;
				}
			} else {
				if (prod != 2) {
					w37 = 0;
				} else {
					w37 = 8;
				}
			}
		} else {
			if (prod != 2) {
				if (prod != 4) {
					if (hops < 5) {
						if (rel_time < 11295) {
							w37 = 14;
						} else {
							w37 = 3;
						}
					} else {
						w37 = -10;
					}
				} else {
					if (rel_time < 11726) {
						if (hops < 4) {
							w37 = 0;
						} else {
							w37 = -8;
						}
					} else {
						if (hops < 5) {
							w37 = -20;
						} else {
							w37 = 4;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 11271) {
						w37 = -2;
					} else {
						if (rel_time < 11295) {
							w37 = -29;
						} else {
							w37 = -13;
						}
					}
				} else {
					if (rel_time < 11271) {
						if (hops < 4) {
							w37 = -10;
						} else {
							w37 = 0;
						}
					} else {
						if (hops < 4) {
							w37 = 5;
						} else {
							w37 = -1;
						}
					}
				}
			}
		}
	}
	int w38;
	if (rel_time < 3496) {
		if (rel_time < 3046) {
			if (hops < 2) {
				if (rel_time < 807) {
					if (rel_time < 725) {
						if (rel_time < 699) {
							w38 = 2;
						} else {
							w38 = -7;
						}
					} else {
						w38 = 12;
					}
				} else {
					if (size < 69) {
						if (rel_time < 3014) {
							w38 = -4;
						} else {
							w38 = -38;
						}
					} else {
						if (rel_time < 2975) {
							w38 = -1;
						} else {
							w38 = 9;
						}
					}
				}
			} else {
				if (rel_time < 807) {
					if (rel_time < 726) {
						if (rel_time < 640) {
							w38 = -1;
						} else {
							w38 = 2;
						}
					} else {
						if (hops < 3) {
							w38 = -41;
						} else {
							w38 = 1;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 2458) {
							w38 = 1;
						} else {
							w38 = 3;
						}
					} else {
						if (rel_time < 2975) {
							w38 = 0;
						} else {
							w38 = -27;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (prod != 0) {
					if (rel_time < 3048) {
						w38 = -4;
					} else {
						if (rel_time < 3074) {
							w38 = 28;
						} else {
							w38 = 8;
						}
					}
				} else {
					w38 = 26;
				}
			} else {
				if (hops < 4) {
					if (prod != 0) {
						if (rel_time < 3048) {
							w38 = -10;
						} else {
							w38 = -17;
						}
					} else {
						if (hops < 3) {
							w38 = -42;
						} else {
							w38 = -19;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 3326) {
							w38 = -2;
						} else {
							w38 = 13;
						}
					} else {
						if (prod != 0) {
							w38 = 4;
						} else {
							w38 = 90;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3562) {
			if (hops < 4) {
				if (hops < 3) {
					if (rel_time < 3498) {
						w38 = 18;
					} else {
						if (hops < 2) {
							w38 = 1;
						} else {
							w38 = -38;
						}
					}
				} else {
					if (rel_time < 3498) {
						w38 = -4;
					} else {
						w38 = 98;
					}
				}
			} else {
				if (rel_time < 3498) {
					if (hops < 5) {
						w38 = -11;
					} else {
						w38 = 12;
					}
				} else {
					if (hops < 5) {
						w38 = 21;
					} else {
						w38 = -33;
					}
				}
			}
		} else {
			if (rel_time < 4085) {
				if (hops < 2) {
					if (size < 37) {
						if (rel_time < 3602) {
							w38 = 8;
						} else {
							w38 = 33;
						}
					} else {
						if (prod != 1) {
							w38 = -8;
						} else {
							w38 = 3;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 4083) {
							w38 = 10;
						} else {
							w38 = 39;
						}
					} else {
						if (rel_time < 3564) {
							w38 = -17;
						} else {
							w38 = -1;
						}
					}
				}
			} else {
				if (rel_time < 4187) {
					if (hops < 4) {
						if (prod != 3) {
							w38 = -1;
						} else {
							w38 = -9;
						}
					} else {
						if (size < 37) {
							w38 = -23;
						} else {
							w38 = 6;
						}
					}
				} else {
					if (rel_time < 4247) {
						if (hops < 3) {
							w38 = 1;
						} else {
							w38 = 8;
						}
					} else {
						if (rel_time < 4500) {
							w38 = -5;
						} else {
							w38 = 0;
						}
					}
				}
			}
		}
	}
	int w39;
	w39 = 0;
	int w40;
	w40 = 0;
	int w41;
	w41 = 0;
	int w42;
	w42 = 0;
	int w43;
	w43 = 0;
	return (171004 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32 + w33 + w34 + w35 + w36 + w37 + w38 + w39 + w40 + w41 + w42 + w43) >> 8;
}
