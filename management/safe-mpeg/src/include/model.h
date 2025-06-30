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
				w0 = 44544;
			} else {
				w0 = 47104;
			}
		}
	} else {
		w0 = 59136;
	}
	int w1;
	if (size < 133) {
		if (rel_time < 1094) {
			w1 = 38912;
		} else {
			if (prod == 0) {
				w1 = 31232;
			} else {
				w1 = 33024;
			}
		}
	} else {
		w1 = 41472;
	}
	int w2;
	if (size < 133) {
		if (rel_time < 1094) {
			w2 = 27136;
		} else {
			if (prod == 0) {
				if (hops < 3) {
					w2 = 21504;
				} else {
					w2 = 22528;
				}
			} else {
				w2 = 23040;
			}
		}
	} else {
		w2 = 28928;
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
				w3 = 18944;
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
					w4 = 10752;
				} else {
					w4 = 11520;
				}
			}
		}
	} else {
		if (rel_time < 603) {
			w4 = 13824;
		} else {
			if (hops < 2) {
				w4 = 14080;
			} else {
				w4 = 14848;
			}
		}
	}
	int w5;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 3) {
				w5 = 8960;
			} else {
				w5 = 9728;
			}
		} else {
			if (hops < 4) {
				if (prod == 0) {
					if (hops < 2) {
						w5 = 7168;
					} else {
						w5 = 7424;
					}
				} else {
					if (rel_time < 1655) {
						w5 = 6400;
					} else {
						if (rel_time < 11189) {
							w5 = 7936;
						} else {
							w5 = 6400;
						}
					}
				}
			} else {
				w5 = 8192;
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 603) {
				w5 = 9216;
			} else {
				w5 = 9728;
			}
		} else {
			if (rel_time < 533) {
				w5 = 9472;
			} else {
				w5 = 10240;
			}
		}
	}
	int w6;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 2) {
				w6 = 6144;
			} else {
				if (hops < 4) {
					w6 = 6656;
				} else {
					w6 = 7168;
				}
			}
		} else {
			if (hops < 3) {
				if (prod == 0) {
					w6 = 4864;
				} else {
					if (rel_time < 1655) {
						w6 = 4352;
					} else {
						if (rel_time < 2216) {
							w6 = 6400;
						} else {
							w6 = 5376;
						}
					}
				}
			} else {
				if (prod == 0) {
					w6 = 5376;
				} else {
					if (rel_time < 1655) {
						w6 = 4608;
					} else {
						if (rel_time < 10774) {
							w6 = 5888;
						} else {
							w6 = 4608;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 533) {
				w6 = 6400;
			} else {
				w6 = 6912;
			}
		} else {
			if (rel_time < 533) {
				w6 = 6656;
			} else {
				w6 = 7424;
			}
		}
	}
	int w7;
	if (size < 133) {
		if (rel_time < 1094) {
			if (rel_time < 677) {
				if (hops < 2) {
					w7 = 4096;
				} else {
					w7 = 4352;
				}
			} else {
				w7 = 4864;
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
					if (rel_time < 11189) {
						if (rel_time < 10629) {
							w7 = 3584;
						} else {
							w7 = 4864;
						}
					} else {
						w7 = 3072;
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
		if (hops < 4) {
			if (rel_time < 603) {
				if (hops < 2) {
					w7 = 4352;
				} else {
					w7 = 4608;
				}
			} else {
				w7 = 4864;
			}
		} else {
			w7 = 5376;
		}
	}
	int w8;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 4) {
				if (rel_time < 677) {
					w8 = 3072;
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
					if (rel_time < 11189) {
						if (rel_time < 10629) {
							w8 = 2560;
						} else {
							w8 = 3328;
						}
					} else {
						w8 = 2048;
					}
				}
			} else {
				if (prod == 0) {
					if (hops < 4) {
						w8 = 2560;
					} else {
						w8 = 2816;
					}
				} else {
					if (rel_time < 1655) {
						w8 = 2048;
					} else {
						if (rel_time < 2216) {
							w8 = 3840;
						} else {
							w8 = 2816;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 533) {
				if (hops < 2) {
					w8 = 2816;
				} else {
					w8 = 3072;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 10092) {
						w8 = 3328;
					} else {
						w8 = 2816;
					}
				} else {
					w8 = 3328;
				}
			}
		} else {
			w8 = 3840;
		}
	}
	int w9;
	if (size < 133) {
		if (rel_time < 1094) {
			if (rel_time < 677) {
				if (hops < 2) {
					w9 = 2048;
				} else {
					if (hops < 4) {
						w9 = 2048;
					} else {
						w9 = 2304;
					}
				}
			} else {
				if (hops < 2) {
					w9 = 2048;
				} else {
					if (hops < 4) {
						w9 = 2304;
					} else {
						w9 = 2560;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 11326) {
					if (rel_time < 1655) {
						if (rel_time < 1231) {
							w9 = 1536;
						} else {
							w9 = 1024;
						}
					} else {
						if (rel_time < 2216) {
							w9 = 1792;
						} else {
							w9 = 1536;
						}
					}
				} else {
					w9 = 1280;
				}
			} else {
				if (prod == 0) {
					if (hops < 4) {
						w9 = 1792;
					} else {
						w9 = 1792;
					}
				} else {
					if (rel_time < 1655) {
						w9 = 1280;
					} else {
						if (rel_time < 2216) {
							w9 = 2816;
						} else {
							w9 = 1792;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 603) {
				if (hops < 2) {
					w9 = 2048;
				} else {
					w9 = 2304;
				}
			} else {
				if (rel_time < 1161) {
					w9 = 2816;
				} else {
					if (rel_time < 1676) {
						w9 = 1792;
					} else {
						if (rel_time < 10134) {
							w9 = 2304;
						} else {
							w9 = 1792;
						}
					}
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
			if (rel_time < 677) {
				if (hops < 2) {
					w10 = 1280;
				} else {
					if (hops < 4) {
						w10 = 1536;
					} else {
						w10 = 1536;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w10 = 1536;
					} else {
						w10 = 1536;
					}
				} else {
					w10 = 1792;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 10205) {
						if (rel_time < 9644) {
							w10 = 1024;
						} else {
							w10 = 1536;
						}
					} else {
						if (rel_time < 10629) {
							w10 = 0;
						} else {
							w10 = 1024;
						}
					}
				} else {
					if (prod == 0) {
						w10 = 1024;
					} else {
						if (rel_time < 2777) {
							w10 = 1024;
						} else {
							w10 = 1280;
						}
					}
				}
			} else {
				if (prod == 0) {
					w10 = 1280;
				} else {
					if (rel_time < 10774) {
						if (rel_time < 10210) {
							w10 = 1536;
						} else {
							w10 = 2560;
						}
					} else {
						w10 = 512;
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
				if (rel_time < 10134) {
					if (rel_time < 9573) {
						if (rel_time < 9013) {
							w10 = 1792;
						} else {
							w10 = 1280;
						}
					} else {
						w10 = 2048;
					}
				} else {
					w10 = 1280;
				}
			}
		}
	}
	int w11;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 3) {
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
		} else {
			if (hops < 3) {
				if (rel_time < 10068) {
					if (rel_time < 9644) {
						if (rel_time < 9083) {
							w11 = 768;
						} else {
							w11 = 256;
						}
					} else {
						w11 = 2048;
					}
				} else {
					if (rel_time < 10629) {
						if (rel_time < 10205) {
							w11 = 768;
						} else {
							w11 = 0;
						}
					} else {
						if (rel_time < 11326) {
							w11 = 768;
						} else {
							w11 = 512;
						}
					}
				}
			} else {
				if (rel_time < 11326) {
					if (rel_time < 10700) {
						if (rel_time < 10142) {
							w11 = 768;
						} else {
							w11 = 512;
						}
					} else {
						if (rel_time < 10774) {
							w11 = 1792;
						} else {
							w11 = 768;
						}
					}
				} else {
					w11 = 512;
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 10092) {
				if (rel_time < 9534) {
					if (rel_time < 8970) {
						if (rel_time < 8452) {
							w11 = 1024;
						} else {
							w11 = 1536;
						}
					} else {
						if (rel_time < 9529) {
							w11 = 512;
						} else {
							w11 = 768;
						}
					}
				} else {
					w11 = 1536;
				}
			} else {
				w11 = 768;
			}
		} else {
			if (rel_time < 533) {
				w11 = 1024;
			} else {
				if (hops < 4) {
					w11 = 1280;
				} else {
					w11 = 1280;
				}
			}
		}
	}
	int w12;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 4) {
				if (rel_time < 677) {
					if (hops < 2) {
						w12 = 512;
					} else {
						w12 = 512;
					}
				} else {
					if (hops < 2) {
						w12 = 512;
					} else {
						w12 = 768;
					}
				}
			} else {
				if (rel_time < 677) {
					w12 = 768;
				} else {
					w12 = 768;
				}
			}
		} else {
			if (prod == 0) {
				if (hops < 3) {
					if (rel_time < 10070) {
						if (rel_time < 9083) {
							w12 = 512;
						} else {
							w12 = 512;
						}
					} else {
						if (hops < 2) {
							w12 = 512;
						} else {
							w12 = 512;
						}
					}
				} else {
					if (hops < 4) {
						w12 = 512;
					} else {
						w12 = 512;
					}
				}
			} else {
				if (rel_time < 2777) {
					if (rel_time < 2216) {
						if (rel_time < 1655) {
							w12 = 256;
						} else {
							w12 = 1280;
						}
					} else {
						if (hops < 2) {
							w12 = -512;
						} else {
							w12 = -256;
						}
					}
				} else {
					if (rel_time < 3338) {
						w12 = 1792;
					} else {
						if (rel_time < 3899) {
							w12 = -512;
						} else {
							w12 = 512;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 533) {
				if (hops < 2) {
					w12 = 512;
				} else {
					if (hops < 3) {
						w12 = 768;
					} else {
						w12 = 512;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 10092) {
						if (rel_time < 9534) {
							w12 = 768;
						} else {
							w12 = 1024;
						}
					} else {
						w12 = 512;
					}
				} else {
					if (rel_time < 10134) {
						if (rel_time < 9534) {
							w12 = 768;
						} else {
							w12 = 1024;
						}
					} else {
						w12 = 512;
					}
				}
			}
		} else {
			if (rel_time < 603) {
				w12 = 768;
			} else {
				if (rel_time < 10134) {
					w12 = 1024;
				} else {
					w12 = 512;
				}
			}
		}
	}
	int w13;
	if (size < 133) {
		if (rel_time < 1094) {
			if (hops < 4) {
				if (rel_time < 677) {
					if (hops < 2) {
						w13 = 256;
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
				if (prod == 1) {
					w13 = 512;
				} else {
					w13 = 512;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 11326) {
					if (rel_time < 10766) {
						if (rel_time < 10205) {
							w13 = 256;
						} else {
							w13 = 0;
						}
					} else {
						if (rel_time < 11189) {
							w13 = 1024;
						} else {
							w13 = 256;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w13 = 0;
						} else {
							w13 = 0;
						}
					} else {
						w13 = 256;
					}
				}
			} else {
				if (prod == 0) {
					w13 = 256;
				} else {
					if (rel_time < 10068) {
						if (rel_time < 9088) {
							w13 = 512;
						} else {
							w13 = 1536;
						}
					} else {
						if (rel_time < 10210) {
							w13 = -256;
						} else {
							w13 = 512;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_time < 603) {
				if (hops < 2) {
					if (rel_time < 533) {
						w13 = 256;
					} else {
						w13 = 512;
					}
				} else {
					w13 = 512;
				}
			} else {
				if (rel_time < 1161) {
					w13 = 768;
				} else {
					if (rel_time < 1676) {
						if (hops < 3) {
							w13 = 0;
						} else {
							w13 = 256;
						}
					} else {
						if (rel_time < 2282) {
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
				if (rel_time < 1161) {
					w13 = 1024;
				} else {
					if (rel_time < 1722) {
						w13 = 256;
					} else {
						if (rel_time < 2282) {
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
		if (rel_time < 4461) {
			if (rel_time < 4036) {
				if (rel_time < 3475) {
					if (rel_time < 2914) {
						if (rel_time < 2353) {
							w14 = 256;
						} else {
							w14 = 0;
						}
					} else {
						if (prod == 0) {
							w14 = 256;
						} else {
							w14 = 1024;
						}
					}
				} else {
					if (prod == 0) {
						w14 = 256;
					} else {
						if (hops < 4) {
							w14 = -512;
						} else {
							w14 = -256;
						}
					}
				}
			} else {
				if (rel_time < 4459) {
					w14 = 1536;
				} else {
					w14 = 256;
				}
			}
		} else {
			if (rel_time < 5020) {
				if (prod == 0) {
					w14 = 256;
				} else {
					w14 = -768;
				}
			} else {
				if (rel_time < 5581) {
					if (rel_time < 5157) {
						w14 = 256;
					} else {
						w14 = 1536;
					}
				} else {
					if (rel_time < 6142) {
						if (rel_time < 5718) {
							w14 = 256;
						} else {
							w14 = -768;
						}
					} else {
						if (rel_time < 6703) {
							w14 = 512;
						} else {
							w14 = 256;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 9529) {
				if (rel_time < 8970) {
					if (rel_time < 8407) {
						if (rel_time < 7848) {
							w14 = 256;
						} else {
							w14 = 0;
						}
					} else {
						w14 = 512;
					}
				} else {
					w14 = 0;
				}
			} else {
				if (rel_time < 10092) {
					w14 = 512;
				} else {
					w14 = 256;
				}
			}
		} else {
			if (rel_time < 2843) {
				if (rel_time < 2282) {
					if (rel_time < 1722) {
						if (rel_time < 1161) {
							w14 = 256;
						} else {
							w14 = 0;
						}
					} else {
						w14 = 768;
					}
				} else {
					if (rel_time < 2798) {
						w14 = 0;
					} else {
						if (hops < 4) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3404) {
					w14 = 768;
				} else {
					if (rel_time < 3965) {
						if (rel_time < 3920) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					} else {
						if (rel_time < 4526) {
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
	if (size < 133) {
		if (rel_time < 4461) {
			if (rel_time < 4036) {
				if (rel_time < 3475) {
					if (rel_time < 2914) {
						if (rel_time < 2353) {
							w15 = 256;
						} else {
							w15 = 0;
						}
					} else {
						if (prod == 0) {
							w15 = 0;
						} else {
							w15 = 768;
						}
					}
				} else {
					if (prod == 0) {
						w15 = 0;
					} else {
						if (hops < 4) {
							w15 = -256;
						} else {
							w15 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4459) {
					w15 = 1024;
				} else {
					w15 = 0;
				}
			}
		} else {
			if (rel_time < 5020) {
				if (prod == 0) {
					if (hops < 3) {
						w15 = 0;
					} else {
						if (rel_time < 4479) {
							w15 = 0;
						} else {
							w15 = 256;
						}
					}
				} else {
					w15 = -512;
				}
			} else {
				if (rel_time < 5581) {
					if (rel_time < 5157) {
						w15 = 0;
					} else {
						w15 = 1024;
					}
				} else {
					if (rel_time < 6279) {
						if (prod == 0) {
							w15 = 0;
						} else {
							w15 = -512;
						}
					} else {
						if (rel_time < 6703) {
							w15 = 1280;
						} else {
							w15 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5087) {
			if (rel_time < 4526) {
				if (rel_time < 3965) {
					if (rel_time < 3404) {
						if (rel_time < 2843) {
							w15 = 256;
						} else {
							w15 = 512;
						}
					} else {
						if (rel_time < 3919) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				} else {
					w15 = 512;
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w15 = 0;
					} else {
						w15 = 0;
					}
				} else {
					w15 = 0;
				}
			}
		} else {
			if (rel_time < 5648) {
				w15 = 512;
			} else {
				if (rel_time < 6208) {
					if (rel_time < 6164) {
						w15 = 0;
					} else {
						w15 = 0;
					}
				} else {
					if (rel_time < 6769) {
						w15 = 768;
					} else {
						if (rel_time < 7330) {
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
		if (rel_time < 7891) {
			if (rel_time < 7401) {
				if (rel_time < 6840) {
					if (rel_time < 6279) {
						if (rel_time < 5718) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_time < 6703) {
							w16 = 768;
						} else {
							w16 = 256;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						w16 = -1024;
					}
				}
			} else {
				if (rel_time < 7824) {
					w16 = 1280;
				} else {
					if (rel_time < 7844) {
						if (hops < 3) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						w16 = 512;
					}
				}
			}
		} else {
			if (rel_time < 8385) {
				if (rel_time < 7961) {
					if (hops < 2) {
						if (rel_time < 7893) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						w16 = 0;
					}
				} else {
					w16 = -1024;
				}
			} else {
				if (rel_time < 9013) {
					if (prod == 0) {
						if (rel_time < 8953) {
							w16 = 0;
						} else {
							w16 = 256;
						}
					} else {
						w16 = 1280;
					}
				} else {
					if (rel_time < 9507) {
						if (rel_time < 9083) {
							w16 = 0;
						} else {
							w16 = -768;
						}
					} else {
						if (rel_time < 10134) {
							w16 = 256;
						} else {
							w16 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 11326) {
			if (rel_time < 10700) {
				if (rel_time < 10142) {
					if (rel_time < 9578) {
						if (rel_time < 9083) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_time < 10068) {
							w16 = 1024;
						} else {
							w16 = 256;
						}
					}
				} else {
					if (rel_time < 10210) {
						w16 = -256;
					} else {
						if (size < 133) {
							w16 = 256;
						} else {
							w16 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10774) {
					w16 = 768;
				} else {
					w16 = 0;
				}
			}
		} else {
			w16 = 0;
		}
	}
	int w17;
	if (hops < 2) {
		if (size < 133) {
			if (rel_time < 8385) {
				if (rel_time < 7961) {
					if (rel_time < 7401) {
						if (rel_time < 6840) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 7824) {
							w17 = 768;
						} else {
							w17 = 0;
						}
					}
				} else {
					w17 = -768;
				}
			} else {
				if (rel_time < 8946) {
					if (prod == 0) {
						w17 = 0;
					} else {
						w17 = 768;
					}
				} else {
					if (rel_time < 9507) {
						if (rel_time < 9083) {
							w17 = 0;
						} else {
							w17 = -512;
						}
					} else {
						if (rel_time < 10068) {
							w17 = 256;
						} else {
							w17 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 7848) {
				if (rel_time < 7285) {
					if (rel_time < 6724) {
						if (rel_time < 6164) {
							w17 = 0;
						} else {
							w17 = 256;
						}
					} else {
						w17 = 0;
					}
				} else {
					w17 = 256;
				}
			} else {
				if (rel_time < 8407) {
					w17 = 0;
				} else {
					if (rel_time < 8970) {
						w17 = 256;
					} else {
						if (rel_time < 9529) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9578) {
			if (rel_time < 9083) {
				if (rel_time < 8456) {
					if (rel_time < 7961) {
						if (rel_time < 7401) {
							w17 = 0;
						} else {
							w17 = 256;
						}
					} else {
						if (rel_time < 8385) {
							w17 = -512;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
							w17 = 0;
						} else {
							w17 = 256;
						}
					} else {
						if (hops < 4) {
							w17 = 768;
						} else {
							w17 = 1280;
						}
					}
				}
			} else {
				if (rel_time < 9507) {
					if (hops < 3) {
						w17 = -512;
					} else {
						w17 = -768;
					}
				} else {
					if (size < 133) {
						if (hops < 4) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 9534) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 10068) {
				if (rel_time < 9644) {
					w17 = 0;
				} else {
					w17 = 1024;
				}
			} else {
				if (rel_time < 10629) {
					if (prod == 0) {
						if (size < 133) {
							w17 = 0;
						} else {
							w17 = 256;
						}
					} else {
						if (hops < 4) {
							w17 = -512;
						} else {
							w17 = -256;
						}
					}
				} else {
					if (rel_time < 11189) {
						if (rel_time < 10766) {
							w17 = 0;
						} else {
							w17 = 512;
						}
					} else {
						if (rel_time < 11326) {
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
	if (hops < 2) {
		if (rel_time < 10766) {
			if (rel_time < 10092) {
				if (rel_time < 9644) {
					if (rel_time < 9083) {
						if (rel_time < 8523) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_time < 9507) {
							w18 = -256;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (rel_time < 10068) {
						w18 = 512;
					} else {
						if (rel_time < 10087) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (prod == 2) {
						if (rel_time < 10651) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						w18 = 0;
					}
				} else {
					w18 = -256;
				}
			}
		} else {
			if (rel_time < 11189) {
				w18 = 256;
			} else {
				if (rel_time < 11326) {
					if (rel_time < 11195) {
						w18 = 0;
					} else {
						if (rel_time < 11256) {
							w18 = 0;
						} else {
							w18 = 0;
						}
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
		if (rel_time < 2282) {
			if (rel_time < 1792) {
				if (rel_time < 1231) {
					if (rel_time < 1114) {
						if (prod == 0) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_time < 1161) {
							w18 = 256;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (rel_time < 1655) {
						if (hops < 4) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (size < 133) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (rel_time < 2216) {
						w18 = 512;
					} else {
						w18 = 256;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 2217) {
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
			if (rel_time < 2777) {
				if (rel_time < 2353) {
					w18 = 0;
				} else {
					w18 = -512;
				}
			} else {
				if (rel_time < 3404) {
					if (prod == 0) {
						if (rel_time < 3357) {
							w18 = 0;
						} else {
							w18 = 256;
						}
					} else {
						w18 = 512;
					}
				} else {
					if (rel_time < 3965) {
						if (prod == 0) {
							w18 = 0;
						} else {
							w18 = -256;
						}
					} else {
						if (rel_time < 4459) {
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
	if (rel_time < 9644) {
		if (rel_time < 9083) {
			if (rel_time < 8456) {
				if (rel_time < 7961) {
					if (rel_time < 7401) {
						if (rel_time < 6840) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 7824) {
							w19 = 768;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (rel_time < 8385) {
						w19 = -512;
					} else {
						if (size < 133) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 2) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 8970) {
							w19 = 0;
						} else {
							w19 = 256;
						}
					}
				} else {
					if (hops < 4) {
						w19 = 512;
					} else {
						w19 = 768;
					}
				}
			}
		} else {
			if (rel_time < 9507) {
				if (hops < 3) {
					if (hops < 2) {
						w19 = -256;
					} else {
						w19 = -256;
					}
				} else {
					w19 = -512;
				}
			} else {
				if (size < 133) {
					if (hops < 4) {
						if (hops < 3) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 9526) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (rel_time < 9534) {
						if (hops < 3) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						w19 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 10068) {
			if (hops < 2) {
				w19 = 256;
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w19 = 512;
					} else {
						w19 = 768;
					}
				} else {
					w19 = 256;
				}
			}
		} else {
			if (rel_time < 10629) {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 2) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_time < 10092) {
							w19 = 0;
						} else {
							w19 = 256;
						}
					}
				} else {
					if (hops < 2) {
						w19 = -256;
					} else {
						if (hops < 4) {
							w19 = -512;
						} else {
							w19 = 0;
						}
					}
				}
			} else {
				if (rel_time < 11189) {
					if (rel_time < 10766) {
						if (size < 133) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						w19 = 256;
					}
				} else {
					if (rel_time < 11326) {
						if (rel_time < 11195) {
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
		}
	}
	int w20;
	if (hops < 4) {
		if (size < 133) {
			if (rel_time < 7264) {
				if (rel_time < 6840) {
					if (rel_time < 6279) {
						if (rel_time < 5718) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_time < 6703) {
							w20 = 512;
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
						w20 = -512;
					}
				}
			} else {
				if (rel_time < 7824) {
					if (rel_time < 7401) {
						if (hops < 2) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (hops < 2) {
							w20 = 256;
						} else {
							w20 = 512;
						}
					}
				} else {
					if (rel_time < 8385) {
						if (rel_time < 7961) {
							w20 = 0;
						} else {
							w20 = -256;
						}
					} else {
						if (rel_time < 8946) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 7891) {
				if (rel_time < 5087) {
					if (rel_time < 4526) {
						if (rel_time < 3965) {
							w20 = 0;
						} else {
							w20 = 256;
						}
					} else {
						w20 = -256;
					}
				} else {
					if (rel_time < 5605) {
						w20 = 256;
					} else {
						if (rel_time < 6208) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			} else {
				if (rel_time < 8452) {
					if (rel_time < 8407) {
						w20 = 0;
					} else {
						w20 = 0;
					}
				} else {
					if (rel_time < 9013) {
						if (hops < 2) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_time < 9534) {
							w20 = 0;
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
				if (rel_time < 7330) {
					if (rel_time < 6769) {
						if (rel_time < 6208) {
							w20 = 0;
						} else {
							w20 = 512;
						}
					} else {
						if (rel_time < 6845) {
							w20 = -768;
						} else {
							w20 = 0;
						}
					}
				} else {
					if (rel_time < 7404) {
						w20 = 768;
					} else {
						if (rel_time < 8452) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			} else {
				if (rel_time < 553) {
					w20 = 0;
				} else {
					if (rel_time < 1095) {
						w20 = 0;
					} else {
						if (rel_time < 7844) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 9013) {
				if (rel_time < 3406) {
					if (rel_time < 2353) {
						if (rel_time < 677) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						w20 = 0;
					}
				} else {
					if (rel_time < 3967) {
						w20 = 0;
					} else {
						if (rel_time < 5650) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			} else {
				w20 = 0;
			}
		}
	}
	int w21;
	if (rel_time < 5157) {
		if (rel_time < 4528) {
			if (rel_time < 4036) {
				if (rel_time < 3475) {
					if (rel_time < 2843) {
						if (rel_time < 2353) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (prod == 0) {
							w21 = 0;
						} else {
							w21 = 256;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 133) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (hops < 2) {
							w21 = -256;
						} else {
							w21 = -256;
						}
					}
				}
			} else {
				if (rel_time < 4459) {
					w21 = 512;
				} else {
					if (size < 133) {
						if (hops < 3) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_time < 4480) {
							w21 = 256;
						} else {
							w21 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (size < 133) {
					if (hops < 4) {
						if (hops < 3) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_time < 5024) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					w21 = 0;
				}
			} else {
				w21 = -512;
			}
		}
	} else {
		if (rel_time < 5581) {
			w21 = 512;
		} else {
			if (rel_time < 5648) {
				if (size < 133) {
					if (rel_time < 5584) {
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
				} else {
					if (rel_time < 5605) {
						if (rel_time < 5602) {
							w21 = 0;
						} else {
							w21 = 256;
						}
					} else {
						w21 = 256;
					}
				}
			} else {
				if (rel_time < 6142) {
					if (rel_time < 5718) {
						if (hops < 3) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						w21 = -256;
					}
				} else {
					if (rel_time < 6769) {
						if (prod == 0) {
							w21 = 0;
						} else {
							w21 = 256;
						}
					} else {
						if (rel_time < 7264) {
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
	if (hops < 3) {
		if (rel_time < 1161) {
			if (rel_time < 1114) {
				if (rel_time < 1094) {
					if (rel_time < 677) {
						if (hops < 2) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						w22 = 0;
					}
				} else {
					if (rel_time < 1095) {
						w22 = 0;
					} else {
						w22 = 0;
					}
				}
			} else {
				if (hops < 2) {
					w22 = 256;
				} else {
					w22 = 0;
				}
			}
		} else {
			if (rel_time < 1792) {
				if (prod == 0) {
					if (hops < 2) {
						if (rel_time < 1656) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (prod == 1) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w22 = -256;
					} else {
						if (rel_time < 1232) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				}
			} else {
				if (rel_time < 2216) {
					if (hops < 2) {
						w22 = 512;
					} else {
						w22 = 256;
					}
				} else {
					if (rel_time < 2798) {
						if (prod == 0) {
							w22 = 0;
						} else {
							w22 = -256;
						}
					} else {
						if (rel_time < 3404) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 533) {
			if (hops < 4) {
				w22 = 0;
			} else {
				w22 = 0;
			}
		} else {
			if (size < 133) {
				if (rel_time < 10210) {
					if (rel_time < 10142) {
						if (rel_time < 9578) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (hops < 4) {
							w22 = -512;
						} else {
							w22 = 0;
						}
					}
				} else {
					if (rel_time < 10774) {
						if (rel_time < 10700) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (rel_time < 11326) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10134) {
					if (rel_time < 9573) {
						if (rel_time < 9013) {
							w22 = 0;
						} else {
							w22 = 0;
						}
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
			}
		}
	}
	int w23;
	if (rel_time < 7891) {
		if (rel_time < 7332) {
			if (rel_time < 6840) {
				if (rel_time < 6279) {
					if (rel_time < 5718) {
						if (rel_time < 5157) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_time < 6142) {
							w23 = -256;
						} else {
							w23 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (rel_time < 6769) {
							w23 = 256;
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
				if (prod == 0) {
					if (size < 133) {
						if (hops < 2) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						w23 = 0;
					}
				} else {
					if (hops < 3) {
						w23 = -256;
					} else {
						w23 = -512;
					}
				}
			}
		} else {
			if (prod == 2) {
				if (prod == 0) {
					if (rel_time < 7401) {
						if (hops < 4) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (hops < 4) {
							w23 = 0;
						} else {
							w23 = 256;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w23 = 256;
						} else {
							w23 = 256;
						}
					} else {
						w23 = 512;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 7826) {
						w23 = 0;
					} else {
						w23 = 0;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						w23 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 8452) {
			if (prod == 0) {
				if (rel_time < 8407) {
					if (prod == 2) {
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
					w23 = 0;
				}
			} else {
				if (hops < 4) {
					w23 = -256;
				} else {
					w23 = -512;
				}
			}
		} else {
			if (rel_time < 8946) {
				if (prod == 0) {
					if (hops < 2) {
						if (rel_time < 8456) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_time < 8456) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w23 = 256;
					} else {
						w23 = 512;
					}
				}
			} else {
				if (rel_time < 9573) {
					if (prod == 0) {
						if (rel_time < 9526) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (hops < 3) {
							w23 = -256;
						} else {
							w23 = -256;
						}
					}
				} else {
					if (rel_time < 10068) {
						if (rel_time < 9644) {
							w23 = 0;
						} else {
							w23 = 256;
						}
					} else {
						if (rel_time < 10629) {
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
	if (rel_time < 2282) {
		if (rel_time < 1792) {
			if (rel_time < 1231) {
				if (rel_time < 1114) {
					if (prod == 0) {
						if (rel_time < 677) {
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
					if (rel_time < 1161) {
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
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1655) {
						w24 = 0;
					} else {
						if (rel_time < 1675) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 1655) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 2) {
				if (hops < 2) {
					w24 = 256;
				} else {
					if (rel_time < 2216) {
						if (hops < 3) {
							w24 = 0;
						} else {
							w24 = 256;
						}
					} else {
						if (hops < 4) {
							w24 = 0;
						} else {
							w24 = 256;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 2217) {
						w24 = 0;
					} else {
						w24 = 0;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 2217) {
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
			}
		}
	} else {
		if (rel_time < 2777) {
			if (rel_time < 2353) {
				if (hops < 2) {
					if (rel_time < 2283) {
						w24 = 0;
					} else {
						w24 = 0;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2283) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 2283) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					w24 = -256;
				} else {
					if (hops < 3) {
						w24 = 0;
					} else {
						w24 = -256;
					}
				}
			}
		} else {
			if (rel_time < 2796) {
				w24 = 0;
			} else {
				if (rel_time < 2843) {
					if (rel_time < 2797) {
						w24 = -256;
					} else {
						w24 = 0;
					}
				} else {
					if (rel_time < 3404) {
						if (prod == 2) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_time < 4036) {
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
	if (rel_time < 4527) {
		if (rel_time < 4036) {
			if (rel_time < 3475) {
				if (rel_time < 2914) {
					if (rel_time < 2282) {
						if (rel_time < 1792) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (prod == 2) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (rel_time < 3358) {
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
				}
			} else {
				if (prod == 2) {
					if (rel_time < 3919) {
						if (hops < 2) {
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
					if (hops < 3) {
						if (hops < 2) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						w25 = 0;
					}
				}
			}
		} else {
			if (rel_time < 4459) {
				w25 = 256;
			} else {
				if (size < 133) {
					if (rel_time < 4461) {
						if (hops < 4) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 4479) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					if (rel_time < 4480) {
						w25 = 0;
					} else {
						if (hops < 3) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5020) {
			if (prod == 0) {
				if (rel_time < 4528) {
					if (hops < 4) {
						if (hops < 3) {
							w25 = 0;
						} else {
							w25 = 0;
						}
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
				w25 = -256;
			}
		} else {
			if (rel_time < 5087) {
				if (rel_time < 5040) {
					if (hops < 4) {
						if (rel_time < 5021) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 5021) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					}
				} else {
					w25 = 0;
				}
			} else {
				if (rel_time < 5581) {
					if (rel_time < 5157) {
						if (hops < 3) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						w25 = 256;
					}
				} else {
					if (rel_time < 6208) {
						if (prod == 0) {
							w25 = 0;
						} else {
							w25 = 0;
						}
					} else {
						if (rel_time < 6769) {
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
	if (rel_time < 11326) {
		if (rel_time < 10766) {
			if (rel_time < 10205) {
				if (rel_time < 9644) {
					if (rel_time < 9083) {
						if (rel_time < 8456) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 9507) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (rel_time < 10068) {
						if (hops < 2) {
							w26 = 0;
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
				if (prod == 0) {
					if (size < 133) {
						if (hops < 3) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					} else {
						if (rel_time < 10651) {
							w26 = 0;
						} else {
							w26 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w26 = 0;
					} else {
						if (hops < 4) {
							w26 = -256;
						} else {
							w26 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 11189) {
				if (hops < 3) {
					w26 = 0;
				} else {
					if (hops < 4) {
						w26 = 0;
					} else {
						w26 = 0;
					}
				}
			} else {
				if (rel_time < 11195) {
					if (hops < 3) {
						if (hops < 2) {
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
					if (rel_time < 11259) {
						if (hops < 4) {
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
				}
			}
		}
	} else {
		if (hops < 4) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 11335) {
						w26 = 0;
					} else {
						w26 = 0;
					}
				} else {
					w26 = 0;
				}
			} else {
				if (rel_time < 11329) {
					w26 = 0;
				} else {
					w26 = 0;
				}
			}
		} else {
			w26 = 0;
		}
	}
	int w27;
	if (rel_time < 4527) {
		if (rel_time < 4036) {
			if (rel_time < 3475) {
				if (rel_time < 2843) {
					if (rel_time < 2353) {
						if (rel_time < 1792) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (prod == 2) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (prod == 1) {
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
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (rel_time < 3918) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (rel_time < 3919) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w27 = 0;
					} else {
						if (hops < 3) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 4459) {
				if (hops < 2) {
					w27 = 256;
				} else {
					if (hops < 4) {
						w27 = 0;
					} else {
						w27 = 256;
					}
				}
			} else {
				if (size < 133) {
					if (hops < 3) {
						if (hops < 2) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (hops < 4) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (rel_time < 4480) {
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
		}
	} else {
		if (rel_time < 5020) {
			if (prod == 0) {
				if (rel_time < 4528) {
					if (hops < 4) {
						if (hops < 2) {
							w27 = 0;
						} else {
							w27 = 0;
						}
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
				if (hops < 4) {
					w27 = -256;
				} else {
					w27 = 0;
				}
			}
		} else {
			if (rel_time < 5648) {
				if (prod == 0) {
					if (rel_time < 5600) {
						if (size < 133) {
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
					if (hops < 4) {
						w27 = 0;
					} else {
						w27 = 256;
					}
				}
			} else {
				if (rel_time < 6208) {
					if (prod == 2) {
						if (rel_time < 5718) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (hops < 4) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					}
				} else {
					if (rel_time < 6773) {
						if (prod == 0) {
							w27 = 0;
						} else {
							w27 = 0;
						}
					} else {
						if (rel_time < 7264) {
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
	if (rel_time < 7891) {
		if (rel_time < 7332) {
			if (rel_time < 6840) {
				if (rel_time < 6279) {
					if (rel_time < 5650) {
						if (rel_time < 5157) {
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
					if (prod == 2) {
						if (rel_time < 6769) {
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
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (rel_time < 7264) {
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
						w28 = -256;
					}
				}
			}
		} else {
			if (prod == 2) {
				if (prod == 0) {
					if (rel_time < 7848) {
						if (rel_time < 7401) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (hops < 4) {
							w28 = 0;
						} else {
							w28 = 256;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w28 = 0;
						} else {
							w28 = 256;
						}
					} else {
						w28 = 256;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 7826) {
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
	} else {
		if (rel_time < 8452) {
			if (prod == 0) {
				if (rel_time < 8407) {
					if (prod == 2) {
						if (hops < 2) {
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
				} else {
					w28 = 0;
				}
			} else {
				if (hops < 4) {
					w28 = 0;
				} else {
					w28 = -256;
				}
			}
		} else {
			if (rel_time < 8946) {
				if (prod == 0) {
					if (hops < 2) {
						w28 = 0;
					} else {
						if (rel_time < 8456) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w28 = 0;
						} else {
							w28 = 256;
						}
					} else {
						w28 = 256;
					}
				}
			} else {
				if (rel_time < 9573) {
					if (prod == 0) {
						if (prod == 1) {
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
					if (rel_time < 10068) {
						if (rel_time < 9644) {
							w28 = 0;
						} else {
							w28 = 0;
						}
					} else {
						if (rel_time < 10695) {
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
	if (rel_time < 1161) {
		if (rel_time < 1114) {
			if (rel_time < 533) {
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
				if (rel_time < 1094) {
					if (hops < 4) {
						if (rel_time < 677) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (prod == 1) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				} else {
					if (rel_time < 1095) {
						if (hops < 3) {
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
				}
			}
		} else {
			if (hops < 4) {
				w29 = 0;
			} else {
				w29 = 0;
			}
		}
	} else {
		if (rel_time < 1792) {
			if (prod == 0) {
				if (rel_time < 1675) {
					if (rel_time < 1231) {
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
					if (hops < 2) {
						if (rel_time < 1676) {
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
				if (hops < 3) {
					if (hops < 2) {
						w29 = 0;
					} else {
						if (rel_time < 1232) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1232) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						w29 = 0;
					}
				}
			}
		} else {
			if (rel_time < 2216) {
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
				if (rel_time < 2235) {
					if (hops < 3) {
						if (rel_time < 2217) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						w29 = 0;
					}
				} else {
					if (rel_time < 2282) {
						if (hops < 2) {
							w29 = 0;
						} else {
							w29 = 0;
						}
					} else {
						if (rel_time < 2777) {
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
	if (rel_time < 11326) {
		if (rel_time < 10766) {
			if (rel_time < 10205) {
				if (rel_time < 9644) {
					if (rel_time < 9015) {
						if (rel_time < 8456) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (prod == 0) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (rel_time < 10068) {
						if (hops < 4) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 10087) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 3) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 10651) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w30 = 0;
					} else {
						if (hops < 4) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 11189) {
				if (hops < 3) {
					w30 = 0;
				} else {
					if (hops < 4) {
						w30 = 0;
					} else {
						w30 = 0;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 11195) {
						if (hops < 2) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 11256) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11195) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					} else {
						if (rel_time < 11256) {
							w30 = 0;
						} else {
							w30 = 0;
						}
					}
				}
			}
		}
	} else {
		if (hops < 4) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 11335) {
						w30 = 0;
					} else {
						w30 = 0;
					}
				} else {
					w30 = 0;
				}
			} else {
				if (rel_time < 11329) {
					w30 = 0;
				} else {
					w30 = 0;
				}
			}
		} else {
			w30 = 0;
		}
	}
	int w31;
	if (rel_time < 7891) {
		if (rel_time < 7332) {
			if (rel_time < 6840) {
				if (rel_time < 6724) {
					if (rel_time < 4527) {
						if (rel_time < 4036) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 5020) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (rel_time < 6727) {
						w31 = 0;
					} else {
						if (rel_time < 6773) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 2) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (rel_time < 7285) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					if (hops < 4) {
						w31 = 0;
					} else {
						w31 = -256;
					}
				}
			}
		} else {
			if (prod == 2) {
				if (prod == 0) {
					if (rel_time < 7848) {
						if (rel_time < 7401) {
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
						if (hops < 2) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						w31 = 256;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 7826) {
						w31 = 0;
					} else {
						w31 = 0;
					}
				} else {
					if (rel_time < 7826) {
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
				}
			}
		}
	} else {
		if (rel_time < 8452) {
			if (prod == 0) {
				if (rel_time < 8407) {
					if (rel_time < 8405) {
						if (hops < 2) {
							w31 = 0;
						} else {
							w31 = 0;
						}
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
				if (hops < 4) {
					if (hops < 2) {
						w31 = 0;
					} else {
						if (hops < 3) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					}
				} else {
					w31 = -256;
				}
			}
		} else {
			if (rel_time < 8946) {
				if (prod == 0) {
					if (rel_time < 8456) {
						if (hops < 2) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						w31 = 0;
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						w31 = 256;
					}
				}
			} else {
				if (rel_time < 9573) {
					if (prod == 0) {
						if (hops < 2) {
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
					if (rel_time < 10068) {
						if (rel_time < 9644) {
							w31 = 0;
						} else {
							w31 = 0;
						}
					} else {
						if (prod == 0) {
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
	if (hops < 2) {
		if (rel_time < 1161) {
			if (rel_time < 1114) {
				if (rel_time < 533) {
					w32 = 0;
				} else {
					if (size < 133) {
						if (rel_time < 1094) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						w32 = 0;
					}
				}
			} else {
				w32 = 0;
			}
		} else {
			if (rel_time < 1792) {
				if (prod == 0) {
					if (rel_time < 1675) {
						if (rel_time < 1231) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (rel_time < 1676) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				} else {
					w32 = 0;
				}
			} else {
				if (rel_time < 2216) {
					w32 = 0;
				} else {
					if (rel_time < 2797) {
						if (prod == 0) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (rel_time < 3358) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				}
			}
		}
	} else {
		if (prod == 2) {
			if (rel_time < 10205) {
				if (rel_time < 9578) {
					if (rel_time < 9083) {
						if (rel_time < 8456) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					} else {
						if (rel_time < 9573) {
							w32 = 0;
						} else {
							w32 = 0;
						}
					}
				} else {
					if (rel_time < 10134) {
						if (hops < 3) {
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
				if (rel_time < 10629) {
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
					if (rel_time < 11259) {
						if (prod == 0) {
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
			}
		} else {
			if (rel_time < 553) {
				if (hops < 3) {
					w32 = 0;
				} else {
					w32 = 0;
				}
			} else {
				if (rel_time < 2235) {
					if (rel_time < 1675) {
						if (rel_time < 1095) {
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
					if (rel_time < 2796) {
						if (hops < 3) {
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
			}
		}
	}
	int w33;
	if (rel_time < 7891) {
		if (rel_time < 7332) {
			if (rel_time < 6840) {
				if (rel_time < 6279) {
					if (rel_time < 5648) {
						if (rel_time < 5157) {
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
					if (prod == 2) {
						if (hops < 4) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (hops < 2) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (rel_time < 7264) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 7285) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
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
			if (prod == 2) {
				if (prod == 0) {
					if (rel_time < 7848) {
						if (rel_time < 7401) {
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
					if (hops < 4) {
						if (hops < 3) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						w33 = 256;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 7826) {
						w33 = 0;
					} else {
						w33 = 0;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 7826) {
							w33 = 0;
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
		if (rel_time < 8452) {
			if (prod == 0) {
				if (rel_time < 8407) {
					if (prod == 2) {
						if (hops < 2) {
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
				if (hops < 4) {
					if (hops < 2) {
						w33 = 0;
					} else {
						if (hops < 3) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (rel_time < 7963) {
						w33 = 0;
					} else {
						w33 = 0;
					}
				}
			}
		} else {
			if (rel_time < 8946) {
				if (prod == 0) {
					if (rel_time < 8456) {
						if (hops < 3) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (hops < 2) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 8525) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					} else {
						if (rel_time < 8525) {
							w33 = 0;
						} else {
							w33 = 0;
						}
					}
				}
			} else {
				if (rel_time < 9507) {
					if (size < 133) {
						if (rel_time < 8948) {
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
					if (rel_time < 11326) {
						if (rel_time < 10766) {
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
				}
			}
		}
	}
	int w34;
	if (rel_time < 1161) {
		if (rel_time < 1114) {
			if (prod == 0) {
				if (rel_time < 533) {
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
					if (rel_time < 603) {
						if (hops < 3) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						if (rel_time < 677) {
							w34 = 0;
						} else {
							w34 = 0;
						}
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
					if (hops < 4) {
						w34 = 0;
					} else {
						w34 = 0;
					}
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
				if (hops < 4) {
					w34 = 0;
				} else {
					w34 = 0;
				}
			}
		}
	} else {
		if (rel_time < 1792) {
			if (prod == 0) {
				if (size < 133) {
					if (rel_time < 1656) {
						if (hops < 4) {
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
					if (rel_time < 1676) {
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
				if (hops < 3) {
					if (rel_time < 1232) {
						w34 = 0;
					} else {
						w34 = 0;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1232) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					} else {
						w34 = 0;
					}
				}
			}
		} else {
			if (rel_time < 2216) {
				if (hops < 3) {
					if (hops < 2) {
						w34 = 0;
					} else {
						if (rel_time < 1793) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					w34 = 0;
				}
			} else {
				if (rel_time < 2235) {
					if (hops < 2) {
						w34 = 0;
					} else {
						if (rel_time < 2217) {
							w34 = 0;
						} else {
							w34 = 0;
						}
					}
				} else {
					if (rel_time < 2282) {
						if (hops < 2) {
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
	}
	int w35;
	if (rel_time < 4526) {
		if (rel_time < 4036) {
			if (rel_time < 3406) {
				if (rel_time < 3357) {
					if (rel_time < 2353) {
						if (rel_time < 1792) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 2777) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (rel_time < 3358) {
						w35 = 0;
					} else {
						if (hops < 3) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (prod == 1) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 3920) {
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
			if (rel_time < 4459) {
				if (hops < 2) {
					w35 = 0;
				} else {
					if (hops < 4) {
						w35 = 0;
					} else {
						w35 = 0;
					}
				}
			} else {
				if (rel_time < 4479) {
					if (rel_time < 4461) {
						if (hops < 3) {
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
					if (rel_time < 4480) {
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
		if (rel_time < 5087) {
			if (prod == 0) {
				if (rel_time < 5040) {
					if (rel_time < 4527) {
						if (hops < 2) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 4597) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					}
				} else {
					if (hops < 4) {
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
				if (hops < 4) {
					if (rel_time < 4599) {
						w35 = 0;
					} else {
						w35 = 0;
					}
				} else {
					w35 = 0;
				}
			}
		} else {
			if (rel_time < 5581) {
				if (rel_time < 5157) {
					if (hops < 3) {
						if (rel_time < 5088) {
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
					if (hops < 4) {
						if (rel_time < 5159) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						w35 = 0;
					}
				}
			} else {
				if (rel_time < 5600) {
					if (hops < 4) {
						w35 = 0;
					} else {
						w35 = 0;
					}
				} else {
					if (rel_time < 5605) {
						if (rel_time < 5602) {
							w35 = 0;
						} else {
							w35 = 0;
						}
					} else {
						if (rel_time < 6208) {
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
	if (hops < 2) {
		if (rel_time < 1161) {
			if (rel_time < 1114) {
				if (rel_time < 553) {
					if (rel_time < 533) {
						w36 = 0;
					} else {
						w36 = 0;
					}
				} else {
					if (rel_time < 603) {
						w36 = 0;
					} else {
						if (rel_time < 1094) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			} else {
				w36 = 0;
			}
		} else {
			if (rel_time < 2914) {
				if (rel_time < 2796) {
					if (rel_time < 2777) {
						if (rel_time < 2353) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						w36 = 0;
					}
				} else {
					if (rel_time < 2797) {
						w36 = 0;
					} else {
						if (rel_time < 2845) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			} else {
				if (rel_time < 3338) {
					w36 = 0;
				} else {
					if (rel_time < 3339) {
						w36 = 0;
					} else {
						if (rel_time < 3358) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			}
		}
	} else {
		if (prod == 0) {
			if (hops < 3) {
				if (rel_time < 533) {
					w36 = 0;
				} else {
					if (prod == 1) {
						if (rel_time < 10092) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (rel_time < 9083) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			} else {
				if (rel_time < 533) {
					if (hops < 4) {
						w36 = 0;
					} else {
						w36 = 0;
					}
				} else {
					if (size < 133) {
						if (rel_time < 3918) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (rel_time < 6208) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 10068) {
				if (rel_time < 9507) {
					if (rel_time < 8946) {
						if (rel_time < 8385) {
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
					if (hops < 4) {
						if (hops < 3) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						if (rel_time < 9647) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					}
				}
			} else {
				if (rel_time < 10629) {
					if (hops < 4) {
						if (hops < 3) {
							w36 = 0;
						} else {
							w36 = 0;
						}
					} else {
						w36 = 0;
					}
				} else {
					if (rel_time < 11189) {
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
				}
			}
		}
	}
	int w37;
	if (rel_time < 7893) {
		if (rel_time < 7332) {
			if (rel_time < 6840) {
				if (rel_time < 6208) {
					if (rel_time < 6161) {
						if (rel_time < 4528) {
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
							w37 = 256;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (size < 133) {
						if (hops < 2) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (rel_time < 7285) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				} else {
					if (hops < 4) {
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
				if (size < 133) {
					if (rel_time < 7401) {
						if (hops < 4) {
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
					if (hops < 4) {
						if (hops < 2) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						w37 = 0;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 7404) {
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
					w37 = 0;
				}
			}
		}
	} else {
		if (rel_time < 8385) {
			if (rel_time < 7961) {
				if (hops < 2) {
					w37 = 0;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						w37 = 0;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 7967) {
						if (hops < 3) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						w37 = 0;
					}
				} else {
					if (rel_time < 7963) {
						w37 = 0;
					} else {
						w37 = 0;
					}
				}
			}
		} else {
			if (rel_time < 8452) {
				if (rel_time < 8407) {
					if (hops < 3) {
						if (rel_time < 8389) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (rel_time < 8389) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					}
				} else {
					w37 = 0;
				}
			} else {
				if (rel_time < 8946) {
					if (prod == 0) {
						if (rel_time < 8456) {
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
					if (rel_time < 9573) {
						if (prod == 1) {
							w37 = 0;
						} else {
							w37 = 0;
						}
					} else {
						if (rel_time < 10137) {
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
	if (hops < 4) {
		if (rel_time < 10629) {
			if (rel_time < 10205) {
				if (rel_time < 9644) {
					if (rel_time < 7893) {
						if (rel_time < 7332) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 8385) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (rel_time < 10134) {
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
			} else {
				if (prod == 0) {
					w38 = 0;
				} else {
					w38 = 0;
				}
			}
		} else {
			if (rel_time < 11189) {
				if (rel_time < 10766) {
					if (hops < 3) {
						if (rel_time < 10648) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (size < 133) {
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
				if (hops < 3) {
					if (rel_time < 11335) {
						if (rel_time < 11195) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						w38 = 0;
					}
				} else {
					if (rel_time < 11329) {
						if (prod == 1) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						w38 = 0;
					}
				}
			}
		}
	} else {
		if (rel_time < 9578) {
			if (prod == 0) {
				if (rel_time < 8953) {
					if (rel_time < 6143) {
						if (rel_time < 5600) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 6704) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				} else {
					if (rel_time < 9013) {
						if (size < 133) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (prod == 2) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			} else {
				if (rel_time < 7404) {
					if (rel_time < 6845) {
						if (rel_time < 6282) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						w38 = 0;
					}
				} else {
					if (rel_time < 7967) {
						if (rel_time < 7963) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 8525) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 10087) {
				w38 = 0;
			} else {
				if (rel_time < 10134) {
					w38 = 0;
				} else {
					if (rel_time < 10700) {
						if (rel_time < 10648) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					} else {
						if (rel_time < 10774) {
							w38 = 0;
						} else {
							w38 = 0;
						}
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32 + w33 + w34 + w35 + w36 + w37 + w38) >> 8;
}
