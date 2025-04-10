#include <stdbool.h>

int model(int rel_time, int hops, int size, int prod, int cons)
{
	int w0;
	if (size < 46) {
		if (hops < 3) {
			if (hops < 2) {
				w0 = 66064;
			} else {
				w0 = 68214;
			}
		} else {
			if (hops < 4) {
				w0 = 70364;
			} else {
				if (hops < 5) {
					w0 = 72516;
				} else {
					w0 = 74664;
				}
			}
		}
	} else {
		if (rel_time < 713) {
			if (rel_time < 385) {
				if (hops < 3) {
					w0 = 188361;
				} else {
					w0 = 192968;
				}
			} else {
				if (hops < 3) {
					w0 = 162302;
				} else {
					w0 = 166975;
				}
			}
		} else {
			if (rel_time < 3439) {
				if (prod == 0) {
					w0 = 146813;
				} else {
					w0 = 200659;
				}
			} else {
				if (hops < 3) {
					w0 = 135556;
				} else {
					w0 = 140233;
				}
			}
		}
	}
	int w1;
	if (size < 46) {
		if (hops < 3) {
			if (hops < 2) {
				w1 = 46245;
			} else {
				w1 = 47750;
			}
		} else {
			if (hops < 4) {
				w1 = 49255;
			} else {
				if (hops < 5) {
					w1 = 50762;
				} else {
					w1 = 52266;
				}
			}
		}
	} else {
		if (rel_time < 713) {
			if (rel_time < 385) {
				if (hops < 4) {
					w1 = 132296;
				} else {
					w1 = 136443;
				}
			} else {
				if (hops < 4) {
					w1 = 114067;
				} else {
					w1 = 118239;
				}
			}
		} else {
			if (rel_time < 3439) {
				if (prod == 0) {
					w1 = 102769;
				} else {
					w1 = 140477;
				}
			} else {
				if (hops < 4) {
					w1 = 95340;
				} else {
					w1 = 99531;
				}
			}
		}
	}
	int w2;
	if (size < 46) {
		if (hops < 3) {
			if (hops < 2) {
				w2 = 32371;
			} else {
				w2 = 33425;
			}
		} else {
			if (hops < 4) {
				w2 = 34479;
			} else {
				if (hops < 5) {
					w2 = 35533;
				} else {
					w2 = 36588;
				}
			}
		}
	} else {
		if (rel_time < 713) {
			if (rel_time < 385) {
				if (hops < 2) {
					w2 = 91122;
				} else {
					w2 = 94180;
				}
			} else {
				if (hops < 2) {
					w2 = 78386;
				} else {
					w2 = 81412;
				}
			}
		} else {
			if (rel_time < 3439) {
				if (prod == 0) {
					w2 = 71939;
				} else {
					w2 = 98345;
				}
			} else {
				if (hops < 2) {
					w2 = 65319;
				} else {
					w2 = 68292;
				}
			}
		}
	}
	int w3;
	if (size < 46) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 3303) {
					w3 = 22677;
				} else {
					w3 = 22208;
				}
			} else {
				if (rel_time < 3303) {
					w3 = 23414;
				} else {
					w3 = 22973;
				}
			}
		} else {
			if (hops < 4) {
				w3 = 24135;
			} else {
				if (hops < 5) {
					w3 = 24874;
				} else {
					w3 = 25612;
				}
			}
		}
	} else {
		if (rel_time < 713) {
			if (rel_time < 385) {
				if (hops < 3) {
					w3 = 64407;
				} else {
					w3 = 66520;
				}
			} else {
				if (hops < 3) {
					w3 = 55459;
				} else {
					w3 = 57619;
				}
			}
		} else {
			if (rel_time < 3439) {
				if (prod == 0) {
					w3 = 50357;
				} else {
					w3 = 68850;
				}
			} else {
				if (hops < 3) {
					w3 = 46283;
				} else {
					w3 = 48445;
				}
			}
		}
	}
	int w4;
	if (size < 46) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 3303) {
					w4 = 15874;
				} else {
					w4 = 15547;
				}
			} else {
				if (rel_time < 3303) {
					w4 = 16390;
				} else {
					w4 = 16083;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 3303) {
					w4 = 16911;
				} else {
					w4 = 16474;
				}
			} else {
				if (hops < 5) {
					w4 = 17412;
				} else {
					w4 = 17929;
				}
			}
		}
	} else {
		if (rel_time < 713) {
			if (rel_time < 385) {
				if (hops < 2) {
					w4 = 44464;
				} else {
					w4 = 46242;
				}
			} else {
				if (hops < 2) {
					w4 = 38234;
				} else {
					w4 = 39981;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w4 = 32102;
				} else {
					w4 = 33575;
				}
			} else {
				if (rel_time < 3439) {
					w4 = 38413;
				} else {
					w4 = 33912;
				}
			}
		}
	}
	int w5;
	if (size < 46) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 3117) {
					w5 = 11122;
				} else {
					w5 = 10972;
				}
			} else {
				if (cons == 3) {
					w5 = 11440;
				} else {
					w5 = 11563;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 3227) {
					w5 = 11843;
				} else {
					w5 = 11622;
				}
			} else {
				if (hops < 5) {
					w5 = 12188;
				} else {
					w5 = 12551;
				}
			}
		}
	} else {
		if (rel_time < 713) {
			if (rel_time < 385) {
				if (hops < 4) {
					w5 = 31609;
				} else {
					w5 = 33433;
				}
			} else {
				if (hops < 4) {
					w5 = 27231;
				} else {
					w5 = 29067;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 3439) {
					w5 = 24334;
				} else {
					w5 = 22667;
				}
			} else {
				if (rel_time < 3439) {
					w5 = 28221;
				} else {
					w5 = 24478;
				}
			}
		}
	}
	int w6;
	if (size < 46) {
		if (hops < 3) {
			if (hops < 2) {
				if (cons == 3) {
					w6 = 7748;
				} else {
					w6 = 7871;
				}
			} else {
				if (cons == 1) {
					w6 = 8002;
				} else {
					w6 = 8121;
				}
			}
		} else {
			if (hops < 4) {
				if (cons == 3) {
					w6 = 8254;
				} else {
					w6 = 8374;
				}
			} else {
				if (hops < 5) {
					w6 = 8532;
				} else {
					w6 = 8786;
				}
			}
		}
	} else {
		if (rel_time < 713) {
			if (rel_time < 385) {
				if (hops < 5) {
					w6 = 22234;
				} else {
					w6 = 25030;
				}
			} else {
				if (hops < 5) {
					w6 = 19172;
				} else {
					w6 = 21953;
				}
			}
		} else {
			if (hops < 2) {
				if (prod == 0) {
					w6 = 15448;
				} else {
					w6 = 16038;
				}
			} else {
				if (rel_time < 3439) {
					w6 = 18395;
				} else {
					w6 = 16461;
				}
			}
		}
	}
	int w7;
	if (size < 46) {
		if (hops < 3) {
			if (hops < 2) {
				if (cons == 1) {
					w7 = 5418;
				} else {
					w7 = 5532;
				}
			} else {
				if (rel_time < 3117) {
					w7 = 5635;
				} else {
					w7 = 5499;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 3303) {
					w7 = 5804;
				} else {
					w7 = 5562;
				}
			} else {
				if (rel_time < 3303) {
					w7 = 6033;
				} else {
					w7 = 5607;
				}
			}
		}
	} else {
		if (rel_time < 713) {
			if (rel_time < 385) {
				if (hops < 2) {
					w7 = 14973;
				} else {
					w7 = 16002;
				}
			} else {
				if (hops < 2) {
					w7 = 12843;
				} else {
					w7 = 13850;
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 3439) {
					w7 = 12150;
				} else {
					w7 = 11125;
				}
			} else {
				if (rel_time < 3439) {
					w7 = 15813;
				} else {
					w7 = 13981;
				}
			}
		}
	}
	int w8;
	if (size < 46) {
		if (hops < 3) {
			if (hops < 2) {
				if (cons == 3) {
					w8 = 3790;
				} else {
					w8 = 3885;
				}
			} else {
				if (cons == 3) {
					w8 = 3914;
				} else {
					w8 = 4009;
				}
			}
		} else {
			if (hops < 5) {
				if (hops < 4) {
					w8 = 4057;
				} else {
					w8 = 4167;
				}
			} else {
				if (rel_time < 3227) {
					w8 = 4361;
				} else {
					w8 = 4142;
				}
			}
		}
	} else {
		if (rel_time < 713) {
			if (rel_time < 385) {
				if (hops < 5) {
					w8 = 10872;
				} else {
					w8 = 12723;
				}
			} else {
				if (hops < 5) {
					w8 = 9372;
				} else {
					w8 = 11214;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					w8 = 7453;
				} else {
					w8 = 8127;
				}
			} else {
				if (rel_time < 3439) {
					w8 = 10318;
				} else {
					w8 = 8645;
				}
			}
		}
	}
	int w9;
	if (size < 46) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 3005) {
					w9 = 2682;
				} else {
					w9 = 2589;
				}
			} else {
				if (cons == 1) {
					w9 = 2735;
				} else {
					w9 = 2826;
				}
			}
		} else {
			if (hops < 5) {
				if (cons == 1) {
					w9 = 2850;
				} else {
					w9 = 2966;
				}
			} else {
				if (cons == 3) {
					w9 = 3016;
				} else {
					w9 = 3139;
				}
			}
		}
	} else {
		if (rel_time < 713) {
			if (rel_time < 385) {
				if (hops < 2) {
					w9 = 7220;
				} else {
					w9 = 7900;
				}
			} else {
				if (hops < 4) {
					w9 = 6468;
				} else {
					w9 = 7281;
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 3439) {
					w9 = 6042;
				} else {
					w9 = 5397;
				}
			} else {
				if (rel_time < 3439) {
					w9 = 7975;
				} else {
					w9 = 7193;
				}
			}
		}
	}
	int w10;
	if (size < 46) {
		if (hops < 3) {
			if (rel_time < 3303) {
				if (hops < 2) {
					w10 = 1872;
				} else {
					w10 = 1933;
				}
			} else {
				if (cons == 3) {
					w10 = 1666;
				} else {
					w10 = 1874;
				}
			}
		} else {
			if (hops < 4) {
				if (cons == 3) {
					w10 = 1959;
				} else {
					w10 = 2054;
				}
			} else {
				if (rel_time < 3303) {
					w10 = 2084;
				} else {
					w10 = 1807;
				}
			}
		}
	} else {
		if (rel_time < 713) {
			if (rel_time < 385) {
				if (hops < 4) {
					w10 = 5236;
				} else {
					w10 = 5951;
				}
			} else {
				if (hops < 2) {
					w10 = 4239;
				} else {
					w10 = 4835;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w10 = 3545;
				} else {
					w10 = 3938;
				}
			} else {
				if (rel_time < 3439) {
					w10 = 5062;
				} else {
					w10 = 4082;
				}
			}
		}
	}
	int w11;
	if (size < 46) {
		if (hops < 3) {
			if (cons == 1) {
				if (rel_time < 1251) {
					w11 = 1084;
				} else {
					w11 = 1318;
				}
			} else {
				if (rel_time < 2198) {
					w11 = 1326;
				} else {
					w11 = 1444;
				}
			}
		} else {
			if (rel_time < 3117) {
				if (hops < 4) {
					w11 = 1398;
				} else {
					w11 = 1467;
				}
			} else {
				if (cons == 3) {
					w11 = 1275;
				} else {
					w11 = 1489;
				}
			}
		}
	} else {
		if (rel_time < 713) {
			if (rel_time < 385) {
				if (hops < 5) {
					w11 = 3710;
				} else {
					w11 = 4752;
				}
			} else {
				if (hops < 5) {
					w11 = 3196;
				} else {
					w11 = 4216;
				}
			}
		} else {
			if (hops < 5) {
				if (hops < 2) {
					w11 = 2481;
				} else {
					w11 = 2846;
				}
			} else {
				if (rel_time < 3439) {
					w11 = 4064;
				} else {
					w11 = 3811;
				}
			}
		}
	}
	int w12;
	if (size < 46) {
		if (hops < 2) {
			if (cons == 3) {
				if (cons == 1) {
					w12 = 873;
				} else {
					w12 = 959;
				}
			} else {
				if (rel_time < 2531) {
					w12 = 945;
				} else {
					w12 = 992;
				}
			}
		} else {
			if (cons == 3) {
				if (cons == 1) {
					w12 = 936;
				} else {
					w12 = 1029;
				}
			} else {
				if (hops < 4) {
					w12 = 1013;
				} else {
					w12 = 1105;
				}
			}
		}
	} else {
		if (rel_time < 3439) {
			if (prod == 0) {
				if (rel_time < 1169) {
					w12 = 2240;
				} else {
					w12 = -7827;
				}
			} else {
				if (hops < 3) {
					w12 = 16184;
				} else {
					w12 = 12494;
				}
			}
		} else {
			if (hops < 5) {
				if (hops < 4) {
					w12 = 1778;
				} else {
					w12 = 1975;
				}
			} else {
				if (rel_time < 4155) {
					w12 = 2518;
				} else {
					w12 = 2687;
				}
			}
		}
	}
	int w13;
	if (size < 46) {
		if (rel_time < 3005) {
			if (rel_time < 2588) {
				if (rel_time < 2004) {
					w13 = 699;
				} else {
					w13 = 600;
				}
			} else {
				if (rel_time < 2643) {
					w13 = 1088;
				} else {
					w13 = 700;
				}
			}
		} else {
			if (cons == 3) {
				if (rel_time < 3303) {
					w13 = 596;
				} else {
					w13 = 501;
				}
			} else {
				if (rel_time < 3227) {
					w13 = 757;
				} else {
					w13 = 626;
				}
			}
		}
	} else {
		if (rel_time < 385) {
			if (hops < 2) {
				if (rel_time < 308) {
					w13 = 1666;
				} else {
					w13 = 2039;
				}
			} else {
				if (hops < 5) {
					w13 = 2048;
				} else {
					w13 = 2655;
				}
			}
		} else {
			if (hops < 4) {
				if (prod == 0) {
					w13 = 1260;
				} else {
					w13 = 1589;
				}
			} else {
				if (rel_time < 3439) {
					w13 = 2012;
				} else {
					w13 = 1503;
				}
			}
		}
	}
	return (51200 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13) >> 10;
}
