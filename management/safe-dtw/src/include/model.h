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
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w0 = 8192;
			} else {
				w0 = 8704;
			}
		} else {
			if (hops < 4) {
				w0 = 9216;
			} else {
				w0 = 9728;
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 62) {
				w0 = 60416;
			} else {
				w0 = 70912;
			}
		} else {
			if (rel_time < 126) {
				w0 = 51456;
			} else {
				if (cons == 3) {
					if (cons == 1) {
						w0 = 59136;
					} else {
						w0 = 57344;
					}
				} else {
					w0 = 57088;
				}
			}
		}
	}
	int w1;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w1 = 5632;
			} else {
				w1 = 5888;
			}
		} else {
			if (hops < 4) {
				w1 = 6400;
			} else {
				w1 = 6656;
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 62) {
				w1 = 42240;
			} else {
				w1 = 49664;
			}
		} else {
			if (rel_time < 126) {
				w1 = 35840;
			} else {
				if (hops < 3) {
					if (cons == 3) {
						w1 = 40704;
					} else {
						w1 = 39680;
					}
				} else {
					if (cons == 2) {
						w1 = 41216;
					} else {
						w1 = 41984;
					}
				}
			}
		}
	}
	int w2;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w2 = 3840;
			} else {
				w2 = 4096;
			}
		} else {
			if (hops < 4) {
				w2 = 4352;
			} else {
				w2 = 4608;
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 62) {
				w2 = 29696;
			} else {
				if (hops < 3) {
					w2 = 34304;
				} else {
					w2 = 35328;
				}
			}
		} else {
			if (rel_time < 126) {
				w2 = 25088;
			} else {
				if (cons == 1) {
					if (cons == 3) {
						w2 = 28928;
					} else {
						w2 = 27904;
					}
				} else {
					if (hops < 2) {
						w2 = 27136;
					} else {
						w2 = 28160;
					}
				}
			}
		}
	}
	int w3;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w3 = 2816;
			} else {
				w3 = 2816;
			}
		} else {
			if (hops < 4) {
				w3 = 3072;
			} else {
				w3 = 3328;
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 62) {
				if (hops < 3) {
					w3 = 20480;
				} else {
					w3 = 21248;
				}
			} else {
				if (cons == 3) {
					if (hops < 2) {
						w3 = 24064;
					} else {
						w3 = 24832;
					}
				} else {
					w3 = 23808;
				}
			}
		} else {
			if (rel_time < 126) {
				if (hops < 3) {
					w3 = 17152;
				} else {
					w3 = 18176;
				}
			} else {
				if (hops < 2) {
					if (cons == 2) {
						w3 = 19200;
					} else {
						w3 = 19968;
					}
				} else {
					if (cons == 1) {
						w3 = 20224;
					} else {
						w3 = 19712;
					}
				}
			}
		}
	}
	int w4;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w4 = 1792;
			} else {
				w4 = 2048;
			}
		} else {
			if (hops < 4) {
				w4 = 2048;
			} else {
				w4 = 2304;
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 62) {
				if (hops < 2) {
					w4 = 13824;
				} else {
					w4 = 14592;
				}
			} else {
				if (rel_time < 111) {
					w4 = 17408;
				} else {
					if (hops < 2) {
						w4 = 16384;
					} else {
						w4 = 16896;
					}
				}
			}
		} else {
			if (rel_time < 126) {
				if (hops < 2) {
					w4 = 11776;
				} else {
					w4 = 12544;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 15363) {
						w4 = 13824;
					} else {
						w4 = 16128;
					}
				} else {
					if (cons == 3) {
						w4 = 14336;
					} else {
						w4 = 13824;
					}
				}
			}
		}
	}
	int w5;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w5 = 1280;
			} else {
				w5 = 1280;
			}
		} else {
			if (hops < 4) {
				w5 = 1536;
			} else {
				w5 = 1536;
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 62) {
				if (hops < 3) {
					w5 = 9984;
				} else {
					w5 = 10496;
				}
			} else {
				if (hops < 3) {
					if (cons == 3) {
						w5 = 11776;
					} else {
						w5 = 11264;
					}
				} else {
					w5 = 12032;
				}
			}
		} else {
			if (cons == 1) {
				if (cons == 3) {
					if (rel_time < 15168) {
						w5 = 9984;
					} else {
						w5 = 11520;
					}
				} else {
					if (hops < 4) {
						w5 = 9216;
					} else {
						w5 = 9984;
					}
				}
			} else {
				if (rel_time < 126) {
					if (hops < 3) {
						w5 = 8448;
					} else {
						w5 = 8960;
					}
				} else {
					if (hops < 3) {
						w5 = 9216;
					} else {
						w5 = 9472;
					}
				}
			}
		}
	}
	int w6;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w6 = 768;
			} else {
				w6 = 1024;
			}
		} else {
			if (hops < 4) {
				w6 = 1024;
			} else {
				w6 = 1024;
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 62) {
				if (hops < 2) {
					w6 = 6656;
				} else {
					w6 = 7168;
				}
			} else {
				if (rel_time < 111) {
					if (hops < 2) {
						w6 = 8192;
					} else {
						w6 = 8704;
					}
				} else {
					if (hops < 2) {
						w6 = 7936;
					} else {
						w6 = 8192;
					}
				}
			}
		} else {
			if (cons == 1) {
				if (cons == 3) {
					if (hops < 2) {
						w6 = 6656;
					} else {
						w6 = 7168;
					}
				} else {
					if (hops < 2) {
						w6 = 6400;
					} else {
						w6 = 6656;
					}
				}
			} else {
				if (rel_time < 126) {
					if (hops < 2) {
						w6 = 5632;
					} else {
						w6 = 6144;
					}
				} else {
					if (hops < 4) {
						w6 = 6400;
					} else {
						w6 = 7168;
					}
				}
			}
		}
	}
	int w7;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w7 = 512;
			} else {
				w7 = 512;
			}
		} else {
			if (hops < 4) {
				w7 = 512;
			} else {
				w7 = 768;
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 62) {
				if (hops < 4) {
					if (hops < 2) {
						w7 = 4608;
					} else {
						w7 = 4864;
					}
				} else {
					w7 = 5376;
				}
			} else {
				if (hops < 4) {
					if (cons == 3) {
						w7 = 5888;
					} else {
						w7 = 5376;
					}
				} else {
					w7 = 6400;
				}
			}
		} else {
			if (hops < 4) {
				if (cons == 1) {
					if (cons == 3) {
						w7 = 4864;
					} else {
						w7 = 4608;
					}
				} else {
					if (rel_time < 126) {
						w7 = 4096;
					} else {
						w7 = 4352;
					}
				}
			} else {
				if (cons == 4) {
					if (cons == 2) {
						w7 = 4864;
					} else {
						w7 = 5376;
					}
				} else {
					if (rel_time < 14779) {
						w7 = 5376;
					} else {
						w7 = 6912;
					}
				}
			}
		}
	}
	int w8;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w8 = 256;
			} else {
				w8 = 256;
			}
		} else {
			if (hops < 4) {
				w8 = 512;
			} else {
				w8 = 512;
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 62) {
				if (hops < 4) {
					if (hops < 2) {
						w8 = 3328;
					} else {
						w8 = 3328;
					}
				} else {
					w8 = 3840;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 111) {
						w8 = 4096;
					} else {
						w8 = 3840;
					}
				} else {
					if (rel_time < 111) {
						w8 = 4352;
					} else {
						w8 = 4096;
					}
				}
			}
		} else {
			if (rel_time < 15363) {
				if (hops < 2) {
					if (cons == 1) {
						w8 = 3072;
					} else {
						w8 = 2816;
					}
				} else {
					if (hops < 4) {
						w8 = 3328;
					} else {
						w8 = 3584;
					}
				}
			} else {
				if (hops < 3) {
					w8 = 4096;
				} else {
					w8 = 5120;
				}
			}
		}
	}
	int w9;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w9 = 256;
			} else {
				w9 = 256;
			}
		} else {
			if (hops < 4) {
				w9 = 256;
			} else {
				w9 = 256;
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 62) {
				if (hops < 3) {
					w9 = 2304;
				} else {
					if (hops < 4) {
						w9 = 2304;
					} else {
						w9 = 2560;
					}
				}
			} else {
				if (hops < 4) {
					if (cons == 3) {
						w9 = 2816;
					} else {
						w9 = 2560;
					}
				} else {
					w9 = 3072;
				}
			}
		} else {
			if (rel_time < 15363) {
				if (hops < 2) {
					if (rel_time < 126) {
						w9 = 1792;
					} else {
						w9 = 2048;
					}
				} else {
					if (cons == 1) {
						w9 = 2304;
					} else {
						w9 = 2048;
					}
				}
			} else {
				if (hops < 3) {
					w9 = 2816;
				} else {
					w9 = 3584;
				}
			}
		}
	}
	int w10;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w10 = 0;
			} else {
				w10 = 0;
			}
		} else {
			if (hops < 4) {
				w10 = 256;
			} else {
				w10 = 256;
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 62) {
				if (hops < 3) {
					w10 = 1536;
				} else {
					if (hops < 4) {
						w10 = 1536;
					} else {
						w10 = 1792;
					}
				}
			} else {
				if (hops < 2) {
					if (cons == 3) {
						w10 = 1792;
					} else {
						w10 = 1536;
					}
				} else {
					if (rel_time < 111) {
						w10 = 2048;
					} else {
						w10 = 1792;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons == 2) {
					if (rel_time < 752) {
						w10 = 1280;
					} else {
						w10 = 1536;
					}
				} else {
					if (rel_time < 190) {
						w10 = 2048;
					} else {
						w10 = 1536;
					}
				}
			} else {
				if (cons == 4) {
					if (cons == 2) {
						w10 = 1536;
					} else {
						w10 = 1536;
					}
				} else {
					if (rel_time < 752) {
						w10 = 1536;
					} else {
						w10 = 1792;
					}
				}
			}
		}
	}
	int w11;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w11 = 0;
			} else {
				w11 = 0;
			}
		} else {
			if (hops < 4) {
				w11 = 0;
			} else {
				w11 = 0;
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 62) {
				if (hops < 2) {
					w11 = 1024;
				} else {
					if (hops < 4) {
						w11 = 1024;
					} else {
						w11 = 1280;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w11 = 1280;
					} else {
						w11 = 1280;
					}
				} else {
					if (cons == 3) {
						w11 = 1536;
					} else {
						w11 = 1280;
					}
				}
			}
		} else {
			if (cons == 4) {
				if (cons == 2) {
					if (rel_time < 479) {
						w11 = 768;
					} else {
						w11 = 1024;
					}
				} else {
					if (rel_time < 190) {
						w11 = 1280;
					} else {
						w11 = 1024;
					}
				}
			} else {
				if (rel_time < 14779) {
					if (rel_time < 752) {
						w11 = 1024;
					} else {
						w11 = 1280;
					}
				} else {
					if (hops < 3) {
						w11 = 1536;
					} else {
						w11 = 1792;
					}
				}
			}
		}
	}
	int w12;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w12 = 0;
			} else {
				w12 = 0;
			}
		} else {
			if (hops < 4) {
				w12 = 0;
			} else {
				w12 = 0;
			}
		}
	} else {
		if (hops < 4) {
			if (prod == 0) {
				if (rel_time < 62) {
					if (hops < 2) {
						w12 = 768;
					} else {
						w12 = 768;
					}
				} else {
					if (cons == 3) {
						w12 = 768;
					} else {
						w12 = 768;
					}
				}
			} else {
				if (rel_time < 15363) {
					if (hops < 2) {
						w12 = 512;
					} else {
						w12 = 768;
					}
				} else {
					if (hops < 3) {
						w12 = 1024;
					} else {
						w12 = 1280;
					}
				}
			}
		} else {
			if (cons == 1) {
				if (cons == 3) {
					if (rel_time < 190) {
						w12 = 1280;
					} else {
						w12 = 1024;
					}
				} else {
					if (rel_time < 180) {
						w12 = 1024;
					} else {
						w12 = 768;
					}
				}
			} else {
				if (rel_time < 126) {
					if (rel_time < 62) {
						w12 = 768;
					} else {
						w12 = 768;
					}
				} else {
					w12 = 768;
				}
			}
		}
	}
	int w13;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w13 = 0;
			} else {
				w13 = 0;
			}
		} else {
			if (hops < 4) {
				w13 = 0;
			} else {
				w13 = 0;
			}
		}
	} else {
		if (rel_time < 383) {
			if (cons == 1) {
				if (cons == 2) {
					if (hops < 2) {
						w13 = 512;
					} else {
						w13 = 512;
					}
				} else {
					if (hops < 2) {
						w13 = 512;
					} else {
						w13 = 768;
					}
				}
			} else {
				if (rel_time < 62) {
					if (hops < 3) {
						w13 = 512;
					} else {
						w13 = 512;
					}
				} else {
					if (hops < 4) {
						w13 = 256;
					} else {
						w13 = 512;
					}
				}
			}
		} else {
			if (rel_time < 479) {
				if (hops < 3) {
					if (hops < 2) {
						w13 = 256;
					} else {
						w13 = 256;
					}
				} else {
					if (hops < 4) {
						w13 = 256;
					} else {
						w13 = 256;
					}
				}
			} else {
				if (cons == 4) {
					if (hops < 2) {
						w13 = 256;
					} else {
						w13 = 512;
					}
				} else {
					if (rel_time < 752) {
						w13 = 256;
					} else {
						w13 = 512;
					}
				}
			}
		}
	}
	int w14;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w14 = 0;
			} else {
				w14 = 0;
			}
		} else {
			if (hops < 4) {
				w14 = 0;
			} else {
				w14 = 0;
			}
		}
	} else {
		if (hops < 4) {
			if (cons == 1) {
				if (rel_time < 383) {
					if (prod == 0) {
						w14 = 256;
					} else {
						w14 = 512;
					}
				} else {
					if (rel_time < 479) {
						w14 = 0;
					} else {
						w14 = 256;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 62) {
						w14 = 256;
					} else {
						w14 = 256;
					}
				} else {
					if (rel_time < 126) {
						w14 = 256;
					} else {
						w14 = 256;
					}
				}
			}
		} else {
			if (cons == 4) {
				if (cons == 2) {
					if (rel_time < 479) {
						w14 = 256;
					} else {
						w14 = 256;
					}
				} else {
					if (rel_time < 190) {
						w14 = 512;
					} else {
						w14 = 512;
					}
				}
			} else {
				if (rel_time < 752) {
					if (rel_time < 383) {
						w14 = 512;
					} else {
						w14 = 512;
					}
				} else {
					w14 = 512;
				}
			}
		}
	}
	int w15;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w15 = 0;
			} else {
				w15 = 0;
			}
		} else {
			if (hops < 4) {
				w15 = 0;
			} else {
				w15 = 0;
			}
		}
	} else {
		if (hops < 3) {
			if (cons == 2) {
				if (cons == 4) {
					if (prod == 0) {
						w15 = 256;
					} else {
						w15 = 0;
					}
				} else {
					if (rel_time < 14779) {
						w15 = 256;
					} else {
						w15 = 256;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 190) {
						w15 = 256;
					} else {
						w15 = 0;
					}
				} else {
					if (rel_time < 190) {
						w15 = 256;
					} else {
						w15 = 256;
					}
				}
			}
		} else {
			if (cons == 4) {
				if (hops < 4) {
					if (rel_time < 190) {
						w15 = 256;
					} else {
						w15 = 256;
					}
				} else {
					if (cons == 2) {
						w15 = 256;
					} else {
						w15 = 256;
					}
				}
			} else {
				if (rel_time < 14779) {
					if (hops < 4) {
						w15 = 256;
					} else {
						w15 = 256;
					}
				} else {
					w15 = 512;
				}
			}
		}
	}
	int w16;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w16 = 0;
			} else {
				w16 = 0;
			}
		} else {
			if (hops < 4) {
				w16 = 0;
			} else {
				w16 = 0;
			}
		}
	} else {
		if (hops < 3) {
			if (cons == 2) {
				if (cons == 4) {
					if (prod == 0) {
						w16 = 0;
					} else {
						w16 = 0;
					}
				} else {
					if (rel_time < 752) {
						w16 = 0;
					} else {
						w16 = 0;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 190) {
						w16 = 0;
					} else {
						w16 = 0;
					}
				} else {
					if (rel_time < 111) {
						w16 = 0;
					} else {
						w16 = 256;
					}
				}
			}
		} else {
			if (cons == 4) {
				if (hops < 4) {
					if (rel_time < 111) {
						w16 = 256;
					} else {
						w16 = 0;
					}
				} else {
					if (cons == 2) {
						w16 = 0;
					} else {
						w16 = 256;
					}
				}
			} else {
				if (rel_time < 14779) {
					if (rel_time < 752) {
						w16 = 0;
					} else {
						w16 = 256;
					}
				} else {
					if (hops < 4) {
						w16 = 256;
					} else {
						w16 = 256;
					}
				}
			}
		}
	}
	int w17;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w17 = 0;
			} else {
				w17 = 0;
			}
		} else {
			if (hops < 4) {
				w17 = 0;
			} else {
				w17 = 0;
			}
		}
	} else {
		if (rel_time < 15363) {
			if (hops < 4) {
				if (prod == 0) {
					if (hops < 2) {
						w17 = 0;
					} else {
						w17 = 0;
					}
				} else {
					if (rel_time < 126) {
						w17 = 0;
					} else {
						w17 = 0;
					}
				}
			} else {
				if (cons == 4) {
					if (rel_time < 190) {
						w17 = 0;
					} else {
						w17 = 0;
					}
				} else {
					if (rel_time < 752) {
						w17 = 0;
					} else {
						w17 = 0;
					}
				}
			}
		} else {
			if (hops < 2) {
				w17 = 0;
			} else {
				if (hops < 4) {
					w17 = 256;
				} else {
					w17 = 256;
				}
			}
		}
	}
	int w18;
	if (size < 126) {
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
				w18 = 0;
			}
		}
	} else {
		if (hops < 3) {
			if (cons == 2) {
				if (cons == 4) {
					if (prod == 0) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				} else {
					if (rel_time < 752) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 190) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				} else {
					if (rel_time < 111) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				}
			}
		} else {
			if (cons == 4) {
				if (rel_time < 190) {
					if (cons == 2) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				} else {
					if (rel_time < 479) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				}
			} else {
				if (rel_time < 752) {
					if (rel_time < 383) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				} else {
					if (rel_time < 14779) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				}
			}
		}
	}
	int w19;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w19 = 0;
			} else {
				w19 = 0;
			}
		} else {
			if (hops < 4) {
				w19 = 0;
			} else {
				w19 = 0;
			}
		}
	} else {
		if (rel_time < 383) {
			if (rel_time < 180) {
				if (prod == 0) {
					if (hops < 2) {
						w19 = 0;
					} else {
						w19 = 0;
					}
				} else {
					if (hops < 2) {
						w19 = 0;
					} else {
						w19 = 0;
					}
				}
			} else {
				if (rel_time < 190) {
					if (hops < 2) {
						w19 = 0;
					} else {
						w19 = 0;
					}
				} else {
					if (hops < 2) {
						w19 = 0;
					} else {
						w19 = 0;
					}
				}
			}
		} else {
			if (rel_time < 752) {
				if (hops < 3) {
					if (rel_time < 384) {
						w19 = 0;
					} else {
						w19 = 0;
					}
				} else {
					if (rel_time < 479) {
						w19 = 0;
					} else {
						w19 = 0;
					}
				}
			} else {
				if (cons == 4) {
					if (hops < 2) {
						w19 = 0;
					} else {
						w19 = 0;
					}
				} else {
					if (rel_time < 14779) {
						w19 = 0;
					} else {
						w19 = 0;
					}
				}
			}
		}
	}
	int w20;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w20 = 0;
			} else {
				w20 = 0;
			}
		} else {
			if (hops < 4) {
				w20 = 0;
			} else {
				w20 = 0;
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 383) {
				if (cons == 1) {
					if (prod == 0) {
						w20 = 0;
					} else {
						w20 = 0;
					}
				} else {
					if (hops < 2) {
						w20 = 0;
					} else {
						w20 = 0;
					}
				}
			} else {
				if (rel_time < 752) {
					if (hops < 3) {
						w20 = 0;
					} else {
						w20 = 0;
					}
				} else {
					if (cons == 4) {
						w20 = 0;
					} else {
						w20 = 0;
					}
				}
			}
		} else {
			if (rel_time < 126) {
				if (rel_time < 62) {
					w20 = 0;
				} else {
					if (rel_time < 111) {
						w20 = 0;
					} else {
						w20 = 0;
					}
				}
			} else {
				if (rel_time < 190) {
					if (rel_time < 180) {
						w20 = 0;
					} else {
						w20 = 0;
					}
				} else {
					if (rel_time < 578) {
						w20 = 0;
					} else {
						w20 = 0;
					}
				}
			}
		}
	}
	int w21;
	if (size < 126) {
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
	} else {
		if (hops < 3) {
			if (cons == 2) {
				if (rel_time < 15363) {
					if (prod == 0) {
						w21 = 0;
					} else {
						w21 = 0;
					}
				} else {
					if (hops < 2) {
						w21 = 0;
					} else {
						w21 = 0;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1142) {
						w21 = 0;
					} else {
						w21 = 0;
					}
				} else {
					if (rel_time < 111) {
						w21 = 0;
					} else {
						w21 = 0;
					}
				}
			}
		} else {
			if (cons == 2) {
				if (rel_time < 946) {
					if (prod == 0) {
						w21 = 0;
					} else {
						w21 = 0;
					}
				} else {
					if (cons == 1) {
						w21 = 0;
					} else {
						w21 = 0;
					}
				}
			} else {
				if (rel_time < 190) {
					if (rel_time < 111) {
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
		}
	}
	int w22;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w22 = 0;
			} else {
				w22 = 0;
			}
		} else {
			if (hops < 4) {
				w22 = 0;
			} else {
				w22 = 0;
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 15363) {
				if (rel_time < 383) {
					if (rel_time < 180) {
						w22 = 0;
					} else {
						w22 = 0;
					}
				} else {
					if (rel_time < 752) {
						w22 = 0;
					} else {
						w22 = 0;
					}
				}
			} else {
				if (hops < 2) {
					w22 = 0;
				} else {
					w22 = 0;
				}
			}
		} else {
			if (cons == 4) {
				if (rel_time < 126) {
					if (rel_time < 62) {
						w22 = 0;
					} else {
						w22 = 0;
					}
				} else {
					if (rel_time < 190) {
						w22 = 0;
					} else {
						w22 = 0;
					}
				}
			} else {
				if (rel_time < 383) {
					w22 = 0;
				} else {
					if (rel_time < 15375) {
						w22 = 0;
					} else {
						w22 = 0;
					}
				}
			}
		}
	}
	int w23;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w23 = 0;
			} else {
				w23 = 0;
			}
		} else {
			if (hops < 4) {
				w23 = 0;
			} else {
				w23 = 0;
			}
		}
	} else {
		if (hops < 3) {
			if (cons == 2) {
				if (rel_time < 1163) {
					if (rel_time < 383) {
						w23 = 0;
					} else {
						w23 = 0;
					}
				} else {
					if (rel_time < 15375) {
						w23 = 0;
					} else {
						w23 = 0;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 111) {
						w23 = 0;
					} else {
						w23 = 0;
					}
				} else {
					if (rel_time < 111) {
						w23 = 0;
					} else {
						w23 = 0;
					}
				}
			}
		} else {
			if (cons == 2) {
				if (rel_time < 479) {
					if (prod == 0) {
						w23 = 0;
					} else {
						w23 = 0;
					}
				} else {
					if (cons == 3) {
						w23 = 0;
					} else {
						w23 = 0;
					}
				}
			} else {
				if (rel_time < 190) {
					if (rel_time < 111) {
						w23 = 0;
					} else {
						w23 = 0;
					}
				} else {
					if (hops < 4) {
						w23 = 0;
					} else {
						w23 = 0;
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23) >> 8;
}
