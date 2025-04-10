#include <stdbool.h>

int model(int rel_time, int hops, int size, int prod, int cons)
{
	int w0;
	if (rel_time < 598) {
		if (rel_time < 531) {
			w0 = 192044;
		} else {
			w0 = 169302;
		}
	} else {
		if (size < 141) {
			if (prod == 0) {
				w0 = 139797;
			} else {
				if (rel_time < 1085) {
					w0 = 172683;
				} else {
					w0 = 146664;
				}
			}
		} else {
			w0 = 166044;
		}
	}
	int w1;
	if (rel_time < 547) {
		if (rel_time < 531) {
			w1 = 134511;
		} else {
			w1 = 121834;
		}
	} else {
		if (size < 141) {
			if (prod == 0) {
				if (hops < 3) {
					w1 = 96556;
				} else {
					w1 = 100696;
				}
			} else {
				if (rel_time < 1085) {
					w1 = 120950;
				} else {
					w1 = 102691;
				}
			}
		} else {
			w1 = 115952;
		}
	}
	int w2;
	if (rel_time < 547) {
		if (rel_time < 531) {
			w2 = 94213;
		} else {
			w2 = 85334;
		}
	} else {
		if (size < 141) {
			if (prod == 0) {
				if (hops < 2) {
					w2 = 66769;
				} else {
					w2 = 69805;
				}
			} else {
				if (rel_time < 1085) {
					w2 = 84715;
				} else {
					w2 = 71902;
				}
			}
		} else {
			if (hops < 3) {
				w2 = 79884;
			} else {
				w2 = 84090;
			}
		}
	}
	int w3;
	if (rel_time < 547) {
		if (rel_time < 531) {
			w3 = 65989;
		} else {
			w3 = 59769;
		}
	} else {
		if (size < 141) {
			if (prod == 0) {
				if (hops < 3) {
					w3 = 47231;
				} else {
					w3 = 49585;
				}
			} else {
				if (rel_time < 1085) {
					w3 = 59336;
				} else {
					w3 = 50344;
				}
			}
		} else {
			if (hops < 2) {
				w3 = 55129;
			} else {
				w3 = 58180;
			}
		}
	}
	int w4;
	if (rel_time < 547) {
		if (rel_time < 531) {
			if (hops < 3) {
				w4 = 44938;
			} else {
				w4 = 48989;
			}
		} else {
			if (hops < 2) {
				w4 = 39615;
			} else {
				w4 = 43201;
			}
		}
	} else {
		if (size < 141) {
			if (prod == 0) {
				if (hops < 4) {
					w4 = 33282;
				} else {
					w4 = 36088;
				}
			} else {
				if (rel_time < 1085) {
					w4 = 41560;
				} else {
					w4 = 35249;
				}
			}
		} else {
			if (hops < 3) {
				w4 = 39071;
			} else {
				w4 = 41470;
			}
		}
	}
	int w5;
	if (rel_time < 547) {
		if (rel_time < 531) {
			if (hops < 2) {
				w5 = 30653;
			} else {
				w5 = 33705;
			}
		} else {
			if (hops < 3) {
				w5 = 28314;
			} else {
				w5 = 31472;
			}
		}
	} else {
		if (size < 141) {
			if (hops < 2) {
				if (rel_time < 1085) {
					w5 = 24399;
				} else {
					w5 = 22523;
				}
			} else {
				if (prod == 0) {
					w5 = 24188;
				} else {
					w5 = 27380;
				}
			}
		} else {
			if (hops < 2) {
				w5 = 26896;
			} else {
				w5 = 28639;
			}
		}
	}
	int w6;
	if (rel_time < 547) {
		if (rel_time < 531) {
			if (hops < 3) {
				w6 = 21972;
			} else {
				w6 = 24295;
			}
		} else {
			if (hops < 3) {
				w6 = 19837;
			} else {
				w6 = 22072;
			}
		}
	} else {
		if (size < 141) {
			if (hops < 3) {
				if (rel_time < 1085) {
					w6 = 17890;
				} else {
					w6 = 16094;
				}
			} else {
				if (prod == 0) {
					w6 = 17206;
				} else {
					w6 = 20495;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 598) {
					w6 = 18510;
				} else {
					w6 = 19592;
				}
			} else {
				w6 = 21700;
			}
		}
	}
	int w7;
	if (rel_time < 547) {
		if (hops < 4) {
			if (rel_time < 531) {
				if (hops < 2) {
					w7 = 14914;
				} else {
					w7 = 16278;
				}
			} else {
				if (hops < 2) {
					w7 = 13378;
				} else {
					w7 = 14649;
				}
			}
		} else {
			w7 = 17612;
		}
	} else {
		if (size < 141) {
			if (prod == 0) {
				if (hops < 2) {
					w7 = 10827;
				} else {
					w7 = 11889;
				}
			} else {
				if (rel_time < 1085) {
					w7 = 15623;
				} else {
					w7 = 11755;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 598) {
					w7 = 12422;
				} else {
					w7 = 13330;
				}
			} else {
				if (hops < 4) {
					w7 = 13900;
				} else {
					w7 = 15218;
				}
			}
		}
	}
	int w8;
	if (rel_time < 547) {
		if (hops < 4) {
			if (rel_time < 531) {
				if (hops < 2) {
					w8 = 10454;
				} else {
					w8 = 11410;
				}
			} else {
				if (hops < 2) {
					w8 = 9379;
				} else {
					w8 = 10266;
				}
			}
		} else {
			w8 = 12365;
		}
	} else {
		if (hops < 4) {
			if (size < 141) {
				if (hops < 2) {
					w8 = 7669;
				} else {
					w8 = 8562;
				}
			} else {
				if (hops < 2) {
					w8 = 9151;
				} else {
					w8 = 9734;
				}
			}
		} else {
			if (prod == 0) {
				if (size < 141) {
					w8 = 9337;
				} else {
					w8 = 10672;
				}
			} else {
				if (rel_time < 1085) {
					w8 = 13768;
				} else {
					w8 = 10927;
				}
			}
		}
	}
	int w9;
	if (rel_time < 547) {
		if (hops < 4) {
			if (rel_time < 531) {
				if (hops < 2) {
					w9 = 7328;
				} else {
					w9 = 7997;
				}
			} else {
				if (hops < 2) {
					w9 = 6575;
				} else {
					w9 = 7195;
				}
			}
		} else {
			w9 = 8681;
		}
	} else {
		if (hops < 4) {
			if (size < 141) {
				if (prod == 0) {
					w9 = 5407;
				} else {
					w9 = 6229;
				}
			} else {
				if (rel_time < 598) {
					w9 = 6191;
				} else {
					w9 = 6804;
				}
			}
		} else {
			if (prod == 0) {
				if (size < 141) {
					w9 = 6542;
				} else {
					w9 = 7484;
				}
			} else {
				if (rel_time < 1085) {
					w9 = 9689;
				} else {
					w9 = 7666;
				}
			}
		}
	}
	int w10;
	if (rel_time < 1150) {
		if (prod == 1) {
			if (prod == 0) {
				if (rel_time < 531) {
					w10 = 5529;
				} else {
					w10 = 4622;
				}
			} else {
				if (hops < 2) {
					w10 = 5216;
				} else {
					w10 = 6948;
				}
			}
		} else {
			if (hops < 2) {
				w10 = 2692;
			} else {
				if (hops < 4) {
					w10 = 3554;
				} else {
					w10 = 4572;
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 4) {
				if (hops < 2) {
					w10 = 3613;
				} else {
					w10 = 3959;
				}
			} else {
				if (prod == 0) {
					w10 = 4569;
				} else {
					w10 = 5379;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w10 = 4537;
				} else {
					w10 = 4866;
				}
			} else {
				if (hops < 4) {
					w10 = 5055;
				} else {
					w10 = 5603;
				}
			}
		}
	}
	int w11;
	if (hops < 3) {
		if (rel_time < 547) {
			if (hops < 2) {
				w11 = 3369;
			} else {
				w11 = 3688;
			}
		} else {
			if (size < 141) {
				if (rel_time < 668) {
					w11 = 2055;
				} else {
					w11 = 2773;
				}
			} else {
				if (rel_time < 598) {
					w11 = 2808;
				} else {
					w11 = 3283;
				}
			}
		}
	} else {
		if (rel_time < 1085) {
			if (rel_time < 668) {
				if (rel_time < 547) {
					w11 = 4163;
				} else {
					w11 = 3079;
				}
			} else {
				if (hops < 4) {
					w11 = 5561;
				} else {
					w11 = 4759;
				}
			}
		} else {
			if (size < 141) {
				if (hops < 4) {
					w11 = 2851;
				} else {
					w11 = 3409;
				}
			} else {
				if (hops < 4) {
					w11 = 3542;
				} else {
					w11 = 3948;
				}
			}
		}
	}
	int w12;
	if (rel_time < 1085) {
		if (rel_time < 668) {
			if (rel_time < 547) {
				if (hops < 4) {
					w12 = 2511;
				} else {
					w12 = 3342;
				}
			} else {
				if (rel_time < 598) {
					w12 = 2097;
				} else {
					w12 = 1593;
				}
			}
		} else {
			if (hops < 2) {
				w12 = 2828;
			} else {
				w12 = 3656;
			}
		}
	} else {
		if (size < 141) {
			if (hops < 4) {
				if (prod == 0) {
					w12 = 1942;
				} else {
					w12 = 1582;
				}
			} else {
				if (prod == 0) {
					w12 = 2187;
				} else {
					w12 = 2756;
				}
			}
		} else {
			if (hops < 2) {
				w12 = 2212;
			} else {
				if (hops < 4) {
					w12 = 2465;
				} else {
					w12 = 2771;
				}
			}
		}
	}
	int w13;
	if (hops < 2) {
		if (prod == 0) {
			if (size < 141) {
				if (rel_time < 1100) {
					w13 = 1106;
				} else {
					w13 = 1381;
				}
			} else {
				if (rel_time < 531) {
					w13 = 1724;
				} else {
					w13 = 1465;
				}
			}
		} else {
			if (rel_time < 1085) {
				w13 = 1983;
			} else {
				if (rel_time < 2326) {
					w13 = 714;
				} else {
					w13 = 613;
				}
			}
		}
	} else {
		if (rel_time < 1085) {
			if (rel_time < 668) {
				if (rel_time < 531) {
					w13 = 2198;
				} else {
					w13 = 1595;
				}
			} else {
				if (hops < 4) {
					w13 = 2618;
				} else {
					w13 = 2266;
				}
			}
		} else {
			if (size < 141) {
				if (hops < 4) {
					w13 = 1382;
				} else {
					w13 = 1674;
				}
			} else {
				if (hops < 4) {
					w13 = 1726;
				} else {
					w13 = 1945;
				}
			}
		}
	}
	int w14;
	if (hops < 3) {
		if (rel_time < 547) {
			if (hops < 2) {
				w14 = 1178;
			} else {
				if (rel_time < 531) {
					w14 = 1339;
				} else {
					w14 = 1210;
				}
			}
		} else {
			if (rel_time < 668) {
				if (rel_time < 598) {
					w14 = 886;
				} else {
					w14 = 582;
				}
			} else {
				if (rel_time < 1085) {
					w14 = 1532;
				} else {
					w14 = 921;
				}
			}
		}
	} else {
		if (prod == 0) {
			if (size < 141) {
				if (rel_time < 547) {
					w14 = 1331;
				} else {
					w14 = 914;
				}
			} else {
				if (rel_time < 531) {
					w14 = 1705;
				} else {
					w14 = 1282;
				}
			}
		} else {
			if (rel_time < 1085) {
				if (hops < 4) {
					w14 = 2034;
				} else {
					w14 = 1595;
				}
			} else {
				w14 = 1436;
			}
		}
	}
	int w15;
	if (hops < 2) {
		if (prod == 0) {
			if (size < 141) {
				if (rel_time < 1100) {
					w15 = 517;
				} else {
					w15 = 691;
				}
			} else {
				if (rel_time < 598) {
					w15 = 712;
				} else {
					w15 = 835;
				}
			}
		} else {
			if (rel_time < 1085) {
				w15 = 933;
			} else {
				if (rel_time < 2326) {
					w15 = 230;
				} else {
					w15 = 153;
				}
			}
		}
	} else {
		if (rel_time < 1085) {
			if (rel_time < 668) {
				if (rel_time < 531) {
					w15 = 1081;
				} else {
					w15 = 800;
				}
			} else {
				if (hops < 4) {
					w15 = 1316;
				} else {
					w15 = 1122;
				}
			}
		} else {
			if (size < 141) {
				if (hops < 4) {
					w15 = 670;
				} else {
					w15 = 845;
				}
			} else {
				if (rel_time < 1654) {
					w15 = 1038;
				} else {
					w15 = 892;
				}
			}
		}
	}
	int w16;
	if (hops < 3) {
		if (prod == 0) {
			if (rel_time < 547) {
				w16 = 630;
			} else {
				if (rel_time < 1100) {
					w16 = 310;
				} else {
					w16 = 540;
				}
			}
		} else {
			if (rel_time < 1085) {
				if (hops < 2) {
					w16 = 654;
				} else {
					w16 = 841;
				}
			} else {
				if (hops < 2) {
					w16 = 115;
				} else {
					w16 = 278;
				}
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 598) {
				if (rel_time < 531) {
					w16 = 873;
				} else {
					w16 = 682;
				}
			} else {
				if (hops < 4) {
					w16 = 404;
				} else {
					w16 = 610;
				}
			}
		} else {
			if (rel_time < 1085) {
				if (hops < 4) {
					w16 = 1036;
				} else {
					w16 = 790;
				}
			} else {
				if (rel_time < 9937) {
					w16 = 809;
				} else {
					w16 = 664;
				}
			}
		}
	}
	return (51200 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16) >> 10;
}
