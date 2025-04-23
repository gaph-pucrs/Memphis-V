#include <stdbool.h>

float model(int rel_time, int hops, int size, int prod, int cons)
{
	float w0;
	if (rel_time < 598) {
		if (rel_time < 531) {
			w0 = 187.54288;
		} else {
			w0 = 165.33353;
		}
	} else {
		if (size < 141) {
			if (prod == 0) {
				w0 = 136.5208;
			} else {
				if (rel_time < 1085) {
					w0 = 168.63579;
				} else {
					w0 = 143.22696;
				}
			}
		} else {
			w0 = 162.1525;
		}
	}
	float w1;
	if (rel_time < 547) {
		if (rel_time < 531) {
			w1 = 131.35803;
		} else {
			w1 = 118.97803;
		}
	} else {
		if (size < 141) {
			if (prod == 0) {
				if (hops < 3) {
					w1 = 94.29323;
				} else {
					w1 = 98.336044;
				}
			} else {
				if (rel_time < 1085) {
					w1 = 118.11522;
				} else {
					w1 = 100.28397;
				}
			}
		} else {
			w1 = 113.23428;
		}
	}
	float w2;
	if (rel_time < 547) {
		if (rel_time < 531) {
			w2 = 92.00528;
		} else {
			w2 = 83.33413;
		}
	} else {
		if (size < 141) {
			if (prod == 0) {
				if (hops < 2) {
					w2 = 65.20365;
				} else {
					w2 = 68.169426;
				}
			} else {
				if (rel_time < 1085) {
					w2 = 82.7298;
				} else {
					w2 = 70.21636;
				}
			}
		} else {
			if (hops < 3) {
				w2 = 78.01176;
			} else {
				w2 = 82.11908;
			}
		}
	}
	float w3;
	if (rel_time < 547) {
		if (rel_time < 531) {
			w3 = 64.44198;
		} else {
			w3 = 58.36856;
		}
	} else {
		if (size < 141) {
			if (prod == 0) {
				if (hops < 3) {
					w3 = 46.12414;
				} else {
					w3 = 48.42316;
				}
			} else {
				if (rel_time < 1085) {
					w3 = 57.94528;
				} else {
					w3 = 49.163765;
				}
			}
		} else {
			if (hops < 2) {
				w3 = 53.836483;
			} else {
				w3 = 56.816257;
			}
		}
	}
	float w4;
	if (rel_time < 547) {
		if (rel_time < 531) {
			if (hops < 3) {
				w4 = 43.884674;
			} else {
				w4 = 47.84074;
			}
		} else {
			if (hops < 2) {
				w4 = 38.68613;
			} else {
				w4 = 42.188934;
			}
		}
	} else {
		if (size < 141) {
			if (prod == 0) {
				if (hops < 4) {
					w4 = 32.502228;
				} else {
					w4 = 35.241722;
				}
			} else {
				if (rel_time < 1085) {
					w4 = 40.585804;
				} else {
					w4 = 34.423256;
				}
			}
		} else {
			if (hops < 3) {
				w4 = 38.155262;
			} else {
				w4 = 40.497772;
			}
		}
	}
	float w5;
	if (rel_time < 547) {
		if (rel_time < 531) {
			if (hops < 2) {
				w5 = 29.93412;
			} else {
				w5 = 32.91499;
			}
		} else {
			if (hops < 3) {
				w5 = 27.65071;
			} else {
				w5 = 30.733984;
			}
		}
	} else {
		if (size < 141) {
			if (hops < 2) {
				if (rel_time < 1085) {
					w5 = 23.826786;
				} else {
					w5 = 21.995405;
				}
			} else {
				if (prod == 0) {
					w5 = 23.6213;
				} else {
					w5 = 26.738415;
				}
			}
		} else {
			if (hops < 2) {
				w5 = 26.265469;
			} else {
				w5 = 27.967503;
			}
		}
	}
	float w6;
	if (rel_time < 547) {
		if (rel_time < 531) {
			if (hops < 3) {
				w6 = 21.457066;
			} else {
				w6 = 23.725662;
			}
		} else {
			if (hops < 3) {
				w6 = 19.37219;
			} else {
				w6 = 21.554758;
			}
		}
	} else {
		if (size < 141) {
			if (hops < 3) {
				if (rel_time < 1085) {
					w6 = 17.470434;
				} else {
					w6 = 15.716352;
				}
			} else {
				if (prod == 0) {
					w6 = 16.802305;
				} else {
					w6 = 20.014627;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 598) {
					w6 = 18.076431;
				} else {
					w6 = 19.132551;
				}
			} else {
				w6 = 21.191122;
			}
		}
	}
	float w7;
	if (rel_time < 547) {
		if (hops < 4) {
			if (rel_time < 531) {
				if (hops < 2) {
					w7 = 14.564778;
				} else {
					w7 = 15.8965845;
				}
			} else {
				if (hops < 2) {
					w7 = 13.064932;
				} else {
					w7 = 14.30601;
				}
			}
		} else {
			w7 = 17.199009;
		}
	} else {
		if (size < 141) {
			if (prod == 0) {
				if (hops < 2) {
					w7 = 10.572847;
				} else {
					w7 = 11.610539;
				}
			} else {
				if (rel_time < 1085) {
					w7 = 15.256922;
				} else {
					w7 = 11.479507;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 598) {
					w7 = 12.1306305;
				} else {
					w7 = 13.017505;
				}
			} else {
				if (hops < 4) {
					w7 = 13.574322;
				} else {
					w7 = 14.860843;
				}
			}
		}
	}
	float w8;
	if (rel_time < 547) {
		if (hops < 4) {
			if (rel_time < 531) {
				if (hops < 2) {
					w8 = 10.208963;
				} else {
					w8 = 11.142097;
				}
			} else {
				if (hops < 2) {
					w8 = 9.159397;
				} else {
					w8 = 10.025833;
				}
			}
		} else {
			w8 = 12.0748825;
		}
	} else {
		if (hops < 4) {
			if (size < 141) {
				if (hops < 2) {
					w8 = 7.4890804;
				} else {
					w8 = 8.361315;
				}
			} else {
				if (hops < 2) {
					w8 = 8.936821;
				} else {
					w8 = 9.5058365;
				}
			}
		} else {
			if (prod == 0) {
				if (size < 141) {
					w8 = 9.118194;
				} else {
					w8 = 10.421562;
				}
			} else {
				if (rel_time < 1085) {
					w8 = 13.445378;
				} else {
					w8 = 10.67137;
				}
			}
		}
	}
	float w9;
	if (rel_time < 547) {
		if (hops < 4) {
			if (rel_time < 531) {
				if (hops < 2) {
					w9 = 7.1558084;
				} else {
					w9 = 7.809631;
				}
			} else {
				if (hops < 2) {
					w9 = 6.421349;
				} else {
					w9 = 7.026238;
				}
			}
		} else {
			w9 = 8.477398;
		}
	} else {
		if (hops < 4) {
			if (size < 141) {
				if (prod == 0) {
					w9 = 5.280341;
				} else {
					w9 = 6.082789;
				}
			} else {
				if (rel_time < 598) {
					w9 = 6.0461974;
				} else {
					w9 = 6.6440783;
				}
			}
		} else {
			if (prod == 0) {
				if (size < 141) {
					w9 = 6.3889236;
				} else {
					w9 = 7.3083954;
				}
			} else {
				if (rel_time < 1085) {
					w9 = 9.461563;
				} else {
					w9 = 7.4867153;
				}
			}
		}
	}
	float w10;
	if (rel_time < 1150) {
		if (prod == 1) {
			if (prod == 0) {
				if (rel_time < 531) {
					w10 = 5.399181;
				} else {
					w10 = 4.513744;
				}
			} else {
				if (hops < 2) {
					w10 = 5.0938873;
				} else {
					w10 = 6.7853847;
				}
			}
		} else {
			if (hops < 2) {
				w10 = 2.6288838;
			} else {
				if (hops < 4) {
					w10 = 3.4710014;
				} else {
					w10 = 4.4644675;
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 4) {
				if (hops < 2) {
					w10 = 3.5285618;
				} else {
					w10 = 3.8657615;
				}
			} else {
				if (prod == 0) {
					w10 = 4.461916;
				} else {
					w10 = 5.2524657;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w10 = 4.4303923;
				} else {
					w10 = 4.7517605;
				}
			} else {
				if (hops < 4) {
					w10 = 4.93666;
				} else {
					w10 = 5.4718666;
				}
			}
		}
	}
	float w11;
	if (hops < 3) {
		if (rel_time < 547) {
			if (hops < 2) {
				w11 = 3.2904978;
			} else {
				w11 = 3.6015112;
			}
		} else {
			if (size < 141) {
				if (rel_time < 668) {
					w11 = 2.0072694;
				} else {
					w11 = 2.7084336;
				}
			} else {
				if (rel_time < 598) {
					w11 = 2.7420242;
				} else {
					w11 = 3.2064373;
				}
			}
		}
	} else {
		if (rel_time < 1085) {
			if (rel_time < 668) {
				if (rel_time < 547) {
					w11 = 4.065678;
				} else {
					w11 = 3.0070832;
				}
			} else {
				if (hops < 4) {
					w11 = 5.4309726;
				} else {
					w11 = 4.6476526;
				}
			}
		} else {
			if (size < 141) {
				if (hops < 4) {
					w11 = 2.784137;
				} else {
					w11 = 3.3287961;
				}
			} else {
				if (hops < 4) {
					w11 = 3.4591296;
				} else {
					w11 = 3.8557343;
				}
			}
		}
	}
	float w12;
	if (rel_time < 1085) {
		if (rel_time < 668) {
			if (rel_time < 547) {
				if (hops < 4) {
					w12 = 2.4520993;
				} else {
					w12 = 3.2637408;
				}
			} else {
				if (rel_time < 598) {
					w12 = 2.048233;
				} else {
					w12 = 1.5554457;
				}
			}
		} else {
			if (hops < 2) {
				w12 = 2.7620277;
			} else {
				w12 = 3.5699682;
			}
		}
	} else {
		if (size < 141) {
			if (hops < 4) {
				if (prod == 0) {
					w12 = 1.8967426;
				} else {
					w12 = 1.5444937;
				}
			} else {
				if (prod == 0) {
					w12 = 2.135787;
				} else {
					w12 = 2.691573;
				}
			}
		} else {
			if (hops < 2) {
				w12 = 2.1606078;
			} else {
				if (hops < 4) {
					w12 = 2.406868;
				} else {
					w12 = 2.706117;
				}
			}
		}
	}
	float w13;
	if (hops < 2) {
		if (prod == 0) {
			if (size < 141) {
				if (rel_time < 1100) {
					w13 = 1.0805079;
				} else {
					w13 = 1.3485223;
				}
			} else {
				if (rel_time < 531) {
					w13 = 1.6836267;
				} else {
					w13 = 1.4303117;
				}
			}
		} else {
			if (rel_time < 1085) {
				w13 = 1.9365473;
			} else {
				if (rel_time < 2326) {
					w13 = 0.69736695;
				} else {
					w13 = 0.59846115;
				}
			}
		}
	} else {
		if (rel_time < 1085) {
			if (rel_time < 668) {
				if (rel_time < 531) {
					w13 = 2.1466658;
				} else {
					w13 = 1.557897;
				}
			} else {
				if (hops < 4) {
					w13 = 2.556682;
				} else {
					w13 = 2.212811;
				}
			}
		} else {
			if (size < 141) {
				if (hops < 4) {
					w13 = 1.349425;
				} else {
					w13 = 1.634995;
				}
			} else {
				if (hops < 4) {
					w13 = 1.6857868;
				} else {
					w13 = 1.8992628;
				}
			}
		}
	}
	float w14;
	if (hops < 3) {
		if (rel_time < 547) {
			if (hops < 2) {
				w14 = 1.1506243;
			} else {
				if (rel_time < 531) {
					w14 = 1.307545;
				} else {
					w14 = 1.1817057;
				}
			}
		} else {
			if (rel_time < 668) {
				if (rel_time < 598) {
					w14 = 0.86561334;
				} else {
					w14 = 0.56869525;
				}
			} else {
				if (rel_time < 1085) {
					w14 = 1.4956526;
				} else {
					w14 = 0.8995351;
				}
			}
		}
	} else {
		if (prod == 0) {
			if (size < 141) {
				if (rel_time < 547) {
					w14 = 1.2997468;
				} else {
					w14 = 0.8922403;
				}
			} else {
				if (rel_time < 531) {
					w14 = 1.6650555;
				} else {
					w14 = 1.2523861;
				}
			}
		} else {
			if (rel_time < 1085) {
				if (hops < 4) {
					w14 = 1.9863492;
				} else {
					w14 = 1.5571579;
				}
			} else {
				w14 = 1.401926;
			}
		}
	}
	float w15;
	if (hops < 2) {
		if (prod == 0) {
			if (size < 141) {
				if (rel_time < 1100) {
					w15 = 0.50521666;
				} else {
					w15 = 0.6745866;
				}
			} else {
				if (rel_time < 598) {
					w15 = 0.6954576;
				} else {
					w15 = 0.81535095;
				}
			}
		} else {
			if (rel_time < 1085) {
				w15 = 0.9107758;
			} else {
				if (rel_time < 2326) {
					w15 = 0.22420429;
				} else {
					w15 = 0.14988543;
				}
			}
		}
	} else {
		if (rel_time < 1085) {
			if (rel_time < 668) {
				if (rel_time < 531) {
					w15 = 1.055215;
				} else {
					w15 = 0.7815159;
				}
			} else {
				if (hops < 4) {
					w15 = 1.2848482;
				} else {
					w15 = 1.0957863;
				}
			}
		} else {
			if (size < 141) {
				if (hops < 4) {
					w15 = 0.65393317;
				} else {
					w15 = 0.82556945;
				}
			} else {
				if (rel_time < 1654) {
					w15 = 1.0134549;
				} else {
					w15 = 0.8713961;
				}
			}
		}
	}
	float w16;
	if (hops < 3) {
		if (prod == 0) {
			if (rel_time < 547) {
				w16 = 0.61528283;
			} else {
				if (rel_time < 1100) {
					w16 = 0.30226365;
				} else {
					w16 = 0.52714187;
				}
			}
		} else {
			if (rel_time < 1085) {
				if (hops < 2) {
					w16 = 0.63857687;
				} else {
					w16 = 0.8209375;
				}
			} else {
				if (hops < 2) {
					w16 = 0.111972004;
				} else {
					w16 = 0.27131024;
				}
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 598) {
				if (rel_time < 531) {
					w16 = 0.8527335;
				} else {
					w16 = 0.6661126;
				}
			} else {
				if (hops < 4) {
					w16 = 0.39448032;
				} else {
					w16 = 0.5957473;
				}
			}
		} else {
			if (rel_time < 1085) {
				if (hops < 4) {
					w16 = 1.0114095;
				} else {
					w16 = 0.7711155;
				}
			} else {
				if (rel_time < 9937) {
					w16 = 0.7896976;
				} else {
					w16 = 0.64817345;
				}
			}
		}
	}
	return (50.0 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16);
}
