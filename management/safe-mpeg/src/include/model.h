#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int model(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 133) {
		if (rel_time < 1090) {
			w0 = 56312;
		} else {
			if (prod != 0) {
				w0 = 45002;
			} else {
				w0 = 48152;
			}
		}
	} else {
		w0 = 59582;
	}
	int w1;
	if (size < 133) {
		if (rel_time < 1090) {
			w1 = 39426;
		} else {
			if (prod != 0) {
				w1 = 31506;
			} else {
				w1 = 33715;
			}
		}
	} else {
		w1 = 41713;
	}
	int w2;
	if (size < 133) {
		if (rel_time < 1090) {
			w2 = 27604;
		} else {
			if (prod != 0) {
				if (hops < 3) {
					w2 = 21738;
				} else {
					w2 = 22760;
				}
			} else {
				w2 = 23606;
			}
		}
	} else {
		w2 = 29203;
	}
	int w3;
	if (size < 133) {
		if (rel_time < 1090) {
			if (hops < 3) {
				w3 = 18994;
			} else {
				w3 = 20046;
			}
		} else {
			if (prod != 0) {
				if (hops < 2) {
					w3 = 14997;
				} else {
					w3 = 15755;
				}
			} else {
				if (hops < 3) {
					w3 = 16220;
				} else {
					w3 = 17181;
				}
			}
		}
	} else {
		if (hops < 3) {
			w3 = 20197;
		} else {
			w3 = 21184;
		}
	}
	int w4;
	if (size < 133) {
		if (rel_time < 1090) {
			if (hops < 2) {
				w4 = 13055;
			} else {
				w4 = 13848;
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					w4 = 10631;
				} else {
					w4 = 11216;
				}
			} else {
				if (rel_time < 1648) {
					w4 = 10083;
				} else {
					if (rel_time < 11142) {
						if (hops < 2) {
							w4 = 11286;
						} else {
							w4 = 11997;
						}
					} else {
						w4 = 10118;
					}
				}
			}
		}
	} else {
		if (rel_time < 531) {
			w4 = 13566;
		} else {
			if (hops < 2) {
				w4 = 14106;
			} else {
				w4 = 14833;
			}
		}
	}
	int w5;
	if (size < 133) {
		if (rel_time < 1090) {
			if (rel_time < 670) {
				if (hops < 3) {
					w5 = 9018;
				} else {
					w5 = 9652;
				}
			} else {
				w5 = 9983;
			}
		} else {
			if (prod != 0) {
				if (hops < 2) {
					w5 = 7314;
				} else {
					if (hops < 4) {
						w5 = 7654;
					} else {
						w5 = 8197;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1648) {
						w5 = 6826;
					} else {
						if (rel_time < 2207) {
							w5 = 9266;
						} else {
							w5 = 7897;
						}
					}
				} else {
					w5 = 8504;
				}
			}
		}
	} else {
		if (rel_time < 598) {
			if (hops < 2) {
				w5 = 9361;
			} else {
				w5 = 9948;
			}
		} else {
			w5 = 10296;
		}
	}
	int w6;
	if (size < 133) {
		if (rel_time < 1090) {
			if (rel_time < 670) {
				if (hops < 2) {
					w6 = 6193;
				} else {
					w6 = 6637;
				}
			} else {
				w6 = 6992;
			}
		} else {
			if (prod != 0) {
				if (hops < 2) {
					w6 = 5121;
				} else {
					if (hops < 4) {
						w6 = 5359;
					} else {
						w6 = 5745;
					}
				}
			} else {
				if (rel_time < 11142) {
					if (rel_time < 10584) {
						if (rel_time < 10025) {
							w6 = 5736;
						} else {
							w6 = 4239;
						}
					} else {
						w6 = 7066;
					}
				} else {
					w6 = 4717;
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 531) {
				w6 = 6453;
			} else {
				w6 = 7007;
			}
		} else {
			w6 = 7447;
		}
	}
	int w7;
	if (size < 133) {
		if (rel_time < 1090) {
			if (hops < 4) {
				if (rel_time < 670) {
					w7 = 4452;
				} else {
					if (hops < 2) {
						w7 = 4586;
					} else {
						w7 = 4969;
					}
				}
			} else {
				w7 = 5290;
			}
		} else {
			if (hops < 2) {
				if (rel_time < 11275) {
					w7 = 3639;
				} else {
					w7 = 2869;
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						w7 = 3752;
					} else {
						w7 = 4027;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1648) {
							w7 = 3283;
						} else {
							w7 = 4083;
						}
					} else {
						w7 = 4622;
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 531) {
				w7 = 4362;
			} else {
				w7 = 4780;
			}
		} else {
			if (rel_time < 598) {
				w7 = 4861;
			} else {
				if (hops < 4) {
					w7 = 5190;
				} else {
					w7 = 5760;
				}
			}
		}
	}
	int w8;
	if (size < 133) {
		if (rel_time < 1090) {
			if (hops < 3) {
				if (rel_time < 670) {
					w8 = 3072;
				} else {
					w8 = 3302;
				}
			} else {
				if (rel_time < 670) {
					w8 = 3362;
				} else {
					w8 = 3738;
				}
			}
		} else {
			if (hops < 4) {
				if (prod != 0) {
					if (hops < 2) {
						w8 = 2495;
					} else {
						w8 = 2627;
					}
				} else {
					if (rel_time < 1648) {
						if (hops < 2) {
							w8 = 1806;
						} else {
							w8 = 2318;
						}
					} else {
						if (rel_time < 2207) {
							w8 = 3837;
						} else {
							w8 = 2721;
						}
					}
				}
			} else {
				if (prod != 0) {
					w8 = 2822;
				} else {
					if (rel_time < 1223) {
						w8 = 2168;
					} else {
						w8 = 3289;
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 531) {
				w8 = 3155;
			} else {
				if (hops < 2) {
					w8 = 3347;
				} else {
					w8 = 3580;
				}
			}
		} else {
			w8 = 3984;
		}
	}
	int w9;
	if (size < 133) {
		if (rel_time < 1090) {
			if (hops < 4) {
				if (hops < 2) {
					w9 = 2132;
				} else {
					if (rel_time < 670) {
						w9 = 2253;
					} else {
						w9 = 2442;
					}
				}
			} else {
				w9 = 2669;
			}
		} else {
			if (hops < 2) {
				if (rel_time < 11275) {
					if (rel_time < 10717) {
						if (rel_time < 10158) {
							w9 = 1778;
						} else {
							w9 = 1457;
						}
					} else {
						if (rel_time < 11142) {
							w9 = 2806;
						} else {
							w9 = 1707;
						}
					}
				} else {
					w9 = 1240;
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						w9 = 1840;
					} else {
						w9 = 1978;
					}
				} else {
					if (rel_time < 11142) {
						if (rel_time < 10584) {
							w9 = 2026;
						} else {
							w9 = 3015;
						}
					} else {
						w9 = 1477;
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 598) {
				w9 = 2252;
			} else {
				if (rel_time < 10050) {
					if (rel_time < 1110) {
						w9 = 2792;
					} else {
						if (rel_time < 1712) {
							w9 = 2041;
						} else {
							w9 = 2459;
						}
					}
				} else {
					w9 = 2039;
				}
			}
		} else {
			if (rel_time < 531) {
				w9 = 2308;
			} else {
				if (hops < 4) {
					w9 = 2605;
				} else {
					w9 = 2878;
				}
			}
		}
	}
	int w10;
	if (size < 133) {
		if (rel_time < 1090) {
			if (hops < 4) {
				if (rel_time < 670) {
					if (hops < 2) {
						w10 = 1446;
					} else {
						w10 = 1578;
					}
				} else {
					w10 = 1663;
				}
			} else {
				if (rel_time < 670) {
					w10 = 1746;
				} else {
					w10 = 2097;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 2766) {
					if (rel_time < 2339) {
						if (rel_time < 1781) {
							w10 = 1178;
						} else {
							w10 = 1487;
						}
					} else {
						if (rel_time < 2765) {
							w10 = -123;
						} else {
							w10 = 1148;
						}
					}
				} else {
					if (rel_time < 3324) {
						if (prod != 0) {
							w10 = 1245;
						} else {
							w10 = 2726;
						}
					} else {
						if (rel_time < 3882) {
							w10 = 774;
						} else {
							w10 = 1294;
						}
					}
				}
			} else {
				if (prod != 0) {
					w10 = 1340;
				} else {
					if (rel_time < 1223) {
						w10 = 978;
					} else {
						if (rel_time < 2207) {
							w10 = 2602;
						} else {
							w10 = 1467;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 531) {
				w10 = 1441;
			} else {
				if (rel_time < 10050) {
					if (rel_time < 9489) {
						if (rel_time < 8930) {
							w10 = 1642;
						} else {
							w10 = 1209;
						}
					} else {
						w10 = 1965;
					}
				} else {
					w10 = 1370;
				}
			}
		} else {
			if (rel_time < 598) {
				if (hops < 4) {
					w10 = 1636;
				} else {
					w10 = 1918;
				}
			} else {
				if (rel_time < 10090) {
					if (rel_time < 9531) {
						if (rel_time < 8973) {
							w10 = 1862;
						} else {
							w10 = 1403;
						}
					} else {
						w10 = 2191;
					}
				} else {
					w10 = 1491;
				}
			}
		}
	}
	int w11;
	if (size < 133) {
		if (rel_time < 1090) {
			if (hops < 2) {
				if (prod != 1) {
					w11 = 1067;
				} else {
					w11 = 977;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 670) {
						w11 = 1106;
					} else {
						w11 = 1213;
					}
				} else {
					if (rel_time < 670) {
						w11 = 1226;
					} else {
						w11 = 1477;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 11275) {
					if (rel_time < 9536) {
						if (rel_time < 9041) {
							w11 = 910;
						} else {
							w11 = 386;
						}
					} else {
						if (rel_time < 10025) {
							w11 = 2039;
						} else {
							w11 = 872;
						}
					}
				} else {
					w11 = 563;
				}
			} else {
				if (prod != 0) {
					w11 = 985;
				} else {
					if (rel_time < 2765) {
						if (rel_time < 2207) {
							w11 = 1488;
						} else {
							w11 = -164;
						}
					} else {
						if (rel_time < 3324) {
							w11 = 2370;
						} else {
							w11 = 1174;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 531) {
				if (hops < 2) {
					w11 = 1010;
				} else {
					w11 = 1111;
				}
			} else {
				if (hops < 2) {
					w11 = 1144;
				} else {
					if (rel_time < 598) {
						w11 = 1177;
					} else {
						if (rel_time < 1154) {
							w11 = 1571;
						} else {
							w11 = 1246;
						}
					}
				}
			}
		} else {
			if (rel_time < 531) {
				w11 = 1228;
			} else {
				w11 = 1465;
			}
		}
	}
	int w12;
	if (size < 133) {
		if (rel_time < 1090) {
			if (hops < 3) {
				if (rel_time < 670) {
					if (hops < 2) {
						w12 = 706;
					} else {
						w12 = 768;
					}
				} else {
					w12 = 796;
				}
			} else {
				if (rel_time < 670) {
					w12 = 809;
				} else {
					if (hops < 4) {
						w12 = 893;
					} else {
						w12 = 1040;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 2765) {
					if (rel_time < 2339) {
						if (rel_time < 1648) {
							w12 = 453;
						} else {
							w12 = 671;
						}
					} else {
						w12 = -382;
					}
				} else {
					if (rel_time < 3324) {
						if (prod != 0) {
							w12 = 583;
						} else {
							w12 = 1590;
						}
					} else {
						if (rel_time < 3882) {
							w12 = 269;
						} else {
							w12 = 611;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 3) {
						w12 = 622;
					} else {
						w12 = 665;
					}
				} else {
					if (rel_time < 3882) {
						if (rel_time < 3324) {
							w12 = 852;
						} else {
							w12 = -596;
						}
					} else {
						if (rel_time < 4018) {
							w12 = 2131;
						} else {
							w12 = 690;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 598) {
				if (hops < 2) {
					if (rel_time < 531) {
						w12 = 708;
					} else {
						w12 = 771;
					}
				} else {
					w12 = 803;
				}
			} else {
				if (rel_time < 1110) {
					w12 = 1056;
				} else {
					if (rel_time < 1712) {
						w12 = 570;
					} else {
						if (rel_time < 2271) {
							w12 = 1180;
						} else {
							w12 = 810;
						}
					}
				}
			}
		} else {
			if (rel_time < 531) {
				if (hops < 4) {
					w12 = 723;
				} else {
					w12 = 867;
				}
			} else {
				if (rel_time < 10090) {
					if (hops < 4) {
						if (rel_time < 8414) {
							w12 = 912;
						} else {
							w12 = 1072;
						}
					} else {
						w12 = 1042;
					}
				} else {
					w12 = 654;
				}
			}
		}
	}
	int w13;
	if (size < 133) {
		if (rel_time < 2207) {
			if (rel_time < 1781) {
				if (rel_time < 1222) {
					if (hops < 4) {
						if (prod != 0) {
							w13 = 511;
						} else {
							w13 = 575;
						}
					} else {
						if (prod != 0) {
							w13 = 603;
						} else {
							w13 = 732;
						}
					}
				} else {
					if (rel_time < 1648) {
						if (hops < 2) {
							w13 = 21;
						} else {
							w13 = 195;
						}
					} else {
						w13 = 421;
					}
				}
			} else {
				w13 = 1159;
			}
		} else {
			if (rel_time < 2765) {
				if (rel_time < 2339) {
					if (hops < 3) {
						if (rel_time < 2226) {
							w13 = 271;
						} else {
							w13 = 335;
						}
					} else {
						w13 = 457;
					}
				} else {
					if (hops < 2) {
						w13 = -271;
					} else {
						if (hops < 4) {
							w13 = -714;
						} else {
							w13 = -350;
						}
					}
				}
			} else {
				if (rel_time < 3324) {
					if (prod != 0) {
						w13 = 431;
					} else {
						if (hops < 2) {
							w13 = 1127;
						} else {
							w13 = 1615;
						}
					}
				} else {
					if (rel_time < 3882) {
						if (rel_time < 3456) {
							w13 = 546;
						} else {
							w13 = -533;
						}
					} else {
						if (rel_time < 4018) {
							w13 = 829;
						} else {
							w13 = 436;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 8414) {
				if (rel_time < 7815) {
					if (rel_time < 7297) {
						if (rel_time < 6699) {
							w13 = 565;
						} else {
							w13 = 173;
						}
					} else {
						w13 = 951;
					}
				} else {
					w13 = 179;
				}
			} else {
				if (rel_time < 8933) {
					w13 = 956;
				} else {
					if (rel_time < 9531) {
						w13 = 305;
					} else {
						if (rel_time < 10050) {
							w13 = 861;
						} else {
							w13 = 423;
						}
					}
				}
			}
		} else {
			if (rel_time < 531) {
				if (hops < 4) {
					w13 = 508;
				} else {
					w13 = 613;
				}
			} else {
				if (rel_time < 10090) {
					if (rel_time < 9531) {
						if (rel_time < 8973) {
							w13 = 679;
						} else {
							w13 = 368;
						}
					} else {
						w13 = 890;
					}
				} else {
					w13 = 467;
				}
			}
		}
	}
	int w14;
	if (size < 133) {
		if (rel_time < 2207) {
			if (rel_time < 1781) {
				if (rel_time < 1090) {
					if (hops < 2) {
						if (prod != 1) {
							w14 = 362;
						} else {
							w14 = 321;
						}
					} else {
						if (hops < 4) {
							w14 = 401;
						} else {
							w14 = 467;
						}
					}
				} else {
					if (prod != 0) {
						w14 = 296;
					} else {
						if (hops < 2) {
							w14 = 15;
						} else {
							w14 = 138;
						}
					}
				}
			} else {
				if (hops < 4) {
					w14 = 769;
				} else {
					w14 = 1111;
				}
			}
		} else {
			if (rel_time < 2765) {
				if (rel_time < 2339) {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 191;
						} else {
							w14 = 247;
						}
					} else {
						w14 = 322;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w14 = -192;
						} else {
							w14 = -351;
						}
					} else {
						if (hops < 4) {
							w14 = -701;
						} else {
							w14 = -255;
						}
					}
				}
			} else {
				if (rel_time < 3324) {
					if (prod != 0) {
						w14 = 302;
					} else {
						if (hops < 3) {
							w14 = 884;
						} else {
							w14 = 1282;
						}
					}
				} else {
					if (rel_time < 4999) {
						if (rel_time < 4573) {
							w14 = 336;
						} else {
							w14 = -1038;
						}
					} else {
						if (rel_time < 5558) {
							w14 = 794;
						} else {
							w14 = 303;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2829) {
			if (rel_time < 2271) {
				if (rel_time < 1712) {
					if (rel_time < 1154) {
						if (rel_time < 598) {
							w14 = 379;
						} else {
							w14 = 626;
						}
					} else {
						if (hops < 3) {
							w14 = 235;
						} else {
							w14 = 85;
						}
					}
				} else {
					w14 = 711;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w14 = 9;
					} else {
						w14 = 30;
					}
				} else {
					w14 = 98;
				}
			}
		} else {
			if (rel_time < 3388) {
				w14 = 806;
			} else {
				if (rel_time < 3946) {
					if (rel_time < 3904) {
						if (rel_time < 3903) {
							w14 = 1;
						} else {
							w14 = 30;
						}
					} else {
						if (hops < 4) {
							w14 = 73;
						} else {
							w14 = 134;
						}
					}
				} else {
					if (rel_time < 4505) {
						w14 = 803;
					} else {
						if (rel_time < 5063) {
							w14 = 33;
						} else {
							w14 = 453;
						}
					}
				}
			}
		}
	}
	int w15;
	if (hops < 2) {
		if (rel_time < 11275) {
			if (rel_time < 10717) {
				if (rel_time < 10158) {
					if (rel_time < 9600) {
						if (rel_time < 9041) {
							w15 = 225;
						} else {
							w15 = -116;
						}
					} else {
						if (rel_time < 10025) {
							w15 = 1309;
						} else {
							w15 = 251;
						}
					}
				} else {
					if (rel_time < 10584) {
						w15 = -637;
					} else {
						if (size < 133) {
							w15 = 262;
						} else {
							w15 = 143;
						}
					}
				}
			} else {
				if (rel_time < 11142) {
					w15 = 963;
				} else {
					if (rel_time < 11148) {
						if (rel_time < 11145) {
							w15 = 177;
						} else {
							w15 = 101;
						}
					} else {
						w15 = 175;
					}
				}
			}
		} else {
			if (rel_time < 11278) {
				w15 = -37;
			} else {
				w15 = -66;
			}
		}
	} else {
		if (prod != 1) {
			if (rel_time < 8414) {
				if (rel_time < 7856) {
					if (rel_time < 7297) {
						if (rel_time < 6739) {
							w15 = 298;
						} else {
							w15 = -323;
						}
					} else {
						if (rel_time < 7792) {
							w15 = 1704;
						} else {
							w15 = 437;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 8370) {
							w15 = 226;
						} else {
							w15 = -8;
						}
					} else {
						w15 = -1083;
					}
				}
			} else {
				if (rel_time < 8909) {
					if (prod != 0) {
						w15 = 64;
					} else {
						w15 = 1700;
					}
				} else {
					if (rel_time < 9467) {
						if (rel_time < 8973) {
							w15 = 432;
						} else {
							w15 = -953;
						}
					} else {
						if (rel_time < 10025) {
							w15 = 656;
						} else {
							w15 = 226;
						}
					}
				}
			}
		} else {
			if (rel_time < 670) {
				if (hops < 4) {
					if (rel_time < 599) {
						w15 = 234;
					} else {
						w15 = 267;
					}
				} else {
					w15 = 311;
				}
			} else {
				if (rel_time < 5690) {
					if (rel_time < 3456) {
						w15 = 224;
					} else {
						if (rel_time < 5132) {
							w15 = 125;
						} else {
							w15 = 195;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 9536) {
							w15 = 211;
						} else {
							w15 = 173;
						}
					} else {
						w15 = 262;
					}
				}
			}
		}
	}
	int w16;
	if (size < 133) {
		if (prod != 0) {
			if (rel_time < 670) {
				if (rel_time < 551) {
					if (hops < 2) {
						w16 = 182;
					} else {
						w16 = 198;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 599) {
							w16 = 160;
						} else {
							w16 = 176;
						}
					} else {
						w16 = 219;
					}
				}
			} else {
				if (rel_time < 9041) {
					if (rel_time < 3456) {
						if (rel_time < 2898) {
							w16 = 128;
						} else {
							w16 = 210;
						}
					} else {
						if (rel_time < 5558) {
							w16 = 33;
						} else {
							w16 = 122;
						}
					}
				} else {
					if (rel_time < 9536) {
						if (hops < 2) {
							w16 = 352;
						} else {
							w16 = 223;
						}
					} else {
						if (rel_time < 9600) {
							w16 = -166;
						} else {
							w16 = 147;
						}
					}
				}
			}
		} else {
			if (rel_time < 6116) {
				if (rel_time < 5558) {
					if (rel_time < 4999) {
						if (rel_time < 4442) {
							w16 = 228;
						} else {
							w16 = -810;
						}
					} else {
						w16 = 1474;
					}
				} else {
					w16 = -1209;
				}
			} else {
				if (rel_time < 6675) {
					w16 = 1609;
				} else {
					if (rel_time < 7233) {
						if (hops < 2) {
							w16 = -1239;
						} else {
							w16 = -992;
						}
					} else {
						if (rel_time < 7792) {
							w16 = 1350;
						} else {
							w16 = 137;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6180) {
			if (rel_time < 5622) {
				if (rel_time < 5063) {
					if (rel_time < 4505) {
						if (rel_time < 3946) {
							w16 = 191;
						} else {
							w16 = 485;
						}
					} else {
						if (rel_time < 5021) {
							w16 = -74;
						} else {
							w16 = 0;
						}
					}
				} else {
					w16 = 593;
				}
			} else {
				if (hops < 4) {
					w16 = -190;
				} else {
					w16 = -15;
				}
			}
		} else {
			if (rel_time < 6739) {
				w16 = 598;
			} else {
				if (rel_time < 7297) {
					if (hops < 2) {
						w16 = -92;
					} else {
						if (rel_time < 7255) {
							w16 = 107;
						} else {
							w16 = 71;
						}
					}
				} else {
					if (rel_time < 7856) {
						if (rel_time < 7815) {
							w16 = 440;
						} else {
							w16 = 581;
						}
					} else {
						if (rel_time < 8414) {
							w16 = -40;
						} else {
							w16 = 253;
						}
					}
				}
			}
		}
	}
	int w17;
	if (rel_time < 8419) {
		if (rel_time < 7924) {
			if (rel_time < 7303) {
				if (rel_time < 6807) {
					if (rel_time < 6248) {
						if (rel_time < 5690) {
							w17 = 130;
						} else {
							w17 = -201;
						}
					} else {
						if (prod != 0) {
							w17 = 185;
						} else {
							w17 = 1131;
						}
					}
				} else {
					if (rel_time < 7233) {
						if (hops < 2) {
							w17 = -878;
						} else {
							w17 = -700;
						}
					} else {
						if (hops < 2) {
							w17 = 12;
						} else {
							w17 = 151;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 3) {
							w17 = 55;
						} else {
							w17 = 106;
						}
					} else {
						if (rel_time < 7815) {
							w17 = 310;
						} else {
							w17 = 414;
						}
					}
				} else {
					if (hops < 2) {
						w17 = 1159;
					} else {
						w17 = 804;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					if (hops < 2) {
						if (rel_time < 8352) {
							w17 = -5;
						} else {
							w17 = 80;
						}
					} else {
						if (hops < 4) {
							w17 = 111;
						} else {
							w17 = 153;
						}
					}
				} else {
					if (rel_time < 8372) {
						w17 = -77;
					} else {
						if (hops < 4) {
							w17 = -2;
						} else {
							w17 = 63;
						}
					}
				}
			} else {
				if (hops < 2) {
					w17 = -1242;
				} else {
					w17 = -805;
				}
			}
		}
	} else {
		if (rel_time < 8909) {
			if (prod != 0) {
				if (rel_time < 8483) {
					if (hops < 2) {
						w17 = -4;
					} else {
						w17 = 77;
					}
				} else {
					w17 = 89;
				}
			} else {
				if (hops < 2) {
					w17 = 1532;
				} else {
					w17 = 1159;
				}
			}
		} else {
			if (rel_time < 9531) {
				if (prod != 0) {
					if (rel_time < 9487) {
						if (size < 133) {
							w17 = 96;
						} else {
							w17 = 378;
						}
					} else {
						if (rel_time < 9489) {
							w17 = 23;
						} else {
							w17 = -152;
						}
					}
				} else {
					if (hops < 2) {
						w17 = -1016;
					} else {
						w17 = -712;
					}
				}
			} else {
				if (rel_time < 10025) {
					if (prod != 0) {
						if (rel_time < 9536) {
							w17 = 227;
						} else {
							w17 = -118;
						}
					} else {
						if (hops < 2) {
							w17 = 887;
						} else {
							w17 = 1187;
						}
					}
				} else {
					if (rel_time < 10584) {
						if (rel_time < 10158) {
							w17 = 168;
						} else {
							w17 = -652;
						}
					} else {
						if (rel_time < 11142) {
							w17 = 286;
						} else {
							w17 = 32;
						}
					}
				}
			}
		}
	}
	int w18;
	if (hops < 4) {
		if (rel_time < 10654) {
			if (rel_time < 10158) {
				if (rel_time < 9600) {
					if (rel_time < 9041) {
						if (rel_time < 8483) {
							w18 = 73;
						} else {
							w18 = 311;
						}
					} else {
						if (rel_time < 9467) {
							w18 = -601;
						} else {
							w18 = 74;
						}
					}
				} else {
					if (rel_time < 10025) {
						w18 = 710;
					} else {
						if (size < 133) {
							w18 = 23;
						} else {
							w18 = 287;
						}
					}
				}
			} else {
				if (rel_time < 10584) {
					if (hops < 2) {
						w18 = -302;
					} else {
						w18 = -569;
					}
				} else {
					if (size < 133) {
						if (hops < 3) {
							w18 = 61;
						} else {
							w18 = 21;
						}
					} else {
						if (hops < 3) {
							w18 = -49;
						} else {
							w18 = -16;
						}
					}
				}
			}
		} else {
			if (rel_time < 11142) {
				if (prod != 0) {
					if (hops < 2) {
						w18 = 0;
					} else {
						w18 = 43;
					}
				} else {
					if (hops < 2) {
						w18 = 559;
					} else {
						w18 = 811;
					}
				}
			} else {
				if (rel_time < 11275) {
					if (hops < 3) {
						if (rel_time < 11148) {
							w18 = 39;
						} else {
							w18 = 79;
						}
					} else {
						if (rel_time < 11145) {
							w18 = 37;
						} else {
							w18 = 143;
						}
					}
				} else {
					w18 = -100;
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 133) {
				if (rel_time < 8911) {
					if (rel_time < 5132) {
						if (rel_time < 2831) {
							w18 = 104;
						} else {
							w18 = 64;
						}
					} else {
						if (rel_time < 7303) {
							w18 = 167;
						} else {
							w18 = 105;
						}
					}
				} else {
					if (rel_time < 9472) {
						if (rel_time < 9041) {
							w18 = 69;
						} else {
							w18 = -78;
						}
					} else {
						if (rel_time < 10033) {
							w18 = 123;
						} else {
							w18 = 81;
						}
					}
				}
			} else {
				if (rel_time < 10090) {
					if (rel_time < 531) {
						w18 = 139;
					} else {
						if (rel_time < 8973) {
							w18 = 222;
						} else {
							w18 = 128;
						}
					}
				} else {
					if (rel_time < 10612) {
						w18 = 9;
					} else {
						w18 = -23;
					}
				}
			}
		} else {
			if (rel_time < 9047) {
				if (rel_time < 8909) {
					if (rel_time < 7930) {
						if (rel_time < 7369) {
							w18 = 207;
						} else {
							w18 = -395;
						}
					} else {
						w18 = 858;
					}
				} else {
					w18 = -455;
				}
			} else {
				if (rel_time < 10025) {
					w18 = 1132;
				} else {
					if (rel_time < 10163) {
						w18 = -385;
					} else {
						if (rel_time < 11142) {
							w18 = 866;
						} else {
							w18 = -51;
						}
					}
				}
			}
		}
	}
	int w19;
	if (rel_time < 10654) {
		if (rel_time < 10158) {
			if (rel_time < 9531) {
				if (rel_time < 8973) {
					if (rel_time < 8419) {
						if (rel_time < 7924) {
							w19 = 65;
						} else {
							w19 = -174;
						}
					} else {
						if (prod != 0) {
							w19 = 59;
						} else {
							w19 = 824;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 2) {
							w19 = -62;
						} else {
							w19 = 118;
						}
					} else {
						if (hops < 2) {
							w19 = -545;
						} else {
							w19 = -332;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 9536) {
							w19 = 136;
						} else {
							w19 = 7;
						}
					} else {
						if (hops < 2) {
							w19 = 156;
						} else {
							w19 = 242;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w19 = 422;
						} else {
							w19 = 566;
						}
					} else {
						w19 = 827;
					}
				}
			}
		} else {
			if (rel_time < 10584) {
				if (hops < 2) {
					w19 = -214;
				} else {
					w19 = -388;
				}
			} else {
				if (size < 133) {
					if (rel_time < 10587) {
						if (hops < 2) {
							w19 = -19;
						} else {
							w19 = 30;
						}
					} else {
						if (rel_time < 10649) {
							w19 = 62;
						} else {
							w19 = 18;
						}
					}
				} else {
					if (rel_time < 10606) {
						if (rel_time < 10604) {
							w19 = -4;
						} else {
							w19 = -54;
						}
					} else {
						if (hops < 3) {
							w19 = -24;
						} else {
							w19 = -12;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 11142) {
			if (prod != 0) {
				if (hops < 2) {
					w19 = 0;
				} else {
					w19 = 32;
				}
			} else {
				if (hops < 2) {
					w19 = 396;
				} else {
					w19 = 593;
				}
			}
		} else {
			if (rel_time < 11275) {
				if (hops < 3) {
					if (rel_time < 11148) {
						if (hops < 2) {
							w19 = 34;
						} else {
							w19 = 13;
						}
					} else {
						if (hops < 2) {
							w19 = 48;
						} else {
							w19 = 63;
						}
					}
				} else {
					w19 = 90;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 11278) {
						if (hops < 3) {
							w19 = -44;
						} else {
							w19 = -75;
						}
					} else {
						w19 = -78;
					}
				} else {
					w19 = -37;
				}
			}
		}
	}
	int w20;
	if (hops < 4) {
		if (size < 133) {
			if (rel_time < 8352) {
				if (rel_time < 7924) {
					if (rel_time < 7303) {
						if (rel_time < 6807) {
							w20 = 31;
						} else {
							w20 = -172;
						}
					} else {
						if (prod != 0) {
							w20 = 3;
						} else {
							w20 = 628;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 2) {
							w20 = 25;
						} else {
							w20 = 129;
						}
					} else {
						if (hops < 2) {
							w20 = -850;
						} else {
							w20 = -562;
						}
					}
				}
			} else {
				if (rel_time < 8909) {
					if (prod != 0) {
						if (rel_time < 8419) {
							w20 = 95;
						} else {
							w20 = -24;
						}
					} else {
						if (hops < 2) {
							w20 = 755;
						} else {
							w20 = 464;
						}
					}
				} else {
					if (rel_time < 9467) {
						if (rel_time < 9041) {
							w20 = -67;
						} else {
							w20 = -298;
						}
					} else {
						if (rel_time < 10025) {
							w20 = 171;
						} else {
							w20 = 25;
						}
					}
				}
			}
		} else {
			if (rel_time < 2787) {
				if (rel_time < 2271) {
					if (rel_time < 1712) {
						if (rel_time < 1154) {
							w20 = 51;
						} else {
							w20 = -74;
						}
					} else {
						if (hops < 3) {
							w20 = 242;
						} else {
							w20 = 377;
						}
					}
				} else {
					w20 = -191;
				}
			} else {
				if (rel_time < 3388) {
					w20 = 348;
				} else {
					if (rel_time < 3946) {
						w20 = -196;
					} else {
						if (rel_time < 4505) {
							w20 = 257;
						} else {
							w20 = 71;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3947) {
			if (rel_time < 3390) {
				if (rel_time < 2831) {
					if (rel_time < 2339) {
						if (rel_time < 1781) {
							w20 = 72;
						} else {
							w20 = 268;
						}
					} else {
						if (rel_time < 2765) {
							w20 = -437;
						} else {
							w20 = 7;
						}
					}
				} else {
					if (rel_time < 3324) {
						w20 = 467;
					} else {
						if (size < 133) {
							w20 = -3;
						} else {
							w20 = 308;
						}
					}
				}
			} else {
				if (rel_time < 3458) {
					w20 = -518;
				} else {
					if (size < 133) {
						if (rel_time < 3902) {
							w20 = -27;
						} else {
							w20 = 30;
						}
					} else {
						w20 = -133;
					}
				}
			}
		} else {
			if (rel_time < 4018) {
				if (prod != 0) {
					w20 = 50;
				} else {
					w20 = 920;
				}
			} else {
				if (rel_time < 5065) {
					if (prod != 0) {
						if (rel_time < 4507) {
							w20 = 145;
						} else {
							w20 = -38;
						}
					} else {
						w20 = -476;
					}
				} else {
					if (rel_time < 5135) {
						if (prod != 0) {
							w20 = 16;
						} else {
							w20 = 955;
						}
					} else {
						if (rel_time < 5692) {
							w20 = -96;
						} else {
							w20 = 113;
						}
					}
				}
			}
		}
	}
	int w21;
	if (rel_time < 5132) {
		if (rel_time < 4573) {
			if (rel_time < 4015) {
				if (rel_time < 3456) {
					if (rel_time < 2898) {
						if (rel_time < 2339) {
							w21 = 38;
						} else {
							w21 = -148;
						}
					} else {
						if (prod != 0) {
							w21 = 122;
						} else {
							w21 = 465;
						}
					}
				} else {
					if (rel_time < 3882) {
						if (hops < 2) {
							w21 = -864;
						} else {
							w21 = -586;
						}
					} else {
						if (prod != 0) {
							w21 = -107;
						} else {
							w21 = 555;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 2) {
							w21 = -37;
						} else {
							w21 = 27;
						}
					} else {
						if (rel_time < 4461) {
							w21 = 152;
						} else {
							w21 = 205;
						}
					}
				} else {
					if (hops < 2) {
						w21 = 1285;
					} else {
						w21 = 869;
					}
				}
			}
		} else {
			if (rel_time < 4999) {
				if (hops < 4) {
					w21 = -676;
				} else {
					w21 = -347;
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						if (rel_time < 5018) {
							w21 = -133;
						} else {
							w21 = -166;
						}
					} else {
						if (rel_time < 5063) {
							w21 = -115;
						} else {
							w21 = -44;
						}
					}
				} else {
					w21 = 674;
				}
			}
		}
	} else {
		if (rel_time < 5558) {
			if (prod != 0) {
				w21 = -52;
			} else {
				w21 = 920;
			}
		} else {
			if (rel_time < 6116) {
				if (rel_time < 5690) {
					if (size < 133) {
						if (hops < 3) {
							w21 = -37;
						} else {
							w21 = 57;
						}
					} else {
						w21 = 317;
					}
				} else {
					w21 = -841;
				}
			} else {
				if (rel_time < 6739) {
					if (prod != 0) {
						if (rel_time < 6694) {
							w21 = 0;
						} else {
							w21 = 300;
						}
					} else {
						w21 = 739;
					}
				} else {
					if (rel_time < 7233) {
						if (rel_time < 6807) {
							w21 = -36;
						} else {
							w21 = -551;
						}
					} else {
						if (rel_time < 7856) {
							w21 = 124;
						} else {
							w21 = 20;
						}
					}
				}
			}
		}
	}
	int w22;
	if (hops < 2) {
		if (rel_time < 10717) {
			if (rel_time < 4461) {
				if (rel_time < 4015) {
					if (rel_time < 3456) {
						if (rel_time < 2898) {
							w22 = 6;
						} else {
							w22 = 136;
						}
					} else {
						if (rel_time < 3882) {
							w22 = -612;
						} else {
							w22 = -107;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 4460) {
							w22 = -36;
						} else {
							w22 = 108;
						}
					} else {
						w22 = 910;
					}
				}
			} else {
				if (rel_time < 5132) {
					if (prod != 0) {
						if (rel_time < 4573) {
							w22 = -14;
						} else {
							w22 = -110;
						}
					} else {
						w22 = -484;
					}
				} else {
					if (rel_time < 5558) {
						if (prod != 0) {
							w22 = -44;
						} else {
							w22 = 642;
						}
					} else {
						if (rel_time < 6116) {
							w22 = -119;
						} else {
							w22 = 7;
						}
					}
				}
			}
		} else {
			if (rel_time < 11142) {
				w22 = 268;
			} else {
				if (rel_time < 11275) {
					if (rel_time < 11145) {
						w22 = 45;
					} else {
						if (rel_time < 11210) {
							w22 = -3;
						} else {
							w22 = 38;
						}
					}
				} else {
					w22 = -55;
				}
			}
		}
	} else {
		if (rel_time < 10654) {
			if (rel_time < 10158) {
				if (rel_time < 9536) {
					if (rel_time < 9041) {
						if (rel_time < 8414) {
							w22 = 28;
						} else {
							w22 = 111;
						}
					} else {
						if (rel_time < 9531) {
							w22 = -122;
						} else {
							w22 = 40;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w22 = 21;
						} else {
							w22 = 143;
						}
					} else {
						if (hops < 4) {
							w22 = 344;
						} else {
							w22 = 567;
						}
					}
				}
			} else {
				if (rel_time < 10584) {
					w22 = -291;
				} else {
					if (size < 133) {
						if (hops < 3) {
							w22 = 8;
						} else {
							w22 = -8;
						}
					} else {
						w22 = -42;
					}
				}
			}
		} else {
			if (rel_time < 11142) {
				if (prod != 0) {
					w22 = 13;
				} else {
					w22 = 401;
				}
			} else {
				if (rel_time < 11275) {
					if (rel_time < 11145) {
						if (hops < 4) {
							w22 = -29;
						} else {
							w22 = 52;
						}
					} else {
						if (rel_time < 11148) {
							w22 = 89;
						} else {
							w22 = 36;
						}
					}
				} else {
					w22 = -69;
				}
			}
		}
	}
	int w23;
	if (hops < 4) {
		if (rel_time < 10654) {
			if (rel_time < 10158) {
				if (rel_time < 9600) {
					if (rel_time < 8973) {
						if (rel_time < 8483) {
							w23 = 9;
						} else {
							w23 = 133;
						}
					} else {
						if (prod != 0) {
							w23 = -17;
						} else {
							w23 = -168;
						}
					}
				} else {
					if (rel_time < 10025) {
						w23 = 237;
					} else {
						if (size < 133) {
							w23 = -4;
						} else {
							w23 = 90;
						}
					}
				}
			} else {
				if (rel_time < 10584) {
					if (hops < 2) {
						w23 = -166;
					} else {
						w23 = -216;
					}
				} else {
					if (size < 133) {
						if (rel_time < 10649) {
							w23 = 19;
						} else {
							w23 = -9;
						}
					} else {
						if (rel_time < 10606) {
							w23 = -58;
						} else {
							w23 = -29;
						}
					}
				}
			}
		} else {
			if (rel_time < 11142) {
				if (prod != 0) {
					if (hops < 2) {
						w23 = -14;
					} else {
						w23 = 10;
					}
				} else {
					if (hops < 2) {
						w23 = 190;
					} else {
						w23 = 268;
					}
				}
			} else {
				if (rel_time < 11275) {
					if (rel_time < 11207) {
						if (prod != 1) {
							w23 = 8;
						} else {
							w23 = -33;
						}
					} else {
						if (hops < 3) {
							w23 = 20;
						} else {
							w23 = 67;
						}
					}
				} else {
					if (rel_time < 11278) {
						if (hops < 3) {
							w23 = -27;
						} else {
							w23 = -47;
						}
					} else {
						if (hops < 3) {
							w23 = -52;
						} else {
							w23 = -32;
						}
					}
				}
			}
		}
	} else {
		if (prod != 2) {
			if (prod != 1) {
				if (rel_time < 6180) {
					if (rel_time < 5622) {
						if (rel_time < 5063) {
							w23 = 55;
						} else {
							w23 = 377;
						}
					} else {
						if (rel_time < 5692) {
							w23 = -403;
						} else {
							w23 = -70;
						}
					}
				} else {
					if (rel_time < 6252) {
						w23 = 528;
					} else {
						if (rel_time < 7297) {
							w23 = -91;
						} else {
							w23 = 106;
						}
					}
				}
			} else {
				if (rel_time < 8975) {
					if (rel_time < 7924) {
						if (rel_time < 6248) {
							w23 = 34;
						} else {
							w23 = -20;
						}
					} else {
						if (rel_time < 8419) {
							w23 = 102;
						} else {
							w23 = 20;
						}
					}
				} else {
					if (rel_time < 10158) {
						if (rel_time < 9533) {
							w23 = -42;
						} else {
							w23 = -17;
						}
					} else {
						if (rel_time < 10654) {
							w23 = 29;
						} else {
							w23 = -17;
						}
					}
				}
			}
		} else {
			if (rel_time < 2226) {
				if (rel_time < 551) {
					w23 = 10;
				} else {
					if (rel_time < 2208) {
						if (rel_time < 1649) {
							w23 = -57;
						} else {
							w23 = -30;
						}
					} else {
						w23 = -99;
					}
				}
			} else {
				if (rel_time < 7253) {
					if (rel_time < 5018) {
						if (rel_time < 2785) {
							w23 = 69;
						} else {
							w23 = 3;
						}
					} else {
						if (rel_time < 7237) {
							w23 = 74;
						} else {
							w23 = 185;
						}
					}
				} else {
					if (rel_time < 9472) {
						if (rel_time < 8928) {
							w23 = -1;
						} else {
							w23 = -91;
						}
					} else {
						if (rel_time < 10033) {
							w23 = 60;
						} else {
							w23 = 2;
						}
					}
				}
			}
		}
	}
	int w24;
	if (hops < 2) {
		if (rel_time < 5690) {
			if (rel_time < 5132) {
				if (rel_time < 4573) {
					if (rel_time < 4015) {
						if (rel_time < 3456) {
							w24 = 8;
						} else {
							w24 = -164;
						}
					} else {
						if (prod != 0) {
							w24 = 10;
						} else {
							w24 = 642;
						}
					}
				} else {
					if (rel_time < 4999) {
						w24 = -346;
					} else {
						if (rel_time < 5000) {
							w24 = -124;
						} else {
							w24 = -73;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 5623) {
							w24 = -24;
						} else {
							w24 = 35;
						}
					} else {
						w24 = 224;
					}
				} else {
					w24 = 452;
				}
			}
		} else {
			if (rel_time < 6116) {
				w24 = -591;
			} else {
				if (rel_time < 6696) {
					if (prod != 0) {
						if (rel_time < 6694) {
							w24 = -32;
						} else {
							w24 = 175;
						}
					} else {
						w24 = 484;
					}
				} else {
					if (rel_time < 7233) {
						if (rel_time < 6807) {
							w24 = -58;
						} else {
							w24 = -456;
						}
					} else {
						if (rel_time < 7792) {
							w24 = 94;
						} else {
							w24 = -9;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5065) {
			if (rel_time < 4573) {
				if (rel_time < 4015) {
					if (rel_time < 3456) {
						if (rel_time < 2831) {
							w24 = 11;
						} else {
							w24 = 142;
						}
					} else {
						if (rel_time < 3882) {
							w24 = -426;
						} else {
							w24 = -55;
						}
					}
				} else {
					if (rel_time < 4018) {
						if (hops < 4) {
							w24 = 625;
						} else {
							w24 = 406;
						}
					} else {
						if (size < 133) {
							w24 = 7;
						} else {
							w24 = 132;
						}
					}
				}
			} else {
				if (rel_time < 4999) {
					if (hops < 4) {
						w24 = -471;
					} else {
						w24 = -276;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 5021) {
							w24 = -107;
						} else {
							w24 = -72;
						}
					} else {
						if (size < 133) {
							w24 = 13;
						} else {
							w24 = -84;
						}
					}
				}
			}
		} else {
			if (rel_time < 5558) {
				if (prod != 0) {
					if (hops < 3) {
						w24 = -20;
					} else {
						if (hops < 4) {
							w24 = 0;
						} else {
							w24 = 9;
						}
					}
				} else {
					if (hops < 4) {
						w24 = 651;
					} else {
						w24 = 354;
					}
				}
			} else {
				if (rel_time < 6180) {
					if (prod != 0) {
						if (rel_time < 6136) {
							w24 = 77;
						} else {
							w24 = -126;
						}
					} else {
						if (hops < 4) {
							w24 = -596;
						} else {
							w24 = -294;
						}
					}
				} else {
					if (rel_time < 6675) {
						if (rel_time < 6248) {
							w24 = 119;
						} else {
							w24 = 494;
						}
					} else {
						if (rel_time < 7233) {
							w24 = -51;
						} else {
							w24 = 19;
						}
					}
				}
			}
		}
	}
	int w25;
	if (size < 133) {
		if (rel_time < 1090) {
			if (prod != 1) {
				if (hops < 3) {
					if (rel_time < 551) {
						if (hops < 2) {
							w25 = 20;
						} else {
							w25 = 29;
						}
					} else {
						if (hops < 2) {
							w25 = 14;
						} else {
							w25 = 16;
						}
					}
				} else {
					if (rel_time < 551) {
						if (hops < 4) {
							w25 = 15;
						} else {
							w25 = 4;
						}
					} else {
						if (hops < 4) {
							w25 = 64;
						} else {
							w25 = 42;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 599) {
						if (hops < 2) {
							w25 = -3;
						} else {
							w25 = -6;
						}
					} else {
						if (hops < 2) {
							w25 = 4;
						} else {
							w25 = 14;
						}
					}
				} else {
					if (rel_time < 599) {
						if (hops < 4) {
							w25 = 10;
						} else {
							w25 = 16;
						}
					} else {
						if (hops < 4) {
							w25 = 30;
						} else {
							w25 = 3;
						}
					}
				}
			}
		} else {
			if (rel_time < 2765) {
				if (rel_time < 2339) {
					if (rel_time < 1781) {
						if (prod != 0) {
							w25 = -18;
						} else {
							w25 = -201;
						}
					} else {
						if (rel_time < 2207) {
							w25 = 305;
						} else {
							w25 = -55;
						}
					}
				} else {
					if (hops < 2) {
						w25 = -319;
					} else {
						if (hops < 4) {
							w25 = -572;
						} else {
							w25 = -304;
						}
					}
				}
			} else {
				if (rel_time < 3324) {
					if (prod != 0) {
						if (rel_time < 2766) {
							w25 = 4;
						} else {
							w25 = 50;
						}
					} else {
						if (hops < 3) {
							w25 = 205;
						} else {
							w25 = 440;
						}
					}
				} else {
					if (rel_time < 3882) {
						if (rel_time < 3456) {
							w25 = -28;
						} else {
							w25 = -338;
						}
					} else {
						if (rel_time < 4018) {
							w25 = 132;
						} else {
							w25 = -1;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 531) {
			if (hops < 2) {
				w25 = -24;
			} else {
				if (hops < 3) {
					w25 = 15;
				} else {
					if (hops < 4) {
						w25 = -22;
					} else {
						w25 = 20;
					}
				}
			}
		} else {
			if (rel_time < 6739) {
				if (rel_time < 6180) {
					if (rel_time < 5622) {
						if (rel_time < 5063) {
							w25 = 27;
						} else {
							w25 = 182;
						}
					} else {
						if (rel_time < 6139) {
							w25 = -129;
						} else {
							w25 = -59;
						}
					}
				} else {
					if (rel_time < 6696) {
						w25 = 124;
					} else {
						w25 = 237;
					}
				}
			} else {
				if (rel_time < 7297) {
					if (hops < 2) {
						w25 = -198;
					} else {
						if (rel_time < 7255) {
							w25 = -79;
						} else {
							w25 = -112;
						}
					}
				} else {
					if (rel_time < 7856) {
						if (rel_time < 7815) {
							w25 = 111;
						} else {
							w25 = 161;
						}
					} else {
						if (rel_time < 8973) {
							w25 = 30;
						} else {
							w25 = -15;
						}
					}
				}
			}
		}
	}
	int w26;
	if (rel_time < 10654) {
		if (rel_time < 10158) {
			if (rel_time < 9600) {
				if (rel_time < 7924) {
					if (rel_time < 7303) {
						if (rel_time < 6807) {
							w26 = 7;
						} else {
							w26 = -88;
						}
					} else {
						if (prod != 0) {
							w26 = 9;
						} else {
							w26 = 393;
						}
					}
				} else {
					if (rel_time < 7930) {
						if (hops < 2) {
							w26 = -610;
						} else {
							w26 = -409;
						}
					} else {
						if (rel_time < 8909) {
							w26 = 84;
						} else {
							w26 = -35;
						}
					}
				}
			} else {
				if (rel_time < 10025) {
					if (hops < 4) {
						w26 = 165;
					} else {
						w26 = 369;
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w26 = -33;
						} else {
							w26 = 19;
						}
					} else {
						if (hops < 4) {
							w26 = 66;
						} else {
							w26 = 100;
						}
					}
				}
			}
		} else {
			if (rel_time < 10584) {
				if (hops < 2) {
					if (rel_time < 10163) {
						w26 = -130;
					} else {
						w26 = -86;
					}
				} else {
					w26 = -162;
				}
			} else {
				if (size < 133) {
					if (hops < 2) {
						if (rel_time < 10587) {
							w26 = -30;
						} else {
							w26 = 40;
						}
					} else {
						if (rel_time < 10604) {
							w26 = -16;
						} else {
							w26 = -1;
						}
					}
				} else {
					if (rel_time < 10612) {
						if (rel_time < 10604) {
							w26 = -6;
						} else {
							w26 = -30;
						}
					} else {
						w26 = -64;
					}
				}
			}
		}
	} else {
		if (rel_time < 11142) {
			if (prod != 0) {
				if (hops < 2) {
					w26 = -7;
				} else {
					w26 = 3;
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w26 = 138;
					} else {
						w26 = 184;
					}
				} else {
					w26 = 294;
				}
			}
		} else {
			if (rel_time < 11275) {
				if (rel_time < 11207) {
					if (hops < 4) {
						if (rel_time < 11145) {
							w26 = -4;
						} else {
							w26 = 9;
						}
					} else {
						if (rel_time < 11148) {
							w26 = 46;
						} else {
							w26 = -32;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w26 = 14;
						} else {
							w26 = 43;
						}
					} else {
						if (rel_time < 11210) {
							w26 = -8;
						} else {
							w26 = -36;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w26 = -23;
					} else {
						if (rel_time < 11278) {
							w26 = -31;
						} else {
							w26 = -46;
						}
					}
				} else {
					w26 = -78;
				}
			}
		}
	}
	int w27;
	if (rel_time < 5132) {
		if (rel_time < 4573) {
			if (rel_time < 4015) {
				if (rel_time < 3456) {
					if (rel_time < 2829) {
						if (rel_time < 2339) {
							w27 = 9;
						} else {
							w27 = -143;
						}
					} else {
						if (prod != 0) {
							w27 = 36;
						} else {
							w27 = 197;
						}
					}
				} else {
					if (rel_time < 3882) {
						if (hops < 4) {
							w27 = -262;
						} else {
							w27 = -38;
						}
					} else {
						if (prod != 0) {
							w27 = -71;
						} else {
							w27 = 415;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 3) {
							w27 = -23;
						} else {
							w27 = 22;
						}
					} else {
						if (hops < 3) {
							w27 = 67;
						} else {
							w27 = 93;
						}
					}
				} else {
					if (hops < 4) {
						w27 = 412;
					} else {
						w27 = 260;
					}
				}
			}
		} else {
			if (rel_time < 4999) {
				if (hops < 2) {
					w27 = -247;
				} else {
					if (hops < 4) {
						w27 = -334;
					} else {
						w27 = -203;
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 4) {
							w27 = -55;
						} else {
							w27 = 8;
						}
					} else {
						if (rel_time < 5020) {
							w27 = -62;
						} else {
							w27 = -92;
						}
					}
				} else {
					w27 = 337;
				}
			}
		}
	} else {
		if (rel_time < 5558) {
			if (prod != 0) {
				w27 = -36;
			} else {
				if (hops < 2) {
					w27 = 319;
				} else {
					if (hops < 4) {
						w27 = 456;
					} else {
						w27 = 237;
					}
				}
			}
		} else {
			if (rel_time < 6116) {
				if (rel_time < 5690) {
					if (size < 133) {
						if (hops < 4) {
							w27 = -20;
						} else {
							w27 = 34;
						}
					} else {
						if (hops < 4) {
							w27 = 131;
						} else {
							w27 = 44;
						}
					}
				} else {
					if (hops < 4) {
						w27 = -427;
					} else {
						w27 = -216;
					}
				}
			} else {
				if (rel_time < 6675) {
					if (prod != 0) {
						if (size < 133) {
							w27 = 67;
						} else {
							w27 = -82;
						}
					} else {
						w27 = 348;
					}
				} else {
					if (rel_time < 7233) {
						if (rel_time < 6807) {
							w27 = 21;
						} else {
							w27 = -306;
						}
					} else {
						if (rel_time < 7792) {
							w27 = 85;
						} else {
							w27 = -2;
						}
					}
				}
			}
		}
	}
	int w28;
	if (rel_time < 8419) {
		if (rel_time < 7924) {
			if (rel_time < 7303) {
				if (rel_time < 6742) {
					if (rel_time < 6180) {
						if (rel_time < 5690) {
							w28 = 4;
						} else {
							w28 = -101;
						}
					} else {
						if (prod != 0) {
							w28 = 27;
						} else {
							w28 = 245;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 2) {
							w28 = -49;
						} else {
							w28 = 91;
						}
					} else {
						w28 = -215;
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 7811) {
							w28 = -70;
						} else {
							w28 = 7;
						}
					} else {
						if (rel_time < 7815) {
							w28 = 76;
						} else {
							w28 = 113;
						}
					}
				} else {
					if (hops < 2) {
						w28 = 391;
					} else {
						if (hops < 4) {
							w28 = 125;
						} else {
							w28 = 317;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 8370) {
						if (rel_time < 8354) {
							w28 = 29;
						} else {
							w28 = 57;
						}
					} else {
						if (hops < 4) {
							w28 = -6;
						} else {
							w28 = 47;
						}
					}
				} else {
					if (rel_time < 8372) {
						w28 = -85;
					} else {
						if (hops < 3) {
							w28 = -21;
						} else {
							w28 = -90;
						}
					}
				}
			} else {
				if (hops < 2) {
					w28 = -461;
				} else {
					w28 = -290;
				}
			}
		}
	} else {
		if (rel_time < 8909) {
			if (prod != 0) {
				if (rel_time < 8483) {
					if (hops < 2) {
						w28 = -62;
					} else {
						w28 = -29;
					}
				} else {
					w28 = -90;
				}
			} else {
				if (hops < 2) {
					w28 = 468;
				} else {
					w28 = 238;
				}
			}
		} else {
			if (rel_time < 8928) {
				if (hops < 4) {
					w28 = -144;
				} else {
					w28 = -19;
				}
			} else {
				if (rel_time < 8973) {
					if (rel_time < 8933) {
						if (rel_time < 8930) {
							w28 = 82;
						} else {
							w28 = 50;
						}
					} else {
						if (hops < 4) {
							w28 = 149;
						} else {
							w28 = 237;
						}
					}
				} else {
					if (rel_time < 9467) {
						if (rel_time < 9041) {
							w28 = -16;
						} else {
							w28 = -152;
						}
					} else {
						if (rel_time < 10090) {
							w28 = 35;
						} else {
							w28 = 0;
						}
					}
				}
			}
		}
	}
	int w29;
	if (rel_time < 10654) {
		if (rel_time < 10158) {
			if (rel_time < 9600) {
				if (rel_time < 7924) {
					if (rel_time < 7303) {
						if (rel_time < 6739) {
							w29 = 3;
						} else {
							w29 = -38;
						}
					} else {
						if (prod != 0) {
							w29 = 5;
						} else {
							w29 = 179;
						}
					}
				} else {
					if (rel_time < 7930) {
						if (hops < 2) {
							w29 = -299;
						} else {
							w29 = -202;
						}
					} else {
						if (rel_time < 8909) {
							w29 = 41;
						} else {
							w29 = -20;
						}
					}
				}
			} else {
				if (rel_time < 10025) {
					if (hops < 4) {
						w29 = 107;
					} else {
						w29 = 264;
					}
				} else {
					if (size < 133) {
						if (hops < 3) {
							w29 = -19;
						} else {
							w29 = 22;
						}
					} else {
						if (hops < 4) {
							w29 = 37;
						} else {
							w29 = 66;
						}
					}
				}
			}
		} else {
			if (rel_time < 10584) {
				if (hops < 2) {
					if (rel_time < 10163) {
						w29 = -92;
					} else {
						w29 = -61;
					}
				} else {
					w29 = -113;
				}
			} else {
				if (size < 133) {
					if (hops < 2) {
						if (rel_time < 10587) {
							w29 = -21;
						} else {
							w29 = 29;
						}
					} else {
						if (hops < 3) {
							w29 = 2;
						} else {
							w29 = -11;
						}
					}
				} else {
					if (rel_time < 10612) {
						if (rel_time < 10606) {
							w29 = -26;
						} else {
							w29 = -12;
						}
					} else {
						w29 = -48;
					}
				}
			}
		}
	} else {
		if (rel_time < 11142) {
			if (prod != 0) {
				if (hops < 2) {
					w29 = -4;
				} else {
					w29 = 3;
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w29 = 98;
					} else {
						w29 = 131;
					}
				} else {
					w29 = 215;
				}
			}
		} else {
			if (rel_time < 11275) {
				if (rel_time < 11145) {
					if (hops < 2) {
						w29 = 35;
					} else {
						if (hops < 3) {
							w29 = -34;
						} else {
							w29 = 8;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11210) {
							w29 = -4;
						} else {
							w29 = 21;
						}
					} else {
						if (rel_time < 11148) {
							w29 = 54;
						} else {
							w29 = 9;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w29 = -16;
					} else {
						if (rel_time < 11278) {
							w29 = -21;
						} else {
							w29 = -32;
						}
					}
				} else {
					w29 = -56;
				}
			}
		}
	}
	int w30;
	if (rel_time < 5132) {
		if (rel_time < 4573) {
			if (rel_time < 4015) {
				if (rel_time < 3456) {
					if (rel_time < 2829) {
						if (rel_time < 2339) {
							w30 = 4;
						} else {
							w30 = -102;
						}
					} else {
						if (prod != 0) {
							w30 = 23;
						} else {
							w30 = 137;
						}
					}
				} else {
					if (rel_time < 3882) {
						if (hops < 4) {
							w30 = -186;
						} else {
							w30 = -29;
						}
					} else {
						if (prod != 0) {
							w30 = -52;
						} else {
							w30 = 331;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 3) {
							w30 = -18;
						} else {
							w30 = 14;
						}
					} else {
						if (rel_time < 4461) {
							w30 = 39;
						} else {
							w30 = 58;
						}
					}
				} else {
					if (hops < 4) {
						w30 = 288;
					} else {
						w30 = 189;
					}
				}
			}
		} else {
			if (rel_time < 4999) {
				if (hops < 2) {
					w30 = -177;
				} else {
					if (hops < 4) {
						w30 = -238;
					} else {
						w30 = -150;
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 4) {
							w30 = -41;
						} else {
							w30 = 4;
						}
					} else {
						if (rel_time < 5020) {
							w30 = -46;
						} else {
							w30 = -67;
						}
					}
				} else {
					w30 = 255;
				}
			}
		}
	} else {
		if (rel_time < 5558) {
			if (prod != 0) {
				w30 = -32;
			} else {
				if (hops < 2) {
					w30 = 224;
				} else {
					if (hops < 4) {
						w30 = 320;
					} else {
						w30 = 173;
					}
				}
			}
		} else {
			if (rel_time < 6116) {
				if (rel_time < 5690) {
					if (size < 133) {
						if (hops < 4) {
							w30 = -16;
						} else {
							w30 = 22;
						}
					} else {
						if (rel_time < 5578) {
							w30 = 63;
						} else {
							w30 = 101;
						}
					}
				} else {
					if (hops < 4) {
						w30 = -271;
					} else {
						w30 = -131;
					}
				}
			} else {
				if (rel_time < 6675) {
					if (prod != 0) {
						if (size < 133) {
							w30 = 57;
						} else {
							w30 = -28;
						}
					} else {
						if (hops < 4) {
							w30 = 179;
						} else {
							w30 = 89;
						}
					}
				} else {
					if (rel_time < 6694) {
						if (rel_time < 6676) {
							w30 = -32;
						} else {
							w30 = -92;
						}
					} else {
						if (rel_time < 6739) {
							w30 = 118;
						} else {
							w30 = -1;
						}
					}
				}
			}
		}
	}
	int w31;
	if (rel_time < 8419) {
		if (rel_time < 7924) {
			if (rel_time < 7297) {
				if (rel_time < 6807) {
					if (rel_time < 6116) {
						if (rel_time < 5690) {
							w31 = 1;
						} else {
							w31 = -183;
						}
					} else {
						if (prod != 0) {
							w31 = 14;
						} else {
							w31 = 121;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 7233) {
							w31 = -140;
						} else {
							w31 = -74;
						}
					} else {
						if (hops < 2) {
							w31 = -9;
						} else {
							w31 = 142;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (prod != 2) {
						if (size < 133) {
							w31 = 14;
						} else {
							w31 = 60;
						}
					} else {
						if (hops < 4) {
							w31 = -58;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w31 = 225;
					} else {
						if (hops < 4) {
							w31 = 36;
						} else {
							w31 = 184;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 8370) {
						if (hops < 4) {
							w31 = 17;
						} else {
							w31 = -13;
						}
					} else {
						if (hops < 4) {
							w31 = -16;
						} else {
							w31 = 24;
						}
					}
				} else {
					if (rel_time < 8372) {
						w31 = -72;
					} else {
						if (hops < 3) {
							w31 = -27;
						} else {
							w31 = -76;
						}
					}
				}
			} else {
				if (rel_time < 7930) {
					if (hops < 4) {
						if (hops < 2) {
							w31 = -212;
						} else {
							w31 = -154;
						}
					} else {
						w31 = -74;
					}
				} else {
					w31 = -410;
				}
			}
		}
	} else {
		if (rel_time < 8909) {
			if (prod != 0) {
				if (rel_time < 8483) {
					w31 = -51;
				} else {
					w31 = -77;
				}
			} else {
				if (hops < 2) {
					w31 = 320;
				} else {
					if (hops < 4) {
						w31 = 142;
					} else {
						w31 = 207;
					}
				}
			}
		} else {
			if (rel_time < 8928) {
				if (hops < 4) {
					w31 = -95;
				} else {
					if (rel_time < 8911) {
						w31 = -2;
					} else {
						w31 = -13;
					}
				}
			} else {
				if (rel_time < 8973) {
					if (rel_time < 8933) {
						if (rel_time < 8930) {
							w31 = 64;
						} else {
							w31 = 41;
						}
					} else {
						if (hops < 4) {
							w31 = 113;
						} else {
							w31 = 181;
						}
					}
				} else {
					if (rel_time < 9467) {
						if (rel_time < 9041) {
							w31 = -5;
						} else {
							w31 = -101;
						}
					} else {
						if (size < 133) {
							w31 = 15;
						} else {
							w31 = -17;
						}
					}
				}
			}
		}
	}
	int w32;
	if (size < 133) {
		if (rel_time < 4015) {
			if (rel_time < 2207) {
				if (rel_time < 1781) {
					if (rel_time < 1222) {
						if (rel_time < 1090) {
							w32 = 4;
						} else {
							w32 = -21;
						}
					} else {
						if (rel_time < 1648) {
							w32 = -150;
						} else {
							w32 = -21;
						}
					}
				} else {
					if (hops < 3) {
						w32 = 162;
					} else {
						if (hops < 4) {
							w32 = 246;
						} else {
							w32 = 363;
						}
					}
				}
			} else {
				if (rel_time < 2765) {
					if (rel_time < 2339) {
						if (hops < 3) {
							w32 = -60;
						} else {
							w32 = -17;
						}
					} else {
						if (hops < 3) {
							w32 = -193;
						} else {
							w32 = -386;
						}
					}
				} else {
					if (rel_time < 3324) {
						if (prod != 1) {
							w32 = 91;
						} else {
							w32 = 17;
						}
					} else {
						if (prod != 0) {
							w32 = -37;
						} else {
							w32 = -109;
						}
					}
				}
			}
		} else {
			if (rel_time < 4018) {
				w32 = 195;
			} else {
				if (rel_time < 5000) {
					if (prod != 0) {
						if (prod != 1) {
							w32 = -27;
						} else {
							w32 = 6;
						}
					} else {
						if (rel_time < 4442) {
							w32 = 217;
						} else {
							w32 = -149;
						}
					}
				} else {
					if (rel_time < 5558) {
						if (prod != 0) {
							w32 = -20;
						} else {
							w32 = 197;
						}
					} else {
						if (rel_time < 6116) {
							w32 = -49;
						} else {
							w32 = 4;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 598) {
			if (hops < 4) {
				if (rel_time < 531) {
					if (hops < 2) {
						w32 = -25;
					} else {
						if (hops < 3) {
							w32 = 2;
						} else {
							w32 = -24;
						}
					}
				} else {
					if (hops < 2) {
						w32 = 4;
					} else {
						if (hops < 3) {
							w32 = -6;
						} else {
							w32 = 0;
						}
					}
				}
			} else {
				if (rel_time < 531) {
					w32 = 6;
				} else {
					w32 = 50;
				}
			}
		} else {
			if (rel_time < 1154) {
				if (rel_time < 1110) {
					w32 = 127;
				} else {
					w32 = 279;
				}
			} else {
				if (rel_time < 1712) {
					if (hops < 3) {
						if (hops < 2) {
							w32 = -42;
						} else {
							w32 = -84;
						}
					} else {
						w32 = -203;
					}
				} else {
					if (rel_time < 2271) {
						if (hops < 3) {
							w32 = 133;
						} else {
							w32 = 243;
						}
					} else {
						if (rel_time < 2829) {
							w32 = -46;
						} else {
							w32 = 11;
						}
					}
				}
			}
		}
	}
	int w33;
	if (hops < 2) {
		if (rel_time < 8483) {
			if (rel_time < 7924) {
				if (rel_time < 7366) {
					if (rel_time < 6676) {
						if (rel_time < 6248) {
							w33 = -3;
						} else {
							w33 = 56;
						}
					} else {
						if (rel_time < 6694) {
							w33 = -119;
						} else {
							w33 = -37;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w33 = -26;
						} else {
							w33 = 37;
						}
					} else {
						w33 = 158;
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 8416) {
							w33 = 5;
						} else {
							w33 = -37;
						}
					} else {
						if (rel_time < 8370) {
							w33 = -72;
						} else {
							w33 = -48;
						}
					}
				} else {
					if (rel_time < 7930) {
						if (rel_time < 7926) {
							w33 = -115;
						} else {
							w33 = -173;
						}
					} else {
						w33 = -321;
					}
				}
			}
		} else {
			if (rel_time < 8909) {
				if (prod != 0) {
					w33 = -48;
				} else {
					w33 = 225;
				}
			} else {
				if (rel_time < 9467) {
					if (rel_time < 9041) {
						if (size < 133) {
							w33 = -40;
						} else {
							w33 = 42;
						}
					} else {
						w33 = -165;
					}
				} else {
					if (rel_time < 9472) {
						w33 = 122;
					} else {
						if (rel_time < 10028) {
							w33 = 19;
						} else {
							w33 = -6;
						}
					}
				}
			}
		}
	} else {
		if (prod != 2) {
			if (rel_time < 670) {
				if (hops < 4) {
					if (rel_time < 599) {
						if (rel_time < 598) {
							w33 = -4;
						} else {
							w33 = -9;
						}
					} else {
						if (hops < 3) {
							w33 = 1;
						} else {
							w33 = 12;
						}
					}
				} else {
					if (rel_time < 598) {
						if (rel_time < 531) {
							w33 = 4;
						} else {
							w33 = 36;
						}
					} else {
						if (rel_time < 599) {
							w33 = 2;
						} else {
							w33 = -7;
						}
					}
				}
			} else {
				if (rel_time < 2271) {
					if (rel_time < 1781) {
						if (rel_time < 1154) {
							w33 = 29;
						} else {
							w33 = -48;
						}
					} else {
						if (hops < 3) {
							w33 = 115;
						} else {
							w33 = 199;
						}
					}
				} else {
					if (rel_time < 2765) {
						if (rel_time < 2339) {
							w33 = -8;
						} else {
							w33 = -226;
						}
					} else {
						if (rel_time < 3388) {
							w33 = 68;
						} else {
							w33 = 4;
						}
					}
				}
			}
		} else {
			if (rel_time < 551) {
				if (hops < 3) {
					w33 = 11;
				} else {
					if (hops < 4) {
						w33 = 1;
					} else {
						w33 = -7;
					}
				}
			} else {
				if (rel_time < 5018) {
					if (rel_time < 2785) {
						if (rel_time < 2226) {
							w33 = -28;
						} else {
							w33 = 55;
						}
					} else {
						if (rel_time < 3902) {
							w33 = -69;
						} else {
							w33 = -14;
						}
					}
				} else {
					if (rel_time < 7253) {
						if (rel_time < 6694) {
							w33 = 3;
						} else {
							w33 = 99;
						}
					} else {
						if (rel_time < 8928) {
							w33 = -31;
						} else {
							w33 = -2;
						}
					}
				}
			}
		}
	}
	int w34;
	if (rel_time < 10654) {
		if (rel_time < 10158) {
			if (rel_time < 9531) {
				if (rel_time < 9489) {
					if (size < 133) {
						if (rel_time < 9467) {
							w34 = -3;
						} else {
							w34 = 40;
						}
					} else {
						if (rel_time < 598) {
							w34 = -3;
						} else {
							w34 = 15;
						}
					}
				} else {
					w34 = -98;
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 9536) {
							w34 = 35;
						} else {
							w34 = -27;
						}
					} else {
						if (hops < 4) {
							w34 = 28;
						} else {
							w34 = 49;
						}
					}
				} else {
					if (rel_time < 9600) {
						w34 = 376;
					} else {
						if (hops < 4) {
							w34 = 67;
						} else {
							w34 = 189;
						}
					}
				}
			}
		} else {
			if (rel_time < 10584) {
				if (hops < 2) {
					if (rel_time < 10163) {
						w34 = -69;
					} else {
						w34 = -47;
					}
				} else {
					w34 = -87;
				}
			} else {
				if (rel_time < 10604) {
					if (hops < 3) {
						if (rel_time < 10587) {
							w34 = -5;
						} else {
							w34 = 23;
						}
					} else {
						if (rel_time < 10587) {
							w34 = -19;
						} else {
							w34 = -30;
						}
					}
				} else {
					if (rel_time < 10606) {
						w34 = -22;
					} else {
						if (rel_time < 10649) {
							w34 = -3;
						} else {
							w34 = -16;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 11142) {
			if (prod != 0) {
				if (hops < 2) {
					w34 = -6;
				} else {
					w34 = -3;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 10719) {
						if (hops < 3) {
							w34 = 52;
						} else {
							w34 = 78;
						}
					} else {
						w34 = 87;
					}
				} else {
					w34 = 151;
				}
			}
		} else {
			if (rel_time < 11275) {
				if (rel_time < 11207) {
					if (prod != 1) {
						if (hops < 4) {
							w34 = -2;
						} else {
							w34 = 9;
						}
					} else {
						w34 = -29;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w34 = 3;
						} else {
							w34 = 22;
						}
					} else {
						if (rel_time < 11210) {
							w34 = -14;
						} else {
							w34 = -34;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w34 = -14;
					} else {
						w34 = -26;
					}
				} else {
					w34 = -47;
				}
			}
		}
	}
	int w35;
	if (hops < 3) {
		if (rel_time < 6699) {
			if (rel_time < 6694) {
				if (rel_time < 6675) {
					if (rel_time < 6248) {
						if (rel_time < 5690) {
							w35 = 0;
						} else {
							w35 = -23;
						}
					} else {
						if (prod != 0) {
							w35 = -86;
						} else {
							w35 = 79;
						}
					}
				} else {
					if (rel_time < 6676) {
						if (hops < 2) {
							w35 = 6;
						} else {
							w35 = -66;
						}
					} else {
						if (hops < 2) {
							w35 = -84;
						} else {
							w35 = -12;
						}
					}
				}
			} else {
				if (rel_time < 6696) {
					w35 = 35;
				} else {
					w35 = 87;
				}
			}
		} else {
			if (rel_time < 7233) {
				if (rel_time < 6807) {
					if (rel_time < 6742) {
						if (hops < 2) {
							w35 = -48;
						} else {
							w35 = -28;
						}
					} else {
						if (hops < 2) {
							w35 = -2;
						} else {
							w35 = 7;
						}
					}
				} else {
					if (rel_time < 6809) {
						w35 = -66;
					} else {
						w35 = -110;
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 7253) {
						if (hops < 2) {
							w35 = -2;
						} else {
							w35 = 87;
						}
					} else {
						if (rel_time < 7297) {
							w35 = -59;
						} else {
							w35 = -6;
						}
					}
				} else {
					if (rel_time < 7792) {
						if (hops < 2) {
							w35 = 113;
						} else {
							w35 = 26;
						}
					} else {
						if (rel_time < 8352) {
							w35 = -128;
						} else {
							w35 = 21;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3946) {
			if (rel_time < 3388) {
				if (rel_time < 3343) {
					if (rel_time < 3324) {
						if (rel_time < 2831) {
							w35 = 2;
						} else {
							w35 = 166;
						}
					} else {
						if (hops < 4) {
							w35 = -128;
						} else {
							w35 = -60;
						}
					}
				} else {
					w35 = 119;
				}
			} else {
				if (rel_time < 3458) {
					if (hops < 4) {
						w35 = -141;
					} else {
						if (rel_time < 3390) {
							w35 = -99;
						} else {
							w35 = 7;
						}
					}
				} else {
					if (rel_time < 3883) {
						if (hops < 4) {
							w35 = 2;
						} else {
							w35 = 67;
						}
					} else {
						if (rel_time < 3902) {
							w35 = -39;
						} else {
							w35 = -62;
						}
					}
				}
			}
		} else {
			if (rel_time < 4018) {
				if (prod != 0) {
					if (hops < 4) {
						if (rel_time < 3947) {
							w35 = -13;
						} else {
							w35 = 5;
						}
					} else {
						w35 = 63;
					}
				} else {
					if (rel_time < 4015) {
						w35 = 286;
					} else {
						w35 = 115;
					}
				}
			} else {
				if (rel_time < 5063) {
					if (prod != 0) {
						if (rel_time < 5000) {
							w35 = 21;
						} else {
							w35 = -38;
						}
					} else {
						if (hops < 4) {
							w35 = -120;
						} else {
							w35 = -70;
						}
					}
				} else {
					if (rel_time < 5622) {
						if (prod != 0) {
							w35 = 26;
						} else {
							w35 = 137;
						}
					} else {
						if (rel_time < 5692) {
							w35 = -38;
						} else {
							w35 = 10;
						}
					}
				}
			}
		}
	}
	int w36;
	if (hops < 2) {
		if (rel_time < 531) {
			w36 = -16;
		} else {
			if (rel_time < 1222) {
				if (rel_time < 1109) {
					if (rel_time < 598) {
						if (rel_time < 551) {
							w36 = 6;
						} else {
							w36 = 4;
						}
					} else {
						if (prod != 0) {
							w36 = -10;
						} else {
							w36 = 2;
						}
					}
				} else {
					if (rel_time < 1110) {
						w36 = 88;
					} else {
						w36 = 41;
					}
				}
			} else {
				if (rel_time < 1648) {
					w36 = -131;
				} else {
					if (rel_time < 1781) {
						if (rel_time < 1649) {
							w36 = 3;
						} else {
							w36 = -44;
						}
					} else {
						if (rel_time < 2207) {
							w36 = 100;
						} else {
							w36 = -3;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5065) {
			if (rel_time < 4507) {
				if (rel_time < 4015) {
					if (rel_time < 3388) {
						if (rel_time < 3343) {
							w36 = 1;
						} else {
							w36 = 101;
						}
					} else {
						if (rel_time < 3946) {
							w36 = -50;
						} else {
							w36 = 17;
						}
					}
				} else {
					if (rel_time < 4018) {
						if (hops < 3) {
							w36 = 138;
						} else {
							w36 = 82;
						}
					} else {
						if (rel_time < 4442) {
							w36 = -15;
						} else {
							w36 = 20;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 4) {
							w36 = -23;
						} else {
							w36 = 9;
						}
					} else {
						if (rel_time < 5021) {
							w36 = -70;
						} else {
							w36 = -25;
						}
					}
				} else {
					if (hops < 3) {
						w36 = -125;
					} else {
						if (hops < 4) {
							w36 = -86;
						} else {
							w36 = -51;
						}
					}
				}
			}
		} else {
			if (rel_time < 5558) {
				if (prod != 0) {
					if (hops < 4) {
						w36 = 14;
					} else {
						w36 = 1;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w36 = 174;
						} else {
							w36 = 120;
						}
					} else {
						if (rel_time < 5133) {
							w36 = 58;
						} else {
							w36 = 16;
						}
					}
				}
			} else {
				if (rel_time < 6739) {
					if (rel_time < 6694) {
						if (rel_time < 6116) {
							w36 = -12;
						} else {
							w36 = 23;
						}
					} else {
						if (hops < 3) {
							w36 = 61;
						} else {
							w36 = 115;
						}
					}
				} else {
					if (rel_time < 7233) {
						if (rel_time < 6807) {
							w36 = -7;
						} else {
							w36 = -88;
						}
					} else {
						if (rel_time < 7792) {
							w36 = 28;
						} else {
							w36 = -1;
						}
					}
				}
			}
		}
	}
	int w37;
	if (rel_time < 11275) {
		if (rel_time < 10654) {
			if (rel_time < 10158) {
				if (rel_time < 9600) {
					if (rel_time < 9041) {
						if (rel_time < 8419) {
							w37 = -1;
						} else {
							w37 = 27;
						}
					} else {
						if (prod != 2) {
							w37 = -35;
						} else {
							w37 = 29;
						}
					}
				} else {
					if (rel_time < 10025) {
						if (hops < 4) {
							w37 = 42;
						} else {
							w37 = 137;
						}
					} else {
						if (size < 133) {
							w37 = -1;
						} else {
							w37 = 22;
						}
					}
				}
			} else {
				if (rel_time < 10584) {
					if (hops < 2) {
						w37 = -49;
					} else {
						w37 = -65;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 10604) {
							w37 = 11;
						} else {
							w37 = -8;
						}
					} else {
						if (prod != 1) {
							w37 = -18;
						} else {
							w37 = 1;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 2) {
					if (rel_time < 11210) {
						if (rel_time < 11145) {
							w37 = 11;
						} else {
							w37 = -4;
						}
					} else {
						w37 = 14;
					}
				} else {
					if (rel_time < 11145) {
						if (hops < 4) {
							w37 = -19;
						} else {
							w37 = 14;
						}
					} else {
						if (rel_time < 11148) {
							w37 = 33;
						} else {
							w37 = -2;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 10719) {
							w37 = 30;
						} else {
							w37 = 44;
						}
					} else {
						if (rel_time < 10717) {
							w37 = 33;
						} else {
							w37 = 60;
						}
					}
				} else {
					w37 = 108;
				}
			}
		}
	} else {
		if (hops < 4) {
			if (hops < 2) {
				w37 = -16;
			} else {
				if (rel_time < 11278) {
					if (hops < 3) {
						w37 = -3;
					} else {
						w37 = -25;
					}
				} else {
					if (hops < 3) {
						w37 = -32;
					} else {
						w37 = -8;
					}
				}
			}
		} else {
			w37 = -37;
		}
	}
	int w38;
	if (rel_time < 1222) {
		if (rel_time < 1109) {
			if (rel_time < 1090) {
				if (rel_time < 531) {
					if (hops < 2) {
						w38 = -11;
					} else {
						if (hops < 3) {
							w38 = 3;
						} else {
							w38 = -10;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 551) {
							w38 = 6;
						} else {
							w38 = -2;
						}
					} else {
						if (rel_time < 670) {
							w38 = 3;
						} else {
							w38 = 22;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w38 = -22;
					} else {
						w38 = -10;
					}
				} else {
					w38 = -40;
				}
			}
		} else {
			if (rel_time < 1154) {
				if (rel_time < 1110) {
					w38 = 67;
				} else {
					w38 = 186;
				}
			} else {
				if (hops < 3) {
					w38 = 31;
				} else {
					if (hops < 4) {
						w38 = -49;
					} else {
						w38 = -27;
					}
				}
			}
		}
	} else {
		if (rel_time < 1712) {
			if (hops < 3) {
				if (prod != 2) {
					if (hops < 2) {
						if (rel_time < 1648) {
							w38 = -92;
						} else {
							w38 = -21;
						}
					} else {
						if (rel_time < 1648) {
							w38 = 0;
						} else {
							w38 = -51;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1649) {
							w38 = 2;
						} else {
							w38 = -46;
						}
					} else {
						if (rel_time < 1649) {
							w38 = -12;
						} else {
							w38 = 27;
						}
					}
				}
			} else {
				if (prod != 2) {
					w38 = -142;
				} else {
					if (rel_time < 1649) {
						if (hops < 4) {
							w38 = 10;
						} else {
							w38 = -21;
						}
					} else {
						if (hops < 4) {
							w38 = -43;
						} else {
							w38 = -19;
						}
					}
				}
			}
		} else {
			if (rel_time < 2207) {
				if (rel_time < 1781) {
					if (hops < 2) {
						if (rel_time < 1713) {
							w38 = -13;
						} else {
							w38 = -46;
						}
					} else {
						if (hops < 4) {
							w38 = 20;
						} else {
							w38 = 68;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w38 = 71;
						} else {
							w38 = 108;
						}
					} else {
						w38 = 211;
					}
				}
			} else {
				if (rel_time < 2765) {
					if (size < 133) {
						if (rel_time < 2339) {
							w38 = -28;
						} else {
							w38 = -138;
						}
					} else {
						if (hops < 3) {
							w38 = 74;
						} else {
							w38 = 111;
						}
					}
				} else {
					if (rel_time < 2785) {
						if (rel_time < 2766) {
							w38 = 34;
						} else {
							w38 = 65;
						}
					} else {
						if (rel_time < 2829) {
							w38 = -48;
						} else {
							w38 = 1;
						}
					}
				}
			}
		}
	}
	int w39;
	if (rel_time < 6739) {
		if (rel_time < 5132) {
			if (rel_time < 4573) {
				if (rel_time < 4015) {
					if (rel_time < 3456) {
						if (rel_time < 3343) {
							w39 = 0;
						} else {
							w39 = 42;
						}
					} else {
						if (rel_time < 3882) {
							w39 = -70;
						} else {
							w39 = -19;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w39 = -4;
						} else {
							w39 = 22;
						}
					} else {
						if (hops < 2) {
							w39 = 155;
						} else {
							w39 = 80;
						}
					}
				}
			} else {
				if (rel_time < 4999) {
					if (hops < 3) {
						w39 = -85;
					} else {
						if (hops < 4) {
							w39 = -61;
						} else {
							w39 = -37;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w39 = -15;
						} else {
							w39 = -38;
						}
					} else {
						if (hops < 4) {
							w39 = 134;
						} else {
							w39 = 27;
						}
					}
				}
			}
		} else {
			if (rel_time < 5558) {
				if (hops < 4) {
					if (prod != 0) {
						w39 = -23;
					} else {
						if (hops < 3) {
							w39 = 113;
						} else {
							w39 = 80;
						}
					}
				} else {
					if (rel_time < 5133) {
						w39 = 45;
					} else {
						w39 = 12;
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 6136) {
						if (rel_time < 6118) {
							w39 = 24;
						} else {
							w39 = 75;
						}
					} else {
						if (rel_time < 6694) {
							w39 = -16;
						} else {
							w39 = 47;
						}
					}
				} else {
					if (rel_time < 6116) {
						if (hops < 4) {
							w39 = -111;
						} else {
							w39 = -20;
						}
					} else {
						if (hops < 4) {
							w39 = 60;
						} else {
							w39 = 22;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 7233) {
			if (rel_time < 6807) {
				if (hops < 3) {
					if (rel_time < 6742) {
						if (hops < 2) {
							w39 = -34;
						} else {
							w39 = -18;
						}
					} else {
						if (hops < 2) {
							w39 = -1;
						} else {
							w39 = 7;
						}
					}
				} else {
					if (hops < 4) {
						w39 = 14;
					} else {
						w39 = -27;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 6809) {
							w39 = -38;
						} else {
							w39 = -65;
						}
					} else {
						w39 = -83;
					}
				} else {
					w39 = -23;
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 7253) {
					if (hops < 2) {
						if (rel_time < 7235) {
							w39 = -47;
						} else {
							w39 = 21;
						}
					} else {
						if (rel_time < 7237) {
							w39 = 30;
						} else {
							w39 = 93;
						}
					}
				} else {
					if (rel_time < 7297) {
						if (hops < 2) {
							w39 = -72;
						} else {
							w39 = -31;
						}
					} else {
						if (rel_time < 7299) {
							w39 = 40;
						} else {
							w39 = -4;
						}
					}
				}
			} else {
				if (rel_time < 8352) {
					if (rel_time < 7792) {
						if (hops < 4) {
							w39 = 40;
						} else {
							w39 = 122;
						}
					} else {
						if (rel_time < 7930) {
							w39 = -81;
						} else {
							w39 = -203;
						}
					}
				} else {
					if (rel_time < 8909) {
						if (hops < 2) {
							w39 = 147;
						} else {
							w39 = 97;
						}
					} else {
						if (rel_time < 9467) {
							w39 = -48;
						} else {
							w39 = 10;
						}
					}
				}
			}
		}
	}
	int w40;
	if (rel_time < 11275) {
		if (rel_time < 10654) {
			if (rel_time < 10158) {
				if (rel_time < 9531) {
					if (rel_time < 9489) {
						if (size < 133) {
							w40 = -1;
						} else {
							w40 = 3;
						}
					} else {
						w40 = -58;
					}
				} else {
					if (prod != 0) {
						if (rel_time < 9536) {
							w40 = 36;
						} else {
							w40 = -6;
						}
					} else {
						if (rel_time < 9600) {
							w40 = 282;
						} else {
							w40 = 34;
						}
					}
				}
			} else {
				if (rel_time < 10584) {
					if (hops < 4) {
						if (rel_time < 10160) {
							w40 = -36;
						} else {
							w40 = -47;
						}
					} else {
						w40 = -63;
					}
				} else {
					if (hops < 2) {
						if (prod != 2) {
							w40 = -5;
						} else {
							w40 = 15;
						}
					} else {
						if (prod != 1) {
							w40 = -7;
						} else {
							w40 = 0;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 4) {
					if (rel_time < 11207) {
						if (hops < 3) {
							w40 = 3;
						} else {
							w40 = -10;
						}
					} else {
						if (hops < 3) {
							w40 = 5;
						} else {
							w40 = 15;
						}
					}
				} else {
					if (rel_time < 11148) {
						w40 = 13;
					} else {
						if (rel_time < 11207) {
							w40 = -33;
						} else {
							w40 = -17;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 10719) {
							w40 = 18;
						} else {
							w40 = 29;
						}
					} else {
						if (rel_time < 10719) {
							w40 = 30;
						} else {
							w40 = 43;
						}
					}
				} else {
					w40 = 76;
				}
			}
		}
	} else {
		if (hops < 2) {
			w40 = -14;
		} else {
			if (hops < 4) {
				if (rel_time < 11278) {
					if (hops < 3) {
						w40 = -5;
					} else {
						w40 = -21;
					}
				} else {
					if (hops < 3) {
						w40 = -26;
					} else {
						w40 = -9;
					}
				}
			} else {
				w40 = -30;
			}
		}
	}
	int w41;
	if (hops < 3) {
		if (rel_time < 3456) {
			if (rel_time < 3343) {
				if (rel_time < 2271) {
					if (rel_time < 2226) {
						if (rel_time < 2207) {
							w41 = 0;
						} else {
							w41 = -53;
						}
					} else {
						if (rel_time < 2227) {
							w41 = 61;
						} else {
							w41 = 38;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 2787) {
							w41 = -34;
						} else {
							w41 = 1;
						}
					} else {
						if (hops < 2) {
							w41 = 38;
						} else {
							w41 = 1;
						}
					}
				}
			} else {
				if (rel_time < 3388) {
					w41 = 78;
				} else {
					if (hops < 2) {
						if (rel_time < 3390) {
							w41 = 41;
						} else {
							w41 = 105;
						}
					} else {
						if (rel_time < 3390) {
							w41 = -12;
						} else {
							w41 = -65;
						}
					}
				}
			}
		} else {
			if (rel_time < 3883) {
				if (hops < 2) {
					if (rel_time < 3882) {
						w41 = -109;
					} else {
						w41 = -63;
					}
				} else {
					if (rel_time < 3458) {
						w41 = 28;
					} else {
						if (rel_time < 3882) {
							w41 = -6;
						} else {
							w41 = -28;
						}
					}
				}
			} else {
				if (rel_time < 4442) {
					if (prod != 0) {
						if (prod != 2) {
							w41 = -30;
						} else {
							w41 = 22;
						}
					} else {
						if (hops < 2) {
							w41 = 110;
						} else {
							w41 = 75;
						}
					}
				} else {
					if (rel_time < 5132) {
						if (prod != 0) {
							w41 = -12;
						} else {
							w41 = -56;
						}
					} else {
						if (rel_time < 5558) {
							w41 = 78;
						} else {
							w41 = -2;
						}
					}
				}
			}
		}
	} else {
		if (prod != 2) {
			if (rel_time < 8416) {
				if (rel_time < 7924) {
					if (rel_time < 7297) {
						if (rel_time < 6742) {
							w41 = 6;
						} else {
							w41 = -47;
						}
					} else {
						if (size < 133) {
							w41 = 26;
						} else {
							w41 = 51;
						}
					}
				} else {
					if (rel_time < 8414) {
						if (hops < 4) {
							w41 = -78;
						} else {
							w41 = -42;
						}
					} else {
						w41 = -24;
					}
				}
			} else {
				if (rel_time < 8975) {
					if (prod != 1) {
						if (hops < 4) {
							w41 = 60;
						} else {
							w41 = 123;
						}
					} else {
						w41 = 31;
					}
				} else {
					if (rel_time < 9531) {
						if (hops < 4) {
							w41 = 14;
						} else {
							w41 = -109;
						}
					} else {
						if (rel_time < 10092) {
							w41 = 29;
						} else {
							w41 = -3;
						}
					}
				}
			}
		} else {
			if (rel_time < 2785) {
				if (rel_time < 2226) {
					if (rel_time < 551) {
						if (hops < 4) {
							w41 = 0;
						} else {
							w41 = -5;
						}
					} else {
						if (rel_time < 1668) {
							w41 = -21;
						} else {
							w41 = 2;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2766) {
							w41 = 29;
						} else {
							w41 = 10;
						}
					} else {
						if (rel_time < 2766) {
							w41 = 23;
						} else {
							w41 = 62;
						}
					}
				}
			} else {
				if (rel_time < 3343) {
					if (hops < 4) {
						w41 = -91;
					} else {
						if (rel_time < 3325) {
							w41 = -57;
						} else {
							w41 = 7;
						}
					}
				} else {
					if (rel_time < 3883) {
						if (hops < 4) {
							w41 = 19;
						} else {
							w41 = 68;
						}
					} else {
						if (hops < 4) {
							w41 = -11;
						} else {
							w41 = 3;
						}
					}
				}
			}
		}
	}
	int w42;
	if (rel_time < 531) {
		if (hops < 2) {
			w42 = -9;
		} else {
			if (hops < 3) {
				w42 = 1;
			} else {
				if (hops < 4) {
					w42 = -15;
				} else {
					w42 = 3;
				}
			}
		}
	} else {
		if (size < 133) {
			if (rel_time < 3883) {
				if (rel_time < 3324) {
					if (rel_time < 2765) {
						if (rel_time < 2339) {
							w42 = 0;
						} else {
							w42 = -90;
						}
					} else {
						if (hops < 2) {
							w42 = 0;
						} else {
							w42 = 40;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3456) {
							w42 = 8;
						} else {
							w42 = -36;
						}
					} else {
						if (rel_time < 3458) {
							w42 = -61;
						} else {
							w42 = 32;
						}
					}
				}
			} else {
				if (rel_time < 4442) {
					if (prod != 0) {
						if (hops < 4) {
							w42 = -2;
						} else {
							w42 = 52;
						}
					} else {
						if (rel_time < 4015) {
							w42 = 228;
						} else {
							w42 = 58;
						}
					}
				} else {
					if (rel_time < 5000) {
						if (prod != 1) {
							w42 = -33;
						} else {
							w42 = 4;
						}
					} else {
						if (rel_time < 6675) {
							w42 = 10;
						} else {
							w42 = -2;
						}
					}
				}
			}
		} else {
			if (rel_time < 3388) {
				if (rel_time < 2829) {
					if (rel_time < 2271) {
						if (rel_time < 1712) {
							w42 = 3;
						} else {
							w42 = 47;
						}
					} else {
						if (rel_time < 2787) {
							w42 = -22;
						} else {
							w42 = -92;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3344) {
							w42 = 62;
						} else {
							w42 = 46;
						}
					} else {
						w42 = 20;
					}
				}
			} else {
				if (rel_time < 3946) {
					if (rel_time < 3903) {
						w42 = -3;
					} else {
						if (rel_time < 3904) {
							w42 = -64;
						} else {
							w42 = -27;
						}
					}
				} else {
					if (rel_time < 5622) {
						if (rel_time < 5063) {
							w42 = -4;
						} else {
							w42 = 45;
						}
					} else {
						if (rel_time < 6139) {
							w42 = -35;
						} else {
							w42 = 0;
						}
					}
				}
			}
		}
	}
	int w43;
	if (hops < 2) {
		if (rel_time < 9467) {
			if (rel_time < 9041) {
				if (rel_time < 8483) {
					if (rel_time < 7924) {
						if (rel_time < 7366) {
							w43 = -2;
						} else {
							w43 = 17;
						}
					} else {
						if (prod != 2) {
							w43 = -40;
						} else {
							w43 = 10;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 8928) {
							w43 = -49;
						} else {
							w43 = 6;
						}
					} else {
						w43 = 106;
					}
				}
			} else {
				if (rel_time < 9047) {
					if (rel_time < 9043) {
						w43 = -72;
					} else {
						w43 = -123;
					}
				} else {
					w43 = -44;
				}
			}
		} else {
			if (rel_time < 9472) {
				w43 = 71;
			} else {
				if (rel_time < 9533) {
					if (size < 133) {
						w43 = 78;
					} else {
						if (rel_time < 9487) {
							w43 = -86;
						} else {
							w43 = 9;
						}
					}
				} else {
					if (rel_time < 9600) {
						if (rel_time < 9536) {
							w43 = -4;
						} else {
							w43 = -154;
						}
					} else {
						if (rel_time < 10028) {
							w43 = 36;
						} else {
							w43 = -2;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 8370) {
				if (rel_time < 5577) {
					if (rel_time < 2785) {
						if (rel_time < 2226) {
							w43 = 0;
						} else {
							w43 = 17;
						}
					} else {
						if (rel_time < 3946) {
							w43 = -18;
						} else {
							w43 = 0;
						}
					}
				} else {
					if (rel_time < 5622) {
						if (hops < 4) {
							w43 = 50;
						} else {
							w43 = -27;
						}
					} else {
						if (rel_time < 6694) {
							w43 = 1;
						} else {
							w43 = 13;
						}
					}
				}
			} else {
				if (rel_time < 8928) {
					if (prod != 1) {
						if (rel_time < 8414) {
							w43 = -34;
						} else {
							w43 = -58;
						}
					} else {
						if (hops < 4) {
							w43 = -12;
						} else {
							w43 = 15;
						}
					}
				} else {
					if (rel_time < 8973) {
						if (rel_time < 8933) {
							w43 = 13;
						} else {
							w43 = 63;
						}
					} else {
						if (rel_time < 9531) {
							w43 = -21;
						} else {
							w43 = 4;
						}
					}
				}
			}
		} else {
			if (rel_time < 8352) {
				if (rel_time < 5558) {
					if (rel_time < 2765) {
						if (rel_time < 2207) {
							w43 = 7;
						} else {
							w43 = -87;
						}
					} else {
						if (rel_time < 3324) {
							w43 = 82;
						} else {
							w43 = 15;
						}
					}
				} else {
					if (rel_time < 6116) {
						if (hops < 4) {
							w43 = -79;
						} else {
							w43 = -19;
						}
					} else {
						if (rel_time < 6675) {
							w43 = 46;
						} else {
							w43 = -26;
						}
					}
				}
			} else {
				if (rel_time < 9600) {
					if (rel_time < 9467) {
						if (hops < 4) {
							w43 = 48;
						} else {
							w43 = -34;
						}
					} else {
						w43 = 206;
					}
				} else {
					if (rel_time < 10025) {
						if (hops < 4) {
							w43 = 6;
						} else {
							w43 = 82;
						}
					} else {
						if (rel_time < 10584) {
							w43 = -34;
						} else {
							w43 = 10;
						}
					}
				}
			}
		}
	}
	int w44;
	if (rel_time < 11275) {
		if (rel_time < 10654) {
			if (rel_time < 7792) {
				if (rel_time < 7366) {
					if (rel_time < 6739) {
						if (rel_time < 6696) {
							w44 = 0;
						} else {
							w44 = 42;
						}
					} else {
						if (prod != 2) {
							w44 = -16;
						} else {
							w44 = 22;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 0) {
							w44 = 21;
						} else {
							w44 = 66;
						}
					} else {
						if (hops < 4) {
							w44 = 6;
						} else {
							w44 = 87;
						}
					}
				}
			} else {
				if (rel_time < 7811) {
					if (hops < 4) {
						if (hops < 3) {
							w44 = -31;
						} else {
							w44 = -49;
						}
					} else {
						if (rel_time < 7794) {
							w44 = -14;
						} else {
							w44 = 18;
						}
					}
				} else {
					if (rel_time < 7856) {
						if (rel_time < 7815) {
							w44 = 19;
						} else {
							w44 = 32;
						}
					} else {
						if (rel_time < 8414) {
							w44 = -15;
						} else {
							w44 = 1;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 4) {
					if (rel_time < 11145) {
						if (hops < 2) {
							w44 = 10;
						} else {
							w44 = -12;
						}
					} else {
						if (hops < 2) {
							w44 = 3;
						} else {
							w44 = 7;
						}
					}
				} else {
					if (rel_time < 11148) {
						w44 = 8;
					} else {
						if (rel_time < 11207) {
							w44 = -27;
						} else {
							w44 = -12;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 10719) {
						if (hops < 3) {
							w44 = 12;
						} else {
							w44 = 26;
						}
					} else {
						w44 = 26;
					}
				} else {
					w44 = 54;
				}
			}
		}
	} else {
		if (hops < 2) {
			w44 = -8;
		} else {
			if (hops < 4) {
				w44 = -16;
			} else {
				w44 = -23;
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32 + w33 + w34 + w35 + w36 + w37 + w38 + w39 + w40 + w41 + w42 + w43 + w44) >> 8;
}
