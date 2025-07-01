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
			w0 = 56832;
		} else {
			if (prod == 0) {
				w0 = 45824;
			} else {
				w0 = 48384;
			}
		}
	} else {
		w0 = 60672;
	}
	int w1;
	if (size < 133) {
		if (rel_time < 1095) {
			w1 = 39680;
		} else {
			if (prod == 0) {
				w1 = 32000;
			} else {
				w1 = 33792;
			}
		}
	} else {
		w1 = 42496;
	}
	int w2;
	if (size < 133) {
		if (rel_time < 1095) {
			w2 = 27904;
		} else {
			if (prod == 0) {
				if (hops < 3) {
					w2 = 22016;
				} else {
					w2 = 23040;
				}
			} else {
				w2 = 23552;
			}
		}
	} else {
		w2 = 29696;
	}
	int w3;
	if (size < 133) {
		if (rel_time < 1095) {
			w3 = 19456;
		} else {
			if (prod == 0) {
				if (hops < 2) {
					w3 = 15104;
				} else {
					w3 = 15872;
				}
			} else {
				if (hops < 3) {
					w3 = 16128;
				} else {
					w3 = 17152;
				}
			}
		}
	} else {
		w3 = 20736;
	}
	int w4;
	if (size < 133) {
		if (rel_time < 1095) {
			w4 = 13568;
		} else {
			if (hops < 2) {
				w4 = 10752;
			} else {
				if (prod == 0) {
					w4 = 11008;
				} else {
					w4 = 11776;
				}
			}
		}
	} else {
		if (hops < 3) {
			w4 = 14336;
		} else {
			w4 = 15104;
		}
	}
	int w5;
	if (size < 133) {
		if (rel_time < 1095) {
			w5 = 9472;
		} else {
			if (hops < 3) {
				if (prod == 0) {
					w5 = 7424;
				} else {
					if (rel_time < 1656) {
						w5 = 6656;
					} else {
						if (rel_time < 11200) {
							w5 = 7936;
						} else {
							w5 = 6656;
						}
					}
				}
			} else {
				if (hops < 4) {
					w5 = 7936;
				} else {
					w5 = 8448;
				}
			}
		}
	} else {
		if (hops < 2) {
			w5 = 9728;
		} else {
			w5 = 10496;
		}
	}
	int w6;
	if (size < 133) {
		if (rel_time < 1095) {
			if (hops < 2) {
				w6 = 6144;
			} else {
				w6 = 6912;
			}
		} else {
			if (prod == 0) {
				if (hops < 2) {
					w6 = 5120;
				} else {
					if (hops < 4) {
						w6 = 5376;
					} else {
						w6 = 5632;
					}
				}
			} else {
				if (rel_time < 1656) {
					w6 = 4608;
				} else {
					if (rel_time < 2218) {
						w6 = 6912;
					} else {
						if (rel_time < 2779) {
							w6 = 4352;
						} else {
							w6 = 5632;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 554) {
			w6 = 6144;
		} else {
			if (hops < 2) {
				w6 = 6912;
			} else {
				w6 = 7424;
			}
		}
	}
	int w7;
	if (size < 133) {
		if (rel_time < 1095) {
			if (hops < 3) {
				w7 = 4352;
			} else {
				w7 = 5120;
			}
		} else {
			if (hops < 2) {
				if (rel_time < 11337) {
					if (prod == 0) {
						w7 = 3584;
					} else {
						if (rel_time < 10638) {
							w7 = 3584;
						} else {
							w7 = 4864;
						}
					}
				} else {
					w7 = 2816;
				}
			} else {
				if (prod == 0) {
					if (hops < 4) {
						w7 = 3584;
					} else {
						w7 = 3840;
					}
				} else {
					if (rel_time < 11200) {
						if (rel_time < 10638) {
							w7 = 4096;
						} else {
							w7 = 5120;
						}
					} else {
						w7 = 3072;
					}
				}
			}
		}
	} else {
		if (rel_time < 534) {
			w7 = 4096;
		} else {
			if (hops < 3) {
				w7 = 4864;
			} else {
				w7 = 5376;
			}
		}
	}
	int w8;
	if (size < 133) {
		if (rel_time < 1095) {
			if (hops < 3) {
				w8 = 3072;
			} else {
				w8 = 3584;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 11337) {
					if (prod == 0) {
						w8 = 2560;
					} else {
						if (rel_time < 10638) {
							w8 = 2560;
						} else {
							w8 = 3328;
						}
					}
				} else {
					w8 = 2048;
				}
			} else {
				if (prod == 0) {
					w8 = 2560;
				} else {
					if (rel_time < 1656) {
						w8 = 2048;
					} else {
						if (rel_time < 10781) {
							w8 = 3072;
						} else {
							w8 = 2048;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 534) {
				w8 = 2816;
			} else {
				if (rel_time < 10104) {
					if (hops < 2) {
						w8 = 3328;
					} else {
						w8 = 3584;
					}
				} else {
					w8 = 2816;
				}
			}
		} else {
			w8 = 4096;
		}
	}
	int w9;
	if (size < 133) {
		if (hops < 4) {
			if (rel_time < 1095) {
				if (rel_time < 678) {
					w9 = 2048;
				} else {
					w9 = 2304;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11337) {
						if (rel_time < 1656) {
							w9 = 1536;
						} else {
							w9 = 1792;
						}
					} else {
						w9 = 1280;
					}
				} else {
					if (prod == 0) {
						w9 = 1792;
					} else {
						if (rel_time < 10077) {
							w9 = 2048;
						} else {
							w9 = 1536;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (rel_time < 678) {
					w9 = 2560;
				} else {
					w9 = 1792;
				}
			} else {
				if (rel_time < 10781) {
					w9 = 2304;
				} else {
					w9 = 1536;
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 604) {
				w9 = 2048;
			} else {
				if (rel_time < 1162) {
					w9 = 2816;
				} else {
					if (rel_time < 1723) {
						w9 = 1792;
					} else {
						if (rel_time < 2285) {
							w9 = 2816;
						} else {
							w9 = 2304;
						}
					}
				}
			}
		} else {
			w9 = 2816;
		}
	}
	int w10;
	if (size < 133) {
		if (rel_time < 1095) {
			if (hops < 2) {
				w10 = 1280;
			} else {
				if (rel_time < 678) {
					w10 = 1536;
				} else {
					w10 = 1792;
				}
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
						w10 = 768;
					} else {
						if (rel_time < 2218) {
							w10 = 2048;
						} else {
							w10 = 1280;
						}
					}
				}
			} else {
				if (prod == 0) {
					w10 = 1280;
				} else {
					if (rel_time < 1656) {
						w10 = 768;
					} else {
						if (rel_time < 3340) {
							w10 = 2048;
						} else {
							w10 = 1536;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 534) {
				if (hops < 2) {
					w10 = 1024;
				} else {
					w10 = 1280;
				}
			} else {
				if (rel_time < 10104) {
					if (rel_time < 9543) {
						if (rel_time < 8981) {
							w10 = 1536;
						} else {
							w10 = 1024;
						}
					} else {
						w10 = 2048;
					}
				} else {
					w10 = 1280;
				}
			}
		} else {
			if (hops < 4) {
				w10 = 1792;
			} else {
				w10 = 2048;
			}
		}
	}
	int w11;
	if (size < 133) {
		if (hops < 4) {
			if (rel_time < 1095) {
				if (rel_time < 678) {
					if (hops < 2) {
						w11 = 768;
					} else {
						w11 = 1024;
					}
				} else {
					w11 = 1024;
				}
			} else {
				if (rel_time < 11337) {
					if (rel_time < 10776) {
						if (rel_time < 10215) {
							w11 = 768;
						} else {
							w11 = 512;
						}
					} else {
						if (rel_time < 11200) {
							w11 = 1536;
						} else {
							w11 = 768;
						}
					}
				} else {
					w11 = 512;
				}
			}
		} else {
			if (rel_time < 1095) {
				w11 = 1536;
			} else {
				if (prod == 0) {
					w11 = 768;
				} else {
					if (rel_time < 1656) {
						w11 = 512;
					} else {
						if (rel_time < 2218) {
							w11 = 1536;
						} else {
							w11 = 1024;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 534) {
				w11 = 768;
			} else {
				if (rel_time < 10099) {
					if (rel_time < 9538) {
						if (rel_time < 8976) {
							w11 = 1024;
						} else {
							w11 = 512;
						}
					} else {
						w11 = 1280;
					}
				} else {
					w11 = 768;
				}
			}
		} else {
			if (rel_time < 10144) {
				if (rel_time < 9583) {
					if (rel_time < 9021) {
						if (rel_time < 8460) {
							w11 = 1024;
						} else {
							w11 = 1536;
						}
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
	}
	int w12;
	if (size < 133) {
		if (hops < 2) {
			if (rel_time < 3340) {
				if (rel_time < 2917) {
					if (rel_time < 2356) {
						if (rel_time < 1794) {
							w12 = 512;
						} else {
							w12 = 768;
						}
					} else {
						if (rel_time < 2779) {
							w12 = 0;
						} else {
							w12 = 512;
						}
					}
				} else {
					w12 = 1792;
				}
			} else {
				if (rel_time < 3902) {
					if (rel_time < 3478) {
						w12 = 512;
					} else {
						w12 = -512;
					}
				} else {
					if (rel_time < 4463) {
						if (rel_time < 4040) {
							w12 = 512;
						} else {
							w12 = 1792;
						}
					} else {
						if (rel_time < 5025) {
							w12 = 0;
						} else {
							w12 = 512;
						}
					}
				}
			}
		} else {
			if (rel_time < 1095) {
				if (hops < 4) {
					if (rel_time < 678) {
						w12 = 768;
					} else {
						w12 = 768;
					}
				} else {
					w12 = 1024;
				}
			} else {
				if (rel_time < 9587) {
					if (rel_time < 9092) {
						if (rel_time < 8531) {
							w12 = 512;
						} else {
							w12 = 1024;
						}
					} else {
						if (rel_time < 9516) {
							w12 = -256;
						} else {
							w12 = 512;
						}
					}
				} else {
					if (rel_time < 10077) {
						if (prod == 0) {
							w12 = 512;
						} else {
							w12 = 1792;
						}
					} else {
						if (rel_time < 10638) {
							w12 = 256;
						} else {
							w12 = 768;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 604) {
				if (hops < 2) {
					w12 = 512;
				} else {
					if (rel_time < 554) {
						w12 = 512;
					} else {
						w12 = 512;
					}
				}
			} else {
				if (rel_time < 1162) {
					w12 = 1024;
				} else {
					if (rel_time < 1723) {
						if (hops < 2) {
							w12 = 256;
						} else {
							w12 = 512;
						}
					} else {
						if (rel_time < 2285) {
							w12 = 1024;
						} else {
							w12 = 768;
						}
					}
				}
			}
		} else {
			if (rel_time < 604) {
				w12 = 512;
			} else {
				if (rel_time < 10144) {
					w12 = 1024;
				} else {
					w12 = 512;
				}
			}
		}
	}
	int w13;
	if (size < 133) {
		if (hops < 3) {
			if (rel_time < 5586) {
				if (rel_time < 5163) {
					if (rel_time < 4601) {
						if (rel_time < 4040) {
							w13 = 256;
						} else {
							w13 = 768;
						}
					} else {
						if (rel_time < 5025) {
							w13 = -512;
						} else {
							w13 = 256;
						}
					}
				} else {
					w13 = 1536;
				}
			} else {
				if (rel_time < 6147) {
					if (rel_time < 5724) {
						w13 = 256;
					} else {
						w13 = -768;
					}
				} else {
					if (rel_time < 6709) {
						if (rel_time < 6285) {
							w13 = 256;
						} else {
							w13 = 1536;
						}
					} else {
						if (rel_time < 7270) {
							w13 = 0;
						} else {
							w13 = 256;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (rel_time < 678) {
					w13 = 512;
				} else {
					if (hops < 4) {
						if (rel_time < 9585) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					} else {
						w13 = 256;
					}
				}
			} else {
				if (rel_time < 10781) {
					if (rel_time < 10220) {
						if (rel_time < 9658) {
							w13 = 512;
						} else {
							w13 = -256;
						}
					} else {
						w13 = 1280;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11338) {
							w13 = 0;
						} else {
							w13 = 0;
						}
					} else {
						w13 = 0;
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 8415) {
				if (rel_time < 7853) {
					if (rel_time < 7292) {
						if (rel_time < 6730) {
							w13 = 512;
						} else {
							w13 = 0;
						}
					} else {
						w13 = 768;
					}
				} else {
					if (rel_time < 8413) {
						w13 = 0;
					} else {
						w13 = 0;
					}
				}
			} else {
				if (rel_time < 8976) {
					w13 = 768;
				} else {
					if (rel_time < 9538) {
						w13 = 256;
					} else {
						if (rel_time < 10099) {
							w13 = 768;
						} else {
							w13 = 256;
						}
					}
				}
			}
		} else {
			if (rel_time < 604) {
				w13 = 256;
			} else {
				if (rel_time < 1162) {
					w13 = 768;
				} else {
					if (rel_time < 2846) {
						if (rel_time < 2285) {
							w13 = 512;
						} else {
							w13 = 0;
						}
					} else {
						if (rel_time < 3407) {
							w13 = 1024;
						} else {
							w13 = 512;
						}
					}
				}
			}
		}
	}
	int w14;
	if (size < 133) {
		if (rel_time < 3341) {
			if (rel_time < 2917) {
				if (rel_time < 2286) {
					if (rel_time < 1794) {
						if (rel_time < 1095) {
							w14 = 256;
						} else {
							w14 = 0;
						}
					} else {
						if (rel_time < 2218) {
							w14 = 768;
						} else {
							w14 = 256;
						}
					}
				} else {
					if (prod == 0) {
						w14 = 256;
					} else {
						if (hops < 2) {
							w14 = 0;
						} else {
							w14 = -256;
						}
					}
				}
			} else {
				if (rel_time < 3340) {
					if (hops < 2) {
						w14 = 1024;
					} else {
						w14 = 1536;
					}
				} else {
					w14 = 256;
				}
			}
		} else {
			if (rel_time < 3902) {
				if (rel_time < 3478) {
					w14 = 256;
				} else {
					if (hops < 2) {
						w14 = -512;
					} else {
						w14 = -768;
					}
				}
			} else {
				if (rel_time < 4463) {
					if (rel_time < 4040) {
						w14 = 256;
					} else {
						if (hops < 2) {
							w14 = 1024;
						} else {
							w14 = 1280;
						}
					}
				} else {
					if (rel_time < 5025) {
						if (rel_time < 4601) {
							w14 = 256;
						} else {
							w14 = -512;
						}
					} else {
						if (rel_time < 5586) {
							w14 = 512;
						} else {
							w14 = 256;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 3924) {
				if (rel_time < 3362) {
					if (rel_time < 2846) {
						if (rel_time < 2239) {
							w14 = 256;
						} else {
							w14 = 0;
						}
					} else {
						if (rel_time < 3361) {
							w14 = 768;
						} else {
							w14 = 512;
						}
					}
				} else {
					if (hops < 2) {
						w14 = 0;
					} else {
						if (rel_time < 3923) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4485) {
					w14 = 768;
				} else {
					if (rel_time < 5047) {
						if (hops < 2) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					} else {
						if (rel_time < 5609) {
							w14 = 768;
						} else {
							w14 = 256;
						}
					}
				}
			}
		} else {
			if (rel_time < 10144) {
				if (rel_time < 9583) {
					if (rel_time < 9021) {
						if (rel_time < 8460) {
							w14 = 256;
						} else {
							w14 = 768;
						}
					} else {
						w14 = 0;
					}
				} else {
					w14 = 768;
				}
			} else {
				w14 = 256;
			}
		}
	}
	int w15;
	if (size < 133) {
		if (rel_time < 10215) {
			if (rel_time < 9587) {
				if (rel_time < 9092) {
					if (rel_time < 8531) {
						if (rel_time < 7969) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					} else {
						if (rel_time < 8954) {
							w15 = 1280;
						} else {
							w15 = 0;
						}
					}
				} else {
					if (rel_time < 9516) {
						if (hops < 2) {
							w15 = -768;
						} else {
							w15 = -512;
						}
					} else {
						if (hops < 2) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (hops < 2) {
						w15 = 0;
					} else {
						w15 = 256;
					}
				} else {
					if (hops < 2) {
						w15 = 1280;
					} else {
						w15 = 1024;
					}
				}
			}
		} else {
			if (rel_time < 10638) {
				if (hops < 3) {
					if (hops < 2) {
						w15 = -768;
					} else {
						w15 = -512;
					}
				} else {
					if (hops < 4) {
						w15 = -256;
					} else {
						w15 = -256;
					}
				}
			} else {
				if (rel_time < 11200) {
					if (rel_time < 10776) {
						w15 = 256;
					} else {
						if (hops < 3) {
							w15 = 512;
						} else {
							w15 = 768;
						}
					}
				} else {
					if (rel_time < 11337) {
						w15 = 0;
					} else {
						if (hops < 4) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6214) {
			if (rel_time < 5653) {
				if (rel_time < 5092) {
					if (rel_time < 4530) {
						if (rel_time < 3969) {
							w15 = 256;
						} else {
							w15 = 512;
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
						w15 = 512;
					} else {
						w15 = 768;
					}
				}
			} else {
				if (hops < 2) {
					w15 = 0;
				} else {
					if (rel_time < 6172) {
						if (hops < 3) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					} else {
						w15 = 0;
					}
				}
			}
		} else {
			if (rel_time < 6776) {
				w15 = 768;
			} else {
				if (rel_time < 7337) {
					if (rel_time < 7295) {
						if (hops < 3) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					} else {
						w15 = 0;
					}
				} else {
					if (rel_time < 7898) {
						if (rel_time < 7853) {
							w15 = 512;
						} else {
							w15 = 512;
						}
					} else {
						if (rel_time < 8460) {
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
	if (hops < 4) {
		if (rel_time < 7408) {
			if (rel_time < 6847) {
				if (rel_time < 6285) {
					if (rel_time < 5724) {
						if (rel_time < 5094) {
							w16 = 0;
						} else {
							w16 = 256;
						}
					} else {
						if (rel_time < 6147) {
							w16 = -768;
						} else {
							w16 = 0;
						}
					}
				} else {
					if (rel_time < 6709) {
						if (hops < 3) {
							w16 = 768;
						} else {
							w16 = 1280;
						}
					} else {
						if (size < 133) {
							w16 = 0;
						} else {
							w16 = 512;
						}
					}
				}
			} else {
				if (rel_time < 7270) {
					w16 = -768;
				} else {
					if (size < 133) {
						if (hops < 2) {
							w16 = 0;
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
				}
			}
		} else {
			if (rel_time < 7832) {
				if (prod == 0) {
					w16 = 0;
				} else {
					w16 = 1280;
				}
			} else {
				if (rel_time < 8393) {
					if (rel_time < 7969) {
						if (size < 133) {
							w16 = 0;
						} else {
							w16 = 256;
						}
					} else {
						w16 = -768;
					}
				} else {
					if (rel_time < 8981) {
						if (prod == 0) {
							w16 = 0;
						} else {
							w16 = 768;
						}
					} else {
						if (rel_time < 9516) {
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
			if (prod == 2) {
				if (rel_time < 7898) {
					if (rel_time < 7337) {
						if (rel_time < 6776) {
							w16 = 256;
						} else {
							w16 = -512;
						}
					} else {
						if (rel_time < 7411) {
							w16 = 1280;
						} else {
							w16 = 512;
						}
					}
				} else {
					if (rel_time < 7973) {
						w16 = -512;
					} else {
						if (rel_time < 9021) {
							w16 = 512;
						} else {
							w16 = 0;
						}
					}
				}
			} else {
				if (rel_time < 553) {
					w16 = 256;
				} else {
					if (rel_time < 7272) {
						if (rel_time < 3343) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_time < 8413) {
							w16 = 256;
						} else {
							w16 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 678) {
				w16 = 256;
			} else {
				if (rel_time < 11270) {
					w16 = 0;
				} else {
					w16 = 0;
				}
			}
		}
	}
	int w17;
	if (rel_time < 10215) {
		if (rel_time < 9587) {
			if (rel_time < 9092) {
				if (rel_time < 8531) {
					if (rel_time < 7969) {
						if (rel_time < 7408) {
							w17 = 0;
						} else {
							w17 = 256;
						}
					} else {
						if (rel_time < 8393) {
							w17 = -512;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 8954) {
						w17 = 512;
					} else {
						if (size < 133) {
							w17 = 0;
						} else {
							w17 = 256;
						}
					}
				}
			} else {
				if (rel_time < 9516) {
					if (hops < 2) {
						w17 = -512;
					} else {
						w17 = -256;
					}
				} else {
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
				}
			}
		} else {
			if (prod == 0) {
				if (size < 133) {
					if (hops < 2) {
						if (rel_time < 10079) {
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
					if (rel_time < 10099) {
						w17 = 256;
					} else {
						w17 = 256;
					}
				}
			} else {
				if (hops < 2) {
					w17 = 768;
				} else {
					w17 = 512;
				}
			}
		}
	} else {
		if (rel_time < 10638) {
			if (hops < 3) {
				if (hops < 2) {
					w17 = -512;
				} else {
					w17 = -256;
				}
			} else {
				if (hops < 4) {
					w17 = -256;
				} else {
					w17 = -256;
				}
			}
		} else {
			if (rel_time < 11200) {
				if (rel_time < 10776) {
					if (size < 133) {
						if (hops < 4) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 10661) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w17 = 256;
					} else {
						w17 = 512;
					}
				}
			} else {
				if (rel_time < 11337) {
					if (hops < 4) {
						if (rel_time < 11205) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						w17 = 0;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 11340) {
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
	if (rel_time < 3407) {
		if (rel_time < 2917) {
			if (rel_time < 2286) {
				if (rel_time < 1794) {
					if (rel_time < 1233) {
						if (rel_time < 678) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_time < 1656) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (rel_time < 2218) {
						w18 = 512;
					} else {
						if (size < 133) {
							w18 = 0;
						} else {
							w18 = 256;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 2) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (hops < 2) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w18 = -256;
					} else {
						w18 = -256;
					}
				}
			}
		} else {
			if (rel_time < 3340) {
				if (hops < 2) {
					w18 = 512;
				} else {
					w18 = 768;
				}
			} else {
				if (rel_time < 3360) {
					if (hops < 2) {
						if (rel_time < 3343) {
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
					w18 = 256;
				}
			}
		}
	} else {
		if (rel_time < 3902) {
			if (rel_time < 3478) {
				if (hops < 2) {
					if (rel_time < 3408) {
						w18 = 0;
					} else {
						if (rel_time < 3409) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (rel_time < 3409) {
						if (hops < 4) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						w18 = 0;
					}
				}
			} else {
				if (hops < 2) {
					w18 = -512;
				} else {
					w18 = -512;
				}
			}
		} else {
			if (rel_time < 4530) {
				if (prod == 0) {
					if (rel_time < 4483) {
						if (size < 133) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_time < 4485) {
							w18 = 256;
						} else {
							w18 = 256;
						}
					}
				} else {
					if (hops < 2) {
						w18 = 512;
					} else {
						w18 = 768;
					}
				}
			} else {
				if (rel_time < 5093) {
					if (prod == 0) {
						if (rel_time < 4601) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (hops < 3) {
							w18 = -256;
						} else {
							w18 = -768;
						}
					}
				} else {
					if (rel_time < 5586) {
						if (prod == 0) {
							w18 = 0;
						} else {
							w18 = 768;
						}
					} else {
						if (rel_time < 6214) {
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
	if (rel_time < 10215) {
		if (rel_time < 9587) {
			if (rel_time < 9092) {
				if (rel_time < 8460) {
					if (rel_time < 7902) {
						if (rel_time < 7408) {
							w19 = 0;
						} else {
							w19 = 256;
						}
					} else {
						if (prod == 2) {
							w19 = -256;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
							w19 = 0;
						} else {
							w19 = 256;
						}
					} else {
						w19 = 256;
					}
				}
			} else {
				if (rel_time < 9516) {
					if (hops < 2) {
						w19 = -256;
					} else {
						w19 = -256;
					}
				} else {
					if (size < 133) {
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
				}
			}
		} else {
			if (prod == 0) {
				if (size < 133) {
					if (hops < 2) {
						if (rel_time < 10079) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (prod == 1) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (hops < 3) {
						w19 = 0;
					} else {
						w19 = 256;
					}
				}
			} else {
				if (hops < 2) {
					w19 = 512;
				} else {
					w19 = 256;
				}
			}
		}
	} else {
		if (rel_time < 10638) {
			if (hops < 3) {
				if (hops < 2) {
					w19 = -256;
				} else {
					w19 = -256;
				}
			} else {
				w19 = 0;
			}
		} else {
			if (rel_time < 11200) {
				if (rel_time < 10776) {
					if (size < 133) {
						if (rel_time < 10641) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 10661) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w19 = 0;
						} else {
							w19 = 256;
						}
					} else {
						w19 = 256;
					}
				}
			} else {
				if (rel_time < 11337) {
					if (rel_time < 11270) {
						if (hops < 4) {
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
					if (hops < 2) {
						w19 = 0;
					} else {
						if (hops < 3) {
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
	if (rel_time < 6779) {
		if (rel_time < 6285) {
			if (rel_time < 5724) {
				if (rel_time < 5094) {
					if (rel_time < 4601) {
						if (rel_time < 4040) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_time < 5025) {
							w20 = -256;
						} else {
							w20 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
							w20 = 0;
						} else {
							w20 = 256;
						}
					} else {
						if (hops < 3) {
							w20 = 256;
						} else {
							w20 = 768;
						}
					}
				}
			} else {
				if (rel_time < 6147) {
					if (hops < 3) {
						w20 = -256;
					} else {
						w20 = -768;
					}
				} else {
					if (size < 133) {
						if (rel_time < 6167) {
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
				}
			}
		} else {
			if (rel_time < 6709) {
				if (hops < 3) {
					w20 = 512;
				} else {
					w20 = 1024;
				}
			} else {
				if (size < 133) {
					if (hops < 3) {
						if (rel_time < 6710) {
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
					w20 = 256;
				}
			}
		}
	} else {
		if (rel_time < 7270) {
			if (prod == 0) {
				if (hops < 2) {
					w20 = 0;
				} else {
					w20 = 0;
				}
			} else {
				w20 = -512;
			}
		} else {
			if (rel_time < 7832) {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 2) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_time < 7295) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				} else {
					w20 = 768;
				}
			} else {
				if (rel_time < 8393) {
					if (rel_time < 7969) {
						if (size < 133) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (hops < 3) {
							w20 = -256;
						} else {
							w20 = -256;
						}
					}
				} else {
					if (rel_time < 9092) {
						if (prod == 0) {
							w20 = 0;
						} else {
							w20 = 256;
						}
					} else {
						if (rel_time < 9516) {
							w20 = -256;
						} else {
							w20 = 0;
						}
					}
				}
			}
		}
	}
	int w21;
	if (rel_time < 3407) {
		if (rel_time < 2917) {
			if (rel_time < 2286) {
				if (rel_time < 1794) {
					if (rel_time < 1233) {
						if (rel_time < 604) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_time < 1656) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (rel_time < 2218) {
						if (hops < 2) {
							w21 = 256;
						} else {
							w21 = 256;
						}
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
						if (hops < 2) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w21 = 0;
					} else {
						w21 = -256;
					}
				}
			}
		} else {
			if (rel_time < 3340) {
				if (hops < 2) {
					w21 = 256;
				} else {
					w21 = 512;
				}
			} else {
				if (rel_time < 3360) {
					if (hops < 2) {
						if (rel_time < 3343) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_time < 3341) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (rel_time < 3362) {
						if (rel_time < 3361) {
							w21 = 256;
						} else {
							w21 = 0;
						}
					} else {
						w21 = 256;
					}
				}
			}
		}
	} else {
		if (rel_time < 3902) {
			if (rel_time < 3478) {
				if (hops < 2) {
					if (rel_time < 3408) {
						w21 = 0;
					} else {
						if (rel_time < 3409) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (rel_time < 3409) {
						if (hops < 4) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						w21 = 0;
					}
				}
			} else {
				if (hops < 2) {
					w21 = -256;
				} else {
					w21 = -512;
				}
			}
		} else {
			if (rel_time < 4530) {
				if (prod == 0) {
					if (rel_time < 4483) {
						if (size < 133) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_time < 4485) {
							w21 = 0;
						} else {
							w21 = 256;
						}
					}
				} else {
					if (hops < 3) {
						w21 = 256;
					} else {
						w21 = 512;
					}
				}
			} else {
				if (rel_time < 5092) {
					if (prod == 0) {
						if (hops < 3) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (hops < 3) {
							w21 = 0;
						} else {
							w21 = -256;
						}
					}
				} else {
					if (rel_time < 5653) {
						if (prod == 0) {
							w21 = 0;
						} else {
							w21 = 256;
						}
					} else {
						if (rel_time < 6147) {
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
		if (rel_time < 10215) {
			if (rel_time < 9654) {
				if (rel_time < 9092) {
					if (rel_time < 8464) {
						if (rel_time < 6847) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (prod == 2) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				} else {
					if (rel_time < 9516) {
						w22 = -256;
					} else {
						if (size < 133) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10077) {
					w22 = 256;
				} else {
					if (size < 133) {
						if (rel_time < 10079) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						w22 = 0;
					}
				}
			}
		} else {
			if (rel_time < 10638) {
				w22 = -256;
			} else {
				if (rel_time < 11200) {
					if (rel_time < 10776) {
						if (size < 133) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						w22 = 0;
					}
				} else {
					if (rel_time < 11337) {
						if (rel_time < 11202) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						w22 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 6776) {
			if (rel_time < 6285) {
				if (rel_time < 5724) {
					if (rel_time < 5094) {
						if (rel_time < 4530) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (prod == 0) {
							w22 = 0;
						} else {
							w22 = 256;
						}
					}
				} else {
					if (rel_time < 6147) {
						if (hops < 3) {
							w22 = -256;
						} else {
							w22 = -512;
						}
					} else {
						if (size < 133) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				}
			} else {
				if (rel_time < 6709) {
					if (hops < 4) {
						if (hops < 3) {
							w22 = 256;
						} else {
							w22 = 512;
						}
					} else {
						w22 = 768;
					}
				} else {
					if (rel_time < 6728) {
						if (hops < 3) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (rel_time < 6733) {
							w22 = 0;
						} else {
							w22 = 256;
						}
					}
				}
			}
		} else {
			if (rel_time < 7270) {
				if (prod == 0) {
					if (hops < 3) {
						if (rel_time < 6779) {
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
					w22 = -512;
				}
			} else {
				if (rel_time < 7832) {
					if (prod == 0) {
						if (size < 133) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						w22 = 512;
					}
				} else {
					if (rel_time < 8460) {
						if (prod == 0) {
							w22 = 0;
						} else {
							w22 = -256;
						}
					} else {
						if (rel_time < 8954) {
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
	if (hops < 4) {
		if (prod == 2) {
			if (rel_time < 10215) {
				if (rel_time < 9587) {
					if (rel_time < 9092) {
						if (rel_time < 8531) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_time < 9516) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						w23 = 256;
					}
				}
			} else {
				if (rel_time < 10638) {
					if (hops < 3) {
						w23 = -256;
					} else {
						if (rel_time < 10217) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				} else {
					if (rel_time < 11200) {
						if (rel_time < 10776) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_time < 11337) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 7851) {
				if (rel_time < 7290) {
					if (rel_time < 5606) {
						if (rel_time < 3922) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_time < 6728) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				} else {
					w23 = 0;
				}
			} else {
				if (rel_time < 8413) {
					if (hops < 3) {
						if (hops < 2) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						w23 = 0;
					}
				} else {
					if (rel_time < 9518) {
						if (rel_time < 8956) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_time < 10658) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1162) {
			if (prod == 0) {
				if (rel_time < 1096) {
					if (size < 133) {
						if (rel_time < 678) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_time < 534) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				} else {
					w23 = 256;
				}
			} else {
				w23 = 256;
			}
		} else {
			if (rel_time < 1723) {
				if (rel_time < 1658) {
					if (rel_time < 1656) {
						w23 = 0;
					} else {
						w23 = 0;
					}
				} else {
					w23 = 0;
				}
			} else {
				if (rel_time < 2285) {
					if (rel_time < 2237) {
						if (prod == 0) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						w23 = 256;
					}
				} else {
					if (rel_time < 2779) {
						if (rel_time < 2286) {
							w23 = 0;
						} else {
							w23 = -256;
						}
					} else {
						if (rel_time < 3407) {
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
	if (rel_time < 6779) {
		if (rel_time < 6285) {
			if (rel_time < 5724) {
				if (rel_time < 5163) {
					if (rel_time < 3408) {
						if (rel_time < 2917) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 3902) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (rel_time < 5653) {
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
				}
			} else {
				if (rel_time < 6147) {
					if (hops < 4) {
						w24 = -256;
					} else {
						w24 = -512;
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
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
			}
		} else {
			if (rel_time < 6709) {
				if (hops < 4) {
					w24 = 256;
				} else {
					w24 = 512;
				}
			} else {
				if (size < 133) {
					if (hops < 3) {
						if (rel_time < 6710) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 6728) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (rel_time < 6729) {
						w24 = 0;
					} else {
						if (rel_time < 6733) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 7270) {
			if (prod == 0) {
				if (hops < 2) {
					w24 = 0;
				} else {
					w24 = 0;
				}
			} else {
				if (hops < 2) {
					w24 = -256;
				} else {
					w24 = -256;
				}
			}
		} else {
			if (rel_time < 7832) {
				if (prod == 0) {
					if (size < 133) {
						if (rel_time < 7408) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 7295) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w24 = 256;
					} else {
						w24 = 256;
					}
				}
			} else {
				if (rel_time < 8460) {
					if (prod == 0) {
						if (rel_time < 8413) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (hops < 2) {
							w24 = -256;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (rel_time < 8954) {
						if (rel_time < 8531) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 9585) {
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
	if (hops < 3) {
		if (rel_time < 534) {
			if (hops < 2) {
				w25 = 0;
			} else {
				w25 = 0;
			}
		} else {
			if (rel_time < 1162) {
				if (rel_time < 1115) {
					if (prod == 0) {
						if (rel_time < 678) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (hops < 2) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w25 = 0;
					} else {
						w25 = 0;
					}
				}
			} else {
				if (rel_time < 1723) {
					if (prod == 2) {
						if (rel_time < 1233) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (hops < 2) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (rel_time < 2239) {
						if (prod == 0) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 2846) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 1162) {
			if (rel_time < 1115) {
				if (prod == 0) {
					if (rel_time < 553) {
						if (hops < 4) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (prod == 1) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w25 = 0;
					} else {
						w25 = 256;
					}
				}
			} else {
				if (hops < 4) {
					w25 = 0;
				} else {
					w25 = 256;
				}
			}
		} else {
			if (rel_time < 1657) {
				if (prod == 0) {
					if (hops < 4) {
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
			} else {
				if (rel_time < 2286) {
					if (prod == 0) {
						if (rel_time < 2219) {
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
				} else {
					if (rel_time < 2779) {
						w25 = 0;
					} else {
						if (prod == 0) {
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
	if (rel_time < 10215) {
		if (rel_time < 9587) {
			if (rel_time < 6779) {
				if (rel_time < 6285) {
					if (rel_time < 5724) {
						if (rel_time < 5094) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 6147) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (rel_time < 6709) {
						if (hops < 4) {
							w26 = 256;
						} else {
							w26 = 256;
						}
					} else {
						if (size < 133) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7270) {
					if (prod == 0) {
						if (hops < 2) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (hops < 2) {
							w26 = -256;
						} else {
							w26 = -256;
						}
					}
				} else {
					if (rel_time < 7832) {
						if (prod == 0) {
							w26 = 0;
						} else {
							w26 = 256;
						}
					} else {
						if (prod == 0) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (size < 133) {
					if (hops < 2) {
						if (rel_time < 9654) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 9654) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (rel_time < 10099) {
						if (rel_time < 10097) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 10104) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				}
			} else {
				if (hops < 4) {
					w26 = 0;
				} else {
					w26 = 256;
				}
			}
		}
	} else {
		if (rel_time < 10638) {
			if (hops < 4) {
				if (hops < 3) {
					w26 = 0;
				} else {
					if (rel_time < 10217) {
						w26 = 0;
					} else {
						w26 = 0;
					}
				}
			} else {
				w26 = -256;
			}
		} else {
			if (rel_time < 11200) {
				if (rel_time < 10776) {
					if (size < 133) {
						if (hops < 4) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (hops < 3) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						w26 = 256;
					}
				}
			} else {
				if (rel_time < 11337) {
					if (hops < 3) {
						if (rel_time < 11202) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 11267) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11346) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 11340) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				}
			}
		}
	}
	int w27;
	if (rel_time < 3478) {
		if (rel_time < 2917) {
			if (rel_time < 2356) {
				if (rel_time < 1794) {
					if (rel_time < 1162) {
						if (rel_time < 1115) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (prod == 0) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (rel_time < 2285) {
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
				}
			} else {
				if (rel_time < 2779) {
					if (hops < 2) {
						w27 = 0;
					} else {
						if (hops < 3) {
							w27 = -256;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 3) {
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
				}
			}
		} else {
			if (rel_time < 3340) {
				if (hops < 2) {
					w27 = 256;
				} else {
					w27 = 256;
				}
			} else {
				if (size < 133) {
					if (rel_time < 3408) {
						if (rel_time < 3341) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (rel_time < 3409) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (rel_time < 3361) {
						w27 = 0;
					} else {
						if (rel_time < 3362) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3902) {
			if (hops < 2) {
				w27 = 0;
			} else {
				w27 = -256;
			}
		} else {
			if (rel_time < 4530) {
				if (prod == 0) {
					if (rel_time < 4483) {
						if (size < 133) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (rel_time < 4485) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w27 = 0;
						} else {
							w27 = 256;
						}
					} else {
						w27 = 256;
					}
				}
			} else {
				if (rel_time < 5025) {
					if (rel_time < 4601) {
						if (hops < 3) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (hops < 3) {
							w27 = 0;
						} else {
							w27 = -256;
						}
					}
				} else {
					if (rel_time < 6776) {
						if (rel_time < 6285) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (rel_time < 7270) {
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
	if (hops < 4) {
		if (rel_time < 3478) {
			if (rel_time < 2917) {
				if (rel_time < 2356) {
					if (rel_time < 1794) {
						if (rel_time < 1233) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 2218) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				} else {
					if (rel_time < 2779) {
						if (hops < 2) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (size < 133) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3340) {
					if (hops < 2) {
						w28 = 0;
					} else {
						w28 = 256;
					}
				} else {
					if (size < 133) {
						if (rel_time < 3408) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 3361) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 3902) {
				if (hops < 2) {
					w28 = 0;
				} else {
					w28 = 0;
				}
			} else {
				if (rel_time < 4463) {
					if (rel_time < 4040) {
						if (size < 133) {
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
					if (rel_time < 5094) {
						if (prod == 0) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 5586) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10149) {
			if (rel_time < 9587) {
				if (rel_time < 8535) {
					if (rel_time < 8464) {
						if (rel_time < 7898) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						w28 = 256;
					}
				} else {
					if (prod == 0) {
						if (rel_time < 8974) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						w28 = 0;
					}
				}
			} else {
				if (rel_time < 9658) {
					w28 = 256;
				} else {
					if (rel_time < 10144) {
						if (rel_time < 10082) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 10146) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 10220) {
				w28 = 0;
			} else {
				if (prod == 0) {
					if (rel_time < 10708) {
						if (rel_time < 10643) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 11267) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				} else {
					if (rel_time < 11338) {
						if (rel_time < 10781) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 11340) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				}
			}
		}
	}
	int w29;
	if (hops < 2) {
		if (rel_time < 678) {
			if (rel_time < 534) {
				w29 = 0;
			} else {
				if (rel_time < 553) {
					w29 = 0;
				} else {
					w29 = 0;
				}
			}
		} else {
			if (rel_time < 1162) {
				if (prod == 2) {
					if (rel_time < 1095) {
						w29 = 0;
					} else {
						w29 = 0;
					}
				} else {
					if (rel_time < 1096) {
						w29 = 0;
					} else {
						w29 = 0;
					}
				}
			} else {
				if (rel_time < 6217) {
					if (rel_time < 5724) {
						if (rel_time < 5606) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (prod == 2) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				} else {
					if (rel_time < 6709) {
						if (rel_time < 6285) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (rel_time < 6847) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2286) {
			if (rel_time < 1723) {
				if (rel_time < 1162) {
					if (prod == 0) {
						if (rel_time < 1115) {
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
					if (prod == 2) {
						if (rel_time < 1233) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (rel_time < 1657) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (prod == 1) {
						if (hops < 4) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (rel_time < 1724) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				} else {
					if (rel_time < 2219) {
						if (hops < 3) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (hops < 3) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2779) {
				if (prod == 0) {
					w29 = 0;
				} else {
					if (hops < 3) {
						w29 = 0;
					} else {
						if (hops < 4) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3340) {
					if (rel_time < 2917) {
						if (rel_time < 2800) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						w29 = 0;
					}
				} else {
					if (rel_time < 3969) {
						if (prod == 0) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (rel_time < 4463) {
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
	if (rel_time < 10215) {
		if (rel_time < 9587) {
			if (rel_time < 9092) {
				if (rel_time < 8460) {
					if (rel_time < 7898) {
						if (rel_time < 7408) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (prod == 2) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (prod == 1) {
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
				}
			} else {
				if (rel_time < 9516) {
					if (hops < 2) {
						w30 = 0;
					} else {
						if (rel_time < 9094) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
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
				}
			}
		} else {
			if (prod == 0) {
				if (size < 133) {
					if (hops < 3) {
						if (hops < 2) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 10082) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (rel_time < 10099) {
						if (rel_time < 10097) {
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
				}
			} else {
				w30 = 0;
			}
		}
	} else {
		if (rel_time < 10638) {
			w30 = 0;
		} else {
			if (rel_time < 11200) {
				if (rel_time < 10776) {
					if (size < 133) {
						if (rel_time < 10641) {
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
					if (hops < 2) {
						if (rel_time < 10781) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (hops < 4) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				}
			} else {
				if (rel_time < 11337) {
					if (hops < 3) {
						if (rel_time < 11270) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (hops < 4) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11346) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 11340) {
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
	if (prod == 2) {
		if (rel_time < 10215) {
			if (rel_time < 9587) {
				if (rel_time < 9021) {
					if (rel_time < 8531) {
						if (rel_time < 7898) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 8976) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
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
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (rel_time < 10149) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 10099) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						w31 = 0;
					}
				}
			}
		} else {
			if (rel_time < 10638) {
				w31 = 0;
			} else {
				if (rel_time < 11200) {
					if (rel_time < 10776) {
						if (rel_time < 10708) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (hops < 2) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11337) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (hops < 4) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 7851) {
			if (rel_time < 7290) {
				if (hops < 3) {
					if (rel_time < 5606) {
						if (rel_time < 3922) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 6167) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (rel_time < 553) {
						if (hops < 4) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 1657) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				}
			} else {
				w31 = 0;
			}
		} else {
			if (rel_time < 8413) {
				if (hops < 4) {
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
					w31 = 0;
				}
			} else {
				if (rel_time < 8956) {
					if (hops < 2) {
						w31 = 0;
					} else {
						w31 = 0;
					}
				} else {
					if (rel_time < 9518) {
						if (hops < 2) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (hops < 2) {
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
	if (rel_time < 534) {
		if (hops < 3) {
			w32 = 0;
		} else {
			if (hops < 4) {
				w32 = 0;
			} else {
				w32 = 0;
			}
		}
	} else {
		if (rel_time < 1162) {
			if (rel_time < 1115) {
				if (prod == 0) {
					if (rel_time < 554) {
						if (hops < 2) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (prod == 1) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						w32 = 0;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w32 = 0;
					} else {
						if (hops < 3) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				} else {
					w32 = 0;
				}
			}
		} else {
			if (rel_time < 1723) {
				if (prod == 2) {
					if (rel_time < 1233) {
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
					if (rel_time < 1657) {
						if (hops < 2) {
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
				if (rel_time < 2285) {
					if (prod == 2) {
						if (rel_time < 1794) {
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
					if (rel_time < 2779) {
						if (prod == 0) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (rel_time < 3407) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				}
			}
		}
	}
	int w33;
	if (hops < 3) {
		if (rel_time < 534) {
			w33 = 0;
		} else {
			if (rel_time < 3478) {
				if (rel_time < 2917) {
					if (rel_time < 2356) {
						if (hops < 2) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 2779) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (rel_time < 3340) {
						w33 = 0;
					} else {
						if (rel_time < 3360) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3902) {
					if (rel_time < 3479) {
						w33 = 0;
					} else {
						w33 = 0;
					}
				} else {
					if (rel_time < 7341) {
						if (rel_time < 6847) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 7832) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3971) {
			if (rel_time < 3409) {
				if (rel_time < 2917) {
					if (rel_time < 2286) {
						if (hops < 4) {
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
					if (rel_time < 3340) {
						w33 = 0;
					} else {
						if (size < 133) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3902) {
					if (hops < 4) {
						w33 = 0;
					} else {
						w33 = 0;
					}
				} else {
					if (size < 133) {
						if (hops < 4) {
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
			if (rel_time < 4463) {
				if (hops < 4) {
					w33 = 0;
				} else {
					w33 = 256;
				}
			} else {
				if (rel_time < 5656) {
					if (rel_time < 5094) {
						if (prod == 0) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 5165) {
							w33 = 256;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (rel_time < 5726) {
						if (hops < 4) {
							w33 = 0;
						} else {
							w33 = -256;
						}
					} else {
						if (rel_time < 6288) {
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
	if (rel_time < 6216) {
		if (rel_time < 5724) {
			if (rel_time < 5606) {
				if (prod == 0) {
					if (rel_time < 5044) {
						if (rel_time < 4483) {
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
					if (rel_time < 5025) {
						if (rel_time < 4463) {
							w34 = 0;
						} else {
							w34 = 0;
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
				if (rel_time < 5653) {
					if (hops < 3) {
						w34 = 0;
					} else {
						if (rel_time < 5609) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (rel_time < 5654) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 6147) {
				if (hops < 4) {
					if (hops < 2) {
						w34 = 0;
					} else {
						if (hops < 3) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					w34 = -256;
				}
			} else {
				if (size < 133) {
					if (hops < 4) {
						if (hops < 2) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (rel_time < 6167) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					if (rel_time < 6169) {
						w34 = 0;
					} else {
						if (rel_time < 6172) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6709) {
			if (rel_time < 6285) {
				if (rel_time < 6217) {
					if (hops < 3) {
						if (hops < 2) {
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
					if (hops < 2) {
						w34 = 0;
					} else {
						w34 = 0;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 6288) {
						w34 = 0;
					} else {
						if (hops < 2) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					w34 = 256;
				}
			}
		} else {
			if (rel_time < 7270) {
				if (prod == 0) {
					if (rel_time < 6728) {
						if (rel_time < 6710) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (hops < 3) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						w34 = -256;
					}
				}
			} else {
				if (rel_time < 7832) {
					if (prod == 0) {
						if (size < 133) {
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
					if (rel_time < 8393) {
						if (size < 133) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (rel_time < 8981) {
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
	if (hops < 4) {
		if (rel_time < 8419) {
			if (rel_time < 7969) {
				if (rel_time < 7902) {
					if (prod == 0) {
						if (size < 133) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 7270) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					w35 = 0;
				}
			} else {
				if (prod == 2) {
					if (hops < 3) {
						if (rel_time < 8413) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 7973) {
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
						if (rel_time < 8395) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 8981) {
				if (prod == 2) {
					if (hops < 3) {
						if (rel_time < 8976) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 8462) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 8956) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 8957) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			} else {
				if (rel_time < 9543) {
					if (prod == 0) {
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
					if (rel_time < 10077) {
						if (prod == 0) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (prod == 0) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3971) {
			if (rel_time < 3409) {
				if (rel_time < 534) {
					w35 = 0;
				} else {
					if (rel_time < 1162) {
						if (rel_time < 1096) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 2917) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3902) {
					w35 = 0;
				} else {
					if (rel_time < 3903) {
						w35 = 0;
					} else {
						if (rel_time < 3969) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 4463) {
				w35 = 0;
			} else {
				if (rel_time < 5093) {
					if (prod == 0) {
						if (rel_time < 5028) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 4602) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (rel_time < 5654) {
						if (prod == 0) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 6216) {
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
	if (rel_time < 4530) {
		if (rel_time < 4040) {
			if (rel_time < 3478) {
				if (rel_time < 2917) {
					if (rel_time < 2356) {
						if (rel_time < 1723) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (prod == 2) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				} else {
					if (rel_time < 3340) {
						w36 = 0;
					} else {
						if (size < 133) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (rel_time < 3969) {
						if (rel_time < 3902) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (rel_time < 3971) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 3903) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (rel_time < 3903) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 2) {
				if (rel_time < 4463) {
					if (hops < 4) {
						w36 = 0;
					} else {
						w36 = 0;
					}
				} else {
					if (rel_time < 4484) {
						w36 = 0;
					} else {
						if (rel_time < 4485) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 4464) {
						w36 = 0;
					} else {
						w36 = 0;
					}
				} else {
					if (hops < 3) {
						w36 = 0;
					} else {
						if (rel_time < 4467) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5025) {
			if (hops < 2) {
				if (rel_time < 4602) {
					if (rel_time < 4601) {
						if (rel_time < 4531) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						w36 = 0;
					}
				} else {
					if (rel_time < 4603) {
						w36 = 0;
					} else {
						w36 = 0;
					}
				}
			} else {
				if (rel_time < 4601) {
					if (hops < 3) {
						if (rel_time < 4532) {
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
					if (hops < 3) {
						w36 = 0;
					} else {
						w36 = 0;
					}
				}
			}
		} else {
			if (rel_time < 5163) {
				if (prod == 0) {
					if (rel_time < 5094) {
						if (size < 133) {
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
					if (hops < 4) {
						w36 = 256;
					} else {
						w36 = 0;
					}
				}
			} else {
				if (rel_time < 5653) {
					if (prod == 2) {
						if (hops < 3) {
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
					if (rel_time < 6147) {
						if (rel_time < 5724) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (rel_time < 6779) {
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
	if (rel_time < 8460) {
		if (rel_time < 7969) {
			if (rel_time < 7902) {
				if (rel_time < 7408) {
					if (rel_time < 6847) {
						if (rel_time < 6285) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (rel_time < 7270) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
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
				if (hops < 2) {
					w37 = 0;
				} else {
					w37 = 0;
				}
			}
		} else {
			if (prod == 2) {
				if (rel_time < 8413) {
					if (hops < 2) {
						w37 = 0;
					} else {
						if (rel_time < 7973) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w37 = 0;
					} else {
						if (hops < 3) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (rel_time < 8395) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				} else {
					if (rel_time < 8395) {
						w37 = 0;
					} else {
						w37 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 8954) {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 8531) {
						if (rel_time < 8464) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (rel_time < 8535) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				} else {
					if (rel_time < 8464) {
						if (hops < 3) {
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
				}
			} else {
				if (rel_time < 8464) {
					w37 = 0;
				} else {
					w37 = 0;
				}
			}
		} else {
			if (rel_time < 9585) {
				if (prod == 0) {
					if (rel_time < 8974) {
						if (hops < 2) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (rel_time < 8981) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (rel_time < 9094) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10144) {
					if (prod == 0) {
						if (rel_time < 10099) {
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
				} else {
					if (rel_time < 10638) {
						if (rel_time < 10215) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (rel_time < 11200) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32 + w33 + w34 + w35 + w36 + w37) >> 8;
}
