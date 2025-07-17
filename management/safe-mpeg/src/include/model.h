#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int model(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 133) {
		if (rel_time < 1142) {
			w0 = 56316;
		} else {
			if (prod != 0) {
				w0 = 45134;
			} else {
				w0 = 48179;
			}
		}
	} else {
		w0 = 60155;
	}
	int w1;
	if (size < 133) {
		if (rel_time < 1142) {
			w1 = 39484;
		} else {
			if (prod != 0) {
				w1 = 31598;
			} else {
				w1 = 33734;
			}
		}
	} else {
		w1 = 42119;
	}
	int w2;
	if (size < 133) {
		if (rel_time < 1142) {
			w2 = 27682;
		} else {
			if (prod != 0) {
				if (hops < 3) {
					w2 = 21788;
				} else {
					w2 = 22837;
				}
			} else {
				w2 = 23619;
			}
		}
	} else {
		w2 = 29490;
	}
	int w3;
	if (size < 133) {
		if (rel_time < 1142) {
			w3 = 19408;
		} else {
			if (prod != 0) {
				if (hops < 2) {
					w3 = 15046;
				} else {
					w3 = 15804;
				}
			} else {
				if (hops < 3) {
					w3 = 16197;
				} else {
					w3 = 17225;
				}
			}
		}
	} else {
		w3 = 20648;
	}
	int w4;
	if (size < 133) {
		if (rel_time < 1142) {
			w4 = 13607;
		} else {
			if (prod != 0) {
				if (hops < 3) {
					w4 = 10655;
				} else {
					w4 = 11256;
				}
			} else {
				if (hops < 2) {
					w4 = 11097;
				} else {
					w4 = 11853;
				}
			}
		}
	} else {
		if (hops < 3) {
			w4 = 14143;
		} else {
			w4 = 15164;
		}
	}
	int w5;
	if (size < 133) {
		if (rel_time < 1142) {
			w5 = 9540;
		} else {
			if (prod != 0) {
				if (hops < 4) {
					if (hops < 2) {
						w5 = 7341;
					} else {
						w5 = 7668;
					}
				} else {
					w5 = 8223;
				}
			} else {
				if (rel_time < 11669) {
					if (rel_time < 1727) {
						w5 = 6739;
					} else {
						if (rel_time < 2312) {
							w5 = 9484;
						} else {
							w5 = 8183;
						}
					}
				} else {
					w5 = 6721;
				}
			}
		}
	} else {
		if (hops < 2) {
			w5 = 9714;
		} else {
			w5 = 10444;
		}
	}
	int w6;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 2) {
				w6 = 6089;
			} else {
				w6 = 7055;
			}
		} else {
			if (hops < 4) {
				if (prod != 0) {
					if (hops < 2) {
						w6 = 5141;
					} else {
						w6 = 5369;
					}
				} else {
					if (rel_time < 11669) {
						if (rel_time < 11085) {
							w6 = 5558;
						} else {
							w6 = 6928;
						}
					} else {
						w6 = 4632;
					}
				}
			} else {
				if (prod != 0) {
					w6 = 5763;
				} else {
					w6 = 6407;
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 557) {
				w6 = 5757;
			} else {
				w6 = 6967;
			}
		} else {
			w6 = 7496;
		}
	}
	int w7;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 3) {
				w7 = 4417;
			} else {
				w7 = 5247;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 11801) {
						w7 = 3634;
					} else {
						w7 = 2958;
					}
				} else {
					if (prod != 0) {
						w7 = 3732;
					} else {
						if (rel_time < 1727) {
							w7 = 2960;
						} else {
							w7 = 4014;
						}
					}
				}
			} else {
				if (prod != 0) {
					w7 = 3878;
				} else {
					if (rel_time < 1727) {
						w7 = 3364;
					} else {
						if (rel_time < 11221) {
							w7 = 4428;
						} else {
							w7 = 3491;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 624) {
			w7 = 4316;
		} else {
			if (hops < 2) {
				w7 = 4799;
			} else {
				if (hops < 4) {
					w7 = 5117;
				} else {
					w7 = 5660;
				}
			}
		}
	}
	int w8;
	if (size < 133) {
		if (rel_time < 1142) {
			if (rel_time < 695) {
				if (hops < 3) {
					w8 = 2883;
				} else {
					w8 = 3466;
				}
			} else {
				w8 = 3691;
			}
		} else {
			if (hops < 4) {
				if (prod != 0) {
					if (hops < 2) {
						w8 = 2510;
					} else {
						w8 = 2621;
					}
				} else {
					if (rel_time < 1727) {
						if (hops < 2) {
							w8 = 1645;
						} else {
							w8 = 2208;
						}
					} else {
						if (rel_time < 2312) {
							w8 = 3752;
						} else {
							w8 = 2728;
						}
					}
				}
			} else {
				if (prod != 0) {
					w8 = 2879;
				} else {
					w8 = 3205;
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 624) {
				w8 = 2969;
			} else {
				if (rel_time < 10526) {
					if (hops < 2) {
						w8 = 3391;
					} else {
						w8 = 3612;
					}
				} else {
					w8 = 2950;
				}
			}
		} else {
			w8 = 3932;
		}
	}
	int w9;
	if (size < 133) {
		if (rel_time < 1142) {
			if (hops < 2) {
				w9 = 2036;
			} else {
				if (hops < 4) {
					w9 = 2382;
				} else {
					w9 = 2931;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 11801) {
					if (rel_time < 11216) {
						if (rel_time < 10631) {
							w9 = 1827;
						} else {
							w9 = 1353;
						}
					} else {
						if (rel_time < 11669) {
							w9 = 2831;
						} else {
							w9 = 1790;
						}
					}
				} else {
					w9 = 1324;
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						w9 = 1843;
					} else {
						w9 = 2017;
					}
				} else {
					if (rel_time < 2897) {
						if (rel_time < 2312) {
							w9 = 2295;
						} else {
							w9 = 794;
						}
					} else {
						if (rel_time < 3030) {
							w9 = 3457;
						} else {
							w9 = 2144;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 557) {
			w9 = 1913;
		} else {
			if (hops < 3) {
				if (rel_time < 10526) {
					if (rel_time < 9941) {
						if (rel_time < 9356) {
							w9 = 2411;
						} else {
							w9 = 1893;
						}
					} else {
						w9 = 2823;
					}
				} else {
					w9 = 2017;
				}
			} else {
				if (hops < 4) {
					w9 = 2547;
				} else {
					w9 = 2796;
				}
			}
		}
	}
	int w10;
	if (size < 133) {
		if (hops < 2) {
			if (rel_time < 1142) {
				if (rel_time < 695) {
					w10 = 1324;
				} else {
					w10 = 1631;
				}
			} else {
				if (rel_time < 2897) {
					if (rel_time < 2443) {
						if (rel_time < 1859) {
							w10 = 1111;
						} else {
							w10 = 1458;
						}
					} else {
						w10 = -94;
					}
				} else {
					if (rel_time < 3482) {
						if (rel_time < 3028) {
							w10 = 1201;
						} else {
							w10 = 2603;
						}
					} else {
						if (rel_time < 4066) {
							w10 = 794;
						} else {
							w10 = 1246;
						}
					}
				}
			}
		} else {
			if (rel_time < 1142) {
				if (rel_time < 695) {
					w10 = 1587;
				} else {
					w10 = 2039;
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						w10 = 1290;
					} else {
						w10 = 1414;
					}
				} else {
					if (rel_time < 2897) {
						if (rel_time < 2312) {
							w10 = 1592;
						} else {
							w10 = 340;
						}
					} else {
						if (rel_time < 3482) {
							w10 = 2626;
						} else {
							w10 = 1443;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 624) {
				w10 = 1295;
			} else {
				if (rel_time < 1206) {
					w10 = 2010;
				} else {
					if (rel_time < 1790) {
						w10 = 1129;
					} else {
						if (rel_time < 2332) {
							w10 = 2051;
						} else {
							w10 = 1612;
						}
					}
				}
			}
		} else {
			if (rel_time < 557) {
				w10 = 1423;
			} else {
				if (hops < 4) {
					w10 = 1773;
				} else {
					if (rel_time < 10563) {
						w10 = 1987;
					} else {
						w10 = 1348;
					}
				}
			}
		}
	}
	int w11;
	if (size < 133) {
		if (hops < 4) {
			if (rel_time < 11801) {
				if (rel_time < 11216) {
					if (rel_time < 10631) {
						if (rel_time < 9983) {
							w11 = 897;
						} else {
							w11 = 1309;
						}
					} else {
						if (prod != 0) {
							w11 = 956;
						} else {
							w11 = -274;
						}
					}
				} else {
					if (rel_time < 11669) {
						w11 = 1701;
					} else {
						w11 = 889;
					}
				}
			} else {
				w11 = 574;
			}
		} else {
			if (rel_time < 1142) {
				w11 = 1576;
			} else {
				if (rel_time < 11741) {
					if (rel_time < 11153) {
						if (rel_time < 10568) {
							w11 = 1063;
						} else {
							w11 = 548;
						}
					} else {
						if (rel_time < 11221) {
							w11 = 2378;
						} else {
							w11 = 981;
						}
					}
				} else {
					w11 = 442;
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 624) {
				w11 = 911;
			} else {
				if (rel_time < 10521) {
					if (rel_time < 9937) {
						if (rel_time < 9352) {
							w11 = 1166;
						} else {
							w11 = 802;
						}
					} else {
						w11 = 1461;
					}
				} else {
					w11 = 863;
				}
			}
		} else {
			if (rel_time < 557) {
				w11 = 1005;
			} else {
				if (rel_time < 10563) {
					if (rel_time < 9978) {
						if (rel_time < 9393) {
							w11 = 1281;
						} else {
							w11 = 881;
						}
					} else {
						w11 = 1641;
					}
				} else {
					w11 = 1013;
				}
			}
		}
	}
	int w12;
	if (size < 133) {
		if (hops < 2) {
			if (rel_time < 9395) {
				if (rel_time < 8877) {
					if (rel_time < 8292) {
						if (rel_time < 7707) {
							w12 = 583;
						} else {
							w12 = 995;
						}
					} else {
						if (rel_time < 8745) {
							w12 = -734;
						} else {
							w12 = 549;
						}
					}
				} else {
					if (rel_time < 9330) {
						w12 = 1963;
					} else {
						w12 = 585;
					}
				}
			} else {
				if (rel_time < 9915) {
					if (rel_time < 9462) {
						w12 = 518;
					} else {
						w12 = -741;
					}
				} else {
					if (rel_time < 10500) {
						if (prod != 0) {
							w12 = 524;
						} else {
							w12 = 1831;
						}
					} else {
						if (rel_time < 11085) {
							w12 = 246;
						} else {
							w12 = 657;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 695) {
					if (hops < 3) {
						w12 = 708;
					} else {
						w12 = 887;
					}
				} else {
					if (prod != 1) {
						if (rel_time < 11085) {
							w12 = 603;
						} else {
							w12 = 683;
						}
					} else {
						if (hops < 4) {
							w12 = 652;
						} else {
							w12 = 708;
						}
					}
				}
			} else {
				if (rel_time < 10500) {
					if (rel_time < 9915) {
						if (rel_time < 9330) {
							w12 = 824;
						} else {
							w12 = -578;
						}
					} else {
						w12 = 2055;
					}
				} else {
					if (rel_time < 11085) {
						if (hops < 4) {
							w12 = -146;
						} else {
							w12 = -340;
						}
					} else {
						if (rel_time < 11669) {
							w12 = 1389;
						} else {
							w12 = 399;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 624) {
				w12 = 696;
			} else {
				if (rel_time < 1206) {
					w12 = 1171;
				} else {
					if (rel_time < 1790) {
						w12 = 438;
					} else {
						if (rel_time < 2375) {
							w12 = 1219;
						} else {
							w12 = 815;
						}
					}
				}
			}
		} else {
			if (rel_time < 557) {
				w12 = 679;
			} else {
				w12 = 1002;
			}
		}
	}
	int w13;
	if (size < 133) {
		if (rel_time < 1142) {
			if (rel_time < 695) {
				if (hops < 3) {
					w13 = 500;
				} else {
					w13 = 626;
				}
			} else {
				if (hops < 3) {
					w13 = 740;
				} else {
					w13 = 1023;
				}
			}
		} else {
			if (rel_time < 4086) {
				if (rel_time < 3613) {
					if (rel_time < 3028) {
						if (rel_time < 2443) {
							w13 = 474;
						} else {
							w13 = 162;
						}
					} else {
						if (rel_time < 3482) {
							w13 = 1380;
						} else {
							w13 = 486;
						}
					}
				} else {
					if (rel_time < 4066) {
						w13 = -817;
					} else {
						w13 = 397;
					}
				}
			} else {
				if (rel_time < 4651) {
					if (rel_time < 4198) {
						w13 = 429;
					} else {
						w13 = 1874;
					}
				} else {
					if (rel_time < 5236) {
						if (rel_time < 4783) {
							w13 = 427;
						} else {
							w13 = -853;
						}
					} else {
						if (rel_time < 5821) {
							w13 = 909;
						} else {
							w13 = 430;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8809) {
			if (rel_time < 8224) {
				if (rel_time < 7639) {
					if (rel_time < 7054) {
						if (rel_time < 6469) {
							w13 = 562;
						} else {
							w13 = 1039;
						}
					} else {
						if (hops < 3) {
							w13 = 87;
						} else {
							w13 = 193;
						}
					}
				} else {
					w13 = 1038;
				}
			} else {
				if (rel_time < 8767) {
					if (rel_time < 8765) {
						w13 = -11;
					} else {
						w13 = 83;
					}
				} else {
					if (rel_time < 8771) {
						w13 = 155;
					} else {
						w13 = 272;
					}
				}
			}
		} else {
			if (rel_time < 9393) {
				w13 = 1022;
			} else {
				if (rel_time < 9978) {
					w13 = 357;
				} else {
					if (rel_time < 10563) {
						w13 = 867;
					} else {
						if (hops < 2) {
							w13 = 372;
						} else {
							w13 = 465;
						}
					}
				}
			}
		}
	}
	int w14;
	if (size < 133) {
		if (hops < 3) {
			if (rel_time < 11801) {
				if (rel_time < 11085) {
					if (rel_time < 10631) {
						if (rel_time < 10047) {
							w14 = 289;
						} else {
							w14 = 537;
						}
					} else {
						if (prod != 0) {
							w14 = 368;
						} else {
							w14 = -338;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 11670) {
							w14 = 366;
						} else {
							w14 = 282;
						}
					} else {
						w14 = 679;
					}
				}
			} else {
				if (rel_time < 11809) {
					if (rel_time < 11804) {
						if (hops < 2) {
							w14 = 50;
						} else {
							w14 = 100;
						}
					} else {
						w14 = 102;
					}
				} else {
					if (hops < 2) {
						w14 = 17;
					} else {
						w14 = 75;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 695) {
					if (hops < 4) {
						w14 = 385;
					} else {
						w14 = 526;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 4717) {
							w14 = 332;
						} else {
							w14 = 288;
						}
					} else {
						if (rel_time < 10568) {
							w14 = 339;
						} else {
							w14 = 426;
						}
					}
				}
			} else {
				if (rel_time < 8296) {
					if (rel_time < 7711) {
						if (rel_time < 7125) {
							w14 = 373;
						} else {
							w14 = 1779;
						}
					} else {
						w14 = -884;
					}
				} else {
					if (rel_time < 8881) {
						w14 = 1743;
					} else {
						if (rel_time < 9466) {
							w14 = -485;
						} else {
							w14 = 599;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 2917) {
				if (rel_time < 2332) {
					if (rel_time < 1790) {
						if (rel_time < 1206) {
							w14 = 374;
						} else {
							w14 = 165;
						}
					} else {
						w14 = 588;
					}
				} else {
					w14 = -79;
				}
			} else {
				if (rel_time < 3502) {
					w14 = 814;
				} else {
					if (rel_time < 4087) {
						w14 = -73;
					} else {
						if (rel_time < 4672) {
							w14 = 837;
						} else {
							w14 = 362;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 8771) {
					if (rel_time < 8185) {
						if (rel_time < 7600) {
							w14 = 417;
						} else {
							w14 = 732;
						}
					} else {
						w14 = 106;
					}
				} else {
					if (rel_time < 9356) {
						w14 = 687;
					} else {
						if (rel_time < 9941) {
							w14 = 268;
						} else {
							w14 = 484;
						}
					}
				}
			} else {
				if (rel_time < 10563) {
					if (rel_time < 624) {
						w14 = 383;
					} else {
						if (rel_time < 1206) {
							w14 = 873;
						} else {
							w14 = 513;
						}
					}
				} else {
					w14 = 314;
				}
			}
		}
	}
	int w15;
	if (size < 133) {
		if (prod != 0) {
			if (rel_time < 3613) {
				if (rel_time < 2443) {
					if (rel_time < 1274) {
						if (rel_time < 1143) {
							w15 = 277;
						} else {
							w15 = 237;
						}
					} else {
						if (hops < 2) {
							w15 = 151;
						} else {
							w15 = 222;
						}
					}
				} else {
					if (rel_time < 3028) {
						w15 = 286;
					} else {
						if (hops < 2) {
							w15 = 290;
						} else {
							w15 = 219;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 10631) {
						if (rel_time < 9983) {
							w15 = 155;
						} else {
							w15 = 70;
						}
					} else {
						if (rel_time < 11216) {
							w15 = 254;
						} else {
							w15 = 151;
						}
					}
				} else {
					if (rel_time < 11085) {
						if (rel_time < 9983) {
							w15 = 209;
						} else {
							w15 = 100;
						}
					} else {
						if (hops < 4) {
							w15 = 252;
						} else {
							w15 = 302;
						}
					}
				}
			}
		} else {
			if (rel_time < 6406) {
				if (rel_time < 5821) {
					if (rel_time < 5236) {
						if (rel_time < 4651) {
							w15 = 301;
						} else {
							w15 = -693;
						}
					} else {
						w15 = 1517;
					}
				} else {
					w15 = -1079;
				}
			} else {
				if (rel_time < 6991) {
					w15 = 1651;
				} else {
					if (rel_time < 7575) {
						w15 = -1072;
					} else {
						if (rel_time < 8160) {
							w15 = 1478;
						} else {
							w15 = 205;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 557) {
			if (hops < 2) {
				w15 = 93;
			} else {
				if (hops < 3) {
					w15 = 319;
				} else {
					if (hops < 4) {
						w15 = 60;
					} else {
						w15 = 241;
					}
				}
			}
		} else {
			if (rel_time < 1206) {
				if (rel_time < 624) {
					if (hops < 2) {
						w15 = 219;
					} else {
						w15 = 281;
					}
				} else {
					if (hops < 2) {
						w15 = 464;
					} else {
						w15 = 621;
					}
				}
			} else {
				if (rel_time < 1790) {
					if (hops < 2) {
						w15 = 117;
					} else {
						if (hops < 4) {
							w15 = -6;
						} else {
							w15 = -80;
						}
					}
				} else {
					if (rel_time < 2375) {
						if (rel_time < 2332) {
							w15 = 416;
						} else {
							w15 = 677;
						}
					} else {
						if (rel_time < 2960) {
							w15 = -95;
						} else {
							w15 = 308;
						}
					}
				}
			}
		}
	}
	int w16;
	if (rel_time < 8877) {
		if (rel_time < 8292) {
			if (rel_time < 7707) {
				if (rel_time < 7122) {
					if (rel_time < 6537) {
						if (rel_time < 5887) {
							w16 = 188;
						} else {
							w16 = -161;
						}
					} else {
						if (rel_time < 6991) {
							w16 = 1161;
						} else {
							w16 = 282;
						}
					}
				} else {
					if (rel_time < 7575) {
						w16 = -754;
					} else {
						if (size < 133) {
							w16 = 145;
						} else {
							w16 = -125;
						}
					}
				}
			} else {
				if (rel_time < 8160) {
					if (hops < 3) {
						w16 = 1122;
					} else {
						w16 = 834;
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w16 = 2;
						} else {
							w16 = 158;
						}
					} else {
						w16 = 477;
					}
				}
			}
		} else {
			if (rel_time < 8745) {
				if (hops < 3) {
					if (hops < 2) {
						w16 = -789;
					} else {
						w16 = -1087;
					}
				} else {
					w16 = -687;
				}
			} else {
				if (size < 133) {
					if (rel_time < 8749) {
						w16 = 104;
					} else {
						w16 = 154;
					}
				} else {
					if (hops < 2) {
						w16 = -143;
					} else {
						if (rel_time < 8767) {
							w16 = -38;
						} else {
							w16 = -14;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9330) {
			w16 = 1294;
		} else {
			if (rel_time < 9978) {
				if (prod != 0) {
					if (rel_time < 9393) {
						if (rel_time < 9349) {
							w16 = 155;
						} else {
							w16 = 472;
						}
					} else {
						if (rel_time < 9934) {
							w16 = 148;
						} else {
							w16 = 60;
						}
					}
				} else {
					if (hops < 3) {
						w16 = -768;
					} else {
						w16 = -404;
					}
				}
			} else {
				if (rel_time < 10500) {
					if (prod != 0) {
						if (rel_time < 9983) {
							w16 = 171;
						} else {
							w16 = 47;
						}
					} else {
						w16 = 1057;
					}
				} else {
					if (rel_time < 11112) {
						if (prod != 0) {
							w16 = 154;
						} else {
							w16 = -383;
						}
					} else {
						if (rel_time < 11669) {
							w16 = 372;
						} else {
							w16 = 99;
						}
					}
				}
			}
		}
	}
	int w17;
	if (hops < 4) {
		if (rel_time < 5368) {
			if (rel_time < 4783) {
				if (rel_time < 4198) {
					if (rel_time < 3613) {
						if (rel_time < 3028) {
							w17 = 85;
						} else {
							w17 = 378;
						}
					} else {
						if (rel_time < 4066) {
							w17 = -820;
						} else {
							w17 = -22;
						}
					}
				} else {
					if (rel_time < 4651) {
						w17 = 1066;
					} else {
						if (size < 133) {
							w17 = 92;
						} else {
							w17 = 543;
						}
					}
				}
			} else {
				if (rel_time < 5236) {
					w17 = -551;
				} else {
					if (size < 133) {
						if (rel_time < 5256) {
							w17 = -89;
						} else {
							w17 = -28;
						}
					} else {
						w17 = -317;
					}
				}
			}
		} else {
			if (rel_time < 5821) {
				w17 = 993;
			} else {
				if (rel_time < 5844) {
					if (rel_time < 5840) {
						if (hops < 3) {
							w17 = 73;
						} else {
							w17 = 127;
						}
					} else {
						w17 = 587;
					}
				} else {
					if (rel_time < 6406) {
						if (prod != 0) {
							w17 = 127;
						} else {
							w17 = -717;
						}
					} else {
						if (rel_time < 7015) {
							w17 = 244;
						} else {
							w17 = 96;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 11741) {
			if (rel_time < 11153) {
				if (rel_time < 10568) {
					if (rel_time < 9983) {
						if (rel_time < 9398) {
							w17 = 185;
						} else {
							w17 = -12;
						}
					} else {
						if (rel_time < 10051) {
							w17 = 931;
						} else {
							w17 = 259;
						}
					}
				} else {
					if (rel_time < 10636) {
						w17 = -480;
					} else {
						if (size < 133) {
							w17 = 166;
						} else {
							w17 = 46;
						}
					}
				}
			} else {
				if (rel_time < 11221) {
					w17 = 913;
				} else {
					w17 = 145;
				}
			}
		} else {
			w17 = -151;
		}
	}
	int w18;
	if (rel_time < 1206) {
		if (rel_time < 695) {
			if (rel_time < 557) {
				if (hops < 2) {
					w18 = -14;
				} else {
					if (hops < 3) {
						w18 = 148;
					} else {
						if (hops < 4) {
							w18 = -35;
						} else {
							w18 = 75;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (size < 133) {
							w18 = 101;
						} else {
							w18 = 81;
						}
					} else {
						if (rel_time < 577) {
							w18 = 95;
						} else {
							w18 = 132;
						}
					}
				} else {
					if (size < 133) {
						w18 = 191;
					} else {
						w18 = 103;
					}
				}
			}
		} else {
			if (prod != 2) {
				if (hops < 3) {
					if (prod != 1) {
						w18 = 278;
					} else {
						if (hops < 2) {
							w18 = 142;
						} else {
							w18 = -6;
						}
					}
				} else {
					w18 = 408;
				}
			} else {
				if (rel_time < 1143) {
					w18 = 92;
				} else {
					if (hops < 2) {
						w18 = 27;
					} else {
						if (hops < 3) {
							w18 = 111;
						} else {
							w18 = 64;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1727) {
			if (rel_time < 1274) {
				if (hops < 4) {
					w18 = 89;
				} else {
					w18 = 24;
				}
			} else {
				w18 = -459;
			}
		} else {
			if (rel_time < 2375) {
				if (prod != 0) {
					if (rel_time < 2331) {
						if (size < 133) {
							w18 = 58;
						} else {
							w18 = -55;
						}
					} else {
						if (rel_time < 2332) {
							w18 = 214;
						} else {
							w18 = 392;
						}
					}
				} else {
					if (hops < 4) {
						w18 = 728;
					} else {
						w18 = 977;
					}
				}
			} else {
				if (rel_time < 2897) {
					if (rel_time < 2443) {
						if (hops < 2) {
							w18 = -37;
						} else {
							w18 = 80;
						}
					} else {
						if (hops < 3) {
							w18 = -810;
						} else {
							w18 = -382;
						}
					}
				} else {
					if (rel_time < 3545) {
						if (prod != 0) {
							w18 = 102;
						} else {
							w18 = 626;
						}
					} else {
						if (rel_time < 4130) {
							w18 = -185;
						} else {
							w18 = 94;
						}
					}
				}
			}
		}
	}
	int w19;
	if (rel_time < 8877) {
		if (rel_time < 8292) {
			if (rel_time < 7707) {
				if (rel_time < 7122) {
					if (rel_time < 6537) {
						if (rel_time < 5953) {
							w19 = 71;
						} else {
							w19 = -162;
						}
					} else {
						if (rel_time < 6991) {
							w19 = 718;
						} else {
							w19 = 112;
						}
					}
				} else {
					if (rel_time < 7575) {
						w19 = -590;
					} else {
						if (size < 133) {
							w19 = 42;
						} else {
							w19 = -147;
						}
					}
				}
			} else {
				if (rel_time < 8160) {
					if (hops < 3) {
						w19 = 735;
					} else {
						w19 = 528;
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w19 = -55;
						} else {
							w19 = 49;
						}
					} else {
						w19 = 276;
					}
				}
			}
		} else {
			if (rel_time < 8745) {
				if (hops < 3) {
					if (hops < 2) {
						w19 = -615;
					} else {
						w19 = -828;
					}
				} else {
					w19 = -552;
				}
			} else {
				if (size < 133) {
					if (rel_time < 8764) {
						if (hops < 2) {
							w19 = 9;
						} else {
							w19 = 25;
						}
					} else {
						if (rel_time < 8813) {
							w19 = 60;
						} else {
							w19 = 38;
						}
					}
				} else {
					if (hops < 2) {
						w19 = -157;
					} else {
						if (rel_time < 8771) {
							w19 = -66;
						} else {
							w19 = -95;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9330) {
			if (hops < 2) {
				w19 = 690;
			} else {
				if (hops < 3) {
					w19 = 1096;
				} else {
					w19 = 739;
				}
			}
		} else {
			if (rel_time < 9978) {
				if (prod != 0) {
					if (rel_time < 9395) {
						if (size < 133) {
							w19 = 63;
						} else {
							w19 = 273;
						}
					} else {
						if (rel_time < 9934) {
							w19 = 35;
						} else {
							w19 = -11;
						}
					}
				} else {
					if (hops < 3) {
						w19 = -597;
					} else {
						w19 = -331;
					}
				}
			} else {
				if (rel_time < 10500) {
					if (prod != 0) {
						if (rel_time < 9983) {
							w19 = 70;
						} else {
							w19 = -22;
						}
					} else {
						w19 = 660;
					}
				} else {
					if (rel_time < 11216) {
						if (prod != 0) {
							w19 = 44;
						} else {
							w19 = -307;
						}
					} else {
						if (rel_time < 11669) {
							w19 = 366;
						} else {
							w19 = 14;
						}
					}
				}
			}
		}
	}
	int w20;
	if (hops < 2) {
		if (rel_time < 4672) {
			if (rel_time < 4198) {
				if (rel_time < 3613) {
					if (rel_time < 3028) {
						if (rel_time < 2332) {
							w20 = 48;
						} else {
							w20 = -125;
						}
					} else {
						if (rel_time < 3482) {
							w20 = 473;
						} else {
							w20 = 115;
						}
					}
				} else {
					if (rel_time < 4066) {
						w20 = -512;
					} else {
						if (size < 133) {
							w20 = 79;
						} else {
							w20 = -157;
						}
					}
				}
			} else {
				if (rel_time < 4651) {
					w20 = 662;
				} else {
					if (rel_time < 4671) {
						if (rel_time < 4652) {
							w20 = 49;
						} else {
							w20 = -13;
						}
					} else {
						w20 = 240;
					}
				}
			}
		} else {
			if (rel_time < 5257) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 4783) {
							w20 = -5;
						} else {
							w20 = -120;
						}
					} else {
						w20 = -295;
					}
				} else {
					w20 = -474;
				}
			} else {
				if (rel_time < 5842) {
					if (prod != 0) {
						if (rel_time < 5840) {
							w20 = -41;
						} else {
							w20 = 366;
						}
					} else {
						w20 = 624;
					}
				} else {
					if (rel_time < 6427) {
						if (prod != 0) {
							w20 = -67;
						} else {
							w20 = -515;
						}
					} else {
						if (rel_time < 7012) {
							w20 = 202;
						} else {
							w20 = 7;
						}
					}
				}
			}
		}
	} else {
		if (prod != 2) {
			if (rel_time < 4131) {
				if (rel_time < 3613) {
					if (rel_time < 3028) {
						if (rel_time < 2443) {
							w20 = 96;
						} else {
							w20 = -212;
						}
					} else {
						if (rel_time < 3545) {
							w20 = 417;
						} else {
							w20 = 55;
						}
					}
				} else {
					if (rel_time < 4066) {
						w20 = -593;
					} else {
						if (rel_time < 4130) {
							w20 = -235;
						} else {
							w20 = 55;
						}
					}
				}
			} else {
				if (rel_time < 4715) {
					if (prod != 0) {
						if (rel_time < 4198) {
							w20 = 60;
						} else {
							w20 = 438;
						}
					} else {
						if (hops < 4) {
							w20 = 715;
						} else {
							w20 = 981;
						}
					}
				} else {
					if (rel_time < 5368) {
						if (prod != 1) {
							w20 = -350;
						} else {
							w20 = -9;
						}
					} else {
						if (rel_time < 5884) {
							w20 = 574;
						} else {
							w20 = 56;
						}
					}
				}
			}
		} else {
			if (rel_time < 11104) {
				if (rel_time < 2916) {
					if (rel_time < 577) {
						if (hops < 4) {
							w20 = 54;
						} else {
							w20 = 134;
						}
					} else {
						if (rel_time < 2899) {
							w20 = 36;
						} else {
							w20 = 106;
						}
					}
				} else {
					if (rel_time < 3501) {
						if (hops < 4) {
							w20 = -95;
						} else {
							w20 = 14;
						}
					} else {
						if (rel_time < 4086) {
							w20 = 106;
						} else {
							w20 = 2;
						}
					}
				}
			} else {
				if (hops < 3) {
					w20 = 152;
				} else {
					if (hops < 4) {
						if (rel_time < 11674) {
							w20 = 31;
						} else {
							w20 = 8;
						}
					} else {
						if (rel_time < 11674) {
							w20 = 35;
						} else {
							w20 = 146;
						}
					}
				}
			}
		}
	}
	int w21;
	if (rel_time < 8877) {
		if (rel_time < 8292) {
			if (rel_time < 7707) {
				if (rel_time < 7057) {
					if (rel_time < 6469) {
						if (rel_time < 5953) {
							w21 = 34;
						} else {
							w21 = -189;
						}
					} else {
						if (prod != 0) {
							w21 = 84;
						} else {
							w21 = 473;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w21 = 12;
						} else {
							w21 = -114;
						}
					} else {
						if (hops < 3) {
							w21 = -456;
						} else {
							w21 = -351;
						}
					}
				}
			} else {
				if (rel_time < 8160) {
					if (hops < 3) {
						if (hops < 2) {
							w21 = 435;
						} else {
							w21 = 578;
						}
					} else {
						w21 = 359;
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w21 = -41;
						} else {
							w21 = 27;
						}
					} else {
						if (hops < 2) {
							w21 = 219;
						} else {
							w21 = 152;
						}
					}
				}
			}
		} else {
			if (rel_time < 8745) {
				if (hops < 3) {
					if (hops < 2) {
						w21 = -438;
					} else {
						w21 = -604;
					}
				} else {
					w21 = -408;
				}
			} else {
				if (size < 133) {
					if (rel_time < 8749) {
						if (hops < 2) {
							w21 = -1;
						} else {
							w21 = 15;
						}
					} else {
						if (hops < 3) {
							w21 = 33;
						} else {
							w21 = 13;
						}
					}
				} else {
					if (hops < 2) {
						w21 = -113;
					} else {
						w21 = -69;
					}
				}
			}
		}
	} else {
		if (rel_time < 9330) {
			if (hops < 2) {
				w21 = 487;
			} else {
				if (hops < 3) {
					w21 = 763;
				} else {
					w21 = 508;
				}
			}
		} else {
			if (size < 133) {
				if (rel_time < 9915) {
					if (prod != 0) {
						if (hops < 3) {
							w21 = 25;
						} else {
							w21 = 63;
						}
					} else {
						if (hops < 3) {
							w21 = -430;
						} else {
							w21 = -251;
						}
					}
				} else {
					if (rel_time < 10500) {
						if (prod != 0) {
							w21 = 18;
						} else {
							w21 = 453;
						}
					} else {
						if (rel_time < 11085) {
							w21 = -113;
						} else {
							w21 = 48;
						}
					}
				}
			} else {
				if (rel_time < 10563) {
					if (rel_time < 9978) {
						if (rel_time < 9393) {
							w21 = 182;
						} else {
							w21 = -18;
						}
					} else {
						if (hops < 3) {
							w21 = 215;
						} else {
							w21 = 353;
						}
					}
				} else {
					if (rel_time < 11112) {
						if (hops < 3) {
							w21 = -37;
						} else {
							w21 = -65;
						}
					} else {
						w21 = -19;
					}
				}
			}
		}
	}
	int w22;
	if (rel_time < 11801) {
		if (rel_time < 11216) {
			if (rel_time < 10565) {
				if (rel_time < 9983) {
					if (rel_time < 9398) {
						if (rel_time < 8877) {
							w22 = 14;
						} else {
							w22 = 161;
						}
					} else {
						if (prod != 0) {
							w22 = 7;
						} else {
							w22 = -265;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w22 = -29;
						} else {
							w22 = 184;
						}
					} else {
						if (hops < 2) {
							w22 = 268;
						} else {
							w22 = 342;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (prod != 2) {
						if (hops < 4) {
							w22 = -27;
						} else {
							w22 = 20;
						}
					} else {
						if (rel_time < 11085) {
							w22 = 104;
						} else {
							w22 = 23;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w22 = -235;
						} else {
							w22 = 5;
						}
					} else {
						w22 = -326;
					}
				}
			}
		} else {
			if (rel_time < 11221) {
				if (hops < 3) {
					if (hops < 2) {
						w22 = 157;
					} else {
						if (rel_time < 11218) {
							w22 = 27;
						} else {
							w22 = 64;
						}
					}
				} else {
					w22 = 454;
				}
			} else {
				if (rel_time < 11669) {
					if (hops < 2) {
						w22 = 197;
					} else {
						w22 = 32;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11741) {
							w22 = 4;
						} else {
							w22 = -35;
						}
					} else {
						if (hops < 3) {
							w22 = 72;
						} else {
							w22 = 40;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			w22 = -108;
		} else {
			w22 = -167;
		}
	}
	int w23;
	if (rel_time < 1206) {
		if (rel_time < 695) {
			if (rel_time < 557) {
				if (hops < 2) {
					w23 = -59;
				} else {
					if (hops < 3) {
						w23 = 44;
					} else {
						if (hops < 4) {
							w23 = -86;
						} else {
							w23 = -3;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (size < 133) {
							w23 = 19;
						} else {
							w23 = 3;
						}
					} else {
						if (size < 133) {
							w23 = 22;
						} else {
							w23 = 36;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 577) {
							w23 = 85;
						} else {
							w23 = 51;
						}
					} else {
						w23 = 17;
					}
				}
			}
		} else {
			if (prod != 2) {
				if (hops < 4) {
					if (hops < 2) {
						w23 = 124;
					} else {
						if (prod != 1) {
							w23 = 170;
						} else {
							w23 = -37;
						}
					}
				} else {
					if (rel_time < 1142) {
						w23 = 352;
					} else {
						w23 = 200;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w23 = 5;
						} else {
							w23 = 35;
						}
					} else {
						if (rel_time < 1143) {
							w23 = -4;
						} else {
							w23 = -21;
						}
					}
				} else {
					if (rel_time < 1143) {
						w23 = 21;
					} else {
						w23 = 46;
					}
				}
			}
		}
	} else {
		if (rel_time < 1727) {
			if (rel_time < 1274) {
				if (hops < 4) {
					if (hops < 2) {
						w23 = 4;
					} else {
						w23 = 8;
					}
				} else {
					w23 = -41;
				}
			} else {
				w23 = -382;
			}
		} else {
			if (rel_time < 2375) {
				if (prod != 0) {
					if (rel_time < 2331) {
						if (size < 133) {
							w23 = -11;
						} else {
							w23 = -96;
						}
					} else {
						if (rel_time < 2332) {
							w23 = 103;
						} else {
							w23 = 214;
						}
					}
				} else {
					if (hops < 4) {
						w23 = 455;
					} else {
						w23 = 652;
					}
				}
			} else {
				if (rel_time < 2897) {
					if (rel_time < 2443) {
						if (hops < 3) {
							w23 = -21;
						} else {
							w23 = -1;
						}
					} else {
						if (hops < 3) {
							w23 = -557;
						} else {
							w23 = -244;
						}
					}
				} else {
					if (rel_time < 3545) {
						if (rel_time < 2960) {
							w23 = -62;
						} else {
							w23 = 151;
						}
					} else {
						if (rel_time < 4066) {
							w23 = -198;
						} else {
							w23 = 18;
						}
					}
				}
			}
		}
	}
	int w24;
	if (rel_time < 4717) {
		if (rel_time < 4198) {
			if (rel_time < 3613) {
				if (rel_time < 2960) {
					if (rel_time < 2443) {
						if (rel_time < 1859) {
							w24 = -7;
						} else {
							w24 = 112;
						}
					} else {
						if (prod != 2) {
							w24 = -237;
						} else {
							w24 = 60;
						}
					}
				} else {
					if (prod != 2) {
						if (prod != 1) {
							w24 = 232;
						} else {
							w24 = 77;
						}
					} else {
						if (hops < 4) {
							w24 = -118;
						} else {
							w24 = -44;
						}
					}
				}
			} else {
				if (rel_time < 4066) {
					if (hops < 4) {
						w24 = -333;
					} else {
						w24 = -506;
					}
				} else {
					if (size < 133) {
						if (rel_time < 4069) {
							w24 = 67;
						} else {
							w24 = 14;
						}
					} else {
						if (rel_time < 4087) {
							w24 = -131;
						} else {
							w24 = -186;
						}
					}
				}
			}
		} else {
			if (rel_time < 4651) {
				if (hops < 4) {
					w24 = 476;
				} else {
					w24 = 695;
				}
			} else {
				if (size < 133) {
					if (rel_time < 4654) {
						if (hops < 3) {
							w24 = -22;
						} else {
							w24 = 4;
						}
					} else {
						if (hops < 2) {
							w24 = -19;
						} else {
							w24 = 35;
						}
					}
				} else {
					if (rel_time < 4672) {
						w24 = 150;
					} else {
						w24 = 289;
					}
				}
			}
		}
	} else {
		if (rel_time < 5368) {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 4783) {
						if (hops < 2) {
							w24 = -33;
						} else {
							w24 = 27;
						}
					} else {
						if (rel_time < 5237) {
							w24 = -136;
						} else {
							w24 = -93;
						}
					}
				} else {
					if (rel_time < 5257) {
						w24 = -228;
					} else {
						w24 = -165;
					}
				}
			} else {
				if (hops < 4) {
					w24 = -338;
				} else {
					w24 = -455;
				}
			}
		} else {
			if (rel_time < 5821) {
				if (hops < 4) {
					w24 = 454;
				} else {
					w24 = 786;
				}
			} else {
				if (rel_time < 5884) {
					if (rel_time < 5840) {
						if (hops < 3) {
							w24 = -10;
						} else {
							w24 = 14;
						}
					} else {
						if (rel_time < 5844) {
							w24 = 205;
						} else {
							w24 = 340;
						}
					}
				} else {
					if (rel_time < 6406) {
						if (prod != 0) {
							w24 = 21;
						} else {
							w24 = -427;
						}
					} else {
						if (rel_time < 7054) {
							w24 = 83;
						} else {
							w24 = 0;
						}
					}
				}
			}
		}
	}
	int w25;
	if (rel_time < 11801) {
		if (rel_time < 11216) {
			if (rel_time < 10565) {
				if (rel_time < 9983) {
					if (rel_time < 9395) {
						if (rel_time < 8877) {
							w25 = 2;
						} else {
							w25 = 119;
						}
					} else {
						if (prod != 0) {
							w25 = -3;
						} else {
							w25 = -192;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w25 = -26;
						} else {
							w25 = 124;
						}
					} else {
						if (hops < 2) {
							w25 = 184;
						} else {
							w25 = 236;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (prod != 2) {
						if (rel_time < 11148) {
							w25 = -31;
						} else {
							w25 = -5;
						}
					} else {
						if (rel_time < 11085) {
							w25 = 71;
						} else {
							w25 = 11;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w25 = -172;
						} else {
							w25 = -2;
						}
					} else {
						w25 = -237;
					}
				}
			}
		} else {
			if (rel_time < 11221) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11218) {
							w25 = 123;
						} else {
							w25 = 56;
						}
					} else {
						if (rel_time < 11218) {
							w25 = 15;
						} else {
							w25 = 41;
						}
					}
				} else {
					w25 = 317;
				}
			} else {
				if (rel_time < 11669) {
					if (hops < 2) {
						w25 = 136;
					} else {
						w25 = 18;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11735) {
							w25 = -14;
						} else {
							w25 = 13;
						}
					} else {
						if (rel_time < 11741) {
							w25 = 31;
						} else {
							w25 = 118;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (hops < 3) {
				w25 = -86;
			} else {
				w25 = -63;
			}
		} else {
			w25 = -127;
		}
	}
	int w26;
	if (rel_time < 1206) {
		if (rel_time < 695) {
			if (rel_time < 557) {
				if (hops < 2) {
					w26 = -40;
				} else {
					if (hops < 3) {
						w26 = 33;
					} else {
						if (hops < 4) {
							w26 = -60;
						} else {
							w26 = -1;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (size < 133) {
							w26 = 15;
						} else {
							w26 = 4;
						}
					} else {
						if (rel_time < 577) {
							w26 = 14;
						} else {
							w26 = 24;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 577) {
							w26 = 63;
						} else {
							w26 = 38;
						}
					} else {
						w26 = 14;
					}
				}
			}
		} else {
			if (prod != 2) {
				if (hops < 4) {
					if (hops < 3) {
						if (prod != 1) {
							w26 = 98;
						} else {
							w26 = 27;
						}
					} else {
						if (rel_time < 1142) {
							w26 = 151;
						} else {
							w26 = 109;
						}
					}
				} else {
					if (rel_time < 1142) {
						w26 = 257;
					} else {
						w26 = 148;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w26 = 5;
						} else {
							w26 = 26;
						}
					} else {
						if (rel_time < 1143) {
							w26 = -1;
						} else {
							w26 = -14;
						}
					}
				} else {
					if (rel_time < 1143) {
						w26 = 17;
					} else {
						w26 = 36;
					}
				}
			}
		}
	} else {
		if (rel_time < 1727) {
			if (rel_time < 1274) {
				if (hops < 4) {
					if (hops < 2) {
						w26 = 4;
					} else {
						if (hops < 3) {
							w26 = 8;
						} else {
							w26 = 6;
						}
					}
				} else {
					w26 = -29;
				}
			} else {
				if (hops < 2) {
					w26 = -312;
				} else {
					w26 = -236;
				}
			}
		} else {
			if (rel_time < 2312) {
				if (rel_time < 1859) {
					if (size < 133) {
						if (rel_time < 1791) {
							w26 = 2;
						} else {
							w26 = -22;
						}
					} else {
						if (hops < 2) {
							w26 = -1;
						} else {
							w26 = -118;
						}
					}
				} else {
					if (hops < 4) {
						w26 = 286;
					} else {
						w26 = 443;
					}
				}
			} else {
				if (rel_time < 2897) {
					if (rel_time < 2444) {
						if (size < 133) {
							w26 = -46;
						} else {
							w26 = 83;
						}
					} else {
						if (hops < 3) {
							w26 = -323;
						} else {
							w26 = -117;
						}
					}
				} else {
					if (rel_time < 4715) {
						if (rel_time < 4198) {
							w26 = 0;
						} else {
							w26 = 171;
						}
					} else {
						if (rel_time < 5368) {
							w26 = -107;
						} else {
							w26 = 10;
						}
					}
				}
			}
		}
	}
	int w27;
	if (prod != 2) {
		if (rel_time < 5884) {
			if (rel_time < 5368) {
				if (rel_time < 4783) {
					if (rel_time < 4198) {
						if (rel_time < 3613) {
							w27 = 20;
						} else {
							w27 = -122;
						}
					} else {
						if (rel_time < 4651) {
							w27 = 308;
						} else {
							w27 = 74;
						}
					}
				} else {
					if (rel_time < 5256) {
						if (hops < 4) {
							w27 = -207;
						} else {
							w27 = -302;
						}
					} else {
						if (size < 133) {
							w27 = -27;
						} else {
							w27 = -104;
						}
					}
				}
			} else {
				if (rel_time < 5821) {
					if (hops < 4) {
						w27 = 316;
					} else {
						w27 = 568;
					}
				} else {
					if (rel_time < 5844) {
						if (rel_time < 5842) {
							w27 = 176;
						} else {
							w27 = 103;
						}
					} else {
						w27 = 245;
					}
				}
			}
		} else {
			if (rel_time < 6469) {
				if (prod != 1) {
					if (rel_time < 5955) {
						if (hops < 2) {
							w27 = -183;
						} else {
							w27 = -374;
						}
					} else {
						if (hops < 3) {
							w27 = -250;
						} else {
							w27 = -155;
						}
					}
				} else {
					if (rel_time < 5887) {
						if (hops < 2) {
							w27 = -47;
						} else {
							w27 = 0;
						}
					} else {
						w27 = 71;
					}
				}
			} else {
				if (rel_time < 7054) {
					if (rel_time < 6537) {
						if (hops < 2) {
							w27 = 10;
						} else {
							w27 = 102;
						}
					} else {
						if (hops < 2) {
							w27 = 193;
						} else {
							w27 = 290;
						}
					}
				} else {
					if (rel_time < 7600) {
						if (prod != 0) {
							w27 = -74;
						} else {
							w27 = -314;
						}
					} else {
						if (rel_time < 8224) {
							w27 = 147;
						} else {
							w27 = -5;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6425) {
			if (rel_time < 5840) {
				if (rel_time < 2916) {
					if (rel_time < 2331) {
						if (rel_time < 2313) {
							w27 = 4;
						} else {
							w27 = -64;
						}
					} else {
						if (hops < 2) {
							w27 = 63;
						} else {
							w27 = 27;
						}
					}
				} else {
					if (rel_time < 3501) {
						if (hops < 4) {
							w27 = -84;
						} else {
							w27 = -32;
						}
					} else {
						if (rel_time < 4086) {
							w27 = 45;
						} else {
							w27 = -40;
						}
					}
				}
			} else {
				if (rel_time < 6407) {
					w27 = 114;
				} else {
					w27 = 147;
				}
			}
		} else {
			if (rel_time < 7010) {
				if (hops < 3) {
					if (rel_time < 6995) {
						w27 = -175;
					} else {
						if (hops < 2) {
							w27 = -188;
						} else {
							w27 = -18;
						}
					}
				} else {
					w27 = -100;
				}
			} else {
				if (rel_time < 10519) {
					if (hops < 3) {
						if (rel_time < 8764) {
							w27 = -21;
						} else {
							w27 = -46;
						}
					} else {
						if (rel_time < 9349) {
							w27 = -22;
						} else {
							w27 = 20;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w27 = 10;
						} else {
							w27 = 39;
						}
					} else {
						if (hops < 4) {
							w27 = -36;
						} else {
							w27 = 34;
						}
					}
				}
			}
		}
	}
	int w28;
	if (hops < 4) {
		if (rel_time < 11801) {
			if (rel_time < 8771) {
				if (rel_time < 8292) {
					if (rel_time < 7707) {
						if (rel_time < 7057) {
							w28 = 5;
						} else {
							w28 = -80;
						}
					} else {
						if (rel_time < 8160) {
							w28 = 278;
						} else {
							w28 = 15;
						}
					}
				} else {
					if (rel_time < 8745) {
						w28 = -366;
					} else {
						if (rel_time < 8764) {
							w28 = 3;
						} else {
							w28 = -74;
						}
					}
				}
			} else {
				if (rel_time < 9330) {
					if (rel_time < 8877) {
						if (rel_time < 8809) {
							w28 = 49;
						} else {
							w28 = 5;
						}
					} else {
						if (hops < 2) {
							w28 = 257;
						} else {
							w28 = 383;
						}
					}
				} else {
					if (rel_time < 9915) {
						if (prod != 0) {
							w28 = -19;
						} else {
							w28 = -153;
						}
					} else {
						if (prod != 0) {
							w28 = 0;
						} else {
							w28 = 47;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				w28 = -62;
			} else {
				w28 = -46;
			}
		}
	} else {
		if (prod != 2) {
			if (rel_time < 1859) {
				if (rel_time < 1206) {
					if (rel_time < 695) {
						if (rel_time < 624) {
							w28 = -1;
						} else {
							w28 = 23;
						}
					} else {
						if (rel_time < 1142) {
							w28 = 182;
						} else {
							w28 = 103;
						}
					}
				} else {
					if (prod != 1) {
						w28 = -190;
					} else {
						if (rel_time < 1274) {
							w28 = -26;
						} else {
							w28 = 6;
						}
					}
				}
			} else {
				if (rel_time < 2375) {
					if (rel_time < 2312) {
						w28 = 317;
					} else {
						w28 = 147;
					}
				} else {
					if (rel_time < 11735) {
						if (rel_time < 11153) {
							w28 = 30;
						} else {
							w28 = 199;
						}
					} else {
						if (rel_time < 11741) {
							w28 = -21;
						} else {
							w28 = -93;
						}
					}
				}
			}
		} else {
			if (rel_time < 9349) {
				if (rel_time < 6410) {
					if (rel_time < 5825) {
						if (rel_time < 1162) {
							w28 = 34;
						} else {
							w28 = -25;
						}
					} else {
						w28 = 124;
					}
				} else {
					if (rel_time < 9334) {
						if (rel_time < 6992) {
							w28 = -66;
						} else {
							w28 = -29;
						}
					} else {
						w28 = -99;
					}
				}
			} else {
				if (rel_time < 10504) {
					if (rel_time < 9934) {
						w28 = 19;
					} else {
						w28 = 120;
					}
				} else {
					if (rel_time < 11674) {
						if (rel_time < 11670) {
							w28 = 28;
						} else {
							w28 = -35;
						}
					} else {
						w28 = 72;
					}
				}
			}
		}
	}
	int w29;
	if (hops < 2) {
		if (rel_time < 5953) {
			if (rel_time < 5368) {
				if (rel_time < 4783) {
					if (rel_time < 2917) {
						if (rel_time < 2332) {
							w29 = -2;
						} else {
							w29 = -72;
						}
					} else {
						if (rel_time < 3482) {
							w29 = 101;
						} else {
							w29 = 9;
						}
					}
				} else {
					if (rel_time < 5236) {
						w29 = -167;
					} else {
						if (size < 133) {
							w29 = -25;
						} else {
							w29 = -100;
						}
					}
				}
			} else {
				if (rel_time < 5821) {
					w29 = 194;
				} else {
					if (size < 133) {
						if (rel_time < 5887) {
							w29 = -11;
						} else {
							w29 = 53;
						}
					} else {
						w29 = 123;
					}
				}
			}
		} else {
			if (rel_time < 6427) {
				if (prod != 2) {
					w29 = -158;
				} else {
					if (rel_time < 6407) {
						w29 = 56;
					} else {
						if (rel_time < 6410) {
							w29 = 84;
						} else {
							w29 = 33;
						}
					}
				}
			} else {
				if (rel_time < 6991) {
					if (rel_time < 6537) {
						if (rel_time < 6471) {
							w29 = 10;
						} else {
							w29 = 3;
						}
					} else {
						w29 = 166;
					}
				} else {
					if (rel_time < 7577) {
						if (size < 133) {
							w29 = -125;
						} else {
							w29 = 105;
						}
					} else {
						if (rel_time < 8182) {
							w29 = 34;
						} else {
							w29 = -11;
						}
					}
				}
			}
		}
	} else {
		if (prod != 2) {
			if (rel_time < 2960) {
				if (rel_time < 2443) {
					if (rel_time < 1859) {
						if (rel_time < 1274) {
							w29 = 29;
						} else {
							w29 = -92;
						}
					} else {
						if (rel_time < 2312) {
							w29 = 199;
						} else {
							w29 = 24;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 2897) {
							w29 = -226;
						} else {
							w29 = -125;
						}
					} else {
						if (hops < 4) {
							w29 = -106;
						} else {
							w29 = -51;
						}
					}
				}
			} else {
				if (rel_time < 3545) {
					if (rel_time < 3029) {
						if (hops < 3) {
							w29 = 118;
						} else {
							w29 = 15;
						}
					} else {
						if (hops < 3) {
							w29 = 231;
						} else {
							w29 = 132;
						}
					}
				} else {
					if (rel_time < 4130) {
						if (rel_time < 3613) {
							w29 = 51;
						} else {
							w29 = -172;
						}
					} else {
						if (rel_time < 4715) {
							w29 = 145;
						} else {
							w29 = 9;
						}
					}
				}
			}
		} else {
			if (rel_time < 2916) {
				if (rel_time < 2899) {
					if (rel_time < 577) {
						if (hops < 4) {
							w29 = 13;
						} else {
							w29 = 36;
						}
					} else {
						if (rel_time < 2331) {
							w29 = 1;
						} else {
							w29 = 12;
						}
					}
				} else {
					if (hops < 3) {
						w29 = 118;
					} else {
						w29 = -33;
					}
				}
			} else {
				if (rel_time < 5256) {
					if (rel_time < 3484) {
						if (hops < 3) {
							w29 = -99;
						} else {
							w29 = -34;
						}
					} else {
						if (rel_time < 4086) {
							w29 = 19;
						} else {
							w29 = -51;
						}
					}
				} else {
					if (rel_time < 6425) {
						if (rel_time < 5840) {
							w29 = 7;
						} else {
							w29 = 99;
						}
					} else {
						if (rel_time < 7010) {
							w29 = -84;
						} else {
							w29 = -8;
						}
					}
				}
			}
		}
	}
	int w30;
	if (rel_time < 8810) {
		if (rel_time < 8292) {
			if (rel_time < 7707) {
				if (rel_time < 7122) {
					if (rel_time < 6469) {
						if (rel_time < 5887) {
							w30 = 5;
						} else {
							w30 = -82;
						}
					} else {
						if (prod != 0) {
							w30 = 18;
						} else {
							w30 = 197;
						}
					}
				} else {
					if (rel_time < 7575) {
						w30 = -189;
					} else {
						if (size < 133) {
							w30 = 9;
						} else {
							w30 = -63;
						}
					}
				}
			} else {
				if (rel_time < 8160) {
					if (hops < 3) {
						if (hops < 2) {
							w30 = 162;
						} else {
							w30 = 272;
						}
					} else {
						if (hops < 4) {
							w30 = 101;
						} else {
							w30 = 200;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w30 = -46;
						} else {
							w30 = 6;
						}
					} else {
						if (hops < 2) {
							w30 = 85;
						} else {
							w30 = 43;
						}
					}
				}
			}
		} else {
			if (rel_time < 8745) {
				if (hops < 2) {
					w30 = -212;
				} else {
					if (hops < 3) {
						w30 = -337;
					} else {
						if (hops < 4) {
							w30 = -194;
						} else {
							w30 = -294;
						}
					}
				}
			} else {
				if (size < 133) {
					if (hops < 4) {
						if (rel_time < 8749) {
							w30 = 2;
						} else {
							w30 = 12;
						}
					} else {
						if (rel_time < 8749) {
							w30 = -1;
						} else {
							w30 = -19;
						}
					}
				} else {
					if (rel_time < 8771) {
						if (rel_time < 8767) {
							w30 = -66;
						} else {
							w30 = -32;
						}
					} else {
						w30 = -87;
					}
				}
			}
		}
	} else {
		if (rel_time < 9330) {
			if (rel_time < 8877) {
				if (hops < 2) {
					if (rel_time < 8813) {
						w30 = -21;
					} else {
						w30 = 3;
					}
				} else {
					if (rel_time < 8813) {
						if (hops < 3) {
							w30 = 30;
						} else {
							w30 = 8;
						}
					} else {
						w30 = -3;
					}
				}
			} else {
				if (hops < 2) {
					w30 = 185;
				} else {
					if (hops < 3) {
						w30 = 340;
					} else {
						if (hops < 4) {
							w30 = 148;
						} else {
							w30 = 261;
						}
					}
				}
			}
		} else {
			if (rel_time < 9915) {
				if (size < 133) {
					if (rel_time < 9466) {
						if (prod != 1) {
							w30 = -62;
						} else {
							w30 = -22;
						}
					} else {
						w30 = -142;
					}
				} else {
					if (rel_time < 9350) {
						w30 = 149;
					} else {
						if (rel_time < 9356) {
							w30 = -16;
						} else {
							w30 = 101;
						}
					}
				}
			} else {
				if (rel_time < 10563) {
					if (prod != 0) {
						if (rel_time < 10519) {
							w30 = -6;
						} else {
							w30 = 85;
						}
					} else {
						if (hops < 3) {
							w30 = 124;
						} else {
							w30 = 168;
						}
					}
				} else {
					if (rel_time < 11085) {
						if (prod != 0) {
							w30 = -8;
						} else {
							w30 = -117;
						}
					} else {
						if (rel_time < 11801) {
							w30 = 14;
						} else {
							w30 = -46;
						}
					}
				}
			}
		}
	}
	int w31;
	if (rel_time < 5368) {
		if (rel_time < 4783) {
			if (rel_time < 4198) {
				if (rel_time < 3613) {
					if (rel_time < 3028) {
						if (rel_time < 2375) {
							w31 = 4;
						} else {
							w31 = -41;
						}
					} else {
						if (prod != 2) {
							w31 = 93;
						} else {
							w31 = -49;
						}
					}
				} else {
					if (rel_time < 4066) {
						if (hops < 4) {
							w31 = -173;
						} else {
							w31 = -298;
						}
					} else {
						if (size < 133) {
							w31 = 20;
						} else {
							w31 = -56;
						}
					}
				}
			} else {
				if (rel_time < 4651) {
					if (hops < 4) {
						if (rel_time < 4200) {
							w31 = 175;
						} else {
							w31 = 136;
						}
					} else {
						w31 = 325;
					}
				} else {
					if (size < 133) {
						if (rel_time < 4715) {
							w31 = -42;
						} else {
							w31 = 10;
						}
					} else {
						if (rel_time < 4673) {
							w31 = 37;
						} else {
							w31 = 111;
						}
					}
				}
			}
		} else {
			if (rel_time < 5236) {
				if (hops < 4) {
					w31 = -129;
				} else {
					w31 = -232;
				}
			} else {
				if (size < 133) {
					if (hops < 4) {
						if (rel_time < 5237) {
							w31 = -46;
						} else {
							w31 = -15;
						}
					} else {
						if (rel_time < 5301) {
							w31 = -78;
						} else {
							w31 = -4;
						}
					}
				} else {
					w31 = -67;
				}
			}
		}
	} else {
		if (rel_time < 5821) {
			if (hops < 3) {
				if (hops < 2) {
					w31 = 136;
				} else {
					w31 = 208;
				}
			} else {
				if (hops < 4) {
					w31 = 253;
				} else {
					w31 = 401;
				}
			}
		} else {
			if (rel_time < 5884) {
				if (rel_time < 5840) {
					if (rel_time < 5825) {
						if (rel_time < 5822) {
							w31 = -5;
						} else {
							w31 = 20;
						}
					} else {
						if (hops < 3) {
							w31 = -5;
						} else {
							w31 = -48;
						}
					}
				} else {
					if (rel_time < 5844) {
						if (rel_time < 5842) {
							w31 = 85;
						} else {
							w31 = 67;
						}
					} else {
						w31 = 167;
					}
				}
			} else {
				if (rel_time < 6406) {
					if (prod != 0) {
						if (rel_time < 5887) {
							w31 = -16;
						} else {
							w31 = 60;
						}
					} else {
						if (hops < 2) {
							w31 = -67;
						} else {
							w31 = -238;
						}
					}
				} else {
					if (rel_time < 6425) {
						if (rel_time < 6410) {
							w31 = 82;
						} else {
							w31 = 129;
						}
					} else {
						if (rel_time < 6430) {
							w31 = -123;
						} else {
							w31 = 3;
						}
					}
				}
			}
		}
	}
	int w32;
	if (rel_time < 1790) {
		if (rel_time < 1274) {
			if (prod != 0) {
				if (rel_time < 1162) {
					if (rel_time < 557) {
						if (hops < 3) {
							w32 = -22;
						} else {
							w32 = -47;
						}
					} else {
						if (prod != 2) {
							w32 = -5;
						} else {
							w32 = 5;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w32 = -3;
						} else {
							w32 = -19;
						}
					} else {
						if (hops < 2) {
							w32 = 45;
						} else {
							w32 = 81;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w32 = 56;
					} else {
						if (rel_time < 696) {
							w32 = 89;
						} else {
							w32 = 23;
						}
					}
				} else {
					w32 = 105;
				}
			}
		} else {
			if (rel_time < 1727) {
				if (hops < 2) {
					w32 = -230;
				} else {
					w32 = -139;
				}
			} else {
				if (rel_time < 1747) {
					if (rel_time < 1728) {
						if (hops < 3) {
							w32 = -11;
						} else {
							w32 = -28;
						}
					} else {
						if (hops < 3) {
							w32 = 16;
						} else {
							w32 = -14;
						}
					}
				} else {
					if (hops < 2) {
						w32 = -19;
					} else {
						if (hops < 4) {
							w32 = -50;
						} else {
							w32 = -75;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2312) {
			if (rel_time < 1859) {
				if (rel_time < 1791) {
					if (hops < 2) {
						w32 = 5;
					} else {
						if (hops < 4) {
							w32 = 64;
						} else {
							w32 = 11;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w32 = -17;
						} else {
							w32 = -7;
						}
					} else {
						w32 = 29;
					}
				}
			} else {
				if (hops < 2) {
					w32 = 196;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w32 = 152;
						} else {
							w32 = 83;
						}
					} else {
						w32 = 174;
					}
				}
			}
		} else {
			if (rel_time < 2897) {
				if (rel_time < 2444) {
					if (size < 133) {
						if (rel_time < 2443) {
							w32 = -22;
						} else {
							w32 = -70;
						}
					} else {
						if (rel_time < 2332) {
							w32 = 6;
						} else {
							w32 = 68;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w32 = -210;
						} else {
							w32 = -142;
						}
					} else {
						w32 = -58;
					}
				}
			} else {
				if (rel_time < 3545) {
					if (rel_time < 3501) {
						if (prod != 0) {
							w32 = -2;
						} else {
							w32 = 88;
						}
					} else {
						if (hops < 4) {
							w32 = 80;
						} else {
							w32 = 206;
						}
					}
				} else {
					if (rel_time < 4066) {
						if (rel_time < 3613) {
							w32 = 12;
						} else {
							w32 = -134;
						}
					} else {
						if (rel_time < 4651) {
							w32 = 30;
						} else {
							w32 = 0;
						}
					}
				}
			}
		}
	}
	int w33;
	if (hops < 4) {
		if (rel_time < 10526) {
			if (rel_time < 10047) {
				if (rel_time < 8292) {
					if (rel_time < 7707) {
						if (rel_time < 7056) {
							w33 = 2;
						} else {
							w33 = -37;
						}
					} else {
						if (rel_time < 8160) {
							w33 = 134;
						} else {
							w33 = 4;
						}
					}
				} else {
					if (rel_time < 8745) {
						if (hops < 2) {
							w33 = -151;
						} else {
							w33 = -203;
						}
					} else {
						if (rel_time < 9330) {
							w33 = 34;
						} else {
							w33 = -14;
						}
					}
				}
			} else {
				if (prod != 2) {
					if (hops < 3) {
						if (rel_time < 10521) {
							w33 = 71;
						} else {
							w33 = -3;
						}
					} else {
						w33 = 153;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 10500) {
							w33 = -70;
						} else {
							w33 = -1;
						}
					} else {
						if (hops < 3) {
							w33 = -88;
						} else {
							w33 = -14;
						}
					}
				}
			}
		} else {
			if (rel_time < 10636) {
				if (rel_time < 10631) {
					if (hops < 3) {
						if (hops < 2) {
							w33 = -21;
						} else {
							w33 = -65;
						}
					} else {
						if (rel_time < 10565) {
							w33 = 26;
						} else {
							w33 = 11;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w33 = -98;
						} else {
							w33 = -18;
						}
					} else {
						w33 = -167;
					}
				}
			} else {
				if (rel_time < 11216) {
					if (hops < 3) {
						if (hops < 2) {
							w33 = -19;
						} else {
							w33 = 19;
						}
					} else {
						if (rel_time < 11089) {
							w33 = -16;
						} else {
							w33 = -68;
						}
					}
				} else {
					if (rel_time < 11669) {
						if (hops < 3) {
							w33 = 39;
						} else {
							w33 = 153;
						}
					} else {
						if (rel_time < 11801) {
							w33 = 5;
						} else {
							w33 = -29;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8810) {
			if (rel_time < 8225) {
				if (rel_time < 7642) {
					if (rel_time < 7056) {
						if (rel_time < 6469) {
							w33 = 6;
						} else {
							w33 = 114;
						}
					} else {
						if (prod != 2) {
							w33 = -94;
						} else {
							w33 = -4;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 8224) {
							w33 = 128;
						} else {
							w33 = 30;
						}
					} else {
						w33 = -27;
					}
				}
			} else {
				if (prod != 0) {
					if (prod != 2) {
						if (rel_time < 8809) {
							w33 = -67;
						} else {
							w33 = -4;
						}
					} else {
						if (rel_time < 8749) {
							w33 = -1;
						} else {
							w33 = -8;
						}
					}
				} else {
					w33 = -215;
				}
			}
		} else {
			if (rel_time < 8881) {
				if (rel_time < 8813) {
					w33 = 24;
				} else {
					w33 = 189;
				}
			} else {
				if (rel_time < 11733) {
					if (rel_time < 11153) {
						if (rel_time < 10565) {
							w33 = 36;
						} else {
							w33 = -24;
						}
					} else {
						if (rel_time < 11221) {
							w33 = 232;
						} else {
							w33 = 8;
						}
					}
				} else {
					if (rel_time < 11741) {
						w33 = -34;
					} else {
						w33 = -59;
					}
				}
			}
		}
	}
	int w34;
	if (rel_time < 5368) {
		if (rel_time < 4783) {
			if (rel_time < 4198) {
				if (rel_time < 3613) {
					if (rel_time < 2960) {
						if (rel_time < 2375) {
							w34 = 2;
						} else {
							w34 = -31;
						}
					} else {
						if (prod != 2) {
							w34 = 41;
						} else {
							w34 = -34;
						}
					}
				} else {
					if (rel_time < 4066) {
						if (hops < 4) {
							w34 = -82;
						} else {
							w34 = -182;
						}
					} else {
						if (size < 133) {
							w34 = 5;
						} else {
							w34 = -49;
						}
					}
				}
			} else {
				if (rel_time < 4651) {
					if (hops < 4) {
						if (rel_time < 4200) {
							w34 = 114;
						} else {
							w34 = 87;
						}
					} else {
						w34 = 226;
					}
				} else {
					if (size < 133) {
						if (rel_time < 4715) {
							w34 = -30;
						} else {
							w34 = 6;
						}
					} else {
						if (hops < 4) {
							w34 = 32;
						} else {
							w34 = 121;
						}
					}
				}
			}
		} else {
			if (rel_time < 5236) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w34 = -83;
						} else {
							w34 = -112;
						}
					} else {
						w34 = -66;
					}
				} else {
					w34 = -170;
				}
			} else {
				if (size < 133) {
					if (hops < 4) {
						if (rel_time < 5301) {
							w34 = -10;
						} else {
							w34 = -32;
						}
					} else {
						if (rel_time < 5301) {
							w34 = -58;
						} else {
							w34 = -4;
						}
					}
				} else {
					if (rel_time < 5259) {
						if (hops < 3) {
							w34 = -51;
						} else {
							w34 = -22;
						}
					} else {
						w34 = -65;
					}
				}
			}
		}
	} else {
		if (rel_time < 5821) {
			if (hops < 4) {
				if (hops < 2) {
					w34 = 96;
				} else {
					w34 = 164;
				}
			} else {
				w34 = 290;
			}
		} else {
			if (rel_time < 5884) {
				if (rel_time < 5840) {
					if (hops < 3) {
						if (rel_time < 5822) {
							w34 = -17;
						} else {
							w34 = 11;
						}
					} else {
						if (rel_time < 5825) {
							w34 = 21;
						} else {
							w34 = -38;
						}
					}
				} else {
					if (rel_time < 5844) {
						if (rel_time < 5842) {
							w34 = 60;
						} else {
							w34 = 47;
						}
					} else {
						w34 = 120;
					}
				}
			} else {
				if (rel_time < 6406) {
					if (prod != 0) {
						if (rel_time < 5887) {
							w34 = -12;
						} else {
							w34 = 42;
						}
					} else {
						if (hops < 4) {
							w34 = -97;
						} else {
							w34 = -327;
						}
					}
				} else {
					if (rel_time < 6991) {
						if (size < 133) {
							w34 = 75;
						} else {
							w34 = -84;
						}
					} else {
						if (rel_time < 7010) {
							w34 = -86;
						} else {
							w34 = 1;
						}
					}
				}
			}
		}
	}
	int w35;
	if (rel_time < 1790) {
		if (rel_time < 1274) {
			if (prod != 0) {
				if (rel_time < 1162) {
					if (rel_time < 557) {
						if (hops < 2) {
							w35 = -32;
						} else {
							w35 = -14;
						}
					} else {
						if (prod != 2) {
							w35 = -5;
						} else {
							w35 = 2;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 4) {
							w35 = -7;
						} else {
							w35 = -26;
						}
					} else {
						if (hops < 2) {
							w35 = 31;
						} else {
							w35 = 56;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 696) {
						w35 = 70;
					} else {
						if (hops < 2) {
							w35 = 39;
						} else {
							w35 = 16;
						}
					}
				} else {
					if (hops < 4) {
						w35 = 59;
					} else {
						w35 = 91;
					}
				}
			}
		} else {
			if (rel_time < 1727) {
				if (hops < 2) {
					w35 = -164;
				} else {
					w35 = -99;
				}
			} else {
				if (rel_time < 1747) {
					if (rel_time < 1728) {
						if (hops < 2) {
							w35 = -20;
						} else {
							w35 = -6;
						}
					} else {
						if (hops < 3) {
							w35 = 10;
						} else {
							w35 = -11;
						}
					}
				} else {
					if (hops < 2) {
						w35 = -14;
					} else {
						if (hops < 4) {
							w35 = -36;
						} else {
							w35 = -57;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2312) {
			if (rel_time < 1859) {
				if (rel_time < 1791) {
					if (hops < 2) {
						w35 = 3;
					} else {
						if (hops < 4) {
							w35 = 46;
						} else {
							w35 = 7;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w35 = -13;
						} else {
							w35 = -6;
						}
					} else {
						w35 = 20;
					}
				}
			} else {
				if (hops < 2) {
					w35 = 138;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w35 = 107;
						} else {
							w35 = 58;
						}
					} else {
						w35 = 124;
					}
				}
			}
		} else {
			if (rel_time < 2897) {
				if (rel_time < 2444) {
					if (size < 133) {
						if (hops < 3) {
							w35 = -22;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 2332) {
							w35 = 3;
						} else {
							w35 = 47;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w35 = -140;
						} else {
							w35 = -93;
						}
					} else {
						w35 = -34;
					}
				}
			} else {
				if (rel_time < 2916) {
					if (hops < 2) {
						if (rel_time < 2899) {
							w35 = 87;
						} else {
							w35 = 18;
						}
					} else {
						if (hops < 4) {
							w35 = 39;
						} else {
							w35 = 5;
						}
					}
				} else {
					if (rel_time < 2960) {
						if (rel_time < 2917) {
							w35 = -15;
						} else {
							w35 = -56;
						}
					} else {
						if (rel_time < 3545) {
							w35 = 24;
						} else {
							w35 = 0;
						}
					}
				}
			}
		}
	}
	int w36;
	if (rel_time < 8877) {
		if (rel_time < 8292) {
			if (rel_time < 7707) {
				if (rel_time < 7056) {
					if (rel_time < 7010) {
						if (rel_time < 6991) {
							w36 = 1;
						} else {
							w36 = -60;
						}
					} else {
						if (rel_time < 7054) {
							w36 = 106;
						} else {
							w36 = -5;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 2) {
							w36 = -15;
						} else {
							w36 = 28;
						}
					} else {
						if (hops < 3) {
							w36 = -134;
						} else {
							w36 = -91;
						}
					}
				}
			} else {
				if (rel_time < 8160) {
					if (hops < 3) {
						if (hops < 2) {
							w36 = 75;
						} else {
							w36 = 153;
						}
					} else {
						if (hops < 4) {
							w36 = 33;
						} else {
							w36 = 109;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w36 = -35;
						} else {
							w36 = 3;
						}
					} else {
						if (hops < 2) {
							w36 = 58;
						} else {
							w36 = 22;
						}
					}
				}
			}
		} else {
			if (rel_time < 8745) {
				if (hops < 2) {
					if (rel_time < 8294) {
						w36 = -127;
					} else {
						w36 = -89;
					}
				} else {
					if (hops < 3) {
						w36 = -182;
					} else {
						if (hops < 4) {
							w36 = -82;
						} else {
							w36 = -157;
						}
					}
				}
			} else {
				if (size < 133) {
					if (hops < 4) {
						if (hops < 3) {
							w36 = -6;
						} else {
							w36 = -13;
						}
					} else {
						if (rel_time < 8810) {
							w36 = -8;
						} else {
							w36 = 18;
						}
					}
				} else {
					if (rel_time < 8767) {
						w36 = -58;
					} else {
						w36 = -37;
					}
				}
			}
		}
	} else {
		if (rel_time < 9330) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 8879) {
						w36 = 150;
					} else {
						if (rel_time < 8881) {
							w36 = 40;
						} else {
							w36 = 106;
						}
					}
				} else {
					w36 = 231;
				}
			} else {
				w36 = 114;
			}
		} else {
			if (rel_time < 9915) {
				if (size < 133) {
					if (prod != 0) {
						if (rel_time < 9398) {
							w36 = -28;
						} else {
							w36 = 13;
						}
					} else {
						if (hops < 2) {
							w36 = -122;
						} else {
							w36 = -39;
						}
					}
				} else {
					if (rel_time < 9350) {
						w36 = 109;
					} else {
						if (rel_time < 9356) {
							w36 = -8;
						} else {
							w36 = 63;
						}
					}
				}
			} else {
				if (rel_time < 10563) {
					if (prod != 0) {
						if (rel_time < 10519) {
							w36 = -1;
						} else {
							w36 = 39;
						}
					} else {
						if (hops < 3) {
							w36 = 67;
						} else {
							w36 = 96;
						}
					}
				} else {
					if (rel_time < 10636) {
						if (rel_time < 10631) {
							w36 = -8;
						} else {
							w36 = -78;
						}
					} else {
						if (rel_time < 11801) {
							w36 = 6;
						} else {
							w36 = -24;
						}
					}
				}
			}
		}
	}
	int w37;
	if (hops < 2) {
		if (rel_time < 8767) {
			if (rel_time < 8292) {
				if (rel_time < 7597) {
					if (rel_time < 7057) {
						if (rel_time < 7010) {
							w37 = -4;
						} else {
							w37 = 25;
						}
					} else {
						if (prod != 0) {
							w37 = -17;
						} else {
							w37 = -95;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 8182) {
							w37 = 37;
						} else {
							w37 = -15;
						}
					} else {
						if (rel_time < 8164) {
							w37 = -26;
						} else {
							w37 = -57;
						}
					}
				}
			} else {
				if (rel_time < 8745) {
					if (rel_time < 8294) {
						w37 = -92;
					} else {
						w37 = -64;
					}
				} else {
					if (rel_time < 8764) {
						if (rel_time < 8749) {
							w37 = -15;
						} else {
							w37 = -6;
						}
					} else {
						if (rel_time < 8765) {
							w37 = -73;
						} else {
							w37 = -38;
						}
					}
				}
			}
		} else {
			if (rel_time < 9352) {
				if (prod != 0) {
					if (rel_time < 9349) {
						if (rel_time < 8809) {
							w37 = 99;
						} else {
							w37 = -8;
						}
					} else {
						if (rel_time < 9350) {
							w37 = 77;
						} else {
							w37 = 39;
						}
					}
				} else {
					if (rel_time < 8879) {
						w37 = 108;
					} else {
						if (rel_time < 8881) {
							w37 = 31;
						} else {
							w37 = 76;
						}
					}
				}
			} else {
				if (rel_time < 9915) {
					if (rel_time < 9462) {
						if (rel_time < 9398) {
							w37 = -36;
						} else {
							w37 = 7;
						}
					} else {
						w37 = -87;
					}
				} else {
					if (rel_time < 10521) {
						if (size < 133) {
							w37 = 20;
						} else {
							w37 = -12;
						}
					} else {
						if (rel_time < 11107) {
							w37 = -22;
						} else {
							w37 = 2;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5368) {
			if (rel_time < 4783) {
				if (rel_time < 4198) {
					if (rel_time < 3546) {
						if (rel_time < 3501) {
							w37 = -1;
						} else {
							w37 = 40;
						}
					} else {
						if (prod != 0) {
							w37 = -14;
						} else {
							w37 = -60;
						}
					}
				} else {
					if (rel_time < 4651) {
						if (hops < 4) {
							w37 = 68;
						} else {
							w37 = 164;
						}
					} else {
						if (rel_time < 4654) {
							w37 = -22;
						} else {
							w37 = 33;
						}
					}
				}
			} else {
				if (rel_time < 5236) {
					if (hops < 4) {
						if (hops < 3) {
							w37 = -80;
						} else {
							w37 = -48;
						}
					} else {
						w37 = -124;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 5300) {
							w37 = -26;
						} else {
							w37 = 1;
						}
					} else {
						if (rel_time < 5237) {
							w37 = 13;
						} else {
							w37 = -47;
						}
					}
				}
			}
		} else {
			if (rel_time < 5821) {
				if (hops < 4) {
					if (hops < 3) {
						w37 = 99;
					} else {
						w37 = 134;
					}
				} else {
					w37 = 211;
				}
			} else {
				if (rel_time < 6469) {
					if (prod != 0) {
						if (rel_time < 6425) {
							w37 = 24;
						} else {
							w37 = -73;
						}
					} else {
						if (hops < 4) {
							w37 = -101;
						} else {
							w37 = -238;
						}
					}
				} else {
					if (rel_time < 6991) {
						if (rel_time < 6472) {
							w37 = 20;
						} else {
							w37 = 149;
						}
					} else {
						if (rel_time < 7054) {
							w37 = 35;
						} else {
							w37 = 1;
						}
					}
				}
			}
		}
	}
	int w38;
	if (rel_time < 1790) {
		if (rel_time < 1274) {
			if (prod != 0) {
				if (rel_time < 1162) {
					if (rel_time < 557) {
						if (hops < 3) {
							w38 = -9;
						} else {
							w38 = -31;
						}
					} else {
						if (rel_time < 577) {
							w38 = 4;
						} else {
							w38 = -2;
						}
					}
				} else {
					if (rel_time < 1206) {
						if (hops < 2) {
							w38 = 25;
						} else {
							w38 = 37;
						}
					} else {
						if (hops < 4) {
							w38 = -5;
						} else {
							w38 = -19;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 696) {
						w38 = 56;
					} else {
						if (hops < 2) {
							w38 = 28;
						} else {
							w38 = 11;
						}
					}
				} else {
					if (hops < 4) {
						w38 = 42;
					} else {
						w38 = 66;
					}
				}
			}
		} else {
			if (rel_time < 1727) {
				if (hops < 2) {
					w38 = -115;
				} else {
					w38 = -70;
				}
			} else {
				if (rel_time < 1747) {
					if (hops < 3) {
						if (hops < 2) {
							w38 = -8;
						} else {
							w38 = 15;
						}
					} else {
						if (hops < 4) {
							w38 = -23;
						} else {
							w38 = 2;
						}
					}
				} else {
					if (hops < 2) {
						w38 = -9;
					} else {
						if (hops < 4) {
							w38 = -26;
						} else {
							w38 = -41;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2312) {
			if (rel_time < 1859) {
				if (rel_time < 1791) {
					if (hops < 2) {
						w38 = 3;
					} else {
						if (hops < 4) {
							w38 = 34;
						} else {
							w38 = 6;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w38 = -9;
						} else {
							w38 = -5;
						}
					} else {
						w38 = 14;
					}
				}
			} else {
				if (hops < 2) {
					w38 = 98;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w38 = 76;
						} else {
							w38 = 41;
						}
					} else {
						w38 = 90;
					}
				}
			}
		} else {
			if (rel_time < 2897) {
				if (rel_time < 2443) {
					if (size < 133) {
						if (rel_time < 2376) {
							w38 = -12;
						} else {
							w38 = 4;
						}
					} else {
						if (hops < 4) {
							w38 = 14;
						} else {
							w38 = 65;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 2444) {
							w38 = -144;
						} else {
							w38 = -86;
						}
					} else {
						if (rel_time < 2444) {
							w38 = -10;
						} else {
							w38 = -24;
						}
					}
				}
			} else {
				if (rel_time < 2916) {
					if (hops < 2) {
						if (rel_time < 2899) {
							w38 = 63;
						} else {
							w38 = 15;
						}
					} else {
						if (rel_time < 2899) {
							w38 = 18;
						} else {
							w38 = 51;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 3) {
							w38 = -5;
						} else {
							w38 = 4;
						}
					} else {
						if (rel_time < 3482) {
							w38 = 42;
						} else {
							w38 = 5;
						}
					}
				}
			}
		}
	}
	int w39;
	if (rel_time < 8877) {
		if (rel_time < 8292) {
			if (rel_time < 7707) {
				if (rel_time < 7056) {
					if (rel_time < 6537) {
						if (rel_time < 5884) {
							w39 = 1;
						} else {
							w39 = -15;
						}
					} else {
						if (prod != 2) {
							w39 = 58;
						} else {
							w39 = -48;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w39 = 4;
						} else {
							w39 = -48;
						}
					} else {
						if (hops < 4) {
							w39 = -80;
						} else {
							w39 = -43;
						}
					}
				}
			} else {
				if (rel_time < 8160) {
					if (hops < 2) {
						if (rel_time < 7711) {
							w39 = 31;
						} else {
							w39 = 53;
						}
					} else {
						if (hops < 3) {
							w39 = 107;
						} else {
							w39 = 43;
						}
					}
				} else {
					if (rel_time < 8180) {
						if (rel_time < 8164) {
							w39 = -21;
						} else {
							w39 = -12;
						}
					} else {
						if (size < 133) {
							w39 = 7;
						} else {
							w39 = 23;
						}
					}
				}
			}
		} else {
			if (rel_time < 8745) {
				if (hops < 2) {
					if (rel_time < 8294) {
						w39 = -67;
					} else {
						w39 = -47;
					}
				} else {
					if (hops < 3) {
						w39 = -131;
					} else {
						if (hops < 4) {
							w39 = -60;
						} else {
							w39 = -115;
						}
					}
				}
			} else {
				if (size < 133) {
					if (hops < 3) {
						if (rel_time < 8764) {
							w39 = -7;
						} else {
							w39 = 4;
						}
					} else {
						if (rel_time < 8764) {
							w39 = 4;
						} else {
							w39 = -19;
						}
					}
				} else {
					if (rel_time < 8765) {
						w39 = -58;
					} else {
						if (rel_time < 8771) {
							w39 = -25;
						} else {
							w39 = -38;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9330) {
			if (hops < 2) {
				if (rel_time < 8879) {
					w39 = 76;
				} else {
					if (rel_time < 8881) {
						w39 = 22;
					} else {
						w39 = 53;
					}
				}
			} else {
				if (hops < 3) {
					w39 = 162;
				} else {
					if (hops < 4) {
						w39 = 61;
					} else {
						w39 = 105;
					}
				}
			}
		} else {
			if (rel_time < 9915) {
				if (size < 133) {
					if (rel_time < 9464) {
						if (prod != 1) {
							w39 = -24;
						} else {
							w39 = -6;
						}
					} else {
						if (hops < 3) {
							w39 = -61;
						} else {
							w39 = 11;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 9350) {
							w39 = 57;
						} else {
							w39 = 30;
						}
					} else {
						if (rel_time < 9356) {
							w39 = -24;
						} else {
							w39 = 45;
						}
					}
				}
			} else {
				if (rel_time < 10565) {
					if (prod != 0) {
						if (rel_time < 10519) {
							w39 = -2;
						} else {
							w39 = 23;
						}
					} else {
						if (hops < 2) {
							w39 = 35;
						} else {
							w39 = 59;
						}
					}
				} else {
					if (rel_time < 10636) {
						if (hops < 3) {
							w39 = -17;
						} else {
							w39 = -72;
						}
					} else {
						if (rel_time < 11216) {
							w39 = -8;
						} else {
							w39 = 10;
						}
					}
				}
			}
		}
	}
	int w40;
	if (rel_time < 5368) {
		if (rel_time < 4717) {
			if (rel_time < 4198) {
				if (rel_time < 3613) {
					if (rel_time < 3029) {
						if (rel_time < 2443) {
							w40 = 0;
						} else {
							w40 = -12;
						}
					} else {
						if (prod != 2) {
							w40 = 28;
						} else {
							w40 = -30;
						}
					}
				} else {
					if (rel_time < 4067) {
						if (hops < 4) {
							w40 = -45;
						} else {
							w40 = -112;
						}
					} else {
						if (size < 133) {
							w40 = 11;
						} else {
							w40 = -32;
						}
					}
				}
			} else {
				if (rel_time < 4651) {
					if (hops < 4) {
						if (hops < 2) {
							w40 = 81;
						} else {
							w40 = 47;
						}
					} else {
						w40 = 118;
					}
				} else {
					if (size < 133) {
						if (rel_time < 4715) {
							w40 = -18;
						} else {
							w40 = 6;
						}
					} else {
						if (hops < 4) {
							w40 = 18;
						} else {
							w40 = 78;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 5237) {
						if (hops < 2) {
							w40 = -29;
						} else {
							w40 = -8;
						}
					} else {
						if (rel_time < 5301) {
							w40 = 0;
						} else {
							w40 = -19;
						}
					}
				} else {
					if (rel_time < 5256) {
						w40 = -68;
					} else {
						if (rel_time < 5257) {
							w40 = -33;
						} else {
							w40 = -22;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w40 = -60;
					} else {
						w40 = -36;
					}
				} else {
					w40 = -92;
				}
			}
		}
	} else {
		if (rel_time < 5821) {
			if (hops < 4) {
				if (hops < 3) {
					w40 = 69;
				} else {
					w40 = 94;
				}
			} else {
				w40 = 152;
			}
		} else {
			if (rel_time < 5884) {
				if (rel_time < 5840) {
					if (rel_time < 5825) {
						if (hops < 2) {
							w40 = 9;
						} else {
							w40 = -6;
						}
					} else {
						if (hops < 2) {
							w40 = -42;
						} else {
							w40 = -11;
						}
					}
				} else {
					if (rel_time < 5844) {
						if (rel_time < 5842) {
							w40 = 44;
						} else {
							w40 = 26;
						}
					} else {
						w40 = 80;
					}
				}
			} else {
				if (rel_time < 6406) {
					if (prod != 0) {
						if (rel_time < 5887) {
							w40 = -8;
						} else {
							w40 = 35;
						}
					} else {
						if (rel_time < 5953) {
							w40 = -198;
						} else {
							w40 = -49;
						}
					}
				} else {
					if (rel_time < 6425) {
						if (rel_time < 6410) {
							w40 = 36;
						} else {
							w40 = 73;
						}
					} else {
						if (rel_time < 6430) {
							w40 = -46;
						} else {
							w40 = 1;
						}
					}
				}
			}
		}
	}
	int w41;
	if (rel_time < 11801) {
		if (rel_time < 11216) {
			if (rel_time < 10568) {
				if (rel_time < 9978) {
					if (rel_time < 7054) {
						if (rel_time < 7012) {
							w41 = 0;
						} else {
							w41 = 73;
						}
					} else {
						if (rel_time < 7575) {
							w41 = -37;
						} else {
							w41 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 10500) {
							w41 = 22;
						} else {
							w41 = -16;
						}
					} else {
						if (rel_time < 10047) {
							w41 = 5;
						} else {
							w41 = 47;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (prod != 2) {
						if (hops < 2) {
							w41 = -21;
						} else {
							w41 = 11;
						}
					} else {
						if (rel_time < 11085) {
							w41 = 91;
						} else {
							w41 = 9;
						}
					}
				} else {
					if (rel_time < 10636) {
						w41 = -76;
					} else {
						if (hops < 4) {
							w41 = -41;
						} else {
							w41 = 12;
						}
					}
				}
			}
		} else {
			if (rel_time < 11221) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11218) {
							w41 = 55;
						} else {
							w41 = 12;
						}
					} else {
						if (rel_time < 11218) {
							w41 = -25;
						} else {
							w41 = -9;
						}
					}
				} else {
					if (hops < 4) {
						w41 = 102;
					} else {
						w41 = 162;
					}
				}
			} else {
				if (rel_time < 11669) {
					if (hops < 2) {
						w41 = 63;
					} else {
						w41 = -26;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11735) {
							w41 = -22;
						} else {
							w41 = 0;
						}
					} else {
						if (rel_time < 11741) {
							w41 = 3;
						} else {
							w41 = 84;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 11809) {
				if (rel_time < 11804) {
					if (hops < 2) {
						w41 = -33;
					} else {
						w41 = -13;
					}
				} else {
					if (hops < 2) {
						w41 = 16;
					} else {
						if (hops < 3) {
							w41 = -28;
						} else {
							w41 = -8;
						}
					}
				}
			} else {
				if (hops < 2) {
					w41 = -48;
				} else {
					w41 = -17;
				}
			}
		} else {
			w41 = -41;
		}
	}
	int w42;
	if (rel_time < 5368) {
		if (rel_time < 4783) {
			if (rel_time < 4198) {
				if (rel_time < 3545) {
					if (rel_time < 3501) {
						if (rel_time < 3482) {
							w42 = 0;
						} else {
							w42 = -22;
						}
					} else {
						if (hops < 4) {
							w42 = 23;
						} else {
							w42 = 111;
						}
					}
				} else {
					if (prod != 0) {
						if (prod != 2) {
							w42 = -13;
						} else {
							w42 = 12;
						}
					} else {
						if (hops < 2) {
							w42 = -67;
						} else {
							w42 = -27;
						}
					}
				}
			} else {
				if (rel_time < 4651) {
					if (hops < 4) {
						if (hops < 2) {
							w42 = 57;
						} else {
							w42 = 33;
						}
					} else {
						w42 = 86;
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w42 = -16;
						} else {
							w42 = 1;
						}
					} else {
						if (hops < 4) {
							w42 = 13;
						} else {
							w42 = 57;
						}
					}
				}
			}
		} else {
			if (rel_time < 5236) {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 4785) {
							w42 = -37;
						} else {
							w42 = -48;
						}
					} else {
						w42 = -26;
					}
				} else {
					w42 = -67;
				}
			} else {
				if (prod != 1) {
					if (rel_time < 5240) {
						if (rel_time < 5237) {
							w42 = -17;
						} else {
							w42 = 0;
						}
					} else {
						if (rel_time < 5256) {
							w42 = -47;
						} else {
							w42 = -19;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 5301) {
							w42 = 25;
						} else {
							w42 = -16;
						}
					} else {
						if (rel_time < 5301) {
							w42 = -64;
						} else {
							w42 = 11;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5821) {
			if (hops < 4) {
				if (hops < 3) {
					w42 = 49;
				} else {
					w42 = 67;
				}
			} else {
				w42 = 110;
			}
		} else {
			if (rel_time < 6991) {
				if (rel_time < 6537) {
					if (prod != 0) {
						if (rel_time < 6425) {
							w42 = 15;
						} else {
							w42 = -12;
						}
					} else {
						if (hops < 4) {
							w42 = -29;
						} else {
							w42 = -153;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w42 = 19;
						} else {
							w42 = 58;
						}
					} else {
						if (hops < 4) {
							w42 = 97;
						} else {
							w42 = 144;
						}
					}
				}
			} else {
				if (rel_time < 7010) {
					if (hops < 3) {
						if (rel_time < 6995) {
							w42 = -45;
						} else {
							w42 = -11;
						}
					} else {
						if (rel_time < 6995) {
							w42 = -8;
						} else {
							w42 = -67;
						}
					}
				} else {
					if (rel_time < 7054) {
						if (hops < 3) {
							w42 = 20;
						} else {
							w42 = 75;
						}
					} else {
						if (rel_time < 7575) {
							w42 = -26;
						} else {
							w42 = 1;
						}
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32 + w33 + w34 + w35 + w36 + w37 + w38 + w39 + w40 + w41 + w42) >> 8;
}
