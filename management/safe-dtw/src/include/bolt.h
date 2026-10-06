#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w0 = -27508;
			} else {
				if (rel_time < 15780) {
					w0 = -26979;
				} else {
					if (prod != 2) {
						w0 = -26969;
					} else {
						w0 = -25534;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w0 = -26441;
				} else {
					if (prod != 2) {
						w0 = -26430;
					} else {
						w0 = -24250;
					}
				}
			} else {
				if (rel_time < 15780) {
					w0 = -25903;
				} else {
					if (prod != 2) {
						w0 = -25871;
					} else {
						w0 = -22679;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (rel_time < 601) {
					w0 = 38492;
				} else {
					if (hops < 3) {
						w0 = 37020;
					} else {
						w0 = 37939;
					}
				}
			} else {
				if (hops < 3) {
					w0 = 26926;
				} else {
					w0 = 27832;
				}
			}
		} else {
			if (rel_time < 616) {
				if (hops < 3) {
					w0 = 18341;
				} else {
					w0 = 19267;
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (hops < 3) {
							w0 = 24009;
						} else {
							w0 = 24926;
						}
					} else {
						if (hops < 3) {
							w0 = 25600;
						} else {
							w0 = 26519;
						}
					}
				} else {
					if (rel_time < 15382) {
						if (hops < 3) {
							w0 = 25537;
						} else {
							w0 = 26455;
						}
					} else {
						w0 = 28352;
					}
				}
			}
		}
	}
	int w1;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w1 = -19256;
			} else {
				if (rel_time < 15780) {
					w1 = -18885;
				} else {
					if (prod != 2) {
						w1 = -18881;
					} else {
						w1 = -17879;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w1 = -18509;
				} else {
					if (prod != 2) {
						w1 = -18505;
					} else {
						if (rel_time < 15971) {
							w1 = -16353;
						} else {
							w1 = -17419;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w1 = -18133;
				} else {
					if (prod != 2) {
						w1 = -18120;
					} else {
						w1 = -15893;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (rel_time < 601) {
					if (hops < 3) {
						w1 = 26591;
					} else {
						w1 = 27495;
					}
				} else {
					if (hops < 2) {
						w1 = 25624;
					} else {
						w1 = 26381;
					}
				}
			} else {
				if (hops < 2) {
					w1 = 18555;
				} else {
					w1 = 19307;
				}
			}
		} else {
			if (rel_time < 616) {
				if (hops < 2) {
					w1 = 12575;
				} else {
					w1 = 13295;
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (hops < 2) {
							w1 = 16516;
						} else {
							w1 = 17264;
						}
					} else {
						if (hops < 2) {
							w1 = 17634;
						} else {
							w1 = 18379;
						}
					}
				} else {
					if (rel_time < 15382) {
						if (hops < 2) {
							w1 = 17589;
						} else {
							w1 = 18330;
						}
					} else {
						if (hops < 3) {
							w1 = 19501;
						} else {
							w1 = 20403;
						}
					}
				}
			}
		}
	}
	int w2;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w2 = -13479;
			} else {
				if (rel_time < 15780) {
					w2 = -13220;
				} else {
					if (prod != 2) {
						w2 = -13219;
					} else {
						w2 = -12520;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w2 = -12956;
				} else {
					if (prod != 2) {
						w2 = -12956;
					} else {
						if (rel_time < 15971) {
							w2 = -11457;
						} else {
							w2 = -12201;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w2 = -12693;
				} else {
					if (prod != 2) {
						w2 = -12691;
					} else {
						w2 = -11138;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 3) {
					if (rel_time < 601) {
						w2 = 18617;
					} else {
						w2 = 18109;
					}
				} else {
					if (rel_time < 601) {
						w2 = 19252;
					} else {
						w2 = 18649;
					}
				}
			} else {
				if (hops < 3) {
					w2 = 13165;
				} else {
					w2 = 13700;
				}
			}
		} else {
			if (rel_time < 616) {
				if (hops < 3) {
					w2 = 8954;
				} else {
					w2 = 9505;
				}
			} else {
				if (hops < 3) {
					if (cons != 4) {
						if (cons != 2) {
							w2 = 11731;
						} else {
							w2 = 12510;
						}
					} else {
						if (rel_time < 15382) {
							w2 = 12479;
						} else {
							w2 = 13653;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w2 = 12269;
						} else {
							w2 = 13050;
						}
					} else {
						if (rel_time < 15382) {
							w2 = 13020;
						} else {
							w2 = 14286;
						}
					}
				}
			}
		}
	}
	int w3;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w3 = -9444;
				} else {
					if (prod != 2) {
						w3 = -9440;
					} else {
						w3 = -8741;
					}
				}
			} else {
				if (rel_time < 15780) {
					w3 = -9254;
				} else {
					if (rel_time < 15971) {
						w3 = -8419;
					} else {
						w3 = -9193;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w3 = -9070;
				} else {
					if (prod != 2) {
						w3 = -9071;
					} else {
						if (rel_time < 15971) {
							w3 = -8027;
						} else {
							w3 = -8546;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w3 = -8885;
				} else {
					if (rel_time < 15971) {
						w3 = -7069;
					} else {
						if (prod != 2) {
							w3 = -8888;
						} else {
							w3 = -8143;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 2) {
					w3 = 12584;
				} else {
					if (rel_time < 601) {
						w3 = 13398;
					} else {
						if (hops < 4) {
							w3 = 12868;
						} else {
							w3 = 13449;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w3 = 9047;
					} else {
						w3 = 9401;
					}
				} else {
					w3 = 9985;
				}
			}
		} else {
			if (rel_time < 616) {
				if (hops < 4) {
					if (hops < 2) {
						w3 = 6122;
					} else {
						w3 = 6450;
					}
				} else {
					w3 = 7061;
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (cons != 3) {
							w3 = 8420;
						} else {
							w3 = 8038;
						}
					} else {
						if (cons != 4) {
							w3 = 8585;
						} else {
							w3 = 8969;
						}
					}
				} else {
					if (cons != 3) {
						if (cons != 1) {
							w3 = 9553;
						} else {
							w3 = 8997;
						}
					} else {
						w3 = 8983;
					}
				}
			}
		}
	}
	int w4;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w4 = -6611;
				} else {
					if (prod != 2) {
						w4 = -6609;
					} else {
						w4 = -6121;
					}
				}
			} else {
				if (rel_time < 15780) {
					w4 = -6478;
				} else {
					if (prod != 2) {
						w4 = -6498;
					} else {
						w4 = -6102;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w4 = -6349;
				} else {
					if (prod != 2) {
						w4 = -6351;
					} else {
						if (rel_time < 15971) {
							w4 = -5623;
						} else {
							w4 = -5986;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w4 = -6220;
				} else {
					if (rel_time < 15971) {
						w4 = -4965;
					} else {
						if (prod != 2) {
							w4 = -6225;
						} else {
							w4 = -5709;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 4) {
					if (hops < 2) {
						w4 = 8810;
					} else {
						if (rel_time < 601) {
							w4 = 9304;
						} else {
							w4 = 9008;
						}
					}
				} else {
					w4 = 9570;
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w4 = 6335;
					} else {
						w4 = 6582;
					}
				} else {
					w4 = 6997;
				}
			}
		} else {
			if (cons != 1) {
				if (cons != 3) {
					if (rel_time < 680) {
						if (hops < 2) {
							w4 = 7049;
						} else {
							w4 = 7444;
						}
					} else {
						if (hops < 2) {
							w4 = 6046;
						} else {
							w4 = 6345;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 5627;
						} else {
							w4 = 5823;
						}
					} else {
						w4 = 6289;
					}
				}
			} else {
				if (rel_time < 616) {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 4287;
						} else {
							w4 = 4516;
						}
					} else {
						w4 = 4948;
					}
				} else {
					if (hops < 2) {
						w4 = 5520;
					} else {
						if (hops < 4) {
							w4 = 5828;
						} else {
							w4 = 6298;
						}
					}
				}
			}
		}
	}
	int w5;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w5 = -4628;
				} else {
					if (prod != 2) {
						w5 = -4627;
					} else {
						w5 = -4286;
					}
				}
			} else {
				if (rel_time < 15780) {
					w5 = -4534;
				} else {
					if (rel_time < 15971) {
						w5 = -4071;
					} else {
						w5 = -4515;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w5 = -4444;
				} else {
					if (prod != 2) {
						w5 = -4446;
					} else {
						if (rel_time < 15971) {
							w5 = -3940;
						} else {
							w5 = -4193;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w5 = -4354;
				} else {
					if (rel_time < 15971) {
						w5 = -3487;
					} else {
						if (prod != 2) {
							w5 = -4360;
						} else {
							w5 = -4003;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 4) {
					if (rel_time < 601) {
						w5 = 6452;
					} else {
						if (hops < 2) {
							w5 = 6094;
						} else {
							w5 = 6306;
						}
					}
				} else {
					if (rel_time < 601) {
						w5 = 6986;
					} else {
						w5 = 6552;
					}
				}
			} else {
				if (hops < 3) {
					w5 = 4506;
				} else {
					w5 = 4725;
				}
			}
		} else {
			if (cons != 1) {
				if (cons != 3) {
					if (rel_time < 15774) {
						if (rel_time < 680) {
							w5 = 5134;
						} else {
							w5 = 4361;
						}
					} else {
						if (hops < 2) {
							w5 = 4925;
						} else {
							w5 = 5297;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w5 = 3989;
						} else {
							w5 = 4130;
						}
					} else {
						w5 = 4402;
					}
				}
			} else {
				if (rel_time < 616) {
					if (hops < 3) {
						w5 = 3057;
					} else {
						if (hops < 4) {
							w5 = 3227;
						} else {
							w5 = 3467;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w5 = 3864;
						} else {
							w5 = 4034;
						}
					} else {
						if (hops < 4) {
							w5 = 4132;
						} else {
							w5 = 4409;
						}
					}
				}
			}
		}
	}
	int w6;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w6 = -3239;
				} else {
					if (prod != 2) {
						w6 = -3240;
					} else {
						w6 = -3002;
					}
				}
			} else {
				if (rel_time < 15780) {
					w6 = -3174;
				} else {
					if (prod != 2) {
						w6 = -3195;
					} else {
						if (rel_time < 15971) {
							w6 = -2852;
						} else {
							w6 = -3044;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w6 = -3111;
				} else {
					if (prod != 2) {
						w6 = -3113;
					} else {
						if (rel_time < 15971) {
							w6 = -2760;
						} else {
							w6 = -2937;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w6 = -3048;
				} else {
					if (rel_time < 15971) {
						w6 = -2449;
					} else {
						if (prod != 2) {
							w6 = -3054;
						} else {
							w6 = -2807;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 3) {
					if (rel_time < 601) {
						w6 = 4473;
					} else {
						w6 = 4322;
					}
				} else {
					if (rel_time < 601) {
						if (hops < 4) {
							w6 = 4606;
						} else {
							w6 = 4895;
						}
					} else {
						w6 = 4499;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w6 = 3086;
					} else {
						w6 = 3227;
					}
				} else {
					w6 = 3490;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 616) {
					if (hops < 2) {
						w6 = 2086;
					} else {
						w6 = 2221;
					}
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w6 = 2816;
						} else {
							w6 = 3020;
						}
					} else {
						if (rel_time < 680) {
							w6 = 3557;
						} else {
							w6 = 3037;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 616) {
							w6 = 2430;
						} else {
							w6 = 3084;
						}
					} else {
						if (rel_time < 680) {
							w6 = 3930;
						} else {
							w6 = 3409;
						}
					}
				} else {
					if (rel_time < 15382) {
						if (rel_time < 1262) {
							w6 = 3211;
						} else {
							w6 = 3454;
						}
					} else {
						w6 = 4059;
					}
				}
			}
		}
	}
	int w7;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w7 = -2268;
				} else {
					if (prod != 2) {
						w7 = -2268;
					} else {
						w7 = -2102;
					}
				}
			} else {
				if (rel_time < 15780) {
					w7 = -2222;
				} else {
					if (prod != 2) {
						w7 = -2237;
					} else {
						if (rel_time < 15971) {
							w7 = -1998;
						} else {
							w7 = -2132;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w7 = -2178;
				} else {
					if (prod != 2) {
						w7 = -2179;
					} else {
						if (rel_time < 15971) {
							w7 = -1934;
						} else {
							w7 = -2057;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w7 = -2133;
				} else {
					if (rel_time < 15971) {
						w7 = -1720;
					} else {
						if (prod != 2) {
							w7 = -2139;
						} else {
							w7 = -1968;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 2) {
					if (rel_time < 670) {
						w7 = 3031;
					} else {
						w7 = 2916;
					}
				} else {
					if (rel_time < 601) {
						if (hops < 4) {
							w7 = 3219;
						} else {
							w7 = 3431;
						}
					} else {
						if (hops < 4) {
							w7 = 3094;
						} else {
							w7 = 3241;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w7 = 2161;
					} else {
						w7 = 2259;
					}
				} else {
					w7 = 2446;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 15967) {
					if (rel_time < 616) {
						w7 = 1493;
					} else {
						if (hops < 2) {
							w7 = 1944;
						} else {
							w7 = 2052;
						}
					}
				} else {
					if (hops < 2) {
						w7 = 2542;
					} else {
						w7 = 2719;
					}
				}
			} else {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 616) {
							w7 = 1622;
						} else {
							w7 = 2075;
						}
					} else {
						if (rel_time < 15382) {
							w7 = 2231;
						} else {
							w7 = 2798;
						}
					}
				} else {
					if (rel_time < 680) {
						w7 = 2639;
					} else {
						if (hops < 4) {
							w7 = 2248;
						} else {
							w7 = 2386;
						}
					}
				}
			}
		}
	}
	int w8;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w8 = -1587;
				} else {
					if (prod != 2) {
						w8 = -1588;
					} else {
						w8 = -1472;
					}
				}
			} else {
				w8 = -1554;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w8 = -1524;
				} else {
					if (prod != 2) {
						w8 = -1526;
					} else {
						if (rel_time < 15971) {
							w8 = -1355;
						} else {
							w8 = -1441;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w8 = -1493;
				} else {
					if (rel_time < 15971) {
						w8 = -1208;
					} else {
						if (prod != 2) {
							w8 = -1498;
						} else {
							w8 = -1380;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 2) {
					if (rel_time < 670) {
						w8 = 2122;
					} else {
						w8 = 2042;
					}
				} else {
					if (rel_time < 670) {
						if (hops < 4) {
							w8 = 2229;
						} else {
							w8 = 2361;
						}
					} else {
						w8 = 2142;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w8 = 1513;
					} else {
						w8 = 1582;
					}
				} else {
					w8 = 1714;
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 1) {
					if (cons != 3) {
						if (rel_time < 15774) {
							w8 = 1466;
						} else {
							w8 = 1877;
						}
					} else {
						if (rel_time < 987) {
							w8 = 1207;
						} else {
							w8 = 1354;
						}
					}
				} else {
					if (rel_time < 616) {
						if (hops < 2) {
							w8 = 1013;
						} else {
							w8 = 1073;
						}
					} else {
						if (hops < 2) {
							w8 = 1277;
						} else {
							w8 = 1364;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 2) {
						if (rel_time < 15781) {
							w8 = 1444;
						} else {
							w8 = 1890;
						}
					} else {
						if (rel_time < 680) {
							w8 = 1807;
						} else {
							w8 = 1574;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w8 = 1529;
						} else {
							w8 = 1685;
						}
					} else {
						if (rel_time < 15382) {
							w8 = 1740;
						} else {
							w8 = 2007;
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
				if (rel_time < 15780) {
					w9 = -1111;
				} else {
					if (prod != 2) {
						w9 = -1112;
					} else {
						w9 = -1031;
					}
				}
			} else {
				if (rel_time < 15780) {
					w9 = -1089;
				} else {
					if (prod != 2) {
						w9 = -1100;
					} else {
						if (rel_time < 15971) {
							w9 = -934;
						} else {
							w9 = -1027;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w9 = -1067;
				} else {
					if (prod != 2) {
						w9 = -1068;
					} else {
						if (rel_time < 15971) {
							w9 = -949;
						} else {
							w9 = -1009;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w9 = -1045;
				} else {
					if (rel_time < 15971) {
						w9 = -848;
					} else {
						if (prod != 2) {
							w9 = -1049;
						} else {
							w9 = -968;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 3) {
					if (rel_time < 601) {
						if (hops < 2) {
							w9 = 1492;
						} else {
							w9 = 1578;
						}
					} else {
						if (rel_time < 670) {
							w9 = 1495;
						} else {
							w9 = 1451;
						}
					}
				} else {
					if (rel_time < 670) {
						if (hops < 4) {
							w9 = 1579;
						} else {
							w9 = 1653;
						}
					} else {
						w9 = 1525;
					}
				}
			} else {
				if (hops < 3) {
					w9 = 1078;
				} else {
					if (hops < 4) {
						w9 = 1125;
					} else {
						w9 = 1201;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 987) {
							w9 = 757;
						} else {
							w9 = 905;
						}
					} else {
						if (rel_time < 680) {
							w9 = 1309;
						} else {
							w9 = 957;
						}
					}
				} else {
					if (rel_time < 1262) {
						w9 = 754;
					} else {
						if (rel_time < 15382) {
							w9 = 1006;
						} else {
							w9 = 1245;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 1262) {
						if (rel_time < 616) {
							w9 = 722;
						} else {
							w9 = 867;
						}
					} else {
						if (cons != 4) {
							w9 = 992;
						} else {
							w9 = 1089;
						}
					}
				} else {
					if (rel_time < 680) {
						if (hops < 3) {
							w9 = 1478;
						} else {
							w9 = 1315;
						}
					} else {
						if (hops < 4) {
							w9 = 1096;
						} else {
							w9 = 1165;
						}
					}
				}
			}
		}
	}
	int w10;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w10 = -778;
				} else {
					if (prod != 2) {
						w10 = -778;
					} else {
						w10 = -722;
					}
				}
			} else {
				if (rel_time < 15780) {
					w10 = -762;
				} else {
					if (prod != 2) {
						w10 = -770;
					} else {
						if (rel_time < 15971) {
							w10 = -655;
						} else {
							w10 = -720;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w10 = -747;
				} else {
					if (prod != 2) {
						w10 = -748;
					} else {
						if (rel_time < 15971) {
							w10 = -665;
						} else {
							w10 = -707;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w10 = -732;
				} else {
					if (rel_time < 15971) {
						w10 = -596;
					} else {
						if (prod != 2) {
							w10 = -735;
						} else {
							w10 = -678;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 2) {
					if (rel_time < 670) {
						w10 = 1038;
					} else {
						w10 = 995;
					}
				} else {
					if (rel_time < 601) {
						if (hops < 4) {
							w10 = 1112;
						} else {
							w10 = 1203;
						}
					} else {
						if (hops < 4) {
							w10 = 1058;
						} else {
							w10 = 1119;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w10 = 737;
					} else {
						w10 = 769;
					}
				} else {
					if (hops < 4) {
						w10 = 788;
					} else {
						w10 = 842;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15781) {
					if (cons != 2) {
						if (rel_time < 1262) {
							w10 = 549;
						} else {
							w10 = 682;
						}
					} else {
						if (rel_time < 680) {
							w10 = 946;
						} else {
							w10 = 737;
						}
					}
				} else {
					if (cons != 3) {
						if (hops < 2) {
							w10 = 872;
						} else {
							w10 = 1047;
						}
					} else {
						if (hops < 3) {
							w10 = 662;
						} else {
							w10 = 553;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (rel_time < 616) {
						w10 = 544;
					} else {
						if (rel_time < 680) {
							w10 = 1066;
						} else {
							w10 = 793;
						}
					}
				} else {
					if (rel_time < 15382) {
						if (rel_time < 1262) {
							w10 = 802;
						} else {
							w10 = 900;
						}
					} else {
						w10 = 1081;
					}
				}
			}
		}
	}
	int w11;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w11 = -544;
				} else {
					if (prod != 2) {
						w11 = -545;
					} else {
						w11 = -505;
					}
				}
			} else {
				if (rel_time < 15780) {
					w11 = -534;
				} else {
					if (prod != 2) {
						w11 = -539;
					} else {
						if (rel_time < 15971) {
							w11 = -459;
						} else {
							w11 = -504;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w11 = -523;
				} else {
					if (prod != 2) {
						w11 = -524;
					} else {
						w11 = -483;
					}
				}
			} else {
				if (rel_time < 15780) {
					w11 = -512;
				} else {
					if (rel_time < 15971) {
						w11 = -418;
					} else {
						if (prod != 2) {
							w11 = -515;
						} else {
							w11 = -476;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 3) {
					if (rel_time < 670) {
						if (hops < 2) {
							w11 = 727;
						} else {
							w11 = 757;
						}
					} else {
						w11 = 708;
					}
				} else {
					if (rel_time < 670) {
						w11 = 788;
					} else {
						if (hops < 4) {
							w11 = 730;
						} else {
							w11 = 790;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w11 = 516;
					} else {
						w11 = 538;
					}
				} else {
					if (hops < 4) {
						w11 = 552;
					} else {
						w11 = 590;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 1) {
					if (rel_time < 680) {
						if (hops < 2) {
							w11 = 633;
						} else {
							w11 = 751;
						}
					} else {
						if (rel_time < 15781) {
							w11 = 481;
						} else {
							w11 = 645;
						}
					}
				} else {
					if (rel_time < 616) {
						if (hops < 2) {
							w11 = 318;
						} else {
							w11 = 370;
						}
					} else {
						if (hops < 2) {
							w11 = 418;
						} else {
							w11 = 452;
						}
					}
				}
			} else {
				if (rel_time < 616) {
					if (hops < 4) {
						w11 = 294;
					} else {
						w11 = 381;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 15967) {
							w11 = 520;
						} else {
							w11 = 732;
						}
					} else {
						if (cons != 4) {
							w11 = 558;
						} else {
							w11 = 633;
						}
					}
				}
			}
		}
	}
	int w12;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w12 = -381;
				} else {
					if (prod != 2) {
						w12 = -382;
					} else {
						if (rel_time < 15971) {
							w12 = -369;
						} else {
							w12 = -345;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w12 = -374;
				} else {
					if (prod != 2) {
						w12 = -377;
					} else {
						if (rel_time < 15971) {
							w12 = -321;
						} else {
							w12 = -353;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w12 = -366;
				} else {
					if (rel_time < 15971) {
						w12 = -321;
					} else {
						w12 = -363;
					}
				}
			} else {
				w12 = -358;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (rel_time < 601) {
					if (hops < 4) {
						if (hops < 2) {
							w12 = 516;
						} else {
							w12 = 547;
						}
					} else {
						w12 = 607;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w12 = 493;
						} else {
							w12 = 510;
						}
					} else {
						if (hops < 4) {
							w12 = 524;
						} else {
							w12 = 548;
						}
					}
				}
			} else {
				if (hops < 3) {
					w12 = 370;
				} else {
					if (hops < 4) {
						w12 = 386;
					} else {
						w12 = 413;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (rel_time < 616) {
						w12 = 223;
					} else {
						if (rel_time < 680) {
							w12 = 443;
						} else {
							w12 = 297;
						}
					}
				} else {
					if (rel_time < 1262) {
						w12 = 219;
					} else {
						if (rel_time < 15382) {
							w12 = 355;
						} else {
							w12 = 417;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (cons != 4) {
						if (hops < 4) {
							w12 = 325;
						} else {
							w12 = 373;
						}
					} else {
						if (rel_time < 15382) {
							w12 = 372;
						} else {
							w12 = 537;
						}
					}
				} else {
					if (rel_time < 680) {
						if (hops < 4) {
							w12 = 483;
						} else {
							w12 = 580;
						}
					} else {
						if (hops < 4) {
							w12 = 397;
						} else {
							w12 = 410;
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
				if (rel_time < 15780) {
					w13 = -267;
				} else {
					if (prod != 2) {
						w13 = -267;
					} else {
						w13 = -248;
					}
				}
			} else {
				if (rel_time < 15780) {
					w13 = -261;
				} else {
					if (prod != 2) {
						w13 = -264;
					} else {
						if (rel_time < 15971) {
							w13 = -225;
						} else {
							w13 = -247;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w13 = -256;
				} else {
					if (prod != 2) {
						w13 = -258;
					} else {
						if (rel_time < 15971) {
							w13 = -225;
						} else {
							w13 = -242;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w13 = -251;
				} else {
					if (rel_time < 15971) {
						w13 = -187;
					} else {
						if (prod != 2) {
							w13 = -253;
						} else {
							w13 = -226;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 3) {
					if (rel_time < 670) {
						if (hops < 2) {
							w13 = 357;
						} else {
							w13 = 372;
						}
					} else {
						if (hops < 2) {
							w13 = 337;
						} else {
							w13 = 352;
						}
					}
				} else {
					if (rel_time < 670) {
						if (rel_time < 601) {
							w13 = 396;
						} else {
							w13 = 380;
						}
					} else {
						if (hops < 4) {
							w13 = 354;
						} else {
							w13 = 390;
						}
					}
				}
			} else {
				if (hops < 2) {
					w13 = 250;
				} else {
					if (hops < 4) {
						w13 = 268;
					} else {
						w13 = 290;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 2) {
					if (rel_time < 1262) {
						if (cons != 3) {
							w13 = 145;
						} else {
							w13 = 198;
						}
					} else {
						if (cons != 4) {
							w13 = 215;
						} else {
							w13 = 247;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 680) {
							w13 = 310;
						} else {
							w13 = 216;
						}
					} else {
						if (rel_time < 680) {
							w13 = 381;
						} else {
							w13 = 279;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 987) {
							w13 = 140;
						} else {
							w13 = 246;
						}
					} else {
						if (rel_time < 680) {
							w13 = 317;
						} else {
							w13 = 279;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1262) {
							w13 = 185;
						} else {
							w13 = 285;
						}
					} else {
						if (rel_time < 15382) {
							w13 = 325;
						} else {
							w13 = 407;
						}
					}
				}
			}
		}
	}
	int w14;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w14 = -187;
				} else {
					if (prod != 2) {
						w14 = -187;
					} else {
						if (rel_time < 15971) {
							w14 = -184;
						} else {
							w14 = -167;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w14 = -183;
				} else {
					if (prod != 2) {
						w14 = -185;
					} else {
						if (rel_time < 15971) {
							w14 = -158;
						} else {
							w14 = -173;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w14 = -179;
				} else {
					if (prod != 2) {
						w14 = -180;
					} else {
						w14 = -164;
					}
				}
			} else {
				if (rel_time < 15780) {
					w14 = -176;
				} else {
					if (rel_time < 15971) {
						w14 = -132;
					} else {
						if (prod != 2) {
							w14 = -177;
						} else {
							w14 = -159;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 4) {
					if (rel_time < 670) {
						if (hops < 2) {
							w14 = 250;
						} else {
							w14 = 263;
						}
					} else {
						if (hops < 2) {
							w14 = 236;
						} else {
							w14 = 247;
						}
					}
				} else {
					if (rel_time < 601) {
						w14 = 307;
					} else {
						w14 = 268;
					}
				}
			} else {
				if (hops < 2) {
					w14 = 175;
				} else {
					if (hops < 4) {
						w14 = 188;
					} else {
						w14 = 203;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 987) {
							w14 = 116;
						} else {
							w14 = 140;
						}
					} else {
						if (rel_time < 680) {
							w14 = 217;
						} else {
							w14 = 151;
						}
					}
				} else {
					if (rel_time < 1262) {
						w14 = 110;
					} else {
						if (rel_time < 15382) {
							w14 = 174;
						} else {
							w14 = 218;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 15781) {
						if (rel_time < 1262) {
							w14 = 112;
						} else {
							w14 = 172;
						}
					} else {
						if (cons != 3) {
							w14 = 291;
						} else {
							w14 = 107;
						}
					}
				} else {
					if (rel_time < 680) {
						if (hops < 4) {
							w14 = 232;
						} else {
							w14 = 312;
						}
					} else {
						if (hops < 4) {
							w14 = 194;
						} else {
							w14 = 203;
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
				w15 = -131;
			} else {
				w15 = -128;
			}
		} else {
			if (hops < 4) {
				w15 = -125;
			} else {
				w15 = -123;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (rel_time < 601) {
					if (hops < 4) {
						if (rel_time < 553) {
							w15 = 177;
						} else {
							w15 = 190;
						}
					} else {
						w15 = 215;
					}
				} else {
					if (hops < 3) {
						w15 = 170;
					} else {
						w15 = 183;
					}
				}
			} else {
				if (hops < 3) {
					w15 = 126;
				} else {
					w15 = 136;
				}
			}
		} else {
			if (hops < 4) {
				if (cons != 1) {
					if (cons != 3) {
						if (rel_time < 15774) {
							w15 = 125;
						} else {
							w15 = 188;
						}
					} else {
						if (hops < 2) {
							w15 = 99;
						} else {
							w15 = 115;
						}
					}
				} else {
					if (rel_time < 616) {
						if (hops < 3) {
							w15 = 81;
						} else {
							w15 = 32;
						}
					} else {
						if (hops < 3) {
							w15 = 100;
						} else {
							w15 = 110;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (rel_time < 616) {
						w15 = 80;
					} else {
						if (rel_time < 680) {
							w15 = 218;
						} else {
							w15 = 141;
						}
					}
				} else {
					if (rel_time < 1262) {
						w15 = 131;
					} else {
						if (rel_time < 13029) {
							w15 = 178;
						} else {
							w15 = 189;
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
				if (rel_time < 15780) {
					w16 = -92;
				} else {
					if (prod != 2) {
						w16 = -92;
					} else {
						if (rel_time < 15971) {
							w16 = -90;
						} else {
							w16 = -78;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w16 = -90;
				} else {
					if (prod != 2) {
						w16 = -91;
					} else {
						if (rel_time < 15971) {
							w16 = -72;
						} else {
							w16 = -83;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w16 = -88;
				} else {
					if (rel_time < 15971) {
						w16 = -71;
					} else {
						w16 = -87;
					}
				}
			} else {
				if (rel_time < 15780) {
					w16 = -86;
				} else {
					if (rel_time < 15971) {
						w16 = -56;
					} else {
						if (prod != 2) {
							w16 = -87;
						} else {
							w16 = -75;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 875) {
				if (cons != 1) {
					if (hops < 2) {
						if (rel_time < 671) {
							w16 = 121;
						} else {
							w16 = 113;
						}
					} else {
						if (prod != 0) {
							w16 = 126;
						} else {
							w16 = 160;
						}
					}
				} else {
					if (rel_time < 553) {
						if (hops < 2) {
							w16 = 85;
						} else {
							w16 = 91;
						}
					} else {
						if (hops < 2) {
							w16 = 53;
						} else {
							w16 = 60;
						}
					}
				}
			} else {
				if (rel_time < 1262) {
					if (rel_time < 987) {
						if (hops < 2) {
							w16 = 56;
						} else {
							w16 = 85;
						}
					} else {
						if (hops < 2) {
							w16 = 40;
						} else {
							w16 = -3;
						}
					}
				} else {
					if (rel_time < 15781) {
						if (cons != 2) {
							w16 = 74;
						} else {
							w16 = 85;
						}
					} else {
						if (cons != 3) {
							w16 = 131;
						} else {
							w16 = 45;
						}
					}
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (hops < 4) {
						if (prod != 0) {
							w16 = 113;
						} else {
							w16 = 78;
						}
					} else {
						if (rel_time < 1660) {
							w16 = 80;
						} else {
							w16 = 100;
						}
					}
				} else {
					if (rel_time < 601) {
						if (hops < 4) {
							w16 = 132;
						} else {
							w16 = 151;
						}
					} else {
						if (hops < 4) {
							w16 = 97;
						} else {
							w16 = 103;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 15382) {
						if (rel_time < 1262) {
							w16 = 89;
						} else {
							w16 = 106;
						}
					} else {
						if (rel_time < 15967) {
							w16 = 200;
						} else {
							w16 = 123;
						}
					}
				} else {
					if (rel_time < 15382) {
						if (rel_time < 1071) {
							w16 = 139;
						} else {
							w16 = 124;
						}
					} else {
						w16 = 142;
					}
				}
			}
		}
	}
	int w17;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w17 = -64;
			} else {
				w17 = -63;
			}
		} else {
			if (hops < 4) {
				w17 = -61;
			} else {
				w17 = -60;
			}
		}
	} else {
		if (hops < 2) {
			if (cons != 4) {
				if (prod != 0) {
					if (cons != 1) {
						if (rel_time < 553) {
							w17 = 74;
						} else {
							w17 = 87;
						}
					} else {
						w17 = 59;
					}
				} else {
					if (rel_time < 680) {
						if (rel_time < 616) {
							w17 = 37;
						} else {
							w17 = 80;
						}
					} else {
						if (cons != 3) {
							w17 = 44;
						} else {
							w17 = 47;
						}
					}
				}
			} else {
				if (rel_time < 15967) {
					if (rel_time < 15382) {
						if (rel_time < 875) {
							w17 = 80;
						} else {
							w17 = 61;
						}
					} else {
						w17 = 217;
					}
				} else {
					w17 = 30;
				}
			}
		} else {
			if (cons != 2) {
				if (hops < 4) {
					if (rel_time < 15781) {
						if (prod != 0) {
							w17 = 80;
						} else {
							w17 = 56;
						}
					} else {
						if (cons != 3) {
							w17 = 108;
						} else {
							w17 = 20;
						}
					}
				} else {
					if (cons != 4) {
						if (prod != 0) {
							w17 = 91;
						} else {
							w17 = 67;
						}
					} else {
						if (rel_time < 1262) {
							w17 = 76;
						} else {
							w17 = 89;
						}
					}
				}
			} else {
				if (rel_time < 680) {
					if (hops < 3) {
						if (rel_time < 601) {
							w17 = 97;
						} else {
							w17 = 112;
						}
					} else {
						if (hops < 4) {
							w17 = 74;
						} else {
							w17 = 114;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3817) {
							w17 = 77;
						} else {
							w17 = 73;
						}
					} else {
						if (rel_time < 14990) {
							w17 = 69;
						} else {
							w17 = 63;
						}
					}
				}
			}
		}
	}
	int w18;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w18 = -45;
			} else {
				w18 = -44;
			}
		} else {
			if (rel_time < 15780) {
				w18 = -43;
			} else {
				if (prod != 2) {
					w18 = -44;
				} else {
					if (rel_time < 15971) {
						w18 = -29;
					} else {
						w18 = -37;
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 875) {
				if (cons != 1) {
					if (hops < 2) {
						if (rel_time < 601) {
							w18 = 62;
						} else {
							w18 = 57;
						}
					} else {
						if (prod != 0) {
							w18 = 62;
						} else {
							w18 = 78;
						}
					}
				} else {
					if (rel_time < 601) {
						w18 = 41;
					} else {
						w18 = 25;
					}
				}
			} else {
				if (rel_time < 1262) {
					if (rel_time < 987) {
						if (hops < 2) {
							w18 = 25;
						} else {
							w18 = 43;
						}
					} else {
						if (hops < 2) {
							w18 = 10;
						} else {
							w18 = -18;
						}
					}
				} else {
					if (cons != 1) {
						if (hops < 2) {
							w18 = 36;
						} else {
							w18 = 43;
						}
					} else {
						if (rel_time < 1458) {
							w18 = 39;
						} else {
							w18 = 32;
						}
					}
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 1) {
					if (rel_time < 670) {
						if (rel_time < 553) {
							w18 = 64;
						} else {
							w18 = 74;
						}
					} else {
						if (rel_time < 987) {
							w18 = 28;
						} else {
							w18 = 46;
						}
					}
				} else {
					if (rel_time < 616) {
						if (rel_time < 553) {
							w18 = 39;
						} else {
							w18 = -10;
						}
					} else {
						if (hops < 4) {
							w18 = 37;
						} else {
							w18 = 48;
						}
					}
				}
			} else {
				if (rel_time < 1262) {
					if (rel_time < 875) {
						w18 = 70;
					} else {
						if (hops < 4) {
							w18 = 15;
						} else {
							w18 = 32;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 6754) {
							w18 = 56;
						} else {
							w18 = 59;
						}
					} else {
						if (rel_time < 4209) {
							w18 = 70;
						} else {
							w18 = 61;
						}
					}
				}
			}
		}
	}
	int w19;
	if (size < 126) {
		if (hops < 3) {
			if (rel_time < 15780) {
				if (hops < 2) {
					w19 = -31;
				} else {
					w19 = -31;
				}
			} else {
				if (prod != 2) {
					w19 = -32;
				} else {
					w19 = -24;
				}
			}
		} else {
			w19 = -30;
		}
	} else {
		if (hops < 3) {
			if (rel_time < 875) {
				if (cons != 1) {
					if (cons != 2) {
						w19 = 40;
					} else {
						if (hops < 2) {
							w19 = 41;
						} else {
							w19 = 52;
						}
					}
				} else {
					if (rel_time < 601) {
						w19 = 29;
					} else {
						w19 = 18;
					}
				}
			} else {
				if (rel_time < 15781) {
					if (rel_time < 1262) {
						if (rel_time < 987) {
							w19 = 24;
						} else {
							w19 = -4;
						}
					} else {
						if (cons != 2) {
							w19 = 25;
						} else {
							w19 = 30;
						}
					}
				} else {
					if (rel_time < 15967) {
						if (cons != 3) {
							w19 = 199;
						} else {
							w19 = 10;
						}
					} else {
						if (hops < 2) {
							w19 = 10;
						} else {
							w19 = 45;
						}
					}
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (rel_time < 616) {
						if (rel_time < 553) {
							w19 = 27;
						} else {
							w19 = -7;
						}
					} else {
						if (rel_time < 670) {
							w19 = 53;
						} else {
							w19 = 29;
						}
					}
				} else {
					if (rel_time < 671) {
						if (hops < 4) {
							w19 = 41;
						} else {
							w19 = 63;
						}
					} else {
						if (hops < 4) {
							w19 = 34;
						} else {
							w19 = 36;
						}
					}
				}
			} else {
				if (rel_time < 2640) {
					if (rel_time < 875) {
						w19 = 49;
					} else {
						if (rel_time < 1262) {
							w19 = 13;
						} else {
							w19 = 36;
						}
					}
				} else {
					if (rel_time < 12838) {
						if (rel_time < 12054) {
							w19 = 41;
						} else {
							w19 = 27;
						}
					} else {
						if (hops < 4) {
							w19 = 43;
						} else {
							w19 = 48;
						}
					}
				}
			}
		}
	}
	int w20;
	if (size < 126) {
		if (hops < 4) {
			if (hops < 2) {
				w20 = -22;
			} else {
				w20 = -21;
			}
		} else {
			w20 = -20;
		}
	} else {
		if (hops < 2) {
			if (cons != 4) {
				if (rel_time < 1458) {
					if (cons != 2) {
						if (prod != 0) {
							w20 = 25;
						} else {
							w20 = 17;
						}
					} else {
						if (rel_time < 553) {
							w20 = 21;
						} else {
							w20 = 30;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 15781) {
							w20 = 14;
						} else {
							w20 = -12;
						}
					} else {
						if (rel_time < 2248) {
							w20 = 5;
						} else {
							w20 = 10;
						}
					}
				}
			} else {
				if (rel_time < 15967) {
					if (rel_time < 15382) {
						if (rel_time < 1262) {
							w20 = 18;
						} else {
							w20 = 26;
						}
					} else {
						w20 = 83;
					}
				} else {
					w20 = 7;
				}
			}
		} else {
			if (cons != 2) {
				if (hops < 4) {
					if (rel_time < 15781) {
						if (hops < 3) {
							w20 = 17;
						} else {
							w20 = 21;
						}
					} else {
						if (rel_time < 15967) {
							w20 = 67;
						} else {
							w20 = 27;
						}
					}
				} else {
					if (rel_time < 2242) {
						if (prod != 0) {
							w20 = 36;
						} else {
							w20 = 13;
						}
					} else {
						if (rel_time < 2837) {
							w20 = 38;
						} else {
							w20 = 28;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 680) {
						if (rel_time < 553) {
							w20 = 30;
						} else {
							w20 = 38;
						}
					} else {
						if (rel_time < 11068) {
							w20 = 31;
						} else {
							w20 = 28;
						}
					}
				} else {
					if (rel_time < 601) {
						w20 = 35;
					} else {
						if (hops < 4) {
							w20 = 23;
						} else {
							w20 = 26;
						}
					}
				}
			}
		}
	}
	int w21;
	if (size < 126) {
		if (hops < 3) {
			w21 = -15;
		} else {
			w21 = -15;
		}
	} else {
		if (cons != 1) {
			if (rel_time < 875) {
				if (hops < 4) {
					if (prod != 0) {
						if (hops < 3) {
							w21 = 23;
						} else {
							w21 = 28;
						}
					} else {
						if (hops < 3) {
							w21 = 23;
						} else {
							w21 = 7;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 553) {
							w21 = 9;
						} else {
							w21 = 27;
						}
					} else {
						w21 = 57;
					}
				}
			} else {
				if (rel_time < 1262) {
					if (hops < 3) {
						if (rel_time < 1071) {
							w21 = 12;
						} else {
							w21 = -8;
						}
					} else {
						if (rel_time < 1071) {
							w21 = -15;
						} else {
							w21 = 5;
						}
					}
				} else {
					if (hops < 2) {
						if (cons != 4) {
							w21 = 9;
						} else {
							w21 = 18;
						}
					} else {
						if (rel_time < 15781) {
							w21 = 17;
						} else {
							w21 = 27;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 616) {
					if (hops < 3) {
						if (rel_time < 601) {
							w21 = 14;
						} else {
							w21 = 7;
						}
					} else {
						if (rel_time < 553) {
							w21 = 9;
						} else {
							w21 = -18;
						}
					}
				} else {
					if (rel_time < 1458) {
						if (hops < 2) {
							w21 = 22;
						} else {
							w21 = 12;
						}
					} else {
						if (hops < 2) {
							w21 = 9;
						} else {
							w21 = 11;
						}
					}
				}
			} else {
				if (rel_time < 3027) {
					w21 = 14;
				} else {
					if (rel_time < 6949) {
						w21 = 22;
					} else {
						if (rel_time < 11466) {
							w21 = 13;
						} else {
							w21 = 19;
						}
					}
				}
			}
		}
	}
	int w22;
	if (size < 126) {
		if (rel_time < 15780) {
			w22 = -11;
		} else {
			if (prod != 2) {
				w22 = -11;
			} else {
				w22 = -5;
			}
		}
	} else {
		if (cons != 1) {
			if (rel_time < 875) {
				if (hops < 4) {
					if (prod != 0) {
						if (hops < 3) {
							w22 = 16;
						} else {
							w22 = 19;
						}
					} else {
						if (hops < 3) {
							w22 = 16;
						} else {
							w22 = 5;
						}
					}
				} else {
					if (prod != 0) {
						w22 = 18;
					} else {
						w22 = 40;
					}
				}
			} else {
				if (rel_time < 1262) {
					if (hops < 3) {
						if (rel_time < 987) {
							w22 = 9;
						} else {
							w22 = -6;
						}
					} else {
						if (rel_time < 1071) {
							w22 = -10;
						} else {
							w22 = 3;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 15781) {
							w22 = 9;
						} else {
							w22 = 18;
						}
					} else {
						if (cons != 4) {
							w22 = 11;
						} else {
							w22 = 17;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 616) {
					if (hops < 3) {
						if (rel_time < 601) {
							w22 = 10;
						} else {
							w22 = 5;
						}
					} else {
						if (rel_time < 553) {
							w22 = 6;
						} else {
							w22 = -13;
						}
					}
				} else {
					if (rel_time < 1458) {
						if (hops < 2) {
							w22 = 15;
						} else {
							w22 = 8;
						}
					} else {
						if (hops < 2) {
							w22 = 6;
						} else {
							w22 = 8;
						}
					}
				}
			} else {
				w22 = 12;
			}
		}
	}
	int w23;
	if (size < 126) {
		w23 = -7;
	} else {
		if (hops < 2) {
			if (cons != 4) {
				if (cons != 2) {
					if (rel_time < 15781) {
						if (rel_time < 12048) {
							w23 = 6;
						} else {
							w23 = 4;
						}
					} else {
						w23 = -17;
					}
				} else {
					if (rel_time < 671) {
						if (rel_time < 553) {
							w23 = 3;
						} else {
							w23 = 12;
						}
					} else {
						w23 = 2;
					}
				}
			} else {
				if (rel_time < 15967) {
					if (rel_time < 15382) {
						if (rel_time < 8322) {
							w23 = 8;
						} else {
							w23 = 12;
						}
					} else {
						w23 = 47;
					}
				} else {
					w23 = -6;
				}
			}
		} else {
			if (cons != 2) {
				if (hops < 4) {
					if (prod != 0) {
						if (rel_time < 553) {
							w23 = 6;
						} else {
							w23 = 13;
						}
					} else {
						if (rel_time < 1268) {
							w23 = -2;
						} else {
							w23 = 6;
						}
					}
				} else {
					if (rel_time < 1850) {
						if (prod != 0) {
							w23 = 14;
						} else {
							w23 = 1;
						}
					} else {
						if (cons != 1) {
							w23 = 12;
						} else {
							w23 = 9;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 6170) {
						w23 = 14;
					} else {
						if (rel_time < 7930) {
							w23 = 9;
						} else {
							w23 = 14;
						}
					}
				} else {
					if (rel_time < 4008) {
						w23 = 10;
					} else {
						if (rel_time < 5577) {
							w23 = 6;
						} else {
							w23 = 8;
						}
					}
				}
			}
		}
	}
	int w24;
	if (size < 126) {
		w24 = -5;
	} else {
		if (cons != 1) {
			if (hops < 3) {
				if (rel_time < 15781) {
					if (cons != 4) {
						if (hops < 2) {
							w24 = 3;
						} else {
							w24 = 8;
						}
					} else {
						if (hops < 2) {
							w24 = 7;
						} else {
							w24 = -1;
						}
					}
				} else {
					if (rel_time < 15967) {
						if (cons != 3) {
							w24 = 97;
						} else {
							w24 = -13;
						}
					} else {
						if (hops < 2) {
							w24 = -4;
						} else {
							w24 = 8;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (rel_time < 15781) {
						if (rel_time < 671) {
							w24 = 9;
						} else {
							w24 = 5;
						}
					} else {
						if (hops < 4) {
							w24 = -87;
						} else {
							w24 = 4;
						}
					}
				} else {
					if (rel_time < 6754) {
						if (rel_time < 4400) {
							w24 = 9;
						} else {
							w24 = 4;
						}
					} else {
						if (rel_time < 8131) {
							w24 = 18;
						} else {
							w24 = 10;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 9113) {
					if (rel_time < 5380) {
						if (rel_time < 5190) {
							w24 = 3;
						} else {
							w24 = 7;
						}
					} else {
						if (rel_time < 8518) {
							w24 = 2;
						} else {
							w24 = -1;
						}
					}
				} else {
					if (rel_time < 13819) {
						if (hops < 2) {
							w24 = 3;
						} else {
							w24 = 6;
						}
					} else {
						if (rel_time < 14009) {
							w24 = 0;
						} else {
							w24 = 3;
						}
					}
				}
			} else {
				w24 = 6;
			}
		}
	}
	int w25;
	if (size < 126) {
		w25 = -4;
	} else {
		if (prod != 0) {
			if (rel_time < 553) {
				w25 = 3;
			} else {
				w25 = 7;
			}
		} else {
			if (rel_time < 1262) {
				if (cons != 2) {
					if (hops < 3) {
						if (rel_time < 1071) {
							w25 = 3;
						} else {
							w25 = -6;
						}
					} else {
						if (rel_time < 1071) {
							w25 = -7;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w25 = 6;
						} else {
							w25 = -2;
						}
					} else {
						w25 = 23;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 15781) {
						if (cons != 4) {
							w25 = 3;
						} else {
							w25 = 2;
						}
					} else {
						if (rel_time < 15967) {
							w25 = 26;
						} else {
							w25 = 2;
						}
					}
				} else {
					if (cons != 4) {
						if (rel_time < 15781) {
							w25 = 4;
						} else {
							w25 = -52;
						}
					} else {
						if (rel_time < 15967) {
							w25 = 7;
						} else {
							w25 = 1;
						}
					}
				}
			}
		}
	}
	int w26;
	if (size < 126) {
		w26 = -3;
	} else {
		if (cons != 1) {
			if (hops < 2) {
				if (cons != 2) {
					if (rel_time < 15781) {
						if (rel_time < 9700) {
							w26 = 2;
						} else {
							w26 = 5;
						}
					} else {
						if (cons != 3) {
							w26 = -3;
						} else {
							w26 = -16;
						}
					}
				} else {
					if (rel_time < 601) {
						w26 = 6;
					} else {
						w26 = -1;
					}
				}
			} else {
				if (cons != 2) {
					if (hops < 3) {
						if (rel_time < 15781) {
							w26 = 1;
						} else {
							w26 = 15;
						}
					} else {
						if (cons != 3) {
							w26 = 4;
						} else {
							w26 = 2;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 14990) {
							w26 = 6;
						} else {
							w26 = 10;
						}
					} else {
						if (rel_time < 14990) {
							w26 = 3;
						} else {
							w26 = 0;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				w26 = 1;
			} else {
				w26 = 3;
			}
		}
	}
	int w27;
	if (size < 126) {
		w27 = -2;
	} else {
		if (hops < 4) {
			if (prod != 0) {
				if (rel_time < 553) {
					w27 = 1;
				} else {
					w27 = 4;
				}
			} else {
				if (rel_time < 1262) {
					if (hops < 3) {
						if (rel_time < 987) {
							w27 = 2;
						} else {
							w27 = -4;
						}
					} else {
						if (rel_time < 616) {
							w27 = -8;
						} else {
							w27 = -3;
						}
					}
				} else {
					if (rel_time < 15967) {
						if (rel_time < 15781) {
							w27 = 2;
						} else {
							w27 = 13;
						}
					} else {
						w27 = -2;
					}
				}
			}
		} else {
			if (rel_time < 15781) {
				if (rel_time < 13814) {
					if (rel_time < 13422) {
						if (rel_time < 12054) {
							w27 = 3;
						} else {
							w27 = -1;
						}
					} else {
						if (rel_time < 13427) {
							w27 = 42;
						} else {
							w27 = 10;
						}
					}
				} else {
					if (rel_time < 14407) {
						w27 = -4;
					} else {
						if (rel_time < 14794) {
							w27 = 9;
						} else {
							w27 = 0;
						}
					}
				}
			} else {
				w27 = 11;
			}
		}
	}
	int w28;
	if (size < 126) {
		w28 = -1;
	} else {
		if (cons != 1) {
			if (hops < 2) {
				if (cons != 4) {
					if (rel_time < 15781) {
						if (rel_time < 4008) {
							w28 = -1;
						} else {
							w28 = 0;
						}
					} else {
						w28 = -15;
					}
				} else {
					if (rel_time < 15191) {
						if (rel_time < 14407) {
							w28 = 3;
						} else {
							w28 = 14;
						}
					} else {
						w28 = -1;
					}
				}
			} else {
				if (cons != 2) {
					if (hops < 3) {
						if (rel_time < 15382) {
							w28 = 0;
						} else {
							w28 = 8;
						}
					} else {
						if (rel_time < 2640) {
							w28 = 0;
						} else {
							w28 = 2;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11068) {
							w28 = 4;
						} else {
							w28 = 2;
						}
					} else {
						w28 = 2;
					}
				}
			}
		} else {
			w28 = 1;
		}
	}
	int w29;
	if (size < 126) {
		w29 = -1;
	} else {
		if (prod != 0) {
			w29 = 2;
		} else {
			if (rel_time < 2445) {
				if (cons != 4) {
					if (hops < 2) {
						if (cons != 3) {
							w29 = -1;
						} else {
							w29 = -5;
						}
					} else {
						if (hops < 3) {
							w29 = 3;
						} else {
							w29 = -1;
						}
					}
				} else {
					if (hops < 2) {
						w29 = 2;
					} else {
						if (hops < 3) {
							w29 = -8;
						} else {
							w29 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2831) {
					if (hops < 4) {
						if (rel_time < 2635) {
							w29 = 1;
						} else {
							w29 = 6;
						}
					} else {
						w29 = 12;
					}
				} else {
					if (rel_time < 3621) {
						if (rel_time < 2837) {
							w29 = -4;
						} else {
							w29 = 3;
						}
					} else {
						if (hops < 4) {
							w29 = 1;
						} else {
							w29 = 2;
						}
					}
				}
			}
		}
	}
	int w30;
	if (size < 126) {
		w30 = -1;
	} else {
		if (rel_time < 15967) {
			if (rel_time < 15781) {
				if (rel_time < 15191) {
					if (rel_time < 14996) {
						if (rel_time < 13819) {
							w30 = 1;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 15186) {
							w30 = 6;
						} else {
							w30 = 43;
						}
					}
				} else {
					w30 = -1;
				}
			} else {
				if (cons != 3) {
					if (hops < 2) {
						w30 = -7;
					} else {
						if (hops < 3) {
							w30 = 101;
						} else {
							w30 = 30;
						}
					}
				} else {
					if (hops < 2) {
						w30 = -11;
					} else {
						if (hops < 4) {
							w30 = -36;
						} else {
							w30 = 13;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				w30 = -3;
			} else {
				w30 = 6;
			}
		}
	}
	return (134219 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30) >> 8;
}
