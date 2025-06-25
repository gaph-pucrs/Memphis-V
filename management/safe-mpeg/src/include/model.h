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
		if (rel_time < 1094) {
			w0 = 55808;
		} else {
			if (prod == 0) {
				w0 = 44800;
			} else {
				w0 = 47360;
			}
		}
	} else {
		w0 = 59392;
	}
	int w1;
	if (size < 133) {
		if (rel_time < 1094) {
			w1 = 39168;
		} else {
			if (prod == 0) {
				w1 = 31232;
			} else {
				w1 = 33280;
			}
		}
	} else {
		w1 = 41472;
	}
	int w2;
	if (size < 133) {
		if (rel_time < 1094) {
			w2 = 27392;
		} else {
			if (prod == 0) {
				if (hops < 3) {
					w2 = 21504;
				} else {
					w2 = 22528;
				}
			} else {
				w2 = 23296;
			}
		}
	} else {
		w2 = 29184;
	}
	int w3;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 3) {
				w3 = 18688;
			} else {
				w3 = 19712;
			}
		} else {
			if (prod == 0) {
				if (hops < 2) {
					w3 = 14848;
				} else {
					w3 = 15616;
				}
			} else {
				if (hops < 3) {
					w3 = 15872;
				} else {
					w3 = 16896;
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 533) {
				w3 = 19200;
			} else {
				w3 = 20224;
			}
		} else {
			w3 = 20992;
		}
	}
	int w4;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 2) {
				w4 = 12800;
			} else {
				w4 = 13568;
			}
		} else {
			if (hops < 2) {
				w4 = 10496;
			} else {
				if (prod == 0) {
					if (hops < 4) {
						w4 = 10752;
					} else {
						w4 = 11520;
					}
				} else {
					w4 = 11520;
				}
			}
		}
	} else {
		if (hops < 2) {
			w4 = 13824;
		} else {
			if (rel_time < 533) {
				w4 = 13824;
			} else {
				w4 = 14848;
			}
		}
	}
	int w5;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 3) {
				w5 = 9216;
			} else {
				w5 = 9728;
			}
		} else {
			if (hops < 3) {
				if (prod == 0) {
					w5 = 7168;
				} else {
					if (rel_time < 11192) {
						if (rel_time < 1655) {
							w5 = 6400;
						} else {
							w5 = 7936;
						}
					} else {
						w5 = 6400;
					}
				}
			} else {
				if (prod == 0) {
					w5 = 7680;
				} else {
					w5 = 8192;
				}
			}
		}
	} else {
		if (rel_time < 603) {
			if (hops < 2) {
				w5 = 9216;
			} else {
				w5 = 9728;
			}
		} else {
			if (hops < 3) {
				w5 = 9984;
			} else {
				w5 = 10496;
			}
		}
	}
	int w6;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 2) {
				w6 = 6144;
			} else {
				if (rel_time < 677) {
					w6 = 6400;
				} else {
					w6 = 6912;
				}
			}
		} else {
			if (hops < 2) {
				if (prod == 0) {
					w6 = 4864;
				} else {
					if (rel_time < 11192) {
						if (rel_time < 10631) {
							w6 = 5120;
						} else {
							w6 = 6400;
						}
					} else {
						w6 = 4352;
					}
				}
			} else {
				if (prod == 0) {
					if (hops < 4) {
						w6 = 5120;
					} else {
						w6 = 5632;
					}
				} else {
					if (rel_time < 1655) {
						w6 = 4608;
					} else {
						if (rel_time < 11192) {
							w6 = 5888;
						} else {
							w6 = 4608;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 533) {
			w6 = 6400;
		} else {
			if (hops < 4) {
				w6 = 6912;
			} else {
				w6 = 7680;
			}
		}
	}
	int w7;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 4) {
				if (rel_time < 677) {
					w7 = 4352;
				} else {
					w7 = 4608;
				}
			} else {
				w7 = 5120;
			}
		} else {
			if (hops < 4) {
				if (prod == 0) {
					if (hops < 2) {
						w7 = 3328;
					} else {
						w7 = 3584;
					}
				} else {
					if (rel_time < 1655) {
						w7 = 3072;
					} else {
						if (rel_time < 2216) {
							w7 = 4864;
						} else {
							w7 = 3840;
						}
					}
				}
			} else {
				if (prod == 0) {
					w7 = 3840;
				} else {
					w7 = 4352;
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 533) {
				w7 = 4352;
			} else {
				w7 = 4608;
			}
		} else {
			if (rel_time < 603) {
				if (hops < 4) {
					w7 = 4608;
				} else {
					w7 = 5120;
				}
			} else {
				w7 = 5120;
			}
		}
	}
	int w8;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 4) {
				if (rel_time < 677) {
					if (hops < 2) {
						w8 = 2816;
					} else {
						w8 = 3072;
					}
				} else {
					w8 = 3328;
				}
			} else {
				w8 = 3584;
			}
		} else {
			if (hops < 3) {
				if (prod == 0) {
					w8 = 2304;
				} else {
					if (rel_time < 11192) {
						if (rel_time < 10631) {
							w8 = 2560;
						} else {
							w8 = 3584;
						}
					} else {
						w8 = 2048;
					}
				}
			} else {
				if (prod == 0) {
					w8 = 2560;
				} else {
					if (rel_time < 10776) {
						if (rel_time < 10212) {
							w8 = 2816;
						} else {
							w8 = 3840;
						}
					} else {
						w8 = 1792;
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 603) {
				if (hops < 2) {
					w8 = 3072;
				} else {
					w8 = 3328;
				}
			} else {
				if (rel_time < 10136) {
					if (rel_time < 1161) {
						w8 = 3840;
					} else {
						if (rel_time < 1722) {
							w8 = 2816;
						} else {
							w8 = 3328;
						}
					}
				} else {
					w8 = 2816;
				}
			}
		} else {
			w8 = 3840;
		}
	}
	int w9;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 4) {
				if (rel_time < 677) {
					if (hops < 2) {
						w9 = 2048;
					} else {
						w9 = 2048;
					}
				} else {
					w9 = 2304;
				}
			} else {
				if (rel_time < 677) {
					w9 = 2304;
				} else {
					w9 = 2560;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 11329) {
						if (prod == 0) {
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
						if (rel_time < 2777) {
							w9 = 1536;
						} else {
							w9 = 1792;
						}
					}
				}
			} else {
				if (prod == 0) {
					w9 = 1792;
				} else {
					if (rel_time < 1655) {
						w9 = 1024;
					} else {
						if (rel_time < 2216) {
							w9 = 3072;
						} else {
							w9 = 2048;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 603) {
				w9 = 2048;
			} else {
				if (rel_time < 10094) {
					if (rel_time < 9535) {
						if (rel_time < 8972) {
							w9 = 2304;
						} else {
							w9 = 1792;
						}
					} else {
						w9 = 2816;
					}
				} else {
					w9 = 2048;
				}
			}
		} else {
			if (rel_time < 533) {
				w9 = 2304;
			} else {
				w9 = 2560;
			}
		}
	}
	int w10;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 3) {
				if (rel_time < 677) {
					w10 = 1280;
				} else {
					w10 = 1536;
				}
			} else {
				if (rel_time < 677) {
					w10 = 1536;
				} else {
					w10 = 1792;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 10207) {
						if (rel_time < 9646) {
							w10 = 1024;
						} else {
							w10 = 1536;
						}
					} else {
						if (rel_time < 10631) {
							w10 = 0;
						} else {
							w10 = 1280;
						}
					}
				} else {
					if (rel_time < 11329) {
						if (rel_time < 10768) {
							w10 = 1280;
						} else {
							w10 = 1536;
						}
					} else {
						w10 = 768;
					}
				}
			} else {
				if (prod == 0) {
					w10 = 1280;
				} else {
					if (rel_time < 1655) {
						w10 = 768;
					} else {
						if (rel_time < 10776) {
							w10 = 1536;
						} else {
							w10 = 768;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 533) {
				w10 = 1280;
			} else {
				w10 = 1536;
			}
		} else {
			if (rel_time < 603) {
				w10 = 1536;
			} else {
				if (hops < 4) {
					if (rel_time < 10136) {
						if (rel_time < 9535) {
							w10 = 1792;
						} else {
							w10 = 2048;
						}
					} else {
						w10 = 1280;
					}
				} else {
					w10 = 1792;
				}
			}
		}
	}
	int w11;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 2) {
				if (rel_time < 553) {
					w11 = 768;
				} else {
					w11 = 1024;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 677) {
						w11 = 1024;
					} else {
						w11 = 1024;
					}
				} else {
					if (rel_time < 677) {
						w11 = 1024;
					} else {
						w11 = 1280;
					}
				}
			}
		} else {
			if (prod == 0) {
				if (hops < 4) {
					if (hops < 2) {
						w11 = 768;
					} else {
						if (rel_time < 10768) {
							w11 = 768;
						} else {
							w11 = 768;
						}
					}
				} else {
					w11 = 768;
				}
			} else {
				if (rel_time < 1655) {
					if (hops < 2) {
						w11 = 256;
					} else {
						if (hops < 3) {
							w11 = 512;
						} else {
							w11 = 256;
						}
					}
				} else {
					if (rel_time < 2216) {
						w11 = 1792;
					} else {
						if (rel_time < 2777) {
							w11 = 0;
						} else {
							w11 = 768;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 533) {
				w11 = 1024;
			} else {
				if (hops < 2) {
					if (rel_time < 10094) {
						if (rel_time < 9531) {
							w11 = 1024;
						} else {
							w11 = 1280;
						}
					} else {
						w11 = 768;
					}
				} else {
					w11 = 1024;
				}
			}
		} else {
			if (rel_time < 10136) {
				w11 = 1280;
			} else {
				w11 = 768;
			}
		}
	}
	int w12;
	if (size < 133) {
		if (rel_time < 3338) {
			if (rel_time < 2915) {
				if (rel_time < 2354) {
					if (prod == 0) {
						if (rel_time < 677) {
							w12 = 512;
						} else {
							w12 = 512;
						}
					} else {
						if (rel_time < 1655) {
							w12 = 768;
						} else {
							w12 = 1280;
						}
					}
				} else {
					if (rel_time < 2777) {
						if (hops < 2) {
							w12 = 0;
						} else {
							w12 = 0;
						}
					} else {
						w12 = 512;
					}
				}
			} else {
				w12 = 1792;
			}
		} else {
			if (rel_time < 3899) {
				if (prod == 0) {
					w12 = 512;
				} else {
					if (hops < 4) {
						w12 = -512;
					} else {
						w12 = -256;
					}
				}
			} else {
				if (rel_time < 4460) {
					if (rel_time < 4036) {
						w12 = 512;
					} else {
						w12 = 1792;
					}
				} else {
					if (rel_time < 5021) {
						if (prod == 0) {
							w12 = 512;
						} else {
							w12 = -512;
						}
					} else {
						if (rel_time < 5582) {
							w12 = 1024;
						} else {
							w12 = 512;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 603) {
				w12 = 512;
			} else {
				if (rel_time < 1161) {
					w12 = 1024;
				} else {
					if (rel_time < 1676) {
						w12 = 256;
					} else {
						if (rel_time < 2237) {
							w12 = 1024;
						} else {
							w12 = 768;
						}
					}
				}
			}
		} else {
			if (rel_time < 603) {
				if (hops < 4) {
					if (rel_time < 533) {
						w12 = 768;
					} else {
						if (hops < 3) {
							w12 = 768;
						} else {
							w12 = 768;
						}
					}
				} else {
					w12 = 768;
				}
			} else {
				if (rel_time < 1161) {
					w12 = 1024;
				} else {
					if (rel_time < 1722) {
						w12 = 512;
					} else {
						if (rel_time < 2283) {
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
		if (rel_time < 1094) {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 553) {
						w13 = 256;
					} else {
						w13 = 512;
					}
				} else {
					if (prod == 1) {
						w13 = 512;
					} else {
						if (hops < 3) {
							w13 = 256;
						} else {
							w13 = 512;
						}
					}
				}
			} else {
				if (rel_time < 677) {
					w13 = 512;
				} else {
					w13 = 512;
				}
			}
		} else {
			if (rel_time < 10069) {
				if (rel_time < 9646) {
					if (rel_time < 9085) {
						if (rel_time < 8524) {
							w13 = 256;
						} else {
							w13 = 768;
						}
					} else {
						if (prod == 0) {
							w13 = 256;
						} else {
							w13 = -512;
						}
					}
				} else {
					w13 = 1536;
				}
			} else {
				if (rel_time < 10631) {
					if (prod == 0) {
						if (hops < 2) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					} else {
						if (hops < 2) {
							w13 = -256;
						} else {
							w13 = -512;
						}
					}
				} else {
					if (rel_time < 11192) {
						if (prod == 0) {
							w13 = 256;
						} else {
							w13 = 1024;
						}
					} else {
						if (prod == 0) {
							w13 = 256;
						} else {
							w13 = 0;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 533) {
				if (hops < 2) {
					w13 = 256;
				} else {
					if (hops < 3) {
						w13 = 512;
					} else {
						w13 = 256;
					}
				}
			} else {
				if (rel_time < 10136) {
					if (rel_time < 9535) {
						if (rel_time < 9014) {
							w13 = 512;
						} else {
							w13 = 0;
						}
					} else {
						w13 = 768;
					}
				} else {
					w13 = 256;
				}
			}
		} else {
			if (rel_time < 603) {
				w13 = 512;
			} else {
				if (rel_time < 10136) {
					if (rel_time < 9575) {
						if (rel_time < 9014) {
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
		if (rel_time < 3338) {
			if (rel_time < 2915) {
				if (rel_time < 2354) {
					if (prod == 0) {
						if (hops < 2) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					} else {
						if (rel_time < 1655) {
							w14 = 256;
						} else {
							w14 = 768;
						}
					}
				} else {
					if (rel_time < 2777) {
						if (hops < 2) {
							w14 = -256;
						} else {
							w14 = 0;
						}
					} else {
						w14 = 256;
					}
				}
			} else {
				w14 = 1024;
			}
		} else {
			if (rel_time < 3899) {
				if (prod == 0) {
					if (hops < 2) {
						w14 = 256;
					} else {
						w14 = 256;
					}
				} else {
					if (hops < 4) {
						w14 = -512;
					} else {
						w14 = -256;
					}
				}
			} else {
				if (rel_time < 4460) {
					if (rel_time < 4036) {
						if (hops < 3) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					} else {
						w14 = 1024;
					}
				} else {
					if (rel_time < 5158) {
						if (prod == 0) {
							w14 = 0;
						} else {
							w14 = -512;
						}
					} else {
						if (rel_time < 5582) {
							w14 = 1280;
						} else {
							w14 = 256;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8453) {
			if (rel_time < 7892) {
				if (rel_time < 7331) {
					if (rel_time < 6770) {
						if (rel_time < 6210) {
							w14 = 256;
						} else {
							w14 = 768;
						}
					} else {
						if (rel_time < 7286) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					}
				} else {
					w14 = 768;
				}
			} else {
				if (rel_time < 8408) {
					w14 = 0;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					} else {
						w14 = 0;
					}
				}
			}
		} else {
			if (rel_time < 9014) {
				w14 = 768;
			} else {
				if (rel_time < 9575) {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					} else {
						if (rel_time < 9535) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					}
				} else {
					if (rel_time < 10136) {
						if (rel_time < 10094) {
							w14 = 512;
						} else {
							w14 = 512;
						}
					} else {
						w14 = 256;
					}
				}
			}
		}
	}
	int w15;
	if (hops < 4) {
		if (rel_time < 7892) {
			if (rel_time < 7402) {
				if (rel_time < 6841) {
					if (rel_time < 6214) {
						if (rel_time < 5719) {
							w15 = 256;
						} else {
							w15 = 0;
						}
					} else {
						if (prod == 0) {
							w15 = 256;
						} else {
							w15 = 1280;
						}
					}
				} else {
					if (rel_time < 7265) {
						w15 = -768;
					} else {
						if (size < 133) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7826) {
					w15 = 1280;
				} else {
					if (rel_time < 7845) {
						if (rel_time < 7828) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					} else {
						w15 = 512;
					}
				}
			}
		} else {
			if (rel_time < 8387) {
				if (rel_time < 7963) {
					w15 = 0;
				} else {
					w15 = -768;
				}
			} else {
				if (rel_time < 9014) {
					if (prod == 0) {
						if (rel_time < 8967) {
							w15 = 0;
						} else {
							w15 = 512;
						}
					} else {
						w15 = 1280;
					}
				} else {
					if (rel_time < 9509) {
						if (prod == 0) {
							w15 = 0;
						} else {
							w15 = -512;
						}
					} else {
						if (rel_time < 10136) {
							w15 = 256;
						} else {
							w15 = 0;
						}
					}
				}
			}
		}
	} else {
		if (prod == 2) {
			if (prod == 1) {
				if (rel_time < 6210) {
					if (rel_time < 5649) {
						if (rel_time < 5088) {
							w15 = 256;
						} else {
							w15 = 768;
						}
					} else {
						if (rel_time < 6143) {
							w15 = -512;
						} else {
							w15 = 0;
						}
					}
				} else {
					if (rel_time < 6283) {
						w15 = 1536;
					} else {
						if (rel_time < 7331) {
							w15 = 0;
						} else {
							w15 = 256;
						}
					}
				}
			} else {
				if (rel_time < 677) {
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
	if (hops < 3) {
		if (size < 133) {
			if (rel_time < 1094) {
				if (hops < 2) {
					if (rel_time < 553) {
						w16 = 0;
					} else {
						if (rel_time < 677) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				} else {
					if (prod == 1) {
						if (rel_time < 678) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						w16 = 0;
					}
				}
			} else {
				if (rel_time < 6143) {
					if (rel_time < 5719) {
						if (rel_time < 5158) {
							w16 = 0;
						} else {
							w16 = 256;
						}
					} else {
						w16 = -768;
					}
				} else {
					if (rel_time < 6704) {
						if (prod == 0) {
							w16 = 0;
						} else {
							w16 = 768;
						}
					} else {
						if (rel_time < 7265) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2799) {
				if (rel_time < 2237) {
					if (rel_time < 1676) {
						if (rel_time < 1161) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						w16 = 512;
					}
				} else {
					if (hops < 2) {
						w16 = -256;
					} else {
						w16 = 0;
					}
				}
			} else {
				if (rel_time < 3405) {
					w16 = 512;
				} else {
					if (rel_time < 3921) {
						if (rel_time < 3920) {
							w16 = -256;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_time < 4527) {
							w16 = 512;
						} else {
							w16 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 11261) {
			if (rel_time < 10702) {
				if (rel_time < 10144) {
					if (rel_time < 9580) {
						if (rel_time < 9014) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_time < 10069) {
							w16 = 1024;
						} else {
							w16 = 256;
						}
					}
				} else {
					if (rel_time < 10212) {
						w16 = -512;
					} else {
						if (size < 133) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10776) {
					w16 = 768;
				} else {
					if (rel_time < 11192) {
						w16 = 0;
					} else {
						w16 = 0;
					}
				}
			}
		} else {
			if (prod == 0) {
				if (hops < 4) {
					w16 = 0;
				} else {
					w16 = 0;
				}
			} else {
				if (hops < 4) {
					w16 = 0;
				} else {
					if (rel_time < 11332) {
						w16 = 0;
					} else {
						w16 = 0;
					}
				}
			}
		}
	}
	int w17;
	if (hops < 2) {
		if (rel_time < 7894) {
			if (rel_time < 7402) {
				if (rel_time < 6841) {
					if (rel_time < 6214) {
						if (rel_time < 5651) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (prod == 0) {
							w17 = 0;
						} else {
							w17 = 512;
						}
					}
				} else {
					if (rel_time < 7265) {
						w17 = -512;
					} else {
						if (size < 133) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7826) {
					w17 = 768;
				} else {
					if (size < 133) {
						if (rel_time < 7828) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						w17 = 256;
					}
				}
			}
		} else {
			if (rel_time < 8387) {
				if (rel_time < 7963) {
					w17 = 0;
				} else {
					w17 = -512;
				}
			} else {
				if (rel_time < 8972) {
					if (prod == 0) {
						if (rel_time < 8967) {
							w17 = 0;
						} else {
							w17 = 256;
						}
					} else {
						w17 = 768;
					}
				} else {
					if (rel_time < 9509) {
						if (rel_time < 9085) {
							w17 = 0;
						} else {
							w17 = -256;
						}
					} else {
						if (rel_time < 10069) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			}
		}
	} else {
		if (prod == 2) {
			if (prod == 1) {
				if (rel_time < 10697) {
					if (rel_time < 10136) {
						if (rel_time < 9575) {
							w17 = 0;
						} else {
							w17 = 512;
						}
					} else {
						if (rel_time < 10631) {
							w17 = -512;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 11192) {
						w17 = 512;
					} else {
						if (hops < 3) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 677) {
						if (hops < 3) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 5719) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 677) {
						w17 = 0;
					} else {
						if (rel_time < 9085) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 1095) {
				if (hops < 3) {
					w17 = 0;
				} else {
					if (rel_time < 553) {
						if (hops < 4) {
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
				if (hops < 3) {
					if (rel_time < 8948) {
						if (rel_time < 5601) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 9528) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 5585) {
						if (rel_time < 4480) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 6147) {
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
	if (rel_time < 7892) {
		if (rel_time < 7402) {
			if (rel_time < 6841) {
				if (rel_time < 6211) {
					if (rel_time < 5719) {
						if (rel_time < 5158) {
							w18 = 0;
						} else {
							w18 = 256;
						}
					} else {
						if (rel_time < 6143) {
							w18 = -512;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
							w18 = 0;
						} else {
							w18 = 256;
						}
					} else {
						if (hops < 3) {
							w18 = 512;
						} else {
							w18 = 768;
						}
					}
				}
			} else {
				if (rel_time < 7265) {
					if (hops < 2) {
						w18 = -256;
					} else {
						w18 = -512;
					}
				} else {
					if (size < 133) {
						if (hops < 4) {
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
				}
			}
		} else {
			if (rel_time < 7826) {
				if (hops < 2) {
					w18 = 512;
				} else {
					w18 = 1024;
				}
			} else {
				if (rel_time < 7845) {
					if (rel_time < 7828) {
						if (hops < 2) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						w18 = 0;
					}
				} else {
					if (rel_time < 7849) {
						w18 = 256;
					} else {
						w18 = 256;
					}
				}
			}
		}
	} else {
		if (rel_time < 8387) {
			if (rel_time < 7963) {
				if (hops < 2) {
					w18 = 0;
				} else {
					w18 = 0;
				}
			} else {
				if (hops < 2) {
					w18 = -512;
				} else {
					w18 = -768;
				}
			}
		} else {
			if (rel_time < 9014) {
				if (prod == 0) {
					if (rel_time < 8967) {
						if (size < 133) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (hops < 2) {
							w18 = 0;
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
				if (rel_time < 9509) {
					if (prod == 0) {
						if (hops < 3) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (hops < 2) {
							w18 = -256;
						} else {
							w18 = -256;
						}
					}
				} else {
					if (rel_time < 10069) {
						if (rel_time < 9646) {
							w18 = 0;
						} else {
							w18 = 512;
						}
					} else {
						if (rel_time < 10631) {
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
	if (rel_time < 4529) {
		if (rel_time < 4036) {
			if (rel_time < 3407) {
				if (rel_time < 2915) {
					if (rel_time < 2354) {
						if (rel_time < 1793) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 2777) {
							w19 = -256;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (rel_time < 3338) {
						w19 = 512;
					} else {
						if (size < 133) {
							w19 = 0;
						} else {
							w19 = 256;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 4) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 3921) {
							w19 = 0;
						} else {
							w19 = -256;
						}
					}
				} else {
					w19 = -512;
				}
			}
		} else {
			if (rel_time < 4460) {
				w19 = 512;
			} else {
				if (size < 133) {
					if (hops < 2) {
						w19 = 0;
					} else {
						if (rel_time < 4462) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (hops < 3) {
						w19 = 256;
					} else {
						w19 = 512;
					}
				}
			}
		}
	} else {
		if (rel_time < 5088) {
			if (prod == 0) {
				if (size < 133) {
					if (rel_time < 4598) {
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
					w19 = -256;
				}
			} else {
				w19 = -512;
			}
		} else {
			if (rel_time < 5649) {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 2) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						w19 = 256;
					}
				} else {
					w19 = 512;
				}
			} else {
				if (rel_time < 6143) {
					if (rel_time < 5719) {
						if (hops < 3) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (hops < 3) {
							w19 = -256;
						} else {
							w19 = -512;
						}
					}
				} else {
					if (rel_time < 6770) {
						if (prod == 0) {
							w19 = 0;
						} else {
							w19 = 512;
						}
					} else {
						if (rel_time < 7265) {
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
		if (rel_time < 11329) {
			if (rel_time < 10768) {
				if (rel_time < 10207) {
					if (rel_time < 9646) {
						if (rel_time < 9085) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_time < 10069) {
							w20 = 256;
						} else {
							w20 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (hops < 3) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (hops < 3) {
							w20 = -512;
						} else {
							w20 = -256;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (rel_time < 11192) {
						if (hops < 3) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (hops < 3) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				} else {
					if (rel_time < 11192) {
						if (hops < 3) {
							w20 = 256;
						} else {
							w20 = 256;
						}
					} else {
						w20 = 0;
					}
				}
			}
		} else {
			if (hops < 2) {
				w20 = 0;
			} else {
				if (hops < 3) {
					if (rel_time < 11332) {
						w20 = 0;
					} else {
						if (rel_time < 11337) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				} else {
					w20 = 0;
				}
			}
		}
	} else {
		if (prod == 0) {
			if (size < 133) {
				if (rel_time < 9085) {
					if (rel_time < 8457) {
						if (rel_time < 677) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_time < 8954) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				} else {
					if (rel_time < 9580) {
						w20 = 0;
					} else {
						if (rel_time < 10702) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			} else {
				if (rel_time < 533) {
					w20 = 0;
				} else {
					if (rel_time < 10136) {
						if (rel_time < 6210) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						w20 = 0;
					}
				}
			}
		} else {
			if (rel_time < 7406) {
				if (rel_time < 6846) {
					if (rel_time < 6283) {
						if (rel_time < 6143) {
							w20 = 0;
						} else {
							w20 = 512;
						}
					} else {
						w20 = -512;
					}
				} else {
					w20 = 768;
				}
			} else {
				if (rel_time < 7969) {
					w20 = -768;
				} else {
					if (rel_time < 8527) {
						w20 = 768;
					} else {
						if (rel_time < 9089) {
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
	if (rel_time < 1161) {
		if (rel_time < 1114) {
			if (prod == 0) {
				if (hops < 2) {
					if (rel_time < 553) {
						if (rel_time < 533) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (prod == 1) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (rel_time < 533) {
						if (hops < 3) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (hops < 3) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 678) {
						w21 = 0;
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
			}
		} else {
			if (hops < 4) {
				w21 = 256;
			} else {
				w21 = 256;
			}
		}
	} else {
		if (rel_time < 1722) {
			if (prod == 0) {
				if (rel_time < 1676) {
					if (rel_time < 1675) {
						if (hops < 3) {
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
						w21 = -256;
					}
				}
			} else {
				if (hops < 2) {
					w21 = -256;
				} else {
					if (hops < 3) {
						w21 = 0;
					} else {
						if (hops < 4) {
							w21 = -256;
						} else {
							w21 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 2283) {
				if (prod == 2) {
					if (rel_time < 1793) {
						if (hops < 2) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (hops < 3) {
							w21 = 256;
						} else {
							w21 = 256;
						}
					}
				} else {
					if (rel_time < 2217) {
						if (hops < 3) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (hops < 3) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2844) {
					if (prod == 2) {
						if (rel_time < 2354) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_time < 2778) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (rel_time < 3405) {
						if (prod == 0) {
							w21 = 0;
						} else {
							w21 = 256;
						}
					} else {
						if (rel_time < 3966) {
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
	if (rel_time < 4529) {
		if (rel_time < 4036) {
			if (rel_time < 3407) {
				if (rel_time < 2915) {
					if (rel_time < 2283) {
						if (rel_time < 1793) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (prod == 0) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (rel_time < 3405) {
							w22 = 256;
						} else {
							w22 = 0;
						}
					} else {
						if (hops < 2) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (rel_time < 3919) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (rel_time < 3921) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				} else {
					w22 = -256;
				}
			}
		} else {
			if (rel_time < 4460) {
				w22 = 256;
			} else {
				if (size < 133) {
					if (hops < 2) {
						if (rel_time < 4480) {
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
				} else {
					if (hops < 3) {
						w22 = 0;
					} else {
						w22 = 256;
					}
				}
			}
		}
	} else {
		if (rel_time < 5088) {
			if (prod == 0) {
				if (size < 133) {
					if (rel_time < 4598) {
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
					if (hops < 2) {
						w22 = -256;
					} else {
						w22 = 0;
					}
				}
			} else {
				w22 = -256;
			}
		} else {
			if (rel_time < 5649) {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 4) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (rel_time < 5606) {
							w22 = 256;
						} else {
							w22 = 0;
						}
					}
				} else {
					w22 = 256;
				}
			} else {
				if (rel_time < 6143) {
					if (rel_time < 5719) {
						if (hops < 3) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (hops < 3) {
							w22 = -256;
						} else {
							w22 = -256;
						}
					}
				} else {
					if (rel_time < 6841) {
						if (prod == 0) {
							w22 = 0;
						} else {
							w22 = 256;
						}
					} else {
						if (rel_time < 7265) {
							w22 = -256;
						} else {
							w22 = 0;
						}
					}
				}
			}
		}
	}
	int w23;
	if (rel_time < 7892) {
		if (rel_time < 7402) {
			if (rel_time < 6841) {
				if (rel_time < 6210) {
					if (rel_time < 5719) {
						if (rel_time < 5158) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (prod == 2) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (prod == 1) {
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
				}
			} else {
				if (rel_time < 7265) {
					if (hops < 2) {
						w23 = 0;
					} else {
						w23 = -256;
					}
				} else {
					if (size < 133) {
						if (hops < 4) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_time < 7286) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 7826) {
				if (hops < 2) {
					w23 = 256;
				} else {
					w23 = 512;
				}
			} else {
				if (rel_time < 7845) {
					if (rel_time < 7828) {
						if (hops < 2) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (hops < 3) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w23 = 0;
					} else {
						if (hops < 4) {
							w23 = 0;
						} else {
							w23 = 256;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8387) {
			if (rel_time < 7963) {
				if (hops < 2) {
					w23 = 0;
				} else {
					if (rel_time < 7894) {
						if (hops < 3) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (hops < 3) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w23 = -256;
				} else {
					w23 = -512;
				}
			}
		} else {
			if (rel_time < 9014) {
				if (prod == 0) {
					if (rel_time < 8967) {
						if (size < 133) {
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
					if (hops < 2) {
						w23 = 256;
					} else {
						w23 = 512;
					}
				}
			} else {
				if (rel_time < 9509) {
					if (prod == 0) {
						if (rel_time < 9085) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (hops < 2) {
							w23 = 0;
						} else {
							w23 = -256;
						}
					}
				} else {
					if (rel_time < 10136) {
						if (prod == 0) {
							w23 = 0;
						} else {
							w23 = 256;
						}
					} else {
						if (rel_time < 10631) {
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
	if (rel_time < 11329) {
		if (rel_time < 10768) {
			if (rel_time < 10207) {
				if (rel_time < 9646) {
					if (rel_time < 9014) {
						if (rel_time < 8524) {
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
					if (rel_time < 10069) {
						if (hops < 3) {
							w24 = 256;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 10089) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (rel_time < 10631) {
						if (hops < 3) {
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
				} else {
					if (hops < 3) {
						w24 = -256;
					} else {
						if (hops < 4) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (rel_time < 11192) {
					if (hops < 3) {
						if (hops < 2) {
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
						if (hops < 2) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 11261) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				}
			} else {
				if (rel_time < 11192) {
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
				w24 = 0;
			}
		}
	}
	int w25;
	if (rel_time < 4529) {
		if (rel_time < 4036) {
			if (rel_time < 3407) {
				if (rel_time < 2915) {
					if (rel_time < 1161) {
						if (rel_time < 1114) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 1722) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (rel_time < 3405) {
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
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (rel_time < 3919) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 3921) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					w25 = 0;
				}
			}
		} else {
			if (rel_time < 4460) {
				w25 = 256;
			} else {
				if (size < 133) {
					if (hops < 4) {
						if (rel_time < 4480) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 4462) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (hops < 3) {
						w25 = 0;
					} else {
						w25 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 5088) {
			if (prod == 0) {
				if (size < 133) {
					if (rel_time < 4598) {
						if (hops < 2) {
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
					if (hops < 2) {
						w25 = 0;
					} else {
						w25 = 0;
					}
				}
			} else {
				w25 = -256;
			}
		} else {
			if (rel_time < 5582) {
				if (rel_time < 5158) {
					if (hops < 4) {
						if (hops < 3) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 5089) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (hops < 3) {
						w25 = 256;
					} else {
						if (hops < 4) {
							w25 = 256;
						} else {
							w25 = 0;
						}
					}
				}
			} else {
				if (rel_time < 6210) {
					if (prod == 0) {
						if (rel_time < 6162) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (hops < 3) {
							w25 = 0;
						} else {
							w25 = -256;
						}
					}
				} else {
					if (rel_time < 7892) {
						if (rel_time < 7402) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 8387) {
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
	if (hops < 2) {
		if (prod == 2) {
			if (rel_time < 11329) {
				if (rel_time < 10768) {
					if (rel_time < 10207) {
						if (rel_time < 9646) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 10631) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (rel_time < 11192) {
						w26 = 0;
					} else {
						if (rel_time < 11261) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				}
			} else {
				w26 = 0;
			}
		} else {
			if (rel_time < 8406) {
				if (rel_time < 7845) {
					if (rel_time < 5601) {
						if (rel_time < 5041) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 6162) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (rel_time < 8391) {
						w26 = 0;
					} else {
						w26 = 0;
					}
				}
			} else {
				if (rel_time < 8967) {
					w26 = 0;
				} else {
					if (rel_time < 10089) {
						if (rel_time < 9513) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 11197) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				}
			}
		}
	} else {
		if (prod == 2) {
			if (hops < 4) {
				if (rel_time < 7963) {
					if (rel_time < 7402) {
						if (rel_time < 6841) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 7826) {
							w26 = 256;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (rel_time < 8387) {
						w26 = -256;
					} else {
						if (rel_time < 9014) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				}
			} else {
				if (rel_time < 11329) {
					if (rel_time < 10702) {
						if (rel_time < 10144) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 10776) {
							w26 = 256;
						} else {
							w26 = 0;
						}
					}
				} else {
					w26 = 0;
				}
			}
		} else {
			if (rel_time < 8967) {
				if (rel_time < 8948) {
					if (rel_time < 4480) {
						if (rel_time < 2236) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 5601) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (rel_time < 8954) {
						w26 = 0;
					} else {
						if (hops < 3) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10650) {
					if (rel_time < 9513) {
						if (hops < 3) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (hops < 4) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (rel_time < 11197) {
						if (hops < 3) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (hops < 4) {
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
	if (hops < 2) {
		if (rel_time < 1232) {
			if (rel_time < 1114) {
				if (rel_time < 553) {
					if (rel_time < 533) {
						w27 = 0;
					} else {
						if (rel_time < 534) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (rel_time < 677) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						w27 = 0;
					}
				}
			} else {
				if (rel_time < 1161) {
					w27 = 0;
				} else {
					w27 = 0;
				}
			}
		} else {
			if (rel_time < 1655) {
				w27 = 0;
			} else {
				if (prod == 2) {
					if (rel_time < 2237) {
						if (rel_time < 1793) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (rel_time < 2799) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (rel_time < 8406) {
						if (rel_time < 2218) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (rel_time < 8954) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 11261) {
			if (rel_time < 10768) {
				if (rel_time < 10207) {
					if (rel_time < 9575) {
						if (rel_time < 9017) {
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
					if (prod == 0) {
						if (hops < 3) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (hops < 3) {
							w27 = -256;
						} else {
							w27 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (hops < 3) {
						if (rel_time < 11197) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (rel_time < 11197) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (hops < 3) {
						w27 = 0;
					} else {
						if (hops < 4) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 11329) {
					w27 = 0;
				} else {
					w27 = 0;
				}
			} else {
				if (prod == 0) {
					if (hops < 4) {
						w27 = 0;
					} else {
						w27 = 0;
					}
				} else {
					if (rel_time < 11329) {
						w27 = 0;
					} else {
						w27 = 0;
					}
				}
			}
		}
	}
	int w28;
	if (hops < 4) {
		if (rel_time < 4527) {
			if (rel_time < 4036) {
				if (rel_time < 3407) {
					if (rel_time < 2915) {
						if (rel_time < 2354) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 3338) {
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
						w28 = 0;
					}
				}
			} else {
				if (prod == 2) {
					if (rel_time < 4460) {
						w28 = 0;
					} else {
						w28 = 0;
					}
				} else {
					if (rel_time < 4462) {
						if (hops < 3) {
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
			}
		} else {
			if (rel_time < 5088) {
				if (prod == 0) {
					if (size < 133) {
						if (rel_time < 4598) {
							w28 = 0;
						} else {
							w28 = 0;
						}
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
			} else {
				if (rel_time < 5606) {
					if (prod == 2) {
						if (rel_time < 5158) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 5585) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				} else {
					if (rel_time < 6143) {
						if (rel_time < 5719) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 6841) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				}
			}
		}
	} else {
		if (prod == 0) {
			if (rel_time < 8954) {
				if (rel_time < 8391) {
					if (rel_time < 6706) {
						if (rel_time < 5025) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 6770) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				} else {
					if (prod == 1) {
						if (size < 133) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						w28 = 0;
					}
				}
			} else {
				if (rel_time < 9014) {
					w28 = 0;
				} else {
					if (rel_time < 10650) {
						if (rel_time < 9575) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (prod == 1) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 7406) {
				if (rel_time < 6846) {
					if (rel_time < 6283) {
						if (rel_time < 6143) {
							w28 = 0;
						} else {
							w28 = 256;
						}
					} else {
						w28 = 0;
					}
				} else {
					w28 = 256;
				}
			} else {
				if (rel_time < 7969) {
					w28 = -256;
				} else {
					if (rel_time < 8527) {
						w28 = 256;
					} else {
						if (rel_time < 9089) {
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
	if (rel_time < 11329) {
		if (rel_time < 10768) {
			if (rel_time < 10207) {
				if (rel_time < 9575) {
					if (rel_time < 9085) {
						if (rel_time < 8457) {
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
					if (prod == 0) {
						if (size < 133) {
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
			} else {
				if (prod == 0) {
					if (rel_time < 10702) {
						if (hops < 3) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						w29 = 0;
					}
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
			}
		} else {
			if (prod == 0) {
				if (rel_time < 11192) {
					if (hops < 3) {
						w29 = 0;
					} else {
						if (hops < 4) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				} else {
					if (rel_time < 11258) {
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
			} else {
				if (rel_time < 11192) {
					if (hops < 3) {
						if (hops < 2) {
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
					w29 = 0;
				}
			}
		}
	} else {
		if (hops < 2) {
			w29 = 0;
		} else {
			if (hops < 3) {
				w29 = 0;
			} else {
				if (rel_time < 11332) {
					w29 = 0;
				} else {
					w29 = 0;
				}
			}
		}
	}
	int w30;
	if (rel_time < 7963) {
		if (rel_time < 7402) {
			if (rel_time < 6841) {
				if (rel_time < 6211) {
					if (rel_time < 5649) {
						if (rel_time < 5158) {
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
						if (hops < 3) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7265) {
					if (hops < 2) {
						w30 = 0;
					} else {
						w30 = 0;
					}
				} else {
					if (size < 133) {
						if (rel_time < 7333) {
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
			if (rel_time < 7826) {
				if (hops < 3) {
					w30 = 0;
				} else {
					w30 = 256;
				}
			} else {
				if (rel_time < 7845) {
					if (hops < 4) {
						if (rel_time < 7828) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						w30 = 0;
					}
				} else {
					if (hops < 4) {
						w30 = 0;
					} else {
						if (rel_time < 7892) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8387) {
			w30 = 0;
		} else {
			if (prod == 0) {
				if (rel_time < 8967) {
					if (size < 133) {
						if (rel_time < 8524) {
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
					if (hops < 2) {
						if (rel_time < 10089) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 10655) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8948) {
					if (hops < 2) {
						w30 = 0;
					} else {
						w30 = 256;
					}
				} else {
					if (rel_time < 9509) {
						if (hops < 3) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 10069) {
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
	if (rel_time < 4528) {
		if (rel_time < 4036) {
			if (rel_time < 3407) {
				if (rel_time < 2844) {
					if (rel_time < 2797) {
						if (rel_time < 1232) {
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
					if (prod == 2) {
						if (prod == 1) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 3340) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (rel_time < 3919) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 3921) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
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
			if (rel_time < 4460) {
				if (hops < 4) {
					w31 = 0;
				} else {
					w31 = 0;
				}
			} else {
				if (size < 133) {
					if (rel_time < 4462) {
						if (hops < 3) {
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
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						w31 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 5088) {
			if (prod == 0) {
				if (size < 133) {
					if (rel_time < 4598) {
						if (hops < 3) {
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
					w31 = 0;
				}
			} else {
				w31 = 0;
			}
		} else {
			if (rel_time < 5582) {
				if (rel_time < 5158) {
					if (hops < 3) {
						if (hops < 2) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 5089) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (hops < 3) {
						w31 = 0;
					} else {
						if (hops < 4) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				}
			} else {
				if (rel_time < 5601) {
					if (hops < 3) {
						if (rel_time < 5585) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 5585) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (rel_time < 5606) {
						if (rel_time < 5603) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 6210) {
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
	if (rel_time < 7963) {
		if (rel_time < 7402) {
			if (rel_time < 6841) {
				if (rel_time < 6210) {
					if (rel_time < 6162) {
						if (rel_time < 4529) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (size < 133) {
							w32 = 256;
						} else {
							w32 = 0;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 6723) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (prod == 0) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7265) {
					if (hops < 2) {
						w32 = 0;
					} else {
						w32 = 0;
					}
				} else {
					if (size < 133) {
						if (rel_time < 7333) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (hops < 4) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 7826) {
				if (hops < 4) {
					w32 = 0;
				} else {
					w32 = 0;
				}
			} else {
				if (rel_time < 7845) {
					if (hops < 4) {
						if (hops < 3) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						w32 = 0;
					}
				} else {
					if (hops < 4) {
						w32 = 0;
					} else {
						if (rel_time < 7892) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8387) {
			w32 = 0;
		} else {
			if (prod == 0) {
				if (rel_time < 8967) {
					if (size < 133) {
						if (rel_time < 8524) {
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
				} else {
					if (rel_time < 9014) {
						if (hops < 4) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (rel_time < 9085) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8948) {
					if (hops < 2) {
						w32 = 0;
					} else {
						w32 = 0;
					}
				} else {
					if (rel_time < 10631) {
						if (rel_time < 10069) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (rel_time < 11192) {
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
	if (rel_time < 533) {
		if (hops < 3) {
			if (hops < 2) {
				w33 = 0;
			} else {
				w33 = 0;
			}
		} else {
			if (hops < 4) {
				w33 = 0;
			} else {
				w33 = 0;
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 7963) {
				if (rel_time < 7402) {
					if (rel_time < 6841) {
						if (rel_time < 6723) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 7265) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (rel_time < 7826) {
						w33 = 0;
					} else {
						if (rel_time < 7845) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8387) {
					w33 = 0;
				} else {
					if (prod == 0) {
						if (rel_time < 10089) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 8948) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				}
			}
		} else {
			if (size < 133) {
				if (prod == 0) {
					if (rel_time < 9085) {
						if (rel_time < 8391) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 9580) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (rel_time < 678) {
						if (hops < 4) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 1655) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				}
			} else {
				if (rel_time < 1161) {
					if (rel_time < 603) {
						if (hops < 4) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (hops < 4) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (rel_time < 1722) {
						if (hops < 4) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 2283) {
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
	if (hops < 4) {
		if (rel_time < 533) {
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
			if (rel_time < 1232) {
				if (rel_time < 1114) {
					if (prod == 0) {
						if (hops < 3) {
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
					if (rel_time < 1161) {
						w34 = 0;
					} else {
						if (hops < 3) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				}
			} else {
				if (rel_time < 1655) {
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
					if (rel_time < 2283) {
						if (prod == 0) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (rel_time < 2777) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 603) {
			if (rel_time < 534) {
				if (rel_time < 533) {
					w34 = 0;
				} else {
					w34 = 0;
				}
			} else {
				w34 = 0;
			}
		} else {
			if (rel_time < 1161) {
				if (rel_time < 1114) {
					if (rel_time < 678) {
						if (rel_time < 677) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (rel_time < 1095) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					w34 = 0;
				}
			} else {
				if (rel_time < 1722) {
					if (rel_time < 1675) {
						if (prod == 0) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						w34 = 0;
					}
				} else {
					if (rel_time < 2216) {
						if (rel_time < 1723) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (rel_time < 2845) {
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
	if (rel_time < 4527) {
		if (rel_time < 4036) {
			if (rel_time < 3407) {
				if (rel_time < 2844) {
					if (rel_time < 2797) {
						if (rel_time < 2777) {
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
					if (prod == 2) {
						if (prod == 1) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 3340) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (rel_time < 3919) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 3921) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w35 = 0;
					} else {
						w35 = 0;
					}
				}
			}
		} else {
			if (prod == 2) {
				if (hops < 4) {
					if (rel_time < 4460) {
						if (hops < 2) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 4480) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					w35 = 0;
				}
			} else {
				if (rel_time < 4462) {
					if (hops < 3) {
						if (hops < 2) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						w35 = 0;
					}
				} else {
					if (hops < 2) {
						w35 = 0;
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
		if (rel_time < 5088) {
			if (prod == 0) {
				if (size < 133) {
					if (rel_time < 4598) {
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
				} else {
					if (rel_time < 5041) {
						w35 = 0;
					} else {
						w35 = 0;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w35 = 0;
					} else {
						w35 = 0;
					}
				} else {
					if (rel_time < 4599) {
						w35 = 0;
					} else {
						w35 = 0;
					}
				}
			}
		} else {
			if (rel_time < 5582) {
				if (rel_time < 5158) {
					if (hops < 3) {
						if (rel_time < 5089) {
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
					if (hops < 3) {
						w35 = 0;
					} else {
						if (hops < 4) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			} else {
				if (rel_time < 5601) {
					if (hops < 3) {
						if (rel_time < 5585) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 5585) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (rel_time < 5606) {
						if (rel_time < 5603) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 6143) {
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
	if (rel_time < 7963) {
		if (rel_time < 7402) {
			if (rel_time < 6841) {
				if (rel_time < 6210) {
					if (rel_time < 6162) {
						if (rel_time < 6143) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (size < 133) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 6214) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (prod == 0) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7265) {
					if (hops < 3) {
						if (hops < 2) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						w36 = 0;
					}
				} else {
					if (size < 133) {
						if (rel_time < 7333) {
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
				}
			}
		} else {
			if (rel_time < 7826) {
				if (hops < 3) {
					w36 = 0;
				} else {
					w36 = 0;
				}
			} else {
				if (rel_time < 7845) {
					if (hops < 4) {
						if (rel_time < 7828) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						w36 = 0;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (rel_time < 7892) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8387) {
			if (hops < 4) {
				w36 = 0;
			} else {
				if (rel_time < 7965) {
					w36 = 0;
				} else {
					w36 = 0;
				}
			}
		} else {
			if (rel_time < 8948) {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 2) {
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
				} else {
					if (hops < 3) {
						w36 = 0;
					} else {
						w36 = 0;
					}
				}
			} else {
				if (rel_time < 9575) {
					if (prod == 0) {
						if (rel_time < 8954) {
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
					if (rel_time < 10069) {
						if (rel_time < 9649) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (size < 133) {
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
		if (rel_time < 11258) {
			if (rel_time < 10768) {
				if (rel_time < 10207) {
					if (rel_time < 9535) {
						if (rel_time < 9014) {
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
					if (prod == 0) {
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
				if (prod == 0) {
					if (rel_time < 11192) {
						if (hops < 3) {
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
			if (prod == 0) {
				if (hops < 2) {
					if (rel_time < 11261) {
						w37 = 0;
					} else {
						w37 = 0;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11261) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (rel_time < 11261) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				}
			} else {
				if (rel_time < 11329) {
					w37 = 0;
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
			}
		}
	} else {
		if (rel_time < 603) {
			if (rel_time < 534) {
				if (rel_time < 533) {
					w37 = 0;
				} else {
					w37 = 0;
				}
			} else {
				w37 = 0;
			}
		} else {
			if (rel_time < 3406) {
				if (rel_time < 2845) {
					if (rel_time < 2354) {
						if (rel_time < 1723) {
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
						if (prod == 1) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (rel_time < 3340) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3477) {
					if (rel_time < 3407) {
						w37 = 0;
					} else {
						w37 = 0;
					}
				} else {
					if (rel_time < 4528) {
						if (rel_time < 3968) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (rel_time < 4599) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				}
			}
		}
	}
	int w38;
	if (prod == 2) {
		if (rel_time < 2354) {
			if (rel_time < 1793) {
				if (rel_time < 1232) {
					if (rel_time < 1094) {
						if (rel_time < 677) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 1161) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				} else {
					if (rel_time < 1655) {
						if (hops < 4) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 1722) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2283) {
					if (hops < 2) {
						if (rel_time < 2216) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						w38 = 0;
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
			}
		} else {
			if (rel_time < 2844) {
				if (rel_time < 2777) {
					if (hops < 4) {
						if (hops < 3) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						w38 = 0;
					}
				} else {
					if (hops < 3) {
						w38 = 0;
					} else {
						if (rel_time < 2799) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3405) {
					if (hops < 3) {
						if (rel_time < 3338) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 2915) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				} else {
					if (rel_time < 3966) {
						if (prod == 1) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 4527) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2236) {
			if (rel_time < 1675) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1095) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 553) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				} else {
					if (rel_time < 1114) {
						if (hops < 4) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 1656) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2217) {
					if (hops < 3) {
						w38 = 0;
					} else {
						w38 = 0;
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
			}
		} else {
			if (rel_time < 2797) {
				if (hops < 2) {
					if (rel_time < 2778) {
						w38 = 0;
					} else {
						w38 = 0;
					}
				} else {
					if (rel_time < 2778) {
						if (hops < 3) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (hops < 3) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8954) {
					if (rel_time < 8948) {
						if (rel_time < 7845) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 8950) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				} else {
					if (rel_time < 9513) {
						if (hops < 3) {
							w38 = 0;
						} else {
							w38 = 0;
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
		}
	}
	int w39;
	if (rel_time < 533) {
		if (hops < 3) {
			if (hops < 2) {
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
			if (rel_time < 10653) {
				if (rel_time < 10094) {
					if (rel_time < 9646) {
						if (rel_time < 8972) {
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
						if (hops < 2) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (hops < 2) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				}
			} else {
				if (rel_time < 11192) {
					if (prod == 0) {
						if (rel_time < 10702) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (hops < 2) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				} else {
					if (rel_time < 11197) {
						if (hops < 2) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (hops < 2) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				}
			}
		} else {
			if (size < 133) {
				if (rel_time < 6143) {
					if (rel_time < 5651) {
						if (rel_time < 5158) {
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
					if (rel_time < 6283) {
						if (rel_time < 6214) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (rel_time < 6846) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					}
				}
			} else {
				if (rel_time < 5649) {
					if (rel_time < 5088) {
						if (rel_time < 4527) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						w39 = 0;
					}
				} else {
					if (rel_time < 6210) {
						if (hops < 4) {
							w39 = 0;
						} else {
							w39 = 0;
						}
					} else {
						if (rel_time < 6770) {
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
	if (rel_time < 11258) {
		if (rel_time < 10768) {
			if (rel_time < 10136) {
				if (rel_time < 9575) {
					if (rel_time < 9014) {
						if (rel_time < 8524) {
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
					if (prod == 2) {
						if (hops < 4) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (rel_time < 10072) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (hops < 2) {
						if (rel_time < 10207) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						if (prod == 1) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						w40 = 0;
					}
				}
			}
		} else {
			if (prod == 0) {
				if (hops < 4) {
					if (rel_time < 11192) {
						if (hops < 2) {
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
					if (rel_time < 11197) {
						if (rel_time < 11192) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					} else {
						w40 = 0;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						if (hops < 2) {
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
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 2) {
				if (rel_time < 11261) {
					w40 = 0;
				} else {
					w40 = 0;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 11261) {
						w40 = 0;
					} else {
						w40 = 0;
					}
				} else {
					if (rel_time < 11261) {
						w40 = 0;
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
			if (hops < 3) {
				if (hops < 2) {
					w40 = 0;
				} else {
					if (rel_time < 11329) {
						w40 = 0;
					} else {
						if (rel_time < 11332) {
							w40 = 0;
						} else {
							w40 = 0;
						}
					}
				}
			} else {
				if (rel_time < 11329) {
					w40 = 0;
				} else {
					if (rel_time < 11332) {
						w40 = 0;
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
	}
	int w41;
	if (rel_time < 7963) {
		if (rel_time < 7402) {
			if (rel_time < 6841) {
				if (rel_time < 6723) {
					if (rel_time < 4529) {
						if (rel_time < 4036) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (rel_time < 5088) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				} else {
					if (rel_time < 6770) {
						if (rel_time < 6728) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (hops < 3) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7265) {
					if (hops < 3) {
						if (hops < 2) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (rel_time < 6843) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 7337) {
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
			if (rel_time < 7826) {
				if (hops < 3) {
					if (hops < 2) {
						w41 = 0;
					} else {
						w41 = 0;
					}
				} else {
					w41 = 0;
				}
			} else {
				if (rel_time < 7845) {
					if (hops < 4) {
						if (hops < 2) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						w41 = 0;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (rel_time < 7892) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 8387) {
			if (hops < 4) {
				w41 = 0;
			} else {
				if (rel_time < 7965) {
					w41 = 0;
				} else {
					w41 = 0;
				}
			}
		} else {
			if (rel_time < 8453) {
				if (rel_time < 8406) {
					if (hops < 2) {
						if (rel_time < 8391) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (hops < 3) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				} else {
					if (hops < 3) {
						w41 = 0;
					} else {
						w41 = 0;
					}
				}
			} else {
				if (rel_time < 8948) {
					if (prod == 0) {
						if (hops < 2) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (hops < 3) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				} else {
					if (rel_time < 8954) {
						if (rel_time < 8950) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					} else {
						if (rel_time < 9014) {
							w41 = 0;
						} else {
							w41 = 0;
						}
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32 + w33 + w34 + w35 + w36 + w37 + w38 + w39 + w40 + w41) >> 8;
}
