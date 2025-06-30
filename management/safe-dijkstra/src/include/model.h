#include <stdbool.h>
#include <stdint.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define UINT8_MIN 0
#define UINT16_MIN 0
#define UINT32_MIN 0

int model(int rel_time, int hops, int size, int prod, int cons)
{
	int w0;
	if (size < 38) {
		if (cons == 0) {
			if (hops < 3) {
				if (rel_time < 3478) {
					if (hops < 2) {
						if (rel_time < 1355) {
							w0 = 35584;
						} else {
							w0 = 34560;
						}
					} else {
						if (rel_time < 1355) {
							w0 = 36096;
						} else {
							w0 = 35072;
						}
					}
				} else {
					if (rel_time < 3522) {
						w0 = 36096;
					} else {
						w0 = 37888;
					}
				}
			} else {
				if (rel_time < 3478) {
					if (hops < 4) {
						if (rel_time < 1355) {
							w0 = 36608;
						} else {
							w0 = 35584;
						}
					} else {
						if (rel_time < 1355) {
							w0 = 37120;
						} else {
							w0 = 36096;
						}
					}
				} else {
					if (rel_time < 3522) {
						w0 = 37376;
					} else {
						w0 = 38912;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w0 = 33024;
				} else {
					w0 = 33536;
				}
			} else {
				if (hops < 4) {
					w0 = 34048;
				} else {
					w0 = 34816;
				}
			}
		}
	} else {
		if (rel_time < 398) {
			if (cons == 0) {
				if (cons == 3) {
					if (cons == 1) {
						if (hops < 3) {
							w0 = 65792;
						} else {
							w0 = 67072;
						}
					} else {
						if (hops < 3) {
							w0 = 69376;
						} else {
							w0 = 70400;
						}
					}
				} else {
					if (hops < 3) {
						w0 = 69888;
					} else {
						w0 = 71168;
					}
				}
			} else {
				if (hops < 3) {
					w0 = 58624;
				} else {
					w0 = 59904;
				}
			}
		} else {
			if (size < 125) {
				if (rel_time < 3910) {
					if (rel_time < 3619) {
						if (cons == 0) {
							w0 = 54784;
						} else {
							w0 = 52736;
						}
					} else {
						if (prod == 0) {
							w0 = 47104;
						} else {
							w0 = 53760;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w0 = 54272;
						} else {
							w0 = 54784;
						}
					} else {
						if (hops < 4) {
							w0 = 55296;
						} else {
							w0 = 55808;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (cons == 1) {
						if (cons == 3) {
							w0 = 57600;
						} else {
							w0 = 56320;
						}
					} else {
						w0 = 56064;
					}
				} else {
					if (cons == 3) {
						if (cons == 1) {
							w0 = 58624;
						} else {
							w0 = 57344;
						}
					} else {
						w0 = 57344;
					}
				}
			}
		}
	}
	int w1;
	if (size < 38) {
		if (cons == 0) {
			if (hops < 3) {
				if (rel_time < 3478) {
					if (rel_time < 3458) {
						if (rel_time < 3281) {
							w1 = 24320;
						} else {
							w1 = 25344;
						}
					} else {
						w1 = 22528;
					}
				} else {
					if (rel_time < 3522) {
						w1 = 25344;
					} else {
						w1 = 26368;
					}
				}
			} else {
				if (rel_time < 3478) {
					if (hops < 5) {
						if (rel_time < 3458) {
							w1 = 25088;
						} else {
							w1 = 23296;
						}
					} else {
						if (rel_time < 3458) {
							w1 = 25856;
						} else {
							w1 = 23808;
						}
					}
				} else {
					if (rel_time < 3522) {
						w1 = 26112;
					} else {
						w1 = 27136;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 1237) {
						w1 = 22528;
					} else {
						if (rel_time < 1385) {
							w1 = 23808;
						} else {
							w1 = 23040;
						}
					}
				} else {
					if (rel_time < 1237) {
						w1 = 22784;
					} else {
						w1 = 23552;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 1237) {
						w1 = 23296;
					} else {
						w1 = 24064;
					}
				} else {
					w1 = 24832;
				}
			}
		}
	} else {
		if (rel_time < 398) {
			if (cons == 0) {
				if (cons == 3) {
					if (cons == 1) {
						if (hops < 4) {
							w1 = 46080;
						} else {
							w1 = 47104;
						}
					} else {
						if (hops < 4) {
							w1 = 48640;
						} else {
							w1 = 49664;
						}
					}
				} else {
					if (hops < 4) {
						w1 = 49152;
					} else {
						w1 = 50176;
					}
				}
			} else {
				if (hops < 2) {
					w1 = 40704;
				} else {
					if (hops < 4) {
						w1 = 41472;
					} else {
						w1 = 42240;
					}
				}
			}
		} else {
			if (size < 125) {
				if (hops < 3) {
					if (rel_time < 3910) {
						if (rel_time < 3619) {
							w1 = 37376;
						} else {
							w1 = 33536;
						}
					} else {
						if (hops < 2) {
							w1 = 37888;
						} else {
							w1 = 38400;
						}
					}
				} else {
					if (rel_time < 783) {
						w1 = 36864;
					} else {
						if (rel_time < 929) {
							w1 = 39680;
						} else {
							w1 = 38656;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (cons == 1) {
							w1 = 39680;
						} else {
							w1 = 39168;
						}
					} else {
						if (cons == 1) {
							w1 = 40448;
						} else {
							w1 = 39680;
						}
					}
				} else {
					if (cons == 1) {
						if (cons == 3) {
							w1 = 41472;
						} else {
							w1 = 40448;
						}
					} else {
						w1 = 40448;
					}
				}
			}
		}
	}
	int w2;
	if (size < 38) {
		if (cons == 0) {
			if (hops < 2) {
				if (rel_time < 3478) {
					if (rel_time < 1355) {
						if (cons == 4) {
							w2 = 17664;
						} else {
							w2 = 16896;
						}
					} else {
						if (rel_time < 1473) {
							w2 = 15616;
						} else {
							w2 = 16896;
						}
					}
				} else {
					if (rel_time < 3522) {
						w2 = 17408;
					} else {
						w2 = 18176;
					}
				}
			} else {
				if (rel_time < 3281) {
					if (rel_time < 3132) {
						if (rel_time < 2984) {
							w2 = 17408;
						} else {
							w2 = 18432;
						}
					} else {
						if (cons == 3) {
							w2 = 16640;
						} else {
							w2 = 15616;
						}
					}
				} else {
					if (rel_time < 3522) {
						if (rel_time < 3398) {
							w2 = 18432;
						} else {
							w2 = 17408;
						}
					} else {
						w2 = 18944;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 3310) {
					if (rel_time < 3162) {
						if (rel_time < 3014) {
							w2 = 16128;
						} else {
							w2 = 16896;
						}
					} else {
						w2 = 15616;
					}
				} else {
					w2 = 16896;
				}
			} else {
				if (hops < 4) {
					w2 = 16640;
				} else {
					w2 = 17152;
				}
			}
		}
	} else {
		if (rel_time < 398) {
			if (cons == 0) {
				if (cons == 3) {
					if (cons == 1) {
						if (hops < 2) {
							w2 = 32000;
						} else {
							w2 = 32768;
						}
					} else {
						if (hops < 2) {
							w2 = 33536;
						} else {
							w2 = 34304;
						}
					}
				} else {
					if (hops < 2) {
						w2 = 34048;
					} else {
						w2 = 34560;
					}
				}
			} else {
				if (hops < 2) {
					w2 = 28416;
				} else {
					if (hops < 4) {
						w2 = 28928;
					} else {
						w2 = 29440;
					}
				}
			}
		} else {
			if (size < 125) {
				if (rel_time < 783) {
					if (hops < 3) {
						if (hops < 2) {
							w2 = 24064;
						} else {
							w2 = 24832;
						}
					} else {
						if (hops < 4) {
							w2 = 25344;
						} else {
							w2 = 26112;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 929) {
							w2 = 27136;
						} else {
							w2 = 26368;
						}
					} else {
						if (rel_time < 929) {
							w2 = 27904;
						} else {
							w2 = 27136;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (cons == 3) {
						if (cons == 1) {
							w2 = 28160;
						} else {
							w2 = 27392;
						}
					} else {
						w2 = 27392;
					}
				} else {
					if (cons == 3) {
						if (cons == 1) {
							w2 = 28672;
						} else {
							w2 = 28160;
						}
					} else {
						if (hops < 4) {
							w2 = 27648;
						} else {
							w2 = 28160;
						}
					}
				}
			}
		}
	}
	int w3;
	if (size < 38) {
		if (hops < 4) {
			if (cons == 0) {
				if (rel_time < 1266) {
					if (hops < 2) {
						w3 = 12800;
					} else {
						w3 = 13312;
					}
				} else {
					if (rel_time < 3281) {
						if (rel_time < 3132) {
							w3 = 11776;
						} else {
							w3 = 11008;
						}
					} else {
						if (rel_time < 3339) {
							w3 = 13056;
						} else {
							w3 = 12288;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1237) {
						w3 = 10752;
					} else {
						if (rel_time < 1385) {
							w3 = 11776;
						} else {
							w3 = 11264;
						}
					}
				} else {
					if (rel_time < 1237) {
						w3 = 11008;
					} else {
						if (rel_time < 1385) {
							w3 = 12288;
						} else {
							w3 = 11520;
						}
					}
				}
			}
		} else {
			if (cons == 0) {
				if (rel_time < 3281) {
					if (rel_time < 1355) {
						if (cons == 4) {
							w3 = 13312;
						} else {
							w3 = 12544;
						}
					} else {
						if (rel_time < 1473) {
							w3 = 11264;
						} else {
							w3 = 12544;
						}
					}
				} else {
					if (cons == 1) {
						if (rel_time < 3368) {
							w3 = 12544;
						} else {
							w3 = 13312;
						}
					} else {
						if (rel_time < 3339) {
							w3 = 13824;
						} else {
							w3 = 11264;
						}
					}
				}
			} else {
				if (rel_time < 3310) {
					if (rel_time < 3162) {
						if (rel_time < 3014) {
							w3 = 11776;
						} else {
							w3 = 12544;
						}
					} else {
						w3 = 11264;
					}
				} else {
					w3 = 12544;
				}
			}
		}
	} else {
		if (rel_time < 398) {
			if (cons == 0) {
				if (cons == 3) {
					if (cons == 1) {
						if (hops < 3) {
							w3 = 22528;
						} else {
							w3 = 23040;
						}
					} else {
						if (hops < 3) {
							w3 = 23552;
						} else {
							w3 = 24064;
						}
					}
				} else {
					if (hops < 3) {
						w3 = 23808;
					} else {
						w3 = 24320;
					}
				}
			} else {
				if (hops < 3) {
					w3 = 19968;
				} else {
					w3 = 20480;
				}
			}
		} else {
			if (size < 125) {
				if (rel_time < 3910) {
					if (rel_time < 3619) {
						if (cons == 0) {
							w3 = 18688;
						} else {
							w3 = 17664;
						}
					} else {
						if (prod == 0) {
							w3 = 14336;
						} else {
							w3 = 18944;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 18432;
						} else {
							w3 = 18688;
						}
					} else {
						if (hops < 5) {
							w3 = 19200;
						} else {
							w3 = 19712;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (cons == 3) {
						if (cons == 1) {
							w3 = 19456;
						} else {
							w3 = 18944;
						}
					} else {
						w3 = 18944;
					}
				} else {
					if (hops < 5) {
						if (cons == 3) {
							w3 = 19712;
						} else {
							w3 = 19456;
						}
					} else {
						w3 = 20480;
					}
				}
			}
		}
	}
	int w4;
	if (size < 38) {
		if (hops < 3) {
			if (rel_time < 3478) {
				if (rel_time < 3458) {
					if (cons == 0) {
						if (rel_time < 1355) {
							w4 = 8704;
						} else {
							w4 = 8192;
						}
					} else {
						if (rel_time < 3310) {
							w4 = 7936;
						} else {
							w4 = 8192;
						}
					}
				} else {
					w4 = 6912;
				}
			} else {
				if (cons == 3) {
					if (hops < 2) {
						w4 = 8960;
					} else {
						w4 = 9216;
					}
				} else {
					if (hops < 2) {
						w4 = 8192;
					} else {
						w4 = 8704;
					}
				}
			}
		} else {
			if (cons == 0) {
				if (hops < 5) {
					if (rel_time < 1355) {
						if (cons == 3) {
							w4 = 8960;
						} else {
							w4 = 9728;
						}
					} else {
						if (rel_time < 1473) {
							w4 = 7424;
						} else {
							w4 = 8704;
						}
					}
				} else {
					if (rel_time < 3478) {
						if (rel_time < 1266) {
							w4 = 9984;
						} else {
							w4 = 8960;
						}
					} else {
						w4 = 9728;
					}
				}
			} else {
				if (rel_time < 3310) {
					if (rel_time < 3162) {
						if (rel_time < 3014) {
							w4 = 8192;
						} else {
							w4 = 8704;
						}
					} else {
						w4 = 7680;
					}
				} else {
					w4 = 8704;
				}
			}
		}
	} else {
		if (rel_time < 398) {
			if (cons == 0) {
				if (cons == 3) {
					if (cons == 1) {
						if (hops < 2) {
							w4 = 15616;
						} else {
							w4 = 15872;
						}
					} else {
						if (hops < 2) {
							w4 = 16384;
						} else {
							w4 = 16896;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 16640;
						} else {
							w4 = 16896;
						}
					} else {
						w4 = 17152;
					}
				}
			} else {
				if (hops < 2) {
					w4 = 13824;
				} else {
					if (hops < 5) {
						w4 = 14080;
					} else {
						w4 = 14848;
					}
				}
			}
		} else {
			if (size < 125) {
				if (rel_time < 3910) {
					if (rel_time < 1031) {
						if (cons == 0) {
							w4 = 13312;
						} else {
							w4 = 12288;
						}
					} else {
						if (prod == 3) {
							w4 = 11264;
						} else {
							w4 = 8960;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w4 = 12800;
						} else {
							w4 = 13056;
						}
					} else {
						if (hops < 5) {
							w4 = 13312;
						} else {
							w4 = 13824;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (cons == 3) {
						if (cons == 1) {
							w4 = 13824;
						} else {
							w4 = 13312;
						}
					} else {
						if (hops < 2) {
							w4 = 13056;
						} else {
							w4 = 13312;
						}
					}
				} else {
					if (hops < 5) {
						if (cons == 1) {
							w4 = 14080;
						} else {
							w4 = 13824;
						}
					} else {
						w4 = 14336;
					}
				}
			}
		}
	}
	int w5;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 3310) {
				if (rel_time < 3162) {
					if (rel_time < 3014) {
						if (rel_time < 2866) {
							w5 = 5632;
						} else {
							w5 = 4608;
						}
					} else {
						if (cons == 3) {
							w5 = 6400;
						} else {
							w5 = 7424;
						}
					}
				} else {
					if (cons == 3) {
						if (rel_time < 3191) {
							w5 = 4096;
						} else {
							w5 = 5376;
						}
					} else {
						w5 = 4096;
					}
				}
			} else {
				if (rel_time < 3398) {
					if (cons == 2) {
						if (rel_time < 3339) {
							w5 = 6656;
						} else {
							w5 = 6912;
						}
					} else {
						w5 = 5632;
					}
				} else {
					if (cons == 1) {
						if (rel_time < 3522) {
							w5 = 5888;
						} else {
							w5 = 6400;
						}
					} else {
						w5 = 4608;
					}
				}
			}
		} else {
			if (rel_time < 3478) {
				if (rel_time < 3458) {
					if (cons == 0) {
						if (rel_time < 3281) {
							w5 = 5888;
						} else {
							w5 = 6400;
						}
					} else {
						if (hops < 5) {
							w5 = 5632;
						} else {
							w5 = 6144;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w5 = 4864;
						} else {
							w5 = 4608;
						}
					} else {
						w5 = 5120;
					}
				}
			} else {
				if (cons == 3) {
					if (hops < 4) {
						w5 = 6656;
					} else {
						w5 = 6912;
					}
				} else {
					w5 = 6144;
				}
			}
		}
	} else {
		if (rel_time < 398) {
			if (cons == 0) {
				if (cons == 3) {
					if (cons == 1) {
						if (hops < 4) {
							w5 = 11008;
						} else {
							w5 = 11520;
						}
					} else {
						if (hops < 4) {
							w5 = 11520;
						} else {
							w5 = 12032;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w5 = 11520;
						} else {
							w5 = 11776;
						}
					} else {
						w5 = 12544;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w5 = 9728;
					} else {
						w5 = 9728;
					}
				} else {
					w5 = 9984;
				}
			}
		} else {
			if (size < 125) {
				if (hops < 2) {
					if (rel_time < 3751) {
						if (rel_time < 1031) {
							w5 = 8704;
						} else {
							w5 = 7168;
						}
					} else {
						if (rel_time < 10379) {
							w5 = 8960;
						} else {
							w5 = 9472;
						}
					}
				} else {
					if (cons == 1) {
						if (rel_time < 3910) {
							w5 = 8960;
						} else {
							w5 = 9216;
						}
					} else {
						if (rel_time < 832) {
							w5 = 10240;
						} else {
							w5 = 7680;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (cons == 3) {
						if (cons == 1) {
							w5 = 9472;
						} else {
							w5 = 9216;
						}
					} else {
						w5 = 9216;
					}
				} else {
					if (cons == 3) {
						if (cons == 1) {
							w5 = 9728;
						} else {
							w5 = 9472;
						}
					} else {
						if (hops < 4) {
							w5 = 9472;
						} else {
							w5 = 9472;
						}
					}
				}
			}
		}
	}
	int w6;
	if (size < 38) {
		if (hops < 4) {
			if (rel_time < 1533) {
				if (rel_time < 1385) {
					if (cons == 3) {
						if (cons == 1) {
							w6 = 3840;
						} else {
							w6 = 4608;
						}
					} else {
						if (hops < 2) {
							w6 = 4864;
						} else {
							w6 = 5120;
						}
					}
				} else {
					if (cons == 2) {
						if (rel_time < 1473) {
							w6 = 2560;
						} else {
							w6 = 3328;
						}
					} else {
						if (hops < 3) {
							w6 = 3840;
						} else {
							w6 = 4096;
						}
					}
				}
			} else {
				if (rel_time < 1621) {
					if (cons == 2) {
						w6 = 5632;
					} else {
						w6 = 4352;
					}
				} else {
					if (rel_time < 1829) {
						if (rel_time < 1681) {
							w6 = 4352;
						} else {
							w6 = 3072;
						}
					} else {
						if (rel_time < 1917) {
							w6 = 5120;
						} else {
							w6 = 3840;
						}
					}
				}
			}
		} else {
			if (cons == 0) {
				if (rel_time < 1681) {
					if (rel_time < 1533) {
						if (rel_time < 1355) {
							w6 = 4608;
						} else {
							w6 = 3584;
						}
					} else {
						if (cons == 2) {
							w6 = 5632;
						} else {
							w6 = 4608;
						}
					}
				} else {
					if (rel_time < 1769) {
						if (cons == 2) {
							w6 = 2560;
						} else {
							w6 = 3840;
						}
					} else {
						if (rel_time < 1917) {
							w6 = 5120;
						} else {
							w6 = 4096;
						}
					}
				}
			} else {
				if (rel_time < 1237) {
					w6 = 3584;
				} else {
					if (rel_time < 1385) {
						w6 = 4864;
					} else {
						if (rel_time < 1533) {
							w6 = 3328;
						} else {
							w6 = 4096;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 398) {
			if (cons == 0) {
				if (cons == 2) {
					if (rel_time < 318) {
						if (hops < 5) {
							w6 = 8192;
						} else {
							w6 = 8704;
						}
					} else {
						if (hops < 5) {
							w6 = 7680;
						} else {
							w6 = 8448;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w6 = 7424;
						} else {
							w6 = 7680;
						}
					} else {
						w6 = 8192;
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w6 = 6656;
					} else {
						w6 = 6912;
					}
				} else {
					w6 = 7168;
				}
			}
		} else {
			if (hops < 4) {
				if (size < 125) {
					if (rel_time < 783) {
						if (hops < 3) {
							w6 = 5376;
						} else {
							w6 = 5888;
						}
					} else {
						if (rel_time < 832) {
							w6 = 6912;
						} else {
							w6 = 6144;
						}
					}
				} else {
					if (hops < 2) {
						if (cons == 3) {
							w6 = 6656;
						} else {
							w6 = 6400;
						}
					} else {
						if (cons == 1) {
							w6 = 6656;
						} else {
							w6 = 6400;
						}
					}
				}
			} else {
				if (rel_time < 1031) {
					if (hops < 5) {
						if (cons == 3) {
							w6 = 6656;
						} else {
							w6 = 6912;
						}
					} else {
						if (rel_time < 880) {
							w6 = 6912;
						} else {
							w6 = 7424;
						}
					}
				} else {
					if (rel_time < 3751) {
						if (rel_time < 3619) {
							w6 = 6144;
						} else {
							w6 = 3840;
						}
					} else {
						if (hops < 5) {
							w6 = 6400;
						} else {
							w6 = 6656;
						}
					}
				}
			}
		}
	}
	int w7;
	if (size < 38) {
		if (rel_time < 2717) {
			if (rel_time < 2570) {
				if (rel_time < 2421) {
					if (rel_time < 2273) {
						if (rel_time < 2096) {
							w7 = 2816;
						} else {
							w7 = 3328;
						}
					} else {
						if (cons == 1) {
							w7 = 2048;
						} else {
							w7 = 1024;
						}
					}
				} else {
					if (rel_time < 2509) {
						if (cons == 2) {
							w7 = 4352;
						} else {
							w7 = 3328;
						}
					} else {
						if (cons == 0) {
							w7 = 3072;
						} else {
							w7 = 3328;
						}
					}
				}
			} else {
				if (cons == 3) {
					if (rel_time < 2599) {
						if (hops < 2) {
							w7 = 1024;
						} else {
							w7 = 1280;
						}
					} else {
						if (cons == 0) {
							w7 = 2304;
						} else {
							w7 = 2048;
						}
					}
				} else {
					if (hops < 2) {
						w7 = 1024;
					} else {
						if (hops < 5) {
							w7 = 1024;
						} else {
							w7 = 1280;
						}
					}
				}
			}
		} else {
			if (rel_time < 2806) {
				if (cons == 2) {
					if (hops < 2) {
						w7 = 4352;
					} else {
						if (hops < 5) {
							w7 = 4608;
						} else {
							w7 = 4864;
						}
					}
				} else {
					if (hops < 2) {
						w7 = 3072;
					} else {
						w7 = 3072;
					}
				}
			} else {
				if (rel_time < 3014) {
					if (rel_time < 2866) {
						if (hops < 2) {
							w7 = 3072;
						} else {
							w7 = 3328;
						}
					} else {
						if (rel_time < 2895) {
							w7 = 1280;
						} else {
							w7 = 2048;
						}
					}
				} else {
					if (rel_time < 3132) {
						if (cons == 4) {
							w7 = 3840;
						} else {
							w7 = 2816;
						}
					} else {
						if (rel_time < 3310) {
							w7 = 2304;
						} else {
							w7 = 3072;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 398) {
			if (cons == 0) {
				if (cons == 3) {
					if (cons == 1) {
						if (hops < 5) {
							w7 = 5376;
						} else {
							w7 = 5888;
						}
					} else {
						if (hops < 2) {
							w7 = 5376;
						} else {
							w7 = 5632;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w7 = 5632;
						} else {
							w7 = 5632;
						}
					} else {
						w7 = 5888;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 68) {
							w7 = 4608;
						} else {
							w7 = 2816;
						}
					} else {
						w7 = 4864;
					}
				} else {
					if (hops < 5) {
						w7 = 4864;
					} else {
						w7 = 5120;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (size < 125) {
					if (rel_time < 3751) {
						if (rel_time < 3619) {
							w7 = 4096;
						} else {
							w7 = 2304;
						}
					} else {
						if (rel_time < 10118) {
							w7 = 4352;
						} else {
							w7 = 4096;
						}
					}
				} else {
					if (cons == 1) {
						if (cons == 3) {
							w7 = 4608;
						} else {
							w7 = 4352;
						}
					} else {
						w7 = 4352;
					}
				}
			} else {
				if (rel_time < 929) {
					if (rel_time < 880) {
						if (rel_time < 832) {
							w7 = 4608;
						} else {
							w7 = 4096;
						}
					} else {
						if (hops < 5) {
							w7 = 5376;
						} else {
							w7 = 5632;
						}
					}
				} else {
					if (rel_time < 3751) {
						if (rel_time < 3619) {
							w7 = 4352;
						} else {
							w7 = 2304;
						}
					} else {
						if (hops < 3) {
							w7 = 4352;
						} else {
							w7 = 4608;
						}
					}
				}
			}
		}
	}
	int w8;
	if (size < 38) {
		if (hops < 3) {
			if (rel_time < 1533) {
				if (rel_time < 1385) {
					if (cons == 3) {
						if (cons == 1) {
							w8 = 1792;
						} else {
							w8 = 2304;
						}
					} else {
						if (hops < 2) {
							w8 = 2560;
						} else {
							w8 = 2816;
						}
					}
				} else {
					if (cons == 2) {
						if (rel_time < 1473) {
							w8 = 768;
						} else {
							w8 = 1536;
						}
					} else {
						if (hops < 2) {
							w8 = 1792;
						} else {
							w8 = 1536;
						}
					}
				}
			} else {
				if (rel_time < 1621) {
					if (cons == 2) {
						if (hops < 2) {
							w8 = 3072;
						} else {
							w8 = 3072;
						}
					} else {
						if (hops < 2) {
							w8 = 2048;
						} else {
							w8 = 2048;
						}
					}
				} else {
					if (rel_time < 1829) {
						if (rel_time < 1681) {
							w8 = 2304;
						} else {
							w8 = 1280;
						}
					} else {
						if (rel_time < 1917) {
							w8 = 2816;
						} else {
							w8 = 1792;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 3310) {
					if (rel_time < 3162) {
						if (rel_time < 3014) {
							w8 = 2048;
						} else {
							w8 = 2560;
						}
					} else {
						if (rel_time < 3191) {
							w8 = 768;
						} else {
							w8 = 1792;
						}
					}
				} else {
					if (rel_time < 3398) {
						if (cons == 2) {
							w8 = 2816;
						} else {
							w8 = 1792;
						}
					} else {
						if (cons == 1) {
							w8 = 2304;
						} else {
							w8 = 1024;
						}
					}
				}
			} else {
				if (rel_time < 1237) {
					w8 = 1536;
				} else {
					if (rel_time < 1385) {
						if (cons == 2) {
							w8 = 2816;
						} else {
							w8 = 2048;
						}
					} else {
						if (rel_time < 1533) {
							w8 = 1792;
						} else {
							w8 = 2304;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 398) {
			if (cons == 0) {
				if (hops < 4) {
					if (cons == 3) {
						if (rel_time < 182) {
							w8 = 3840;
						} else {
							w8 = 3584;
						}
					} else {
						if (hops < 2) {
							w8 = 3840;
						} else {
							w8 = 3840;
						}
					}
				} else {
					if (hops < 5) {
						if (cons == 2) {
							w8 = 3840;
						} else {
							w8 = 3840;
						}
					} else {
						if (rel_time < 182) {
							w8 = 4352;
						} else {
							w8 = 4096;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w8 = 3328;
					} else {
						w8 = 3328;
					}
				} else {
					if (hops < 5) {
						w8 = 3328;
					} else {
						w8 = 3584;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (size < 125) {
					if (rel_time < 783) {
						if (hops < 3) {
							w8 = 2304;
						} else {
							w8 = 2816;
						}
					} else {
						if (rel_time < 832) {
							w8 = 3584;
						} else {
							w8 = 3072;
						}
					}
				} else {
					if (cons == 3) {
						if (cons == 1) {
							w8 = 3328;
						} else {
							w8 = 3072;
						}
					} else {
						w8 = 3072;
					}
				}
			} else {
				if (rel_time < 1031) {
					if (hops < 5) {
						if (rel_time < 880) {
							w8 = 3328;
						} else {
							w8 = 3328;
						}
					} else {
						if (rel_time < 783) {
							w8 = 3328;
						} else {
							w8 = 3840;
						}
					}
				} else {
					if (rel_time < 3910) {
						if (prod == 1) {
							w8 = 2816;
						} else {
							w8 = 768;
						}
					} else {
						if (rel_time < 3955) {
							w8 = 4096;
						} else {
							w8 = 3072;
						}
					}
				}
			}
		}
	}
	int w9;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 2717) {
				if (rel_time < 2570) {
					if (rel_time < 2421) {
						if (rel_time < 2273) {
							w9 = 1280;
						} else {
							w9 = 512;
						}
					} else {
						if (rel_time < 2509) {
							w9 = 2048;
						} else {
							w9 = 1536;
						}
					}
				} else {
					if (cons == 3) {
						if (rel_time < 2599) {
							w9 = 0;
						} else {
							w9 = 768;
						}
					} else {
						w9 = 0;
					}
				}
			} else {
				if (rel_time < 2806) {
					if (cons == 2) {
						if (rel_time < 2747) {
							w9 = 2560;
						} else {
							w9 = 2304;
						}
					} else {
						w9 = 1536;
					}
				} else {
					if (rel_time < 3014) {
						if (cons == 3) {
							w9 = 1280;
						} else {
							w9 = 0;
						}
					} else {
						if (rel_time < 3043) {
							w9 = 2304;
						} else {
							w9 = 1280;
						}
					}
				}
			}
		} else {
			if (rel_time < 3478) {
				if (rel_time < 3458) {
					if (rel_time < 1681) {
						if (rel_time < 1533) {
							w9 = 1280;
						} else {
							w9 = 2048;
						}
					} else {
						if (rel_time < 1769) {
							w9 = 512;
						} else {
							w9 = 1280;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w9 = 512;
						} else {
							w9 = 512;
						}
					} else {
						if (hops < 5) {
							w9 = 1024;
						} else {
							w9 = 768;
						}
					}
				}
			} else {
				if (cons == 3) {
					if (rel_time < 3500) {
						if (hops < 5) {
							w9 = 1792;
						} else {
							w9 = 1792;
						}
					} else {
						if (hops < 5) {
							w9 = 1792;
						} else {
							w9 = 2048;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w9 = 1536;
						} else {
							w9 = 1280;
						}
					} else {
						w9 = 1536;
					}
				}
			}
		}
	} else {
		if (rel_time < 398) {
			if (cons == 0) {
				if (hops < 2) {
					if (cons == 3) {
						if (rel_time < 182) {
							w9 = 2560;
						} else {
							w9 = 2304;
						}
					} else {
						w9 = 2560;
					}
				} else {
					if (cons == 2) {
						if (hops < 5) {
							w9 = 2816;
						} else {
							w9 = 2816;
						}
					} else {
						if (hops < 4) {
							w9 = 2560;
						} else {
							w9 = 2560;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 68) {
							w9 = 2304;
						} else {
							w9 = 1280;
						}
					} else {
						w9 = 2304;
					}
				} else {
					if (hops < 5) {
						w9 = 2304;
					} else {
						w9 = 2304;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons == 3) {
					if (rel_time < 3910) {
						if (rel_time < 832) {
							w9 = 2048;
						} else {
							w9 = 1536;
						}
					} else {
						if (rel_time < 3955) {
							w9 = 3072;
						} else {
							w9 = 2048;
						}
					}
				} else {
					if (rel_time < 929) {
						if (rel_time < 682) {
							w9 = 2048;
						} else {
							w9 = 2816;
						}
					} else {
						w9 = 512;
					}
				}
			} else {
				if (rel_time < 1031) {
					if (cons == 3) {
						if (rel_time < 735) {
							w9 = 2304;
						} else {
							w9 = 2048;
						}
					} else {
						if (rel_time < 682) {
							w9 = 2048;
						} else {
							w9 = 2816;
						}
					}
				} else {
					if (rel_time < 3751) {
						if (prod == 1) {
							w9 = 1280;
						} else {
							w9 = 0;
						}
					} else {
						if (hops < 5) {
							w9 = 2048;
						} else {
							w9 = 2304;
						}
					}
				}
			}
		}
	}
	int w10;
	if (size < 38) {
		if (cons == 0) {
			if (rel_time < 1266) {
				if (hops < 3) {
					if (hops < 2) {
						w10 = 1024;
					} else {
						w10 = 1280;
					}
				} else {
					if (hops < 4) {
						if (cons == 1) {
							w10 = 256;
						} else {
							w10 = 1536;
						}
					} else {
						if (hops < 5) {
							w10 = 2048;
						} else {
							w10 = 1536;
						}
					}
				}
			} else {
				if (rel_time < 2096) {
					if (rel_time < 1948) {
						if (rel_time < 1829) {
							w10 = 768;
						} else {
							w10 = 1536;
						}
					} else {
						if (cons == 3) {
							w10 = 0;
						} else {
							w10 = -512;
						}
					}
				} else {
					if (rel_time < 2213) {
						if (cons == 2) {
							w10 = 2304;
						} else {
							w10 = 1024;
						}
					} else {
						if (rel_time < 2361) {
							w10 = 256;
						} else {
							w10 = 1024;
						}
					}
				}
			}
		} else {
			if (rel_time < 1237) {
				if (hops < 2) {
					w10 = 256;
				} else {
					if (hops < 4) {
						w10 = 512;
					} else {
						if (hops < 5) {
							w10 = 512;
						} else {
							w10 = 768;
						}
					}
				}
			} else {
				if (rel_time < 1385) {
					if (hops < 2) {
						w10 = 1024;
					} else {
						w10 = 1280;
					}
				} else {
					if (rel_time < 1533) {
						if (hops < 5) {
							w10 = 256;
						} else {
							w10 = 768;
						}
					} else {
						if (rel_time < 2006) {
							w10 = 1024;
						} else {
							w10 = 768;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 398) {
			if (cons == 0) {
				if (hops < 2) {
					if (cons == 3) {
						if (rel_time < 182) {
							w10 = 1792;
						} else {
							w10 = 1536;
						}
					} else {
						w10 = 1792;
					}
				} else {
					if (cons == 3) {
						if (cons == 1) {
							w10 = 1792;
						} else {
							w10 = 1792;
						}
					} else {
						if (hops < 4) {
							w10 = 1792;
						} else {
							w10 = 2048;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 68) {
							w10 = 1536;
						} else {
							w10 = 768;
						}
					} else {
						w10 = 1536;
					}
				} else {
					if (hops < 5) {
						w10 = 1536;
					} else {
						w10 = 1536;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons == 3) {
					if (rel_time < 4423) {
						if (rel_time < 832) {
							w10 = 1536;
						} else {
							w10 = 1280;
						}
					} else {
						if (rel_time < 4509) {
							w10 = 2304;
						} else {
							w10 = 1536;
						}
					}
				} else {
					if (rel_time < 929) {
						if (rel_time < 682) {
							w10 = 1536;
						} else {
							w10 = 1792;
						}
					} else {
						if (hops < 2) {
							w10 = 512;
						} else {
							w10 = 0;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 1031) {
						if (rel_time < 880) {
							w10 = 1536;
						} else {
							w10 = 1536;
						}
					} else {
						if (rel_time < 3910) {
							w10 = 768;
						} else {
							w10 = 1536;
						}
					}
				} else {
					if (rel_time < 3619) {
						if (rel_time < 783) {
							w10 = 1536;
						} else {
							w10 = 1792;
						}
					} else {
						if (rel_time < 4322) {
							w10 = 1280;
						} else {
							w10 = 1536;
						}
					}
				}
			}
		}
	}
	int w11;
	if (size < 38) {
		if (hops < 4) {
			if (cons == 4) {
				if (rel_time < 1385) {
					if (rel_time < 1237) {
						if (hops < 2) {
							w11 = 256;
						} else {
							w11 = 256;
						}
					} else {
						if (cons == 2) {
							w11 = 1024;
						} else {
							w11 = 512;
						}
					}
				} else {
					if (rel_time < 1533) {
						if (cons == 2) {
							w11 = 0;
						} else {
							w11 = 512;
						}
					} else {
						if (rel_time < 1621) {
							w11 = 1024;
						} else {
							w11 = 512;
						}
					}
				}
			} else {
				if (rel_time < 3458) {
					if (rel_time < 3281) {
						if (rel_time < 1533) {
							w11 = 512;
						} else {
							w11 = 768;
						}
					} else {
						if (hops < 3) {
							w11 = 256;
						} else {
							w11 = 512;
						}
					}
				} else {
					w11 = 1024;
				}
			}
		} else {
			if (rel_time < 1681) {
				if (rel_time < 1533) {
					if (rel_time < 1444) {
						if (cons == 3) {
							w11 = 768;
						} else {
							w11 = 1280;
						}
					} else {
						if (cons == 3) {
							w11 = 512;
						} else {
							w11 = 0;
						}
					}
				} else {
					if (rel_time < 1562) {
						w11 = 1792;
					} else {
						if (cons == 3) {
							w11 = 768;
						} else {
							w11 = 1792;
						}
					}
				}
			} else {
				if (rel_time < 1829) {
					if (cons == 2) {
						if (cons == 4) {
							w11 = 0;
						} else {
							w11 = 256;
						}
					} else {
						if (hops < 5) {
							w11 = 768;
						} else {
							w11 = 768;
						}
					}
				} else {
					if (rel_time < 1917) {
						if (cons == 2) {
							w11 = 2048;
						} else {
							w11 = 768;
						}
					} else {
						if (rel_time < 2065) {
							w11 = 256;
						} else {
							w11 = 768;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 398) {
			if (cons == 0) {
				if (hops < 3) {
					if (cons == 3) {
						if (rel_time < 182) {
							w11 = 1280;
						} else {
							w11 = 1280;
						}
					} else {
						if (hops < 2) {
							w11 = 1280;
						} else {
							w11 = 1280;
						}
					}
				} else {
					if (hops < 5) {
						if (cons == 3) {
							w11 = 1280;
						} else {
							w11 = 1280;
						}
					} else {
						if (rel_time < 182) {
							w11 = 1536;
						} else {
							w11 = 1280;
						}
					}
				}
			} else {
				if (hops < 3) {
					w11 = 1024;
				} else {
					if (hops < 5) {
						w11 = 1024;
					} else {
						w11 = 1024;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons == 0) {
					if (rel_time < 832) {
						if (rel_time < 735) {
							w11 = 1024;
						} else {
							w11 = 1280;
						}
					} else {
						if (rel_time < 3751) {
							w11 = 768;
						} else {
							w11 = 1024;
						}
					}
				} else {
					if (rel_time < 469) {
						w11 = 1024;
					} else {
						if (rel_time < 783) {
							w11 = 256;
						} else {
							w11 = 1024;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 10379) {
						if (rel_time < 10286) {
							w11 = 1024;
						} else {
							w11 = 512;
						}
					} else {
						if (prod == 3) {
							w11 = 1792;
						} else {
							w11 = 0;
						}
					}
				} else {
					if (rel_time < 3619) {
						if (rel_time < 783) {
							w11 = 1024;
						} else {
							w11 = 1280;
						}
					} else {
						if (rel_time < 4322) {
							w11 = 768;
						} else {
							w11 = 1024;
						}
					}
				}
			}
		}
	}
	int w12;
	if (size < 38) {
		if (rel_time < 3310) {
			if (rel_time < 3162) {
				if (rel_time < 3014) {
					if (rel_time < 2866) {
						if (rel_time < 2717) {
							w12 = 256;
						} else {
							w12 = 1024;
						}
					} else {
						if (cons == 3) {
							w12 = 0;
						} else {
							w12 = -512;
						}
					}
				} else {
					if (cons == 2) {
						if (cons == 4) {
							w12 = 1024;
						} else {
							w12 = 256;
						}
					} else {
						if (hops < 3) {
							w12 = 256;
						} else {
							w12 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3191) {
					if (hops < 3) {
						if (hops < 2) {
							w12 = -256;
						} else {
							w12 = -512;
						}
					} else {
						if (hops < 4) {
							w12 = 0;
						} else {
							w12 = -256;
						}
					}
				} else {
					if (cons == 3) {
						if (cons == 0) {
							w12 = 512;
						} else {
							w12 = 0;
						}
					} else {
						if (hops < 2) {
							w12 = -256;
						} else {
							w12 = -256;
						}
					}
				}
			}
		} else {
			if (rel_time < 3398) {
				if (cons == 2) {
					if (cons == 3) {
						if (hops < 5) {
							w12 = 768;
						} else {
							w12 = 1280;
						}
					} else {
						if (hops < 5) {
							w12 = 1024;
						} else {
							w12 = 1280;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w12 = 256;
						} else {
							w12 = 0;
						}
					} else {
						if (hops < 4) {
							w12 = 256;
						} else {
							w12 = 256;
						}
					}
				}
			} else {
				if (cons == 1) {
					if (rel_time < 3458) {
						if (cons == 0) {
							w12 = 256;
						} else {
							w12 = 512;
						}
					} else {
						if (cons == 3) {
							w12 = 512;
						} else {
							w12 = 512;
						}
					}
				} else {
					if (hops < 2) {
						w12 = -256;
					} else {
						if (hops < 4) {
							w12 = 0;
						} else {
							w12 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 469) {
			if (cons == 0) {
				if (hops < 2) {
					if (cons == 3) {
						if (rel_time < 182) {
							w12 = 768;
						} else {
							w12 = 768;
						}
					} else {
						w12 = 768;
					}
				} else {
					if (hops < 5) {
						if (cons == 2) {
							w12 = 768;
						} else {
							w12 = 768;
						}
					} else {
						if (rel_time < 182) {
							w12 = 1024;
						} else {
							w12 = 1024;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 68) {
							w12 = 768;
						} else {
							w12 = 768;
						}
					} else {
						if (rel_time < 68) {
							w12 = 768;
						} else {
							w12 = 768;
						}
					}
				} else {
					if (rel_time < 68) {
						if (hops < 5) {
							w12 = 768;
						} else {
							w12 = 768;
						}
					} else {
						if (hops < 5) {
							w12 = 768;
						} else {
							w12 = 768;
						}
					}
				}
			}
		} else {
			if (cons == 0) {
				if (rel_time < 832) {
					if (rel_time < 735) {
						if (cons == 4) {
							w12 = 768;
						} else {
							w12 = 768;
						}
					} else {
						if (hops < 4) {
							w12 = 768;
						} else {
							w12 = 1280;
						}
					}
				} else {
					if (rel_time < 3751) {
						if (rel_time < 3619) {
							w12 = 512;
						} else {
							w12 = 0;
						}
					} else {
						if (rel_time < 3955) {
							w12 = 1024;
						} else {
							w12 = 768;
						}
					}
				}
			} else {
				if (rel_time < 982) {
					if (hops < 3) {
						if (rel_time < 735) {
							w12 = 256;
						} else {
							w12 = 256;
						}
					} else {
						if (hops < 5) {
							w12 = 256;
						} else {
							w12 = 512;
						}
					}
				} else {
					if (hops < 2) {
						w12 = 512;
					} else {
						if (hops < 3) {
							w12 = 768;
						} else {
							w12 = 768;
						}
					}
				}
			}
		}
	}
	int w13;
	if (size < 38) {
		if (rel_time < 2570) {
			if (rel_time < 2421) {
				if (rel_time < 2273) {
					if (rel_time < 2184) {
						if (rel_time < 1948) {
							w13 = 256;
						} else {
							w13 = 0;
						}
					} else {
						if (cons == 3) {
							w13 = 512;
						} else {
							w13 = 1280;
						}
					}
				} else {
					if (cons == 3) {
						if (cons == 1) {
							w13 = 0;
						} else {
							w13 = -512;
						}
					} else {
						if (hops < 2) {
							w13 = -512;
						} else {
							w13 = -768;
						}
					}
				}
			} else {
				if (cons == 1) {
					if (cons == 3) {
						if (hops < 2) {
							w13 = 256;
						} else {
							w13 = 512;
						}
					} else {
						if (hops < 2) {
							w13 = 1024;
						} else {
							w13 = 1536;
						}
					}
				} else {
					if (hops < 2) {
						w13 = 1024;
					} else {
						if (rel_time < 2480) {
							w13 = 1536;
						} else {
							w13 = -512;
						}
					}
				}
			}
		} else {
			if (rel_time < 2717) {
				if (cons == 3) {
					if (rel_time < 2599) {
						if (hops < 2) {
							w13 = -256;
						} else {
							w13 = -768;
						}
					} else {
						if (cons == 0) {
							w13 = 0;
						} else {
							w13 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w13 = -512;
					} else {
						if (hops < 5) {
							w13 = -768;
						} else {
							w13 = -768;
						}
					}
				}
			} else {
				if (rel_time < 2806) {
					if (cons == 2) {
						if (hops < 2) {
							w13 = 768;
						} else {
							w13 = 1280;
						}
					} else {
						if (hops < 2) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					}
				} else {
					if (rel_time < 3014) {
						if (cons == 1) {
							w13 = 0;
						} else {
							w13 = -512;
						}
					} else {
						if (rel_time < 3043) {
							w13 = 1024;
						} else {
							w13 = 256;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 611) {
			if (hops < 4) {
				if (rel_time < 398) {
					if (cons == 0) {
						if (cons == 2) {
							w13 = 512;
						} else {
							w13 = 512;
						}
					} else {
						if (hops < 2) {
							w13 = 512;
						} else {
							w13 = 512;
						}
					}
				} else {
					if (cons == 1) {
						if (rel_time < 469) {
							w13 = 512;
						} else {
							w13 = 512;
						}
					} else {
						if (hops < 2) {
							w13 = 512;
						} else {
							w13 = 256;
						}
					}
				}
			} else {
				if (rel_time < 540) {
					if (rel_time < 469) {
						if (rel_time < 68) {
							w13 = 512;
						} else {
							w13 = 512;
						}
					} else {
						if (hops < 5) {
							w13 = 512;
						} else {
							w13 = 256;
						}
					}
				} else {
					if (cons == 2) {
						w13 = 256;
					} else {
						w13 = 768;
					}
				}
			}
		} else {
			if (cons == 2) {
				if (rel_time < 929) {
					if (rel_time < 783) {
						if (cons == 0) {
							w13 = 512;
						} else {
							w13 = 256;
						}
					} else {
						if (cons == 3) {
							w13 = 512;
						} else {
							w13 = 768;
						}
					}
				} else {
					if (rel_time < 4232) {
						if (prod == 0) {
							w13 = 256;
						} else {
							w13 = 1024;
						}
					} else {
						if (rel_time < 4277) {
							w13 = 768;
						} else {
							w13 = 512;
						}
					}
				}
			} else {
				if (rel_time < 880) {
					if (hops < 2) {
						w13 = 0;
					} else {
						if (hops < 3) {
							w13 = 256;
						} else {
							w13 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w13 = 512;
						} else {
							w13 = 768;
						}
					} else {
						w13 = 1024;
					}
				}
			}
		}
	}
	int w14;
	if (size < 38) {
		if (hops < 5) {
			if (rel_time < 1385) {
				if (cons == 3) {
					if (cons == 1) {
						if (rel_time < 1295) {
							w14 = 0;
						} else {
							w14 = 256;
						}
					} else {
						if (hops < 3) {
							w14 = 256;
						} else {
							w14 = 512;
						}
					}
				} else {
					if (hops < 2) {
						w14 = 512;
					} else {
						if (hops < 4) {
							w14 = 768;
						} else {
							w14 = 512;
						}
					}
				}
			} else {
				if (rel_time < 1473) {
					if (cons == 2) {
						if (hops < 2) {
							w14 = 0;
						} else {
							w14 = -256;
						}
					} else {
						if (hops < 4) {
							w14 = 0;
						} else {
							w14 = 768;
						}
					}
				} else {
					if (rel_time < 1681) {
						if (cons == 1) {
							w14 = 256;
						} else {
							w14 = 768;
						}
					} else {
						if (rel_time < 1710) {
							w14 = -768;
						} else {
							w14 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2570) {
				if (rel_time < 2421) {
					if (rel_time < 2273) {
						if (rel_time < 2155) {
							w14 = 256;
						} else {
							w14 = 768;
						}
					} else {
						if (cons == 2) {
							w14 = 0;
						} else {
							w14 = 256;
						}
					}
				} else {
					if (cons == 3) {
						if (cons == 1) {
							w14 = 512;
						} else {
							w14 = 1024;
						}
					} else {
						w14 = 1024;
					}
				}
			} else {
				if (rel_time < 2657) {
					if (cons == 2) {
						if (rel_time < 2599) {
							w14 = -256;
						} else {
							w14 = -512;
						}
					} else {
						w14 = 256;
					}
				} else {
					if (rel_time < 2866) {
						if (rel_time < 2717) {
							w14 = 0;
						} else {
							w14 = 512;
						}
					} else {
						if (rel_time < 2954) {
							w14 = 0;
						} else {
							w14 = 256;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1031) {
			if (rel_time < 880) {
				if (rel_time < 832) {
					if (cons == 0) {
						if (hops < 4) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					} else {
						if (rel_time < 735) {
							w14 = 256;
						} else {
							w14 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w14 = 0;
					} else {
						if (hops < 3) {
							w14 = 256;
						} else {
							w14 = 0;
						}
					}
				}
			} else {
				if (cons == 3) {
					if (hops < 2) {
						if (rel_time < 982) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					} else {
						if (hops < 3) {
							w14 = 256;
						} else {
							w14 = 512;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w14 = 512;
						} else {
							w14 = 512;
						}
					} else {
						if (hops < 5) {
							w14 = 512;
						} else {
							w14 = 512;
						}
					}
				}
			}
		} else {
			if (rel_time < 3751) {
				if (prod == 1) {
					if (prod == 3) {
						if (cons == 3) {
							w14 = 256;
						} else {
							w14 = -256;
						}
					} else {
						if (hops < 4) {
							w14 = -768;
						} else {
							w14 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w14 = -1024;
						} else {
							w14 = -1536;
						}
					} else {
						if (hops < 5) {
							w14 = 0;
						} else {
							w14 = 256;
						}
					}
				}
			} else {
				if (rel_time < 3955) {
					if (prod == 4) {
						if (prod == 2) {
							w14 = 1024;
						} else {
							w14 = -768;
						}
					} else {
						if (hops < 3) {
							w14 = -768;
						} else {
							w14 = -1024;
						}
					}
				} else {
					if (rel_time < 3999) {
						if (prod == 2) {
							w14 = 1280;
						} else {
							w14 = -512;
						}
					} else {
						if (rel_time < 4044) {
							w14 = 768;
						} else {
							w14 = 256;
						}
					}
				}
			}
		}
	}
	int w15;
	if (size < 38) {
		if (hops < 2) {
			if (rel_time < 2096) {
				if (rel_time < 1948) {
					if (rel_time < 1829) {
						if (rel_time < 1681) {
							w15 = 0;
						} else {
							w15 = -256;
						}
					} else {
						if (cons == 2) {
							w15 = 512;
						} else {
							w15 = -256;
						}
					}
				} else {
					if (cons == 0) {
						if (rel_time < 2006) {
							w15 = -1024;
						} else {
							w15 = -256;
						}
					} else {
						if (rel_time < 2006) {
							w15 = 512;
						} else {
							w15 = -256;
						}
					}
				}
			} else {
				if (rel_time < 2273) {
					if (cons == 0) {
						if (rel_time < 2155) {
							w15 = 1024;
						} else {
							w15 = 512;
						}
					} else {
						if (rel_time < 2155) {
							w15 = -768;
						} else {
							w15 = 256;
						}
					}
				} else {
					if (rel_time < 2361) {
						if (cons == 2) {
							w15 = -256;
						} else {
							w15 = 256;
						}
					} else {
						if (rel_time < 2570) {
							w15 = 256;
						} else {
							w15 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2570) {
				if (rel_time < 2421) {
					if (rel_time < 2273) {
						if (rel_time < 2155) {
							w15 = 0;
						} else {
							w15 = 512;
						}
					} else {
						if (cons == 2) {
							w15 = -256;
						} else {
							w15 = 256;
						}
					}
				} else {
					if (rel_time < 2509) {
						if (cons == 2) {
							w15 = 768;
						} else {
							w15 = 256;
						}
					} else {
						if (cons == 0) {
							w15 = 256;
						} else {
							w15 = 512;
						}
					}
				}
			} else {
				if (rel_time < 2717) {
					if (cons == 3) {
						if (rel_time < 2599) {
							w15 = -512;
						} else {
							w15 = 0;
						}
					} else {
						if (hops < 5) {
							w15 = -512;
						} else {
							w15 = -256;
						}
					}
				} else {
					if (rel_time < 2806) {
						if (cons == 2) {
							w15 = 768;
						} else {
							w15 = 0;
						}
					} else {
						if (rel_time < 3014) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1031) {
			if (rel_time < 880) {
				if (rel_time < 832) {
					if (cons == 0) {
						if (rel_time < 735) {
							w15 = 256;
						} else {
							w15 = 256;
						}
					} else {
						if (rel_time < 469) {
							w15 = 256;
						} else {
							w15 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w15 = 0;
					} else {
						if (hops < 3) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				}
			} else {
				if (cons == 3) {
					if (hops < 2) {
						if (rel_time < 982) {
							w15 = 0;
						} else {
							w15 = 256;
						}
					} else {
						if (hops < 4) {
							w15 = 256;
						} else {
							w15 = 256;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w15 = 256;
						} else {
							w15 = 256;
						}
					} else {
						if (hops < 5) {
							w15 = 256;
						} else {
							w15 = 256;
						}
					}
				}
			}
		} else {
			if (rel_time < 3751) {
				if (prod == 1) {
					if (prod == 3) {
						if (cons == 1) {
							w15 = 256;
						} else {
							w15 = -256;
						}
					} else {
						if (hops < 4) {
							w15 = -512;
						} else {
							w15 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w15 = -768;
						} else {
							w15 = -1024;
						}
					} else {
						if (hops < 5) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4423) {
					if (prod == 0) {
						if (rel_time < 4322) {
							w15 = 0;
						} else {
							w15 = 1024;
						}
					} else {
						if (rel_time < 4232) {
							w15 = 768;
						} else {
							w15 = -256;
						}
					}
				} else {
					if (rel_time < 4509) {
						if (prod == 1) {
							w15 = -512;
						} else {
							w15 = 1280;
						}
					} else {
						if (rel_time < 4876) {
							w15 = 0;
						} else {
							w15 = 256;
						}
					}
				}
			}
		}
	}
	int w16;
	if (size < 38) {
		if (rel_time < 1829) {
			if (rel_time < 1681) {
				if (rel_time < 1533) {
					if (rel_time < 1385) {
						if (cons == 3) {
							w16 = 0;
						} else {
							w16 = 256;
						}
					} else {
						if (cons == 2) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				} else {
					if (cons == 3) {
						if (rel_time < 1562) {
							w16 = 512;
						} else {
							w16 = 0;
						}
					} else {
						if (hops < 3) {
							w16 = 512;
						} else {
							w16 = 768;
						}
					}
				}
			} else {
				if (cons == 3) {
					if (rel_time < 1710) {
						if (hops < 4) {
							w16 = -512;
						} else {
							w16 = 0;
						}
					} else {
						if (cons == 0) {
							w16 = 256;
						} else {
							w16 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w16 = -768;
						} else {
							w16 = -768;
						}
					} else {
						if (hops < 5) {
							w16 = -256;
						} else {
							w16 = -256;
						}
					}
				}
			}
		} else {
			if (rel_time < 1917) {
				if (cons == 2) {
					if (hops < 2) {
						if (rel_time < 1859) {
							w16 = 512;
						} else {
							w16 = 768;
						}
					} else {
						if (hops < 3) {
							w16 = 768;
						} else {
							w16 = 1024;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 0;
						} else {
							w16 = -256;
						}
					} else {
						if (hops < 4) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2065) {
					if (cons == 0) {
						if (cons == 1) {
							w16 = 0;
						} else {
							w16 = -768;
						}
					} else {
						if (hops < 2) {
							w16 = 512;
						} else {
							w16 = 768;
						}
					}
				} else {
					if (rel_time < 2273) {
						if (cons == 1) {
							w16 = 0;
						} else {
							w16 = 1024;
						}
					} else {
						if (rel_time < 2361) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				}
			}
		}
	} else {
		if (prod == 1) {
			if (rel_time < 10239) {
				if (rel_time < 9789) {
					if (rel_time < 9688) {
						if (rel_time < 9585) {
							w16 = 0;
						} else {
							w16 = -256;
						}
					} else {
						if (hops < 2) {
							w16 = 768;
						} else {
							w16 = 768;
						}
					}
				} else {
					if (rel_time < 9844) {
						if (prod == 2) {
							w16 = -1024;
						} else {
							w16 = 768;
						}
					} else {
						if (prod == 3) {
							w16 = 0;
						} else {
							w16 = 1280;
						}
					}
				}
			} else {
				if (prod == 3) {
					if (rel_time < 10379) {
						if (hops < 2) {
							w16 = 768;
						} else {
							w16 = 1024;
						}
					} else {
						if (hops < 2) {
							w16 = 768;
						} else {
							w16 = 512;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 10379) {
							w16 = -1024;
						} else {
							w16 = -1024;
						}
					} else {
						if (rel_time < 10379) {
							w16 = -768;
						} else {
							w16 = -768;
						}
					}
				}
			}
		} else {
			if (rel_time < 10064) {
				if (rel_time < 9789) {
					if (rel_time < 9514) {
						if (rel_time < 9239) {
							w16 = 0;
						} else {
							w16 = 1280;
						}
					} else {
						if (hops < 3) {
							w16 = -1024;
						} else {
							w16 = -1024;
						}
					}
				} else {
					if (hops < 3) {
						w16 = 1280;
					} else {
						w16 = 1280;
					}
				}
			} else {
				if (rel_time < 10286) {
					w16 = -1024;
				} else {
					if (hops < 2) {
						w16 = -1024;
					} else {
						if (hops < 5) {
							w16 = -768;
						} else {
							w16 = -1024;
						}
					}
				}
			}
		}
	}
	int w17;
	if (size < 38) {
		if (cons == 0) {
			if (rel_time < 2540) {
				if (rel_time < 2096) {
					if (rel_time < 1948) {
						if (rel_time < 1829) {
							w17 = 0;
						} else {
							w17 = 256;
						}
					} else {
						if (cons == 2) {
							w17 = -256;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 2213) {
						if (cons == 2) {
							w17 = 512;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 2392) {
							w17 = 0;
						} else {
							w17 = 256;
						}
					}
				}
			} else {
				if (rel_time < 2657) {
					if (cons == 2) {
						if (hops < 5) {
							w17 = -256;
						} else {
							w17 = 0;
						}
					} else {
						if (hops < 5) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 2836) {
						if (rel_time < 2688) {
							w17 = 0;
						} else {
							w17 = 256;
						}
					} else {
						if (rel_time < 2954) {
							w17 = -256;
						} else {
							w17 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2006) {
				if (rel_time < 1948) {
					if (rel_time < 1681) {
						if (rel_time < 1355) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (hops < 3) {
							w17 = 0;
						} else {
							w17 = -256;
						}
					}
				} else {
					if (hops < 2) {
						w17 = 256;
					} else {
						if (hops < 4) {
							w17 = 512;
						} else {
							w17 = 512;
						}
					}
				}
			} else {
				if (rel_time < 2155) {
					if (hops < 2) {
						w17 = -512;
					} else {
						if (hops < 5) {
							w17 = -512;
						} else {
							w17 = -512;
						}
					}
				} else {
					if (rel_time < 2273) {
						if (hops < 5) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 2421) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 10379) {
				if (rel_time < 10331) {
					if (rel_time < 398) {
						if (cons == 3) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 9844) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (hops < 2) {
							w17 = -768;
						} else {
							w17 = -512;
						}
					} else {
						if (hops < 2) {
							w17 = 512;
						} else {
							w17 = 512;
						}
					}
				}
			} else {
				if (prod == 3) {
					if (hops < 2) {
						w17 = 512;
					} else {
						w17 = 512;
					}
				} else {
					if (hops < 2) {
						w17 = -768;
					} else {
						w17 = -256;
					}
				}
			}
		} else {
			if (hops < 5) {
				if (cons == 4) {
					if (rel_time < 4423) {
						if (rel_time < 1128) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 4509) {
							w17 = 768;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 982) {
						if (rel_time < 398) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (hops < 4) {
							w17 = 256;
						} else {
							w17 = 768;
						}
					}
				}
			} else {
				if (rel_time < 5152) {
					if (rel_time < 5107) {
						if (prod == 4) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						w17 = 1280;
					}
				} else {
					if (rel_time < 5430) {
						if (prod == 2) {
							w17 = -256;
						} else {
							w17 = 768;
						}
					} else {
						if (rel_time < 5707) {
							w17 = 512;
						} else {
							w17 = 0;
						}
					}
				}
			}
		}
	}
	int w18;
	if (rel_time < 1031) {
		if (rel_time < 880) {
			if (rel_time < 832) {
				if (rel_time < 783) {
					if (rel_time < 735) {
						if (rel_time < 469) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (hops < 3) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (hops < 5) {
							w18 = 256;
						} else {
							w18 = 256;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				} else {
					if (hops < 4) {
						w18 = 0;
					} else {
						if (cons == 2) {
							w18 = 768;
						} else {
							w18 = 0;
						}
					}
				}
			}
		} else {
			if (cons == 3) {
				if (cons == 0) {
					if (hops < 2) {
						w18 = 0;
					} else {
						if (rel_time < 929) {
							w18 = -512;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w18 = 0;
					} else {
						if (hops < 5) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						w18 = 0;
					}
				} else {
					w18 = 0;
				}
			}
		}
	} else {
		if (rel_time < 1080) {
			if (hops < 3) {
				if (hops < 2) {
					w18 = -512;
				} else {
					w18 = -256;
				}
			} else {
				if (hops < 4) {
					if (cons == 1) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				} else {
					if (hops < 5) {
						w18 = 0;
					} else {
						w18 = 256;
					}
				}
			}
		} else {
			if (rel_time < 4232) {
				if (prod == 4) {
					if (rel_time < 4145) {
						if (rel_time < 3999) {
							w18 = 0;
						} else {
							w18 = 768;
						}
					} else {
						if (prod == 1) {
							w18 = 512;
						} else {
							w18 = -768;
						}
					}
				} else {
					if (rel_time < 3751) {
						if (hops < 3) {
							w18 = 256;
						} else {
							w18 = 0;
						}
					} else {
						if (hops < 5) {
							w18 = -768;
						} else {
							w18 = -512;
						}
					}
				}
			} else {
				if (rel_time < 4277) {
					if (prod == 2) {
						w18 = -1024;
					} else {
						if (hops < 5) {
							w18 = 768;
						} else {
							w18 = 768;
						}
					}
				} else {
					if (rel_time < 4322) {
						if (prod == 3) {
							w18 = 1024;
						} else {
							w18 = -1024;
						}
					} else {
						if (rel_time < 4599) {
							w18 = 256;
						} else {
							w18 = 0;
						}
					}
				}
			}
		}
	}
	int w19;
	if (hops < 2) {
		if (rel_time < 1031) {
			if (rel_time < 880) {
				if (rel_time < 832) {
					if (cons == 0) {
						if (rel_time < 735) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 735) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				} else {
					w19 = 0;
				}
			} else {
				if (rel_time < 929) {
					w19 = 0;
				} else {
					if (rel_time < 982) {
						w19 = 0;
					} else {
						w19 = 0;
					}
				}
			}
		} else {
			if (rel_time < 1080) {
				w19 = -512;
			} else {
				if (rel_time < 5430) {
					if (rel_time < 5348) {
						if (prod == 1) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (prod == 3) {
							w19 = 768;
						} else {
							w19 = -1280;
						}
					}
				} else {
					if (rel_time < 5707) {
						if (prod == 2) {
							w19 = 512;
						} else {
							w19 = -512;
						}
					} else {
						if (rel_time < 5981) {
							w19 = -256;
						} else {
							w19 = 0;
						}
					}
				}
			}
		}
	} else {
		if (hops < 5) {
			if (cons == 4) {
				if (rel_time < 5430) {
					if (rel_time < 5348) {
						if (rel_time < 4876) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (prod == 3) {
							w19 = 768;
						} else {
							w19 = -1024;
						}
					}
				} else {
					if (rel_time < 5707) {
						if (prod == 0) {
							w19 = 512;
						} else {
							w19 = -512;
						}
					} else {
						if (rel_time < 5981) {
							w19 = -256;
						} else {
							w19 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2392) {
					if (rel_time < 1917) {
						if (rel_time < 1207) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (hops < 4) {
							w19 = 0;
						} else {
							w19 = 256;
						}
					}
				} else {
					if (rel_time < 3458) {
						if (rel_time < 3281) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (hops < 4) {
							w19 = 0;
						} else {
							w19 = 256;
						}
					}
				}
			}
		} else {
			if (rel_time < 10286) {
				if (rel_time < 10239) {
					if (rel_time < 682) {
						if (rel_time < 611) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 4599) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				} else {
					w19 = 512;
				}
			} else {
				if (prod == 4) {
					if (prod == 2) {
						w19 = -768;
					} else {
						w19 = 512;
					}
				} else {
					w19 = 512;
				}
			}
		}
	}
	int w20;
	if (rel_time < 10118) {
		if (rel_time < 9844) {
			if (rel_time < 9789) {
				if (rel_time < 9311) {
					if (rel_time < 9239) {
						if (rel_time < 8759) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (prod == 3) {
							w20 = 768;
						} else {
							w20 = -1024;
						}
					}
				} else {
					if (prod == 3) {
						if (rel_time < 9414) {
							w20 = 256;
						} else {
							w20 = 0;
						}
					} else {
						if (hops < 3) {
							w20 = 1280;
						} else {
							w20 = 1280;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (hops < 3) {
						w20 = -768;
					} else {
						if (hops < 4) {
							w20 = -768;
						} else {
							w20 = -768;
						}
					}
				} else {
					w20 = 512;
				}
			}
		} else {
			if (prod == 2) {
				if (prod == 0) {
					if (rel_time < 9965) {
						if (prod == 3) {
							w20 = 768;
						} else {
							w20 = -1536;
						}
					} else {
						if (hops < 3) {
							w20 = 768;
						} else {
							w20 = 768;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w20 = -512;
						} else {
							w20 = -512;
						}
					} else {
						if (hops < 4) {
							w20 = -512;
						} else {
							w20 = -512;
						}
					}
				}
			} else {
				if (hops < 3) {
					w20 = -512;
				} else {
					if (hops < 4) {
						w20 = -512;
					} else {
						if (hops < 5) {
							w20 = -512;
						} else {
							w20 = -512;
						}
					}
				}
			}
		}
	} else {
		if (prod == 1) {
			if (prod == 3) {
				if (rel_time < 10239) {
					if (prod == 0) {
						if (hops < 3) {
							w20 = -512;
						} else {
							w20 = -512;
						}
					} else {
						w20 = 768;
					}
				} else {
					if (rel_time < 10379) {
						if (hops < 5) {
							w20 = 512;
						} else {
							w20 = 256;
						}
					} else {
						if (hops < 5) {
							w20 = 256;
						} else {
							w20 = 256;
						}
					}
				}
			} else {
				if (rel_time < 10239) {
					w20 = 768;
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w20 = -512;
						} else {
							w20 = -512;
						}
					} else {
						if (rel_time < 10379) {
							w20 = -512;
						} else {
							w20 = -512;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 10286) {
					w20 = -768;
				} else {
					if (hops < 2) {
						w20 = -768;
					} else {
						w20 = -512;
					}
				}
			} else {
				w20 = -512;
			}
		}
	}
	int w21;
	if (rel_time < 318) {
		if (rel_time < 68) {
			if (hops < 2) {
				w21 = 0;
			} else {
				if (hops < 5) {
					if (hops < 4) {
						if (hops < 3) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						w21 = 0;
					}
				} else {
					w21 = 0;
				}
			}
		} else {
			if (cons == 2) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 182) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_time < 182) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (cons == 4) {
						if (hops < 5) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						w21 = 1024;
					}
				}
			} else {
				if (hops < 2) {
					w21 = 0;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (hops < 5) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				}
			}
		}
	} else {
		if (cons == 4) {
			if (rel_time < 4876) {
				if (rel_time < 4831) {
					if (rel_time < 4746) {
						if (prod == 4) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (prod == 2) {
							w21 = -1024;
						} else {
							w21 = 768;
						}
					}
				} else {
					if (prod == 3) {
						w21 = 768;
					} else {
						w21 = -1024;
					}
				}
			} else {
				if (rel_time < 5152) {
					if (prod == 2) {
						if (prod == 0) {
							w21 = 1024;
						} else {
							w21 = -512;
						}
					} else {
						if (hops < 3) {
							w21 = -768;
						} else {
							w21 = -512;
						}
					}
				} else {
					if (rel_time < 5430) {
						if (prod == 0) {
							w21 = -256;
						} else {
							w21 = 768;
						}
					} else {
						if (rel_time < 5707) {
							w21 = 256;
						} else {
							w21 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3458) {
				if (rel_time < 3281) {
					if (hops < 5) {
						if (rel_time < 2392) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_time < 398) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (hops < 4) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w21 = 0;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (hops < 5) {
							w21 = 0;
						} else {
							w21 = 256;
						}
					}
				}
			}
		}
	}
	int w22;
	if (rel_time < 9034) {
		if (rel_time < 8970) {
			if (rel_time < 8586) {
				if (rel_time < 8311) {
					if (rel_time < 8036) {
						if (rel_time < 7760) {
							w22 = 0;
						} else {
							w22 = 256;
						}
					} else {
						if (prod == 4) {
							w22 = -512;
						} else {
							w22 = 768;
						}
					}
				} else {
					if (prod == 1) {
						if (prod == 3) {
							w22 = -256;
						} else {
							w22 = 1280;
						}
					} else {
						w22 = 1280;
					}
				}
			} else {
				if (prod == 3) {
					if (rel_time < 8639) {
						if (prod == 0) {
							w22 = -1024;
						} else {
							w22 = 768;
						}
					} else {
						if (prod == 0) {
							w22 = 256;
						} else {
							w22 = -768;
						}
					}
				} else {
					w22 = -1024;
				}
			}
		} else {
			if (prod == 3) {
				if (hops < 3) {
					w22 = -768;
				} else {
					w22 = -512;
				}
			} else {
				w22 = 1280;
			}
		}
	} else {
		if (rel_time < 9311) {
			if (prod == 1) {
				if (prod == 3) {
					if (prod == 4) {
						if (rel_time < 9239) {
							w22 = 768;
						} else {
							w22 = 512;
						}
					} else {
						if (rel_time < 9139) {
							w22 = -768;
						} else {
							w22 = 512;
						}
					}
				} else {
					w22 = -768;
				}
			} else {
				w22 = -1280;
			}
		} else {
			if (rel_time < 9585) {
				if (prod == 0) {
					if (prod == 2) {
						if (prod == 4) {
							w22 = 768;
						} else {
							w22 = 512;
						}
					} else {
						w22 = -512;
					}
				} else {
					if (rel_time < 9414) {
						w22 = -768;
					} else {
						if (hops < 5) {
							w22 = -512;
						} else {
							w22 = -512;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (rel_time < 9688) {
						if (prod == 0) {
							w22 = -256;
						} else {
							w22 = 1024;
						}
					} else {
						if (rel_time < 9789) {
							w22 = 512;
						} else {
							w22 = 0;
						}
					}
				} else {
					if (rel_time < 9789) {
						w22 = -768;
					} else {
						if (rel_time < 10064) {
							w22 = 512;
						} else {
							w22 = -512;
						}
					}
				}
			}
		}
	}
	int w23;
	if (rel_time < 7510) {
		if (rel_time < 7237) {
			if (rel_time < 6960) {
				if (rel_time < 6683) {
					if (rel_time < 6407) {
						if (rel_time < 5981) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (prod == 3) {
							w23 = 0;
						} else {
							w23 = -1024;
						}
					}
				} else {
					if (prod == 2) {
						if (prod == 4) {
							w23 = 1024;
						} else {
							w23 = -512;
						}
					} else {
						if (hops < 3) {
							w23 = -768;
						} else {
							w23 = -512;
						}
					}
				}
			} else {
				if (prod == 4) {
					if (prod == 2) {
						if (rel_time < 7104) {
							w23 = -1024;
						} else {
							w23 = -512;
						}
					} else {
						if (hops < 2) {
							w23 = 512;
						} else {
							w23 = 768;
						}
					}
				} else {
					if (hops < 2) {
						w23 = 512;
					} else {
						if (hops < 4) {
							w23 = 768;
						} else {
							w23 = 512;
						}
					}
				}
			}
		} else {
			if (prod == 4) {
				if (prod == 2) {
					if (rel_time < 7378) {
						if (hops < 3) {
							w23 = 1280;
						} else {
							w23 = 1280;
						}
					} else {
						if (hops < 2) {
							w23 = 512;
						} else {
							w23 = 768;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = -512;
						} else {
							w23 = -768;
						}
					} else {
						if (hops < 4) {
							w23 = -512;
						} else {
							w23 = -512;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w23 = -512;
					} else {
						w23 = -768;
					}
				} else {
					if (hops < 4) {
						w23 = -512;
					} else {
						if (hops < 5) {
							w23 = -512;
						} else {
							w23 = -512;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 7559) {
			if (prod == 1) {
				w23 = 768;
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w23 = -1024;
					} else {
						w23 = -1024;
					}
				} else {
					w23 = -1024;
				}
			}
		} else {
			if (prod == 3) {
				if (rel_time < 7654) {
					if (hops < 4) {
						if (hops < 2) {
							w23 = 512;
						} else {
							w23 = 768;
						}
					} else {
						if (hops < 5) {
							w23 = 512;
						} else {
							w23 = 768;
						}
					}
				} else {
					if (rel_time < 8111) {
						if (rel_time < 7836) {
							w23 = 256;
						} else {
							w23 = -256;
						}
					} else {
						if (rel_time < 8207) {
							w23 = 768;
						} else {
							w23 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7654) {
					w23 = -1024;
				} else {
					if (rel_time < 7931) {
						w23 = 1024;
					} else {
						if (rel_time < 8207) {
							w23 = -1024;
						} else {
							w23 = 0;
						}
					}
				}
			}
		}
	}
	int w24;
	if (rel_time < 1681) {
		if (rel_time < 1533) {
			if (rel_time < 1385) {
				if (rel_time < 1237) {
					if (rel_time < 1031) {
						if (rel_time < 880) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (cons == 3) {
							w24 = 0;
						} else {
							w24 = -256;
						}
					}
				} else {
					if (hops < 2) {
						if (cons == 2) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (cons == 4) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				}
			} else {
				if (cons == 2) {
					if (rel_time < 1473) {
						if (hops < 2) {
							w24 = 0;
						} else {
							w24 = -256;
						}
					} else {
						if (cons == 0) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (hops < 5) {
							w24 = 256;
						} else {
							w24 = 512;
						}
					}
				}
			}
		} else {
			if (cons == 3) {
				if (rel_time < 1562) {
					if (hops < 3) {
						if (hops < 2) {
							w24 = 256;
						} else {
							w24 = 0;
						}
					} else {
						if (hops < 5) {
							w24 = 512;
						} else {
							w24 = 768;
						}
					}
				} else {
					if (rel_time < 1621) {
						if (hops < 4) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (hops < 2) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w24 = 256;
					} else {
						w24 = 256;
					}
				} else {
					if (hops < 5) {
						w24 = 512;
					} else {
						w24 = 512;
					}
				}
			}
		}
	} else {
		if (rel_time < 1769) {
			if (cons == 2) {
				if (hops < 4) {
					if (rel_time < 1710) {
						if (hops < 2) {
							w24 = -512;
						} else {
							w24 = -256;
						}
					} else {
						if (hops < 3) {
							w24 = -512;
						} else {
							w24 = -768;
						}
					}
				} else {
					if (cons == 3) {
						if (hops < 5) {
							w24 = 0;
						} else {
							w24 = -256;
						}
					} else {
						w24 = -256;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w24 = 0;
					} else {
						if (hops < 3) {
							w24 = 256;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (hops < 5) {
						w24 = 0;
					} else {
						w24 = 0;
					}
				}
			}
		} else {
			if (rel_time < 1917) {
				if (cons == 3) {
					if (cons == 1) {
						if (cons == 4) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (hops < 2) {
							w24 = 256;
						} else {
							w24 = 512;
						}
					}
				} else {
					if (hops < 2) {
						w24 = 256;
					} else {
						if (hops < 3) {
							w24 = 512;
						} else {
							w24 = 512;
						}
					}
				}
			} else {
				if (rel_time < 2065) {
					if (cons == 3) {
						if (cons == 1) {
							w24 = 0;
						} else {
							w24 = -512;
						}
					} else {
						if (hops < 4) {
							w24 = -512;
						} else {
							w24 = -512;
						}
					}
				} else {
					if (rel_time < 2273) {
						if (cons == 0) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 2361) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				}
			}
		}
	}
	int w25;
	if (hops < 2) {
		if (prod == 3) {
			if (rel_time < 10331) {
				if (rel_time < 8911) {
					if (rel_time < 8639) {
						if (rel_time < 8365) {
							w25 = 0;
						} else {
							w25 = -256;
						}
					} else {
						if (prod == 0) {
							w25 = 512;
						} else {
							w25 = -512;
						}
					}
				} else {
					if (rel_time < 9186) {
						if (prod == 0) {
							w25 = -512;
						} else {
							w25 = 512;
						}
					} else {
						if (rel_time < 9464) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10379) {
					w25 = 0;
				} else {
					w25 = 0;
				}
			}
		} else {
			if (rel_time < 10239) {
				if (rel_time < 9965) {
					if (rel_time < 9585) {
						if (rel_time < 9311) {
							w25 = 0;
						} else {
							w25 = 512;
						}
					} else {
						if (rel_time < 9844) {
							w25 = -512;
						} else {
							w25 = -1024;
						}
					}
				} else {
					w25 = 512;
				}
			} else {
				if (rel_time < 10379) {
					w25 = -256;
				} else {
					w25 = -512;
				}
			}
		}
	} else {
		if (rel_time < 2570) {
			if (rel_time < 2421) {
				if (rel_time < 2332) {
					if (rel_time < 2184) {
						if (rel_time < 1948) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (cons == 1) {
							w25 = 0;
						} else {
							w25 = -256;
						}
					}
				} else {
					if (cons == 3) {
						if (cons == 0) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (hops < 5) {
							w25 = -256;
						} else {
							w25 = -256;
						}
					}
				}
			} else {
				if (cons == 4) {
					if (cons == 2) {
						if (rel_time < 2509) {
							w25 = 256;
						} else {
							w25 = 256;
						}
					} else {
						if (hops < 4) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (hops < 5) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2717) {
				if (cons == 2) {
					if (rel_time < 2657) {
						if (hops < 5) {
							w25 = -256;
						} else {
							w25 = -256;
						}
					} else {
						if (cons == 0) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						w25 = 0;
					}
				}
			} else {
				if (rel_time < 2866) {
					if (cons == 2) {
						if (cons == 4) {
							w25 = 256;
						} else {
							w25 = 0;
						}
					} else {
						if (hops < 5) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (rel_time < 2954) {
						if (cons == 2) {
							w25 = -512;
						} else {
							w25 = 256;
						}
					} else {
						if (rel_time < 3162) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				}
			}
		}
	}
	int w26;
	if (prod == 3) {
		if (rel_time < 10331) {
			if (rel_time < 9965) {
				if (rel_time < 9789) {
					if (rel_time < 8911) {
						if (rel_time < 8639) {
							w26 = 0;
						} else {
							w26 = 256;
						}
					} else {
						if (rel_time < 9186) {
							w26 = -256;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (rel_time < 9844) {
							w26 = 256;
						} else {
							w26 = 512;
						}
					} else {
						if (hops < 3) {
							w26 = -256;
						} else {
							w26 = -256;
						}
					}
				}
			} else {
				if (prod == 4) {
					if (rel_time < 10118) {
						if (prod == 1) {
							w26 = -256;
						} else {
							w26 = 256;
						}
					} else {
						if (prod == 1) {
							w26 = 256;
						} else {
							w26 = -256;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w26 = -256;
						} else {
							w26 = -512;
						}
					} else {
						if (hops < 4) {
							w26 = -256;
						} else {
							w26 = -256;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 10379) {
						w26 = 0;
					} else {
						w26 = 0;
					}
				} else {
					if (rel_time < 10379) {
						w26 = 256;
					} else {
						w26 = 0;
					}
				}
			} else {
				if (rel_time < 10379) {
					if (hops < 5) {
						if (hops < 4) {
							w26 = 512;
						} else {
							w26 = 256;
						}
					} else {
						w26 = 256;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w26 = 256;
						} else {
							w26 = 0;
						}
					} else {
						w26 = 256;
					}
				}
			}
		}
	} else {
		if (rel_time < 3751) {
			if (hops < 3) {
				if (hops < 2) {
					w26 = -256;
				} else {
					w26 = -256;
				}
			} else {
				if (hops < 4) {
					w26 = -1024;
				} else {
					if (hops < 5) {
						w26 = -256;
					} else {
						w26 = 0;
					}
				}
			}
		} else {
			if (rel_time < 4044) {
				if (hops < 4) {
					if (rel_time < 3999) {
						w26 = 768;
					} else {
						w26 = 768;
					}
				} else {
					w26 = 768;
				}
			} else {
				if (rel_time < 4322) {
					if (rel_time < 4277) {
						w26 = -768;
					} else {
						if (hops < 5) {
							w26 = -768;
						} else {
							w26 = -512;
						}
					}
				} else {
					if (rel_time < 4599) {
						if (hops < 3) {
							w26 = 1024;
						} else {
							w26 = 1280;
						}
					} else {
						if (rel_time < 4876) {
							w26 = -768;
						} else {
							w26 = 0;
						}
					}
				}
			}
		}
	}
	int w27;
	if (prod == 4) {
		if (rel_time < 10331) {
			if (rel_time < 10064) {
				if (rel_time < 9789) {
					if (rel_time < 9514) {
						if (rel_time < 9239) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (prod == 1) {
							w27 = 256;
						} else {
							w27 = -512;
						}
					}
				} else {
					if (prod == 1) {
						if (prod == 3) {
							w27 = 0;
						} else {
							w27 = -512;
						}
					} else {
						if (hops < 3) {
							w27 = 256;
						} else {
							w27 = 256;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (prod == 3) {
						if (rel_time < 10118) {
							w27 = -256;
						} else {
							w27 = 256;
						}
					} else {
						if (hops < 2) {
							w27 = 256;
						} else {
							w27 = 512;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 10286) {
							w27 = -256;
						} else {
							w27 = -256;
						}
					} else {
						w27 = 0;
					}
				}
			}
		} else {
			if (prod == 2) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 10379) {
							w27 = -256;
						} else {
							w27 = -256;
						}
					} else {
						if (rel_time < 10379) {
							w27 = -256;
						} else {
							w27 = -256;
						}
					}
				} else {
					if (rel_time < 10379) {
						if (hops < 5) {
							w27 = -512;
						} else {
							w27 = -256;
						}
					} else {
						w27 = -256;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w27 = 0;
					} else {
						w27 = 0;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w27 = 256;
						} else {
							w27 = 256;
						}
					} else {
						w27 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 4145) {
			if (rel_time < 3751) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w27 = 256;
						} else {
							w27 = 256;
						}
					} else {
						w27 = -256;
					}
				} else {
					w27 = 768;
				}
			} else {
				if (rel_time < 4044) {
					if (rel_time < 3910) {
						if (hops < 3) {
							w27 = -256;
						} else {
							w27 = -512;
						}
					} else {
						w27 = -512;
					}
				} else {
					if (hops < 4) {
						w27 = -256;
					} else {
						w27 = -256;
					}
				}
			}
		} else {
			if (rel_time < 4423) {
				if (rel_time < 4322) {
					w27 = 512;
				} else {
					if (hops < 4) {
						w27 = 512;
					} else {
						w27 = 512;
					}
				}
			} else {
				if (rel_time < 4699) {
					if (hops < 3) {
						if (hops < 2) {
							w27 = -512;
						} else {
							w27 = -512;
						}
					} else {
						if (hops < 5) {
							w27 = -512;
						} else {
							w27 = -512;
						}
					}
				} else {
					if (rel_time < 4977) {
						if (rel_time < 4876) {
							w27 = 512;
						} else {
							w27 = 256;
						}
					} else {
						if (rel_time < 5254) {
							w27 = -512;
						} else {
							w27 = 0;
						}
					}
				}
			}
		}
	}
	int w28;
	if (hops < 5) {
		if (rel_time < 318) {
			if (rel_time < 68) {
				if (hops < 4) {
					if (hops < 2) {
						w28 = 0;
					} else {
						if (hops < 3) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				} else {
					w28 = 0;
				}
			} else {
				if (cons == 2) {
					if (hops < 3) {
						if (hops < 2) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (cons == 4) {
							w28 = 0;
						} else {
							w28 = 512;
						}
					}
				} else {
					if (hops < 2) {
						w28 = 0;
					} else {
						if (hops < 4) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3751) {
				if (prod == 1) {
					if (prod == 3) {
						if (rel_time < 3619) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (hops < 3) {
							w28 = -256;
						} else {
							w28 = -512;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w28 = -768;
						} else {
							w28 = -512;
						}
					} else {
						w28 = 0;
					}
				}
			} else {
				if (rel_time < 3955) {
					if (prod == 4) {
						if (prod == 1) {
							w28 = 256;
						} else {
							w28 = 768;
						}
					} else {
						if (hops < 3) {
							w28 = 0;
						} else {
							w28 = -256;
						}
					}
				} else {
					if (rel_time < 3999) {
						if (prod == 2) {
							w28 = 512;
						} else {
							w28 = -512;
						}
					} else {
						if (rel_time < 4044) {
							w28 = 256;
						} else {
							w28 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8484) {
			if (rel_time < 8435) {
				if (rel_time < 8365) {
					if (rel_time < 8207) {
						if (rel_time < 8158) {
							w28 = 0;
						} else {
							w28 = -512;
						}
					} else {
						if (prod == 0) {
							w28 = 512;
						} else {
							w28 = -512;
						}
					}
				} else {
					if (prod == 1) {
						w28 = -512;
					} else {
						w28 = 768;
					}
				}
			} else {
				w28 = 768;
			}
		} else {
			if (rel_time < 8759) {
				if (prod == 2) {
					if (prod == 0) {
						if (rel_time < 8639) {
							w28 = -512;
						} else {
							w28 = -1024;
						}
					} else {
						w28 = 512;
					}
				} else {
					w28 = 512;
				}
			} else {
				if (rel_time < 9034) {
					if (prod == 2) {
						if (prod == 0) {
							w28 = 768;
						} else {
							w28 = -512;
						}
					} else {
						if (rel_time < 8970) {
							w28 = -768;
						} else {
							w28 = -256;
						}
					}
				} else {
					if (rel_time < 9139) {
						w28 = -256;
					} else {
						if (rel_time < 9186) {
							w28 = 512;
						} else {
							w28 = 0;
						}
					}
				}
			}
		}
	}
	int w29;
	if (rel_time < 7510) {
		if (rel_time < 7237) {
			if (rel_time < 6960) {
				if (rel_time < 6683) {
					if (rel_time < 6637) {
						if (rel_time < 6502) {
							w29 = 0;
						} else {
							w29 = 256;
						}
					} else {
						if (prod == 0) {
							w29 = 1280;
						} else {
							w29 = -768;
						}
					}
				} else {
					if (prod == 3) {
						if (prod == 1) {
							w29 = 0;
						} else {
							w29 = 512;
						}
					} else {
						if (hops < 3) {
							w29 = 768;
						} else {
							w29 = 1024;
						}
					}
				}
			} else {
				if (prod == 4) {
					if (prod == 2) {
						if (rel_time < 7104) {
							w29 = -768;
						} else {
							w29 = -256;
						}
					} else {
						if (hops < 4) {
							w29 = 512;
						} else {
							w29 = 256;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w29 = 512;
						} else {
							w29 = 512;
						}
					} else {
						if (hops < 5) {
							w29 = 256;
						} else {
							w29 = 512;
						}
					}
				}
			}
		} else {
			if (prod == 4) {
				if (prod == 2) {
					if (rel_time < 7378) {
						if (hops < 3) {
							w29 = 768;
						} else {
							w29 = 768;
						}
					} else {
						if (hops < 4) {
							w29 = 512;
						} else {
							w29 = 256;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w29 = -512;
						} else {
							w29 = -512;
						}
					} else {
						if (hops < 4) {
							w29 = -256;
						} else {
							w29 = -512;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w29 = -512;
					} else {
						w29 = -512;
					}
				} else {
					if (hops < 4) {
						w29 = -256;
					} else {
						w29 = -512;
					}
				}
			}
		}
	} else {
		if (rel_time < 7559) {
			if (prod == 1) {
				if (hops < 2) {
					w29 = 256;
				} else {
					w29 = 512;
				}
			} else {
				if (hops < 3) {
					w29 = -768;
				} else {
					if (hops < 5) {
						w29 = -768;
					} else {
						w29 = -768;
					}
				}
			}
		} else {
			if (rel_time < 7760) {
				if (prod == 3) {
					if (prod == 0) {
						if (rel_time < 7654) {
							w29 = 512;
						} else {
							w29 = 512;
						}
					} else {
						if (hops < 3) {
							w29 = -768;
						} else {
							w29 = -768;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w29 = -768;
						} else {
							w29 = -768;
						}
					} else {
						w29 = -768;
					}
				}
			} else {
				if (rel_time < 7836) {
					if (prod == 1) {
						if (hops < 3) {
							w29 = -768;
						} else {
							w29 = -768;
						}
					} else {
						w29 = 1024;
					}
				} else {
					if (rel_time < 7882) {
						if (prod == 2) {
							w29 = 768;
						} else {
							w29 = -512;
						}
					} else {
						if (rel_time < 8036) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				}
			}
		}
	}
	int w30;
	if (prod == 4) {
		if (rel_time < 8586) {
			if (rel_time < 8435) {
				if (rel_time < 8158) {
					if (rel_time < 8111) {
						if (rel_time < 8036) {
							w30 = 0;
						} else {
							w30 = -512;
						}
					} else {
						if (prod == 2) {
							w30 = -768;
						} else {
							w30 = 512;
						}
					}
				} else {
					if (prod == 1) {
						if (rel_time < 8365) {
							w30 = -512;
						} else {
							w30 = -256;
						}
					} else {
						if (hops < 5) {
							w30 = 768;
						} else {
							w30 = 512;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 8484) {
						if (hops < 3) {
							w30 = 768;
						} else {
							w30 = 768;
						}
					} else {
						if (hops < 2) {
							w30 = 768;
						} else {
							w30 = 768;
						}
					}
				} else {
					w30 = 512;
				}
			}
		} else {
			if (rel_time < 8862) {
				if (prod == 2) {
					if (prod == 0) {
						if (rel_time < 8639) {
							w30 = -768;
						} else {
							w30 = -768;
						}
					} else {
						if (rel_time < 8639) {
							w30 = 512;
						} else {
							w30 = -512;
						}
					}
				} else {
					if (hops < 2) {
						w30 = 256;
					} else {
						if (hops < 5) {
							w30 = 512;
						} else {
							w30 = 256;
						}
					}
				}
			} else {
				if (rel_time < 9139) {
					if (prod == 2) {
						if (prod == 0) {
							w30 = 768;
						} else {
							w30 = 0;
						}
					} else {
						if (hops < 2) {
							w30 = -512;
						} else {
							w30 = -768;
						}
					}
				} else {
					if (rel_time < 9414) {
						if (prod == 2) {
							w30 = -256;
						} else {
							w30 = 256;
						}
					} else {
						if (rel_time < 9688) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4145) {
			if (rel_time < 3751) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						w30 = -256;
					}
				} else {
					if (hops < 5) {
						w30 = 256;
					} else {
						w30 = 512;
					}
				}
			} else {
				if (rel_time < 3910) {
					if (hops < 3) {
						if (hops < 2) {
							w30 = -256;
						} else {
							w30 = 0;
						}
					} else {
						if (hops < 4) {
							w30 = -512;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (rel_time < 4044) {
						w30 = -512;
					} else {
						if (hops < 4) {
							w30 = -256;
						} else {
							w30 = -256;
						}
					}
				}
			}
		} else {
			if (rel_time < 4423) {
				if (rel_time < 4322) {
					if (hops < 4) {
						w30 = 512;
					} else {
						w30 = 256;
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w30 = 256;
						} else {
							w30 = 256;
						}
					} else {
						w30 = 256;
					}
				}
			} else {
				if (rel_time < 4699) {
					if (rel_time < 4599) {
						if (hops < 3) {
							w30 = -256;
						} else {
							w30 = -256;
						}
					} else {
						if (hops < 3) {
							w30 = -256;
						} else {
							w30 = -256;
						}
					}
				} else {
					if (rel_time < 4977) {
						if (rel_time < 4876) {
							w30 = 256;
						} else {
							w30 = 256;
						}
					} else {
						if (rel_time < 5254) {
							w30 = -256;
						} else {
							w30 = 0;
						}
					}
				}
			}
		}
	}
	int w31;
	if (prod == 0) {
		if (rel_time < 6225) {
			if (rel_time < 5981) {
				if (rel_time < 5707) {
					if (rel_time < 5430) {
						if (rel_time < 5348) {
							w31 = 0;
						} else {
							w31 = -512;
						}
					} else {
						if (prod == 2) {
							w31 = 768;
						} else {
							w31 = -768;
						}
					}
				} else {
					if (prod == 2) {
						if (rel_time < 5807) {
							w31 = -512;
						} else {
							w31 = -1024;
						}
					} else {
						if (hops < 4) {
							w31 = 768;
						} else {
							w31 = 768;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (rel_time < 6084) {
						if (hops < 3) {
							w31 = 512;
						} else {
							w31 = 512;
						}
					} else {
						if (hops < 3) {
							w31 = 1024;
						} else {
							w31 = 1280;
						}
					}
				} else {
					w31 = -768;
				}
			}
		} else {
			if (rel_time < 6502) {
				if (prod == 2) {
					if (prod == 1) {
						if (rel_time < 6361) {
							w31 = -512;
						} else {
							w31 = -768;
						}
					} else {
						if (rel_time < 6407) {
							w31 = -1280;
						} else {
							w31 = -1280;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w31 = 768;
						} else {
							w31 = 768;
						}
					} else {
						w31 = 512;
					}
				}
			} else {
				if (rel_time < 6730) {
					if (prod == 3) {
						if (prod == 2) {
							w31 = 512;
						} else {
							w31 = -256;
						}
					} else {
						w31 = -1024;
					}
				} else {
					if (rel_time < 7054) {
						if (prod == 1) {
							w31 = 0;
						} else {
							w31 = -512;
						}
					} else {
						if (rel_time < 7283) {
							w31 = 256;
						} else {
							w31 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 7836) {
			if (rel_time < 7510) {
				if (rel_time < 7237) {
					if (rel_time < 6960) {
						if (rel_time < 6683) {
							w31 = 0;
						} else {
							w31 = 256;
						}
					} else {
						if (hops < 3) {
							w31 = -256;
						} else {
							w31 = -256;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w31 = 256;
						} else {
							w31 = 256;
						}
					} else {
						if (hops < 5) {
							w31 = 256;
						} else {
							w31 = 256;
						}
					}
				}
			} else {
				if (rel_time < 7760) {
					if (hops < 3) {
						if (hops < 2) {
							w31 = -512;
						} else {
							w31 = -512;
						}
					} else {
						if (hops < 4) {
							w31 = -512;
						} else {
							w31 = -512;
						}
					}
				} else {
					w31 = -512;
				}
			}
		} else {
			if (rel_time < 8111) {
				if (rel_time < 8036) {
					w31 = 512;
				} else {
					w31 = 1280;
				}
			} else {
				if (rel_time < 8365) {
					if (hops < 3) {
						if (hops < 2) {
							w31 = -256;
						} else {
							w31 = -256;
						}
					} else {
						if (hops < 5) {
							w31 = -256;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (rel_time < 8639) {
						if (rel_time < 8586) {
							w31 = 512;
						} else {
							w31 = 256;
						}
					} else {
						if (rel_time < 8911) {
							w31 = -256;
						} else {
							w31 = 0;
						}
					}
				}
			}
		}
	}
	int w32;
	if (prod == 4) {
		if (rel_time < 3751) {
			if (prod == 1) {
				if (rel_time < 3162) {
					if (rel_time < 3014) {
						if (rel_time < 2866) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (cons == 3) {
							w32 = 0;
						} else {
							w32 = 512;
						}
					}
				} else {
					if (rel_time < 3191) {
						if (hops < 5) {
							w32 = -512;
						} else {
							w32 = -768;
						}
					} else {
						if (rel_time < 3310) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w32 = -512;
						} else {
							w32 = 0;
						}
					} else {
						w32 = -512;
					}
				} else {
					w32 = 0;
				}
			}
		} else {
			if (rel_time < 3955) {
				if (prod == 1) {
					if (hops < 3) {
						if (rel_time < 3910) {
							w32 = 256;
						} else {
							w32 = -768;
						}
					} else {
						if (hops < 4) {
							w32 = -256;
						} else {
							w32 = 0;
						}
					}
				} else {
					if (rel_time < 3910) {
						w32 = 3072;
					} else {
						if (hops < 4) {
							w32 = 512;
						} else {
							w32 = 256;
						}
					}
				}
			} else {
				if (rel_time < 3999) {
					if (prod == 2) {
						w32 = 256;
					} else {
						if (hops < 5) {
							w32 = -256;
						} else {
							w32 = -256;
						}
					}
				} else {
					if (rel_time < 4145) {
						if (rel_time < 4044) {
							w32 = 256;
						} else {
							w32 = 256;
						}
					} else {
						if (rel_time < 4232) {
							w32 = -256;
						} else {
							w32 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8586) {
			if (rel_time < 8311) {
				if (rel_time < 8036) {
					if (rel_time < 7760) {
						if (rel_time < 7510) {
							w32 = 0;
						} else {
							w32 = 256;
						}
					} else {
						if (hops < 3) {
							w32 = -768;
						} else {
							w32 = -512;
						}
					}
				} else {
					if (rel_time < 8207) {
						if (hops < 2) {
							w32 = 256;
						} else {
							w32 = 256;
						}
					} else {
						if (hops < 5) {
							w32 = 512;
						} else {
							w32 = 256;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 3) {
						if (hops < 2) {
							w32 = -512;
						} else {
							w32 = -512;
						}
					} else {
						if (hops < 4) {
							w32 = -512;
						} else {
							w32 = -512;
						}
					}
				} else {
					w32 = -256;
				}
			}
		} else {
			if (rel_time < 8862) {
				if (hops < 2) {
					if (rel_time < 8759) {
						w32 = 256;
					} else {
						w32 = 256;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w32 = 512;
						} else {
							w32 = 256;
						}
					} else {
						w32 = 0;
					}
				}
			} else {
				if (rel_time < 9139) {
					if (hops < 2) {
						w32 = -256;
					} else {
						if (hops < 3) {
							w32 = -256;
						} else {
							w32 = -256;
						}
					}
				} else {
					if (rel_time < 9414) {
						if (hops < 2) {
							w32 = 256;
						} else {
							w32 = 256;
						}
					} else {
						if (rel_time < 9688) {
							w32 = -256;
						} else {
							w32 = 0;
						}
					}
				}
			}
		}
	}
	int w33;
	if (prod == 4) {
		if (rel_time < 10331) {
			if (rel_time < 10064) {
				if (rel_time < 9789) {
					if (rel_time < 7760) {
						if (rel_time < 7510) {
							w33 = 0;
						} else {
							w33 = -256;
						}
					} else {
						if (rel_time < 8036) {
							w33 = 256;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (prod == 1) {
						if (prod == 2) {
							w33 = -256;
						} else {
							w33 = 0;
						}
					} else {
						if (hops < 3) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				}
			} else {
				if (prod == 3) {
					if (prod == 1) {
						if (rel_time < 10118) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (hops < 5) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 10118) {
							w33 = 256;
						} else {
							w33 = 256;
						}
					} else {
						if (hops < 3) {
							w33 = 256;
						} else {
							w33 = 256;
						}
					}
				}
			}
		} else {
			if (prod == 2) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 10379) {
							w33 = 0;
						} else {
							w33 = -256;
						}
					} else {
						if (rel_time < 10379) {
							w33 = -256;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (rel_time < 10379) {
						if (hops < 5) {
							w33 = -256;
						} else {
							w33 = -256;
						}
					} else {
						w33 = -256;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w33 = 0;
					} else {
						w33 = 0;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w33 = 256;
						} else {
							w33 = 0;
						}
					} else {
						w33 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 8586) {
			if (rel_time < 8311) {
				if (rel_time < 8036) {
					if (rel_time < 7760) {
						if (rel_time < 7510) {
							w33 = 0;
						} else {
							w33 = 256;
						}
					} else {
						if (hops < 3) {
							w33 = -512;
						} else {
							w33 = -256;
						}
					}
				} else {
					if (rel_time < 8207) {
						if (hops < 2) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (hops < 5) {
							w33 = 256;
						} else {
							w33 = 0;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 3) {
						if (hops < 2) {
							w33 = -256;
						} else {
							w33 = -256;
						}
					} else {
						if (hops < 4) {
							w33 = -256;
						} else {
							w33 = -256;
						}
					}
				} else {
					w33 = -256;
				}
			}
		} else {
			if (rel_time < 8862) {
				if (hops < 2) {
					if (rel_time < 8759) {
						w33 = 0;
					} else {
						w33 = 0;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 8759) {
							w33 = 256;
						} else {
							w33 = 256;
						}
					} else {
						w33 = 0;
					}
				}
			} else {
				if (rel_time < 9139) {
					if (hops < 2) {
						w33 = 0;
					} else {
						if (hops < 5) {
							w33 = -256;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (rel_time < 9414) {
						if (rel_time < 9311) {
							w33 = 0;
						} else {
							w33 = 256;
						}
					} else {
						if (rel_time < 9688) {
							w33 = -256;
						} else {
							w33 = 0;
						}
					}
				}
			}
		}
	}
	int w34;
	if (prod == 3) {
		if (rel_time < 10331) {
			if (rel_time < 9965) {
				if (rel_time < 9789) {
					if (prod == 0) {
						if (rel_time < 7836) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (rel_time < 9464) {
							w34 = 0;
						} else {
							w34 = 256;
						}
					}
				} else {
					if (prod == 0) {
						if (hops < 3) {
							w34 = 256;
						} else {
							w34 = 256;
						}
					} else {
						if (hops < 3) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				}
			} else {
				if (prod == 4) {
					if (rel_time < 10118) {
						if (prod == 1) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (prod == 1) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w34 = -256;
						} else {
							w34 = -256;
						}
					} else {
						if (hops < 4) {
							w34 = -256;
						} else {
							w34 = -256;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 10379) {
						w34 = 0;
					} else {
						w34 = 0;
					}
				} else {
					w34 = 0;
				}
			} else {
				if (rel_time < 10379) {
					if (hops < 5) {
						if (hops < 4) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						w34 = 0;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						w34 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 4322) {
			if (rel_time < 4044) {
				if (rel_time < 3751) {
					if (hops < 4) {
						if (hops < 3) {
							w34 = 0;
						} else {
							w34 = -512;
						}
					} else {
						if (hops < 5) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w34 = 256;
						} else {
							w34 = 256;
						}
					} else {
						w34 = 256;
					}
				}
			} else {
				if (rel_time < 4277) {
					w34 = -512;
				} else {
					if (hops < 2) {
						w34 = -512;
					} else {
						w34 = -512;
					}
				}
			}
		} else {
			if (rel_time < 4599) {
				if (hops < 3) {
					w34 = 768;
				} else {
					if (hops < 4) {
						w34 = 768;
					} else {
						w34 = 768;
					}
				}
			} else {
				if (rel_time < 4876) {
					if (hops < 4) {
						if (hops < 2) {
							w34 = -512;
						} else {
							w34 = -512;
						}
					} else {
						w34 = -512;
					}
				} else {
					if (rel_time < 5152) {
						if (hops < 5) {
							w34 = 768;
						} else {
							w34 = 512;
						}
					} else {
						if (rel_time < 5430) {
							w34 = -512;
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
		if (cons == 0) {
			if (rel_time < 929) {
				if (rel_time < 880) {
					if (rel_time < 832) {
						if (rel_time < 735) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (hops < 2) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w35 = 0;
					} else {
						w35 = 0;
					}
				}
			} else {
				if (rel_time < 2065) {
					if (rel_time < 2036) {
						if (cons == 1) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (hops < 2) {
							w35 = -256;
						} else {
							w35 = -512;
						}
					}
				} else {
					if (rel_time < 2213) {
						if (cons == 2) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 2509) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2006) {
				if (rel_time < 1829) {
					if (rel_time < 735) {
						if (rel_time < 398) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 783) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w35 = 0;
					} else {
						w35 = 256;
					}
				}
			} else {
				if (rel_time < 2155) {
					if (hops < 2) {
						w35 = -256;
					} else {
						w35 = -256;
					}
				} else {
					if (rel_time < 3162) {
						if (rel_time < 3132) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 3310) {
							w35 = -256;
						} else {
							w35 = 0;
						}
					}
				}
			}
		}
	} else {
		if (hops < 5) {
			if (rel_time < 4232) {
				if (rel_time < 4145) {
					if (prod == 4) {
						if (rel_time < 3999) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (hops < 4) {
							w35 = -256;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (prod == 1) {
						if (prod == 0) {
							w35 = 768;
						} else {
							w35 = 256;
						}
					} else {
						if (hops < 4) {
							w35 = -512;
						} else {
							w35 = -512;
						}
					}
				}
			} else {
				if (rel_time < 4277) {
					if (prod == 2) {
						w35 = -256;
					} else {
						if (hops < 4) {
							w35 = 512;
						} else {
							w35 = 512;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 4423) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 4554) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 682) {
				if (rel_time < 611) {
					if (rel_time < 540) {
						if (rel_time < 469) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (cons == 2) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					w35 = 0;
				}
			} else {
				if (rel_time < 5300) {
					if (rel_time < 5254) {
						if (rel_time < 3310) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (prod == 0) {
							w35 = -768;
						} else {
							w35 = 512;
						}
					}
				} else {
					if (rel_time < 5577) {
						if (prod == 2) {
							w35 = -256;
						} else {
							w35 = 512;
						}
					} else {
						if (rel_time < 5624) {
							w35 = 512;
						} else {
							w35 = 0;
						}
					}
				}
			}
		}
	}
	int w36;
	if (rel_time < 10118) {
		if (rel_time < 10064) {
			if (rel_time < 8759) {
				if (rel_time < 8712) {
					if (rel_time < 8311) {
						if (rel_time < 8158) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (prod == 3) {
							w36 = 0;
						} else {
							w36 = 512;
						}
					}
				} else {
					if (prod == 3) {
						if (hops < 2) {
							w36 = 0;
						} else {
							w36 = 256;
						}
					} else {
						if (hops < 5) {
							w36 = -512;
						} else {
							w36 = -256;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (rel_time < 9034) {
						if (prod == 0) {
							w36 = 512;
						} else {
							w36 = -256;
						}
					} else {
						if (rel_time < 9311) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				} else {
					if (rel_time < 8970) {
						if (hops < 2) {
							w36 = -256;
						} else {
							w36 = -512;
						}
					} else {
						if (rel_time < 9311) {
							w36 = 256;
						} else {
							w36 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 2) {
				if (hops < 2) {
					w36 = 0;
				} else {
					if (hops < 3) {
						w36 = 256;
					} else {
						if (hops < 4) {
							w36 = 256;
						} else {
							w36 = 256;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w36 = 0;
					} else {
						w36 = 0;
					}
				} else {
					if (hops < 4) {
						w36 = 0;
					} else {
						if (hops < 5) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			}
		}
	} else {
		if (prod == 2) {
			if (prod == 0) {
				if (rel_time < 10379) {
					if (prod == 4) {
						if (rel_time < 10239) {
							w36 = 256;
						} else {
							w36 = 0;
						}
					} else {
						if (hops < 3) {
							w36 = -256;
						} else {
							w36 = 0;
						}
					}
				} else {
					if (prod == 3) {
						if (hops < 3) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (hops < 3) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10239) {
					if (hops < 3) {
						w36 = 256;
					} else {
						w36 = 0;
					}
				} else {
					if (hops < 2) {
						w36 = 0;
					} else {
						if (hops < 3) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 10331) {
					w36 = 0;
				} else {
					w36 = 0;
				}
			} else {
				if (rel_time < 10331) {
					if (hops < 3) {
						w36 = 0;
					} else {
						if (hops < 4) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				} else {
					if (hops < 3) {
						w36 = 0;
					} else {
						if (hops < 5) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			}
		}
	}
	int w37;
	if (hops < 4) {
		if (rel_time < 4746) {
			if (rel_time < 4699) {
				if (rel_time < 4554) {
					if (rel_time < 4509) {
						if (rel_time < 4423) {
							w37 = 0;
						} else {
							w37 = 256;
						}
					} else {
						if (prod == 2) {
							w37 = 512;
						} else {
							w37 = -512;
						}
					}
				} else {
					if (prod == 4) {
						if (rel_time < 4599) {
							w37 = 512;
						} else {
							w37 = 768;
						}
					} else {
						if (rel_time < 4599) {
							w37 = -256;
						} else {
							w37 = -256;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (hops < 3) {
						w37 = -1024;
					} else {
						w37 = -1024;
					}
				} else {
					w37 = 768;
				}
			}
		} else {
			if (rel_time < 4831) {
				if (prod == 2) {
					if (prod == 1) {
						w37 = -256;
					} else {
						w37 = -768;
					}
				} else {
					if (hops < 2) {
						w37 = 512;
					} else {
						if (hops < 3) {
							w37 = 512;
						} else {
							w37 = 512;
						}
					}
				}
			} else {
				if (rel_time < 4977) {
					if (prod == 4) {
						if (rel_time < 4876) {
							w37 = -256;
						} else {
							w37 = -512;
						}
					} else {
						if (rel_time < 4876) {
							w37 = 256;
						} else {
							w37 = 0;
						}
					}
				} else {
					if (rel_time < 5023) {
						if (prod == 0) {
							w37 = 768;
						} else {
							w37 = -512;
						}
					} else {
						if (rel_time < 5107) {
							w37 = -256;
						} else {
							w37 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5853) {
			if (rel_time < 5807) {
				if (rel_time < 5707) {
					if (rel_time < 5624) {
						if (cons == 3) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (prod == 2) {
							w37 = 768;
						} else {
							w37 = -512;
						}
					}
				} else {
					if (hops < 5) {
						w37 = -256;
					} else {
						w37 = -512;
					}
				}
			} else {
				if (prod == 0) {
					w37 = -768;
				} else {
					w37 = 768;
				}
			}
		} else {
			if (rel_time < 5981) {
				if (prod == 2) {
					if (hops < 5) {
						w37 = -768;
					} else {
						w37 = -768;
					}
				} else {
					if (hops < 5) {
						w37 = 512;
					} else {
						w37 = 512;
					}
				}
			} else {
				if (rel_time < 6084) {
					w37 = 512;
				} else {
					if (rel_time < 6131) {
						if (prod == 0) {
							w37 = 768;
						} else {
							w37 = -768;
						}
					} else {
						if (rel_time < 6407) {
							w37 = 256;
						} else {
							w37 = 0;
						}
					}
				}
			}
		}
	}
	int w38;
	if (prod == 1) {
		if (rel_time < 9239) {
			if (rel_time < 8970) {
				if (rel_time < 8712) {
					if (rel_time < 8435) {
						if (rel_time < 8158) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (prod == 4) {
							w38 = 256;
						} else {
							w38 = -256;
						}
					}
				} else {
					if (prod == 4) {
						if (prod == 0) {
							w38 = -256;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 8759) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			} else {
				if (prod == 4) {
					if (prod == 0) {
						if (prod == 2) {
							w38 = 256;
						} else {
							w38 = 256;
						}
					} else {
						if (hops < 2) {
							w38 = 512;
						} else {
							w38 = 512;
						}
					}
				} else {
					if (rel_time < 9034) {
						if (hops < 2) {
							w38 = -256;
						} else {
							w38 = -256;
						}
					} else {
						if (hops < 2) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 9514) {
				if (prod == 4) {
					if (prod == 2) {
						if (rel_time < 9311) {
							w38 = -256;
						} else {
							w38 = -512;
						}
					} else {
						if (rel_time < 9311) {
							w38 = 0;
						} else {
							w38 = -256;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w38 = 0;
						} else {
							w38 = 256;
						}
					} else {
						if (hops < 5) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			} else {
				if (rel_time < 9789) {
					if (prod == 4) {
						if (prod == 3) {
							w38 = 0;
						} else {
							w38 = 256;
						}
					} else {
						if (rel_time < 9585) {
							w38 = -512;
						} else {
							w38 = 0;
						}
					}
				} else {
					if (rel_time < 9844) {
						if (prod == 2) {
							w38 = -256;
						} else {
							w38 = 256;
						}
					} else {
						if (rel_time < 9965) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5348) {
			if (rel_time < 5107) {
				if (rel_time < 4831) {
					if (rel_time < 4509) {
						if (rel_time < 4232) {
							w38 = 0;
						} else {
							w38 = 512;
						}
					} else {
						if (hops < 4) {
							w38 = -768;
						} else {
							w38 = -1024;
						}
					}
				} else {
					if (rel_time < 5023) {
						if (hops < 4) {
							w38 = 512;
						} else {
							w38 = 768;
						}
					} else {
						if (hops < 4) {
							w38 = 1024;
						} else {
							w38 = 768;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w38 = -1024;
					} else {
						w38 = -1024;
					}
				} else {
					w38 = -512;
				}
			}
		} else {
			if (rel_time < 5624) {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w38 = 768;
						} else {
							w38 = 768;
						}
					} else {
						w38 = 768;
					}
				} else {
					w38 = 768;
				}
			} else {
				if (rel_time < 5900) {
					if (hops < 4) {
						if (hops < 2) {
							w38 = -768;
						} else {
							w38 = -768;
						}
					} else {
						w38 = -512;
					}
				} else {
					if (rel_time < 6177) {
						if (hops < 4) {
							w38 = 768;
						} else {
							w38 = 768;
						}
					} else {
						if (rel_time < 6454) {
							w38 = -768;
						} else {
							w38 = 0;
						}
					}
				}
			}
		}
	}
	int w39;
	if (cons == 0) {
		if (rel_time < 8586) {
			if (rel_time < 8207) {
				if (rel_time < 8158) {
					if (rel_time < 8111) {
						if (rel_time < 8036) {
							w39 = 0;
						} else {
							w39 = -256;
						}
					} else {
						if (prod == 2) {
							w39 = -512;
						} else {
							w39 = 512;
						}
					}
				} else {
					if (prod == 3) {
						w39 = 256;
					} else {
						if (hops < 5) {
							w39 = -256;
						} else {
							w39 = 0;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (prod == 2) {
						if (prod == 3) {
							w39 = 0;
						} else {
							w39 = 256;
						}
					} else {
						if (hops < 5) {
							w39 = -256;
						} else {
							w39 = 0;
						}
					}
				} else {
					if (hops < 5) {
						w39 = 512;
					} else {
						w39 = 512;
					}
				}
			}
		} else {
			if (rel_time < 8639) {
				if (prod == 0) {
					if (hops < 5) {
						if (hops < 2) {
							w39 = -512;
						} else {
							w39 = -512;
						}
					} else {
						w39 = -256;
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						w39 = 0;
					}
				}
			} else {
				if (rel_time < 8759) {
					if (prod == 2) {
						if (rel_time < 8712) {
							w39 = -1024;
						} else {
							w39 = 0;
						}
					} else {
						if (hops < 2) {
							w39 = 0;
						} else {
							w39 = 256;
						}
					}
				} else {
					if (rel_time < 9139) {
						if (prod == 1) {
							w39 = 0;
						} else {
							w39 = 512;
						}
					} else {
						if (rel_time < 9311) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2006) {
			if (rel_time < 1948) {
				if (rel_time < 1681) {
					if (rel_time < 1533) {
						if (rel_time < 1385) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (hops < 4) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (hops < 5) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w39 = 0;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w39 = 0;
						} else {
							w39 = 256;
						}
					} else {
						if (hops < 5) {
							w39 = 256;
						} else {
							w39 = 256;
						}
					}
				}
			}
		} else {
			if (rel_time < 2155) {
				if (hops < 3) {
					if (hops < 2) {
						w39 = -256;
					} else {
						w39 = -256;
					}
				} else {
					w39 = -256;
				}
			} else {
				if (rel_time < 2866) {
					if (rel_time < 2717) {
						if (rel_time < 2570) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (hops < 5) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				} else {
					if (rel_time < 3132) {
						if (hops < 2) {
							w39 = 0;
						} else {
							w39 = -256;
						}
					} else {
						if (rel_time < 3162) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				}
			}
		}
	}
	int w40;
	if (prod == 3) {
		if (rel_time < 8111) {
			if (rel_time < 7836) {
				if (rel_time < 7760) {
					if (rel_time < 7559) {
						if (rel_time < 7510) {
							w40 = 0;
						} else {
							w40 = -256;
						}
					} else {
						if (prod == 0) {
							w40 = 256;
						} else {
							w40 = -256;
						}
					}
				} else {
					if (prod == 1) {
						if (prod == 0) {
							w40 = -768;
						} else {
							w40 = -512;
						}
					} else {
						w40 = 512;
					}
				}
			} else {
				if (prod == 0) {
					if (prod == 4) {
						if (prod == 1) {
							w40 = -512;
						} else {
							w40 = -512;
						}
					} else {
						if (hops < 3) {
							w40 = -256;
						} else {
							w40 = -256;
						}
					}
				} else {
					if (rel_time < 8036) {
						if (hops < 2) {
							w40 = 256;
						} else {
							w40 = 256;
						}
					} else {
						w40 = 1024;
					}
				}
			}
		} else {
			if (rel_time < 8365) {
				if (prod == 0) {
					if (rel_time < 8207) {
						if (rel_time < 8158) {
							w40 = 256;
						} else {
							w40 = 0;
						}
					} else {
						if (rel_time < 8311) {
							w40 = 256;
						} else {
							w40 = 256;
						}
					}
				} else {
					if (rel_time < 8311) {
						if (hops < 3) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (hops < 5) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8639) {
					if (prod == 0) {
						if (rel_time < 8586) {
							w40 = 0;
						} else {
							w40 = -256;
						}
					} else {
						if (rel_time < 8586) {
							w40 = 256;
						} else {
							w40 = 0;
						}
					}
				} else {
					if (rel_time < 9514) {
						if (prod == 1) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (rel_time < 9585) {
							w40 = -512;
						} else {
							w40 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4322) {
			if (rel_time < 4044) {
				if (rel_time < 3751) {
					if (hops < 3) {
						if (hops < 2) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (hops < 4) {
							w40 = -256;
						} else {
							w40 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						w40 = 256;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 4277) {
						w40 = -256;
					} else {
						w40 = -256;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 4277) {
							w40 = -256;
						} else {
							w40 = -256;
						}
					} else {
						if (rel_time < 4277) {
							w40 = 0;
						} else {
							w40 = -256;
						}
					}
				}
			}
		} else {
			if (rel_time < 5707) {
				if (rel_time < 5430) {
					if (rel_time < 5152) {
						if (rel_time < 4876) {
							w40 = 0;
						} else {
							w40 = 512;
						}
					} else {
						if (hops < 2) {
							w40 = -256;
						} else {
							w40 = -256;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w40 = 512;
						} else {
							w40 = 768;
						}
					} else {
						if (hops < 5) {
							w40 = 512;
						} else {
							w40 = 512;
						}
					}
				}
			} else {
				if (rel_time < 5981) {
					if (hops < 4) {
						if (hops < 2) {
							w40 = -768;
						} else {
							w40 = -768;
						}
					} else {
						if (hops < 5) {
							w40 = -512;
						} else {
							w40 = -512;
						}
					}
				} else {
					if (rel_time < 6361) {
						if (rel_time < 6225) {
							w40 = 768;
						} else {
							w40 = 1280;
						}
					} else {
						if (rel_time < 6637) {
							w40 = -512;
						} else {
							w40 = 0;
						}
					}
				}
			}
		}
	}
	int w41;
	if (prod == 1) {
		if (rel_time < 7882) {
			if (rel_time < 7607) {
				if (rel_time < 7378) {
					if (rel_time < 6637) {
						if (rel_time < 6361) {
							w41 = 0;
						} else {
							w41 = 256;
						}
					} else {
						if (rel_time < 6730) {
							w41 = -256;
						} else {
							w41 = 0;
						}
					}
				} else {
					if (prod == 3) {
						if (prod == 4) {
							w41 = 256;
						} else {
							w41 = -256;
						}
					} else {
						if (hops < 3) {
							w41 = -512;
						} else {
							w41 = -512;
						}
					}
				}
			} else {
				if (prod == 4) {
					if (rel_time < 7654) {
						w41 = -512;
					} else {
						if (prod == 3) {
							w41 = -256;
						} else {
							w41 = 256;
						}
					}
				} else {
					if (rel_time < 7654) {
						if (hops < 4) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (hops < 4) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 8158) {
				if (prod == 4) {
					if (rel_time < 8111) {
						if (prod == 0) {
							w41 = 512;
						} else {
							w41 = 256;
						}
					} else {
						if (prod == 2) {
							w41 = -256;
						} else {
							w41 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w41 = 0;
						} else {
							w41 = -256;
						}
					} else {
						if (rel_time < 7931) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8207) {
					if (prod == 3) {
						if (hops < 2) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (hops < 5) {
							w41 = -256;
						} else {
							w41 = 0;
						}
					}
				} else {
					if (rel_time < 9239) {
						if (rel_time < 8970) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (rel_time < 9514) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5348) {
			if (rel_time < 5107) {
				if (rel_time < 4831) {
					if (rel_time < 4509) {
						if (rel_time < 4232) {
							w41 = 0;
						} else {
							w41 = 256;
						}
					} else {
						if (hops < 4) {
							w41 = -512;
						} else {
							w41 = -768;
						}
					}
				} else {
					if (rel_time < 5023) {
						if (hops < 4) {
							w41 = 256;
						} else {
							w41 = 512;
						}
					} else {
						if (hops < 4) {
							w41 = 768;
						} else {
							w41 = 512;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w41 = -768;
					} else {
						w41 = -768;
					}
				} else {
					w41 = -512;
				}
			}
		} else {
			if (rel_time < 5624) {
				if (hops < 5) {
					w41 = 512;
				} else {
					w41 = 512;
				}
			} else {
				if (rel_time < 5900) {
					if (hops < 4) {
						if (hops < 2) {
							w41 = -512;
						} else {
							w41 = -512;
						}
					} else {
						w41 = -256;
					}
				} else {
					if (rel_time < 6177) {
						if (hops < 4) {
							w41 = 512;
						} else {
							w41 = 512;
						}
					} else {
						if (rel_time < 6454) {
							w41 = -512;
						} else {
							w41 = 0;
						}
					}
				}
			}
		}
	}
	int w42;
	if (rel_time < 9585) {
		if (rel_time < 9311) {
			if (rel_time < 9186) {
				if (prod == 4) {
					if (rel_time < 8970) {
						if (rel_time < 8586) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (prod == 1) {
							w42 = 256;
						} else {
							w42 = -512;
						}
					}
				} else {
					if (rel_time < 6084) {
						if (rel_time < 5807) {
							w42 = 0;
						} else {
							w42 = 512;
						}
					} else {
						if (rel_time < 6361) {
							w42 = -512;
						} else {
							w42 = 0;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (prod == 3) {
						if (rel_time < 9239) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (hops < 2) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w42 = -768;
					} else {
						w42 = -512;
					}
				}
			}
		} else {
			if (prod == 1) {
				if (prod == 3) {
					if (prod == 4) {
						if (rel_time < 9514) {
							w42 = -256;
						} else {
							w42 = -256;
						}
					} else {
						if (rel_time < 9414) {
							w42 = 0;
						} else {
							w42 = -256;
						}
					}
				} else {
					if (hops < 2) {
						w42 = 0;
					} else {
						if (hops < 3) {
							w42 = 256;
						} else {
							w42 = 256;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 9464) {
						w42 = 512;
					} else {
						if (hops < 2) {
							w42 = 512;
						} else {
							w42 = 512;
						}
					}
				} else {
					w42 = 512;
				}
			}
		}
	} else {
		if (prod == 1) {
			if (prod == 3) {
				if (rel_time < 9965) {
					if (rel_time < 9688) {
						if (prod == 0) {
							w42 = 0;
						} else {
							w42 = 256;
						}
					} else {
						if (prod == 0) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				} else {
					if (rel_time < 10239) {
						if (prod == 4) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (prod == 2) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				}
			} else {
				if (rel_time < 9965) {
					if (rel_time < 9844) {
						if (hops < 2) {
							w42 = 0;
						} else {
							w42 = -256;
						}
					} else {
						if (hops < 2) {
							w42 = -512;
						} else {
							w42 = -768;
						}
					}
				} else {
					if (rel_time < 10239) {
						if (hops < 2) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (hops < 3) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 9789) {
				if (hops < 5) {
					w42 = -256;
				} else {
					w42 = -256;
				}
			} else {
				if (rel_time < 10064) {
					if (hops < 4) {
						if (hops < 3) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (hops < 5) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 10286) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						w42 = 0;
					}
				}
			}
		}
	}
	int w43;
	if (rel_time < 3663) {
		if (prod == 5) {
			if (hops < 4) {
				if (prod == 2) {
					if (rel_time < 3619) {
						if (hops < 3) {
							w43 = -256;
						} else {
							w43 = 0;
						}
					} else {
						if (hops < 3) {
							w43 = 0;
						} else {
							w43 = -256;
						}
					}
				} else {
					if (hops < 3) {
						w43 = 256;
					} else {
						w43 = -256;
					}
				}
			} else {
				if (prod == 1) {
					if (hops < 5) {
						if (rel_time < 3619) {
							w43 = 256;
						} else {
							w43 = 256;
						}
					} else {
						w43 = 0;
					}
				} else {
					if (hops < 5) {
						w43 = 0;
					} else {
						w43 = 0;
					}
				}
			}
		} else {
			if (rel_time < 3162) {
				if (rel_time < 3014) {
					if (rel_time < 2866) {
						if (rel_time < 2717) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					} else {
						if (cons == 2) {
							w43 = 0;
						} else {
							w43 = 256;
						}
					}
				} else {
					if (cons == 3) {
						if (rel_time < 3043) {
							w43 = 256;
						} else {
							w43 = 0;
						}
					} else {
						if (hops < 2) {
							w43 = 256;
						} else {
							w43 = 512;
						}
					}
				}
			} else {
				if (rel_time < 3191) {
					if (hops < 5) {
						if (hops < 3) {
							w43 = -256;
						} else {
							w43 = -256;
						}
					} else {
						w43 = -512;
					}
				} else {
					if (rel_time < 3310) {
						if (cons == 3) {
							w43 = 0;
						} else {
							w43 = -512;
						}
					} else {
						if (rel_time < 3398) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3955) {
			if (prod == 1) {
				if (prod == 3) {
					if (prod == 4) {
						if (hops < 4) {
							w43 = 0;
						} else {
							w43 = 256;
						}
					} else {
						if (rel_time < 3751) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					} else {
						if (hops < 4) {
							w43 = -256;
						} else {
							w43 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w43 = 256;
				} else {
					if (hops < 4) {
						if (rel_time < 3910) {
							w43 = 2560;
						} else {
							w43 = 512;
						}
					} else {
						if (hops < 5) {
							w43 = 256;
						} else {
							w43 = 512;
						}
					}
				}
			}
		} else {
			if (rel_time < 3999) {
				if (prod == 2) {
					if (hops < 2) {
						w43 = 0;
					} else {
						w43 = 0;
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w43 = -256;
						} else {
							w43 = 0;
						}
					} else {
						w43 = -256;
					}
				}
			} else {
				if (rel_time < 5348) {
					if (rel_time < 5300) {
						if (prod == 1) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					} else {
						if (prod == 1) {
							w43 = 768;
						} else {
							w43 = -512;
						}
					}
				} else {
					if (rel_time < 5624) {
						if (prod == 0) {
							w43 = 0;
						} else {
							w43 = -768;
						}
					} else {
						if (rel_time < 5900) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				}
			}
		}
	}
	int w44;
	if (prod == 4) {
		if (rel_time < 4554) {
			if (rel_time < 4277) {
				if (rel_time < 4232) {
					if (rel_time < 4145) {
						if (rel_time < 3751) {
							w44 = 0;
						} else {
							w44 = 0;
						}
					} else {
						if (prod == 1) {
							w44 = 512;
						} else {
							w44 = -256;
						}
					}
				} else {
					if (prod == 2) {
						if (hops < 3) {
							w44 = -256;
						} else {
							w44 = 0;
						}
					} else {
						if (hops < 3) {
							w44 = 512;
						} else {
							w44 = 256;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (prod == 3) {
						if (rel_time < 4423) {
							w44 = -512;
						} else {
							w44 = -512;
						}
					} else {
						if (rel_time < 4322) {
							w44 = -256;
						} else {
							w44 = 256;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w44 = 256;
						} else {
							w44 = 0;
						}
					} else {
						if (hops < 4) {
							w44 = 256;
						} else {
							w44 = 512;
						}
					}
				}
			}
		} else {
			if (rel_time < 4699) {
				if (rel_time < 4599) {
					if (hops < 4) {
						if (hops < 3) {
							w44 = 256;
						} else {
							w44 = 256;
						}
					} else {
						if (hops < 5) {
							w44 = 512;
						} else {
							w44 = 512;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w44 = 512;
						} else {
							w44 = 512;
						}
					} else {
						w44 = 512;
					}
				}
			} else {
				if (rel_time < 4831) {
					if (prod == 1) {
						if (prod == 3) {
							w44 = 256;
						} else {
							w44 = -256;
						}
					} else {
						if (rel_time < 4746) {
							w44 = -256;
						} else {
							w44 = 0;
						}
					}
				} else {
					if (rel_time < 4977) {
						if (hops < 4) {
							w44 = -256;
						} else {
							w44 = -256;
						}
					} else {
						if (rel_time < 5348) {
							w44 = 0;
						} else {
							w44 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4145) {
			if (rel_time < 3910) {
				if (rel_time < 3751) {
					if (hops < 4) {
						if (hops < 3) {
							w44 = 0;
						} else {
							w44 = 0;
						}
					} else {
						w44 = 256;
					}
				} else {
					if (hops < 2) {
						w44 = 0;
					} else {
						if (hops < 3) {
							w44 = 0;
						} else {
							w44 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4044) {
					if (hops < 3) {
						w44 = -256;
					} else {
						w44 = -256;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w44 = 0;
						} else {
							w44 = 0;
						}
					} else {
						if (hops < 4) {
							w44 = 0;
						} else {
							w44 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 4423) {
				if (rel_time < 4322) {
					if (hops < 2) {
						w44 = 256;
					} else {
						w44 = 256;
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w44 = 256;
						} else {
							w44 = 256;
						}
					} else {
						w44 = 256;
					}
				}
			} else {
				if (rel_time < 4699) {
					if (hops < 4) {
						if (hops < 3) {
							w44 = 0;
						} else {
							w44 = 0;
						}
					} else {
						if (hops < 5) {
							w44 = -256;
						} else {
							w44 = -256;
						}
					}
				} else {
					if (rel_time < 5531) {
						if (rel_time < 5254) {
							w44 = 0;
						} else {
							w44 = 256;
						}
					} else {
						if (rel_time < 5807) {
							w44 = -512;
						} else {
							w44 = 0;
						}
					}
				}
			}
		}
	}
	int w45;
	if (rel_time < 2570) {
		if (rel_time < 2421) {
			if (rel_time < 2332) {
				if (rel_time < 2096) {
					if (rel_time < 2036) {
						if (rel_time < 1829) {
							w45 = 0;
						} else {
							w45 = 0;
						}
					} else {
						if (cons == 4) {
							w45 = -256;
						} else {
							w45 = 0;
						}
					}
				} else {
					if (cons == 0) {
						if (rel_time < 2155) {
							w45 = 256;
						} else {
							w45 = 0;
						}
					} else {
						if (rel_time < 2155) {
							w45 = -256;
						} else {
							w45 = 0;
						}
					}
				}
			} else {
				if (cons == 4) {
					if (rel_time < 2361) {
						if (hops < 5) {
							w45 = -256;
						} else {
							w45 = 0;
						}
					} else {
						if (hops < 2) {
							w45 = -256;
						} else {
							w45 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w45 = 0;
						} else {
							w45 = 0;
						}
					} else {
						w45 = 0;
					}
				}
			}
		} else {
			if (cons == 4) {
				if (cons == 2) {
					if (rel_time < 2509) {
						if (hops < 5) {
							w45 = 256;
						} else {
							w45 = 0;
						}
					} else {
						if (cons == 0) {
							w45 = -512;
						} else {
							w45 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w45 = 0;
					} else {
						if (hops < 5) {
							w45 = 0;
						} else {
							w45 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w45 = 0;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w45 = 0;
						} else {
							w45 = 0;
						}
					} else {
						w45 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 2717) {
			if (cons == 2) {
				if (rel_time < 2657) {
					if (hops < 2) {
						if (rel_time < 2599) {
							w45 = -256;
						} else {
							w45 = -256;
						}
					} else {
						if (hops < 5) {
							w45 = -256;
						} else {
							w45 = 0;
						}
					}
				} else {
					if (hops < 2) {
						if (cons == 0) {
							w45 = 0;
						} else {
							w45 = 0;
						}
					} else {
						if (hops < 5) {
							w45 = 0;
						} else {
							w45 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w45 = 0;
				} else {
					if (rel_time < 2599) {
						w45 = 256;
					} else {
						if (hops < 4) {
							w45 = 0;
						} else {
							w45 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2747) {
				if (hops < 2) {
					w45 = 256;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w45 = 256;
						} else {
							w45 = 256;
						}
					} else {
						w45 = 0;
					}
				}
			} else {
				if (cons == 1) {
					if (rel_time < 3221) {
						if (rel_time < 3072) {
							w45 = 0;
						} else {
							w45 = 0;
						}
					} else {
						if (rel_time < 3368) {
							w45 = 0;
						} else {
							w45 = 0;
						}
					}
				} else {
					if (rel_time < 3339) {
						if (rel_time < 3191) {
							w45 = 0;
						} else {
							w45 = 256;
						}
					} else {
						if (hops < 2) {
							w45 = -512;
						} else {
							w45 = -256;
						}
					}
				}
			}
		}
	}
	int w46;
	if (rel_time < 1681) {
		if (rel_time < 1533) {
			if (rel_time < 1385) {
				if (rel_time < 1237) {
					if (size < 38) {
						if (hops < 4) {
							w46 = 0;
						} else {
							w46 = 0;
						}
					} else {
						if (hops < 4) {
							w46 = 0;
						} else {
							w46 = 0;
						}
					}
				} else {
					if (cons == 3) {
						if (rel_time < 1266) {
							w46 = 0;
						} else {
							w46 = 0;
						}
					} else {
						if (hops < 5) {
							w46 = 0;
						} else {
							w46 = 512;
						}
					}
				}
			} else {
				if (cons == 3) {
					if (rel_time < 1414) {
						if (hops < 5) {
							w46 = 0;
						} else {
							w46 = -512;
						}
					} else {
						if (hops < 4) {
							w46 = 0;
						} else {
							w46 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w46 = 0;
					} else {
						if (hops < 4) {
							w46 = -256;
						} else {
							w46 = 0;
						}
					}
				}
			}
		} else {
			if (cons == 3) {
				if (rel_time < 1562) {
					if (hops < 3) {
						if (hops < 2) {
							w46 = 0;
						} else {
							w46 = 0;
						}
					} else {
						if (hops < 5) {
							w46 = 256;
						} else {
							w46 = 512;
						}
					}
				} else {
					if (rel_time < 1621) {
						if (hops < 4) {
							w46 = 0;
						} else {
							w46 = 0;
						}
					} else {
						if (hops < 2) {
							w46 = 0;
						} else {
							w46 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w46 = 256;
					} else {
						w46 = 0;
					}
				} else {
					if (hops < 5) {
						w46 = 256;
					} else {
						w46 = 256;
					}
				}
			}
		}
	} else {
		if (rel_time < 1769) {
			if (cons == 2) {
				if (cons == 3) {
					if (hops < 4) {
						if (hops < 3) {
							w46 = -256;
						} else {
							w46 = -256;
						}
					} else {
						if (hops < 5) {
							w46 = 0;
						} else {
							w46 = -256;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w46 = -256;
						} else {
							w46 = -512;
						}
					} else {
						w46 = -256;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w46 = 0;
						} else {
							w46 = 256;
						}
					} else {
						if (rel_time < 1710) {
							w46 = 256;
						} else {
							w46 = 0;
						}
					}
				} else {
					if (hops < 5) {
						w46 = 0;
					} else {
						w46 = 0;
					}
				}
			}
		} else {
			if (rel_time < 1917) {
				if (cons == 2) {
					if (rel_time < 1829) {
						if (hops < 3) {
							w46 = 0;
						} else {
							w46 = 0;
						}
					} else {
						if (hops < 2) {
							w46 = 256;
						} else {
							w46 = 256;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w46 = -256;
						} else {
							w46 = -256;
						}
					} else {
						if (hops < 4) {
							w46 = 0;
						} else {
							w46 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2065) {
					if (cons == 1) {
						if (cons == 3) {
							w46 = 0;
						} else {
							w46 = -256;
						}
					} else {
						if (hops < 2) {
							w46 = 0;
						} else {
							w46 = -512;
						}
					}
				} else {
					if (rel_time < 2213) {
						if (cons == 0) {
							w46 = 0;
						} else {
							w46 = 0;
						}
					} else {
						if (rel_time < 2421) {
							w46 = 0;
						} else {
							w46 = 0;
						}
					}
				}
			}
		}
	}
	int w47;
	if (rel_time < 9585) {
		if (rel_time < 9311) {
			if (rel_time < 9186) {
				if (prod == 2) {
					if (rel_time < 7760) {
						if (rel_time < 7510) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					} else {
						if (rel_time < 7931) {
							w47 = 256;
						} else {
							w47 = 0;
						}
					}
				} else {
					if (rel_time < 4277) {
						if (rel_time < 3999) {
							w47 = 0;
						} else {
							w47 = 256;
						}
					} else {
						if (rel_time < 4554) {
							w47 = -256;
						} else {
							w47 = 0;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (prod == 3) {
						if (hops < 2) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					} else {
						if (hops < 4) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w47 = -512;
					} else {
						if (hops < 4) {
							w47 = -256;
						} else {
							w47 = -512;
						}
					}
				}
			}
		} else {
			if (prod == 1) {
				if (prod == 3) {
					if (prod == 4) {
						if (rel_time < 9514) {
							w47 = 0;
						} else {
							w47 = -256;
						}
					} else {
						if (rel_time < 9414) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w47 = 0;
					} else {
						if (hops < 3) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 9464) {
						w47 = 256;
					} else {
						if (hops < 2) {
							w47 = 256;
						} else {
							w47 = 256;
						}
					}
				} else {
					if (hops < 5) {
						w47 = 256;
					} else {
						w47 = 512;
					}
				}
			}
		}
	} else {
		if (prod == 1) {
			if (rel_time < 9789) {
				if (prod == 4) {
					if (rel_time < 9739) {
						if (rel_time < 9688) {
							w47 = 256;
						} else {
							w47 = 0;
						}
					} else {
						if (hops < 3) {
							w47 = 256;
						} else {
							w47 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					} else {
						if (hops < 4) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					}
				}
			} else {
				if (rel_time < 9844) {
					if (prod == 2) {
						if (hops < 2) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					} else {
						if (hops < 5) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					}
				} else {
					if (rel_time < 9965) {
						if (prod == 4) {
							w47 = -256;
						} else {
							w47 = 0;
						}
					} else {
						if (rel_time < 10064) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 9789) {
				if (hops < 5) {
					w47 = -256;
				} else {
					w47 = -256;
				}
			} else {
				if (rel_time < 10064) {
					if (hops < 4) {
						if (hops < 3) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					} else {
						if (hops < 5) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 10286) {
							w47 = 0;
						} else {
							w47 = 0;
						}
					} else {
						w47 = 0;
					}
				}
			}
		}
	}
	int w48;
	if (prod == 4) {
		if (rel_time < 6177) {
			if (rel_time < 5900) {
				if (rel_time < 5624) {
					if (rel_time < 5348) {
						if (rel_time < 5107) {
							w48 = 0;
						} else {
							w48 = 0;
						}
					} else {
						if (prod == 1) {
							w48 = -256;
						} else {
							w48 = 256;
						}
					}
				} else {
					if (prod == 1) {
						if (rel_time < 5707) {
							w48 = 256;
						} else {
							w48 = 512;
						}
					} else {
						if (hops < 4) {
							w48 = -256;
						} else {
							w48 = -256;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (prod == 2) {
						if (rel_time < 5981) {
							w48 = -512;
						} else {
							w48 = -768;
						}
					} else {
						if (rel_time < 5981) {
							w48 = 512;
						} else {
							w48 = -512;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w48 = 256;
						} else {
							w48 = 256;
						}
					} else {
						if (rel_time < 6131) {
							w48 = 0;
						} else {
							w48 = 256;
						}
					}
				}
			}
		} else {
			if (rel_time < 6407) {
				if (prod == 2) {
					if (prod == 1) {
						if (rel_time < 6225) {
							w48 = 512;
						} else {
							w48 = 512;
						}
					} else {
						if (hops < 3) {
							w48 = -256;
						} else {
							w48 = -256;
						}
					}
				} else {
					if (hops < 4) {
						w48 = -512;
					} else {
						w48 = -512;
					}
				}
			} else {
				if (rel_time < 6683) {
					if (prod == 2) {
						if (rel_time < 6637) {
							w48 = -512;
						} else {
							w48 = 0;
						}
					} else {
						if (hops < 3) {
							w48 = 256;
						} else {
							w48 = 256;
						}
					}
				} else {
					if (rel_time < 6960) {
						if (prod == 2) {
							w48 = 256;
						} else {
							w48 = -256;
						}
					} else {
						if (rel_time < 7237) {
							w48 = 0;
						} else {
							w48 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4145) {
			if (rel_time < 3910) {
				if (rel_time < 3751) {
					if (hops < 4) {
						if (hops < 3) {
							w48 = 0;
						} else {
							w48 = 0;
						}
					} else {
						if (hops < 5) {
							w48 = 256;
						} else {
							w48 = 256;
						}
					}
				} else {
					if (hops < 2) {
						w48 = 0;
					} else {
						if (hops < 3) {
							w48 = 0;
						} else {
							w48 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4044) {
					if (hops < 3) {
						if (hops < 2) {
							w48 = 0;
						} else {
							w48 = -256;
						}
					} else {
						w48 = 0;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w48 = 0;
						} else {
							w48 = 0;
						}
					} else {
						if (hops < 4) {
							w48 = 0;
						} else {
							w48 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 4423) {
				if (rel_time < 4322) {
					if (hops < 2) {
						w48 = 256;
					} else {
						if (hops < 4) {
							w48 = 256;
						} else {
							w48 = 256;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w48 = 0;
						} else {
							w48 = 256;
						}
					} else {
						w48 = 0;
					}
				}
			} else {
				if (rel_time < 4699) {
					if (hops < 4) {
						if (rel_time < 4599) {
							w48 = 0;
						} else {
							w48 = 0;
						}
					} else {
						if (rel_time < 4599) {
							w48 = 0;
						} else {
							w48 = 0;
						}
					}
				} else {
					if (rel_time < 4977) {
						if (hops < 5) {
							w48 = 0;
						} else {
							w48 = 256;
						}
					} else {
						if (rel_time < 5254) {
							w48 = -256;
						} else {
							w48 = 0;
						}
					}
				}
			}
		}
	}
	int w49;
	if (rel_time < 8586) {
		if (rel_time < 8207) {
			if (rel_time < 8036) {
				if (rel_time < 7237) {
					if (rel_time < 6777) {
						if (rel_time < 6683) {
							w49 = 0;
						} else {
							w49 = 0;
						}
					} else {
						if (prod == 2) {
							w49 = 0;
						} else {
							w49 = 256;
						}
					}
				} else {
					if (prod == 2) {
						if (rel_time < 7330) {
							w49 = 512;
						} else {
							w49 = 0;
						}
					} else {
						if (rel_time < 7330) {
							w49 = -256;
						} else {
							w49 = 0;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (prod == 3) {
						if (rel_time < 8111) {
							w49 = 512;
						} else {
							w49 = 0;
						}
					} else {
						if (hops < 5) {
							w49 = -256;
						} else {
							w49 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w49 = -256;
						} else {
							w49 = -256;
						}
					} else {
						w49 = -256;
					}
				}
			}
		} else {
			if (prod == 2) {
				if (prod == 1) {
					if (prod == 3) {
						if (rel_time < 8484) {
							w49 = 0;
						} else {
							w49 = 0;
						}
					} else {
						if (rel_time < 8435) {
							w49 = 512;
						} else {
							w49 = 0;
						}
					}
				} else {
					if (rel_time < 8365) {
						if (hops < 5) {
							w49 = 256;
						} else {
							w49 = 0;
						}
					} else {
						if (hops < 5) {
							w49 = 512;
						} else {
							w49 = 256;
						}
					}
				}
			} else {
				if (hops < 2) {
					w49 = 0;
				} else {
					if (hops < 3) {
						w49 = -256;
					} else {
						if (hops < 5) {
							w49 = 0;
						} else {
							w49 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8639) {
			if (prod == 0) {
				if (hops < 5) {
					if (hops < 2) {
						w49 = 0;
					} else {
						if (hops < 4) {
							w49 = -256;
						} else {
							w49 = -256;
						}
					}
				} else {
					w49 = 0;
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w49 = 0;
					} else {
						if (hops < 3) {
							w49 = 0;
						} else {
							w49 = 0;
						}
					}
				} else {
					if (hops < 5) {
						w49 = 0;
					} else {
						w49 = 0;
					}
				}
			}
		} else {
			if (prod == 3) {
				if (rel_time < 8911) {
					if (prod == 0) {
						if (rel_time < 8862) {
							w49 = 0;
						} else {
							w49 = 256;
						}
					} else {
						if (hops < 2) {
							w49 = 0;
						} else {
							w49 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (rel_time < 9239) {
							w49 = 0;
						} else {
							w49 = 0;
						}
					} else {
						if (rel_time < 9186) {
							w49 = 256;
						} else {
							w49 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8759) {
					if (rel_time < 8712) {
						if (hops < 2) {
							w49 = -512;
						} else {
							w49 = -512;
						}
					} else {
						if (hops < 5) {
							w49 = 0;
						} else {
							w49 = 0;
						}
					}
				} else {
					if (rel_time < 10239) {
						if (rel_time < 9965) {
							w49 = 0;
						} else {
							w49 = 0;
						}
					} else {
						if (hops < 2) {
							w49 = 0;
						} else {
							w49 = 0;
						}
					}
				}
			}
		}
	}
	int w50;
	if (rel_time < 318) {
		if (rel_time < 68) {
			if (hops < 4) {
				if (hops < 2) {
					w50 = 0;
				} else {
					if (hops < 3) {
						w50 = 0;
					} else {
						w50 = 0;
					}
				}
			} else {
				if (hops < 5) {
					w50 = 0;
				} else {
					w50 = 0;
				}
			}
		} else {
			if (cons == 2) {
				if (hops < 3) {
					if (rel_time < 182) {
						if (hops < 2) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					} else {
						if (hops < 2) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					}
				} else {
					if (cons == 4) {
						if (hops < 4) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					} else {
						w50 = 512;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w50 = 0;
					} else {
						if (rel_time < 182) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					}
				} else {
					if (hops < 5) {
						w50 = 0;
					} else {
						w50 = 0;
					}
				}
			}
		}
	} else {
		if (cons == 4) {
			if (rel_time < 783) {
				if (cons == 2) {
					if (rel_time < 469) {
						if (hops < 4) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					} else {
						if (hops < 4) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w50 = 0;
					} else {
						if (hops < 4) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					}
				}
			} else {
				if (rel_time < 832) {
					if (hops < 4) {
						if (hops < 3) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					} else {
						if (hops < 5) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					}
				} else {
					if (rel_time < 880) {
						if (hops < 3) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					} else {
						if (rel_time < 1031) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2836) {
				if (rel_time < 1207) {
					if (rel_time < 982) {
						if (rel_time < 735) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					} else {
						if (hops < 4) {
							w50 = 0;
						} else {
							w50 = 512;
						}
					}
				} else {
					if (rel_time < 2806) {
						if (rel_time < 2657) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					} else {
						if (hops < 2) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2984) {
					if (hops < 2) {
						w50 = 256;
					} else {
						if (hops < 4) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					}
				} else {
					if (rel_time < 3132) {
						if (hops < 3) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					} else {
						if (rel_time < 3281) {
							w50 = 0;
						} else {
							w50 = 0;
						}
					}
				}
			}
		}
	}
	int w51;
	if (prod == 3) {
		if (rel_time < 6361) {
			if (rel_time < 6084) {
				if (rel_time < 5807) {
					if (rel_time < 5577) {
						if (rel_time < 5300) {
							w51 = 0;
						} else {
							w51 = 0;
						}
					} else {
						if (prod == 0) {
							w51 = -256;
						} else {
							w51 = 512;
						}
					}
				} else {
					if (prod == 1) {
						if (rel_time < 5853) {
							w51 = 512;
						} else {
							w51 = 256;
						}
					} else {
						if (hops < 4) {
							w51 = -256;
						} else {
							w51 = 0;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (rel_time < 6131) {
						if (hops < 4) {
							w51 = -512;
						} else {
							w51 = -256;
						}
					} else {
						if (prod == 0) {
							w51 = -256;
						} else {
							w51 = 512;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 6131) {
							w51 = 256;
						} else {
							w51 = 256;
						}
					} else {
						if (hops < 3) {
							w51 = 256;
						} else {
							w51 = 256;
						}
					}
				}
			}
		} else {
			if (rel_time < 6637) {
				if (prod == 1) {
					if (rel_time < 6407) {
						if (hops < 4) {
							w51 = 256;
						} else {
							w51 = 256;
						}
					} else {
						if (prod == 0) {
							w51 = 256;
						} else {
							w51 = -768;
						}
					}
				} else {
					if (rel_time < 6407) {
						if (hops < 3) {
							w51 = -256;
						} else {
							w51 = -256;
						}
					} else {
						if (hops < 3) {
							w51 = -256;
						} else {
							w51 = -256;
						}
					}
				}
			} else {
				if (rel_time < 6829) {
					if (prod == 1) {
						if (rel_time < 6730) {
							w51 = -256;
						} else {
							w51 = -256;
						}
					} else {
						if (rel_time < 6683) {
							w51 = 512;
						} else {
							w51 = 256;
						}
					}
				} else {
					if (rel_time < 7283) {
						if (rel_time < 7007) {
							w51 = 0;
						} else {
							w51 = 0;
						}
					} else {
						if (rel_time < 7378) {
							w51 = -256;
						} else {
							w51 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6829) {
			if (rel_time < 6637) {
				if (rel_time < 6361) {
					if (rel_time < 5981) {
						if (rel_time < 5707) {
							w51 = 0;
						} else {
							w51 = -256;
						}
					} else {
						if (rel_time < 6225) {
							w51 = 256;
						} else {
							w51 = 512;
						}
					}
				} else {
					if (rel_time < 6502) {
						if (hops < 3) {
							w51 = -256;
						} else {
							w51 = -256;
						}
					} else {
						w51 = -256;
					}
				}
			} else {
				if (rel_time < 6777) {
					if (hops < 3) {
						w51 = 256;
					} else {
						if (hops < 4) {
							w51 = 512;
						} else {
							w51 = 256;
						}
					}
				} else {
					if (hops < 3) {
						w51 = 512;
					} else {
						if (hops < 4) {
							w51 = 512;
						} else {
							w51 = 512;
						}
					}
				}
			}
		} else {
			if (rel_time < 7104) {
				if (rel_time < 7054) {
					if (hops < 2) {
						w51 = -512;
					} else {
						if (hops < 3) {
							w51 = -512;
						} else {
							w51 = -512;
						}
					}
				} else {
					if (hops < 3) {
						w51 = -512;
					} else {
						if (hops < 5) {
							w51 = -512;
						} else {
							w51 = -512;
						}
					}
				}
			} else {
				if (rel_time < 7378) {
					if (rel_time < 7330) {
						if (hops < 3) {
							w51 = 256;
						} else {
							w51 = 256;
						}
					} else {
						if (hops < 3) {
							w51 = 512;
						} else {
							w51 = 512;
						}
					}
				} else {
					if (rel_time < 7654) {
						if (hops < 3) {
							w51 = -256;
						} else {
							w51 = -256;
						}
					} else {
						if (rel_time < 7931) {
							w51 = 256;
						} else {
							w51 = 0;
						}
					}
				}
			}
		}
	}
	int w52;
	if (prod == 1) {
		if (rel_time < 5107) {
			if (rel_time < 4977) {
				if (rel_time < 4554) {
					if (rel_time < 4322) {
						if (prod == 3) {
							w52 = 0;
						} else {
							w52 = 0;
						}
					} else {
						if (prod == 4) {
							w52 = -256;
						} else {
							w52 = 0;
						}
					}
				} else {
					if (rel_time < 4831) {
						if (prod == 4) {
							w52 = 256;
						} else {
							w52 = 0;
						}
					} else {
						if (prod == 4) {
							w52 = -256;
						} else {
							w52 = 0;
						}
					}
				}
			} else {
				if (prod == 3) {
					if (hops < 4) {
						if (rel_time < 5023) {
							w52 = -256;
						} else {
							w52 = -256;
						}
					} else {
						w52 = -512;
					}
				} else {
					w52 = 256;
				}
			}
		} else {
			if (rel_time < 5348) {
				if (prod == 4) {
					if (rel_time < 5300) {
						if (rel_time < 5152) {
							w52 = 256;
						} else {
							w52 = 256;
						}
					} else {
						if (hops < 5) {
							w52 = 256;
						} else {
							w52 = 0;
						}
					}
				} else {
					if (rel_time < 5152) {
						w52 = -512;
					} else {
						if (hops < 5) {
							w52 = 0;
						} else {
							w52 = 0;
						}
					}
				}
			} else {
				if (rel_time < 5624) {
					if (prod == 4) {
						if (rel_time < 5430) {
							w52 = 0;
						} else {
							w52 = -256;
						}
					} else {
						if (rel_time < 5430) {
							w52 = 512;
						} else {
							w52 = 0;
						}
					}
				} else {
					if (rel_time < 5900) {
						if (prod == 4) {
							w52 = 256;
						} else {
							w52 = -256;
						}
					} else {
						if (rel_time < 6177) {
							w52 = 0;
						} else {
							w52 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3663) {
			if (hops < 2) {
				w52 = -256;
			} else {
				if (rel_time < 3619) {
					w52 = -2816;
				} else {
					if (hops < 3) {
						w52 = 0;
					} else {
						if (hops < 4) {
							w52 = -256;
						} else {
							w52 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3955) {
				if (rel_time < 3910) {
					w52 = 2048;
				} else {
					if (hops < 2) {
						w52 = 0;
					} else {
						if (hops < 4) {
							w52 = 256;
						} else {
							w52 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4232) {
					if (hops < 3) {
						if (hops < 2) {
							w52 = -256;
						} else {
							w52 = -256;
						}
					} else {
						if (hops < 5) {
							w52 = 0;
						} else {
							w52 = -256;
						}
					}
				} else {
					if (rel_time < 4509) {
						if (hops < 3) {
							w52 = 0;
						} else {
							w52 = 256;
						}
					} else {
						if (rel_time < 5348) {
							w52 = 0;
						} else {
							w52 = 0;
						}
					}
				}
			}
		}
	}
	int w53;
	if (rel_time < 9585) {
		if (rel_time < 9311) {
			if (rel_time < 9034) {
				if (rel_time < 8862) {
					if (rel_time < 8586) {
						if (rel_time < 8207) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					} else {
						if (prod == 1) {
							w53 = 0;
						} else {
							w53 = -256;
						}
					}
				} else {
					if (prod == 1) {
						if (prod == 3) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					} else {
						if (rel_time < 8911) {
							w53 = 0;
						} else {
							w53 = 512;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (prod == 0) {
						if (prod == 2) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					} else {
						if (rel_time < 9139) {
							w53 = 0;
						} else {
							w53 = 256;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 9186) {
							w53 = 0;
						} else {
							w53 = -256;
						}
					} else {
						if (rel_time < 9186) {
							w53 = -256;
						} else {
							w53 = -256;
						}
					}
				}
			}
		} else {
			if (prod == 1) {
				if (prod == 3) {
					if (prod == 4) {
						if (rel_time < 9514) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					} else {
						if (rel_time < 9414) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w53 = 0;
					} else {
						if (hops < 3) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 9464) {
						w53 = 256;
					} else {
						if (hops < 2) {
							w53 = 256;
						} else {
							w53 = 256;
						}
					}
				} else {
					if (hops < 5) {
						w53 = 256;
					} else {
						w53 = 256;
					}
				}
			}
		}
	} else {
		if (prod == 1) {
			if (rel_time < 9789) {
				if (prod == 4) {
					if (rel_time < 9739) {
						if (rel_time < 9688) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					} else {
						if (hops < 3) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					} else {
						w53 = 0;
					}
				}
			} else {
				if (rel_time < 9844) {
					if (prod == 2) {
						if (hops < 2) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					} else {
						if (hops < 3) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					}
				} else {
					if (rel_time < 9965) {
						if (prod == 3) {
							w53 = 0;
						} else {
							w53 = -512;
						}
					} else {
						if (rel_time < 10064) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 9789) {
				if (hops < 5) {
					if (hops < 4) {
						if (hops < 3) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					} else {
						if (rel_time < 9739) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					}
				} else {
					w53 = 0;
				}
			} else {
				if (rel_time < 10064) {
					if (rel_time < 10015) {
						if (hops < 3) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					} else {
						if (hops < 4) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 10286) {
							w53 = 0;
						} else {
							w53 = 0;
						}
					} else {
						w53 = 0;
					}
				}
			}
		}
	}
	int w54;
	if (rel_time < 7836) {
		if (rel_time < 7760) {
			if (rel_time < 7510) {
				if (rel_time < 7237) {
					if (rel_time < 6777) {
						if (rel_time < 6683) {
							w54 = 0;
						} else {
							w54 = 0;
						}
					} else {
						if (prod == 2) {
							w54 = 0;
						} else {
							w54 = 256;
						}
					}
				} else {
					if (prod == 4) {
						if (prod == 2) {
							w54 = 256;
						} else {
							w54 = 0;
						}
					} else {
						if (hops < 3) {
							w54 = 0;
						} else {
							w54 = 0;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (prod == 4) {
						if (rel_time < 7654) {
							w54 = -256;
						} else {
							w54 = 0;
						}
					} else {
						if (rel_time < 7654) {
							w54 = 0;
						} else {
							w54 = 0;
						}
					}
				} else {
					if (rel_time < 7559) {
						w54 = 256;
					} else {
						if (hops < 2) {
							w54 = 256;
						} else {
							w54 = 256;
						}
					}
				}
			}
		} else {
			if (prod == 1) {
				if (hops < 3) {
					if (hops < 2) {
						w54 = -256;
					} else {
						w54 = -256;
					}
				} else {
					w54 = -256;
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w54 = 256;
					} else {
						w54 = 256;
					}
				} else {
					if (hops < 5) {
						w54 = 256;
					} else {
						w54 = 256;
					}
				}
			}
		}
	} else {
		if (rel_time < 7882) {
			if (prod == 2) {
				if (hops < 2) {
					w54 = 0;
				} else {
					w54 = 0;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w54 = -256;
					} else {
						w54 = -256;
					}
				} else {
					if (hops < 4) {
						w54 = -256;
					} else {
						w54 = -256;
					}
				}
			}
		} else {
			if (prod == 1) {
				if (rel_time < 8158) {
					if (prod == 4) {
						if (rel_time < 8111) {
							w54 = 0;
						} else {
							w54 = 0;
						}
					} else {
						if (rel_time < 7931) {
							w54 = 0;
						} else {
							w54 = 0;
						}
					}
				} else {
					if (rel_time < 8207) {
						if (prod == 3) {
							w54 = 0;
						} else {
							w54 = 0;
						}
					} else {
						if (rel_time < 8712) {
							w54 = 0;
						} else {
							w54 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8111) {
					if (hops < 5) {
						if (hops < 4) {
							w54 = -256;
						} else {
							w54 = -256;
						}
					} else {
						w54 = -256;
					}
				} else {
					if (rel_time < 8435) {
						if (rel_time < 8365) {
							w54 = 0;
						} else {
							w54 = 256;
						}
					} else {
						if (rel_time < 8712) {
							w54 = 0;
						} else {
							w54 = 0;
						}
					}
				}
			}
		}
	}
	int w55;
	if (cons == 1) {
		if (rel_time < 3368) {
			if (rel_time < 3221) {
				if (rel_time < 3072) {
					if (rel_time < 2984) {
						if (rel_time < 2954) {
							w55 = 0;
						} else {
							w55 = 0;
						}
					} else {
						if (hops < 2) {
							w55 = 0;
						} else {
							w55 = 0;
						}
					}
				} else {
					if (cons == 3) {
						if (rel_time < 3132) {
							w55 = 0;
						} else {
							w55 = 0;
						}
					} else {
						if (hops < 2) {
							w55 = 256;
						} else {
							w55 = 256;
						}
					}
				}
			} else {
				if (cons == 4) {
					if (cons == 0) {
						if (rel_time < 3339) {
							w55 = -256;
						} else {
							w55 = 0;
						}
					} else {
						if (hops < 4) {
							w55 = 0;
						} else {
							w55 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w55 = 0;
					} else {
						if (hops < 4) {
							w55 = 0;
						} else {
							w55 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3398) {
				if (hops < 4) {
					if (hops < 2) {
						w55 = 256;
					} else {
						if (hops < 3) {
							w55 = 256;
						} else {
							w55 = 256;
						}
					}
				} else {
					if (hops < 5) {
						if (cons == 3) {
							w55 = -256;
						} else {
							w55 = 256;
						}
					} else {
						w55 = 256;
					}
				}
			} else {
				if (cons == 2) {
					if (cons == 0) {
						if (rel_time < 3663) {
							w55 = 0;
						} else {
							w55 = 0;
						}
					} else {
						if (hops < 2) {
							w55 = 0;
						} else {
							w55 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w55 = 0;
						} else {
							w55 = 0;
						}
					} else {
						w55 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 3339) {
			if (rel_time < 3191) {
				if (rel_time < 3043) {
					if (rel_time < 2895) {
						if (rel_time < 2747) {
							w55 = 0;
						} else {
							w55 = 0;
						}
					} else {
						if (hops < 2) {
							w55 = 0;
						} else {
							w55 = 256;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w55 = -256;
						} else {
							w55 = 0;
						}
					} else {
						w55 = -256;
					}
				}
			} else {
				if (hops < 2) {
					w55 = 256;
				} else {
					if (hops < 5) {
						if (rel_time < 3310) {
							w55 = 256;
						} else {
							w55 = 0;
						}
					} else {
						w55 = 256;
					}
				}
			}
		} else {
			if (hops < 2) {
				w55 = -256;
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w55 = 0;
					} else {
						w55 = -256;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 3458) {
							w55 = -512;
						} else {
							w55 = 0;
						}
					} else {
						w55 = -256;
					}
				}
			}
		}
	}
	int w56;
	if (rel_time < 318) {
		if (rel_time < 68) {
			if (hops < 4) {
				if (hops < 2) {
					w56 = 0;
				} else {
					if (hops < 3) {
						w56 = 0;
					} else {
						w56 = 0;
					}
				}
			} else {
				if (hops < 5) {
					w56 = 0;
				} else {
					w56 = 0;
				}
			}
		} else {
			if (cons == 2) {
				if (hops < 3) {
					if (rel_time < 182) {
						if (hops < 2) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					} else {
						if (hops < 2) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					}
				} else {
					if (cons == 4) {
						if (hops < 5) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					} else {
						w56 = 256;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w56 = 0;
					} else {
						if (rel_time < 182) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					}
				} else {
					if (hops < 5) {
						w56 = 0;
					} else {
						w56 = 0;
					}
				}
			}
		}
	} else {
		if (cons == 1) {
			if (rel_time < 611) {
				if (cons == 2) {
					if (rel_time < 398) {
						if (hops < 4) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					} else {
						if (hops < 3) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w56 = 0;
					} else {
						if (hops < 4) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					}
				}
			} else {
				if (rel_time < 682) {
					if (hops < 4) {
						if (hops < 2) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					} else {
						if (hops < 5) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					}
				} else {
					if (rel_time < 735) {
						if (hops < 4) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					} else {
						if (rel_time < 880) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3339) {
				if (rel_time < 3191) {
					if (rel_time < 3043) {
						if (rel_time < 2895) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					} else {
						if (hops < 4) {
							w56 = 0;
						} else {
							w56 = -256;
						}
					}
				} else {
					if (hops < 2) {
						w56 = 0;
					} else {
						if (hops < 5) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w56 = -256;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					} else {
						if (hops < 5) {
							w56 = 0;
						} else {
							w56 = 0;
						}
					}
				}
			}
		}
	}
	int w57;
	if (rel_time < 2570) {
		if (rel_time < 2421) {
			if (rel_time < 2332) {
				if (rel_time < 2184) {
					if (rel_time < 1917) {
						if (rel_time < 1888) {
							w57 = 0;
						} else {
							w57 = 256;
						}
					} else {
						if (cons == 3) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					}
				} else {
					if (cons == 1) {
						if (cons == 4) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					} else {
						if (hops < 5) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					}
				}
			} else {
				if (cons == 4) {
					if (rel_time < 2361) {
						if (hops < 5) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					} else {
						if (hops < 2) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					} else {
						w57 = 0;
					}
				}
			}
		} else {
			if (cons == 4) {
				if (cons == 2) {
					if (rel_time < 2509) {
						if (hops < 2) {
							w57 = 256;
						} else {
							w57 = 0;
						}
					} else {
						if (hops < 3) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w57 = 0;
					} else {
						if (hops < 5) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w57 = 0;
				} else {
					if (rel_time < 2509) {
						w57 = -256;
					} else {
						if (hops < 5) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2717) {
			if (cons == 3) {
				if (rel_time < 2599) {
					if (hops < 2) {
						w57 = -256;
					} else {
						if (hops < 5) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					}
				} else {
					if (cons == 0) {
						if (hops < 4) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					} else {
						if (hops < 2) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w57 = -256;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					} else {
						w57 = 0;
					}
				}
			}
		} else {
			if (rel_time < 2747) {
				if (hops < 2) {
					w57 = 0;
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					} else {
						w57 = 0;
					}
				}
			} else {
				if (rel_time < 2866) {
					if (cons == 2) {
						if (cons == 3) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					} else {
						if (hops < 2) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					}
				} else {
					if (rel_time < 2954) {
						if (cons == 2) {
							w57 = -256;
						} else {
							w57 = 0;
						}
					} else {
						if (cons == 3) {
							w57 = 0;
						} else {
							w57 = 0;
						}
					}
				}
			}
		}
	}
	int w58;
	if (rel_time < 7836) {
		if (rel_time < 7760) {
			if (rel_time < 7510) {
				if (rel_time < 7054) {
					if (rel_time < 6960) {
						if (rel_time < 6829) {
							w58 = 0;
						} else {
							w58 = 0;
						}
					} else {
						if (prod == 2) {
							w58 = -256;
						} else {
							w58 = 0;
						}
					}
				} else {
					if (prod == 1) {
						if (prod == 4) {
							w58 = 0;
						} else {
							w58 = 0;
						}
					} else {
						if (rel_time < 7237) {
							w58 = 1536;
						} else {
							w58 = 0;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (prod == 4) {
						if (rel_time < 7559) {
							w58 = -256;
						} else {
							w58 = 0;
						}
					} else {
						if (rel_time < 7654) {
							w58 = 0;
						} else {
							w58 = 0;
						}
					}
				} else {
					if (rel_time < 7559) {
						if (hops < 2) {
							w58 = 256;
						} else {
							w58 = 256;
						}
					} else {
						if (hops < 4) {
							w58 = 0;
						} else {
							w58 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 1) {
				if (prod == 0) {
					w58 = -256;
				} else {
					w58 = -256;
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w58 = 256;
					} else {
						w58 = 256;
					}
				} else {
					if (hops < 5) {
						w58 = 0;
					} else {
						w58 = 256;
					}
				}
			}
		}
	} else {
		if (rel_time < 7882) {
			if (prod == 2) {
				if (hops < 2) {
					w58 = 0;
				} else {
					w58 = 0;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w58 = 0;
					} else {
						w58 = -256;
					}
				} else {
					if (hops < 4) {
						w58 = 0;
					} else {
						if (hops < 5) {
							w58 = 0;
						} else {
							w58 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 1) {
				if (rel_time < 8158) {
					if (prod == 4) {
						if (rel_time < 8111) {
							w58 = 0;
						} else {
							w58 = 0;
						}
					} else {
						if (rel_time < 7931) {
							w58 = 0;
						} else {
							w58 = 0;
						}
					}
				} else {
					if (rel_time < 8435) {
						if (prod == 4) {
							w58 = 0;
						} else {
							w58 = 0;
						}
					} else {
						if (rel_time < 8712) {
							w58 = 0;
						} else {
							w58 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8111) {
					if (hops < 2) {
						w58 = 0;
					} else {
						if (hops < 5) {
							w58 = 0;
						} else {
							w58 = 0;
						}
					}
				} else {
					if (rel_time < 8970) {
						if (rel_time < 8911) {
							w58 = 0;
						} else {
							w58 = 256;
						}
					} else {
						if (rel_time < 9239) {
							w58 = 0;
						} else {
							w58 = 0;
						}
					}
				}
			}
		}
	}
	int w59;
	if (prod == 3) {
		if (rel_time < 5023) {
			if (rel_time < 4599) {
				if (rel_time < 4509) {
					if (prod == 0) {
						if (rel_time < 4232) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					} else {
						if (rel_time < 4232) {
							w59 = 0;
						} else {
							w59 = -256;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 4554) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					} else {
						if (rel_time < 4554) {
							w59 = -256;
						} else {
							w59 = 0;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (rel_time < 4977) {
						if (prod == 1) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					} else {
						if (prod == 0) {
							w59 = 256;
						} else {
							w59 = -256;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					} else {
						w59 = 256;
					}
				}
			}
		} else {
			if (rel_time < 5300) {
				if (prod == 0) {
					if (rel_time < 5254) {
						if (prod == 1) {
							w59 = 0;
						} else {
							w59 = 512;
						}
					} else {
						if (hops < 5) {
							w59 = -512;
						} else {
							w59 = -256;
						}
					}
				} else {
					if (hops < 2) {
						w59 = 256;
					} else {
						w59 = 256;
					}
				}
			} else {
				if (rel_time < 5430) {
					if (prod == 1) {
						if (rel_time < 5348) {
							w59 = 256;
						} else {
							w59 = 512;
						}
					} else {
						if (hops < 5) {
							w59 = -256;
						} else {
							w59 = -256;
						}
					}
				} else {
					if (rel_time < 5707) {
						if (prod == 1) {
							w59 = 0;
						} else {
							w59 = 256;
						}
					} else {
						if (rel_time < 6084) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4322) {
			if (rel_time < 4044) {
				if (rel_time < 3751) {
					if (hops < 3) {
						if (hops < 2) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					} else {
						if (hops < 4) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					} else {
						w59 = 0;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 4277) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					} else {
						if (rel_time < 4277) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w59 = 0;
					} else {
						if (hops < 5) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 4599) {
				if (rel_time < 4554) {
					if (hops < 3) {
						w59 = 256;
					} else {
						w59 = 256;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					} else {
						if (hops < 5) {
							w59 = 256;
						} else {
							w59 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4876) {
					if (rel_time < 4831) {
						w59 = -256;
					} else {
						if (hops < 4) {
							w59 = 0;
						} else {
							w59 = -256;
						}
					}
				} else {
					if (rel_time < 5152) {
						if (hops < 5) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					} else {
						if (rel_time < 5430) {
							w59 = 0;
						} else {
							w59 = 0;
						}
					}
				}
			}
		}
	}
	int w60;
	if (rel_time < 1681) {
		if (rel_time < 1533) {
			if (rel_time < 1385) {
				if (rel_time < 1237) {
					if (rel_time < 1031) {
						if (rel_time < 880) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					} else {
						if (cons == 3) {
							w60 = 0;
						} else {
							w60 = -256;
						}
					}
				} else {
					if (hops < 2) {
						if (cons == 2) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					} else {
						if (cons == 4) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					}
				}
			} else {
				if (cons == 3) {
					if (rel_time < 1414) {
						if (hops < 2) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					} else {
						if (cons == 0) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					} else {
						w60 = -256;
					}
				}
			}
		} else {
			if (cons == 3) {
				if (rel_time < 1562) {
					if (hops < 3) {
						if (hops < 2) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					} else {
						if (hops < 5) {
							w60 = 256;
						} else {
							w60 = 256;
						}
					}
				} else {
					if (rel_time < 1621) {
						if (hops < 4) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					} else {
						if (cons == 1) {
							w60 = 0;
						} else {
							w60 = -1024;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w60 = 0;
					} else {
						w60 = 0;
					}
				} else {
					if (hops < 5) {
						w60 = 256;
					} else {
						w60 = 256;
					}
				}
			}
		}
	} else {
		if (rel_time < 1769) {
			if (cons == 2) {
				if (cons == 3) {
					if (hops < 2) {
						w60 = -256;
					} else {
						if (hops < 3) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w60 = -256;
					} else {
						if (hops < 4) {
							w60 = -256;
						} else {
							w60 = 0;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					} else {
						if (rel_time < 1710) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					}
				} else {
					if (hops < 5) {
						w60 = 0;
					} else {
						w60 = 0;
					}
				}
			}
		} else {
			if (rel_time < 1859) {
				if (cons == 1) {
					if (hops < 4) {
						if (cons == 4) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					} else {
						if (cons == 0) {
							w60 = -256;
						} else {
							w60 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					} else {
						if (hops < 4) {
							w60 = 256;
						} else {
							w60 = 0;
						}
					}
				}
			} else {
				if (rel_time < 1888) {
					if (hops < 3) {
						if (hops < 2) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					} else {
						if (hops < 4) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					}
				} else {
					if (rel_time < 1917) {
						if (hops < 2) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					} else {
						if (rel_time < 2096) {
							w60 = 0;
						} else {
							w60 = 0;
						}
					}
				}
			}
		}
	}
	int w61;
	if (rel_time < 2570) {
		if (rel_time < 2421) {
			if (rel_time < 2332) {
				if (rel_time < 2096) {
					if (rel_time < 2036) {
						if (rel_time < 1681) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					} else {
						if (cons == 3) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					}
				} else {
					if (cons == 0) {
						if (rel_time < 2155) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					} else {
						if (rel_time < 2155) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					}
				}
			} else {
				if (cons == 4) {
					if (rel_time < 2361) {
						if (hops < 4) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					} else {
						if (hops < 5) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					} else {
						w61 = 0;
					}
				}
			}
		} else {
			if (cons == 4) {
				if (cons == 2) {
					if (rel_time < 2509) {
						if (hops < 5) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					} else {
						if (cons == 0) {
							w61 = -512;
						} else {
							w61 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w61 = 0;
					} else {
						if (hops < 4) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w61 = 0;
				} else {
					if (rel_time < 2509) {
						w61 = 0;
					} else {
						if (hops < 5) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2717) {
			if (cons == 3) {
				if (rel_time < 2599) {
					if (hops < 2) {
						w61 = 0;
					} else {
						if (hops < 5) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					}
				} else {
					if (cons == 0) {
						if (rel_time < 2688) {
							w61 = 0;
						} else {
							w61 = 768;
						}
					} else {
						if (hops < 2) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w61 = 0;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					} else {
						if (hops < 5) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2747) {
				if (hops < 2) {
					w61 = 0;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					} else {
						w61 = 0;
					}
				}
			} else {
				if (rel_time < 2866) {
					if (cons == 2) {
						if (cons == 4) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					} else {
						if (hops < 2) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					}
				} else {
					if (rel_time < 2954) {
						if (cons == 3) {
							w61 = 0;
						} else {
							w61 = -256;
						}
					} else {
						if (rel_time < 3043) {
							w61 = 0;
						} else {
							w61 = 0;
						}
					}
				}
			}
		}
	}
	int w62;
	if (cons == 1) {
		if (rel_time < 3955) {
			if (rel_time < 3910) {
				if (prod == 2) {
					if (prod == 5) {
						if (rel_time < 3663) {
							w62 = 0;
						} else {
							w62 = 0;
						}
					} else {
						if (rel_time < 3368) {
							w62 = 0;
						} else {
							w62 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w62 = 256;
						} else {
							w62 = -512;
						}
					} else {
						if (hops < 5) {
							w62 = 512;
						} else {
							w62 = 768;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (hops < 2) {
						w62 = -512;
					} else {
						w62 = -256;
					}
				} else {
					if (hops < 2) {
						w62 = 0;
					} else {
						if (hops < 4) {
							w62 = 0;
						} else {
							w62 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3999) {
				if (prod == 2) {
					if (hops < 2) {
						w62 = 0;
					} else {
						if (hops < 3) {
							w62 = 0;
						} else {
							w62 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w62 = 0;
						} else {
							w62 = 0;
						}
					} else {
						w62 = -256;
					}
				}
			} else {
				if (prod == 1) {
					if (rel_time < 4277) {
						if (prod == 4) {
							w62 = 0;
						} else {
							w62 = 0;
						}
					} else {
						if (rel_time < 4554) {
							w62 = 0;
						} else {
							w62 = 0;
						}
					}
				} else {
					if (rel_time < 4232) {
						if (hops < 3) {
							w62 = 0;
						} else {
							w62 = 0;
						}
					} else {
						if (rel_time < 5107) {
							w62 = 0;
						} else {
							w62 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3339) {
			if (rel_time < 3191) {
				if (rel_time < 3043) {
					if (rel_time < 2895) {
						if (hops < 4) {
							w62 = 0;
						} else {
							w62 = 0;
						}
					} else {
						if (hops < 2) {
							w62 = 0;
						} else {
							w62 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w62 = 0;
					} else {
						if (hops < 3) {
							w62 = 0;
						} else {
							w62 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w62 = 0;
				} else {
					if (hops < 5) {
						if (rel_time < 3310) {
							w62 = 256;
						} else {
							w62 = 0;
						}
					} else {
						w62 = 0;
					}
				}
			}
		} else {
			if (hops < 2) {
				w62 = 0;
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w62 = 0;
					} else {
						w62 = 0;
					}
				} else {
					if (hops < 5) {
						if (rel_time < 3458) {
							w62 = -256;
						} else {
							w62 = 0;
						}
					} else {
						w62 = 0;
					}
				}
			}
		}
	}
	int w63;
	if (rel_time < 2570) {
		if (rel_time < 2421) {
			if (rel_time < 2332) {
				if (rel_time < 2184) {
					if (rel_time < 1681) {
						if (rel_time < 1533) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					} else {
						if (rel_time < 1769) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					}
				} else {
					if (cons == 1) {
						if (cons == 4) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					} else {
						if (hops < 2) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					}
				}
			} else {
				if (cons == 4) {
					if (rel_time < 2361) {
						if (hops < 5) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					} else {
						if (hops < 2) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					} else {
						w63 = 0;
					}
				}
			}
		} else {
			if (cons == 1) {
				if (cons == 3) {
					if (rel_time < 2540) {
						if (hops < 2) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					} else {
						if (hops < 3) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w63 = 0;
					} else {
						if (hops < 5) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w63 = 0;
				} else {
					if (hops < 5) {
						if (rel_time < 2480) {
							w63 = 0;
						} else {
							w63 = -512;
						}
					} else {
						w63 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 2717) {
			if (cons == 2) {
				if (rel_time < 2657) {
					if (hops < 2) {
						if (rel_time < 2599) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					} else {
						if (cons == 3) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					}
				} else {
					if (hops < 2) {
						if (cons == 0) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					} else {
						if (hops < 5) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2599) {
					w63 = 256;
				} else {
					if (hops < 2) {
						w63 = 0;
					} else {
						if (hops < 3) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2747) {
				if (hops < 5) {
					if (hops < 2) {
						w63 = 0;
					} else {
						if (cons == 1) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					}
				} else {
					w63 = 0;
				}
			} else {
				if (rel_time < 3368) {
					if (rel_time < 3339) {
						if (rel_time < 3221) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					} else {
						if (hops < 2) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					}
				} else {
					if (rel_time < 3398) {
						if (hops < 4) {
							w63 = 256;
						} else {
							w63 = 0;
						}
					} else {
						if (cons == 1) {
							w63 = 0;
						} else {
							w63 = 0;
						}
					}
				}
			}
		}
	}
	int w64;
	if (cons == 2) {
		if (rel_time < 929) {
			if (rel_time < 783) {
				if (rel_time < 469) {
					if (cons == 4) {
						if (rel_time < 68) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					} else {
						if (hops < 4) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					}
				} else {
					if (cons == 4) {
						if (hops < 2) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					} else {
						if (hops < 4) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 832) {
						if (hops < 3) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					} else {
						if (hops < 2) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					}
				} else {
					if (rel_time < 880) {
						if (rel_time < 832) {
							w64 = 0;
						} else {
							w64 = 512;
						}
					} else {
						if (hops < 5) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 1237) {
				if (cons == 1) {
					if (cons == 3) {
						if (size < 38) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					} else {
						if (hops < 4) {
							w64 = -256;
						} else {
							w64 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w64 = -256;
						} else {
							w64 = 0;
						}
					} else {
						if (rel_time < 1031) {
							w64 = -768;
						} else {
							w64 = 0;
						}
					}
				}
			} else {
				if (rel_time < 1385) {
					if (cons == 4) {
						if (hops < 4) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					} else {
						if (hops < 2) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					}
				} else {
					if (rel_time < 1473) {
						if (hops < 5) {
							w64 = 0;
						} else {
							w64 = -256;
						}
					} else {
						if (rel_time < 1621) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3368) {
			if (rel_time < 2954) {
				if (rel_time < 2806) {
					if (rel_time < 2657) {
						if (rel_time < 2184) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					} else {
						if (hops < 5) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w64 = 256;
					} else {
						if (hops < 5) {
							w64 = 0;
						} else {
							w64 = 256;
						}
					}
				}
			} else {
				if (rel_time < 3072) {
					if (hops < 3) {
						if (hops < 2) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					} else {
						if (hops < 5) {
							w64 = -256;
						} else {
							w64 = 0;
						}
					}
				} else {
					if (rel_time < 3221) {
						if (hops < 2) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					} else {
						if (hops < 3) {
							w64 = 0;
						} else {
							w64 = 0;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w64 = 0;
					} else {
						w64 = 0;
					}
				} else {
					w64 = 0;
				}
			} else {
				if (hops < 5) {
					w64 = 0;
				} else {
					w64 = 0;
				}
			}
		}
	}
	int w65;
	if (rel_time < 10118) {
		if (rel_time < 10064) {
			if (prod == 2) {
				if (rel_time < 9585) {
					if (rel_time < 9464) {
						if (rel_time < 6502) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					} else {
						if (rel_time < 9514) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					}
				} else {
					if (rel_time < 9844) {
						if (prod == 0) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					} else {
						if (prod == 3) {
							w65 = 0;
						} else {
							w65 = -256;
						}
					}
				}
			} else {
				if (rel_time < 3707) {
					if (hops < 4) {
						if (hops < 3) {
							w65 = 0;
						} else {
							w65 = -256;
						}
					} else {
						if (hops < 5) {
							w65 = 256;
						} else {
							w65 = 512;
						}
					}
				} else {
					if (rel_time < 3999) {
						if (rel_time < 3955) {
							w65 = -256;
						} else {
							w65 = 0;
						}
					} else {
						if (rel_time < 4277) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 2) {
				if (hops < 2) {
					w65 = 0;
				} else {
					if (hops < 3) {
						w65 = 0;
					} else {
						if (hops < 4) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w65 = 0;
					} else {
						w65 = 0;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					} else {
						w65 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 10239) {
			if (prod == 4) {
				if (prod == 0) {
					if (hops < 3) {
						w65 = 0;
					} else {
						if (hops < 4) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					}
				} else {
					w65 = 256;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w65 = 0;
					} else {
						w65 = 0;
					}
				} else {
					if (hops < 5) {
						w65 = 0;
					} else {
						w65 = 0;
					}
				}
			}
		} else {
			if (prod == 3) {
				if (prod == 1) {
					if (hops < 2) {
						if (rel_time < 10286) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					} else {
						if (rel_time < 10286) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 10286) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					} else {
						if (hops < 5) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 10379) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					} else {
						if (rel_time < 10379) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					}
				} else {
					if (rel_time < 10379) {
						if (hops < 5) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					} else {
						if (hops < 5) {
							w65 = 0;
						} else {
							w65 = 0;
						}
					}
				}
			}
		}
	}
	int w66;
	if (cons == 2) {
		if (rel_time < 929) {
			if (rel_time < 783) {
				if (rel_time < 469) {
					if (cons == 4) {
						if (cons == 0) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					} else {
						if (hops < 4) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					}
				} else {
					if (rel_time < 682) {
						if (hops < 4) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					} else {
						if (cons == 1) {
							w66 = 0;
						} else {
							w66 = 1536;
						}
					}
				}
			} else {
				if (cons == 4) {
					if (hops < 2) {
						if (rel_time < 832) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					} else {
						if (hops < 3) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					}
				} else {
					w66 = -512;
				}
			}
		} else {
			if (rel_time < 1829) {
				if (rel_time < 1681) {
					if (rel_time < 1533) {
						if (rel_time < 1385) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					} else {
						if (rel_time < 1621) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					}
				} else {
					if (rel_time < 1769) {
						if (cons == 3) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					} else {
						if (hops < 3) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					}
				}
			} else {
				if (rel_time < 1917) {
					if (hops < 3) {
						if (rel_time < 1859) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					} else {
						if (hops < 4) {
							w66 = 256;
						} else {
							w66 = 0;
						}
					}
				} else {
					if (rel_time < 2065) {
						if (cons == 1) {
							w66 = 0;
						} else {
							w66 = -256;
						}
					} else {
						if (rel_time < 2213) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3368) {
			if (rel_time < 2954) {
				if (rel_time < 2806) {
					if (rel_time < 2332) {
						if (rel_time < 2184) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					} else {
						if (hops < 2) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w66 = 0;
					} else {
						if (hops < 5) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3072) {
					if (hops < 3) {
						if (hops < 2) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					} else {
						if (hops < 5) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					}
				} else {
					if (rel_time < 3221) {
						if (hops < 4) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					} else {
						if (hops < 2) {
							w66 = 0;
						} else {
							w66 = 0;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w66 = 0;
					} else {
						w66 = 0;
					}
				} else {
					w66 = 0;
				}
			} else {
				if (hops < 5) {
					w66 = 0;
				} else {
					w66 = 0;
				}
			}
		}
	}
	int w67;
	if (hops < 3) {
		if (cons == 4) {
			if (rel_time < 1031) {
				if (rel_time < 880) {
					if (rel_time < 611) {
						if (rel_time < 540) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					} else {
						if (cons == 1) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 929) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					} else {
						if (rel_time < 929) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					}
				}
			} else {
				if (rel_time < 1080) {
					w67 = 0;
				} else {
					if (rel_time < 1128) {
						if (hops < 2) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					} else {
						if (rel_time < 1207) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3458) {
				if (rel_time < 3281) {
					if (rel_time < 2836) {
						if (rel_time < 1829) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					} else {
						if (rel_time < 2984) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w67 = 0;
					} else {
						w67 = 0;
					}
				}
			} else {
				if (hops < 2) {
					w67 = 0;
				} else {
					w67 = 0;
				}
			}
		}
	} else {
		if (prod == 2) {
			if (rel_time < 3910) {
				if (rel_time < 3619) {
					if (rel_time < 3522) {
						if (rel_time < 2866) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					} else {
						if (hops < 4) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (prod == 0) {
							w67 = 0;
						} else {
							w67 = -256;
						}
					} else {
						if (prod == 0) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3955) {
					if (hops < 4) {
						w67 = 0;
					} else {
						if (hops < 5) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 9688) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					} else {
						if (rel_time < 6960) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 6777) {
				if (rel_time < 6730) {
					if (rel_time < 6225) {
						if (rel_time < 5430) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					} else {
						if (rel_time < 6502) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w67 = -256;
					} else {
						if (hops < 5) {
							w67 = -256;
						} else {
							w67 = -256;
						}
					}
				}
			} else {
				if (rel_time < 7054) {
					if (rel_time < 7007) {
						if (hops < 4) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					} else {
						if (hops < 4) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					}
				} else {
					if (rel_time < 7283) {
						w67 = -256;
					} else {
						if (rel_time < 7330) {
							w67 = 0;
						} else {
							w67 = 0;
						}
					}
				}
			}
		}
	}
	int w68;
	if (hops < 5) {
		if (prod == 1) {
			if (rel_time < 6084) {
				if (rel_time < 5981) {
					if (rel_time < 5900) {
						if (rel_time < 5807) {
							w68 = 0;
						} else {
							w68 = 0;
						}
					} else {
						if (prod == 2) {
							w68 = 0;
						} else {
							w68 = 256;
						}
					}
				} else {
					if (prod == 0) {
						if (hops < 4) {
							w68 = 256;
						} else {
							w68 = 0;
						}
					} else {
						w68 = -512;
					}
				}
			} else {
				if (rel_time < 6177) {
					if (rel_time < 6131) {
						if (hops < 4) {
							w68 = -256;
						} else {
							w68 = 0;
						}
					} else {
						if (hops < 3) {
							w68 = 0;
						} else {
							w68 = 0;
						}
					}
				} else {
					if (rel_time < 6454) {
						if (prod == 4) {
							w68 = 0;
						} else {
							w68 = -256;
						}
					} else {
						if (rel_time < 6502) {
							w68 = 0;
						} else {
							w68 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 7007) {
				if (rel_time < 6730) {
					if (rel_time < 6454) {
						if (rel_time < 6177) {
							w68 = 0;
						} else {
							w68 = 0;
						}
					} else {
						if (rel_time < 6683) {
							w68 = 512;
						} else {
							w68 = 0;
						}
					}
				} else {
					if (rel_time < 6960) {
						w68 = -1536;
					} else {
						if (hops < 3) {
							w68 = 0;
						} else {
							w68 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7237) {
					w68 = 1024;
				} else {
					if (rel_time < 7283) {
						if (hops < 3) {
							w68 = 0;
						} else {
							w68 = 0;
						}
					} else {
						if (rel_time < 7559) {
							w68 = 0;
						} else {
							w68 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1031) {
			if (rel_time < 832) {
				if (rel_time < 735) {
					if (rel_time < 469) {
						if (cons == 1) {
							w68 = 0;
						} else {
							w68 = 0;
						}
					} else {
						if (rel_time < 540) {
							w68 = 0;
						} else {
							w68 = 0;
						}
					}
				} else {
					if (rel_time < 783) {
						w68 = 0;
					} else {
						w68 = 0;
					}
				}
			} else {
				if (rel_time < 982) {
					if (cons == 3) {
						if (rel_time < 880) {
							w68 = 0;
						} else {
							w68 = 0;
						}
					} else {
						if (rel_time < 880) {
							w68 = 256;
						} else {
							w68 = 0;
						}
					}
				} else {
					w68 = 0;
				}
			}
		} else {
			if (rel_time < 1207) {
				if (cons == 4) {
					if (cons == 2) {
						if (rel_time < 1080) {
							w68 = 0;
						} else {
							w68 = 0;
						}
					} else {
						w68 = 256;
					}
				} else {
					w68 = 512;
				}
			} else {
				if (rel_time < 1237) {
					w68 = 0;
				} else {
					if (rel_time < 1266) {
						w68 = 0;
					} else {
						if (rel_time < 1295) {
							w68 = 0;
						} else {
							w68 = 0;
						}
					}
				}
			}
		}
	}
	int w69;
	if (prod == 3) {
		if (rel_time < 6829) {
			if (rel_time < 6730) {
				if (rel_time < 6361) {
					if (rel_time < 6177) {
						if (rel_time < 5023) {
							w69 = 0;
						} else {
							w69 = 0;
						}
					} else {
						if (prod == 0) {
							w69 = 0;
						} else {
							w69 = 256;
						}
					}
				} else {
					if (prod == 4) {
						if (rel_time < 6502) {
							w69 = 0;
						} else {
							w69 = 0;
						}
					} else {
						if (hops < 3) {
							w69 = 256;
						} else {
							w69 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 6777) {
							w69 = -256;
						} else {
							w69 = 0;
						}
					} else {
						if (rel_time < 6777) {
							w69 = -256;
						} else {
							w69 = -256;
						}
					}
				} else {
					if (hops < 4) {
						w69 = 0;
					} else {
						if (hops < 5) {
							w69 = 0;
						} else {
							w69 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 7104) {
				if (prod == 1) {
					if (prod == 2) {
						if (rel_time < 6960) {
							w69 = 0;
						} else {
							w69 = 256;
						}
					} else {
						if (rel_time < 7007) {
							w69 = 0;
						} else {
							w69 = 0;
						}
					}
				} else {
					if (rel_time < 6960) {
						w69 = -1024;
					} else {
						if (hops < 3) {
							w69 = 0;
						} else {
							w69 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7559) {
					if (prod == 1) {
						if (rel_time < 7378) {
							w69 = 0;
						} else {
							w69 = 0;
						}
					} else {
						if (rel_time < 7237) {
							w69 = 768;
						} else {
							w69 = 0;
						}
					}
				} else {
					if (rel_time < 7836) {
						if (prod == 0) {
							w69 = 0;
						} else {
							w69 = 0;
						}
					} else {
						if (rel_time < 7931) {
							w69 = 0;
						} else {
							w69 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6829) {
			if (rel_time < 6637) {
				if (rel_time < 6361) {
					if (rel_time < 5981) {
						if (rel_time < 5707) {
							w69 = 0;
						} else {
							w69 = 0;
						}
					} else {
						if (rel_time < 6225) {
							w69 = 0;
						} else {
							w69 = 256;
						}
					}
				} else {
					if (rel_time < 6502) {
						if (hops < 2) {
							w69 = 0;
						} else {
							w69 = 0;
						}
					} else {
						w69 = -256;
					}
				}
			} else {
				if (rel_time < 6777) {
					if (hops < 3) {
						w69 = 256;
					} else {
						if (hops < 4) {
							w69 = 256;
						} else {
							w69 = 256;
						}
					}
				} else {
					w69 = 256;
				}
			}
		} else {
			if (rel_time < 7104) {
				if (rel_time < 7054) {
					if (hops < 3) {
						if (hops < 2) {
							w69 = -256;
						} else {
							w69 = 0;
						}
					} else {
						w69 = -256;
					}
				} else {
					if (hops < 3) {
						w69 = -256;
					} else {
						if (hops < 5) {
							w69 = -256;
						} else {
							w69 = -256;
						}
					}
				}
			} else {
				if (rel_time < 7378) {
					if (rel_time < 7330) {
						if (hops < 3) {
							w69 = 0;
						} else {
							w69 = 256;
						}
					} else {
						if (hops < 3) {
							w69 = 256;
						} else {
							w69 = 256;
						}
					}
				} else {
					if (rel_time < 7654) {
						if (hops < 3) {
							w69 = 0;
						} else {
							w69 = 0;
						}
					} else {
						if (rel_time < 8484) {
							w69 = 0;
						} else {
							w69 = 0;
						}
					}
				}
			}
		}
	}
	int w70;
	if (rel_time < 5300) {
		if (rel_time < 5254) {
			if (rel_time < 5107) {
				if (rel_time < 5023) {
					if (rel_time < 4977) {
						if (rel_time < 4831) {
							w70 = 0;
						} else {
							w70 = 0;
						}
					} else {
						if (prod == 0) {
							w70 = 256;
						} else {
							w70 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (hops < 4) {
							w70 = 256;
						} else {
							w70 = 256;
						}
					} else {
						if (hops < 4) {
							w70 = -256;
						} else {
							w70 = -256;
						}
					}
				}
			} else {
				if (prod == 4) {
					if (hops < 5) {
						if (hops < 4) {
							w70 = 0;
						} else {
							w70 = 0;
						}
					} else {
						w70 = 0;
					}
				} else {
					if (rel_time < 5152) {
						if (hops < 3) {
							w70 = -256;
						} else {
							w70 = -256;
						}
					} else {
						if (hops < 5) {
							w70 = 0;
						} else {
							w70 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (hops < 2) {
					w70 = -256;
				} else {
					if (hops < 5) {
						w70 = -256;
					} else {
						w70 = 0;
					}
				}
			} else {
				if (hops < 3) {
					w70 = 0;
				} else {
					if (hops < 4) {
						w70 = 0;
					} else {
						w70 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 5348) {
			if (prod == 1) {
				if (hops < 5) {
					if (hops < 2) {
						w70 = 256;
					} else {
						if (hops < 4) {
							w70 = 256;
						} else {
							w70 = 0;
						}
					}
				} else {
					w70 = 0;
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w70 = -256;
					} else {
						if (hops < 4) {
							w70 = -256;
						} else {
							w70 = -256;
						}
					}
				} else {
					w70 = 0;
				}
			}
		} else {
			if (prod == 0) {
				if (rel_time < 5577) {
					if (prod == 3) {
						if (prod == 2) {
							w70 = 0;
						} else {
							w70 = 768;
						}
					} else {
						if (hops < 2) {
							w70 = 0;
						} else {
							w70 = 0;
						}
					}
				} else {
					if (rel_time < 5981) {
						if (prod == 3) {
							w70 = 0;
						} else {
							w70 = 0;
						}
					} else {
						if (rel_time < 6131) {
							w70 = 0;
						} else {
							w70 = 0;
						}
					}
				}
			} else {
				if (rel_time < 5577) {
					if (hops < 2) {
						w70 = -512;
					} else {
						if (hops < 5) {
							w70 = 0;
						} else {
							w70 = -256;
						}
					}
				} else {
					if (rel_time < 5853) {
						if (hops < 4) {
							w70 = 256;
						} else {
							w70 = 0;
						}
					} else {
						if (rel_time < 6131) {
							w70 = -256;
						} else {
							w70 = 0;
						}
					}
				}
			}
		}
	}
	int w71;
	if (rel_time < 3310) {
		if (rel_time < 3221) {
			if (rel_time < 3014) {
				if (rel_time < 2866) {
					if (rel_time < 2717) {
						if (rel_time < 2570) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					} else {
						if (cons == 3) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					}
				} else {
					if (cons == 3) {
						if (rel_time < 2895) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					} else {
						if (hops < 2) {
							w71 = 0;
						} else {
							w71 = -256;
						}
					}
				}
			} else {
				if (cons == 3) {
					if (rel_time < 3043) {
						if (hops < 2) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					} else {
						if (rel_time < 3191) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					}
				} else {
					if (rel_time < 3132) {
						if (hops < 2) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					} else {
						w71 = -512;
					}
				}
			}
		} else {
			if (cons == 3) {
				if (cons == 0) {
					if (hops < 2) {
						w71 = 0;
					} else {
						if (hops < 4) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					} else {
						if (hops < 5) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w71 = -256;
					} else {
						if (hops < 3) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					}
				} else {
					if (hops < 5) {
						w71 = -256;
					} else {
						w71 = -256;
					}
				}
			}
		}
	} else {
		if (rel_time < 3398) {
			if (cons == 2) {
				if (cons == 3) {
					if (hops < 2) {
						w71 = 0;
					} else {
						if (rel_time < 3339) {
							w71 = 0;
						} else {
							w71 = -256;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					} else {
						if (hops < 5) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w71 = 0;
					} else {
						w71 = 0;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3339) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					} else {
						if (hops < 5) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3663) {
				if (prod == 0) {
					if (cons == 1) {
						if (prod == 1) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					} else {
						if (hops < 2) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					} else {
						if (hops < 5) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3955) {
					if (prod == 3) {
						if (hops < 3) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					} else {
						if (hops < 3) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					}
				} else {
					if (rel_time < 3999) {
						if (prod == 2) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					} else {
						if (rel_time < 4554) {
							w71 = 0;
						} else {
							w71 = 0;
						}
					}
				}
			}
		}
	}
	int w72;
	if (hops < 5) {
		if (rel_time < 7836) {
			if (rel_time < 7760) {
				if (prod == 1) {
					if (rel_time < 7283) {
						if (rel_time < 7104) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					} else {
						if (prod == 4) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					}
				} else {
					if (rel_time < 7283) {
						if (rel_time < 7007) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					} else {
						if (hops < 3) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (prod == 0) {
						w72 = 0;
					} else {
						if (hops < 3) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w72 = 0;
					} else {
						if (hops < 4) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 7882) {
				if (prod == 2) {
					if (hops < 2) {
						w72 = 0;
					} else {
						if (hops < 3) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					} else {
						if (hops < 4) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8207) {
					if (prod == 1) {
						if (prod == 2) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					} else {
						if (hops < 4) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					}
				} else {
					if (rel_time < 8365) {
						if (prod == 0) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					} else {
						if (rel_time < 8759) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1031) {
			if (rel_time < 832) {
				if (rel_time < 735) {
					if (rel_time < 469) {
						if (rel_time < 68) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					} else {
						if (rel_time < 540) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					}
				} else {
					if (rel_time < 783) {
						w72 = 0;
					} else {
						w72 = 0;
					}
				}
			} else {
				if (rel_time < 982) {
					if (cons == 3) {
						if (rel_time < 880) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					} else {
						if (rel_time < 880) {
							w72 = 256;
						} else {
							w72 = 0;
						}
					}
				} else {
					w72 = 0;
				}
			}
		} else {
			if (rel_time < 1207) {
				if (cons == 4) {
					if (cons == 2) {
						if (rel_time < 1080) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					} else {
						w72 = 256;
					}
				} else {
					w72 = 256;
				}
			} else {
				if (rel_time < 1237) {
					w72 = 0;
				} else {
					if (rel_time < 1266) {
						w72 = 0;
					} else {
						if (rel_time < 1295) {
							w72 = 0;
						} else {
							w72 = 0;
						}
					}
				}
			}
		}
	}
	int w73;
	if (rel_time < 3310) {
		if (rel_time < 3162) {
			if (rel_time < 3072) {
				if (rel_time < 2866) {
					if (rel_time < 2717) {
						if (rel_time < 2570) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					} else {
						if (cons == 2) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				} else {
					if (cons == 3) {
						if (cons == 0) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					} else {
						if (hops < 2) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				}
			} else {
				if (cons == 3) {
					if (cons == 0) {
						if (hops < 2) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					} else {
						if (hops < 2) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					} else {
						if (hops < 5) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				}
			}
		} else {
			if (cons == 3) {
				if (cons == 1) {
					if (cons == 0) {
						if (hops < 2) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					} else {
						if (hops < 4) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					} else {
						if (hops < 5) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w73 = 0;
					} else {
						if (hops < 3) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				} else {
					if (hops < 5) {
						w73 = 0;
					} else {
						if (rel_time < 3221) {
							w73 = -512;
						} else {
							w73 = -256;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3398) {
			if (cons == 2) {
				if (cons == 3) {
					if (hops < 2) {
						w73 = 0;
					} else {
						if (hops < 5) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					} else {
						if (hops < 5) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w73 = 0;
					} else {
						w73 = 0;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3339) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					} else {
						if (hops < 5) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3663) {
				if (prod == 0) {
					if (cons == 2) {
						if (hops < 2) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					} else {
						if (hops < 4) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					} else {
						if (hops < 5) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3955) {
					if (prod == 1) {
						if (hops < 3) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					} else {
						if (rel_time < 3910) {
							w73 = 1792;
						} else {
							w73 = 0;
						}
					}
				} else {
					if (rel_time < 3999) {
						if (prod == 2) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					} else {
						if (rel_time < 4831) {
							w73 = 0;
						} else {
							w73 = 0;
						}
					}
				}
			}
		}
	}
	int w74;
	if (prod == 1) {
		if (rel_time < 8970) {
			if (rel_time < 8862) {
				if (rel_time < 8712) {
					if (rel_time < 8639) {
						if (prod == 3) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					} else {
						if (prod == 2) {
							w74 = -256;
						} else {
							w74 = 0;
						}
					}
				} else {
					if (prod == 3) {
						if (rel_time < 8759) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					} else {
						if (hops < 5) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						if (rel_time < 8911) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					} else {
						if (hops < 3) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					}
				} else {
					if (rel_time < 8911) {
						w74 = 0;
					} else {
						w74 = 0;
					}
				}
			}
		} else {
			if (rel_time < 9239) {
				if (prod == 4) {
					if (prod == 0) {
						if (hops < 5) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					} else {
						if (hops < 2) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					}
				} else {
					if (rel_time < 9034) {
						if (hops < 2) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					} else {
						if (hops < 2) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					}
				}
			} else {
				if (rel_time < 9514) {
					if (prod == 4) {
						if (prod == 0) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					} else {
						if (rel_time < 9311) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					}
				} else {
					if (rel_time < 9789) {
						if (rel_time < 9739) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					} else {
						if (rel_time < 10239) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5348) {
			if (rel_time < 5107) {
				if (rel_time < 4831) {
					if (rel_time < 4509) {
						if (rel_time < 4232) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					} else {
						if (hops < 4) {
							w74 = 0;
						} else {
							w74 = -256;
						}
					}
				} else {
					if (rel_time < 5023) {
						if (hops < 4) {
							w74 = 0;
						} else {
							w74 = 256;
						}
					} else {
						if (hops < 4) {
							w74 = 256;
						} else {
							w74 = 0;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 5300) {
						if (hops < 2) {
							w74 = -256;
						} else {
							w74 = -256;
						}
					} else {
						if (hops < 2) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					}
				} else {
					w74 = 0;
				}
			}
		} else {
			if (rel_time < 5624) {
				if (rel_time < 5577) {
					if (hops < 3) {
						if (hops < 2) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					} else {
						if (hops < 4) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w74 = 256;
						} else {
							w74 = 256;
						}
					} else {
						w74 = 256;
					}
				}
			} else {
				if (rel_time < 5900) {
					if (hops < 4) {
						if (hops < 2) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					} else {
						if (hops < 5) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					}
				} else {
					if (rel_time < 6177) {
						if (rel_time < 6131) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					} else {
						if (rel_time < 6454) {
							w74 = 0;
						} else {
							w74 = 0;
						}
					}
				}
			}
		}
	}
	int w75;
	if (rel_time < 10118) {
		if (rel_time < 10064) {
			if (rel_time < 9965) {
				if (rel_time < 9844) {
					if (rel_time < 9688) {
						if (rel_time < 9311) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					} else {
						if (prod == 1) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					}
				} else {
					if (prod == 4) {
						if (prod == 0) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					} else {
						if (hops < 3) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (hops < 3) {
						if (hops < 2) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					} else {
						if (hops < 4) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					} else {
						if (hops < 4) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 2) {
				if (hops < 2) {
					w75 = 0;
				} else {
					if (hops < 3) {
						w75 = 0;
					} else {
						if (hops < 4) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w75 = 0;
					} else {
						w75 = 0;
					}
				} else {
					if (hops < 4) {
						w75 = 0;
					} else {
						if (hops < 5) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10239) {
			if (prod == 4) {
				if (prod == 0) {
					if (hops < 3) {
						w75 = 0;
					} else {
						if (hops < 4) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					}
				} else {
					if (hops < 3) {
						w75 = 0;
					} else {
						w75 = 0;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w75 = 0;
					} else {
						w75 = 0;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					} else {
						w75 = 0;
					}
				}
			}
		} else {
			if (prod == 3) {
				if (prod == 1) {
					if (rel_time < 10331) {
						if (hops < 5) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					} else {
						if (hops < 3) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 10286) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					} else {
						if (hops < 5) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 10379) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					} else {
						if (rel_time < 10379) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					}
				} else {
					if (rel_time < 10379) {
						if (hops < 4) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					} else {
						if (hops < 5) {
							w75 = 0;
						} else {
							w75 = 0;
						}
					}
				}
			}
		}
	}
	int w76;
	if (rel_time < 1080) {
		if (rel_time < 1031) {
			if (rel_time < 982) {
				if (rel_time < 929) {
					if (rel_time < 880) {
						if (rel_time < 832) {
							w76 = 0;
						} else {
							w76 = 0;
						}
					} else {
						if (hops < 4) {
							w76 = 0;
						} else {
							w76 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w76 = 0;
						} else {
							w76 = 0;
						}
					} else {
						if (hops < 4) {
							w76 = 0;
						} else {
							w76 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w76 = 0;
				} else {
					if (cons == 0) {
						w76 = -768;
					} else {
						if (hops < 4) {
							w76 = 0;
						} else {
							w76 = 0;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 3) {
					w76 = 0;
				} else {
					if (cons == 1) {
						w76 = 0;
					} else {
						w76 = 0;
					}
				}
			} else {
				if (hops < 5) {
					w76 = 0;
				} else {
					w76 = 0;
				}
			}
		}
	} else {
		if (rel_time < 1128) {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w76 = 0;
					} else {
						w76 = 0;
					}
				} else {
					w76 = 0;
				}
			} else {
				if (hops < 5) {
					w76 = 256;
				} else {
					if (cons == 2) {
						w76 = 0;
					} else {
						w76 = 0;
					}
				}
			}
		} else {
			if (cons == 4) {
				if (rel_time < 1237) {
					if (hops < 2) {
						if (size < 38) {
							w76 = 0;
						} else {
							w76 = 0;
						}
					} else {
						if (rel_time < 1207) {
							w76 = 0;
						} else {
							w76 = 0;
						}
					}
				} else {
					if (rel_time < 1266) {
						if (hops < 4) {
							w76 = 0;
						} else {
							w76 = 0;
						}
					} else {
						if (rel_time < 1295) {
							w76 = 0;
						} else {
							w76 = 0;
						}
					}
				}
			} else {
				if (rel_time < 1207) {
					if (hops < 4) {
						if (hops < 2) {
							w76 = 0;
						} else {
							w76 = 0;
						}
					} else {
						if (hops < 5) {
							w76 = 256;
						} else {
							w76 = 256;
						}
					}
				} else {
					if (rel_time < 3458) {
						if (rel_time < 3281) {
							w76 = 0;
						} else {
							w76 = 0;
						}
					} else {
						if (hops < 2) {
							w76 = 0;
						} else {
							w76 = 0;
						}
					}
				}
			}
		}
	}
	int w77;
	if (rel_time < 7836) {
		if (rel_time < 7760) {
			if (rel_time < 4554) {
				if (rel_time < 4322) {
					if (prod == 3) {
						if (rel_time < 4232) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					} else {
						if (rel_time < 4044) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (prod == 2) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					} else {
						if (rel_time < 4423) {
							w77 = 0;
						} else {
							w77 = -256;
						}
					}
				}
			} else {
				if (rel_time < 4831) {
					if (prod == 0) {
						if (prod == 2) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					} else {
						if (hops < 4) {
							w77 = 256;
						} else {
							w77 = 256;
						}
					}
				} else {
					if (rel_time < 5107) {
						if (prod == 1) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					} else {
						if (rel_time < 5348) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 1) {
				if (prod == 0) {
					if (hops < 2) {
						w77 = 0;
					} else {
						if (hops < 3) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					} else {
						w77 = 0;
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w77 = 0;
					} else {
						if (hops < 4) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					}
				} else {
					w77 = 0;
				}
			}
		}
	} else {
		if (rel_time < 7882) {
			if (prod == 2) {
				if (hops < 2) {
					w77 = 0;
				} else {
					if (hops < 3) {
						w77 = 0;
					} else {
						w77 = 0;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w77 = 0;
					} else {
						w77 = 0;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					} else {
						w77 = 0;
					}
				}
			}
		} else {
			if (prod == 0) {
				if (rel_time < 8207) {
					if (prod == 2) {
						if (rel_time < 7931) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					} else {
						if (rel_time < 8111) {
							w77 = 1024;
						} else {
							w77 = 0;
						}
					}
				} else {
					if (rel_time < 8365) {
						if (rel_time < 8311) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					} else {
						if (rel_time < 8759) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8111) {
					if (rel_time < 8036) {
						if (hops < 2) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					} else {
						w77 = 256;
					}
				} else {
					if (rel_time < 8365) {
						if (rel_time < 8311) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					} else {
						if (rel_time < 8586) {
							w77 = 0;
						} else {
							w77 = 0;
						}
					}
				}
			}
		}
	}
	int w78;
	if (prod == 1) {
		if (rel_time < 6637) {
			if (rel_time < 6361) {
				if (rel_time < 6084) {
					if (rel_time < 5807) {
						if (rel_time < 5531) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						if (prod == 3) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					}
				} else {
					if (prod == 3) {
						if (rel_time < 6225) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						if (rel_time < 6225) {
							w78 = 0;
						} else {
							w78 = 256;
						}
					}
				}
			} else {
				if (prod == 3) {
					if (hops < 3) {
						if (hops < 2) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						if (prod == 2) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					}
				} else {
					if (rel_time < 6502) {
						if (hops < 2) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						w78 = 0;
					}
				}
			}
		} else {
			if (rel_time < 6683) {
				if (hops < 3) {
					if (hops < 2) {
						w78 = 0;
					} else {
						w78 = -256;
					}
				} else {
					if (hops < 4) {
						w78 = 0;
					} else {
						if (hops < 5) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7007) {
					if (prod == 4) {
						if (prod == 2) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						if (rel_time < 6829) {
							w78 = 0;
						} else {
							w78 = -256;
						}
					}
				} else {
					if (rel_time < 7283) {
						if (prod == 4) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						if (prod == 4) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5348) {
			if (rel_time < 5107) {
				if (rel_time < 4831) {
					if (rel_time < 3955) {
						if (rel_time < 3663) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						if (rel_time < 4232) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 5023) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						if (hops < 3) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 5300) {
						if (hops < 2) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						if (hops < 4) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					}
				} else {
					w78 = 0;
				}
			}
		} else {
			if (rel_time < 5624) {
				if (rel_time < 5577) {
					if (hops < 3) {
						if (hops < 2) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						if (hops < 4) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						w78 = 0;
					}
				}
			} else {
				if (rel_time < 5900) {
					if (hops < 4) {
						if (rel_time < 5853) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						if (hops < 5) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					}
				} else {
					if (rel_time < 6730) {
						if (rel_time < 6454) {
							w78 = 0;
						} else {
							w78 = 0;
						}
					} else {
						if (rel_time < 6960) {
							w78 = -768;
						} else {
							w78 = 0;
						}
					}
				}
			}
		}
	}
	int w79;
	if (prod == 3) {
		if (rel_time < 5531) {
			if (rel_time < 5300) {
				if (rel_time < 5023) {
					if (rel_time < 4599) {
						if (rel_time < 4322) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					} else {
						if (rel_time < 4876) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (prod == 2) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					} else {
						if (hops < 2) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (prod == 1) {
						if (rel_time < 5430) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					} else {
						if (hops < 5) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w79 = -256;
					} else {
						if (hops < 3) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 5707) {
				if (rel_time < 5624) {
					if (prod == 1) {
						if (hops < 2) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					} else {
						if (rel_time < 5577) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				} else {
					if (prod == 2) {
						w79 = -768;
					} else {
						if (hops < 2) {
							w79 = -256;
						} else {
							w79 = -512;
						}
					}
				}
			} else {
				if (rel_time < 6084) {
					if (prod == 1) {
						if (prod == 4) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					} else {
						if (hops < 3) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				} else {
					if (rel_time < 6361) {
						if (prod == 1) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					} else {
						if (rel_time < 6637) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 4322) {
			if (rel_time < 4044) {
				if (rel_time < 3751) {
					if (hops < 4) {
						if (hops < 3) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					} else {
						if (hops < 5) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3999) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					} else {
						if (hops < 5) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4277) {
					if (hops < 3) {
						if (hops < 2) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					} else {
						w79 = 0;
					}
				} else {
					if (hops < 2) {
						w79 = 0;
					} else {
						if (hops < 5) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 4599) {
				if (rel_time < 4554) {
					if (hops < 3) {
						w79 = 0;
					} else {
						w79 = 0;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					} else {
						if (hops < 5) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4876) {
					if (rel_time < 4831) {
						w79 = 0;
					} else {
						if (hops < 4) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				} else {
					if (rel_time < 5707) {
						if (rel_time < 5430) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					} else {
						if (rel_time < 5981) {
							w79 = 0;
						} else {
							w79 = 0;
						}
					}
				}
			}
		}
	}
	int w80;
	if (rel_time < 2421) {
		if (rel_time < 2244) {
			if (rel_time < 2184) {
				if (rel_time < 2155) {
					if (rel_time < 2096) {
						if (rel_time < 2036) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					} else {
						if (cons == 1) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w80 = 0;
					} else {
						if (hops < 5) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					}
				}
			} else {
				if (cons == 4) {
					if (hops < 3) {
						if (hops < 2) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					} else {
						if (hops < 5) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					}
				} else {
					if (rel_time < 2213) {
						w80 = -256;
					} else {
						if (hops < 5) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					}
				}
			}
		} else {
			if (cons == 2) {
				if (cons == 1) {
					if (cons == 3) {
						if (cons == 0) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					} else {
						if (hops < 4) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					}
				} else {
					if (rel_time < 2332) {
						if (rel_time < 2273) {
							w80 = -1024;
						} else {
							w80 = 0;
						}
					} else {
						w80 = 1280;
					}
				}
			} else {
				if (hops < 2) {
					w80 = 0;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					} else {
						w80 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 2509) {
			if (cons == 2) {
				if (hops < 2) {
					if (rel_time < 2480) {
						w80 = 0;
					} else {
						w80 = 0;
					}
				} else {
					if (hops < 5) {
						if (cons == 4) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					} else {
						if (rel_time < 2480) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w80 = 0;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					} else {
						w80 = 0;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 2717) {
					if (cons == 3) {
						if (cons == 1) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					} else {
						if (hops < 2) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					}
				} else {
					if (rel_time < 2806) {
						if (cons == 2) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					} else {
						if (rel_time < 2954) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3281) {
					if (rel_time < 3132) {
						if (hops < 5) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					} else {
						if (cons == 4) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					}
				} else {
					if (rel_time < 3751) {
						if (prod == 2) {
							w80 = 0;
						} else {
							w80 = 256;
						}
					} else {
						if (prod == 2) {
							w80 = 0;
						} else {
							w80 = 0;
						}
					}
				}
			}
		}
	}
	int w81;
	if (prod == 1) {
		if (rel_time < 4044) {
			if (prod == 4) {
				if (rel_time < 3910) {
					if (rel_time < 3751) {
						if (prod == 0) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					} else {
						if (hops < 3) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					}
				} else {
					if (rel_time < 3955) {
						if (hops < 2) {
							w81 = -256;
						} else {
							w81 = -256;
						}
					} else {
						if (prod == 2) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3910) {
					if (rel_time < 3751) {
						if (hops < 4) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					} else {
						if (hops < 2) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					} else {
						if (hops < 4) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 4831) {
				if (rel_time < 4699) {
					if (rel_time < 4322) {
						if (prod == 3) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					} else {
						if (prod == 3) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					}
				} else {
					if (rel_time < 4746) {
						if (hops < 4) {
							w81 = 0;
						} else {
							w81 = 256;
						}
					} else {
						if (prod == 2) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					}
				}
			} else {
				if (rel_time < 5107) {
					if (prod == 4) {
						if (prod == 3) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					} else {
						if (hops < 5) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					}
				} else {
					if (rel_time < 5348) {
						if (prod == 4) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					} else {
						if (rel_time < 5624) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8712) {
			if (rel_time < 8639) {
				if (rel_time < 3619) {
					w81 = -2304;
				} else {
					if (rel_time < 6454) {
						if (rel_time < 6177) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					} else {
						if (rel_time < 6730) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w81 = -768;
					} else {
						w81 = -768;
					}
				} else {
					w81 = -256;
				}
			}
		} else {
			if (rel_time < 8970) {
				if (rel_time < 8911) {
					if (hops < 2) {
						w81 = 0;
					} else {
						if (hops < 5) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w81 = 512;
					} else {
						if (hops < 5) {
							w81 = 256;
						} else {
							w81 = 0;
						}
					}
				}
			} else {
				if (rel_time < 9239) {
					if (hops < 2) {
						if (rel_time < 9186) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					} else {
						if (rel_time < 9186) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					}
				} else {
					if (rel_time < 9514) {
						if (rel_time < 9464) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					} else {
						if (rel_time < 9789) {
							w81 = 0;
						} else {
							w81 = 0;
						}
					}
				}
			}
		}
	}
	int w82;
	if (cons == 2) {
		if (rel_time < 1829) {
			if (rel_time < 1681) {
				if (rel_time < 1533) {
					if (rel_time < 1385) {
						if (rel_time < 1237) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						if (hops < 3) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					}
				} else {
					if (rel_time < 1621) {
						if (hops < 3) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						if (hops < 2) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					}
				}
			} else {
				if (rel_time < 1769) {
					if (hops < 4) {
						if (hops < 3) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						if (hops < 5) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (cons == 0) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						if (cons == 4) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 1917) {
				if (hops < 2) {
					if (rel_time < 1859) {
						w82 = 0;
					} else {
						w82 = 0;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						if (rel_time < 1888) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2065) {
					if (cons == 0) {
						if (cons == 1) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						if (hops < 2) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					}
				} else {
					if (rel_time < 2213) {
						if (cons == 0) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						if (rel_time < 2361) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2954) {
			if (rel_time < 2806) {
				if (rel_time < 1859) {
					if (rel_time < 1592) {
						if (rel_time < 1444) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						if (hops < 4) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					}
				} else {
					if (rel_time < 1888) {
						if (hops < 3) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						if (rel_time < 2036) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w82 = 0;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						w82 = 0;
					}
				}
			}
		} else {
			if (rel_time < 3072) {
				if (hops < 3) {
					if (hops < 2) {
						w82 = 0;
					} else {
						w82 = 0;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						w82 = 0;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 3368) {
						if (rel_time < 3221) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						if (hops < 2) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3221) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					} else {
						if (rel_time < 3221) {
							w82 = 0;
						} else {
							w82 = 0;
						}
					}
				}
			}
		}
	}
	int w83;
	if (hops < 2) {
		if (prod == 2) {
			if (rel_time < 3132) {
				if (rel_time < 2895) {
					if (rel_time < 2866) {
						if (rel_time < 2717) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						w83 = 0;
					}
				} else {
					if (rel_time < 2984) {
						if (cons == 3) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						if (cons == 3) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3310) {
					if (cons == 3) {
						if (cons == 4) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						w83 = 0;
					}
				} else {
					if (rel_time < 3398) {
						if (rel_time < 3368) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						if (rel_time < 3910) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 5981) {
				if (rel_time < 5107) {
					if (rel_time < 4277) {
						if (rel_time < 3999) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						if (rel_time < 4509) {
							w83 = -512;
						} else {
							w83 = 0;
						}
					}
				} else {
					if (rel_time < 5900) {
						if (rel_time < 5624) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						w83 = 0;
					}
				}
			} else {
				if (rel_time < 6225) {
					if (rel_time < 6177) {
						w83 = 0;
					} else {
						w83 = 0;
					}
				} else {
					if (rel_time < 6502) {
						if (rel_time < 6454) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						if (rel_time < 6777) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					}
				}
			}
		}
	} else {
		if (cons == 3) {
			if (rel_time < 540) {
				if (rel_time < 469) {
					if (rel_time < 398) {
						if (hops < 4) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						if (hops < 4) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						if (hops < 5) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					}
				}
			} else {
				if (rel_time < 735) {
					if (hops < 4) {
						if (hops < 3) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						if (hops < 5) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					}
				} else {
					if (rel_time < 982) {
						if (cons == 1) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						if (rel_time < 1266) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3281) {
				if (rel_time < 3132) {
					if (rel_time < 2954) {
						if (rel_time < 2806) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						if (hops < 3) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					} else {
						if (rel_time < 3221) {
							w83 = -256;
						} else {
							w83 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3500) {
					if (rel_time < 3398) {
						if (rel_time < 3368) {
							w83 = 256;
						} else {
							w83 = 0;
						}
					} else {
						w83 = 1536;
					}
				} else {
					if (hops < 3) {
						w83 = 0;
					} else {
						if (hops < 4) {
							w83 = 0;
						} else {
							w83 = 0;
						}
					}
				}
			}
		}
	}
	int w84;
	if (hops < 5) {
		if (rel_time < 6407) {
			if (rel_time < 6361) {
				if (prod == 3) {
					if (rel_time < 6177) {
						if (rel_time < 5807) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					} else {
						if (prod == 0) {
							w84 = 0;
						} else {
							w84 = 256;
						}
					}
				} else {
					if (rel_time < 5430) {
						if (rel_time < 5152) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					} else {
						if (rel_time < 5707) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (hops < 3) {
						w84 = 0;
					} else {
						w84 = 0;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					} else {
						w84 = 0;
					}
				}
			}
		} else {
			if (rel_time < 6683) {
				if (prod == 0) {
					if (prod == 3) {
						if (rel_time < 6454) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					} else {
						if (rel_time < 6502) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					}
				} else {
					if (rel_time < 6637) {
						if (hops < 2) {
							w84 = -512;
						} else {
							w84 = -512;
						}
					} else {
						if (hops < 3) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					}
				}
			} else {
				if (prod == 4) {
					if (rel_time < 6960) {
						if (prod == 2) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					} else {
						if (rel_time < 7237) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					}
				} else {
					if (rel_time < 6960) {
						if (rel_time < 6829) {
							w84 = 0;
						} else {
							w84 = -256;
						}
					} else {
						if (rel_time < 7237) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1031) {
			if (rel_time < 832) {
				if (rel_time < 735) {
					if (rel_time < 318) {
						if (rel_time < 245) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					} else {
						if (cons == 3) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					}
				} else {
					if (rel_time < 783) {
						w84 = 0;
					} else {
						w84 = 0;
					}
				}
			} else {
				if (rel_time < 880) {
					if (cons == 2) {
						w84 = 256;
					} else {
						w84 = 0;
					}
				} else {
					w84 = 0;
				}
			}
		} else {
			if (rel_time < 1207) {
				if (cons == 4) {
					if (cons == 2) {
						if (rel_time < 1128) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					} else {
						w84 = 0;
					}
				} else {
					w84 = 0;
				}
			} else {
				if (rel_time < 1414) {
					if (cons == 3) {
						if (rel_time < 1385) {
							w84 = 0;
						} else {
							w84 = -256;
						}
					} else {
						w84 = 256;
					}
				} else {
					if (rel_time < 1444) {
						if (cons == 2) {
							w84 = -256;
						} else {
							w84 = 256;
						}
					} else {
						if (rel_time < 1473) {
							w84 = 0;
						} else {
							w84 = 0;
						}
					}
				}
			}
		}
	}
	int w85;
	if (prod == 1) {
		if (rel_time < 8712) {
			if (rel_time < 8586) {
				if (prod == 3) {
					if (rel_time < 8311) {
						if (rel_time < 8036) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					} else {
						if (prod == 0) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					}
				} else {
					if (rel_time < 8207) {
						if (rel_time < 7931) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					} else {
						if (rel_time < 8435) {
							w85 = 512;
						} else {
							w85 = 0;
						}
					}
				}
			} else {
				if (prod == 3) {
					if (rel_time < 8639) {
						if (hops < 5) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					} else {
						if (hops < 2) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w85 = -256;
					} else {
						if (hops < 3) {
							w85 = 0;
						} else {
							w85 = -256;
						}
					}
				}
			}
		} else {
			if (rel_time < 8970) {
				if (prod == 4) {
					if (hops < 5) {
						if (hops < 2) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					} else {
						if (rel_time < 8911) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					}
				} else {
					if (rel_time < 8759) {
						if (hops < 2) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					} else {
						if (hops < 2) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					}
				}
			} else {
				if (rel_time < 9239) {
					if (prod == 4) {
						if (prod == 0) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					} else {
						if (rel_time < 9034) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					}
				} else {
					if (rel_time < 9514) {
						if (prod == 4) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					} else {
						if (rel_time < 9789) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3619) {
			w85 = -2048;
		} else {
			if (rel_time < 3955) {
				if (hops < 2) {
					if (rel_time < 3663) {
						w85 = 0;
					} else {
						w85 = 0;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3663) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					} else {
						if (rel_time < 3663) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4232) {
					if (hops < 3) {
						if (hops < 2) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					} else {
						if (hops < 5) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					}
				} else {
					if (rel_time < 4509) {
						if (hops < 4) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					} else {
						if (rel_time < 4746) {
							w85 = 0;
						} else {
							w85 = 0;
						}
					}
				}
			}
		}
	}
	int w86;
	if (rel_time < 10379) {
		if (rel_time < 10331) {
			if (prod == 1) {
				if (rel_time < 10239) {
					if (rel_time < 10118) {
						if (rel_time < 10064) {
							w86 = 0;
						} else {
							w86 = 0;
						}
					} else {
						if (prod == 4) {
							w86 = 0;
						} else {
							w86 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 10286) {
							w86 = 0;
						} else {
							w86 = 0;
						}
					} else {
						w86 = 0;
					}
				}
			} else {
				if (rel_time < 3619) {
					w86 = -1536;
				} else {
					if (rel_time < 9514) {
						if (rel_time < 9239) {
							w86 = 0;
						} else {
							w86 = 0;
						}
					} else {
						if (rel_time < 9789) {
							w86 = 0;
						} else {
							w86 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 2) {
				if (hops < 3) {
					if (hops < 2) {
						w86 = 0;
					} else {
						w86 = 0;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w86 = 0;
						} else {
							w86 = 0;
						}
					} else {
						w86 = 0;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w86 = 0;
					} else {
						w86 = 0;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w86 = 0;
						} else {
							w86 = 0;
						}
					} else {
						w86 = 0;
					}
				}
			}
		}
	} else {
		if (prod == 3) {
			if (hops < 4) {
				if (hops < 2) {
					w86 = 0;
				} else {
					w86 = 0;
				}
			} else {
				if (hops < 5) {
					if (rel_time < 10437) {
						w86 = 0;
					} else {
						w86 = 0;
					}
				} else {
					w86 = 0;
				}
			}
		} else {
			if (hops < 2) {
				w86 = 0;
			} else {
				if (hops < 5) {
					if (hops < 3) {
						w86 = 0;
					} else {
						if (hops < 4) {
							w86 = 0;
						} else {
							w86 = 0;
						}
					}
				} else {
					w86 = 0;
				}
			}
		}
	}
	int w87;
	if (rel_time < 7836) {
		if (rel_time < 7760) {
			if (rel_time < 7510) {
				if (rel_time < 7237) {
					if (prod == 4) {
						if (rel_time < 7054) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					} else {
						if (rel_time < 6960) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					}
				} else {
					if (prod == 3) {
						if (prod == 4) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					} else {
						if (rel_time < 7330) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (prod == 4) {
						if (rel_time < 7654) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					} else {
						if (rel_time < 7654) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					}
				} else {
					if (rel_time < 7559) {
						if (hops < 2) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					} else {
						if (hops < 2) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 1) {
				if (prod == 0) {
					if (hops < 2) {
						w87 = 0;
					} else {
						if (hops < 3) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					} else {
						w87 = 0;
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w87 = 0;
					} else {
						if (hops < 4) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					}
				} else {
					w87 = 0;
				}
			}
		}
	} else {
		if (rel_time < 7882) {
			if (prod == 2) {
				if (hops < 2) {
					w87 = 0;
				} else {
					if (hops < 3) {
						w87 = 0;
					} else {
						w87 = 0;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w87 = 0;
					} else {
						w87 = 0;
					}
				} else {
					if (hops < 5) {
						w87 = 0;
					} else {
						w87 = 0;
					}
				}
			}
		} else {
			if (rel_time < 7931) {
				if (prod == 3) {
					if (hops < 3) {
						if (hops < 2) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					} else {
						if (hops < 4) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w87 = 0;
					} else {
						if (hops < 4) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8207) {
					if (prod == 0) {
						if (prod == 2) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					} else {
						if (rel_time < 8036) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					}
				} else {
					if (rel_time < 8365) {
						if (prod == 0) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					} else {
						if (hops < 4) {
							w87 = 0;
						} else {
							w87 = 0;
						}
					}
				}
			}
		}
	}
	int w88;
	if (hops < 3) {
		if (rel_time < 4876) {
			if (prod == 0) {
				if (prod == 2) {
					if (rel_time < 4599) {
						if (rel_time < 4277) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (rel_time < 4831) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				} else {
					if (rel_time < 3707) {
						if (hops < 2) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (rel_time < 3999) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4509) {
					if (rel_time < 4232) {
						if (rel_time < 3619) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (rel_time < 4423) {
							w88 = 0;
						} else {
							w88 = -256;
						}
					}
				} else {
					if (rel_time < 4699) {
						if (hops < 2) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (hops < 2) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 4977) {
				if (prod == 0) {
					w88 = 0;
				} else {
					if (hops < 2) {
						w88 = 0;
					} else {
						w88 = 0;
					}
				}
			} else {
				if (rel_time < 5023) {
					if (prod == 0) {
						if (hops < 2) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (hops < 2) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				} else {
					if (rel_time < 5107) {
						if (prod == 2) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (rel_time < 5152) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5107) {
			if (rel_time < 2244) {
				if (rel_time < 1080) {
					if (rel_time < 832) {
						if (rel_time < 540) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (cons == 2) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				} else {
					if (rel_time < 1128) {
						if (hops < 4) {
							w88 = 0;
						} else {
							w88 = 256;
						}
					} else {
						if (rel_time < 2096) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2361) {
					if (cons == 1) {
						if (cons == 2) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (hops < 5) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				} else {
					if (rel_time < 2570) {
						if (cons == 3) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (rel_time < 3191) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 6407) {
					if (prod == 3) {
						if (rel_time < 5577) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (rel_time < 5981) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				} else {
					if (rel_time < 6683) {
						if (prod == 0) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (rel_time < 6960) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				}
			} else {
				if (rel_time < 5531) {
					if (prod == 1) {
						if (prod == 3) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (hops < 5) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				} else {
					if (rel_time < 5900) {
						if (prod == 2) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					} else {
						if (rel_time < 5981) {
							w88 = 0;
						} else {
							w88 = 0;
						}
					}
				}
			}
		}
	}
	int w89;
	if (rel_time < 318) {
		if (cons == 2) {
			if (rel_time < 68) {
				if (hops < 3) {
					if (hops < 2) {
						w89 = 0;
					} else {
						w89 = 0;
					}
				} else {
					if (hops < 4) {
						w89 = 0;
					} else {
						if (hops < 5) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					}
				}
			} else {
				if (cons == 4) {
					if (hops < 3) {
						if (rel_time < 182) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					} else {
						if (hops < 4) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					}
				} else {
					w89 = 256;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					w89 = 0;
				} else {
					if (hops < 3) {
						w89 = 0;
					} else {
						if (rel_time < 182) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					}
				}
			} else {
				if (hops < 5) {
					w89 = 0;
				} else {
					w89 = 0;
				}
			}
		}
	} else {
		if (cons == 2) {
			if (rel_time < 682) {
				if (rel_time < 469) {
					if (rel_time < 398) {
						if (hops < 3) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					} else {
						if (hops < 4) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 540) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					} else {
						if (hops < 4) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					}
				}
			} else {
				if (rel_time < 929) {
					if (cons == 0) {
						if (hops < 4) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					} else {
						if (hops < 5) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					}
				} else {
					if (rel_time < 1829) {
						if (rel_time < 1681) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					} else {
						if (rel_time < 1917) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 611) {
				if (hops < 2) {
					w89 = 0;
				} else {
					if (hops < 4) {
						if (rel_time < 540) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					} else {
						if (hops < 5) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					}
				}
			} else {
				if (rel_time < 832) {
					w89 = -768;
				} else {
					if (rel_time < 880) {
						if (hops < 3) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					} else {
						if (rel_time < 1128) {
							w89 = 0;
						} else {
							w89 = 0;
						}
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32 + w33 + w34 + w35 + w36 + w37 + w38 + w39 + w40 + w41 + w42 + w43 + w44 + w45 + w46 + w47 + w48 + w49 + w50 + w51 + w52 + w53 + w54 + w55 + w56 + w57 + w58 + w59 + w60 + w61 + w62 + w63 + w64 + w65 + w66 + w67 + w68 + w69 + w70 + w71 + w72 + w73 + w74 + w75 + w76 + w77 + w78 + w79 + w80 + w81 + w82 + w83 + w84 + w85 + w86 + w87 + w88 + w89) >> 8;
}
