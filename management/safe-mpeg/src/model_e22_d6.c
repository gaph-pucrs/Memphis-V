#include <stdbool.h>

int model(int rel_timestamp, int hops, int size, int prod, int cons)
{
	int w0;
	if (size < 141) {
		if (rel_timestamp < 108394) {
			if (prod == 1) {
				w0 = 43008;
			} else {
				w0 = 34816;
			}
		} else {
			if (prod == 0) {
				w0 = 35328;
			} else {
				w0 = 36352;
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			w0 = 47616;
		} else {
			w0 = 41472;
		}
	}
	int w1;
	if (size < 141) {
		if (rel_timestamp < 108394) {
			if (prod == 1) {
				w1 = 29952;
			} else {
				w1 = 24320;
			}
		} else {
			if (hops < 3) {
				w1 = 24576;
			} else {
				w1 = 25600;
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			w1 = 33536;
		} else {
			w1 = 28928;
		}
	}
	int w2;
	if (size < 141) {
		if (rel_timestamp < 108394) {
			if (prod == 1) {
				w2 = 20992;
			} else {
				w2 = 17152;
			}
		} else {
			if (prod == 0) {
				if (hops < 2) {
					w2 = 16640;
				} else {
					w2 = 17408;
				}
			} else {
				w2 = 17920;
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			w2 = 23552;
		} else {
			w2 = 20224;
		}
	}
	int w3;
	if (size < 141) {
		if (rel_timestamp < 108394) {
			if (prod == 1) {
				w3 = 14848;
			} else {
				w3 = 12032;
			}
		} else {
			if (hops < 3) {
				if (prod == 0) {
					w3 = 11776;
				} else {
					w3 = 12288;
				}
			} else {
				w3 = 12544;
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			w3 = 16384;
		} else {
			if (hops < 3) {
				w3 = 13824;
			} else {
				w3 = 14848;
			}
		}
	}
	int w4;
	if (size < 141) {
		if (rel_timestamp < 108394) {
			if (prod == 1) {
				w4 = 10240;
			} else {
				w4 = 8448;
			}
		} else {
			if (hops < 2) {
				w4 = 8192;
			} else {
				if (prod == 0) {
					w4 = 8448;
				} else {
					w4 = 8960;
				}
			}
		}
	} else {
		if (hops < 2) {
			w4 = 9472;
		} else {
			if (rel_timestamp < 53074) {
				w4 = 11776;
			} else {
				w4 = 10240;
			}
		}
	}
	int w5;
	if (size < 141) {
		if (rel_timestamp < 108394) {
			if (prod == 1) {
				w5 = 7168;
			} else {
				w5 = 5888;
			}
		} else {
			if (hops < 4) {
				if (prod == 0) {
					if (hops < 2) {
						w5 = 5632;
					} else {
						w5 = 5888;
					}
				} else {
					if (hops < 2) {
						w5 = 5888;
					} else {
						w5 = 6144;
					}
				}
			} else {
				w5 = 6400;
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			w5 = 8192;
		} else {
			if (hops < 3) {
				w5 = 6656;
			} else {
				w5 = 7168;
			}
		}
	}
	int w6;
	if (size < 141) {
		if (rel_timestamp < 108394) {
			if (hops < 2) {
				if (prod == 1) {
					w6 = 4352;
				} else {
					w6 = 3584;
				}
			} else {
				if (prod == 1) {
					w6 = 5376;
				} else {
					w6 = 4352;
				}
			}
		} else {
			if (prod == 0) {
				if (hops < 4) {
					if (hops < 2) {
						w6 = 3840;
					} else {
						w6 = 4096;
					}
				} else {
					w6 = 4352;
				}
			} else {
				if (hops < 3) {
					w6 = 4096;
				} else {
					w6 = 4608;
				}
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			w6 = 5888;
		} else {
			if (hops < 2) {
				w6 = 4608;
			} else {
				if (hops < 4) {
					w6 = 4864;
				} else {
					w6 = 5376;
				}
			}
		}
	}
	int w7;
	if (size < 141) {
		if (hops < 4) {
			if (prod == 0) {
				if (rel_timestamp < 53093) {
					w7 = 3328;
				} else {
					if (hops < 2) {
						w7 = 2560;
					} else {
						w7 = 2816;
					}
				}
			} else {
				if (rel_timestamp < 108394) {
					w7 = 3328;
				} else {
					if (hops < 2) {
						w7 = 2816;
					} else {
						w7 = 3072;
					}
				}
			}
		} else {
			if (rel_timestamp < 108394) {
				w7 = 4096;
			} else {
				if (prod == 0) {
					w7 = 3072;
				} else {
					w7 = 3584;
				}
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			w7 = 4096;
		} else {
			if (hops < 2) {
				w7 = 3072;
			} else {
				if (hops < 4) {
					w7 = 3328;
				} else {
					w7 = 3840;
				}
			}
		}
	}
	int w8;
	if (size < 141) {
		if (hops < 4) {
			if (rel_timestamp < 108394) {
				if (hops < 3) {
					if (prod == 1) {
						w8 = 2048;
					} else {
						w8 = 1792;
					}
				} else {
					w8 = 2816;
				}
			} else {
				if (prod == 0) {
					if (hops < 2) {
						w8 = 1792;
					} else {
						w8 = 1792;
					}
				} else {
					if (hops < 2) {
						w8 = 2048;
					} else {
						w8 = 2048;
					}
				}
			}
		} else {
			if (rel_timestamp < 108394) {
				w8 = 3072;
			} else {
				if (prod == 0) {
					w8 = 2048;
				} else {
					w8 = 2304;
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_timestamp < 53074) {
				w8 = 2816;
			} else {
				if (hops < 2) {
					w8 = 2048;
				} else {
					w8 = 2304;
				}
			}
		} else {
			w8 = 2560;
		}
	}
	int w9;
	if (size < 141) {
		if (hops < 4) {
			if (rel_timestamp < 66817) {
				if (hops < 2) {
					if (prod == 1) {
						w9 = 1536;
					} else {
						w9 = 1024;
					}
				} else {
					if (prod == 1) {
						w9 = 1792;
					} else {
						w9 = 1536;
					}
				}
			} else {
				if (prod == 0) {
					if (rel_timestamp < 108394) {
						w9 = -3072;
					} else {
						if (hops < 2) {
							w9 = 1280;
						} else {
							w9 = 1280;
						}
					}
				} else {
					if (hops < 2) {
						w9 = 1280;
					} else {
						w9 = 1536;
					}
				}
			}
		} else {
			if (rel_timestamp < 108394) {
				w9 = 2048;
			} else {
				if (prod == 0) {
					w9 = 1536;
				} else {
					w9 = 1536;
				}
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			if (hops < 3) {
				w9 = 1792;
			} else {
				w9 = 2304;
			}
		} else {
			if (hops < 2) {
				w9 = 1536;
			} else {
				if (hops < 4) {
					w9 = 1536;
				} else {
					w9 = 1792;
				}
			}
		}
	}
	int w10;
	if (size < 141) {
		if (rel_timestamp < 108394) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_timestamp < 66817) {
						if (prod == 1) {
							w10 = 1024;
						} else {
							w10 = 768;
						}
					} else {
						if (prod == 0) {
							w10 = -2560;
						} else {
							w10 = 1024;
						}
					}
				} else {
					w10 = 1024;
				}
			} else {
				if (prod == 1) {
					w10 = 1536;
				} else {
					w10 = 1024;
				}
			}
		} else {
			if (hops < 4) {
				if (prod == 0) {
					if (hops < 2) {
						w10 = 768;
					} else {
						w10 = 768;
					}
				} else {
					if (hops < 3) {
						w10 = 1024;
					} else {
						w10 = 1024;
					}
				}
			} else {
				if (prod == 0) {
					w10 = 1024;
				} else {
					w10 = 1024;
				}
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			if (hops < 3) {
				w10 = 1280;
			} else {
				w10 = 1536;
			}
		} else {
			if (hops < 2) {
				w10 = 1024;
			} else {
				if (hops < 4) {
					w10 = 1024;
				} else {
					w10 = 1280;
				}
			}
		}
	}
	int w11;
	if (size < 141) {
		if (rel_timestamp < 108394) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_timestamp < 66817) {
						if (prod == 1) {
							w11 = 768;
						} else {
							w11 = 512;
						}
					} else {
						if (prod == 0) {
							w11 = -2048;
						} else {
							w11 = 768;
						}
					}
				} else {
					w11 = 768;
				}
			} else {
				if (prod == 1) {
					w11 = 1024;
				} else {
					w11 = 768;
				}
			}
		} else {
			if (hops < 4) {
				if (prod == 0) {
					if (hops < 2) {
						w11 = 512;
					} else {
						w11 = 512;
					}
				} else {
					if (hops < 2) {
						w11 = 512;
					} else {
						w11 = 512;
					}
				}
			} else {
				if (prod == 0) {
					w11 = 512;
				} else {
					w11 = 768;
				}
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			if (hops < 4) {
				w11 = 768;
			} else {
				w11 = 1280;
			}
		} else {
			if (hops < 3) {
				w11 = 768;
			} else {
				w11 = 768;
			}
		}
	}
	int w12;
	if (size < 141) {
		if (rel_timestamp < 54621) {
			if (rel_timestamp < 53081) {
				w12 = 512;
			} else {
				w12 = 768;
			}
		} else {
			if (hops < 4) {
				if (prod == 0) {
					if (hops < 2) {
						if (rel_timestamp < 108394) {
							w12 = 256;
						} else {
							w12 = 256;
						}
					} else {
						w12 = 256;
					}
				} else {
					if (rel_timestamp < 108394) {
						if (hops < 3) {
							w12 = 512;
						} else {
							w12 = 768;
						}
					} else {
						if (hops < 3) {
							w12 = 256;
						} else {
							w12 = 512;
						}
					}
				}
			} else {
				if (prod == 0) {
					w12 = 512;
				} else {
					w12 = 512;
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_timestamp < 53074) {
				w12 = 512;
			} else {
				if (hops < 2) {
					w12 = 512;
				} else {
					w12 = 512;
				}
			}
		} else {
			if (rel_timestamp < 53074) {
				w12 = 1024;
			} else {
				w12 = 512;
			}
		}
	}
	int w13;
	if (size < 141) {
		if (rel_timestamp < 108394) {
			if (hops < 3) {
				if (rel_timestamp < 66817) {
					if (prod == 1) {
						if (rel_timestamp < 53074) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					} else {
						w13 = 256;
					}
				} else {
					if (prod == 0) {
						w13 = -1792;
					} else {
						w13 = 256;
					}
				}
			} else {
				w13 = 512;
			}
		} else {
			if (hops < 4) {
				if (prod == 0) {
					if (prod == 1) {
						w13 = 256;
					} else {
						w13 = 256;
					}
				} else {
					if (hops < 2) {
						w13 = 256;
					} else {
						if (rel_timestamp < 219067) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					}
				}
			} else {
				if (prod == 0) {
					w13 = 256;
				} else {
					w13 = 256;
				}
			}
		}
	} else {
		if (hops < 4) {
			if (rel_timestamp < 53074) {
				if (hops < 3) {
					if (hops < 2) {
						w13 = 256;
					} else {
						w13 = 256;
					}
				} else {
					w13 = 512;
				}
			} else {
				if (hops < 2) {
					w13 = 256;
				} else {
					w13 = 256;
				}
			}
		} else {
			if (rel_timestamp < 53074) {
				w13 = 768;
			} else {
				w13 = 256;
			}
		}
	}
	int w14;
	if (size < 141) {
		if (rel_timestamp < 54621) {
			if (rel_timestamp < 53074) {
				w14 = 0;
			} else {
				if (rel_timestamp < 53093) {
					w14 = 256;
				} else {
					w14 = 512;
				}
			}
		} else {
			if (hops < 2) {
				if (prod == 0) {
					if (rel_timestamp < 108394) {
						if (rel_timestamp < 66797) {
							w14 = 0;
						} else {
							w14 = -1536;
						}
					} else {
						w14 = 0;
					}
				} else {
					w14 = 0;
				}
			} else {
				if (rel_timestamp < 108394) {
					if (rel_timestamp < 66809) {
						if (hops < 3) {
							w14 = 0;
						} else {
							w14 = 256;
						}
					} else {
						w14 = 256;
					}
				} else {
					if (prod == 0) {
						if (hops < 4) {
							w14 = 0;
						} else {
							w14 = 256;
						}
					} else {
						if (hops < 4) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					}
				}
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			if (hops < 3) {
				if (hops < 2) {
					w14 = 256;
				} else {
					w14 = 0;
				}
			} else {
				w14 = 256;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_timestamp < 940458) {
						w14 = 256;
					} else {
						w14 = 0;
					}
				} else {
					w14 = 256;
				}
			} else {
				if (rel_timestamp < 54651) {
					w14 = 0;
				} else {
					if (hops < 4) {
						w14 = 256;
					} else {
						if (rel_timestamp < 114893) {
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
	if (size < 141) {
		if (rel_timestamp < 54621) {
			if (hops < 4) {
				if (rel_timestamp < 53074) {
					w15 = 0;
				} else {
					w15 = 0;
				}
			} else {
				w15 = 256;
			}
		} else {
			if (hops < 2) {
				if (rel_timestamp < 232521) {
					if (prod == 2) {
						if (rel_timestamp < 219067) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					} else {
						if (rel_timestamp < 108394) {
							w15 = -1280;
						} else {
							w15 = 0;
						}
					}
				} else {
					if (prod == 1) {
						if (rel_timestamp < 274411) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					} else {
						if (rel_timestamp < 951856) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				}
			} else {
				if (rel_timestamp < 108394) {
					if (rel_timestamp < 66809) {
						if (hops < 3) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					} else {
						if (hops < 4) {
							w15 = 256;
						} else {
							w15 = 256;
						}
					}
				} else {
					if (prod == 0) {
						if (hops < 4) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					} else {
						if (rel_timestamp < 219067) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w15 = 0;
					} else {
						w15 = 0;
					}
				} else {
					w15 = 256;
				}
			} else {
				w15 = 256;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_timestamp < 940458) {
						w15 = 0;
					} else {
						w15 = 0;
					}
				} else {
					if (rel_timestamp < 54651) {
						w15 = 0;
					} else {
						w15 = 0;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_timestamp < 54651) {
						w15 = 0;
					} else {
						if (rel_timestamp < 59686) {
							w15 = 256;
						} else {
							w15 = 0;
						}
					}
				} else {
					if (rel_timestamp < 889560) {
						w15 = 0;
					} else {
						w15 = 256;
					}
				}
			}
		}
	}
	int w16;
	if (size < 141) {
		if (rel_timestamp < 54621) {
			if (rel_timestamp < 53093) {
				if (rel_timestamp < 53074) {
					w16 = 0;
				} else {
					w16 = 0;
				}
			} else {
				w16 = 256;
			}
		} else {
			if (hops < 4) {
				if (prod == 0) {
					if (hops < 2) {
						if (rel_timestamp < 108394) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (hops < 3) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_timestamp < 108394) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_timestamp < 108394) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (rel_timestamp < 109952) {
						if (rel_timestamp < 108445) {
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
				} else {
					if (rel_timestamp < 108394) {
						w16 = 256;
					} else {
						w16 = 0;
					}
				}
			}
		}
	} else {
		if (rel_timestamp < 53074) {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w16 = 0;
					} else {
						w16 = 0;
					}
				} else {
					w16 = 0;
				}
			} else {
				w16 = 256;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_timestamp < 165333) {
						if (rel_timestamp < 165294) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						w16 = 0;
					}
				} else {
					if (rel_timestamp < 54651) {
						w16 = 0;
					} else {
						w16 = 0;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_timestamp < 54651) {
						w16 = 0;
					} else {
						if (rel_timestamp < 59686) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				} else {
					if (rel_timestamp < 114893) {
						w16 = 0;
					} else {
						if (rel_timestamp < 944896) {
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
	if (rel_timestamp < 54621) {
		if (hops < 4) {
			w17 = 0;
		} else {
			w17 = 0;
		}
	} else {
		if (size < 141) {
			if (hops < 4) {
				if (prod == 1) {
					if (rel_timestamp < 219119) {
						if (rel_timestamp < 108418) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_timestamp < 274411) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_timestamp < 66797) {
						if (rel_timestamp < 59692) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_timestamp < 951856) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (rel_timestamp < 109952) {
						if (rel_timestamp < 108445) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_timestamp < 163766) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_timestamp < 108394) {
						w17 = 0;
					} else {
						if (rel_timestamp < 509382) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_timestamp < 718835) {
					if (rel_timestamp < 552639) {
						if (rel_timestamp < 497682) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						w17 = 0;
					}
				} else {
					if (rel_timestamp < 939971) {
						if (rel_timestamp < 885091) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_timestamp < 940458) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			} else {
				if (rel_timestamp < 110012) {
					if (rel_timestamp < 59686) {
						if (rel_timestamp < 54651) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						w17 = 0;
					}
				} else {
					if (rel_timestamp < 336241) {
						w17 = 0;
					} else {
						if (rel_timestamp < 497682) {
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
	if (rel_timestamp < 54621) {
		if (hops < 4) {
			if (rel_timestamp < 53081) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_timestamp < 53074) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_timestamp < 53074) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
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
			w18 = 0;
		}
	} else {
		if (size < 141) {
			if (hops < 2) {
				if (rel_timestamp < 66797) {
					if (rel_timestamp < 59686) {
						w18 = 0;
					} else {
						if (rel_timestamp < 59692) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (rel_timestamp < 108394) {
						if (prod == 0) {
							w18 = -1024;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_timestamp < 108404) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				}
			} else {
				if (rel_timestamp < 108394) {
					if (rel_timestamp < 66817) {
						if (hops < 3) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						w18 = 0;
					}
				} else {
					if (prod == 1) {
						if (rel_timestamp < 219119) {
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
				}
			}
		} else {
			if (hops < 4) {
				if (rel_timestamp < 225566) {
					if (rel_timestamp < 110012) {
						if (hops < 2) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_timestamp < 114893) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (rel_timestamp < 275964) {
						w18 = 0;
					} else {
						if (rel_timestamp < 276034) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				}
			} else {
				if (rel_timestamp < 114893) {
					if (rel_timestamp < 59686) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				} else {
					if (rel_timestamp < 1000238) {
						if (rel_timestamp < 386924) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						w18 = 0;
					}
				}
			}
		}
	}
	int w19;
	if (hops < 4) {
		if (size < 141) {
			if (rel_timestamp < 66809) {
				if (rel_timestamp < 53074) {
					w19 = 0;
				} else {
					if (hops < 3) {
						if (rel_timestamp < 53093) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_timestamp < 53093) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				}
			} else {
				if (rel_timestamp < 225651) {
					if (rel_timestamp < 225601) {
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
					if (rel_timestamp < 440711) {
						if (rel_timestamp < 343167) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_timestamp < 447112) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				}
			}
		} else {
			if (rel_timestamp < 165380) {
				if (rel_timestamp < 110012) {
					if (rel_timestamp < 53074) {
						if (hops < 3) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_timestamp < 59686) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (rel_timestamp < 114893) {
						w19 = 0;
					} else {
						if (hops < 2) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				}
			} else {
				if (rel_timestamp < 170227) {
					w19 = 0;
				} else {
					if (hops < 2) {
						if (rel_timestamp < 497307) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_timestamp < 718835) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_timestamp < 54621) {
			w19 = 0;
		} else {
			if (prod == 1) {
				if (rel_timestamp < 994241) {
					if (rel_timestamp < 993760) {
						if (rel_timestamp < 717418) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						w19 = 0;
					}
				} else {
					if (rel_timestamp < 1055801) {
						w19 = 0;
					} else {
						if (rel_timestamp < 1104931) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				}
			} else {
				if (rel_timestamp < 281007) {
					if (rel_timestamp < 66797) {
						w19 = 0;
					} else {
						if (rel_timestamp < 121823) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (rel_timestamp < 834832) {
						if (rel_timestamp < 779450) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_timestamp < 889598) {
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
	if (rel_timestamp < 59705) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_timestamp < 59692) {
					if (size < 141) {
						if (rel_timestamp < 53074) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_timestamp < 53074) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				} else {
					w20 = 0;
				}
			} else {
				if (rel_timestamp < 53081) {
					if (rel_timestamp < 53074) {
						w20 = 0;
					} else {
						w20 = 0;
					}
				} else {
					if (rel_timestamp < 53093) {
						w20 = 0;
					} else {
						if (rel_timestamp < 59692) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			}
		} else {
			if (rel_timestamp < 53074) {
				if (hops < 4) {
					w20 = 0;
				} else {
					w20 = 0;
				}
			} else {
				if (rel_timestamp < 53093) {
					if (hops < 4) {
						w20 = 0;
					} else {
						w20 = 0;
					}
				} else {
					if (size < 141) {
						w20 = 0;
					} else {
						if (rel_timestamp < 54651) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_timestamp < 108394) {
				if (prod == 2) {
					if (rel_timestamp < 66817) {
						if (rel_timestamp < 66809) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						w20 = 0;
					}
				} else {
					w20 = -1024;
				}
			} else {
				if (rel_timestamp < 108418) {
					if (rel_timestamp < 108404) {
						w20 = 0;
					} else {
						w20 = 0;
					}
				} else {
					if (rel_timestamp < 163766) {
						if (rel_timestamp < 163738) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_timestamp < 170250) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			}
		} else {
			if (rel_timestamp < 108394) {
				if (rel_timestamp < 66817) {
					if (rel_timestamp < 66797) {
						if (hops < 3) {
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
					w20 = 0;
				}
			} else {
				if (size < 141) {
					if (rel_timestamp < 889800) {
						if (rel_timestamp < 834453) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_timestamp < 896943) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				} else {
					if (rel_timestamp < 109982) {
						w20 = 0;
					} else {
						if (rel_timestamp < 165333) {
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
	if (hops < 4) {
		if (prod == 1) {
			if (rel_timestamp < 59686) {
				if (rel_timestamp < 54651) {
					if (rel_timestamp < 54632) {
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
			} else {
				if (prod == 2) {
					if (hops < 3) {
						if (rel_timestamp < 398658) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_timestamp < 1118109) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (rel_timestamp < 108394) {
						w21 = -768;
					} else {
						if (rel_timestamp < 1105208) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				}
			}
		} else {
			if (rel_timestamp < 1111686) {
				if (rel_timestamp < 951856) {
					if (rel_timestamp < 890216) {
						if (rel_timestamp < 841181) {
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
					if (rel_timestamp < 1000268) {
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
				}
			} else {
				w21 = 0;
			}
		}
	} else {
		if (rel_timestamp < 54621) {
			w21 = 0;
		} else {
			if (rel_timestamp < 889560) {
				if (rel_timestamp < 834225) {
					if (rel_timestamp < 786219) {
						if (rel_timestamp < 719196) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						w21 = 0;
					}
				} else {
					if (rel_timestamp < 834256) {
						w21 = 0;
					} else {
						if (rel_timestamp < 883087) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				}
			} else {
				if (rel_timestamp < 938872) {
					w21 = 0;
				} else {
					if (size < 141) {
						if (rel_timestamp < 944929) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_timestamp < 1000238) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21) >> 8;
}
