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
	if (size < 133) {
		if (rel_time < 1095) {
			w0 = 56576;
		} else {
			if (prod == 0) {
				w0 = 45312;
			} else {
				w0 = 47872;
			}
		}
	} else {
		w0 = 59904;
	}
	int w1;
	if (size < 133) {
		if (rel_time < 1095) {
			w1 = 39424;
		} else {
			if (prod == 0) {
				w1 = 31744;
			} else {
				w1 = 33536;
			}
		}
	} else {
		w1 = 41984;
	}
	int w2;
	if (size < 133) {
		if (rel_time < 1095) {
			w2 = 27648;
		} else {
			if (prod == 0) {
				if (hops < 3) {
					w2 = 21760;
				} else {
					w2 = 22784;
				}
			} else {
				w2 = 23296;
			}
		}
	} else {
		w2 = 29440;
	}
	int w3;
	if (size < 133) {
		if (rel_time < 1095) {
			if (hops < 3) {
				w3 = 18944;
			} else {
				w3 = 19968;
			}
		} else {
			if (hops < 2) {
				if (prod == 0) {
					w3 = 15104;
				} else {
					w3 = 15616;
				}
			} else {
				if (prod == 0) {
					w3 = 15872;
				} else {
					w3 = 16640;
				}
			}
		}
	} else {
		if (rel_time < 554) {
			w3 = 19968;
		} else {
			w3 = 20992;
		}
	}
	int w4;
	if (size < 133) {
		if (rel_time < 1095) {
			if (hops < 2) {
				w4 = 13056;
			} else {
				w4 = 13824;
			}
		} else {
			if (hops < 3) {
				if (prod == 0) {
					w4 = 10496;
				} else {
					w4 = 11008;
				}
			} else {
				if (prod == 0) {
					w4 = 11264;
				} else {
					w4 = 12032;
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 533) {
				w4 = 13056;
			} else {
				w4 = 14080;
			}
		} else {
			if (rel_time < 554) {
				w4 = 14336;
			} else {
				w4 = 14848;
			}
		}
	}
	int w5;
	if (size < 133) {
		if (rel_time < 1095) {
			if (hops < 3) {
				w5 = 9216;
			} else {
				w5 = 9728;
			}
		} else {
			if (hops < 4) {
				if (prod == 0) {
					if (hops < 2) {
						w5 = 7168;
					} else {
						w5 = 7680;
					}
				} else {
					if (rel_time < 11197) {
						if (rel_time < 1656) {
							w5 = 6656;
						} else {
							w5 = 7936;
						}
					} else {
						w5 = 6656;
					}
				}
			} else {
				w5 = 8448;
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 533) {
				w5 = 9216;
			} else {
				w5 = 9984;
			}
		} else {
			w5 = 10496;
		}
	}
	int w6;
	if (size < 133) {
		if (rel_time < 1095) {
			if (rel_time < 677) {
				if (hops < 4) {
					w6 = 6400;
				} else {
					w6 = 6912;
				}
			} else {
				w6 = 6912;
			}
		} else {
			if (hops < 2) {
				w6 = 5120;
			} else {
				if (prod == 0) {
					if (hops < 4) {
						w6 = 5376;
					} else {
						w6 = 5632;
					}
				} else {
					if (rel_time < 11197) {
						if (rel_time < 10636) {
							w6 = 5632;
						} else {
							w6 = 6912;
						}
					} else {
						w6 = 4864;
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			w6 = 6656;
		} else {
			if (rel_time < 533) {
				w6 = 6656;
			} else {
				if (hops < 4) {
					w6 = 7168;
				} else {
					w6 = 7680;
				}
			}
		}
	}
	int w7;
	if (size < 133) {
		if (rel_time < 1095) {
			if (hops < 2) {
				w7 = 4352;
			} else {
				if (hops < 4) {
					w7 = 4608;
				} else {
					w7 = 5120;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 11335) {
					if (prod == 0) {
						w7 = 3584;
					} else {
						if (rel_time < 10636) {
							w7 = 3584;
						} else {
							w7 = 4608;
						}
					}
				} else {
					w7 = 3072;
				}
			} else {
				if (prod == 0) {
					w7 = 3840;
				} else {
					if (rel_time < 1656) {
						w7 = 3328;
					} else {
						if (rel_time < 2217) {
							w7 = 5376;
						} else {
							w7 = 4096;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 533) {
				w7 = 4352;
			} else {
				w7 = 4864;
			}
		} else {
			if (rel_time < 603) {
				w7 = 4864;
			} else {
				w7 = 5376;
			}
		}
	}
	int w8;
	if (size < 133) {
		if (rel_time < 1095) {
			if (rel_time < 677) {
				if (hops < 2) {
					w8 = 2816;
				} else {
					w8 = 3072;
				}
			} else {
				if (hops < 4) {
					w8 = 3328;
				} else {
					w8 = 3840;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 11335) {
						if (prod == 0) {
							w8 = 2304;
						} else {
							w8 = 2560;
						}
					} else {
						w8 = 1792;
					}
				} else {
					if (prod == 0) {
						w8 = 2560;
					} else {
						if (rel_time < 1656) {
							w8 = 2048;
						} else {
							w8 = 2816;
						}
					}
				}
			} else {
				if (prod == 0) {
					w8 = 2816;
				} else {
					if (rel_time < 10781) {
						if (rel_time < 1233) {
							w8 = 2304;
						} else {
							w8 = 3328;
						}
					} else {
						w8 = 2048;
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 533) {
				w8 = 3072;
			} else {
				if (hops < 2) {
					w8 = 3328;
				} else {
					if (rel_time < 10141) {
						w8 = 3584;
					} else {
						w8 = 2816;
					}
				}
			}
		} else {
			w8 = 3840;
		}
	}
	int w9;
	if (size < 133) {
		if (rel_time < 1095) {
			if (rel_time < 677) {
				if (hops < 3) {
					w9 = 2048;
				} else {
					w9 = 2304;
				}
			} else {
				if (hops < 2) {
					w9 = 2048;
				} else {
					w9 = 2304;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 1656) {
						if (rel_time < 1232) {
							w9 = 1536;
						} else {
							w9 = 1024;
						}
					} else {
						if (rel_time < 2217) {
							w9 = 2048;
						} else {
							w9 = 1536;
						}
					}
				} else {
					if (rel_time < 11335) {
						if (prod == 0) {
							w9 = 1792;
						} else {
							w9 = 1792;
						}
					} else {
						w9 = 1280;
					}
				}
			} else {
				if (prod == 0) {
					w9 = 1792;
				} else {
					if (rel_time < 10781) {
						w9 = 2304;
					} else {
						w9 = 1536;
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 533) {
				w9 = 2048;
			} else {
				if (rel_time < 10099) {
					if (rel_time < 9536) {
						if (rel_time < 8976) {
							w9 = 2304;
						} else {
							w9 = 1792;
						}
					} else {
						w9 = 2560;
					}
				} else {
					w9 = 1792;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 533) {
					w9 = 2304;
				} else {
					w9 = 2304;
				}
			} else {
				w9 = 2560;
			}
		}
	}
	int w10;
	if (size < 133) {
		if (rel_time < 1095) {
			if (hops < 4) {
				if (rel_time < 677) {
					if (hops < 2) {
						w10 = 1280;
					} else {
						w10 = 1536;
					}
				} else {
					w10 = 1536;
				}
			} else {
				w10 = 1792;
			}
		} else {
			if (hops < 4) {
				if (prod == 0) {
					if (hops < 2) {
						w10 = 1024;
					} else {
						w10 = 1280;
					}
				} else {
					if (rel_time < 1656) {
						if (hops < 3) {
							w10 = 768;
						} else {
							w10 = 1024;
						}
					} else {
						if (rel_time < 2217) {
							w10 = 2304;
						} else {
							w10 = 1280;
						}
					}
				}
			} else {
				if (prod == 0) {
					w10 = 1280;
				} else {
					if (rel_time < 1233) {
						w10 = 1024;
					} else {
						if (rel_time < 2217) {
							w10 = 2304;
						} else {
							w10 = 1536;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 603) {
			if (hops < 2) {
				w10 = 1280;
			} else {
				w10 = 1536;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1161) {
					w10 = 2048;
				} else {
					if (rel_time < 1677) {
						w10 = 1024;
					} else {
						if (rel_time < 2284) {
							w10 = 2048;
						} else {
							w10 = 1536;
						}
					}
				}
			} else {
				if (rel_time < 10141) {
					if (rel_time < 1161) {
						w10 = 2304;
					} else {
						if (rel_time < 1723) {
							w10 = 1280;
						} else {
							w10 = 1792;
						}
					}
				} else {
					w10 = 1280;
				}
			}
		}
	}
	int w11;
	if (size < 133) {
		if (rel_time < 1095) {
			if (hops < 4) {
				if (hops < 2) {
					w11 = 1024;
				} else {
					if (rel_time < 677) {
						w11 = 1024;
					} else {
						w11 = 1024;
					}
				}
			} else {
				if (rel_time < 604) {
					w11 = 1024;
				} else {
					w11 = 1280;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 10212) {
					if (rel_time < 9651) {
						if (rel_time < 9090) {
							w11 = 768;
						} else {
							w11 = 256;
						}
					} else {
						if (rel_time < 10075) {
							w11 = 2048;
						} else {
							w11 = 768;
						}
					}
				} else {
					if (rel_time < 10636) {
						w11 = -256;
					} else {
						if (rel_time < 11197) {
							w11 = 1024;
						} else {
							w11 = 768;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (hops < 4) {
						w11 = 768;
					} else {
						w11 = 768;
					}
				} else {
					if (rel_time < 2356) {
						if (rel_time < 2217) {
							w11 = 1024;
						} else {
							w11 = 0;
						}
					} else {
						if (rel_time < 3340) {
							w11 = 2048;
						} else {
							w11 = 1024;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 603) {
				if (hops < 2) {
					w11 = 1024;
				} else {
					if (rel_time < 554) {
						if (rel_time < 533) {
							w11 = 1024;
						} else {
							w11 = 1280;
						}
					} else {
						w11 = 768;
					}
				}
			} else {
				if (rel_time < 10141) {
					if (rel_time < 9540) {
						if (rel_time < 9019) {
							w11 = 1024;
						} else {
							w11 = 768;
						}
					} else {
						w11 = 1536;
					}
				} else {
					w11 = 768;
				}
			}
		} else {
			if (rel_time < 603) {
				w11 = 1024;
			} else {
				w11 = 1280;
			}
		}
	}
	int w12;
	if (size < 133) {
		if (rel_time < 1095) {
			if (hops < 4) {
				if (rel_time < 677) {
					if (hops < 2) {
						w12 = 512;
					} else {
						w12 = 768;
					}
				} else {
					if (hops < 2) {
						w12 = 768;
					} else {
						w12 = 768;
					}
				}
			} else {
				if (rel_time < 604) {
					w12 = 768;
				} else {
					w12 = 1024;
				}
			}
		} else {
			if (rel_time < 10773) {
				if (rel_time < 10212) {
					if (rel_time < 9651) {
						if (rel_time < 9090) {
							w12 = 512;
						} else {
							w12 = 256;
						}
					} else {
						if (rel_time < 10075) {
							w12 = 1536;
						} else {
							w12 = 512;
						}
					}
				} else {
					if (rel_time < 10636) {
						if (hops < 3) {
							w12 = 0;
						} else {
							w12 = -256;
						}
					} else {
						if (hops < 2) {
							w12 = 256;
						} else {
							w12 = 512;
						}
					}
				}
			} else {
				if (rel_time < 11197) {
					w12 = 1280;
				} else {
					if (rel_time < 11335) {
						w12 = 512;
					} else {
						if (hops < 2) {
							w12 = 256;
						} else {
							w12 = 256;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 533) {
				if (hops < 2) {
					w12 = 512;
				} else {
					w12 = 768;
				}
			} else {
				if (rel_time < 10099) {
					if (rel_time < 8458) {
						if (rel_time < 7853) {
							w12 = 768;
						} else {
							w12 = 256;
						}
					} else {
						if (rel_time < 8976) {
							w12 = 1280;
						} else {
							w12 = 768;
						}
					}
				} else {
					w12 = 512;
				}
			}
		} else {
			if (rel_time < 603) {
				if (rel_time < 554) {
					if (rel_time < 533) {
						w12 = 768;
					} else {
						w12 = 1024;
					}
				} else {
					if (hops < 4) {
						w12 = 512;
					} else {
						w12 = 768;
					}
				}
			} else {
				if (rel_time < 1161) {
					w12 = 1024;
				} else {
					if (rel_time < 1723) {
						w12 = 512;
					} else {
						if (rel_time < 2284) {
							w12 = 1280;
						} else {
							w12 = 768;
						}
					}
				}
			}
		}
	}
	int w13;
	if (size < 133) {
		if (rel_time < 2217) {
			if (rel_time < 1794) {
				if (rel_time < 1095) {
					if (hops < 4) {
						if (prod == 1) {
							w13 = 512;
						} else {
							w13 = 256;
						}
					} else {
						if (rel_time < 604) {
							w13 = 512;
						} else {
							w13 = 512;
						}
					}
				} else {
					if (rel_time < 1676) {
						if (prod == 0) {
							w13 = 256;
						} else {
							w13 = 0;
						}
					} else {
						if (prod == 0) {
							w13 = 256;
						} else {
							w13 = 1024;
						}
					}
				}
			} else {
				w13 = 1024;
			}
		} else {
			if (rel_time < 2779) {
				if (rel_time < 2355) {
					if (hops < 2) {
						w13 = 256;
					} else {
						w13 = 256;
					}
				} else {
					if (hops < 3) {
						w13 = -512;
					} else {
						if (hops < 4) {
							w13 = -256;
						} else {
							w13 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3340) {
					if (rel_time < 2916) {
						if (hops < 2) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					} else {
						w13 = 1536;
					}
				} else {
					if (rel_time < 3901) {
						if (rel_time < 3477) {
							w13 = 256;
						} else {
							w13 = -512;
						}
					} else {
						if (rel_time < 4462) {
							w13 = 768;
						} else {
							w13 = 256;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 7335) {
				if (rel_time < 6732) {
					if (rel_time < 6213) {
						if (rel_time < 5609) {
							w13 = 512;
						} else {
							w13 = 0;
						}
					} else {
						w13 = 1024;
					}
				} else {
					if (rel_time < 7290) {
						w13 = 0;
					} else {
						w13 = 0;
					}
				}
			} else {
				if (rel_time < 7896) {
					w13 = 1024;
				} else {
					if (rel_time < 8458) {
						if (hops < 3) {
							w13 = 0;
						} else {
							w13 = 0;
						}
					} else {
						if (rel_time < 9019) {
							w13 = 768;
						} else {
							w13 = 512;
						}
					}
				}
			}
		} else {
			if (rel_time < 603) {
				w13 = 512;
			} else {
				if (rel_time < 10141) {
					if (rel_time < 9580) {
						if (rel_time < 9019) {
							w13 = 768;
						} else {
							w13 = 256;
						}
					} else {
						w13 = 1024;
					}
				} else {
					w13 = 256;
				}
			}
		}
	}
	int w14;
	if (size < 133) {
		if (rel_time < 2217) {
			if (rel_time < 1794) {
				if (rel_time < 1095) {
					if (hops < 2) {
						if (rel_time < 677) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					} else {
						if (rel_time < 677) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1232) {
							w14 = 256;
						} else {
							w14 = 0;
						}
					} else {
						if (rel_time < 1676) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					}
				}
			} else {
				w14 = 768;
			}
		} else {
			if (rel_time < 2779) {
				if (rel_time < 2355) {
					if (hops < 2) {
						w14 = 256;
					} else {
						w14 = 256;
					}
				} else {
					if (hops < 3) {
						w14 = -256;
					} else {
						if (hops < 4) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3340) {
					if (rel_time < 2916) {
						if (hops < 2) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					} else {
						w14 = 1024;
					}
				} else {
					if (rel_time < 4038) {
						if (prod == 0) {
							w14 = 0;
						} else {
							w14 = -256;
						}
					} else {
						if (rel_time < 4462) {
							w14 = 1280;
						} else {
							w14 = 256;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5090) {
			if (rel_time < 4529) {
				if (rel_time < 3968) {
					if (rel_time < 3406) {
						if (rel_time < 2845) {
							w14 = 256;
						} else {
							w14 = 768;
						}
					} else {
						if (rel_time < 3923) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					}
				} else {
					w14 = 768;
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w14 = 0;
					} else {
						w14 = 0;
					}
				} else {
					w14 = 0;
				}
			}
		} else {
			if (rel_time < 5651) {
				w14 = 768;
			} else {
				if (rel_time < 6213) {
					if (hops < 2) {
						w14 = 0;
					} else {
						if (hops < 4) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					}
				} else {
					if (rel_time < 6774) {
						w14 = 512;
					} else {
						if (rel_time < 7335) {
							w14 = 0;
						} else {
							w14 = 256;
						}
					}
				}
			}
		}
	}
	int w15;
	if (hops < 4) {
		if (size < 133) {
			if (rel_time < 2217) {
				if (rel_time < 1794) {
					if (rel_time < 1232) {
						if (prod == 0) {
							w15 = 0;
						} else {
							w15 = 256;
						}
					} else {
						if (rel_time < 1656) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				} else {
					if (hops < 3) {
						w15 = 512;
					} else {
						w15 = 256;
					}
				}
			} else {
				if (rel_time < 5027) {
					if (rel_time < 4600) {
						if (rel_time < 4038) {
							w15 = 0;
						} else {
							w15 = 256;
						}
					} else {
						if (prod == 0) {
							w15 = 0;
						} else {
							w15 = -768;
						}
					}
				} else {
					if (rel_time < 5585) {
						if (rel_time < 5161) {
							w15 = 0;
						} else {
							w15 = 1280;
						}
					} else {
						if (rel_time < 6146) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 3922) {
					if (rel_time < 3360) {
						if (rel_time < 2799) {
							w15 = 0;
						} else {
							w15 = 512;
						}
					} else {
						w15 = 0;
					}
				} else {
					if (rel_time < 4483) {
						w15 = 512;
					} else {
						if (rel_time < 5046) {
							w15 = 0;
						} else {
							w15 = 256;
						}
					}
				}
			} else {
				if (rel_time < 10141) {
					if (rel_time < 9540) {
						if (rel_time < 9019) {
							w15 = 256;
						} else {
							w15 = 0;
						}
					} else {
						w15 = 512;
					}
				} else {
					if (rel_time < 10661) {
						w15 = 0;
					} else {
						w15 = 0;
					}
				}
			}
		}
	} else {
		if (prod == 1) {
			if (prod == 2) {
				if (rel_time < 5090) {
					if (rel_time < 4529) {
						if (rel_time < 3968) {
							w15 = 256;
						} else {
							w15 = 768;
						}
					} else {
						if (rel_time < 4602) {
							w15 = -512;
						} else {
							w15 = 0;
						}
					}
				} else {
					if (rel_time < 5164) {
						w15 = 1280;
					} else {
						if (rel_time < 6213) {
							w15 = 0;
						} else {
							w15 = 256;
						}
					}
				}
			} else {
				if (rel_time < 1114) {
					w15 = 256;
				} else {
					w15 = 256;
				}
			}
		} else {
			w15 = 256;
		}
	}
	int w16;
	if (rel_time < 10212) {
		if (rel_time < 9580) {
			if (rel_time < 9090) {
				if (rel_time < 8462) {
					if (rel_time < 7967) {
						if (rel_time < 7406) {
							w16 = 0;
						} else {
							w16 = 512;
						}
					} else {
						if (rel_time < 8391) {
							w16 = -1024;
						} else {
							w16 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
							w16 = 0;
						} else {
							w16 = 256;
						}
					} else {
						w16 = 1280;
					}
				}
			} else {
				if (prod == 0) {
					if (rel_time < 9533) {
						if (rel_time < 9514) {
							w16 = 0;
						} else {
							w16 = 256;
						}
					} else {
						if (rel_time < 9540) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				} else {
					w16 = -768;
				}
			}
		} else {
			if (prod == 0) {
				if (size < 133) {
					if (rel_time < 9651) {
						if (hops < 3) {
							w16 = 256;
						} else {
							w16 = 0;
						}
					} else {
						if (hops < 2) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				} else {
					w16 = 256;
				}
			} else {
				if (hops < 3) {
					w16 = 512;
				} else {
					w16 = 1024;
				}
			}
		}
	} else {
		if (rel_time < 10636) {
			if (hops < 3) {
				w16 = -256;
			} else {
				w16 = -512;
			}
		} else {
			if (prod == 0) {
				if (rel_time < 10661) {
					if (hops < 3) {
						if (rel_time < 10639) {
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
					if (hops < 2) {
						if (prod == 1) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (prod == 1) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				}
			} else {
				if (rel_time < 11197) {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 768;
						} else {
							w16 = 256;
						}
					} else {
						w16 = 768;
					}
				} else {
					if (hops < 2) {
						w16 = 0;
					} else {
						if (hops < 3) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				}
			}
		}
	}
	int w17;
	if (rel_time < 6774) {
		if (rel_time < 6217) {
			if (rel_time < 5722) {
				if (rel_time < 5161) {
					if (rel_time < 4600) {
						if (rel_time < 4038) {
							w17 = 0;
						} else {
							w17 = 256;
						}
					} else {
						if (prod == 0) {
							w17 = 0;
						} else {
							w17 = -512;
						}
					}
				} else {
					if (rel_time < 5585) {
						w17 = 768;
					} else {
						if (size < 133) {
							w17 = 0;
						} else {
							w17 = 256;
						}
					}
				}
			} else {
				if (rel_time < 6146) {
					w17 = -768;
				} else {
					if (size < 133) {
						if (hops < 2) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 6169) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (rel_time < 6727) {
					if (hops < 4) {
						if (hops < 3) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 6709) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 6732) {
						w17 = 256;
					} else {
						w17 = 512;
					}
				}
			} else {
				w17 = 1280;
			}
		}
	} else {
		if (rel_time < 7269) {
			if (prod == 0) {
				if (hops < 2) {
					if (rel_time < 6777) {
						w17 = 0;
					} else {
						w17 = 0;
					}
				} else {
					if (rel_time < 6845) {
						if (rel_time < 6777) {
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
				}
			} else {
				w17 = -1024;
			}
		} else {
			if (rel_time < 7830) {
				if (rel_time < 7406) {
					if (size < 133) {
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
					w17 = 1024;
				}
			} else {
				if (rel_time < 8458) {
					if (prod == 0) {
						if (rel_time < 7896) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						w17 = -512;
					}
				} else {
					if (rel_time < 8952) {
						if (prod == 0) {
							w17 = 0;
						} else {
							w17 = 768;
						}
					} else {
						if (rel_time < 9514) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			}
		}
	}
	int w18;
	if (hops < 3) {
		if (rel_time < 3409) {
			if (rel_time < 2916) {
				if (rel_time < 2355) {
					if (rel_time < 1794) {
						if (rel_time < 1232) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (size < 133) {
							w18 = 0;
						} else {
							w18 = 256;
						}
					}
				} else {
					if (rel_time < 2779) {
						w18 = -256;
					} else {
						if (size < 133) {
							w18 = 0;
						} else {
							w18 = -256;
						}
					}
				}
			} else {
				if (rel_time < 3340) {
					w18 = 512;
				} else {
					if (size < 133) {
						if (hops < 2) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_time < 3360) {
							w18 = 256;
						} else {
							w18 = 256;
						}
					}
				}
			}
		} else {
			if (rel_time < 3923) {
				if (prod == 0) {
					if (rel_time < 3921) {
						if (rel_time < 3477) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_time < 3922) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				} else {
					w18 = -256;
				}
			} else {
				if (rel_time < 4462) {
					if (rel_time < 4038) {
						if (hops < 2) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						w18 = 512;
					}
				} else {
					if (rel_time < 5046) {
						if (prod == 0) {
							w18 = 0;
						} else {
							w18 = -512;
						}
					} else {
						if (rel_time < 5609) {
							w18 = 256;
						} else {
							w18 = 0;
						}
					}
				}
			}
		}
	} else {
		if (prod == 2) {
			if (rel_time < 10149) {
				if (rel_time < 9585) {
					if (rel_time < 9090) {
						if (rel_time < 8462) {
							w18 = 0;
						} else {
							w18 = 256;
						}
					} else {
						if (rel_time < 9094) {
							w18 = -512;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (rel_time < 9654) {
						w18 = 768;
					} else {
						if (rel_time < 10141) {
							w18 = 256;
						} else {
							w18 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10217) {
					w18 = -256;
				} else {
					if (rel_time < 10781) {
						if (rel_time < 10708) {
							w18 = 0;
						} else {
							w18 = 512;
						}
					} else {
						if (rel_time < 11335) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 553) {
				if (hops < 4) {
					if (rel_time < 534) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				} else {
					w18 = 0;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 7849) {
						if (rel_time < 7288) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_time < 9533) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (rel_time < 7849) {
						if (rel_time < 7272) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_time < 10639) {
							w18 = 0;
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
		if (prod == 1) {
			if (rel_time < 10658) {
				if (rel_time < 10099) {
					if (rel_time < 9536) {
						if (rel_time < 8976) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 10075) {
							w19 = 256;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (rel_time < 10636) {
						w19 = -256;
					} else {
						if (rel_time < 10639) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				}
			} else {
				if (rel_time < 11197) {
					w19 = 256;
				} else {
					if (rel_time < 11264) {
						w19 = 0;
					} else {
						w19 = 0;
					}
				}
			}
		} else {
			if (rel_time < 677) {
				w19 = 0;
			} else {
				if (rel_time < 7967) {
					if (rel_time < 7406) {
						if (rel_time < 5161) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 7899) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (rel_time < 9651) {
						if (rel_time < 9090) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 10773) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10212) {
			if (rel_time < 9580) {
				if (rel_time < 9090) {
					if (rel_time < 8462) {
						if (rel_time < 7899) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (prod == 0) {
							w19 = 0;
						} else {
							w19 = 512;
						}
					}
				} else {
					if (prod == 0) {
						if (rel_time < 9533) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (hops < 3) {
							w19 = -512;
						} else {
							w19 = -256;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (rel_time < 9651) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						w19 = 0;
					}
				} else {
					if (hops < 3) {
						w19 = 256;
					} else {
						w19 = 512;
					}
				}
			}
		} else {
			if (rel_time < 10636) {
				w19 = -256;
			} else {
				if (rel_time < 11335) {
					if (prod == 0) {
						if (rel_time < 10703) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (hops < 3) {
							w19 = 0;
						} else {
							w19 = 256;
						}
					}
				} else {
					if (hops < 3) {
						w19 = 0;
					} else {
						if (hops < 4) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				}
			}
		}
	}
	int w20;
	if (hops < 4) {
		if (rel_time < 2284) {
			if (rel_time < 2237) {
				if (rel_time < 1794) {
					if (rel_time < 1232) {
						if (rel_time < 1114) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (size < 133) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				} else {
					if (rel_time < 2217) {
						if (hops < 3) {
							w20 = 256;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_time < 2218) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 2238) {
						w20 = 256;
					} else {
						w20 = 0;
					}
				} else {
					w20 = 256;
				}
			}
		} else {
			if (rel_time < 2845) {
				if (prod == 0) {
					if (rel_time < 2798) {
						if (hops < 2) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_time < 2800) {
							w20 = 0;
						} else {
							w20 = -256;
						}
					}
				} else {
					w20 = -256;
				}
			} else {
				if (rel_time < 3406) {
					if (prod == 0) {
						if (rel_time < 3359) {
							w20 = 0;
						} else {
							w20 = 256;
						}
					} else {
						w20 = 256;
					}
				} else {
					if (rel_time < 3969) {
						if (prod == 0) {
							w20 = 0;
						} else {
							w20 = -256;
						}
					} else {
						if (rel_time < 4462) {
							w20 = 256;
						} else {
							w20 = 0;
						}
					}
				}
			}
		}
	} else {
		if (prod == 1) {
			if (prod == 2) {
				if (rel_time < 7896) {
					if (rel_time < 7335) {
						if (rel_time < 6774) {
							w20 = 0;
						} else {
							w20 = -256;
						}
					} else {
						if (rel_time < 7409) {
							w20 = 768;
						} else {
							w20 = 256;
						}
					}
				} else {
					if (rel_time < 8458) {
						if (rel_time < 7973) {
							w20 = -256;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_time < 9019) {
							w20 = 256;
						} else {
							w20 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7849) {
					if (rel_time < 3359) {
						if (rel_time < 1657) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_time < 3921) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				} else {
					if (rel_time < 9514) {
						w20 = 0;
					} else {
						if (rel_time < 10077) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 604) {
				w20 = 0;
			} else {
				if (rel_time < 4531) {
					if (rel_time < 3969) {
						if (rel_time < 2916) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_time < 4530) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				} else {
					if (rel_time < 7899) {
						if (rel_time < 7337) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_time < 8462) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			}
		}
	}
	int w21;
	if (rel_time < 7406) {
		if (rel_time < 6845) {
			if (rel_time < 6217) {
				if (rel_time < 5722) {
					if (rel_time < 5161) {
						if (rel_time < 4529) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_time < 5585) {
							w21 = 512;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (rel_time < 6146) {
						w21 = -512;
					} else {
						if (size < 133) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 4) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_time < 6732) {
							w21 = 0;
						} else {
							w21 = 256;
						}
					}
				} else {
					w21 = 768;
				}
			}
		} else {
			if (prod == 0) {
				if (size < 133) {
					if (rel_time < 7272) {
						if (hops < 2) {
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
					if (hops < 4) {
						w21 = 0;
					} else {
						w21 = 0;
					}
				}
			} else {
				if (hops < 4) {
					w21 = -768;
				} else {
					w21 = -512;
				}
			}
		}
	} else {
		if (rel_time < 7830) {
			w21 = 768;
		} else {
			if (rel_time < 8391) {
				if (rel_time < 7967) {
					if (size < 133) {
						if (rel_time < 7849) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (hops < 2) {
							w21 = 0;
						} else {
							w21 = 256;
						}
					}
				} else {
					if (hops < 4) {
						w21 = -512;
					} else {
						w21 = -256;
					}
				}
			} else {
				if (rel_time < 9019) {
					if (prod == 0) {
						if (rel_time < 8972) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (hops < 2) {
							w21 = 512;
						} else {
							w21 = 256;
						}
					}
				} else {
					if (rel_time < 9514) {
						if (prod == 0) {
							w21 = 0;
						} else {
							w21 = -256;
						}
					} else {
						if (rel_time < 10141) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				}
			}
		}
	}
	int w22;
	if (hops < 2) {
		if (rel_time < 10773) {
			if (rel_time < 10212) {
				if (rel_time < 8529) {
					if (rel_time < 7899) {
						if (rel_time < 7406) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (prod == 0) {
							w22 = 0;
						} else {
							w22 = -256;
						}
					}
				} else {
					if (rel_time < 8952) {
						w22 = 256;
					} else {
						if (rel_time < 9514) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10636) {
					w22 = -256;
				} else {
					if (rel_time < 10639) {
						w22 = 0;
					} else {
						if (rel_time < 10708) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 11197) {
				w22 = 256;
			} else {
				if (rel_time < 11335) {
					if (rel_time < 11267) {
						if (rel_time < 11203) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						w22 = 0;
					}
				} else {
					w22 = 0;
				}
			}
		}
	} else {
		if (prod == 2) {
			if (rel_time < 5090) {
				if (rel_time < 4600) {
					if (rel_time < 4038) {
						if (rel_time < 3477) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (rel_time < 4529) {
							w22 = 256;
						} else {
							w22 = 0;
						}
					}
				} else {
					if (rel_time < 5024) {
						w22 = -256;
					} else {
						if (hops < 4) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				}
			} else {
				if (rel_time < 5651) {
					if (rel_time < 5161) {
						if (hops < 4) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (rel_time < 5164) {
							w22 = 256;
						} else {
							w22 = 256;
						}
					}
				} else {
					if (rel_time < 6146) {
						if (rel_time < 5722) {
							w22 = 0;
						} else {
							w22 = -256;
						}
					} else {
						if (rel_time < 6774) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 1676) {
				if (rel_time < 553) {
					if (rel_time < 534) {
						if (hops < 3) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						w22 = 0;
					}
				} else {
					if (rel_time < 1114) {
						if (hops < 4) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (hops < 3) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4482) {
					if (rel_time < 3921) {
						if (rel_time < 3359) {
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
					if (rel_time < 5043) {
						if (rel_time < 5024) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (rel_time < 7849) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				}
			}
		}
	}
	int w23;
	if (rel_time < 7406) {
		if (rel_time < 6845) {
			if (rel_time < 6217) {
				if (rel_time < 5722) {
					if (rel_time < 5161) {
						if (rel_time < 4529) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_time < 5585) {
							w23 = 256;
						} else {
							w23 = 0;
						}
					}
				} else {
					if (rel_time < 6146) {
						if (hops < 3) {
							w23 = -256;
						} else {
							w23 = -256;
						}
					} else {
						if (size < 133) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 4) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_time < 6729) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				} else {
					w23 = 512;
				}
			}
		} else {
			if (prod == 0) {
				if (size < 133) {
					if (rel_time < 7272) {
						if (hops < 4) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (hops < 2) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w23 = 0;
					} else {
						w23 = 0;
					}
				}
			} else {
				if (hops < 4) {
					w23 = -512;
				} else {
					w23 = -256;
				}
			}
		}
	} else {
		if (rel_time < 7830) {
			w23 = 512;
		} else {
			if (rel_time < 8391) {
				if (rel_time < 7967) {
					if (size < 133) {
						if (rel_time < 7849) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (hops < 2) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w23 = -256;
					} else {
						w23 = 0;
					}
				}
			} else {
				if (rel_time < 9019) {
					if (prod == 0) {
						if (rel_time < 8972) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (hops < 4) {
							w23 = 256;
						} else {
							w23 = 0;
						}
					}
				} else {
					if (rel_time < 9514) {
						if (prod == 0) {
							w23 = 0;
						} else {
							w23 = -256;
						}
					} else {
						if (rel_time < 10075) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				}
			}
		}
	}
	int w24;
	if (rel_time < 10773) {
		if (rel_time < 10212) {
			if (rel_time < 9585) {
				if (rel_time < 9090) {
					if (rel_time < 8458) {
						if (rel_time < 7967) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (prod == 0) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (hops < 3) {
							w24 = -256;
						} else {
							w24 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (prod == 1) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (hops < 4) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (hops < 3) {
						w24 = 0;
					} else {
						w24 = 256;
					}
				}
			}
		} else {
			if (rel_time < 10636) {
				if (hops < 2) {
					w24 = 0;
				} else {
					w24 = -256;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 10639) {
						w24 = 0;
					} else {
						if (rel_time < 10708) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (rel_time < 10703) {
						if (hops < 4) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						w24 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 11197) {
			if (hops < 3) {
				if (hops < 2) {
					w24 = 0;
				} else {
					w24 = 0;
				}
			} else {
				w24 = 256;
			}
		} else {
			if (rel_time < 11335) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11267) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 11267) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (rel_time < 11203) {
						w24 = 0;
					} else {
						if (hops < 4) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w24 = 0;
				} else {
					if (hops < 3) {
						w24 = 0;
					} else {
						if (hops < 4) {
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
		if (size < 133) {
			if (prod == 0) {
				if (rel_time < 7967) {
					if (rel_time < 3477) {
						if (rel_time < 2846) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 4482) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (rel_time < 9651) {
						if (prod == 1) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 10708) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				}
			} else {
				if (rel_time < 6146) {
					if (rel_time < 5585) {
						if (rel_time < 5024) {
							w25 = 0;
						} else {
							w25 = 256;
						}
					} else {
						w25 = -256;
					}
				} else {
					if (rel_time < 6707) {
						w25 = 256;
					} else {
						if (rel_time < 7269) {
							w25 = -256;
						} else {
							w25 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 533) {
				w25 = 0;
			} else {
				if (rel_time < 1115) {
					if (rel_time < 554) {
						w25 = 0;
					} else {
						w25 = 256;
					}
				} else {
					if (rel_time < 1677) {
						w25 = 0;
					} else {
						if (rel_time < 2238) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 7335) {
			if (rel_time < 6845) {
				if (rel_time < 6217) {
					if (rel_time < 5722) {
						if (rel_time < 5090) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 6146) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (hops < 3) {
							w25 = 256;
						} else {
							w25 = 256;
						}
					}
				}
			} else {
				if (rel_time < 6850) {
					if (hops < 3) {
						w25 = -256;
					} else {
						w25 = -256;
					}
				} else {
					if (rel_time < 7288) {
						if (rel_time < 7272) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (hops < 4) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 7830) {
				if (rel_time < 7406) {
					if (rel_time < 7337) {
						if (hops < 3) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (hops < 3) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w25 = 256;
					} else {
						w25 = 0;
					}
				}
			} else {
				if (rel_time < 8391) {
					if (rel_time < 7967) {
						if (size < 133) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (hops < 3) {
							w25 = -256;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (rel_time < 9019) {
						if (prod == 0) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 9580) {
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
	if (hops < 4) {
		if (rel_time < 533) {
			if (hops < 3) {
				if (hops < 2) {
					w26 = 0;
				} else {
					w26 = 0;
				}
			} else {
				w26 = 0;
			}
		} else {
			if (rel_time < 1161) {
				if (rel_time < 1114) {
					if (rel_time < 554) {
						if (hops < 2) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 603) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (rel_time < 1115) {
						w26 = 0;
					} else {
						w26 = 256;
					}
				}
			} else {
				if (rel_time < 1723) {
					if (prod == 2) {
						if (rel_time < 1232) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (hops < 2) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (rel_time < 2284) {
						if (prod == 2) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 2845) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				}
			}
		}
	} else {
		if (prod == 0) {
			if (prod == 1) {
				if (rel_time < 8411) {
					if (rel_time < 7832) {
						if (rel_time < 2284) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 8395) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (rel_time < 8458) {
						w26 = 0;
					} else {
						if (rel_time < 9514) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				}
			} else {
				if (rel_time < 604) {
					w26 = 0;
				} else {
					if (rel_time < 2916) {
						if (rel_time < 1162) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 5092) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2217) {
				if (rel_time < 1233) {
					if (rel_time < 1095) {
						w26 = 0;
					} else {
						w26 = 0;
					}
				} else {
					w26 = 256;
				}
			} else {
				if (rel_time < 2356) {
					w26 = -256;
				} else {
					if (rel_time < 3340) {
						w26 = 256;
					} else {
						if (rel_time < 3479) {
							w26 = -256;
						} else {
							w26 = 0;
						}
					}
				}
			}
		}
	}
	int w27;
	if (rel_time < 3477) {
		if (rel_time < 2916) {
			if (rel_time < 2355) {
				if (rel_time < 1794) {
					if (rel_time < 1161) {
						if (rel_time < 1114) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (size < 133) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (rel_time < 2284) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (rel_time < 2218) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2779) {
					w27 = 0;
				} else {
					if (size < 133) {
						if (hops < 4) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (rel_time < 2800) {
							w27 = 0;
						} else {
							w27 = -256;
						}
					}
				}
			}
		} else {
			if (rel_time < 3340) {
				if (hops < 3) {
					w27 = 256;
				} else {
					w27 = 256;
				}
			} else {
				if (size < 133) {
					if (rel_time < 3359) {
						if (hops < 4) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (hops < 2) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3360) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						w27 = 256;
					}
				}
			}
		}
	} else {
		if (rel_time < 3968) {
			if (rel_time < 3901) {
				w27 = -256;
			} else {
				if (rel_time < 3921) {
					if (rel_time < 3902) {
						if (hops < 2) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (hops < 3) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (rel_time < 3923) {
						w27 = 0;
					} else {
						w27 = 0;
					}
				}
			}
		} else {
			if (rel_time < 4462) {
				if (rel_time < 4038) {
					if (rel_time < 3969) {
						if (hops < 2) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						w27 = 0;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w27 = 256;
						} else {
							w27 = 0;
						}
					} else {
						w27 = 256;
					}
				}
			} else {
				if (rel_time < 5024) {
					if (size < 133) {
						if (prod == 0) {
							w27 = 0;
						} else {
							w27 = -256;
						}
					} else {
						if (hops < 4) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (rel_time < 5651) {
						if (prod == 0) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (rel_time < 6213) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				}
			}
		}
	}
	int w28;
	if (rel_time < 11335) {
		if (rel_time < 10773) {
			if (rel_time < 10212) {
				if (rel_time < 9585) {
					if (rel_time < 9090) {
						if (rel_time < 8458) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (prod == 0) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (hops < 3) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10636) {
					if (hops < 2) {
						w28 = 0;
					} else {
						w28 = 0;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 10639) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 10703) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 11197) {
				if (hops < 3) {
					if (hops < 2) {
						w28 = 0;
					} else {
						w28 = 0;
					}
				} else {
					w28 = 0;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 11267) {
						if (hops < 2) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (hops < 2) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				} else {
					if (rel_time < 11203) {
						if (hops < 4) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (hops < 4) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			w28 = 0;
		} else {
			if (hops < 3) {
				w28 = 0;
			} else {
				if (rel_time < 11338) {
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
	}
	int w29;
	if (rel_time < 6774) {
		if (rel_time < 6217) {
			if (rel_time < 5722) {
				if (rel_time < 5161) {
					if (rel_time < 4531) {
						if (rel_time < 4038) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (prod == 0) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (rel_time < 5651) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (rel_time < 5587) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				}
			} else {
				if (rel_time < 6146) {
					if (hops < 2) {
						w29 = 0;
					} else {
						if (hops < 3) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (hops < 2) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (rel_time < 6727) {
					if (hops < 4) {
						if (hops < 2) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (rel_time < 6709) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				} else {
					if (rel_time < 6729) {
						w29 = 0;
					} else {
						if (rel_time < 6732) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				}
			} else {
				w29 = 256;
			}
		}
	} else {
		if (rel_time < 7269) {
			if (prod == 0) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 6777) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (rel_time < 6777) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w29 = 0;
					} else {
						if (rel_time < 6777) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				}
			} else {
				w29 = -256;
			}
		} else {
			if (rel_time < 7830) {
				if (rel_time < 7406) {
					if (size < 133) {
						if (rel_time < 7272) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (hops < 4) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w29 = 256;
					} else {
						w29 = 0;
					}
				}
			} else {
				if (rel_time < 8391) {
					if (size < 133) {
						if (rel_time < 7967) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (rel_time < 7853) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				} else {
					if (rel_time < 8411) {
						if (rel_time < 8395) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (rel_time < 8458) {
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
	if (rel_time < 3477) {
		if (rel_time < 2916) {
			if (rel_time < 2355) {
				if (rel_time < 1794) {
					if (rel_time < 1161) {
						if (rel_time < 1114) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 1723) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 2217) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (hops < 3) {
							w30 = 0;
						} else {
							w30 = 256;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (rel_time < 2845) {
						if (hops < 2) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 2846) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						w30 = 0;
					}
				}
			}
		} else {
			if (rel_time < 3340) {
				if (hops < 3) {
					w30 = 0;
				} else {
					w30 = 0;
				}
			} else {
				if (size < 133) {
					if (rel_time < 3359) {
						if (hops < 4) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (hops < 2) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3360) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						w30 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 3968) {
			if (rel_time < 3901) {
				if (hops < 3) {
					if (hops < 2) {
						w30 = 0;
					} else {
						w30 = 0;
					}
				} else {
					w30 = 0;
				}
			} else {
				if (rel_time < 3921) {
					if (hops < 2) {
						if (rel_time < 3902) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (hops < 3) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (rel_time < 3923) {
						w30 = 0;
					} else {
						w30 = 0;
					}
				}
			}
		} else {
			if (rel_time < 4462) {
				if (rel_time < 4038) {
					if (rel_time < 3969) {
						if (hops < 2) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (hops < 3) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						w30 = 256;
					}
				}
			} else {
				if (rel_time < 4482) {
					if (hops < 4) {
						if (hops < 3) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 4464) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (rel_time < 4529) {
						if (hops < 4) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 5024) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				}
			}
		}
	}
	int w31;
	if (hops < 4) {
		if (rel_time < 3477) {
			if (rel_time < 2916) {
				if (rel_time < 2355) {
					if (rel_time < 1794) {
						if (rel_time < 1161) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (prod == 2) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (rel_time < 2779) {
						if (hops < 3) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (size < 133) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3340) {
					if (hops < 3) {
						w31 = 0;
					} else {
						w31 = 0;
					}
				} else {
					if (size < 133) {
						if (rel_time < 3359) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (hops < 3) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3968) {
				if (rel_time < 3901) {
					if (hops < 3) {
						if (hops < 2) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						w31 = 0;
					}
				} else {
					if (rel_time < 3921) {
						if (rel_time < 3902) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 3923) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4462) {
					if (rel_time < 4038) {
						if (rel_time < 3969) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (hops < 3) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (rel_time < 4482) {
						if (hops < 2) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 4529) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				}
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 9019) {
				if (rel_time < 8959) {
					if (rel_time < 8411) {
						if (rel_time < 7832) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 8458) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					w31 = 0;
				}
			} else {
				if (rel_time < 9580) {
					if (prod == 2) {
						if (rel_time < 9021) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 9514) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (rel_time < 10639) {
						if (rel_time < 10077) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (size < 133) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 6286) {
				if (rel_time < 6146) {
					if (rel_time < 5164) {
						if (rel_time < 4602) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 5724) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					w31 = 0;
				}
			} else {
				if (rel_time < 6846) {
					w31 = 0;
				} else {
					if (rel_time < 7409) {
						if (rel_time < 6850) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 7969) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				}
			}
		}
	}
	int w32;
	if (rel_time < 11335) {
		if (rel_time < 10773) {
			if (rel_time < 10212) {
				if (rel_time < 9585) {
					if (rel_time < 9090) {
						if (rel_time < 8458) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (prod == 2) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (prod == 2) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (hops < 3) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10636) {
					if (hops < 2) {
						w32 = 0;
					} else {
						w32 = 0;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 10639) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (rel_time < 10703) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 11197) {
				if (hops < 3) {
					if (hops < 2) {
						w32 = 0;
					} else {
						w32 = 0;
					}
				} else {
					w32 = 0;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 11267) {
						if (hops < 2) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (hops < 2) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				} else {
					if (rel_time < 11203) {
						if (hops < 4) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (rel_time < 11264) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			w32 = 0;
		} else {
			if (hops < 3) {
				w32 = 0;
			} else {
				if (rel_time < 11338) {
					w32 = 0;
				} else {
					w32 = 0;
				}
			}
		}
	}
	int w33;
	if (hops < 2) {
		if (rel_time < 6845) {
			if (rel_time < 6284) {
				if (rel_time < 5722) {
					if (rel_time < 5092) {
						if (rel_time < 4483) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (prod == 2) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (rel_time < 6146) {
						w33 = 0;
					} else {
						if (rel_time < 6169) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				}
			} else {
				if (rel_time < 6707) {
					w33 = 0;
				} else {
					if (size < 133) {
						if (rel_time < 6709) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						w33 = 0;
					}
				}
			}
		} else {
			if (rel_time < 7269) {
				w33 = 0;
			} else {
				if (rel_time < 7830) {
					if (rel_time < 7406) {
						if (size < 133) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						w33 = 0;
					}
				} else {
					if (rel_time < 8462) {
						if (prod == 0) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 8976) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 533) {
			if (hops < 4) {
				if (hops < 3) {
					w33 = 0;
				} else {
					w33 = 0;
				}
			} else {
				w33 = 0;
			}
		} else {
			if (rel_time < 554) {
				if (rel_time < 553) {
					if (rel_time < 534) {
						if (hops < 3) {
							w33 = 0;
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
				} else {
					if (hops < 3) {
						w33 = 0;
					} else {
						w33 = 0;
					}
				}
			} else {
				if (rel_time < 603) {
					if (hops < 4) {
						w33 = 0;
					} else {
						w33 = 0;
					}
				} else {
					if (rel_time < 2355) {
						if (rel_time < 1723) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 2846) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				}
			}
		}
	}
	int w34;
	if (prod == 0) {
		if (rel_time < 533) {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w34 = 0;
					} else {
						w34 = 0;
					}
				} else {
					w34 = 0;
				}
			} else {
				w34 = 0;
			}
		} else {
			if (rel_time < 554) {
				if (rel_time < 553) {
					if (hops < 2) {
						if (rel_time < 534) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (hops < 4) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						w34 = 0;
					}
				}
			} else {
				if (rel_time < 1114) {
					if (prod == 1) {
						if (hops < 4) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (hops < 4) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					if (rel_time < 1161) {
						if (rel_time < 1115) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (rel_time < 2218) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 4462) {
				if (rel_time < 3901) {
					if (rel_time < 3340) {
						if (rel_time < 2779) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (hops < 2) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w34 = 0;
					} else {
						w34 = 0;
					}
				}
			} else {
				if (rel_time < 6146) {
					if (rel_time < 5585) {
						if (rel_time < 5024) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						w34 = 0;
					}
				} else {
					if (rel_time < 6707) {
						w34 = 0;
					} else {
						if (rel_time < 7269) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 9654) {
				if (rel_time < 9094) {
					if (rel_time < 7409) {
						if (rel_time < 6850) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (rel_time < 7973) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					w34 = 0;
				}
			} else {
				if (rel_time < 10217) {
					w34 = 0;
				} else {
					if (rel_time < 10781) {
						if (rel_time < 10776) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (rel_time < 11338) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				}
			}
		}
	}
	int w35;
	if (rel_time < 3409) {
		if (rel_time < 2916) {
			if (rel_time < 2355) {
				if (rel_time < 1723) {
					if (rel_time < 1676) {
						if (rel_time < 677) {
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
					if (prod == 0) {
						if (size < 133) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 1794) {
							w35 = 256;
						} else {
							w35 = 0;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (rel_time < 2845) {
						if (hops < 4) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (hops < 4) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w35 = 0;
					} else {
						if (hops < 4) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 2) {
				if (rel_time < 3406) {
					if (hops < 4) {
						if (hops < 3) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						w35 = 0;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3407) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (hops < 3) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 3341) {
						w35 = 0;
					} else {
						w35 = 0;
					}
				} else {
					if (rel_time < 3341) {
						if (hops < 3) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (hops < 3) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3968) {
			if (prod == 0) {
				if (rel_time < 3923) {
					if (rel_time < 3921) {
						if (hops < 3) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						w35 = 0;
					}
				} else {
					if (hops < 4) {
						w35 = 0;
					} else {
						w35 = 0;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w35 = 0;
					} else {
						if (rel_time < 3479) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					w35 = 0;
				}
			}
		} else {
			if (rel_time < 4462) {
				if (rel_time < 4038) {
					if (rel_time < 3969) {
						if (hops < 2) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (hops < 3) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						w35 = 0;
					}
				}
			} else {
				if (rel_time < 4482) {
					if (hops < 4) {
						if (hops < 3) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 4464) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (rel_time < 4529) {
						if (hops < 3) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 5024) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			}
		}
	}
	int w36;
	if (rel_time < 6845) {
		if (rel_time < 6217) {
			if (rel_time < 5722) {
				if (rel_time < 5090) {
					if (rel_time < 5043) {
						if (rel_time < 5024) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (hops < 2) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (prod == 1) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (hops < 2) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			} else {
				if (rel_time < 6146) {
					w36 = 0;
				} else {
					if (size < 133) {
						if (rel_time < 6166) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (hops < 2) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (size < 133) {
					if (rel_time < 6284) {
						w36 = 0;
					} else {
						if (hops < 3) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				} else {
					if (rel_time < 6732) {
						if (hops < 3) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						w36 = 0;
					}
				}
			} else {
				if (hops < 3) {
					w36 = 0;
				} else {
					if (hops < 4) {
						w36 = 0;
					} else {
						w36 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 6850) {
			if (hops < 2) {
				w36 = 0;
			} else {
				if (hops < 4) {
					w36 = 0;
				} else {
					if (rel_time < 6846) {
						w36 = 0;
					} else {
						w36 = 0;
					}
				}
			}
		} else {
			if (rel_time < 7830) {
				if (rel_time < 7406) {
					if (size < 133) {
						if (rel_time < 7272) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (hops < 4) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w36 = 0;
					} else {
						w36 = 0;
					}
				}
			} else {
				if (rel_time < 8391) {
					if (size < 133) {
						if (rel_time < 7967) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						w36 = 0;
					}
				} else {
					if (rel_time < 8411) {
						if (hops < 2) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (rel_time < 8458) {
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
	if (rel_time < 11335) {
		if (rel_time < 10773) {
			if (rel_time < 10144) {
				if (rel_time < 9580) {
					if (rel_time < 9019) {
						if (rel_time < 8972) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (prod == 2) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (prod == 0) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (hops < 4) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (rel_time < 10703) {
						if (prod == 2) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (hops < 3) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						w37 = 0;
					}
				}
			}
		} else {
			if (rel_time < 11197) {
				if (hops < 2) {
					w37 = 0;
				} else {
					if (hops < 3) {
						w37 = 0;
					} else {
						if (rel_time < 10776) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 11267) {
						if (hops < 2) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (hops < 2) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				} else {
					if (rel_time < 11267) {
						if (rel_time < 11264) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (hops < 4) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 11343) {
			if (rel_time < 11338) {
				if (hops < 3) {
					w37 = 0;
				} else {
					w37 = 0;
				}
			} else {
				if (hops < 3) {
					w37 = 0;
				} else {
					if (hops < 4) {
						w37 = 0;
					} else {
						w37 = 0;
					}
				}
			}
		} else {
			w37 = 0;
		}
	}
	int w38;
	if (hops < 4) {
		if (rel_time < 533) {
			if (hops < 3) {
				if (hops < 2) {
					w38 = 0;
				} else {
					w38 = 0;
				}
			} else {
				w38 = 0;
			}
		} else {
			if (rel_time < 554) {
				if (rel_time < 553) {
					if (hops < 3) {
						if (rel_time < 534) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 534) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						w38 = 0;
					}
				}
			} else {
				if (rel_time < 677) {
					if (hops < 2) {
						if (rel_time < 604) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 603) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				} else {
					if (rel_time < 678) {
						if (hops < 2) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 10661) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5651) {
			if (rel_time < 5609) {
				if (rel_time < 5090) {
					if (rel_time < 4531) {
						if (rel_time < 4038) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 4602) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (rel_time < 5161) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 5587) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			} else {
				w38 = 0;
			}
		} else {
			if (rel_time < 5724) {
				w38 = 0;
			} else {
				if (rel_time < 6148) {
					if (rel_time < 6146) {
						w38 = 0;
					} else {
						w38 = 0;
					}
				} else {
					if (rel_time < 6214) {
						if (rel_time < 6213) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 6774) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			}
		}
	}
	int w39;
	if (rel_time < 10141) {
		if (rel_time < 9580) {
			if (rel_time < 9090) {
				if (rel_time < 8458) {
					if (rel_time < 7967) {
						if (rel_time < 7406) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (prod == 2) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (prod == 2) {
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
				}
			} else {
				if (prod == 2) {
					if (hops < 2) {
						if (rel_time < 9514) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (hops < 3) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 9518) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (rel_time < 9514) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 2) {
				if (hops < 3) {
					if (hops < 2) {
						if (prod == 0) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (rel_time < 9651) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				} else {
					if (rel_time < 9585) {
						if (hops < 4) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (rel_time < 9654) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 10077) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						w39 = 0;
					}
				} else {
					if (rel_time < 10077) {
						w39 = 0;
					} else {
						if (rel_time < 10080) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10636) {
			if (rel_time < 10212) {
				if (hops < 2) {
					if (rel_time < 10149) {
						if (rel_time < 10144) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						w39 = 0;
					}
				} else {
					if (rel_time < 10149) {
						if (rel_time < 10144) {
							w39 = 0;
						} else {
							w39 = 0;
						}
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
					w39 = 0;
				}
			}
		} else {
			if (rel_time < 11335) {
				if (prod == 0) {
					if (size < 133) {
						if (rel_time < 10639) {
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
					if (hops < 2) {
						if (rel_time < 10781) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (hops < 3) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11343) {
						if (rel_time < 11338) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						w39 = 0;
					}
				} else {
					w39 = 0;
				}
			}
		}
	}
	int w40;
	if (rel_time < 3477) {
		if (rel_time < 2916) {
			if (rel_time < 2355) {
				if (rel_time < 1723) {
					if (rel_time < 1161) {
						if (rel_time < 1115) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (prod == 2) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (rel_time < 1794) {
							w40 = 256;
						} else {
							w40 = 0;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (rel_time < 2845) {
						if (hops < 4) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (hops < 4) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (hops < 4) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3340) {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 2917) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						w40 = 0;
					}
				} else {
					w40 = 0;
				}
			} else {
				if (size < 133) {
					if (rel_time < 3359) {
						if (hops < 4) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (hops < 2) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3360) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (hops < 4) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3968) {
			if (rel_time < 3479) {
				if (hops < 3) {
					if (hops < 2) {
						w40 = 0;
					} else {
						w40 = 0;
					}
				} else {
					if (hops < 4) {
						w40 = 0;
					} else {
						w40 = 0;
					}
				}
			} else {
				if (rel_time < 3923) {
					if (prod == 2) {
						if (rel_time < 3901) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (hops < 2) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w40 = 0;
					} else {
						w40 = 0;
					}
				}
			}
		} else {
			if (rel_time < 4462) {
				if (rel_time < 4038) {
					if (rel_time < 3969) {
						if (hops < 3) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (hops < 2) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						w40 = 0;
					}
				}
			} else {
				if (rel_time < 4482) {
					if (hops < 2) {
						if (rel_time < 4464) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (hops < 4) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				} else {
					if (rel_time < 4529) {
						if (hops < 4) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (rel_time < 5024) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				}
			}
		}
	}
	int w41;
	if (rel_time < 6845) {
		if (rel_time < 6217) {
			if (rel_time < 5722) {
				if (rel_time < 5090) {
					if (rel_time < 5043) {
						if (rel_time < 5025) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (hops < 2) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (hops < 3) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (hops < 2) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				}
			} else {
				if (rel_time < 6146) {
					if (hops < 4) {
						w41 = 0;
					} else {
						if (rel_time < 5724) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 6148) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (hops < 2) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (size < 133) {
					if (rel_time < 6777) {
						if (rel_time < 6284) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (hops < 2) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				} else {
					if (rel_time < 6729) {
						w41 = 0;
					} else {
						if (rel_time < 6732) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					w41 = 0;
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
		if (rel_time < 6850) {
			if (hops < 2) {
				w41 = 0;
			} else {
				if (hops < 4) {
					w41 = 0;
				} else {
					if (rel_time < 6846) {
						w41 = 0;
					} else {
						w41 = 0;
					}
				}
			}
		} else {
			if (rel_time < 7830) {
				if (rel_time < 7406) {
					if (size < 133) {
						if (prod == 0) {
							w41 = 0;
						} else {
							w41 = 0;
						}
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
			} else {
				if (rel_time < 7849) {
					if (hops < 3) {
						if (rel_time < 7832) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (rel_time < 7832) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				} else {
					if (rel_time < 7896) {
						if (rel_time < 7853) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (rel_time < 8391) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				}
			}
		}
	}
	int w42;
	if (rel_time < 3477) {
		if (rel_time < 2916) {
			if (rel_time < 2355) {
				if (rel_time < 2238) {
					if (prod == 0) {
						if (rel_time < 1676) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (rel_time < 1656) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (rel_time < 2284) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2779) {
					if (hops < 4) {
						if (hops < 3) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						w42 = 0;
					}
				} else {
					if (size < 133) {
						if (rel_time < 2798) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (hops < 4) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3340) {
				if (hops < 4) {
					if (hops < 2) {
						w42 = 0;
					} else {
						w42 = 0;
					}
				} else {
					w42 = 0;
				}
			} else {
				if (size < 133) {
					if (hops < 3) {
						if (hops < 2) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (rel_time < 3407) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3360) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (hops < 4) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3968) {
			if (hops < 3) {
				if (prod == 2) {
					if (rel_time < 3901) {
						w42 = 0;
					} else {
						w42 = 0;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3902) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (rel_time < 3902) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (hops < 4) {
						if (rel_time < 3479) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						w42 = 0;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3902) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (rel_time < 3902) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 4600) {
				if (prod == 2) {
					if (rel_time < 4038) {
						if (hops < 2) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (rel_time < 4483) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 4464) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (hops < 4) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				}
			} else {
				if (rel_time < 5024) {
					if (hops < 3) {
						if (hops < 2) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (rel_time < 4602) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				} else {
					if (rel_time < 5043) {
						if (rel_time < 5027) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					} else {
						if (rel_time < 5090) {
							w42 = 0;
						} else {
							w42 = 0;
						}
					}
				}
			}
		}
	}
	int w43;
	if (rel_time < 6774) {
		if (rel_time < 6217) {
			if (rel_time < 5722) {
				if (rel_time < 5090) {
					if (rel_time < 4600) {
						if (rel_time < 4038) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					} else {
						if (prod == 2) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (prod == 1) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					} else {
						if (hops < 3) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				}
			} else {
				if (rel_time < 6146) {
					if (hops < 4) {
						w43 = 0;
					} else {
						if (rel_time < 5724) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				} else {
					if (rel_time < 6166) {
						if (hops < 2) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					} else {
						if (hops < 2) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (rel_time < 6727) {
					if (rel_time < 6284) {
						w43 = 0;
					} else {
						if (hops < 2) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 6729) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					} else {
						if (rel_time < 6732) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					w43 = 0;
				} else {
					if (hops < 4) {
						w43 = 0;
					} else {
						w43 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 7269) {
			if (prod == 0) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 6777) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					} else {
						if (rel_time < 6777) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w43 = 0;
					} else {
						if (rel_time < 6777) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w43 = 0;
				} else {
					if (hops < 4) {
						w43 = 0;
					} else {
						if (rel_time < 6846) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 7830) {
				if (rel_time < 7406) {
					if (size < 133) {
						if (hops < 2) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					} else {
						if (hops < 4) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					} else {
						w43 = 0;
					}
				}
			} else {
				if (rel_time < 7849) {
					if (hops < 3) {
						if (hops < 2) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					} else {
						if (rel_time < 7832) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				} else {
					if (rel_time < 7896) {
						if (rel_time < 7853) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					} else {
						if (rel_time < 8391) {
							w43 = 0;
						} else {
							w43 = 0;
						}
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32 + w33 + w34 + w35 + w36 + w37 + w38 + w39 + w40 + w41 + w42 + w43) >> 8;
}
