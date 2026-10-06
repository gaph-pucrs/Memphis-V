#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

float bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	float w0;
	if (prod != 0) {
		if (prod != 1) {
			if (hops < 3) {
				if (hops < 2) {
					w0 = -31.720352;
				} else {
					w0 = -28.220356;
				}
			} else {
				if (hops < 4) {
					w0 = -24.720356;
				} else {
					if (hops < 5) {
						w0 = -21.220348;
					} else {
						w0 = -17.72029;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1829) {
						w0 = -48.220036;
					} else {
						if (rel_time < 2663) {
							w0 = -46.719723;
						} else {
							w0 = -48.220036;
						}
					}
				} else {
					if (rel_time < 1829) {
						w0 = -44.720116;
					} else {
						if (rel_time < 2663) {
							w0 = -43.21988;
						} else {
							w0 = -44.720116;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1829) {
						w0 = -41.22011;
					} else {
						if (rel_time < 2663) {
							w0 = -39.719875;
						} else {
							w0 = -41.22011;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1829) {
							w0 = -37.7199;
						} else {
							w0 = -37.22006;
						}
					} else {
						if (rel_time < 1829) {
							w0 = -34.218243;
						} else {
							w0 = -33.71897;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (cons != 2) {
				if (cons != 3) {
					if (rel_time < 726) {
						if (hops < 3) {
							w0 = -11.297311;
						} else {
							w0 = -4.69017;
						}
					} else {
						if (cons != 4) {
							w0 = 17.8001;
						} else {
							w0 = 27.726942;
						}
					}
				} else {
					if (size < 9) {
						if (rel_time < 2196) {
							w0 = 14.135752;
						} else {
							w0 = 27.635681;
						}
					} else {
						if (rel_time < 2396) {
							w0 = 45.46906;
						} else {
							w0 = 24.63569;
						}
					}
				}
			} else {
				if (rel_time < 1522) {
					if (rel_time < 885) {
						if (rel_time < 665) {
							w0 = 38.640152;
						} else {
							w0 = 29.140184;
						}
					} else {
						if (hops < 3) {
							w0 = 53.704685;
						} else {
							w0 = 60.30819;
						}
					}
				} else {
					if (hops < 3) {
						if (size < 9) {
							w0 = 27.180977;
						} else {
							w0 = 32.204918;
						}
					} else {
						if (size < 9) {
							w0 = 33.779816;
						} else {
							w0 = 38.808506;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (hops < 3) {
					if (rel_time < 648) {
						if (hops < 2) {
							w0 = -48.719696;
						} else {
							w0 = -45.219856;
						}
					} else {
						if (rel_time < 2144) {
							w0 = -35.795227;
						} else {
							w0 = -46.79516;
						}
					}
				} else {
					if (rel_time < 648) {
						if (hops < 4) {
							w0 = -41.71985;
						} else {
							w0 = -37.63676;
						}
					} else {
						if (rel_time < 2144) {
							w0 = -29.18851;
						} else {
							w0 = -40.188427;
						}
					}
				}
			} else {
				if (rel_time < 2357) {
					if (rel_time < 866) {
						if (hops < 3) {
							w0 = 25.204393;
						} else {
							w0 = 31.811016;
						}
					} else {
						if (rel_time < 1504) {
							w0 = -26.861225;
						} else {
							w0 = 21.638607;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w0 = -36.470116;
						} else {
							w0 = -32.97018;
						}
					} else {
						if (hops < 4) {
							w0 = -29.470184;
						} else {
							w0 = -25.387278;
						}
					}
				}
			}
		}
	}
	float w1;
	if (prod != 0) {
		if (prod != 1) {
			if (hops < 3) {
				if (hops < 2) {
					w1 = -15.860184;
				} else {
					w1 = -14.110186;
				}
			} else {
				if (hops < 4) {
					w1 = -12.360186;
				} else {
					if (hops < 5) {
						w1 = -10.610182;
					} else {
						w1 = -8.860183;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1829) {
						w1 = -24.110186;
					} else {
						if (rel_time < 2663) {
							w1 = -23.360182;
						} else {
							w1 = -24.110186;
						}
					}
				} else {
					if (rel_time < 1829) {
						w1 = -22.36018;
					} else {
						if (rel_time < 2663) {
							w1 = -21.610184;
						} else {
							w1 = -22.36018;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1829) {
						w1 = -20.610186;
					} else {
						if (rel_time < 2663) {
							w1 = -19.860182;
						} else {
							w1 = -20.610186;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 2663) {
							w1 = -18.443573;
						} else {
							w1 = -19.1101;
						}
					} else {
						if (rel_time < 2663) {
							w1 = -16.693768;
						} else {
							w1 = -17.359808;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (hops < 3) {
				if (cons != 2) {
					if (cons != 3) {
						if (rel_time < 1559) {
							w1 = 2.967534;
						} else {
							w1 = 8.129665;
						}
					} else {
						if (size < 9) {
							w1 = 6.3853493;
						} else {
							w1 = 17.197842;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1522) {
							w1 = 16.365389;
						} else {
							w1 = 12.924472;
						}
					} else {
						if (rel_time < 1522) {
							w1 = 19.865389;
						} else {
							w1 = 16.418407;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (cons != 3) {
						if (rel_time < 726) {
							w1 = -2.3451102;
						} else {
							w1 = 13.447163;
						}
					} else {
						if (size < 9) {
							w1 = 12.990741;
						} else {
							w1 = 23.803234;
						}
					}
				} else {
					if (rel_time < 1522) {
						if (rel_time < 885) {
							w1 = 20.613491;
						} else {
							w1 = 30.154324;
						}
					} else {
						if (rel_time < 2377) {
							w1 = 16.132807;
						} else {
							w1 = 20.161497;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (hops < 2) {
					if (rel_time < 2144) {
						if (rel_time < 648) {
							w1 = -24.360184;
						} else {
							w1 = -19.822481;
						}
					} else {
						w1 = -25.322435;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 648) {
							w1 = -21.777645;
						} else {
							w1 = -18.97915;
						}
					} else {
						if (rel_time < 648) {
							w1 = -18.81877;
						} else {
							w1 = -14.793153;
						}
					}
				}
			} else {
				if (rel_time < 2357) {
					if (rel_time < 866) {
						if (hops < 4) {
							w1 = 13.192271;
						} else {
							w1 = 18.456575;
						}
					} else {
						if (rel_time < 1504) {
							w1 = -13.430661;
						} else {
							w1 = 10.81934;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w1 = -18.23518;
						} else {
							w1 = -16.485182;
						}
					} else {
						if (hops < 5) {
							w1 = -14.248784;
						} else {
							w1 = -9.776119;
						}
					}
				}
			}
		}
	}
	float w2;
	if (prod != 0) {
		if (prod != 1) {
			if (hops < 3) {
				if (hops < 2) {
					w2 = -7.9300957;
				} else {
					w2 = -7.0550966;
				}
			} else {
				if (hops < 4) {
					w2 = -6.1800966;
				} else {
					if (hops < 5) {
						w2 = -5.3050947;
					} else {
						w2 = -4.4301105;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1829) {
						w2 = -12.055177;
					} else {
						if (rel_time < 2663) {
							w2 = -11.680251;
						} else {
							w2 = -12.055177;
						}
					}
				} else {
					if (rel_time < 1829) {
						w2 = -11.180151;
					} else {
						if (rel_time < 2663) {
							w2 = -10.805214;
						} else {
							w2 = -11.180151;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1829) {
						w2 = -10.305158;
					} else {
						if (rel_time < 2663) {
							w2 = -9.930213;
						} else {
							w2 = -10.305158;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1829) {
							w2 = -9.6385145;
						} else {
							w2 = -9.166296;
						}
					} else {
						if (rel_time < 1829) {
							w2 = -8.763815;
						} else {
							w2 = -8.291646;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (hops < 4) {
				if (cons != 7) {
					if (rel_time < 2359) {
						if (rel_time < 920) {
							w2 = 7.197727;
						} else {
							w2 = 2.6934278;
						}
					} else {
						if (rel_time < 2432) {
							w2 = 19.973215;
						} else {
							w2 = 4.711929;
						}
					}
				} else {
					if (rel_time < 809) {
						if (hops < 2) {
							w2 = 5.3957386;
						} else {
							w2 = 8.068205;
						}
					} else {
						if (rel_time < 972) {
							w2 = -9.232671;
						} else {
							w2 = 0.8459684;
						}
					}
				}
			} else {
				if (cons != 7) {
					if (rel_time < 2359) {
						if (rel_time < 920) {
							w2 = 12.402923;
						} else {
							w2 = 7.50219;
						}
					} else {
						if (rel_time < 2432) {
							w2 = 25.570312;
						} else {
							w2 = 10.030261;
						}
					}
				} else {
					if (rel_time < 809) {
						if (hops < 5) {
							w2 = 10.655726;
						} else {
							w2 = 14.154224;
						}
					} else {
						if (rel_time < 972) {
							w2 = -5.2642913;
						} else {
							w2 = 6.535573;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (rel_time < 2144) {
					if (rel_time < 648) {
						if (hops < 3) {
							w2 = -11.92802;
						} else {
							w2 = -9.760773;
						}
					} else {
						if (hops < 2) {
							w2 = -9.911378;
						} else {
							w2 = -6.2745667;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w2 = -12.661393;
						} else {
							w2 = -12.239574;
						}
					} else {
						if (hops < 5) {
							w2 = -10.72931;
						} else {
							w2 = -7.2286787;
						}
					}
				}
			} else {
				if (rel_time < 2357) {
					if (rel_time < 866) {
						if (hops < 2) {
							w2 = 4.0812426;
						} else {
							w2 = 8.020084;
						}
					} else {
						if (rel_time < 1504) {
							w2 = -6.715352;
						} else {
							w2 = 5.40969;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2967) {
							w2 = -7.544932;
						} else {
							w2 = -9.044926;
						}
					} else {
						if (rel_time < 2967) {
							w2 = -5.1917996;
						} else {
							w2 = -6.6917686;
						}
					}
				}
			}
		}
	}
	float w3;
	if (prod != 0) {
		if (prod != 1) {
			if (hops < 3) {
				if (hops < 2) {
					w3 = -3.9650478;
				} else {
					w3 = -3.5275483;
				}
			} else {
				if (hops < 4) {
					w3 = -3.0900483;
				} else {
					if (hops < 5) {
						w3 = -2.6525474;
					} else {
						w3 = -2.2150629;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1829) {
						w3 = -6.0276303;
					} else {
						if (rel_time < 2663) {
							w3 = -5.8402057;
						} else {
							w3 = -6.0276303;
						}
					}
				} else {
					if (rel_time < 1829) {
						w3 = -5.59011;
					} else {
						if (rel_time < 2663) {
							w3 = -5.402664;
						} else {
							w3 = -5.59011;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1829) {
						w3 = -5.1526093;
					} else {
						if (rel_time < 2663) {
							w3 = -4.9651713;
						} else {
							w3 = -5.1526093;
						}
					}
				} else {
					if (rel_time < 2663) {
						if (rel_time < 1829) {
							w3 = -4.746568;
						} else {
							w3 = -3.7325199;
						}
					} else {
						if (hops < 5) {
							w3 = -4.972076;
						} else {
							w3 = -4.5348825;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (hops < 2) {
				if (cons != 2) {
					if (rel_time < 726) {
						if (rel_time < 700) {
							w3 = 0.9202144;
						} else {
							w3 = -12.654168;
						}
					} else {
						if (rel_time < 920) {
							w3 = 4.294506;
						} else {
							w3 = -1.1307927;
						}
					}
				} else {
					if (rel_time < 885) {
						if (rel_time < 665) {
							w3 = 2.677972;
						} else {
							w3 = -2.0719929;
						}
					} else {
						if (rel_time < 1522) {
							w3 = 15.3976755;
						} else {
							w3 = 3.9164283;
						}
					}
				}
			} else {
				if (rel_time < 1122) {
					if (rel_time < 938) {
						if (rel_time < 726) {
							w3 = 1.4471478;
						} else {
							w3 = 5.858532;
						}
					} else {
						if (cons != 7) {
							w3 = -11.606449;
						} else {
							w3 = -3.5524523;
						}
					}
				} else {
					if (rel_time < 1540) {
						if (cons != 2) {
							w3 = 18.088728;
						} else {
							w3 = 14.588542;
						}
					} else {
						if (rel_time < 2451) {
							w3 = 4.83427;
						} else {
							w3 = 2.8610604;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (rel_time < 2144) {
					if (rel_time < 648) {
						if (hops < 5) {
							w3 = -5.5932593;
						} else {
							w3 = -1.612013;
						}
					} else {
						if (hops < 4) {
							w3 = -4.008594;
						} else {
							w3 = -1.5093967;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w3 = -6.2662354;
						} else {
							w3 = -6.01671;
						}
					} else {
						if (hops < 5) {
							w3 = -5.3647885;
						} else {
							w3 = -3.6147857;
						}
					}
				}
			} else {
				if (rel_time < 2357) {
					if (hops < 3) {
						if (rel_time < 866) {
							w3 = 2.8824444;
						} else {
							w3 = -3.2605429;
						}
					} else {
						if (rel_time < 1504) {
							w3 = 2.3135123;
						} else {
							w3 = 6.3773904;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w3 = -4.970215;
						} else {
							w3 = -4.095196;
						}
					} else {
						if (rel_time < 2967) {
							w3 = -2.9036715;
						} else {
							w3 = -3.653676;
						}
					}
				}
			}
		}
	}
	float w4;
	if (prod != 0) {
		if (prod != 1) {
			if (hops < 3) {
				if (hops < 2) {
					w4 = -1.9825277;
				} else {
					w4 = -1.763778;
				}
			} else {
				if (hops < 4) {
					w4 = -1.545028;
				} else {
					if (hops < 5) {
						w4 = -1.3262775;
					} else {
						w4 = -1.107539;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1829) {
						w4 = -3.0138342;
					} else {
						if (rel_time < 2663) {
							w4 = -2.920141;
						} else {
							w4 = -3.0138342;
						}
					}
				} else {
					if (rel_time < 1829) {
						w4 = -2.795074;
					} else {
						if (rel_time < 2663) {
							w4 = -2.7013626;
						} else {
							w4 = -2.795074;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1829) {
						w4 = -2.5763237;
					} else {
						if (rel_time < 2663) {
							w4 = -2.48262;
						} else {
							w4 = -2.5763237;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 2663) {
							w4 = -2.277091;
						} else {
							w4 = -2.4860685;
						}
					} else {
						if (rel_time < 2663) {
							w4 = -1.8400117;
						} else {
							w4 = -2.2675824;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (rel_time < 2379) {
				if (cons != 4) {
					if (rel_time < 839) {
						if (cons != 7) {
							w4 = 4.590599;
						} else {
							w4 = 1.2305785;
						}
					} else {
						if (rel_time < 1122) {
							w4 = -3.1676638;
						} else {
							w4 = 1.6890513;
						}
					}
				} else {
					if (rel_time < 726) {
						if (hops < 3) {
							w4 = -8.278024;
						} else {
							w4 = -6.4688425;
						}
					} else {
						if (rel_time < 920) {
							w4 = 5.197907;
						} else {
							w4 = -2.920702;
						}
					}
				}
			} else {
				if (rel_time < 2414) {
					if (cons != 4) {
						if (hops < 2) {
							w4 = -0.9703044;
						} else {
							w4 = -0.31954336;
						}
					} else {
						if (hops < 5) {
							w4 = 23.775372;
						} else {
							w4 = 28.486795;
						}
					}
				} else {
					if (rel_time < 2434) {
						if (hops < 3) {
							w4 = 5.5130696;
						} else {
							w4 = 7.038026;
						}
					} else {
						if (rel_time < 2468) {
							w4 = -5.3028803;
						} else {
							w4 = 1.5300821;
						}
					}
				}
			}
		} else {
			if (size < 9) {
				if (hops < 5) {
					if (hops < 2) {
						if (rel_time < 648) {
							w4 = -3.4197373;
						} else {
							w4 = -3.074621;
						}
					} else {
						if (rel_time < 2144) {
							w4 = -2.0643508;
						} else {
							w4 = -2.976172;
						}
					}
				} else {
					if (rel_time < 2144) {
						if (rel_time < 648) {
							w4 = -0.8061057;
						} else {
							w4 = 2.1621766;
						}
					} else {
						w4 = -1.807614;
					}
				}
			} else {
				if (rel_time < 866) {
					if (hops < 2) {
						w4 = 0.59944856;
					} else {
						if (hops < 5) {
							w4 = 2.5743625;
						} else {
							w4 = 6.9781833;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1504) {
							w4 = -3.8996542;
						} else {
							w4 = -0.907584;
						}
					} else {
						if (rel_time < 2357) {
							w4 = 3.7245958;
						} else {
							w4 = -1.3316637;
						}
					}
				}
			}
		}
	}
	float w5;
	if (cons != 2) {
		if (prod != 0) {
			if (prod != 1) {
				if (hops < 3) {
					if (hops < 2) {
						w5 = -0.99126387;
					} else {
						w5 = -0.881889;
					}
				} else {
					if (hops < 4) {
						w5 = -0.772514;
					} else {
						if (hops < 5) {
							w5 = -0.66313875;
						} else {
							w5 = -0.5537695;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1829) {
							w5 = -1.5069247;
						} else {
							w5 = -1.4913211;
						}
					} else {
						if (rel_time < 1829) {
							w5 = -1.3975446;
						} else {
							w5 = -1.3819325;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1829) {
							w5 = -1.2881695;
						} else {
							w5 = -1.2725599;
						}
					} else {
						if (rel_time < 1829) {
							w5 = -1.2711697;
						} else {
							w5 = -1.0713172;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 1504) {
					if (rel_time < 938) {
						if (rel_time < 726) {
							w5 = -1.9110234;
						} else {
							w5 = 0.82905966;
						}
					} else {
						if (cons != 7) {
							w5 = -9.730341;
						} else {
							w5 = -4.3385634;
						}
					}
				} else {
					if (rel_time < 1540) {
						w5 = 13.820153;
					} else {
						if (rel_time < 2451) {
							w5 = -0.2555175;
						} else {
							w5 = -1.9303013;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 726) {
						if (cons != 3) {
							w5 = -2.994755;
						} else {
							w5 = 1.6872615;
						}
					} else {
						if (rel_time < 921) {
							w5 = 2.3616178;
						} else {
							w5 = 0.28884792;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 2396) {
							w5 = 4.4000993;
						} else {
							w5 = 5.750771;
						}
					} else {
						if (size < 9) {
							w5 = -0.07527103;
						} else {
							w5 = 2.7646852;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2377) {
			if (rel_time < 2359) {
				if (rel_time < 885) {
					if (hops < 3) {
						if (rel_time < 665) {
							w5 = 0.34495354;
						} else {
							w5 = -0.6708239;
						}
					} else {
						if (rel_time < 665) {
							w5 = 5.0881534;
						} else {
							w5 = 2.0115936;
						}
					}
				} else {
					if (rel_time < 1522) {
						if (hops < 3) {
							w5 = 8.039723;
						} else {
							w5 = 4.690267;
						}
					} else {
						if (hops < 4) {
							w5 = 1.4366287;
						} else {
							w5 = 3.6775987;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w5 = -9.074028;
					} else {
						if (hops < 4) {
							w5 = -7.633936;
						} else {
							w5 = -6.737061;
						}
					}
				} else {
					w5 = -3.2365108;
				}
			}
		} else {
			if (rel_time < 2986) {
				if (hops < 2) {
					w5 = 6.63562;
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w5 = 8.916343;
						} else {
							w5 = 7.523657;
						}
					} else {
						w5 = 11.582473;
					}
				}
			} else {
				if (hops < 2) {
					w5 = 0.14768778;
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w5 = 2.4283936;
						} else {
							w5 = 1.0380539;
						}
					} else {
						w5 = 5.097628;
					}
				}
			}
		}
	}
	float w6;
	if (cons != 2) {
		if (hops < 4) {
			if (rel_time < 2302) {
				if (rel_time < 2144) {
					if (cons != 3) {
						if (cons != 5) {
							w6 = -0.7143932;
						} else {
							w6 = 1.6012344;
						}
					} else {
						if (rel_time < 903) {
							w6 = 0.4961462;
						} else {
							w6 = 7.4348516;
						}
					}
				} else {
					if (cons != 3) {
						if (cons != 5) {
							w6 = -1.7617321;
						} else {
							w6 = 0.7685525;
						}
					} else {
						if (hops < 2) {
							w6 = -7.978879;
						} else {
							w6 = -7.639719;
						}
					}
				}
			} else {
				if (rel_time < 2451) {
					if (cons != 4) {
						if (cons != 3) {
							w6 = 2.2568593;
						} else {
							w6 = -1.418948;
						}
					} else {
						if (hops < 3) {
							w6 = 11.304907;
						} else {
							w6 = 12.256593;
						}
					}
				} else {
					if (rel_time < 2468) {
						if (cons != 7) {
							w6 = 4.4185;
						} else {
							w6 = -6.850918;
						}
					} else {
						if (rel_time < 3040) {
							w6 = -1.0628146;
						} else {
							w6 = 0.054357693;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (prod != 1) {
					if (hops < 5) {
						w6 = -0.3315732;
					} else {
						w6 = -0.27688476;
					}
				} else {
					if (rel_time < 2663) {
						if (rel_time < 1829) {
							w6 = -0.6355943;
						} else {
							w6 = -0.22852474;
						}
					} else {
						if (hops < 5) {
							w6 = -0.7073963;
						} else {
							w6 = -0.5982371;
						}
					}
				}
			} else {
				if (rel_time < 2302) {
					if (cons != 5) {
						if (rel_time < 2144) {
							w6 = 0.8184745;
						} else {
							w6 = -1.5356412;
						}
					} else {
						if (rel_time < 754) {
							w6 = 3.9631312;
						} else {
							w6 = 2.0617034;
						}
					}
				} else {
					if (rel_time < 2451) {
						if (cons != 4) {
							w6 = 3.448213;
						} else {
							w6 = 12.690825;
						}
					} else {
						if (rel_time < 3022) {
							w6 = -1.9046819;
						} else {
							w6 = 1.7207805;
						}
					}
				}
			}
		}
	} else {
		if (hops < 5) {
			if (rel_time < 2377) {
				if (rel_time < 2359) {
					if (rel_time < 2170) {
						if (rel_time < 885) {
							w6 = 0.60578746;
						} else {
							w6 = 2.3008082;
						}
					} else {
						if (hops < 2) {
							w6 = -1.1528087;
						} else {
							w6 = 0.33655363;
						}
					}
				} else {
					if (hops < 2) {
						w6 = -4.5372047;
					} else {
						if (hops < 3) {
							w6 = -3.9631212;
						} else {
							w6 = -3.5299752;
						}
					}
				}
			} else {
				if (rel_time < 2986) {
					if (hops < 2) {
						w6 = 3.3178558;
					} else {
						if (hops < 3) {
							w6 = 4.458217;
						} else {
							w6 = 3.7618625;
						}
					}
				} else {
					if (hops < 2) {
						w6 = 0.07385152;
					} else {
						if (hops < 3) {
							w6 = 1.2142044;
						} else {
							w6 = 0.5190304;
						}
					}
				}
			}
		} else {
			if (rel_time < 2170) {
				if (rel_time < 665) {
					w6 = 6.3875976;
				} else {
					if (rel_time < 867) {
						w6 = 4.8494906;
					} else {
						if (rel_time < 1522) {
							w6 = 6.3125486;
						} else {
							w6 = 5.425059;
						}
					}
				}
			} else {
				if (rel_time < 2377) {
					if (rel_time < 2359) {
						w6 = 3.9566996;
					} else {
						w6 = -1.6189188;
					}
				} else {
					if (rel_time < 2986) {
						w6 = 5.791969;
					} else {
						w6 = 2.5491345;
					}
				}
			}
		}
	}
	float w7;
	if (hops < 2) {
		if (cons != 6) {
			if (rel_time < 3960) {
				if (rel_time < 3925) {
					if (rel_time < 2986) {
						if (size < 9) {
							w7 = -0.77067804;
						} else {
							w7 = -0.026068285;
						}
					} else {
						if (cons != 4) {
							w7 = -0.37244293;
						} else {
							w7 = -6.7076254;
						}
					}
				} else {
					if (cons != 5) {
						if (cons != 3) {
							w7 = 2.2336729;
						} else {
							w7 = 4.151432;
						}
					} else {
						w7 = -4.302507;
					}
				}
			} else {
				if (cons != 8) {
					if (rel_time < 3977) {
						w7 = -4.302817;
					} else {
						w7 = -2.3698862;
					}
				} else {
					w7 = 0.69710344;
				}
			}
		} else {
			if (rel_time < 2432) {
				if (size < 9) {
					if (rel_time < 781) {
						w7 = 0.29705402;
					} else {
						w7 = -1.8024502;
					}
				} else {
					if (rel_time < 955) {
						if (rel_time < 938) {
							w7 = -12.349574;
						} else {
							w7 = -7.0792007;
						}
					} else {
						if (rel_time < 1594) {
							w7 = -1.8261162;
						} else {
							w7 = -6.233792;
						}
					}
				}
			} else {
				if (rel_time < 2451) {
					if (rel_time < 2434) {
						w7 = 1.2669607;
					} else {
						w7 = 6.6745377;
					}
				} else {
					if (rel_time < 3040) {
						w7 = -0.24429369;
					} else {
						w7 = -0.8028807;
					}
				}
			}
		}
	} else {
		if (cons != 2) {
			if (rel_time < 920) {
				if (rel_time < 726) {
					if (rel_time < 700) {
						if (rel_time < 648) {
							w7 = 0.12405119;
						} else {
							w7 = 0.66908634;
						}
					} else {
						if (hops < 3) {
							w7 = -3.8842869;
						} else {
							w7 = -1.8995962;
						}
					}
				} else {
					if (cons != 7) {
						if (cons != 1) {
							w7 = 1.7565409;
						} else {
							w7 = 0.36733082;
						}
					} else {
						if (hops < 3) {
							w7 = 0.49354;
						} else {
							w7 = -0.66046864;
						}
					}
				}
			} else {
				if (rel_time < 1122) {
					if (cons != 6) {
						if (rel_time < 972) {
							w7 = -0.13372505;
						} else {
							w7 = -4.255597;
						}
					} else {
						if (rel_time < 938) {
							w7 = -13.088909;
						} else {
							w7 = -4.2519956;
						}
					}
				} else {
					if (cons != 8) {
						if (rel_time < 3960) {
							w7 = 0.06303268;
						} else {
							w7 = -1.5358837;
						}
					} else {
						if (hops < 3) {
							w7 = 0.8642149;
						} else {
							w7 = 1.9079916;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 885) {
					if (rel_time < 665) {
						if (hops < 3) {
							w7 = 0.9337663;
						} else {
							w7 = 1.6880894;
						}
					} else {
						if (hops < 3) {
							w7 = -1.6348997;
						} else {
							w7 = 0.14980893;
						}
					}
				} else {
					if (rel_time < 1522) {
						if (hops < 3) {
							w7 = 3.8387783;
						} else {
							w7 = 0.56731474;
						}
					} else {
						if (rel_time < 2377) {
							w7 = 0.1572818;
						} else {
							w7 = 1.1188338;
						}
					}
				}
			} else {
				if (rel_time < 665) {
					if (hops < 5) {
						w7 = 2.5854464;
					} else {
						w7 = 3.1941953;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 2377) {
							w7 = 0.84175396;
						} else {
							w7 = 1.6304196;
						}
					} else {
						if (rel_time < 2170) {
							w7 = 2.7650933;
						} else {
							w7 = 1.7664331;
						}
					}
				}
			}
		}
	}
	float w8;
	if (rel_time < 3925) {
		if (rel_time < 3228) {
			if (rel_time < 3043) {
				if (rel_time < 2986) {
					if (rel_time < 2379) {
						if (cons != 6) {
							w8 = -0.026269441;
						} else {
							w8 = -1.0013555;
						}
					} else {
						if (cons != 4) {
							w8 = 0.2536582;
						} else {
							w8 = 5.8801584;
						}
					}
				} else {
					if (cons != 4) {
						if (rel_time < 3004) {
							w8 = -1.5555156;
						} else {
							w8 = -0.31201816;
						}
					} else {
						if (hops < 2) {
							w8 = -3.353866;
						} else {
							w8 = -5.5364385;
						}
					}
				}
			} else {
				if (cons != 7) {
					if (hops < 5) {
						if (cons != 8) {
							w8 = 0.08323807;
						} else {
							w8 = 0.85494214;
						}
					} else {
						if (rel_time < 3058) {
							w8 = 1.1774209;
						} else {
							w8 = 1.7552886;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w8 = 4.31624;
						} else {
							w8 = 4.493022;
						}
					} else {
						if (hops < 5) {
							w8 = 5.274836;
						} else {
							w8 = 5.9245996;
						}
					}
				}
			}
		} else {
			if (cons != 1) {
				if (prod != 1) {
					if (rel_time < 3570) {
						if (hops < 4) {
							w8 = -0.4324933;
						} else {
							w8 = -0.19274911;
						}
					} else {
						if (hops < 3) {
							w8 = 0.12662943;
						} else {
							w8 = -0.3318328;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w8 = -0.6022297;
						} else {
							w8 = -0.73924327;
						}
					} else {
						if (hops < 5) {
							w8 = -0.38521862;
						} else {
							w8 = -0.33065268;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 3848) {
						w8 = -1.2821479;
					} else {
						w8 = -0.5362475;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w8 = -1.9836314;
						} else {
							w8 = -1.7421805;
						}
					} else {
						if (hops < 5) {
							w8 = -2.1654165;
						} else {
							w8 = -1.9162095;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3960) {
			if (cons != 5) {
				if (hops < 2) {
					if (cons != 3) {
						w8 = 1.1168517;
					} else {
						w8 = 2.0757465;
					}
				} else {
					if (cons != 3) {
						if (hops < 3) {
							w8 = 2.5966656;
						} else {
							w8 = 3.4892032;
						}
					} else {
						if (hops < 5) {
							w8 = 4.629629;
						} else {
							w8 = 5.487737;
						}
					}
				}
			} else {
				if (hops < 2) {
					w8 = -2.1514366;
				} else {
					if (hops < 3) {
						w8 = -3.9394958;
					} else {
						w8 = -3.0973403;
					}
				}
			}
		} else {
			if (cons != 5) {
				if (cons != 7) {
					if (hops < 3) {
						if (hops < 2) {
							w8 = -0.026701605;
						} else {
							w8 = 0.5096048;
						}
					} else {
						if (hops < 5) {
							w8 = 1.092305;
						} else {
							w8 = 1.8671553;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w8 = -1.184966;
						} else {
							w8 = -1.2074602;
						}
					} else {
						if (hops < 5) {
							w8 = -0.4256632;
						} else {
							w8 = 0.22476444;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w8 = -2.151439;
					} else {
						w8 = -3.140402;
					}
				} else {
					if (hops < 5) {
						w8 = -2.2965648;
					} else {
						w8 = -1.522364;
					}
				}
			}
		}
	}
	float w9;
	if (hops < 5) {
		if (rel_time < 920) {
			if (cons != 5) {
				if (rel_time < 903) {
					if (cons != 4) {
						if (cons != 6) {
							w9 = 0.14558339;
						} else {
							w9 = 0.83026236;
						}
					} else {
						if (rel_time < 726) {
							w9 = -1.1267389;
						} else {
							w9 = 1.0882492;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w9 = 1.0561517;
						} else {
							w9 = 2.1165657;
						}
					} else {
						if (hops < 4) {
							w9 = 0.37676477;
						} else {
							w9 = 0.5077217;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w9 = 2.0377069;
					} else {
						w9 = 2.7258146;
					}
				} else {
					if (hops < 4) {
						w9 = 0.98601073;
					} else {
						w9 = 0.70245147;
					}
				}
			}
		} else {
			if (rel_time < 1122) {
				if (rel_time < 972) {
					if (cons != 6) {
						if (hops < 3) {
							w9 = 0.22470528;
						} else {
							w9 = -0.72950095;
						}
					} else {
						if (rel_time < 938) {
							w9 = -5.979031;
						} else {
							w9 = -2.0195024;
						}
					}
				} else {
					if (hops < 2) {
						w9 = -7.053034;
					} else {
						if (hops < 3) {
							w9 = -1.2101305;
						} else {
							w9 = -2.8405652;
						}
					}
				}
			} else {
				if (rel_time < 1765) {
					if (cons != 3) {
						if (cons != 7) {
							w9 = -0.17356017;
						} else {
							w9 = 3.117498;
						}
					} else {
						if (hops < 4) {
							w9 = 3.7124512;
						} else {
							w9 = 8.431263;
						}
					}
				} else {
					if (cons != 3) {
						if (cons != 7) {
							w9 = 0.04419017;
						} else {
							w9 = -0.8463045;
						}
					} else {
						if (rel_time < 2196) {
							w9 = -4.0384994;
						} else {
							w9 = 0.046484374;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 3292) {
				if (rel_time < 2663) {
					if (rel_time < 2129) {
						w9 = -0.156489;
					} else {
						w9 = -0.09032845;
					}
				} else {
					if (rel_time < 2952) {
						w9 = -0.2967858;
					} else {
						w9 = -0.1653237;
					}
				}
			} else {
				if (rel_time < 3570) {
					w9 = -0.07358421;
				} else {
					w9 = -0.1653237;
				}
			}
		} else {
			if (rel_time < 2451) {
				if (rel_time < 2434) {
					if (rel_time < 648) {
						w9 = -0.82354426;
					} else {
						if (cons != 5) {
							w9 = 1.5853263;
						} else {
							w9 = 2.6112542;
						}
					}
				} else {
					w9 = 8.616061;
				}
			} else {
				if (rel_time < 2468) {
					w9 = -3.971764;
				} else {
					if (cons != 1) {
						if (rel_time < 2609) {
							w9 = 3.4409904;
						} else {
							w9 = 1.0463436;
						}
					} else {
						if (rel_time < 2967) {
							w9 = -0.013441324;
						} else {
							w9 = -0.95816195;
						}
					}
				}
			}
		}
	}
	float w10;
	if (prod != 0) {
		if (prod != 1) {
			if (rel_time < 1485) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w10 = -0.025497386;
						} else {
							w10 = -0.015357946;
						}
					} else {
						w10 = 0.039329458;
					}
				} else {
					if (hops < 5) {
						w10 = -0.09738888;
					} else {
						w10 = -0.07857374;
					}
				}
			} else {
				if (rel_time < 2952) {
					if (hops < 4) {
						if (hops < 3) {
							w10 = -0.111668445;
						} else {
							w10 = -0.05241771;
						}
					} else {
						if (rel_time < 2129) {
							w10 = -0.18499418;
						} else {
							w10 = -0.3132801;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w10 = -0.14244051;
						} else {
							w10 = -0.27944297;
						}
					} else {
						if (hops < 5) {
							w10 = -0.12302355;
						} else {
							w10 = -0.036795918;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 1177) {
					if (hops < 3) {
						if (hops < 2) {
							w10 = -0.28332892;
						} else {
							w10 = -0.2731903;
						}
					} else {
						if (hops < 4) {
							w10 = -0.21850315;
						} else {
							w10 = -0.28576714;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w10 = -0.33989668;
						} else {
							w10 = -0.38181743;
						}
					} else {
						if (rel_time < 1829) {
							w10 = -0.34980872;
						} else {
							w10 = -0.30232006;
						}
					}
				}
			} else {
				if (rel_time < 2663) {
					if (rel_time < 1829) {
						w10 = -0.07591539;
					} else {
						w10 = -0.04516804;
					}
				} else {
					w10 = -0.082674615;
				}
			}
		}
	} else {
		if (rel_time < 2379) {
			if (rel_time < 2359) {
				if (cons != 4) {
					if (rel_time < 1765) {
						if (rel_time < 1486) {
							w10 = -0.067776285;
						} else {
							w10 = 0.9534778;
						}
					} else {
						if (cons != 3) {
							w10 = -0.05596889;
						} else {
							w10 = -2.1030343;
						}
					}
				} else {
					if (rel_time < 920) {
						if (rel_time < 726) {
							w10 = -0.59895265;
						} else {
							w10 = 0.60388136;
						}
					} else {
						if (rel_time < 1559) {
							w10 = -2.343851;
						} else {
							w10 = 0.34372678;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (hops < 4) {
						if (hops < 3) {
							w10 = -0.86872405;
						} else {
							w10 = -0.58132195;
						}
					} else {
						if (hops < 5) {
							w10 = -2.3134031;
						} else {
							w10 = -1.6383004;
						}
					}
				} else {
					if (hops < 2) {
						w10 = -2.2646277;
					} else {
						if (hops < 5) {
							w10 = -2.0195615;
						} else {
							w10 = -2.4718404;
						}
					}
				}
			}
		} else {
			if (rel_time < 2451) {
				if (cons != 7) {
					if (rel_time < 2434) {
						if (cons != 4) {
							w10 = 1.4456898;
						} else {
							w10 = 2.896389;
						}
					} else {
						if (hops < 2) {
							w10 = 3.188566;
						} else {
							w10 = 7.1278763;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w10 = -9.081797;
						} else {
							w10 = -8.880849;
						}
					} else {
						w10 = -8.0381975;
					}
				}
			} else {
				if (rel_time < 2468) {
					if (cons != 7) {
						if (hops < 3) {
							w10 = 1.7724167;
						} else {
							w10 = 2.0597017;
						}
					} else {
						if (hops < 4) {
							w10 = -3.1479917;
						} else {
							w10 = -3.9316773;
						}
					}
				} else {
					if (cons != 7) {
						if (rel_time < 2609) {
							w10 = 1.4121102;
						} else {
							w10 = -0.12982751;
						}
					} else {
						if (rel_time < 3075) {
							w10 = 2.80417;
						} else {
							w10 = -0.0212502;
						}
					}
				}
			}
		}
	}
	float w11;
	if (rel_time < 3925) {
		if (cons != 2) {
			if (rel_time < 938) {
				if (cons != 5) {
					if (hops < 5) {
						if (rel_time < 920) {
							w11 = 0.115063265;
						} else {
							w11 = -2.9560456;
						}
					} else {
						if (cons != 3) {
							w11 = 0.67615914;
						} else {
							w11 = 2.5848386;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 754) {
							w11 = 1.2419025;
						} else {
							w11 = 0.8074795;
						}
					} else {
						if (rel_time < 754) {
							w11 = 0.5692913;
						} else {
							w11 = -0.1810493;
						}
					}
				}
			} else {
				if (rel_time < 1122) {
					if (hops < 2) {
						if (rel_time < 972) {
							w11 = -1.9293699;
						} else {
							w11 = -3.4926734;
						}
					} else {
						if (hops < 3) {
							w11 = 0.10971554;
						} else {
							w11 = -1.0363863;
						}
					}
				} else {
					if (rel_time < 2451) {
						if (rel_time < 2379) {
							w11 = -0.0635866;
						} else {
							w11 = 1.1078146;
						}
					} else {
						if (cons != 4) {
							w11 = -0.13913764;
						} else {
							w11 = -2.4666407;
						}
					}
				}
			}
		} else {
			if (rel_time < 2377) {
				if (rel_time < 2359) {
					if (rel_time < 2146) {
						if (rel_time < 885) {
							w11 = 0.1417817;
						} else {
							w11 = 0.643315;
						}
					} else {
						if (hops < 2) {
							w11 = -0.5269454;
						} else {
							w11 = 0.10361388;
						}
					}
				} else {
					if (hops < 2) {
						w11 = -1.1323673;
					} else {
						if (hops < 5) {
							w11 = -1.0098037;
						} else {
							w11 = -1.2364311;
						}
					}
				}
			} else {
				if (rel_time < 2986) {
					if (hops < 3) {
						w11 = 1.58673;
					} else {
						if (hops < 4) {
							w11 = 0.9568973;
						} else {
							w11 = 1.5231626;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w11 = 0.20264919;
						} else {
							w11 = 0.027206114;
						}
					} else {
						if (hops < 4) {
							w11 = -0.37179103;
						} else {
							w11 = 0.19442223;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3946) {
			if (hops < 2) {
				if (cons != 3) {
					w11 = 0.60124743;
				} else {
					w11 = 1.0795597;
				}
			} else {
				if (cons != 3) {
					if (hops < 3) {
						w11 = 1.3411521;
					} else {
						if (hops < 5) {
							w11 = 1.7382387;
						} else {
							w11 = 2.0106182;
						}
					}
				} else {
					if (hops < 3) {
						w11 = 2.2413077;
					} else {
						if (hops < 5) {
							w11 = 2.4411397;
						} else {
							w11 = 2.2860014;
						}
					}
				}
			}
		} else {
			if (cons != 5) {
				if (rel_time < 3960) {
					if (hops < 2) {
						w11 = 0.60120606;
					} else {
						if (hops < 3) {
							w11 = 1.3410989;
						} else {
							w11 = 1.7764333;
						}
					}
				} else {
					if (hops < 3) {
						if (cons != 8) {
							w11 = -0.11960605;
						} else {
							w11 = 0.42827106;
						}
					} else {
						if (cons != 7) {
							w11 = 0.5818854;
						} else {
							w11 = 0.18233861;
						}
					}
				}
			} else {
				if (hops < 2) {
					w11 = -1.0329533;
				} else {
					if (hops < 3) {
						if (rel_time < 3960) {
							w11 = -1.927142;
						} else {
							w11 = -1.5274006;
						}
					} else {
						if (rel_time < 3960) {
							w11 = -1.5061903;
						} else {
							w11 = -1.1128912;
						}
					}
				}
			}
		}
	}
	float w12;
	if (hops < 4) {
		if (rel_time < 3925) {
			if (rel_time < 3542) {
				if (cons != 4) {
					if (rel_time < 3040) {
						if (cons != 7) {
							w12 = -0.017092135;
						} else {
							w12 = -0.3912227;
						}
					} else {
						if (cons != 7) {
							w12 = 0.016948638;
						} else {
							w12 = 1.4607099;
						}
					}
				} else {
					if (rel_time < 2414) {
						if (rel_time < 2223) {
							w12 = -0.3012514;
						} else {
							w12 = 0.8291635;
						}
					} else {
						if (hops < 2) {
							w12 = -0.40084288;
						} else {
							w12 = -1.898698;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (cons != 3) {
						if (hops < 2) {
							w12 = 0.008087015;
						} else {
							w12 = -0.11097834;
						}
					} else {
						w12 = 4.9525065;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3848) {
							w12 = -0.5286945;
						} else {
							w12 = -0.15573668;
						}
					} else {
						if (rel_time < 3848) {
							w12 = -0.92960894;
						} else {
							w12 = -0.71437126;
						}
					}
				}
			}
		} else {
			if (rel_time < 3946) {
				if (hops < 2) {
					if (cons != 3) {
						w12 = 0.30062371;
					} else {
						w12 = 0.5397875;
					}
				} else {
					if (cons != 3) {
						if (hops < 3) {
							w12 = 0.67058367;
						} else {
							w12 = 0.8670201;
						}
					} else {
						if (hops < 3) {
							w12 = 1.1206691;
						} else {
							w12 = 1.2180482;
						}
					}
				}
			} else {
				if (cons != 5) {
					if (rel_time < 3960) {
						if (hops < 2) {
							w12 = 0.30063355;
						} else {
							w12 = 0.7675373;
						}
					} else {
						if (hops < 2) {
							w12 = -0.064700894;
						} else {
							w12 = 0.1814836;
						}
					}
				} else {
					if (hops < 2) {
						w12 = -0.5164809;
					} else {
						if (hops < 3) {
							w12 = -0.78593725;
						} else {
							w12 = -0.5623535;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (hops < 5) {
				if (rel_time < 2952) {
					if (rel_time < 1485) {
						if (rel_time < 1177) {
							w12 = -0.11109649;
						} else {
							w12 = -0.016906679;
						}
					} else {
						if (rel_time < 1829) {
							w12 = -0.18794547;
						} else {
							w12 = -0.10162066;
						}
					}
				} else {
					if (prod != 1) {
						w12 = 0.008056612;
					} else {
						w12 = 0.0060271467;
					}
				}
			} else {
				if (rel_time < 1829) {
					w12 = -0.0072045024;
				} else {
					if (prod != 1) {
						if (rel_time < 2129) {
							w12 = 0.04571452;
						} else {
							w12 = 0.0644907;
						}
					} else {
						if (rel_time < 2663) {
							w12 = 0.046975978;
						} else {
							w12 = 0.028227007;
						}
					}
				}
			}
		} else {
			if (cons != 1) {
				if (rel_time < 3960) {
					if (rel_time < 3040) {
						if (rel_time < 1540) {
							w12 = 0.5577454;
						} else {
							w12 = 0.26633722;
						}
					} else {
						if (cons != 2) {
							w12 = 0.98986363;
						} else {
							w12 = 0.0972105;
						}
					}
				} else {
					if (cons != 5) {
						if (cons != 7) {
							w12 = 0.2835046;
						} else {
							w12 = -0.07202959;
						}
					} else {
						if (hops < 5) {
							w12 = -0.5440385;
						} else {
							w12 = -0.6631107;
						}
					}
				}
			} else {
				if (rel_time < 2967) {
					if (rel_time < 2144) {
						if (rel_time < 866) {
							w12 = -0.026122272;
						} else {
							w12 = -0.8824245;
						}
					} else {
						if (rel_time < 2357) {
							w12 = 1.6939375;
						} else {
							w12 = 0.08227469;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 3848) {
							w12 = -0.90499157;
						} else {
							w12 = -1.0356493;
						}
					} else {
						if (rel_time < 3848) {
							w12 = -0.50262314;
						} else {
							w12 = -0.18660708;
						}
					}
				}
			}
		}
	}
	float w13;
	if (hops < 3) {
		if (rel_time < 1540) {
			if (rel_time < 1486) {
				if (cons != 5) {
					if (rel_time < 726) {
						if (rel_time < 648) {
							w13 = -0.15503456;
						} else {
							w13 = -0.3479238;
						}
					} else {
						if (size < 9) {
							w13 = 0.74795794;
						} else {
							w13 = -0.0851347;
						}
					}
				} else {
					if (rel_time < 754) {
						if (hops < 2) {
							w13 = 0.44034734;
						} else {
							w13 = 0.784415;
						}
					} else {
						if (rel_time < 921) {
							w13 = 0.14258909;
						} else {
							w13 = 0.71441483;
						}
					}
				}
			} else {
				if (cons != 1) {
					if (hops < 2) {
						if (rel_time < 1522) {
							w13 = 1.0073256;
						} else {
							w13 = 0.9263636;
						}
					} else {
						if (rel_time < 1522) {
							w13 = 1.2294784;
						} else {
							w13 = 1.5377177;
						}
					}
				} else {
					if (hops < 2) {
						w13 = 0.2622043;
					} else {
						w13 = -1.2917023;
					}
				}
			}
		} else {
			if (rel_time < 1594) {
				if (rel_time < 1559) {
					if (cons != 4) {
						if (hops < 2) {
							w13 = 1.2735771;
						} else {
							w13 = 1.4742934;
						}
					} else {
						if (hops < 2) {
							w13 = -0.4363038;
						} else {
							w13 = -0.23556252;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1576) {
							w13 = -1.3073812;
						} else {
							w13 = -0.7620287;
						}
					} else {
						if (rel_time < 1576) {
							w13 = -1.1066444;
						} else {
							w13 = -1.4613025;
						}
					}
				}
			} else {
				if (rel_time < 1613) {
					if (cons != 7) {
						if (hops < 2) {
							w13 = 0.35038587;
						} else {
							w13 = 0.15053599;
						}
					} else {
						if (hops < 2) {
							w13 = 0.81566256;
						} else {
							w13 = 1.016407;
						}
					}
				} else {
					if (cons != 7) {
						if (cons != 3) {
							w13 = -0.04155319;
						} else {
							w13 = -0.4338191;
						}
					} else {
						if (rel_time < 2468) {
							w13 = -1.4517359;
						} else {
							w13 = 0.213288;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1522) {
			if (cons != 8) {
				if (cons != 6) {
					if (rel_time < 700) {
						if (cons != 2) {
							w13 = 0.20783286;
						} else {
							w13 = 0.79074997;
						}
					} else {
						if (cons != 3) {
							w13 = -0.032570552;
						} else {
							w13 = 0.5182673;
						}
					}
				} else {
					if (rel_time < 781) {
						if (hops < 5) {
							w13 = -0.3510216;
						} else {
							w13 = 1.3672018;
						}
					} else {
						if (rel_time < 938) {
							w13 = -2.254136;
						} else {
							w13 = -0.9012518;
						}
					}
				}
			} else {
				if (rel_time < 839) {
					if (hops < 5) {
						if (hops < 4) {
							w13 = -0.44404054;
						} else {
							w13 = -0.6004794;
						}
					} else {
						w13 = 0.8797268;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w13 = -0.9690432;
						} else {
							w13 = -0.9272688;
						}
					} else {
						w13 = -1.6956494;
					}
				}
			}
		} else {
			if (rel_time < 1540) {
				if (hops < 5) {
					if (hops < 4) {
						w13 = 1.7350248;
					} else {
						w13 = 3.4919329;
					}
				} else {
					w13 = 8.358337;
				}
			} else {
				if (rel_time < 1559) {
					if (cons != 4) {
						if (hops < 4) {
							w13 = -0.26536697;
						} else {
							w13 = 0.45742628;
						}
					} else {
						if (hops < 5) {
							w13 = -1.9602946;
						} else {
							w13 = -1.3648835;
						}
					}
				} else {
					if (cons != 3) {
						if (prod != 0) {
							w13 = -0.014773958;
						} else {
							w13 = 0.2588618;
						}
					} else {
						if (rel_time < 3004) {
							w13 = -0.83082557;
						} else {
							w13 = 0.6514821;
						}
					}
				}
			}
		}
	}
	float w14;
	if (cons != 1) {
		if (hops < 2) {
			if (rel_time < 700) {
				if (cons != 2) {
					w14 = -0.64317966;
				} else {
					w14 = -0.9604207;
				}
			} else {
				if (cons != 6) {
					if (rel_time < 867) {
						if (rel_time < 726) {
							w14 = 0.6528383;
						} else {
							w14 = 0.23235615;
						}
					} else {
						if (rel_time < 1122) {
							w14 = -0.4655324;
						} else {
							w14 = 0.0012637952;
						}
					}
				} else {
					if (rel_time < 2434) {
						if (size < 9) {
							w14 = -0.24427627;
						} else {
							w14 = -0.70538694;
						}
					} else {
						if (rel_time < 2451) {
							w14 = 1.0698333;
						} else {
							w14 = -0.1440214;
						}
					}
				}
			}
		} else {
			if (rel_time < 665) {
				if (hops < 3) {
					if (cons != 2) {
						w14 = 0.07429715;
					} else {
						w14 = 0.5527434;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w14 = 0.34977174;
						} else {
							w14 = 0.5194864;
						}
					} else {
						w14 = 0.10672186;
					}
				}
			} else {
				if (rel_time < 726) {
					if (rel_time < 700) {
						if (hops < 4) {
							w14 = 0.035976667;
						} else {
							w14 = 0.4749125;
						}
					} else {
						if (hops < 5) {
							w14 = -0.39532867;
						} else {
							w14 = -2.133283;
						}
					}
				} else {
					if (rel_time < 781) {
						if (hops < 3) {
							w14 = 0.72965384;
						} else {
							w14 = 0.040058035;
						}
					} else {
						if (rel_time < 809) {
							w14 = -0.2677307;
						} else {
							w14 = 0.033972193;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2357) {
			if (rel_time < 2144) {
				if (rel_time < 1486) {
					if (hops < 2) {
						if (rel_time < 866) {
							w14 = 0.107070185;
						} else {
							w14 = 0.8154406;
						}
					} else {
						if (rel_time < 866) {
							w14 = 0.03289624;
						} else {
							w14 = -0.43323335;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w14 = -0.40478557;
						} else {
							w14 = -0.65954834;
						}
					} else {
						if (rel_time < 1504) {
							w14 = 0.17407377;
						} else {
							w14 = 0.27023774;
						}
					}
				}
			} else {
				if (hops < 2) {
					w14 = -0.9776019;
				} else {
					if (hops < 3) {
						w14 = 2.2056332;
					} else {
						if (hops < 5) {
							w14 = 0.6473488;
						} else {
							w14 = 1.9604805;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 3848) {
					if (rel_time < 2967) {
						w14 = -0.1318799;
					} else {
						w14 = -0.2435727;
					}
				} else {
					w14 = -0.057097603;
				}
			} else {
				if (rel_time < 2967) {
					if (hops < 4) {
						if (hops < 3) {
							w14 = -0.8484707;
						} else {
							w14 = -0.9626422;
						}
					} else {
						if (hops < 5) {
							w14 = -0.09737918;
						} else {
							w14 = -0.042803217;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3848) {
							w14 = -0.51550144;
						} else {
							w14 = -0.4078833;
						}
					} else {
						if (hops < 5) {
							w14 = -0.61460876;
						} else {
							w14 = -0.30176577;
						}
					}
				}
			}
		}
	}
	float w15;
	if (rel_time < 1540) {
		if (rel_time < 1522) {
			if (cons != 8) {
				if (rel_time < 1504) {
					if (cons != 4) {
						if (hops < 5) {
							w15 = 0.009574842;
						} else {
							w15 = 0.18555264;
						}
					} else {
						if (rel_time < 726) {
							w15 = -0.091008954;
						} else {
							w15 = 0.39196014;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w15 = 0.50304365;
						} else {
							w15 = 0.5977545;
						}
					} else {
						if (hops < 4) {
							w15 = -0.40679893;
						} else {
							w15 = 0.1946697;
						}
					}
				}
			} else {
				if (rel_time < 839) {
					if (hops < 3) {
						if (hops < 2) {
							w15 = 0.11750632;
						} else {
							w15 = 0.9048055;
						}
					} else {
						if (hops < 5) {
							w15 = -0.2650009;
						} else {
							w15 = 0.42293593;
						}
					}
				} else {
					if (hops < 2) {
						w15 = -1.4624738;
					} else {
						if (hops < 5) {
							w15 = -0.53577304;
						} else {
							w15 = -0.86491245;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (hops < 4) {
					if (hops < 2) {
						w15 = 0.46256384;
					} else {
						if (hops < 3) {
							w15 = 0.7518836;
						} else {
							w15 = 0.85054487;
						}
					}
				} else {
					w15 = 1.7290219;
				}
			} else {
				w15 = 4.1627064;
			}
		}
	} else {
		if (rel_time < 1594) {
			if (hops < 2) {
				if (rel_time < 1576) {
					if (rel_time < 1559) {
						if (cons != 4) {
							w15 = 0.63620114;
						} else {
							w15 = -0.21877751;
						}
					} else {
						w15 = -0.65433145;
					}
				} else {
					w15 = -0.028335182;
				}
			} else {
				if (cons != 5) {
					if (hops < 3) {
						if (rel_time < 1559) {
							w15 = -0.1347641;
						} else {
							w15 = -0.74764174;
						}
					} else {
						if (rel_time < 1559) {
							w15 = -0.97839373;
						} else {
							w15 = -0.6606357;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1559) {
							w15 = 0.43932995;
						} else {
							w15 = -0.4918696;
						}
					} else {
						if (hops < 5) {
							w15 = 0.31047198;
						} else {
							w15 = 0.36377028;
						}
					}
				}
			}
		} else {
			if (rel_time < 1613) {
				if (hops < 3) {
					if (cons != 7) {
						if (hops < 2) {
							w15 = 0.17458262;
						} else {
							w15 = 0.058285777;
						}
					} else {
						if (hops < 2) {
							w15 = 0.4072057;
						} else {
							w15 = 0.49122065;
						}
					}
				} else {
					if (hops < 5) {
						if (cons != 7) {
							w15 = 0.35534742;
						} else {
							w15 = 1.5643275;
						}
					} else {
						w15 = 3.4812703;
					}
				}
			} else {
				if (cons != 7) {
					if (cons != 3) {
						if (rel_time < 2986) {
							w15 = 0.08705234;
						} else {
							w15 = -0.0764586;
						}
					} else {
						if (rel_time < 3004) {
							w15 = -0.4779494;
						} else {
							w15 = 0.49117;
						}
					}
				} else {
					if (rel_time < 2468) {
						if (rel_time < 2302) {
							w15 = -0.18181841;
						} else {
							w15 = -1.3540475;
						}
					} else {
						if (rel_time < 3075) {
							w15 = 0.6508876;
						} else {
							w15 = -0.18643737;
						}
					}
				}
			}
		}
	}
	float w16;
	if (cons != 8) {
		if (rel_time < 2451) {
			if (rel_time < 2434) {
				if (cons != 6) {
					if (rel_time < 2197) {
						if (rel_time < 1613) {
							w16 = 0.043144044;
						} else {
							w16 = -0.12872571;
						}
					} else {
						if (cons != 2) {
							w16 = 0.2630018;
						} else {
							w16 = -0.2915321;
						}
					}
				} else {
					if (rel_time < 781) {
						if (hops < 3) {
							w16 = 0.36646515;
						} else {
							w16 = -0.1519006;
						}
					} else {
						if (hops < 4) {
							w16 = -0.33777452;
						} else {
							w16 = -0.02438535;
						}
					}
				}
			} else {
				if (cons != 6) {
					if (hops < 3) {
						if (hops < 2) {
							w16 = -3.497509;
						} else {
							w16 = -3.4135082;
						}
					} else {
						w16 = -3.850392;
					}
				} else {
					if (hops < 2) {
						w16 = 0.49142417;
					} else {
						if (hops < 5) {
							w16 = 3.0879996;
						} else {
							w16 = -0.13161804;
						}
					}
				}
			}
		} else {
			if (cons != 2) {
				if (rel_time < 3040) {
					if (prod != 0) {
						if (hops < 4) {
							w16 = -0.0016842479;
						} else {
							w16 = -0.102670066;
						}
					} else {
						if (cons != 6) {
							w16 = -0.41712683;
						} else {
							w16 = 0.5035814;
						}
					}
				} else {
					if (cons != 5) {
						if (rel_time < 3075) {
							w16 = 0.23309864;
						} else {
							w16 = 0.005445326;
						}
					} else {
						if (hops < 2) {
							w16 = -0.1998654;
						} else {
							w16 = -0.37564728;
						}
					}
				}
			} else {
				if (rel_time < 2986) {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 0.7797744;
						} else {
							w16 = 0.76116085;
						}
					} else {
						if (hops < 4) {
							w16 = 0.2970544;
						} else {
							w16 = 0.4384987;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 0.15566802;
						} else {
							w16 = 0.11112851;
						}
					} else {
						if (hops < 4) {
							w16 = -0.23858346;
						} else {
							w16 = -0.059570324;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2330) {
			if (rel_time < 2302) {
				if (rel_time < 1613) {
					if (rel_time < 839) {
						if (hops < 3) {
							w16 = 0.27542612;
						} else {
							w16 = -0.11119716;
						}
					} else {
						if (rel_time < 1122) {
							w16 = -0.3882018;
						} else {
							w16 = 0.09137125;
						}
					}
				} else {
					if (rel_time < 1765) {
						if (hops < 5) {
							w16 = 0.27093455;
						} else {
							w16 = 1.0322498;
						}
					} else {
						if (hops < 2) {
							w16 = 1.6186367;
						} else {
							w16 = 1.0821176;
						}
					}
				}
			} else {
				if (hops < 2) {
					w16 = -0.39042068;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w16 = -0.9789464;
						} else {
							w16 = -0.8097889;
						}
					} else {
						if (hops < 5) {
							w16 = -0.45155737;
						} else {
							w16 = 0.22221643;
						}
					}
				}
			}
		} else {
			if (rel_time < 3228) {
				if (rel_time < 2609) {
					if (hops < 4) {
						if (rel_time < 2468) {
							w16 = 0.93271244;
						} else {
							w16 = 0.47850883;
						}
					} else {
						if (hops < 5) {
							w16 = 1.690647;
						} else {
							w16 = 0.7612419;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w16 = 0.6181403;
						} else {
							w16 = 0.45853502;
						}
					} else {
						if (hops < 5) {
							w16 = 0.068250865;
						} else {
							w16 = -0.11393837;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w16 = 0.28130716;
					} else {
						w16 = 0.18464452;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w16 = -0.014343084;
						} else {
							w16 = -0.05775308;
						}
					} else {
						w16 = -0.17719339;
					}
				}
			}
		}
	}
	float w17;
	if (hops < 3) {
		if (rel_time < 3898) {
			if (size < 9) {
				if (rel_time < 2249) {
					if (cons != 6) {
						if (cons != 5) {
							w17 = -0.118910074;
						} else {
							w17 = 0.07721959;
						}
					} else {
						if (hops < 2) {
							w17 = -0.21826982;
						} else {
							w17 = 0.49475235;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2330) {
							w17 = -0.10027313;
						} else {
							w17 = 0.0069579105;
						}
					} else {
						if (cons != 6) {
							w17 = -0.27170143;
						} else {
							w17 = -0.912633;
						}
					}
				}
			} else {
				if (rel_time < 2986) {
					if (rel_time < 903) {
						if (cons != 4) {
							w17 = -0.1974503;
						} else {
							w17 = 0.85960543;
						}
					} else {
						if (rel_time < 938) {
							w17 = 0.38627586;
						} else {
							w17 = 0.017884746;
						}
					}
				} else {
					if (rel_time < 3024) {
						if (hops < 2) {
							w17 = -0.28451005;
						} else {
							w17 = -0.6091574;
						}
					} else {
						if (cons != 8) {
							w17 = -0.0534579;
						} else {
							w17 = 0.22080334;
						}
					}
				}
			}
		} else {
			if (rel_time < 3946) {
				if (rel_time < 3925) {
					if (cons != 1) {
						if (hops < 2) {
							w17 = 0.07783401;
						} else {
							w17 = 0.055571884;
						}
					} else {
						if (hops < 2) {
							w17 = 0.0069511863;
						} else {
							w17 = -0.073693305;
						}
					}
				} else {
					if (hops < 2) {
						if (cons != 3) {
							w17 = 0.20597501;
						} else {
							w17 = 0.23786598;
						}
					} else {
						if (cons != 3) {
							w17 = 0.3745979;
						} else {
							w17 = 0.5119571;
						}
					}
				}
			} else {
				if (cons != 7) {
					if (cons != 5) {
						if (hops < 2) {
							w17 = 0.022638654;
						} else {
							w17 = 0.14320979;
						}
					} else {
						if (hops < 2) {
							w17 = -0.09993697;
						} else {
							w17 = -0.16312629;
						}
					}
				} else {
					if (hops < 2) {
						w17 = -0.08334236;
					} else {
						w17 = -0.23403667;
					}
				}
			}
		}
	} else {
		if (rel_time < 2196) {
			if (rel_time < 2170) {
				if (cons != 3) {
					if (rel_time < 1594) {
						if (rel_time < 1486) {
							w17 = -0.033029966;
						} else {
							w17 = -0.24687627;
						}
					} else {
						if (cons != 7) {
							w17 = 0.014755722;
						} else {
							w17 = 0.8201869;
						}
					}
				} else {
					if (rel_time < 903) {
						if (hops < 4) {
							w17 = -0.02027531;
						} else {
							w17 = 0.36586803;
						}
					} else {
						if (hops < 5) {
							w17 = 0.50657135;
						} else {
							w17 = 2.0600317;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 3) {
						w17 = 0.46888924;
					} else {
						w17 = 0.07794086;
					}
				} else {
					if (hops < 5) {
						w17 = -2.0201356;
					} else {
						w17 = -3.3873053;
					}
				}
			}
		} else {
			if (rel_time < 2249) {
				if (hops < 4) {
					if (cons != 5) {
						if (rel_time < 2197) {
							w17 = 0.47002292;
						} else {
							w17 = 0.2728176;
						}
					} else {
						w17 = 0.7253328;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 2197) {
							w17 = 1.1685932;
						} else {
							w17 = 1.0047278;
						}
					} else {
						if (rel_time < 2223) {
							w17 = 1.6470685;
						} else {
							w17 = 1.1933643;
						}
					}
				}
			} else {
				if (cons != 6) {
					if (rel_time < 2330) {
						if (hops < 4) {
							w17 = -0.3423817;
						} else {
							w17 = -0.11875955;
						}
					} else {
						if (cons != 8) {
							w17 = 0.0074652554;
						} else {
							w17 = 0.22743355;
						}
					}
				} else {
					if (size < 9) {
						if (hops < 4) {
							w17 = -0.008139181;
						} else {
							w17 = 0.35839966;
						}
					} else {
						if (rel_time < 3040) {
							w17 = 0.7637281;
						} else {
							w17 = 0.24017961;
						}
					}
				}
			}
		}
	}
	float w18;
	if (prod != 1) {
		if (cons != 1) {
			if (rel_time < 2396) {
				if (rel_time < 2249) {
					if (rel_time < 2198) {
						if (cons != 7) {
							w18 = -0.0057695345;
						} else {
							w18 = 0.11359949;
						}
					} else {
						if (hops < 3) {
							w18 = 0.028837027;
						} else {
							w18 = 0.41555828;
						}
					}
				} else {
					if (hops < 5) {
						if (cons != 4) {
							w18 = -0.14782882;
						} else {
							w18 = 0.14290996;
						}
					} else {
						if (rel_time < 2275) {
							w18 = 0.95706564;
						} else {
							w18 = -0.058835354;
						}
					}
				}
			} else {
				if (rel_time < 2451) {
					if (cons != 7) {
						if (rel_time < 2434) {
							w18 = 0.13371176;
						} else {
							w18 = 0.99431795;
						}
					} else {
						if (hops < 3) {
							w18 = -1.7393072;
						} else {
							w18 = -1.9294233;
						}
					}
				} else {
					if (rel_time < 2468) {
						if (hops < 4) {
							w18 = -0.0052236686;
						} else {
							w18 = -1.2940669;
						}
					} else {
						if (rel_time < 2609) {
							w18 = 0.2724121;
						} else {
							w18 = 0.01576491;
						}
					}
				}
			}
		} else {
			if (rel_time < 2357) {
				if (rel_time < 2330) {
					if (rel_time < 866) {
						if (rel_time < 648) {
							w18 = -0.04199747;
						} else {
							w18 = 0.13844688;
						}
					} else {
						if (hops < 2) {
							w18 = 0.07041219;
						} else {
							w18 = -0.18669686;
						}
					}
				} else {
					if (hops < 2) {
						w18 = -0.67278063;
					} else {
						if (hops < 3) {
							w18 = 0.91885823;
						} else {
							w18 = 0.18551438;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 2967) {
						w18 = 0.09015531;
					} else {
						if (rel_time < 3848) {
							w18 = -0.059554234;
						} else {
							w18 = 0.003478956;
						}
					}
				} else {
					if (rel_time < 3848) {
						if (hops < 4) {
							w18 = -0.25142092;
						} else {
							w18 = -0.059128594;
						}
					} else {
						if (hops < 3) {
							w18 = 0.05934246;
						} else {
							w18 = -0.27165094;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3231) {
			if (hops < 4) {
				if (rel_time < 1829) {
					if (rel_time < 1177) {
						if (hops < 3) {
							w18 = -0.10089709;
						} else {
							w18 = -0.0794439;
						}
					} else {
						if (hops < 3) {
							w18 = -0.14177117;
						} else {
							w18 = -0.108275026;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3228) {
							w18 = -0.103831284;
						} else {
							w18 = -0.00979598;
						}
					} else {
						if (rel_time < 2663) {
							w18 = -0.08437227;
						} else {
							w18 = -0.11335941;
						}
					}
				}
			} else {
				if (rel_time < 2663) {
					if (hops < 5) {
						if (rel_time < 1829) {
							w18 = -0.07809733;
						} else {
							w18 = -0.06509238;
						}
					} else {
						if (rel_time < 1177) {
							w18 = -0.10107693;
						} else {
							w18 = 0.009631513;
						}
					}
				} else {
					w18 = 0.025753869;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 3292) {
						w18 = -0.009795335;
					} else {
						w18 = -0.0053633903;
					}
				} else {
					if (rel_time < 3292) {
						if (hops < 3) {
							w18 = -0.09971834;
						} else {
							w18 = -0.12862599;
						}
					} else {
						if (hops < 3) {
							w18 = -0.03575857;
						} else {
							w18 = -0.06466594;
						}
					}
				}
			} else {
				if (hops < 5) {
					w18 = 0.025191845;
				} else {
					w18 = 0.036290616;
				}
			}
		}
	}
	float w19;
	if (cons != 2) {
		if (hops < 5) {
			if (rel_time < 3058) {
				if (rel_time < 3004) {
					if (hops < 2) {
						if (cons != 3) {
							w19 = -0.023089299;
						} else {
							w19 = -0.17660843;
						}
					} else {
						if (size < 9) {
							w19 = -0.048068333;
						} else {
							w19 = 0.020975575;
						}
					}
				} else {
					if (cons != 4) {
						if (hops < 3) {
							w19 = -0.17158353;
						} else {
							w19 = 0.12823218;
						}
					} else {
						if (hops < 2) {
							w19 = 0.20087871;
						} else {
							w19 = -0.5393496;
						}
					}
				}
			} else {
				if (rel_time < 3078) {
					if (hops < 3) {
						if (rel_time < 3075) {
							w19 = 0.028772086;
						} else {
							w19 = 0.10600176;
						}
					} else {
						if (rel_time < 3075) {
							w19 = 0.47701076;
						} else {
							w19 = 0.12364034;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 3) {
							w19 = -0.023394858;
						} else {
							w19 = 0.12757681;
						}
					} else {
						if (hops < 3) {
							w19 = 0.1558397;
						} else {
							w19 = 0.29595283;
						}
					}
				}
			}
		} else {
			if (rel_time < 726) {
				if (cons != 3) {
					if (rel_time < 648) {
						w19 = -0.90008813;
					} else {
						w19 = -1.0234643;
					}
				} else {
					w19 = 0.09950547;
				}
			} else {
				if (rel_time < 938) {
					if (rel_time < 754) {
						w19 = 1.2490977;
					} else {
						if (cons != 4) {
							w19 = 0.36612847;
						} else {
							w19 = 1.0779468;
						}
					}
				} else {
					if (cons != 7) {
						if (rel_time < 955) {
							w19 = -0.8375736;
						} else {
							w19 = 0.029497651;
						}
					} else {
						if (rel_time < 2468) {
							w19 = 0.801668;
						} else {
							w19 = -0.25521022;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2377) {
			if (rel_time < 2359) {
				if (hops < 3) {
					if (rel_time < 867) {
						if (rel_time < 665) {
							w19 = -0.028042546;
						} else {
							w19 = -0.22998385;
						}
					} else {
						if (rel_time < 2144) {
							w19 = 0.24949826;
						} else {
							w19 = -0.07199367;
						}
					}
				} else {
					if (size < 9) {
						if (hops < 4) {
							w19 = 0.24610975;
						} else {
							w19 = 0.034032;
						}
					} else {
						if (hops < 4) {
							w19 = 0.009963674;
						} else {
							w19 = 0.09146238;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w19 = -0.37254253;
					} else {
						w19 = -0.39567998;
					}
				} else {
					if (hops < 5) {
						w19 = -0.6265756;
					} else {
						w19 = -0.7700698;
					}
				}
			}
		} else {
			if (rel_time < 2986) {
				if (hops < 3) {
					if (hops < 2) {
						w19 = 0.37305698;
					} else {
						w19 = 0.36375016;
					}
				} else {
					if (hops < 4) {
						w19 = 0.13690016;
					} else {
						if (hops < 5) {
							w19 = 0.22635853;
						} else {
							w19 = 0.11282462;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w19 = 0.031035949;
					} else {
						w19 = 0.019897237;
					}
				} else {
					if (hops < 4) {
						w19 = -0.13091879;
					} else {
						if (hops < 5) {
							w19 = -0.022612965;
						} else {
							w19 = -0.1365033;
						}
					}
				}
			}
		}
	}
	float w20;
	if (cons != 3) {
		if (rel_time < 781) {
			if (hops < 4) {
				if (hops < 3) {
					if (cons != 6) {
						if (hops < 2) {
							w20 = 0.012668128;
						} else {
							w20 = -0.06157137;
						}
					} else {
						if (hops < 2) {
							w20 = -0.097319216;
						} else {
							w20 = 0.2936826;
						}
					}
				} else {
					if (cons != 6) {
						if (cons != 2) {
							w20 = 0.29938102;
						} else {
							w20 = 0.055678632;
						}
					} else {
						w20 = -0.028808236;
					}
				}
			} else {
				if (rel_time < 648) {
					if (hops < 5) {
						w20 = -0.41270185;
					} else {
						w20 = -0.4501013;
					}
				} else {
					if (rel_time < 665) {
						if (hops < 5) {
							w20 = 0.23815328;
						} else {
							w20 = -0.058586415;
						}
					} else {
						if (hops < 5) {
							w20 = -0.12836194;
						} else {
							w20 = 0.1971259;
						}
					}
				}
			}
		} else {
			if (rel_time < 809) {
				if (hops < 3) {
					if (hops < 2) {
						w20 = -0.12658517;
					} else {
						w20 = 0.11932239;
					}
				} else {
					if (hops < 4) {
						w20 = -0.6961736;
					} else {
						if (hops < 5) {
							w20 = 0.26912785;
						} else {
							w20 = -0.29482406;
						}
					}
				}
			} else {
				if (rel_time < 866) {
					if (rel_time < 839) {
						if (hops < 3) {
							w20 = 0.21846353;
						} else {
							w20 = -0.02456772;
						}
					} else {
						if (hops < 3) {
							w20 = -0.038225736;
						} else {
							w20 = 0.1816666;
						}
					}
				} else {
					if (rel_time < 1594) {
						if (rel_time < 1522) {
							w20 = -0.010070525;
						} else {
							w20 = -0.14156076;
						}
					} else {
						if (rel_time < 1765) {
							w20 = 0.16819642;
						} else {
							w20 = -0.0034298627;
						}
					}
				}
			}
		}
	} else {
		if (size < 9) {
			if (hops < 4) {
				if (rel_time < 2196) {
					if (hops < 3) {
						if (hops < 2) {
							w20 = -0.0035171267;
						} else {
							w20 = -0.057861168;
						}
					} else {
						if (rel_time < 2170) {
							w20 = -0.02621202;
						} else {
							w20 = 0.06588658;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w20 = 0.047271077;
						} else {
							w20 = 0.18430884;
						}
					} else {
						if (rel_time < 3925) {
							w20 = 1.8327459;
						} else {
							w20 = -0.057402853;
						}
					}
				}
			} else {
				if (rel_time < 2196) {
					if (rel_time < 700) {
						if (hops < 5) {
							w20 = 0.02202157;
						} else {
							w20 = 0.049752735;
						}
					} else {
						if (hops < 5) {
							w20 = -1.0205742;
						} else {
							w20 = -1.705736;
						}
					}
				} else {
					if (hops < 5) {
						w20 = 0.06437749;
					} else {
						w20 = 0.030925725;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 903) {
					w20 = -0.50151896;
				} else {
					if (rel_time < 1540) {
						w20 = 0.29195765;
					} else {
						if (rel_time < 2379) {
							w20 = -0.027663788;
						} else {
							w20 = -0.27566496;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 2379) {
						if (rel_time < 903) {
							w20 = 0.118466154;
						} else {
							w20 = 0.21359147;
						}
					} else {
						if (rel_time < 2986) {
							w20 = -0.9447911;
						} else {
							w20 = 0.03950696;
						}
					}
				} else {
					if (rel_time < 2986) {
						if (rel_time < 1540) {
							w20 = 0.48615888;
						} else {
							w20 = -0.6080584;
						}
					} else {
						if (hops < 5) {
							w20 = 1.2055191;
						} else {
							w20 = 1.4702002;
						}
					}
				}
			}
		}
	}
	float w21;
	if (prod != 1) {
		if (rel_time < 3960) {
			if (rel_time < 3943) {
				if (cons != 6) {
					if (cons != 1) {
						if (rel_time < 921) {
							w21 = -0.015651034;
						} else {
							w21 = 0.011139205;
						}
					} else {
						if (rel_time < 2357) {
							w21 = 0.0068746004;
						} else {
							w21 = -0.060499914;
						}
					}
				} else {
					if (rel_time < 2434) {
						if (rel_time < 2275) {
							w21 = -0.046312086;
						} else {
							w21 = -0.19909228;
						}
					} else {
						if (rel_time < 3040) {
							w21 = 0.42075887;
						} else {
							w21 = -0.025584389;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (hops < 2) {
						w21 = -0.04456699;
					} else {
						if (hops < 4) {
							w21 = -0.29539943;
						} else {
							w21 = -1.1570365;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w21 = 0.035378814;
						} else {
							w21 = 0.13656425;
						}
					} else {
						if (rel_time < 3946) {
							w21 = 0.37569463;
						} else {
							w21 = 0.49291813;
						}
					}
				}
			}
		} else {
			if (cons != 5) {
				if (hops < 5) {
					if (cons != 6) {
						if (hops < 2) {
							w21 = 0.049376614;
						} else {
							w21 = -0.045546267;
						}
					} else {
						if (hops < 2) {
							w21 = -0.13062869;
						} else {
							w21 = 0.11812916;
						}
					}
				} else {
					if (cons != 7) {
						if (rel_time < 3994) {
							w21 = -0.15810731;
						} else {
							w21 = -0.22325389;
						}
					} else {
						w21 = -0.3934751;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w21 = -0.044417612;
					} else {
						w21 = -0.053817067;
					}
				} else {
					if (hops < 5) {
						w21 = -0.1895893;
					} else {
						w21 = -0.27663812;
					}
				}
			}
		}
	} else {
		if (rel_time < 3228) {
			if (rel_time < 2663) {
				if (rel_time < 1177) {
					if (hops < 2) {
						w21 = -0.027671432;
					} else {
						if (hops < 3) {
							w21 = -0.060981065;
						} else {
							w21 = -0.042153735;
						}
					}
				} else {
					if (rel_time < 1829) {
						if (hops < 5) {
							w21 = -0.06638074;
						} else {
							w21 = -0.016553732;
						}
					} else {
						if (hops < 5) {
							w21 = -0.04604118;
						} else {
							w21 = 0.0001296836;
						}
					}
				}
			} else {
				if (hops < 2) {
					w21 = -0.28653303;
				} else {
					w21 = -0.43866783;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 3292) {
						w21 = 0.008514286;
					} else {
						w21 = 0.010726781;
					}
				} else {
					if (rel_time < 3292) {
						if (hops < 3) {
							w21 = -0.031035265;
						} else {
							w21 = -0.05636548;
						}
					} else {
						if (hops < 3) {
							w21 = -0.004470775;
						} else {
							w21 = -0.018920664;
						}
					}
				}
			} else {
				if (hops < 5) {
					w21 = 0.025938468;
				} else {
					w21 = 0.0054670386;
				}
			}
		}
	}
	float w22;
	if (cons != 2) {
		if (hops < 5) {
			if (rel_time < 920) {
				if (hops < 3) {
					if (rel_time < 903) {
						if (cons != 8) {
							w22 = 0.005756251;
						} else {
							w22 = 0.117059685;
						}
					} else {
						if (hops < 2) {
							w22 = 0.21119374;
						} else {
							w22 = 0.46961382;
						}
					}
				} else {
					if (rel_time < 903) {
						if (cons != 7) {
							w22 = 0.023460904;
						} else {
							w22 = -0.17911218;
						}
					} else {
						if (hops < 4) {
							w22 = -0.21694644;
						} else {
							w22 = -0.5809313;
						}
					}
				}
			} else {
				if (rel_time < 921) {
					if (hops < 2) {
						w22 = 0.5049763;
					} else {
						if (hops < 3) {
							w22 = -0.4738822;
						} else {
							w22 = -0.7452668;
						}
					}
				} else {
					if (rel_time < 938) {
						if (cons != 5) {
							w22 = -0.8009756;
						} else {
							w22 = 0.24855043;
						}
					} else {
						if (hops < 3) {
							w22 = -0.01524241;
						} else {
							w22 = 0.009420765;
						}
					}
				}
			}
		} else {
			if (rel_time < 2357) {
				if (rel_time < 1485) {
					if (rel_time < 938) {
						if (rel_time < 726) {
							w22 = -0.26733333;
						} else {
							w22 = 0.24583709;
						}
					} else {
						if (rel_time < 955) {
							w22 = -0.39063781;
						} else {
							w22 = -0.103399985;
						}
					}
				} else {
					if (rel_time < 1765) {
						if (cons != 4) {
							w22 = 0.5727975;
						} else {
							w22 = -0.055169005;
						}
					} else {
						if (cons != 3) {
							w22 = 0.16770884;
						} else {
							w22 = -0.85853595;
						}
					}
				}
			} else {
				if (rel_time < 2451) {
					if (rel_time < 2379) {
						w22 = -0.105425134;
					} else {
						if (cons != 5) {
							w22 = -1.1532263;
						} else {
							w22 = -0.44926995;
						}
					}
				} else {
					if (rel_time < 2468) {
						w22 = 0.8935195;
					} else {
						if (cons != 3) {
							w22 = -0.0028743388;
						} else {
							w22 = 0.36978143;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2377) {
			if (rel_time < 2359) {
				if (hops < 2) {
					if (size < 9) {
						if (rel_time < 2146) {
							w22 = -0.49566278;
						} else {
							w22 = -0.06840396;
						}
					} else {
						if (rel_time < 1504) {
							w22 = 0.62052757;
						} else {
							w22 = 0.03159195;
						}
					}
				} else {
					if (size < 9) {
						if (hops < 3) {
							w22 = 0.29817387;
						} else {
							w22 = 0.05884148;
						}
					} else {
						if (rel_time < 885) {
							w22 = -0.2675583;
						} else {
							w22 = 0.066949956;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w22 = -0.18791918;
						} else {
							w22 = -0.19270894;
						}
					} else {
						w22 = -0.20170784;
					}
				} else {
					if (hops < 5) {
						w22 = -0.31717834;
					} else {
						w22 = -0.38904628;
					}
				}
			}
		} else {
			if (rel_time < 2986) {
				if (hops < 3) {
					if (hops < 2) {
						w22 = 0.1826757;
					} else {
						w22 = 0.17802228;
					}
				} else {
					if (hops < 4) {
						w22 = 0.06458966;
					} else {
						if (hops < 5) {
							w22 = 0.10932652;
						} else {
							w22 = 0.052559946;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w22 = 0.011657554;
					} else {
						w22 = 0.0060881884;
					}
				} else {
					if (hops < 4) {
						w22 = -0.06931982;
					} else {
						if (hops < 5) {
							w22 = -0.015166861;
						} else {
							w22 = -0.072119266;
						}
					}
				}
			}
		}
	}
	float w23;
	if (rel_time < 1540) {
		if (rel_time < 1522) {
			if (cons != 8) {
				if (hops < 3) {
					if (rel_time < 903) {
						if (hops < 2) {
							w23 = 0.030181805;
						} else {
							w23 = -0.043839995;
						}
					} else {
						if (cons != 1) {
							w23 = 0.060650744;
						} else {
							w23 = -0.09352001;
						}
					}
				} else {
					if (cons != 6) {
						if (rel_time < 885) {
							w23 = 0.04232649;
						} else {
							w23 = -0.020132706;
						}
					} else {
						if (rel_time < 781) {
							w23 = -0.01822895;
						} else {
							w23 = -0.303564;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 839) {
						w23 = -0.16500627;
					} else {
						w23 = -0.5245747;
					}
				} else {
					if (rel_time < 839) {
						if (hops < 3) {
							w23 = 0.24111667;
						} else {
							w23 = -0.02349604;
						}
					} else {
						if (hops < 3) {
							w23 = -0.13937221;
						} else {
							w23 = -0.038439978;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w23 = 0.14802347;
					} else {
						w23 = 0.23307538;
					}
				} else {
					w23 = 0.025741259;
				}
			} else {
				if (hops < 5) {
					w23 = 0.3287272;
				} else {
					w23 = 0.4833079;
				}
			}
		}
	} else {
		if (rel_time < 1576) {
			if (cons != 4) {
				if (hops < 4) {
					if (rel_time < 1559) {
						if (hops < 3) {
							w23 = 0.4499186;
						} else {
							w23 = -0.21456371;
						}
					} else {
						if (hops < 3) {
							w23 = -0.28131247;
						} else {
							w23 = -0.011108249;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1559) {
							w23 = 0.21169978;
						} else {
							w23 = 0.311363;
						}
					} else {
						w23 = 0.05074445;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w23 = -0.052642096;
					} else {
						w23 = -0.0326687;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w23 = -0.36825106;
						} else {
							w23 = -0.3228527;
						}
					} else {
						w23 = -0.027584502;
					}
				}
			}
		} else {
			if (rel_time < 1765) {
				if (cons != 7) {
					if (hops < 2) {
						if (rel_time < 1594) {
							w23 = 0.26176092;
						} else {
							w23 = 0.07227823;
						}
					} else {
						if (hops < 4) {
							w23 = -0.07134091;
						} else {
							w23 = 0.10905474;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = 0.04580625;
						} else {
							w23 = 0.0657799;
						}
					} else {
						if (hops < 4) {
							w23 = 0.33576548;
						} else {
							w23 = -0.008203046;
						}
					}
				}
			} else {
				if (rel_time < 2196) {
					if (hops < 4) {
						if (cons != 1) {
							w23 = -0.009103059;
						} else {
							w23 = -0.065047726;
						}
					} else {
						if (cons != 3) {
							w23 = -0.0606433;
						} else {
							w23 = -0.50536263;
						}
					}
				} else {
					if (rel_time < 2432) {
						if (hops < 3) {
							w23 = -0.018372297;
						} else {
							w23 = 0.104720525;
						}
					} else {
						if (cons != 8) {
							w23 = -0.011662809;
						} else {
							w23 = 0.06480315;
						}
					}
				}
			}
		}
	}
	float w24;
	if (rel_time < 3040) {
		if (rel_time < 3004) {
			if (cons != 5) {
				if (size < 9) {
					if (rel_time < 2302) {
						if (cons != 8) {
							w24 = -0.017240517;
						} else {
							w24 = 0.05226148;
						}
					} else {
						if (hops < 2) {
							w24 = -0.046675924;
						} else {
							w24 = -0.19292533;
						}
					}
				} else {
					if (hops < 2) {
						if (cons != 7) {
							w24 = 0.0010895872;
						} else {
							w24 = -0.27447948;
						}
					} else {
						if (prod != 0) {
							w24 = -0.011699171;
						} else {
							w24 = 0.029201098;
						}
					}
				}
			} else {
				if (rel_time < 1576) {
					if (hops < 4) {
						if (rel_time < 754) {
							w24 = 0.05809756;
						} else {
							w24 = -0.07404628;
						}
					} else {
						if (rel_time < 921) {
							w24 = -0.016191104;
						} else {
							w24 = 0.24271466;
						}
					}
				} else {
					if (rel_time < 2414) {
						if (hops < 4) {
							w24 = 0.10422283;
						} else {
							w24 = 0.27704608;
						}
					} else {
						if (hops < 5) {
							w24 = 0.081472315;
						} else {
							w24 = -0.27700427;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 4) {
					if (hops < 2) {
						if (cons != 5) {
							w24 = -0.05659142;
						} else {
							w24 = -0.30369496;
						}
					} else {
						if (rel_time < 3024) {
							w24 = 0.038253233;
						} else {
							w24 = -0.09342039;
						}
					}
				} else {
					if (hops < 2) {
						w24 = 0.11002935;
					} else {
						w24 = -0.52448374;
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 4) {
						if (cons != 5) {
							w24 = 0.21544029;
						} else {
							w24 = 0.25874007;
						}
					} else {
						w24 = -0.1540965;
					}
				} else {
					if (rel_time < 3022) {
						if (cons != 4) {
							w24 = 1.365668;
						} else {
							w24 = 0.023403797;
						}
					} else {
						if (hops < 5) {
							w24 = -0.43457016;
						} else {
							w24 = -0.11045996;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 3570) {
				if (rel_time < 3075) {
					if (rel_time < 3058) {
						if (cons != 6) {
							w24 = 0.08339768;
						} else {
							w24 = 0.0024761786;
						}
					} else {
						w24 = -0.016769132;
					}
				} else {
					if (prod != 1) {
						if (rel_time < 3228) {
							w24 = 0.12327681;
						} else {
							w24 = 0.08464437;
						}
					} else {
						if (rel_time < 3228) {
							w24 = -0.13018207;
						} else {
							w24 = 0.017707579;
						}
					}
				}
			} else {
				if (cons != 8) {
					if (rel_time < 3960) {
						if (cons != 1) {
							w24 = 0.021970969;
						} else {
							w24 = 0.044237237;
						}
					} else {
						if (cons != 5) {
							w24 = -0.049638633;
						} else {
							w24 = -0.00877366;
						}
					}
				} else {
					w24 = 0.08538701;
				}
			}
		} else {
			if (rel_time < 3075) {
				if (cons != 6) {
					if (hops < 3) {
						if (rel_time < 3058) {
							w24 = 0.15542617;
						} else {
							w24 = 0.05526663;
						}
					} else {
						if (rel_time < 3058) {
							w24 = 0.39242357;
						} else {
							w24 = 0.2297963;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w24 = -0.1299567;
						} else {
							w24 = 0.25051475;
						}
					} else {
						if (rel_time < 3043) {
							w24 = -0.17190388;
						} else {
							w24 = -0.49152344;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 6) {
						if (rel_time < 3943) {
							w24 = -0.01142178;
						} else {
							w24 = -0.05015997;
						}
					} else {
						if (hops < 4) {
							w24 = 0.097667105;
						} else {
							w24 = -0.070434235;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w24 = 0.08644221;
						} else {
							w24 = 0.035293862;
						}
					} else {
						if (rel_time < 3946) {
							w24 = 0.19520566;
						} else {
							w24 = 0.25375924;
						}
					}
				}
			}
		}
	}
	float w25;
	if (rel_time < 781) {
		if (hops < 4) {
			if (hops < 2) {
				if (cons != 4) {
					if (rel_time < 700) {
						if (rel_time < 648) {
							w25 = -0.016120689;
						} else {
							w25 = -0.19224161;
						}
					} else {
						if (cons != 5) {
							w25 = -0.034850594;
						} else {
							w25 = 0.007934461;
						}
					}
				} else {
					w25 = 0.41639134;
				}
			} else {
				if (cons != 4) {
					if (hops < 3) {
						if (rel_time < 648) {
							w25 = -0.016807366;
						} else {
							w25 = 0.16057736;
						}
					} else {
						if (rel_time < 648) {
							w25 = 0.19277714;
						} else {
							w25 = 0.011761674;
						}
					}
				} else {
					if (hops < 3) {
						w25 = -0.42489144;
					} else {
						w25 = 0.097868666;
					}
				}
			}
		} else {
			if (rel_time < 648) {
				if (hops < 5) {
					w25 = -0.23407164;
				} else {
					w25 = -0.10740854;
				}
			} else {
				if (rel_time < 700) {
					if (cons != 2) {
						if (hops < 5) {
							w25 = -0.005443567;
						} else {
							w25 = 0.15382001;
						}
					} else {
						if (hops < 5) {
							w25 = 0.08494358;
						} else {
							w25 = -0.063422844;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 726) {
							w25 = 0.013198525;
						} else {
							w25 = -0.104898944;
						}
					} else {
						if (rel_time < 726) {
							w25 = -0.48140144;
						} else {
							w25 = 0.350243;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 921) {
			if (hops < 2) {
				if (cons != 3) {
					if (rel_time < 839) {
						if (rel_time < 809) {
							w25 = -0.06481844;
						} else {
							w25 = -0.10864108;
						}
					} else {
						if (cons != 4) {
							w25 = 0.2582562;
						} else {
							w25 = 0.063859;
						}
					}
				} else {
					w25 = -0.26145574;
				}
			} else {
				if (rel_time < 920) {
					if (cons != 2) {
						if (hops < 3) {
							w25 = 0.0803015;
						} else {
							w25 = -0.06601046;
						}
					} else {
						if (hops < 3) {
							w25 = -0.5832755;
						} else {
							w25 = 0.14451197;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w25 = -0.23025027;
						} else {
							w25 = -0.52540797;
						}
					} else {
						if (hops < 5) {
							w25 = 0.023619484;
						} else {
							w25 = 0.07786688;
						}
					}
				}
			}
		} else {
			if (rel_time < 938) {
				if (cons != 5) {
					if (hops < 3) {
						if (hops < 2) {
							w25 = -0.39479423;
						} else {
							w25 = -0.15567714;
						}
					} else {
						if (hops < 4) {
							w25 = -0.41915542;
						} else {
							w25 = -0.5338001;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w25 = 0.119292796;
						} else {
							w25 = 0.0006408534;
						}
					} else {
						if (hops < 5) {
							w25 = 0.42020524;
						} else {
							w25 = -0.064946026;
						}
					}
				}
			} else {
				if (rel_time < 955) {
					if (hops < 2) {
						w25 = -0.4523557;
					} else {
						if (hops < 3) {
							w25 = 0.43694562;
						} else {
							w25 = -0.15801561;
						}
					}
				} else {
					if (rel_time < 972) {
						if (hops < 2) {
							w25 = -0.3953345;
						} else {
							w25 = 0.276264;
						}
					} else {
						if (rel_time < 1122) {
							w25 = -0.10648387;
						} else {
							w25 = 0.0008404437;
						}
					}
				}
			}
		}
	}
	float w26;
	if (cons != 1) {
		if (rel_time < 1540) {
			if (rel_time < 1522) {
				if (hops < 3) {
					if (hops < 2) {
						if (cons != 4) {
							w26 = -0.028149817;
						} else {
							w26 = 0.120060064;
						}
					} else {
						if (cons != 7) {
							w26 = 0.020365471;
						} else {
							w26 = 0.26465458;
						}
					}
				} else {
					if (cons != 7) {
						if (cons != 4) {
							w26 = 0.004971439;
						} else {
							w26 = -0.07113323;
						}
					} else {
						if (hops < 4) {
							w26 = -0.20920433;
						} else {
							w26 = 0.11745119;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w26 = 0.07304282;
						} else {
							w26 = 0.101515576;
						}
					} else {
						w26 = -0.0021514625;
					}
				} else {
					if (hops < 5) {
						w26 = 0.14933406;
					} else {
						w26 = 0.22665642;
					}
				}
			}
		} else {
			if (rel_time < 1576) {
				if (cons != 4) {
					if (rel_time < 1559) {
						if (hops < 3) {
							w26 = 0.26155588;
						} else {
							w26 = -0.06603403;
						}
					} else {
						if (hops < 3) {
							w26 = -0.10406769;
						} else {
							w26 = 0.023560956;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w26 = -0.027297597;
						} else {
							w26 = -0.031371716;
						}
					} else {
						if (hops < 5) {
							w26 = -0.19162028;
						} else {
							w26 = -0.028820312;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (hops < 4) {
						if (rel_time < 1613) {
							w26 = 0.036132112;
						} else {
							w26 = 0.0006175015;
						}
					} else {
						if (cons != 7) {
							w26 = -0.009582533;
						} else {
							w26 = -0.14849116;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w26 = -0.06180496;
						} else {
							w26 = 0.07503613;
						}
					} else {
						if (rel_time < 2414) {
							w26 = 0.55752146;
						} else {
							w26 = 0.022424309;
						}
					}
				}
			}
		}
	} else {
		if (hops < 5) {
			if (hops < 4) {
				if (rel_time < 2357) {
					if (hops < 3) {
						if (rel_time < 2144) {
							w26 = -0.05418794;
						} else {
							w26 = 0.108653314;
						}
					} else {
						if (rel_time < 1486) {
							w26 = 0.11913428;
						} else {
							w26 = 0.02712998;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2967) {
							w26 = 0.101080455;
						} else {
							w26 = 0.019191105;
						}
					} else {
						if (rel_time < 2967) {
							w26 = -0.15308253;
						} else {
							w26 = -0.0113019105;
						}
					}
				}
			} else {
				if (rel_time < 866) {
					if (rel_time < 648) {
						w26 = -0.117039636;
					} else {
						if (rel_time < 839) {
							w26 = 0.2507697;
						} else {
							w26 = 0.1494256;
						}
					}
				} else {
					if (rel_time < 1504) {
						if (rel_time < 1486) {
							w26 = -0.4163072;
						} else {
							w26 = -0.7067979;
						}
					} else {
						if (rel_time < 2967) {
							w26 = -0.031933837;
						} else {
							w26 = -0.14275946;
						}
					}
				}
			}
		} else {
			if (rel_time < 866) {
				if (rel_time < 648) {
					w26 = -0.0537119;
				} else {
					w26 = -0.12617452;
				}
			} else {
				if (rel_time < 2967) {
					if (rel_time < 1486) {
						w26 = 0.5922689;
					} else {
						if (rel_time < 1504) {
							w26 = -0.11493567;
						} else {
							w26 = 0.3000949;
						}
					}
				} else {
					if (rel_time < 3848) {
						w26 = -0.13878435;
					} else {
						w26 = 0.12548795;
					}
				}
			}
		}
	}
	float w27;
	if (rel_time < 3040) {
		if (rel_time < 3004) {
			if (cons != 7) {
				if (rel_time < 2396) {
					if (rel_time < 2302) {
						if (rel_time < 2275) {
							w27 = -0.0028495747;
						} else {
							w27 = 0.83625865;
						}
					} else {
						if (hops < 4) {
							w27 = -0.0030433447;
						} else {
							w27 = -0.20832007;
						}
					}
				} else {
					if (rel_time < 2414) {
						if (hops < 5) {
							w27 = 0.2069941;
						} else {
							w27 = -1.0534594;
						}
					} else {
						if (prod != 0) {
							w27 = -0.010466074;
						} else {
							w27 = 0.039324462;
						}
					}
				}
			} else {
				if (rel_time < 2302) {
					if (size < 9) {
						if (hops < 4) {
							w27 = -0.058363095;
						} else {
							w27 = 0.06600212;
						}
					} else {
						if (hops < 2) {
							w27 = -0.02098069;
						} else {
							w27 = 0.085922025;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2451) {
							w27 = -0.8254925;
						} else {
							w27 = 0.016788019;
						}
					} else {
						if (hops < 5) {
							w27 = -0.9875806;
						} else {
							w27 = 0.5118533;
						}
					}
				}
			}
		} else {
			if (cons != 6) {
				if (hops < 3) {
					if (rel_time < 3024) {
						if (hops < 2) {
							w27 = -0.022861846;
						} else {
							w27 = -0.11526749;
						}
					} else {
						if (hops < 2) {
							w27 = -0.24888076;
						} else {
							w27 = -0.1936088;
						}
					}
				} else {
					if (hops < 4) {
						if (cons != 4) {
							w27 = 0.12864526;
						} else {
							w27 = -0.115003996;
						}
					} else {
						if (rel_time < 3022) {
							w27 = 0.0015662034;
						} else {
							w27 = -0.18529153;
						}
					}
				}
			} else {
				if (hops < 2) {
					w27 = -0.029035717;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w27 = 0.14122598;
						} else {
							w27 = 0.10699545;
						}
					} else {
						w27 = -0.2551442;
					}
				}
			}
		}
	} else {
		if (cons != 7) {
			if (hops < 2) {
				if (cons != 6) {
					if (rel_time < 3542) {
						if (prod != 1) {
							w27 = 0.044942595;
						} else {
							w27 = 0.007694222;
						}
					} else {
						if (cons != 4) {
							w27 = 0.012192464;
						} else {
							w27 = 0.050179783;
						}
					}
				} else {
					if (rel_time < 3043) {
						w27 = 0.003539975;
					} else {
						if (rel_time < 3058) {
							w27 = -0.19386663;
						} else {
							w27 = -0.027785873;
						}
					}
				}
			} else {
				if (rel_time < 4010) {
					if (cons != 5) {
						if (rel_time < 3925) {
							w27 = -0.005518671;
						} else {
							w27 = 0.032578416;
						}
					} else {
						if (hops < 3) {
							w27 = 0.0020745762;
						} else {
							w27 = -0.076176256;
						}
					}
				} else {
					if (hops < 3) {
						w27 = 0.04858334;
					} else {
						if (hops < 4) {
							w27 = -0.10536052;
						} else {
							w27 = -0.12049688;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3075) {
					if (hops < 2) {
						if (rel_time < 3058) {
							w27 = 0.040966477;
						} else {
							w27 = -0.009124605;
						}
					} else {
						if (rel_time < 3058) {
							w27 = 0.07698837;
						} else {
							w27 = 0.026900902;
						}
					}
				} else {
					if (hops < 2) {
						w27 = -0.023299849;
					} else {
						w27 = -0.050933264;
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 4) {
						if (rel_time < 3058) {
							w27 = 0.19330192;
						} else {
							w27 = 0.096307166;
						}
					} else {
						if (rel_time < 3075) {
							w27 = 0.23264179;
						} else {
							w27 = 0.11585712;
						}
					}
				} else {
					if (rel_time < 3075) {
						w27 = 0.10231268;
					} else {
						w27 = -0.090610646;
					}
				}
			}
		}
	}
	float w28;
	if (hops < 3) {
		if (rel_time < 3848) {
			if (rel_time < 2086) {
				if (hops < 2) {
					if (cons != 1) {
						if (rel_time < 1177) {
							w28 = -0.029722989;
						} else {
							w28 = 0.03371308;
						}
					} else {
						if (rel_time < 866) {
							w28 = 0.05070079;
						} else {
							w28 = 0.42752832;
						}
					}
				} else {
					if (cons != 1) {
						if (rel_time < 700) {
							w28 = 0.124266334;
						} else {
							w28 = -0.001558851;
						}
					} else {
						if (rel_time < 648) {
							w28 = 0.020110857;
						} else {
							w28 = -0.30535433;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 3) {
						if (cons != 6) {
							w28 = 0.0003791819;
						} else {
							w28 = -0.057602398;
						}
					} else {
						if (hops < 2) {
							w28 = 0.016571974;
						} else {
							w28 = -0.12176084;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2414) {
							w28 = -0.06420493;
						} else {
							w28 = 0.11709723;
						}
					} else {
						if (rel_time < 2414) {
							w28 = -0.087390155;
						} else {
							w28 = -0.23908518;
						}
					}
				}
			}
		} else {
			if (rel_time < 3960) {
				if (hops < 2) {
					if (cons != 2) {
						if (cons != 5) {
							w28 = 0.016074771;
						} else {
							w28 = -0.026670009;
						}
					} else {
						w28 = -0.006164466;
					}
				} else {
					if (cons != 1) {
						if (cons != 3) {
							w28 = 0.02114525;
						} else {
							w28 = 0.0887136;
						}
					} else {
						if (rel_time < 3898) {
							w28 = 0.103277914;
						} else {
							w28 = 0.004278376;
						}
					}
				}
			} else {
				if (cons != 8) {
					if (cons != 5) {
						if (hops < 2) {
							w28 = -0.012780214;
						} else {
							w28 = -0.023553016;
						}
					} else {
						if (hops < 2) {
							w28 = -0.011230285;
						} else {
							w28 = 0.009841794;
						}
					}
				} else {
					if (hops < 2) {
						w28 = 0.03585766;
					} else {
						if (rel_time < 4010) {
							w28 = 0.03228516;
						} else {
							w28 = 0.02429167;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 972) {
			if (rel_time < 885) {
				if (rel_time < 866) {
					if (cons != 4) {
						if (cons != 7) {
							w28 = 0.0034784898;
						} else {
							w28 = -0.030705431;
						}
					} else {
						if (hops < 5) {
							w28 = 0.071868606;
						} else {
							w28 = -0.20374084;
						}
					}
				} else {
					if (hops < 4) {
						if (cons != 2) {
							w28 = -0.049603015;
						} else {
							w28 = 0.011703346;
						}
					} else {
						if (hops < 5) {
							w28 = 0.19852823;
						} else {
							w28 = -0.15570633;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (cons != 4) {
						if (hops < 4) {
							w28 = -0.08539174;
						} else {
							w28 = -0.008876811;
						}
					} else {
						if (rel_time < 903) {
							w28 = -0.62710404;
						} else {
							w28 = -0.1027299;
						}
					}
				} else {
					if (rel_time < 920) {
						if (rel_time < 903) {
							w28 = 0.20775308;
						} else {
							w28 = 0.4944461;
						}
					} else {
						if (rel_time < 955) {
							w28 = 0.017719781;
						} else {
							w28 = -0.14988364;
						}
					}
				}
			}
		} else {
			if (cons != 8) {
				if (cons != 4) {
					if (rel_time < 1486) {
						if (hops < 4) {
							w28 = 0.055745997;
						} else {
							w28 = -0.029132556;
						}
					} else {
						if (rel_time < 1504) {
							w28 = -0.1610182;
						} else {
							w28 = 0.000115910705;
						}
					}
				} else {
					if (rel_time < 1559) {
						if (hops < 5) {
							w28 = -0.09439208;
						} else {
							w28 = -0.012998891;
						}
					} else {
						if (rel_time < 2414) {
							w28 = 0.15586503;
						} else {
							w28 = -0.02077682;
						}
					}
				}
			} else {
				if (size < 9) {
					if (hops < 4) {
						if (rel_time < 2302) {
							w28 = 0.42145243;
						} else {
							w28 = -0.07841331;
						}
					} else {
						if (rel_time < 2330) {
							w28 = 0.10452058;
						} else {
							w28 = -0.061200447;
						}
					}
				} else {
					if (rel_time < 1613) {
						if (hops < 5) {
							w28 = 0.02639117;
						} else {
							w28 = -0.12585399;
						}
					} else {
						if (rel_time < 2609) {
							w28 = 0.12837036;
						} else {
							w28 = 0.024362689;
						}
					}
				}
			}
		}
	}
	float w29;
	if (rel_time < 1540) {
		if (cons != 8) {
			if (hops < 2) {
				if (cons != 6) {
					if (cons != 3) {
						if (cons != 7) {
							w29 = 0.05198905;
						} else {
							w29 = -0.066283725;
						}
					} else {
						if (rel_time < 903) {
							w29 = -0.085509665;
						} else {
							w29 = 0.021087356;
						}
					}
				} else {
					if (rel_time < 781) {
						w29 = 0.012924016;
					} else {
						if (rel_time < 938) {
							w29 = -0.16721539;
						} else {
							w29 = -0.19582856;
						}
					}
				}
			} else {
				if (cons != 6) {
					if (rel_time < 885) {
						if (hops < 3) {
							w29 = -0.0664815;
						} else {
							w29 = 0.008171378;
						}
					} else {
						if (cons != 1) {
							w29 = 0.015541384;
						} else {
							w29 = -0.08939092;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 938) {
							w29 = 0.10458189;
						} else {
							w29 = 0.21049257;
						}
					} else {
						if (hops < 4) {
							w29 = -0.0023861623;
						} else {
							w29 = -0.07376389;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 839) {
					w29 = -0.023971228;
				} else {
					w29 = -0.17925778;
				}
			} else {
				if (rel_time < 839) {
					if (hops < 4) {
						if (hops < 3) {
							w29 = 0.046294644;
						} else {
							w29 = 0.016708167;
						}
					} else {
						if (hops < 5) {
							w29 = -0.061506648;
						} else {
							w29 = 0.016446915;
						}
					}
				} else {
					if (hops < 3) {
						w29 = -0.039031543;
					} else {
						if (hops < 5) {
							w29 = 0.014672007;
						} else {
							w29 = -0.06293462;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1594) {
			if (hops < 2) {
				if (rel_time < 1576) {
					if (rel_time < 1559) {
						if (cons != 4) {
							w29 = 0.04029564;
						} else {
							w29 = -0.02909811;
						}
					} else {
						w29 = -0.05659388;
					}
				} else {
					w29 = 0.0964037;
				}
			} else {
				if (rel_time < 1576) {
					if (cons != 4) {
						if (rel_time < 1559) {
							w29 = 0.13270399;
						} else {
							w29 = -0.014205864;
						}
					} else {
						if (hops < 3) {
							w29 = -0.013488617;
						} else {
							w29 = -0.044633448;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w29 = -0.115141526;
						} else {
							w29 = -0.07045308;
						}
					} else {
						w29 = 0.18413559;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 2330) {
					if (hops < 2) {
						if (cons != 2) {
							w29 = 0.03064323;
						} else {
							w29 = -0.25165308;
						}
					} else {
						if (cons != 6) {
							w29 = -0.02639209;
						} else {
							w29 = -0.28950188;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2452) {
							w29 = -0.1395262;
						} else {
							w29 = 0.007919314;
						}
					} else {
						if (rel_time < 2357) {
							w29 = 0.39486176;
						} else {
							w29 = 0.0043142517;
						}
					}
				}
			} else {
				if (cons != 6) {
					if (cons != 4) {
						if (rel_time < 2986) {
							w29 = -0.007944334;
						} else {
							w29 = 0.010370153;
						}
					} else {
						if (hops < 4) {
							w29 = -0.010761709;
						} else {
							w29 = 0.10826192;
						}
					}
				} else {
					if (rel_time < 2434) {
						if (hops < 4) {
							w29 = -0.19302365;
						} else {
							w29 = 0.17804678;
						}
					} else {
						if (rel_time < 2451) {
							w29 = 0.5043376;
						} else {
							w29 = 0.038352545;
						}
					}
				}
			}
		}
	}
	float w30;
	if (prod != 0) {
		if (rel_time < 1177) {
			if (hops < 4) {
				if (hops < 2) {
					w30 = -0.033134006;
				} else {
					if (hops < 3) {
						w30 = -0.06352162;
					} else {
						w30 = -0.05001769;
					}
				}
			} else {
				if (hops < 5) {
					w30 = 0.0051115677;
				} else {
					w30 = 0.033732995;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 2611) {
					if (rel_time < 1485) {
						w30 = -0.002891535;
					} else {
						if (rel_time < 1829) {
							w30 = -0.05239033;
						} else {
							w30 = -0.013316515;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 3542) {
							w30 = 0.015705954;
						} else {
							w30 = 0.036800608;
						}
					} else {
						if (rel_time < 3848) {
							w30 = -0.00088607;
						} else {
							w30 = -0.010986124;
						}
					}
				}
			} else {
				if (rel_time < 3542) {
					if (rel_time < 2129) {
						if (hops < 5) {
							w30 = -0.00038166792;
						} else {
							w30 = -0.035219315;
						}
					} else {
						if (hops < 5) {
							w30 = -0.0118656475;
						} else {
							w30 = 0.03345736;
						}
					}
				} else {
					if (rel_time < 3570) {
						if (hops < 4) {
							w30 = 0.041747373;
						} else {
							w30 = 0.033454306;
						}
					} else {
						if (hops < 4) {
							w30 = 0.0015083357;
						} else {
							w30 = 0.021007756;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2988) {
			if (rel_time < 2986) {
				if (rel_time < 2970) {
					if (cons != 5) {
						if (rel_time < 2967) {
							w30 = 0.002034093;
						} else {
							w30 = 0.040574897;
						}
					} else {
						if (rel_time < 921) {
							w30 = -0.022581702;
						} else {
							w30 = 0.03774035;
						}
					}
				} else {
					if (cons != 2) {
						if (hops < 4) {
							w30 = -0.6458161;
						} else {
							w30 = 0.5743144;
						}
					} else {
						if (hops < 3) {
							w30 = 0.06524682;
						} else {
							w30 = 0.015276678;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w30 = -0.11344632;
					} else {
						if (hops < 3) {
							w30 = 0.009841736;
						} else {
							w30 = 0.021026218;
						}
					}
				} else {
					if (hops < 5) {
						w30 = 0.5631663;
					} else {
						w30 = 0.5153867;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 3004) {
					if (cons != 3) {
						if (hops < 2) {
							w30 = 0.16973834;
						} else {
							w30 = -0.62863106;
						}
					} else {
						if (hops < 2) {
							w30 = -0.11344528;
						} else {
							w30 = 0.014529694;
						}
					}
				} else {
					if (cons != 6) {
						if (cons != 8) {
							w30 = -0.0042305742;
						} else {
							w30 = 0.018578066;
						}
					} else {
						if (hops < 3) {
							w30 = -0.004739083;
						} else {
							w30 = 0.08634302;
						}
					}
				}
			} else {
				if (rel_time < 3004) {
					if (cons != 3) {
						w30 = -0.34252474;
					} else {
						if (hops < 5) {
							w30 = 0.5631297;
						} else {
							w30 = 0.5153129;
						}
					}
				} else {
					if (cons != 7) {
						if (rel_time < 3848) {
							w30 = -0.10335921;
						} else {
							w30 = -0.03305517;
						}
					} else {
						if (rel_time < 3075) {
							w30 = 0.10028686;
						} else {
							w30 = 0.03558835;
						}
					}
				}
			}
		}
	}
	float w31;
	if (rel_time < 972) {
		if (hops < 3) {
			if (rel_time < 955) {
				if (rel_time < 885) {
					if (hops < 2) {
						if (rel_time < 866) {
							w31 = 0.009673943;
						} else {
							w31 = 0.17855194;
						}
					} else {
						if (rel_time < 866) {
							w31 = 0.0059429402;
						} else {
							w31 = -0.20802736;
						}
					}
				} else {
					if (hops < 2) {
						if (cons != 5) {
							w31 = -0.065697744;
						} else {
							w31 = 0.08258235;
						}
					} else {
						if (cons != 5) {
							w31 = 0.13378625;
						} else {
							w31 = -0.04000159;
						}
					}
				}
			} else {
				if (hops < 2) {
					w31 = -0.12614267;
				} else {
					w31 = 0.29101235;
				}
			}
		} else {
			if (rel_time < 903) {
				if (cons != 5) {
					if (hops < 4) {
						if (cons != 7) {
							w31 = -0.00035014065;
						} else {
							w31 = -0.0862416;
						}
					} else {
						if (cons != 4) {
							w31 = 0.025302853;
						} else {
							w31 = -0.06372439;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w31 = 0.058806643;
						} else {
							w31 = -0.061033644;
						}
					} else {
						w31 = 0.22723627;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 921) {
						if (rel_time < 920) {
							w31 = -0.06015828;
						} else {
							w31 = -0.13585314;
						}
					} else {
						if (cons != 5) {
							w31 = -0.05868322;
						} else {
							w31 = 0.07036818;
						}
					}
				} else {
					if (rel_time < 920) {
						w31 = 0.23846558;
					} else {
						if (rel_time < 955) {
							w31 = 0.023889616;
						} else {
							w31 = -0.08374505;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1177) {
			if (hops < 2) {
				if (rel_time < 1122) {
					w31 = -0.090651214;
				} else {
					w31 = -0.016570816;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1122) {
						if (hops < 3) {
							w31 = -0.0205381;
						} else {
							w31 = -0.0006256026;
						}
					} else {
						if (hops < 3) {
							w31 = -0.03176081;
						} else {
							w31 = -0.025008844;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1122) {
							w31 = 0.02024791;
						} else {
							w31 = 0.0025557838;
						}
					} else {
						if (rel_time < 1122) {
							w31 = -0.03249715;
						} else {
							w31 = 0.016866498;
						}
					}
				}
			}
		} else {
			if (cons != 2) {
				if (hops < 3) {
					if (cons != 8) {
						if (cons != 1) {
							w31 = -0.0013163311;
						} else {
							w31 = -0.016939187;
						}
					} else {
						if (hops < 2) {
							w31 = 0.018902356;
						} else {
							w31 = -0.057061974;
						}
					}
				} else {
					if (rel_time < 2414) {
						if (rel_time < 2396) {
							w31 = 0.005566678;
						} else {
							w31 = 0.12996115;
						}
					} else {
						if (rel_time < 2434) {
							w31 = -0.11117544;
						} else {
							w31 = 0.0015202146;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 2146) {
							w31 = -0.07620761;
						} else {
							w31 = 0.020696497;
						}
					} else {
						if (rel_time < 2359) {
							w31 = 0.06327484;
						} else {
							w31 = -0.010265944;
						}
					}
				} else {
					if (rel_time < 1522) {
						if (hops < 5) {
							w31 = 0.22766617;
						} else {
							w31 = -0.1609557;
						}
					} else {
						if (rel_time < 2377) {
							w31 = -0.1803183;
						} else {
							w31 = 0.015366331;
						}
					}
				}
			}
		}
	}
	float w32;
	if (prod != 0) {
		if (rel_time < 1829) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1485) {
						if (rel_time < 1177) {
							w32 = -0.008285408;
						} else {
							w32 = -0.00079345546;
						}
					} else {
						w32 = -0.02554286;
					}
				} else {
					if (rel_time < 1485) {
						if (rel_time < 1177) {
							w32 = -0.01588422;
						} else {
							w32 = -0.017379733;
						}
					} else {
						w32 = -0.006278921;
					}
				}
			} else {
				if (hops < 4) {
					if (prod != 1) {
						w32 = 0.01282499;
					} else {
						if (rel_time < 1177) {
							w32 = -0.012504422;
						} else {
							w32 = -0.0220029;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 5) {
							w32 = -0.013198806;
						} else {
							w32 = -0.027068611;
						}
					} else {
						if (hops < 5) {
							w32 = 0.006603159;
						} else {
							w32 = -0.0114929695;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3292) {
					if (hops < 2) {
						if (rel_time < 2086) {
							w32 = -0.00811003;
						} else {
							w32 = 0.007172794;
						}
					} else {
						if (rel_time < 2129) {
							w32 = 0.009688152;
						} else {
							w32 = 0.0021395048;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3570) {
							w32 = 0.009011334;
						} else {
							w32 = -0.0041150027;
						}
					} else {
						if (rel_time < 3542) {
							w32 = -0.013236977;
						} else {
							w32 = 0.010574348;
						}
					}
				}
			} else {
				if (rel_time < 3231) {
					if (hops < 4) {
						if (rel_time < 2663) {
							w32 = -0.0028268665;
						} else {
							w32 = 0.008273264;
						}
					} else {
						if (rel_time < 2663) {
							w32 = -0.0013371123;
						} else {
							w32 = -0.05075601;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3542) {
							w32 = -0.018836133;
						} else {
							w32 = -0.0023216961;
						}
					} else {
						if (hops < 5) {
							w32 = 0.034755956;
						} else {
							w32 = 0.01011782;
						}
					}
				}
			}
		}
	} else {
		if (cons != 1) {
			if (rel_time < 2377) {
				if (hops < 2) {
					if (rel_time < 2146) {
						if (rel_time < 1765) {
							w32 = 0.007814137;
						} else {
							w32 = -0.15832919;
						}
					} else {
						if (rel_time < 2302) {
							w32 = 0.09875567;
						} else {
							w32 = -0.020561831;
						}
					}
				} else {
					if (rel_time < 2170) {
						if (rel_time < 1765) {
							w32 = -0.00094963494;
						} else {
							w32 = 0.05651181;
						}
					} else {
						if (hops < 3) {
							w32 = -0.07669477;
						} else {
							w32 = -0.0011027687;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (cons != 6) {
						if (rel_time < 2379) {
							w32 = 0.05874531;
						} else {
							w32 = -0.011054596;
						}
					} else {
						if (rel_time < 2451) {
							w32 = -0.20555885;
						} else {
							w32 = 0.008150126;
						}
					}
				} else {
					if (rel_time < 2451) {
						if (hops < 5) {
							w32 = 0.06520636;
						} else {
							w32 = -0.39656207;
						}
					} else {
						if (rel_time < 2468) {
							w32 = -0.04323802;
						} else {
							w32 = 0.008761828;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (hops < 2) {
					if (rel_time < 1504) {
						if (rel_time < 866) {
							w32 = -0.0065001994;
						} else {
							w32 = 0.19523172;
						}
					} else {
						if (rel_time < 2357) {
							w32 = -0.2261508;
						} else {
							w32 = 0.015400797;
						}
					}
				} else {
					if (rel_time < 2357) {
						if (rel_time < 1504) {
							w32 = -0.017007815;
						} else {
							w32 = 0.07059727;
						}
					} else {
						if (hops < 4) {
							w32 = -0.039868232;
						} else {
							w32 = 0.022381915;
						}
					}
				}
			} else {
				if (rel_time < 866) {
					if (rel_time < 648) {
						w32 = -0.044923928;
					} else {
						w32 = -0.081181936;
					}
				} else {
					if (rel_time < 2357) {
						if (rel_time < 2144) {
							w32 = 0.1401355;
						} else {
							w32 = 0.49539137;
						}
					} else {
						if (rel_time < 3848) {
							w32 = -0.004813849;
						} else {
							w32 = 0.076025106;
						}
					}
				}
			}
		}
	}
	return (262.44073 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32);
}
