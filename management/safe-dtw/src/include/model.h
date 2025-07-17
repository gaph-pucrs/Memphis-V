#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int model(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w0 = 8601;
			} else {
				w0 = 9139;
			}
		} else {
			if (hops < 4) {
				w0 = 9676;
			} else {
				w0 = 10211;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w0 = 61377;
			} else {
				w0 = 71407;
			}
		} else {
			if (rel_time < 121) {
				w0 = 52898;
			} else {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 3) {
							w0 = 59556;
						} else {
							w0 = 60460;
						}
					} else {
						w0 = 58428;
					}
				} else {
					w0 = 58365;
				}
			}
		}
	}
	int w1;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w1 = 6021;
			} else {
				w1 = 6397;
			}
		} else {
			if (hops < 4) {
				w1 = 6773;
			} else {
				w1 = 7149;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w1 = 42998;
			} else {
				w1 = 49998;
			}
		} else {
			if (rel_time < 121) {
				w1 = 37058;
			} else {
				if (hops < 2) {
					if (cons != 3) {
						if (cons != 1) {
							w1 = 41422;
						} else {
							w1 = 40301;
						}
					} else {
						w1 = 40311;
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w1 = 41171;
						} else {
							w1 = 42130;
						}
					} else {
						w1 = 42160;
					}
				}
			}
		}
	}
	int w2;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w2 = 4215;
			} else {
				w2 = 4478;
			}
		} else {
			if (hops < 4) {
				w2 = 4742;
			} else {
				w2 = 5005;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w2 = 30122;
			} else {
				w2 = 35008;
			}
		} else {
			if (rel_time < 121) {
				w2 = 25961;
			} else {
				if (hops < 3) {
					if (rel_time < 14960) {
						if (cons != 2) {
							w2 = 28596;
						} else {
							w2 = 29129;
						}
					} else {
						w2 = 31155;
					}
				} else {
					w2 = 29427;
				}
			}
		}
	}
	int w3;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w3 = 2950;
			} else {
				w3 = 3135;
			}
		} else {
			if (hops < 4) {
				w3 = 3319;
			} else {
				w3 = 3504;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w3 = 21102;
			} else {
				w3 = 24512;
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (rel_time < 121) {
						w3 = 18187;
					} else {
						if (hops < 3) {
							w3 = 19784;
						} else {
							w3 = 20324;
						}
					}
				} else {
					if (hops < 2) {
						w3 = 20235;
					} else {
						w3 = 20708;
					}
				}
			} else {
				if (rel_time < 14392) {
					w3 = 20585;
				} else {
					w3 = 22191;
				}
			}
		}
	}
	int w4;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w4 = 2065;
			} else {
				w4 = 2194;
			}
		} else {
			if (hops < 4) {
				w4 = 2324;
			} else {
				w4 = 2453;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w4 = 14783;
			} else {
				if (hops < 2) {
					w4 = 16504;
				} else {
					w4 = 17472;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 121) {
					w4 = 12075;
				} else {
					if (cons != 3) {
						if (cons != 1) {
							w4 = 14186;
						} else {
							w4 = 13705;
						}
					} else {
						w4 = 13710;
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 4) {
						if (cons != 2) {
							w4 = 14015;
						} else {
							w4 = 14435;
						}
					} else {
						if (rel_time < 14392) {
							w4 = 14484;
						} else {
							w4 = 15683;
						}
					}
				} else {
					w4 = 14844;
				}
			}
		}
	}
	int w5;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w5 = 1446;
			} else {
				w5 = 1536;
			}
		} else {
			if (hops < 4) {
				w5 = 1627;
			} else {
				w5 = 1717;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w5 = 10356;
			} else {
				if (hops < 3) {
					w5 = 11743;
				} else {
					w5 = 12551;
				}
			}
		} else {
			if (rel_time < 121) {
				w5 = 8711;
			} else {
				if (hops < 3) {
					if (cons != 4) {
						if (rel_time < 180) {
							w5 = 10824;
						} else {
							w5 = 9764;
						}
					} else {
						if (rel_time < 14392) {
							w5 = 10021;
						} else {
							w5 = 10722;
						}
					}
				} else {
					if (rel_time < 14960) {
						if (hops < 4) {
							w5 = 10048;
						} else {
							w5 = 10386;
						}
					} else {
						w5 = 11549;
					}
				}
			}
		}
	}
	int w6;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w6 = 1012;
			} else {
				w6 = 1075;
			}
		} else {
			if (hops < 4) {
				w6 = 1139;
			} else {
				w6 = 1202;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 3) {
					w6 = 6938;
				} else {
					w6 = 7833;
				}
			} else {
				if (cons != 3) {
					if (hops < 2) {
						w6 = 8260;
					} else {
						w6 = 8863;
					}
				} else {
					w6 = 7902;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 121) {
					w6 = 5876;
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w6 = 6669;
						} else {
							w6 = 6933;
						}
					} else {
						if (rel_time < 180) {
							w6 = 7512;
						} else {
							w6 = 6936;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (cons != 3) {
						if (rel_time < 180) {
							w6 = 7885;
						} else {
							w6 = 7160;
						}
					} else {
						w6 = 6895;
					}
				} else {
					if (rel_time < 121) {
						w6 = 6192;
					} else {
						w6 = 6895;
					}
				}
			}
		}
	}
	int w7;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w7 = 708;
			} else {
				w7 = 753;
			}
		} else {
			if (hops < 4) {
				w7 = 797;
			} else {
				w7 = 842;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 2) {
				if (rel_time < 63) {
					if (hops < 2) {
						w7 = 4594;
					} else {
						w7 = 5334;
					}
				} else {
					if (hops < 3) {
						w7 = 5506;
					} else {
						w7 = 6034;
					}
				}
			} else {
				w7 = 6304;
			}
		} else {
			if (rel_time < 14960) {
				if (hops < 4) {
					if (rel_time < 121) {
						if (hops < 3) {
							w7 = 4088;
						} else {
							w7 = 4552;
						}
					} else {
						if (rel_time < 180) {
							w7 = 5407;
						} else {
							w7 = 4836;
						}
					}
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w7 = 5011;
						} else {
							w7 = 5305;
						}
					} else {
						w7 = 5336;
					}
				}
			} else {
				if (hops < 3) {
					w7 = 5405;
				} else {
					w7 = 5968;
				}
			}
		}
	}
	int w8;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w8 = 496;
			} else {
				w8 = 527;
			}
		} else {
			if (hops < 4) {
				w8 = 558;
			} else {
				w8 = 589;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 2) {
				if (hops < 2) {
					if (rel_time < 63) {
						w8 = 3223;
					} else {
						w8 = 3706;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 175) {
							w8 = 3789;
						} else {
							w8 = 4182;
						}
					} else {
						w8 = 4645;
					}
				}
			} else {
				if (hops < 3) {
					w8 = 4256;
				} else {
					w8 = 4718;
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 473) {
							w8 = 2926;
						} else {
							w8 = 3226;
						}
					} else {
						if (rel_time < 14392) {
							w8 = 3368;
						} else {
							w8 = 3882;
						}
					}
				} else {
					w8 = 3419;
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 473) {
							w8 = 3059;
						} else {
							w8 = 3378;
						}
					} else {
						if (rel_time < 180) {
							w8 = 3911;
						} else {
							w8 = 3512;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (rel_time < 737) {
							w8 = 3241;
						} else {
							w8 = 3565;
						}
					} else {
						if (hops < 3) {
							w8 = 3678;
						} else {
							w8 = 4188;
						}
					}
				}
			}
		}
	}
	int w9;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w9 = 347;
			} else {
				w9 = 369;
			}
		} else {
			if (hops < 4) {
				w9 = 391;
			} else {
				w9 = 413;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 3) {
					w9 = 2338;
				} else {
					w9 = 2724;
				}
			} else {
				if (hops < 4) {
					if (cons != 3) {
						w9 = 2953;
					} else {
						if (hops < 2) {
							w9 = 2456;
						} else {
							w9 = 2764;
						}
					}
				} else {
					w9 = 3543;
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 473) {
							w9 = 2037;
						} else {
							w9 = 2294;
						}
					} else {
						if (rel_time < 180) {
							w9 = 2577;
						} else {
							w9 = 2387;
						}
					}
				} else {
					if (rel_time < 737) {
						w9 = 2161;
					} else {
						if (rel_time < 14392) {
							w9 = 2426;
						} else {
							w9 = 2658;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 2) {
						if (cons != 4) {
							w9 = 2364;
						} else {
							w9 = 2489;
						}
					} else {
						if (rel_time < 180) {
							w9 = 2874;
						} else {
							w9 = 2486;
						}
					}
				} else {
					if (rel_time < 14960) {
						if (cons != 2) {
							w9 = 2546;
						} else {
							w9 = 2680;
						}
					} else {
						w9 = 3511;
					}
				}
			}
		}
	}
	int w10;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w10 = 243;
			} else {
				w10 = 258;
			}
		} else {
			if (hops < 4) {
				w10 = 273;
			} else {
				w10 = 289;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 2) {
				if (hops < 2) {
					if (rel_time < 63) {
						w10 = 1564;
					} else {
						w10 = 1787;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 63) {
							w10 = 1779;
						} else {
							w10 = 1995;
						}
					} else {
						if (rel_time < 175) {
							w10 = 2103;
						} else {
							w10 = 2664;
						}
					}
				}
			} else {
				if (hops < 3) {
					w10 = 2099;
				} else {
					w10 = 2388;
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 2) {
					if (rel_time < 14960) {
						if (rel_time < 737) {
							w10 = 1434;
						} else {
							w10 = 1594;
						}
					} else {
						w10 = 1931;
					}
				} else {
					if (rel_time < 180) {
						w10 = 1868;
					} else {
						w10 = 1664;
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 4) {
						if (cons != 2) {
							w10 = 1641;
						} else {
							w10 = 1716;
						}
					} else {
						if (rel_time < 737) {
							w10 = 1566;
						} else {
							w10 = 1752;
						}
					}
				} else {
					if (rel_time < 14960) {
						if (cons != 1) {
							w10 = 1836;
						} else {
							w10 = 1734;
						}
					} else {
						w10 = 2490;
					}
				}
			}
		}
	}
	int w11;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w11 = 170;
			} else {
				w11 = 181;
			}
		} else {
			if (hops < 4) {
				w11 = 191;
			} else {
				w11 = 202;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 2) {
				if (hops < 3) {
					if (rel_time < 175) {
						if (rel_time < 63) {
							w11 = 1140;
						} else {
							w11 = 1238;
						}
					} else {
						w11 = 1372;
					}
				} else {
					if (hops < 4) {
						w11 = 1405;
					} else {
						if (rel_time < 175) {
							w11 = 1481;
						} else {
							w11 = 1890;
						}
					}
				}
			} else {
				if (hops < 4) {
					w11 = 1506;
				} else {
					w11 = 1923;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 121) {
					if (hops < 2) {
						w11 = 996;
					} else {
						w11 = 802;
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w11 = 1119;
						} else {
							w11 = 1170;
						}
					} else {
						if (rel_time < 737) {
							w11 = 1066;
						} else {
							w11 = 1202;
						}
					}
				}
			} else {
				if (rel_time < 14960) {
					if (cons != 2) {
						if (rel_time < 737) {
							w11 = 1051;
						} else {
							w11 = 1197;
						}
					} else {
						if (rel_time < 180) {
							w11 = 1581;
						} else {
							w11 = 1239;
						}
					}
				} else {
					w11 = 1578;
				}
			}
		}
	}
	int w12;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w12 = 119;
			} else {
				w12 = 127;
			}
		} else {
			if (hops < 4) {
				w12 = 134;
			} else {
				w12 = 142;
			}
		}
	} else {
		if (prod != 0) {
			if (hops < 3) {
				if (rel_time < 63) {
					w12 = 799;
				} else {
					if (cons != 3) {
						if (hops < 2) {
							w12 = 939;
						} else {
							w12 = 1045;
						}
					} else {
						w12 = 868;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 63) {
						w12 = 897;
					} else {
						if (rel_time < 111) {
							w12 = 1138;
						} else {
							w12 = 1024;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 63) {
							w12 = 1073;
						} else {
							w12 = 1370;
						}
					} else {
						w12 = 981;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 14960) {
					if (cons != 2) {
						if (cons != 4) {
							w12 = 753;
						} else {
							w12 = 801;
						}
					} else {
						if (rel_time < 180) {
							w12 = 961;
						} else {
							w12 = 814;
						}
					}
				} else {
					w12 = 996;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 121) {
						if (hops < 3) {
							w12 = 563;
						} else {
							w12 = 778;
						}
					} else {
						if (cons != 4) {
							w12 = 819;
						} else {
							w12 = 860;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w12 = 847;
						} else {
							w12 = 951;
						}
					} else {
						if (rel_time < 14392) {
							w12 = 984;
						} else {
							w12 = 1306;
						}
					}
				}
			}
		}
	}
	int w13;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w13 = 83;
			} else {
				w13 = 89;
			}
		} else {
			if (hops < 4) {
				w13 = 94;
			} else {
				w13 = 99;
			}
		}
	} else {
		if (prod != 0) {
			if (hops < 2) {
				if (cons != 2) {
					if (rel_time < 175) {
						w13 = 541;
					} else {
						w13 = 615;
					}
				} else {
					w13 = 699;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 63) {
						w13 = 617;
					} else {
						if (cons != 3) {
							w13 = 749;
						} else {
							w13 = 670;
						}
					}
				} else {
					if (cons != 3) {
						if (rel_time < 63) {
							w13 = 760;
						} else {
							w13 = 964;
						}
					} else {
						w13 = 695;
					}
				}
			}
		} else {
			if (rel_time < 14960) {
				if (hops < 2) {
					if (cons != 2) {
						if (rel_time < 737) {
							w13 = 456;
						} else {
							w13 = 542;
						}
					} else {
						if (rel_time < 180) {
							w13 = 674;
						} else {
							w13 = 570;
						}
					}
				} else {
					if (hops < 4) {
						if (cons != 1) {
							w13 = 586;
						} else {
							w13 = 552;
						}
					} else {
						if (rel_time < 180) {
							w13 = 842;
						} else {
							w13 = 626;
						}
					}
				}
			} else {
				if (hops < 3) {
					w13 = 676;
				} else {
					w13 = 827;
				}
			}
		}
	}
	int w14;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w14 = 58;
			} else {
				w14 = 62;
			}
		} else {
			if (hops < 4) {
				w14 = 66;
			} else {
				w14 = 69;
			}
		}
	} else {
		if (prod != 0) {
			if (hops < 3) {
				if (cons != 2) {
					if (hops < 2) {
						if (rel_time < 63) {
							w14 = 357;
						} else {
							w14 = 418;
						}
					} else {
						if (rel_time < 175) {
							w14 = 434;
						} else {
							w14 = 492;
						}
					}
				} else {
					w14 = 507;
				}
			} else {
				if (cons != 2) {
					if (hops < 4) {
						if (rel_time < 63) {
							w14 = 446;
						} else {
							w14 = 505;
						}
					} else {
						if (rel_time < 175) {
							w14 = 523;
						} else {
							w14 = 662;
						}
					}
				} else {
					w14 = 603;
				}
			}
		} else {
			if (cons != 1) {
				if (rel_time < 180) {
					if (hops < 3) {
						w14 = 462;
					} else {
						if (hops < 4) {
							w14 = 616;
						} else {
							w14 = 882;
						}
					}
				} else {
					if (rel_time < 737) {
						if (hops < 3) {
							w14 = 323;
						} else {
							w14 = 270;
						}
					} else {
						if (rel_time < 14960) {
							w14 = 408;
						} else {
							w14 = 509;
						}
					}
				}
			} else {
				if (hops < 2) {
					w14 = 357;
				} else {
					if (rel_time < 121) {
						if (hops < 3) {
							w14 = 230;
						} else {
							w14 = 374;
						}
					} else {
						if (hops < 4) {
							w14 = 391;
						} else {
							w14 = 417;
						}
					}
				}
			}
		}
	}
	int w15;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w15 = 41;
			} else {
				w15 = 43;
			}
		} else {
			if (hops < 4) {
				w15 = 46;
			} else {
				w15 = 49;
			}
		}
	} else {
		if (hops < 3) {
			if (cons != 4) {
				if (prod != 0) {
					if (cons != 2) {
						if (hops < 2) {
							w15 = 264;
						} else {
							w15 = 304;
						}
					} else {
						w15 = 355;
					}
				} else {
					if (rel_time < 121) {
						if (hops < 2) {
							w15 = 232;
						} else {
							w15 = 161;
						}
					} else {
						if (rel_time < 180) {
							w15 = 324;
						} else {
							w15 = 267;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 14392) {
						if (rel_time < 737) {
							w15 = 252;
						} else {
							w15 = 283;
						}
					} else {
						w15 = 346;
					}
				} else {
					if (rel_time < 374) {
						w15 = 345;
					} else {
						w15 = 304;
					}
				}
			}
		} else {
			if (rel_time < 374) {
				if (cons != 2) {
					if (prod != 0) {
						if (hops < 4) {
							w15 = 341;
						} else {
							w15 = 404;
						}
					} else {
						w15 = 262;
					}
				} else {
					if (hops < 4) {
						w15 = 417;
					} else {
						w15 = 563;
					}
				}
			} else {
				if (rel_time < 737) {
					if (rel_time < 473) {
						if (hops < 4) {
							w15 = 148;
						} else {
							w15 = 184;
						}
					} else {
						w15 = 219;
					}
				} else {
					if (rel_time < 14960) {
						if (hops < 4) {
							w15 = 289;
						} else {
							w15 = 319;
						}
					} else {
						if (hops < 4) {
							w15 = 400;
						} else {
							w15 = 538;
						}
					}
				}
			}
		}
	}
	int w16;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w16 = 29;
			} else {
				w16 = 30;
			}
		} else {
			if (hops < 4) {
				w16 = 32;
			} else {
				w16 = 34;
			}
		}
	} else {
		if (hops < 2) {
			if (cons != 2) {
				if (cons != 4) {
					if (rel_time < 13822) {
						if (prod != 0) {
							w16 = 185;
						} else {
							w16 = 171;
						}
					} else {
						if (rel_time < 14581) {
							w16 = 188;
						} else {
							w16 = 171;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (rel_time < 374) {
							w16 = 232;
						} else {
							w16 = 194;
						}
					} else {
						w16 = 243;
					}
				}
			} else {
				if (rel_time < 180) {
					w16 = 237;
				} else {
					w16 = 197;
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (prod != 0) {
						if (rel_time < 63) {
							w16 = 212;
						} else {
							w16 = 234;
						}
					} else {
						if (rel_time < 473) {
							w16 = 128;
						} else {
							w16 = 193;
						}
					}
				} else {
					if (rel_time < 180) {
						if (hops < 4) {
							w16 = 264;
						} else {
							w16 = 396;
						}
					} else {
						if (hops < 3) {
							w16 = 188;
						} else {
							w16 = 226;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 374) {
						w16 = 251;
					} else {
						if (rel_time < 737) {
							w16 = 179;
						} else {
							w16 = 214;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (rel_time < 374) {
							w16 = 352;
						} else {
							w16 = 288;
						}
					} else {
						w16 = 381;
					}
				}
			}
		}
	}
	int w17;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w17 = 20;
			} else {
				w17 = 21;
			}
		} else {
			if (hops < 4) {
				w17 = 23;
			} else {
				w17 = 24;
			}
		}
	} else {
		if (hops < 2) {
			if (cons != 1) {
				if (cons != 3) {
					if (rel_time < 374) {
						w17 = 165;
					} else {
						if (rel_time < 737) {
							w17 = 62;
						} else {
							w17 = 140;
						}
					}
				} else {
					if (rel_time < 175) {
						w17 = 143;
					} else {
						if (rel_time < 473) {
							w17 = 99;
						} else {
							w17 = 122;
						}
					}
				}
			} else {
				if (rel_time < 13822) {
					if (rel_time < 10788) {
						if (rel_time < 6995) {
							w17 = 118;
						} else {
							w17 = 124;
						}
					} else {
						if (rel_time < 11547) {
							w17 = 103;
						} else {
							w17 = 116;
						}
					}
				} else {
					w17 = 134;
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (prod != 0) {
						if (hops < 3) {
							w17 = 146;
						} else {
							w17 = 166;
						}
					} else {
						if (rel_time < 473) {
							w17 = 90;
						} else {
							w17 = 135;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 111) {
							w17 = 184;
						} else {
							w17 = 132;
						}
					} else {
						if (rel_time < 180) {
							w17 = 228;
						} else {
							w17 = 158;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 374) {
						w17 = 176;
					} else {
						if (rel_time < 14392) {
							w17 = 147;
						} else {
							w17 = 175;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (rel_time < 737) {
							w17 = 169;
						} else {
							w17 = 208;
						}
					} else {
						w17 = 270;
					}
				}
			}
		}
	}
	int w18;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w18 = 14;
			} else {
				w18 = 15;
			}
		} else {
			if (hops < 4) {
				w18 = 16;
			} else {
				w18 = 17;
			}
		}
	} else {
		if (cons != 4) {
			if (cons != 2) {
				if (hops < 2) {
					if (rel_time < 13822) {
						if (rel_time < 10995) {
							w18 = 85;
						} else {
							w18 = 79;
						}
					} else {
						if (rel_time < 14581) {
							w18 = 94;
						} else {
							w18 = 84;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w18 = 107;
						} else {
							w18 = 134;
						}
					} else {
						if (rel_time < 473) {
							w18 = 63;
						} else {
							w18 = 95;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 180) {
						if (rel_time < 111) {
							w18 = 122;
						} else {
							w18 = 108;
						}
					} else {
						if (rel_time < 10978) {
							w18 = 92;
						} else {
							w18 = 99;
						}
					}
				} else {
					if (rel_time < 180) {
						if (hops < 4) {
							w18 = 145;
						} else {
							w18 = 211;
						}
					} else {
						if (hops < 4) {
							w18 = 109;
						} else {
							w18 = 120;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 14392) {
					if (rel_time < 374) {
						if (hops < 3) {
							w18 = 115;
						} else {
							w18 = 131;
						}
					} else {
						if (rel_time < 737) {
							w18 = 68;
						} else {
							w18 = 102;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w18 = 129;
						} else {
							w18 = 89;
						}
					} else {
						w18 = 165;
					}
				}
			} else {
				if (rel_time < 374) {
					w18 = 201;
				} else {
					if (rel_time < 737) {
						w18 = 36;
					} else {
						if (rel_time < 14392) {
							w18 = 146;
						} else {
							w18 = 192;
						}
					}
				}
			}
		}
	}
	int w19;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w19 = 10;
			} else {
				w19 = 10;
			}
		} else {
			if (hops < 4) {
				w19 = 11;
			} else {
				w19 = 12;
			}
		}
	} else {
		if (hops < 2) {
			if (cons != 2) {
				if (cons != 4) {
					if (prod != 0) {
						if (rel_time < 63) {
							w19 = 56;
						} else {
							w19 = 75;
						}
					} else {
						if (rel_time < 473) {
							w19 = 48;
						} else {
							w19 = 59;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (rel_time < 737) {
							w19 = 52;
						} else {
							w19 = 67;
						}
					} else {
						w19 = 90;
					}
				}
			} else {
				if (rel_time < 1116) {
					w19 = 80;
				} else {
					if (rel_time < 1701) {
						w19 = -15;
					} else {
						if (rel_time < 10220) {
							w19 = 66;
						} else {
							w19 = 70;
						}
					}
				}
			}
		} else {
			if (rel_time < 374) {
				if (hops < 3) {
					if (cons != 1) {
						if (prod != 0) {
							w19 = 85;
						} else {
							w19 = 62;
						}
					} else {
						if (rel_time < 63) {
							w19 = 59;
						} else {
							w19 = 29;
						}
					}
				} else {
					if (rel_time < 175) {
						if (prod != 0) {
							w19 = 84;
						} else {
							w19 = 100;
						}
					} else {
						if (hops < 4) {
							w19 = 105;
						} else {
							w19 = 185;
						}
					}
				}
			} else {
				if (rel_time < 473) {
					if (hops < 4) {
						if (hops < 3) {
							w19 = 18;
						} else {
							w19 = 20;
						}
					} else {
						w19 = 48;
					}
				} else {
					if (cons != 4) {
						if (rel_time < 11547) {
							w19 = 66;
						} else {
							w19 = 72;
						}
					} else {
						if (hops < 4) {
							w19 = 74;
						} else {
							w19 = 100;
						}
					}
				}
			}
		}
	}
	int w20;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w20 = 7;
			} else {
				w20 = 7;
			}
		} else {
			if (hops < 4) {
				w20 = 8;
			} else {
				w20 = 8;
			}
		}
	} else {
		if (cons != 1) {
			if (rel_time < 374) {
				if (hops < 3) {
					if (rel_time < 111) {
						if (hops < 2) {
							w20 = 53;
						} else {
							w20 = 68;
						}
					} else {
						if (hops < 2) {
							w20 = 60;
						} else {
							w20 = 52;
						}
					}
				} else {
					if (prod != 0) {
						w20 = 63;
					} else {
						if (hops < 4) {
							w20 = 87;
						} else {
							w20 = 164;
						}
					}
				}
			} else {
				if (rel_time < 737) {
					if (hops < 3) {
						if (hops < 2) {
							w20 = 19;
						} else {
							w20 = 37;
						}
					} else {
						if (rel_time < 563) {
							w20 = 19;
						} else {
							w20 = 6;
						}
					}
				} else {
					if (cons != 3) {
						if (hops < 4) {
							w20 = 50;
						} else {
							w20 = 69;
						}
					} else {
						if (hops < 3) {
							w20 = 48;
						} else {
							w20 = 40;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 3960) {
					if (rel_time < 1684) {
						if (hops < 3) {
							w20 = 39;
						} else {
							w20 = 54;
						}
					} else {
						if (hops < 3) {
							w20 = 52;
						} else {
							w20 = 42;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w20 = 40;
						} else {
							w20 = 47;
						}
					} else {
						if (rel_time < 14409) {
							w20 = 35;
						} else {
							w20 = 44;
						}
					}
				}
			} else {
				if (rel_time < 63) {
					w20 = 94;
				} else {
					if (rel_time < 926) {
						if (rel_time < 121) {
							w20 = 39;
						} else {
							w20 = 30;
						}
					} else {
						if (rel_time < 13822) {
							w20 = 50;
						} else {
							w20 = 65;
						}
					}
				}
			}
		}
	}
	int w21;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w21 = 5;
			} else {
				w21 = 5;
			}
		} else {
			if (hops < 4) {
				w21 = 5;
			} else {
				w21 = 6;
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 14960) {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 5478) {
							w21 = 30;
						} else {
							w21 = 27;
						}
					} else {
						if (rel_time < 563) {
							w21 = 46;
						} else {
							w21 = 31;
						}
					}
				} else {
					if (rel_time < 1116) {
						if (rel_time < 180) {
							w21 = 41;
						} else {
							w21 = 37;
						}
					} else {
						if (rel_time < 1701) {
							w21 = -22;
						} else {
							w21 = 32;
						}
					}
				}
			} else {
				w21 = 48;
			}
		} else {
			if (cons != 4) {
				if (rel_time < 180) {
					if (hops < 3) {
						if (prod != 0) {
							w21 = 39;
						} else {
							w21 = 18;
						}
					} else {
						if (prod != 0) {
							w21 = 40;
						} else {
							w21 = 64;
						}
					}
				} else {
					if (rel_time < 473) {
						if (hops < 4) {
							w21 = 4;
						} else {
							w21 = 29;
						}
					} else {
						if (rel_time < 14013) {
							w21 = 33;
						} else {
							w21 = 41;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 14392) {
						if (hops < 3) {
							w21 = 39;
						} else {
							w21 = 34;
						}
					} else {
						if (hops < 3) {
							w21 = 26;
						} else {
							w21 = 79;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (rel_time < 6806) {
							w21 = 44;
						} else {
							w21 = 55;
						}
					} else {
						w21 = 87;
					}
				}
			}
		}
	}
	int w22;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w22 = 3;
			} else {
				w22 = 4;
			}
		} else {
			if (hops < 4) {
				w22 = 4;
			} else {
				w22 = 4;
			}
		}
	} else {
		if (cons != 1) {
			if (rel_time < 374) {
				if (hops < 4) {
					if (hops < 3) {
						if (cons != 3) {
							w22 = 30;
						} else {
							w22 = 27;
						}
					} else {
						if (prod != 0) {
							w22 = 32;
						} else {
							w22 = 42;
						}
					}
				} else {
					if (rel_time < 175) {
						if (rel_time < 111) {
							w22 = 35;
						} else {
							w22 = 12;
						}
					} else {
						if (rel_time < 180) {
							w22 = 98;
						} else {
							w22 = 58;
						}
					}
				}
			} else {
				if (rel_time < 737) {
					if (hops < 3) {
						if (hops < 2) {
							w22 = 5;
						} else {
							w22 = 20;
						}
					} else {
						if (rel_time < 563) {
							w22 = 10;
						} else {
							w22 = -6;
						}
					}
				} else {
					if (hops < 2) {
						if (cons != 3) {
							w22 = 23;
						} else {
							w22 = 20;
						}
					} else {
						if (rel_time < 11357) {
							w22 = 24;
						} else {
							w22 = 29;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (rel_time < 121) {
						if (rel_time < 63) {
							w22 = 19;
						} else {
							w22 = 10;
						}
					} else {
						if (hops < 2) {
							w22 = 20;
						} else {
							w22 = 24;
						}
					}
				} else {
					if (rel_time < 926) {
						if (rel_time < 63) {
							w22 = 14;
						} else {
							w22 = 38;
						}
					} else {
						if (rel_time < 7753) {
							w22 = 18;
						} else {
							w22 = 13;
						}
					}
				}
			} else {
				if (rel_time < 63) {
					w22 = 55;
				} else {
					if (rel_time < 926) {
						if (rel_time < 121) {
							w22 = 9;
						} else {
							w22 = 12;
						}
					} else {
						if (rel_time < 2443) {
							w22 = 35;
						} else {
							w22 = 24;
						}
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22) >> 8;
}
