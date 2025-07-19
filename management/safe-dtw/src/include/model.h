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
				w0 = -43963;
			} else {
				w0 = -43067;
			}
		} else {
			w0 = -41995;
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w0 = 44061;
			} else {
				w0 = 60757;
			}
		} else {
			if (rel_time < 121) {
				w0 = 29939;
			} else {
				if (cons != 3) {
					if (cons != 1) {
						if (hops < 3) {
							w0 = 40958;
						} else {
							w0 = 42466;
						}
					} else {
						if (hops < 3) {
							w0 = 38557;
						} else {
							w0 = 40084;
						}
					}
				} else {
					if (hops < 3) {
						w0 = 38505;
					} else {
						w0 = 40033;
					}
				}
			}
		}
	}
	int w1;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w1 = -21983;
			} else {
				w1 = -21535;
			}
		} else {
			if (hops < 4) {
				w1 = -21175;
			} else {
				w1 = -20272;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				w1 = 22078;
			} else {
				w1 = 30402;
			}
		} else {
			if (rel_time < 121) {
				if (hops < 2) {
					w1 = 13921;
				} else {
					w1 = 15465;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 14961) {
						if (cons != 2) {
							w1 = 19170;
						} else {
							w1 = 19998;
						}
					} else {
						w1 = 23347;
					}
				} else {
					if (rel_time < 14961) {
						if (cons != 2) {
							w1 = 20232;
						} else {
							w1 = 21062;
						}
					} else {
						w1 = 24459;
					}
				}
			}
		}
	}
	int w2;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w2 = -10993;
			} else {
				w2 = -10769;
			}
		} else {
			if (hops < 4) {
				w2 = -10588;
			} else {
				w2 = -10140;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 2) {
					w2 = 10093;
				} else {
					w2 = 11555;
				}
			} else {
				if (hops < 2) {
					w2 = 14113;
				} else {
					if (cons != 3) {
						w2 = 16174;
					} else {
						w2 = 14795;
					}
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (rel_time < 121) {
						if (hops < 3) {
							w2 = 7143;
						} else {
							w2 = 8258;
						}
					} else {
						if (hops < 4) {
							w2 = 9509;
						} else {
							w2 = 10626;
						}
					}
				} else {
					if (rel_time < 180) {
						w2 = 11794;
					} else {
						if (hops < 4) {
							w2 = 10199;
						} else {
							w2 = 11315;
						}
					}
				}
			} else {
				if (rel_time < 14392) {
					if (hops < 4) {
						if (hops < 2) {
							w2 = 10311;
						} else {
							w2 = 10742;
						}
					} else {
						w2 = 11688;
					}
				} else {
					w2 = 12131;
				}
			}
		}
	}
	int w3;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w3 = -5497;
			} else {
				w3 = -5385;
			}
		} else {
			if (hops < 4) {
				w3 = -5295;
			} else {
				w3 = -5072;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 3) {
					w3 = 5176;
				} else {
					w3 = 6285;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 111) {
						w3 = 7885;
					} else {
						if (rel_time < 175) {
							w3 = 6598;
						} else {
							w3 = 7193;
						}
					}
				} else {
					if (hops < 4) {
						w3 = 8125;
					} else {
						w3 = 9171;
					}
				}
			}
		} else {
			if (cons != 4) {
				if (hops < 2) {
					if (cons != 2) {
						if (rel_time < 473) {
							w3 = 3770;
						} else {
							w3 = 4500;
						}
					} else {
						if (rel_time < 180) {
							w3 = 5557;
						} else {
							w3 = 4828;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 473) {
							w3 = 4188;
						} else {
							w3 = 4964;
						}
					} else {
						if (rel_time < 180) {
							w3 = 6073;
						} else {
							w3 = 5302;
						}
					}
				}
			} else {
				if (rel_time < 14392) {
					if (hops < 3) {
						if (rel_time < 737) {
							w3 = 4733;
						} else {
							w3 = 5263;
						}
					} else {
						if (hops < 4) {
							w3 = 5451;
						} else {
							w3 = 5856;
						}
					}
				} else {
					w3 = 6080;
				}
			}
		}
	}
	int w4;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w4 = -2749;
			} else {
				w4 = -2693;
			}
		} else {
			if (hops < 4) {
				w4 = -2648;
			} else {
				w4 = -2537;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 4) {
					if (hops < 3) {
						w4 = 2596;
					} else {
						w4 = 2984;
					}
				} else {
					w4 = 3823;
				}
			} else {
				if (rel_time < 111) {
					if (hops < 3) {
						w4 = 3956;
					} else {
						w4 = 4761;
					}
				} else {
					if (hops < 2) {
						w4 = 3199;
					} else {
						if (hops < 4) {
							w4 = 3760;
						} else {
							w4 = 4402;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 4) {
					if (rel_time < 121) {
						w4 = 1598;
					} else {
						if (cons != 2) {
							w4 = 2314;
						} else {
							w4 = 2495;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 737) {
							w4 = 2300;
						} else {
							w4 = 2564;
						}
					} else {
						if (rel_time < 14392) {
							w4 = 2692;
						} else {
							w4 = 3049;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 1) {
						if (cons != 3) {
							w4 = 2725;
						} else {
							w4 = 2521;
						}
					} else {
						if (rel_time < 121) {
							w4 = 1903;
						} else {
							w4 = 2501;
						}
					}
				} else {
					if (rel_time < 14961) {
						if (cons != 2) {
							w4 = 2872;
						} else {
							w4 = 3063;
						}
					} else {
						w4 = 3962;
					}
				}
			}
		}
	}
	int w5;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w5 = -1374;
			} else {
				w5 = -1346;
			}
		} else {
			if (hops < 4) {
				w5 = -1324;
			} else {
				w5 = -1269;
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 63) {
				if (hops < 4) {
					if (hops < 2) {
						w5 = 1215;
					} else {
						w5 = 1448;
					}
				} else {
					w5 = 1977;
				}
			} else {
				if (cons != 3) {
					if (hops < 4) {
						if (hops < 3) {
							w5 = 1936;
						} else {
							w5 = 2128;
						}
					} else {
						w5 = 2627;
					}
				} else {
					if (hops < 2) {
						w5 = 1419;
					} else {
						w5 = 1801;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 121) {
							w5 = 801;
						} else {
							w5 = 1091;
						}
					} else {
						if (rel_time < 180) {
							w5 = 1558;
						} else {
							w5 = 1168;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (rel_time < 737) {
							w5 = 1157;
						} else {
							w5 = 1273;
						}
					} else {
						w5 = 1443;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 121) {
						if (hops < 3) {
							w5 = 797;
						} else {
							w5 = 960;
						}
					} else {
						if (cons != 4) {
							w5 = 1268;
						} else {
							w5 = 1370;
						}
					}
				} else {
					if (rel_time < 14961) {
						if (rel_time < 180) {
							w5 = 1801;
						} else {
							w5 = 1453;
						}
					} else {
						w5 = 2057;
					}
				}
			}
		}
	}
	int w6;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w6 = -687;
			} else {
				w6 = -673;
			}
		} else {
			if (hops < 4) {
				w6 = -662;
			} else {
				w6 = -635;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 2) {
				if (rel_time < 63) {
					if (hops < 3) {
						w6 = 642;
					} else {
						if (hops < 4) {
							w6 = 786;
						} else {
							w6 = 1023;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 175) {
							w6 = 714;
						} else {
							w6 = 808;
						}
					} else {
						if (hops < 4) {
							w6 = 928;
						} else {
							w6 = 1157;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w6 = 1081;
					} else {
						w6 = 958;
					}
				} else {
					w6 = 1289;
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 473) {
							w6 = 430;
						} else {
							w6 = 548;
						}
					} else {
						if (rel_time < 180) {
							w6 = 784;
						} else {
							w6 = 584;
						}
					}
				} else {
					if (rel_time < 14392) {
						if (rel_time < 737) {
							w6 = 582;
						} else {
							w6 = 637;
						}
					} else {
						w6 = 726;
					}
				}
			} else {
				if (rel_time < 14961) {
					if (cons != 1) {
						if (rel_time < 180) {
							w6 = 1077;
						} else {
							w6 = 661;
						}
					} else {
						if (rel_time < 121) {
							w6 = 440;
						} else {
							w6 = 604;
						}
					}
				} else {
					if (hops < 3) {
						w6 = 854;
					} else {
						w6 = 1135;
					}
				}
			}
		}
	}
	int w7;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w7 = -344;
			} else {
				w7 = -337;
			}
		} else {
			if (hops < 4) {
				w7 = -331;
			} else {
				w7 = -318;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 2) {
				if (rel_time < 175) {
					if (hops < 3) {
						if (rel_time < 63) {
							w7 = 322;
						} else {
							w7 = 357;
						}
					} else {
						if (rel_time < 63) {
							w7 = 424;
						} else {
							w7 = 505;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w7 = 407;
						} else {
							w7 = 503;
						}
					} else {
						w7 = 708;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w7 = 544;
					} else {
						w7 = 482;
					}
				} else {
					w7 = 649;
				}
			}
		} else {
			if (hops < 4) {
				if (cons != 1) {
					if (cons != 3) {
						if (rel_time < 180) {
							w7 = 463;
						} else {
							w7 = 331;
						}
					} else {
						if (rel_time < 473) {
							w7 = 201;
						} else {
							w7 = 288;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 121) {
							w7 = 187;
						} else {
							w7 = 267;
						}
					} else {
						if (rel_time < 121) {
							w7 = 266;
						} else {
							w7 = 315;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 737) {
						if (rel_time < 473) {
							w7 = 254;
						} else {
							w7 = -69;
						}
					} else {
						if (cons != 4) {
							w7 = 372;
						} else {
							w7 = 480;
						}
					}
				} else {
					if (rel_time < 180) {
						w7 = 972;
					} else {
						w7 = 439;
					}
				}
			}
		}
	}
	return (129405 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7) >> 8;
}
