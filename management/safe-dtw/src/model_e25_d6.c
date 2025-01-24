#include <stdbool.h>

int model(int rel_timestamp, int hops, int size, bool prod_0, bool prod_1, bool prod_2, bool prod_3, bool prod_4, bool prod_5, bool cons_1, bool cons_2, bool cons_3, bool cons_4, bool cons_5)
{
	int w0;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w0 = -768;
			} else {
				w0 = -256;
			}
		} else {
			if (hops < 4) {
				w0 = 0;
			} else {
				w0 = 512;
			}
		}
	} else {
		if (prod_0 == 1) {
			w0 = 47616;
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w0 = 40448;
				} else {
					w0 = 40960;
				}
			} else {
				w0 = 41728;
			}
		}
	}
	int w1;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w1 = -512;
			} else {
				w1 = -256;
			}
		} else {
			if (hops < 4) {
				w1 = 0;
			} else {
				w1 = 256;
			}
		}
	} else {
		if (prod_0 == 1) {
			w1 = 33280;
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w1 = 28416;
				} else {
					w1 = 28672;
				}
			} else {
				w1 = 29184;
			}
		}
	}
	int w2;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w2 = -256;
			} else {
				w2 = 0;
			}
		} else {
			if (hops < 4) {
				w2 = 0;
			} else {
				w2 = 256;
			}
		}
	} else {
		if (prod_0 == 1) {
			w2 = 23296;
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w2 = 19712;
				} else {
					w2 = 19968;
				}
			} else {
				if (hops < 4) {
					w2 = 20224;
				} else {
					w2 = 20736;
				}
			}
		}
	}
	int w3;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w3 = -256;
			} else {
				w3 = 0;
			}
		} else {
			if (hops < 4) {
				w3 = 0;
			} else {
				w3 = 0;
			}
		}
	} else {
		if (prod_0 == 1) {
			if (hops < 3) {
				w3 = 15872;
			} else {
				w3 = 16896;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w3 = 13824;
				} else {
					w3 = 14080;
				}
			} else {
				if (hops < 4) {
					w3 = 14080;
				} else {
					w3 = 14592;
				}
			}
		}
	}
	int w4;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w4 = 0;
			} else {
				w4 = 0;
			}
		} else {
			if (hops < 4) {
				w4 = 0;
			} else {
				w4 = 0;
			}
		}
	} else {
		if (prod_0 == 1) {
			if (hops < 2) {
				w4 = 11008;
			} else {
				w4 = 11520;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w4 = 9728;
				} else {
					w4 = 9728;
				}
			} else {
				if (hops < 4) {
					w4 = 9984;
				} else {
					w4 = 10240;
				}
			}
		}
	}
	int w5;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w5 = 0;
			} else {
				w5 = 0;
			}
		} else {
			if (hops < 4) {
				w5 = 0;
			} else {
				w5 = 0;
			}
		}
	} else {
		if (prod_0 == 1) {
			if (hops < 2) {
				w5 = 7680;
			} else {
				w5 = 8192;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w5 = 6656;
				} else {
					w5 = 6912;
				}
			} else {
				if (hops < 4) {
					w5 = 6912;
				} else {
					w5 = 7168;
				}
			}
		}
	}
	int w6;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w6 = 0;
			} else {
				w6 = 0;
			}
		} else {
			if (hops < 4) {
				w6 = 0;
			} else {
				w6 = 0;
			}
		}
	} else {
		if (prod_0 == 1) {
			if (hops < 3) {
				w6 = 5376;
			} else {
				w6 = 5888;
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w6 = 4608;
				} else {
					w6 = 4608;
				}
			} else {
				if (hops < 4) {
					w6 = 4864;
				} else {
					w6 = 4864;
				}
			}
		}
	}
	int w7;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w7 = 0;
			} else {
				w7 = 0;
			}
		} else {
			if (hops < 4) {
				w7 = 0;
			} else {
				w7 = 0;
			}
		}
	} else {
		if (prod_0 == 1) {
			if (hops < 3) {
				w7 = 3840;
			} else {
				if (hops < 4) {
					w7 = 3840;
				} else {
					w7 = 4352;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w7 = 3328;
				} else {
					w7 = 3328;
				}
			} else {
				if (hops < 4) {
					w7 = 3328;
				} else {
					w7 = 3328;
				}
			}
		}
	}
	int w8;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w8 = 0;
			} else {
				w8 = 0;
			}
		} else {
			if (hops < 4) {
				w8 = 0;
			} else {
				w8 = 0;
			}
		}
	} else {
		if (prod_0 == 1) {
			if (hops < 2) {
				w8 = 2560;
			} else {
				if (hops < 4) {
					w8 = 2816;
				} else {
					w8 = 3072;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w8 = 2304;
				} else {
					w8 = 2304;
				}
			} else {
				if (hops < 4) {
					w8 = 2304;
				} else {
					w8 = 2304;
				}
			}
		}
	}
	int w9;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w9 = 0;
			} else {
				w9 = 0;
			}
		} else {
			if (hops < 4) {
				w9 = 0;
			} else {
				w9 = 0;
			}
		}
	} else {
		if (prod_0 == 1) {
			if (hops < 2) {
				w9 = 1792;
			} else {
				if (hops < 4) {
					w9 = 1792;
				} else {
					w9 = 2048;
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w9 = 1536;
				} else {
					w9 = 1536;
				}
			} else {
				if (hops < 4) {
					w9 = 1536;
				} else {
					w9 = 1536;
				}
			}
		}
	}
	int w10;
	if (size < 134) {
		if (hops < 3) {
			if (hops < 2) {
				w10 = 0;
			} else {
				w10 = 0;
			}
		} else {
			if (hops < 4) {
				w10 = 0;
			} else {
				w10 = 0;
			}
		}
	} else {
		if (prod_0 == 1) {
			if (hops < 3) {
				if (hops < 2) {
					w10 = 1280;
				} else {
					w10 = 1280;
				}
			} else {
				w10 = 1280;
			}
		} else {
			if (hops < 3) {
				if (rel_timestamp < 1515138) {
					if (hops < 2) {
						w10 = 1024;
					} else {
						w10 = 1024;
					}
				} else {
					w10 = 1024;
				}
			} else {
				if (hops < 4) {
					w10 = 1024;
				} else {
					w10 = 1024;
				}
			}
		}
	}
	int w11;
	if (size < 134) {
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
		if (prod_0 == 1) {
			if (hops < 3) {
				if (cons_1 == 1) {
					w11 = 768;
				} else {
					w11 = 768;
				}
			} else {
				if (hops < 4) {
					w11 = 768;
				} else {
					w11 = 1024;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_timestamp < 1515138) {
					if (hops < 2) {
						w11 = 768;
					} else {
						w11 = 768;
					}
				} else {
					w11 = 512;
				}
			} else {
				if (rel_timestamp < 1515138) {
					if (hops < 4) {
						w11 = 768;
					} else {
						w11 = 768;
					}
				} else {
					w11 = 512;
				}
			}
		}
	}
	int w12;
	if (size < 134) {
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
		if (prod_0 == 1) {
			if (hops < 2) {
				w12 = 512;
			} else {
				if (hops < 4) {
					if (cons_1 == 1) {
						w12 = 512;
					} else {
						w12 = 512;
					}
				} else {
					w12 = 768;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_timestamp < 1515138) {
					if (hops < 2) {
						w12 = 512;
					} else {
						if (rel_timestamp < 10442) {
							w12 = 512;
						} else {
							w12 = 512;
						}
					}
				} else {
					w12 = 512;
				}
			} else {
				if (rel_timestamp < 1515138) {
					if (hops < 4) {
						if (rel_timestamp < 10442) {
							w12 = 256;
						} else {
							w12 = 512;
						}
					} else {
						w12 = 512;
					}
				} else {
					w12 = 512;
				}
			}
		}
	}
	int w13;
	if (size < 134) {
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
		if (prod_0 == 1) {
			if (hops < 3) {
				if (hops < 2) {
					w13 = 256;
				} else {
					if (cons_1 == 1) {
						w13 = 256;
					} else {
						w13 = 256;
					}
				}
			} else {
				if (cons_1 == 1) {
					if (hops < 4) {
						w13 = 256;
					} else {
						w13 = 512;
					}
				} else {
					w13 = 512;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_timestamp < 1515138) {
					if (hops < 2) {
						w13 = 256;
					} else {
						if (rel_timestamp < 10442) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					}
				} else {
					w13 = 256;
				}
			} else {
				if (rel_timestamp < 1515138) {
					if (hops < 4) {
						if (rel_timestamp < 12243) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					} else {
						if (rel_timestamp < 37149) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					}
				} else {
					w13 = 256;
				}
			}
		}
	}
	int w14;
	if (size < 134) {
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
		if (prod_0 == 1) {
			if (hops < 4) {
				if (hops < 2) {
					if (cons_2 == 1) {
						w14 = 256;
					} else {
						w14 = 256;
					}
				} else {
					if (cons_1 == 1) {
						if (rel_timestamp < 18361) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					} else {
						w14 = 256;
					}
				}
			} else {
				if (rel_timestamp < 10412) {
					w14 = 256;
				} else {
					w14 = 256;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_timestamp < 1515138) {
					if (hops < 2) {
						w14 = 256;
					} else {
						if (cons_3 == 1) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					}
				} else {
					w14 = 256;
				}
			} else {
				if (rel_timestamp < 10442) {
					w14 = 0;
				} else {
					if (rel_timestamp < 12243) {
						if (hops < 4) {
							w14 = 256;
						} else {
							w14 = 0;
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
	}
	int w15;
	if (size < 134) {
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
		if (prod_0 == 1) {
			if (hops < 3) {
				if (cons_1 == 1) {
					if (rel_timestamp < 18361) {
						w15 = 0;
					} else {
						w15 = 0;
					}
				} else {
					w15 = 0;
				}
			} else {
				if (hops < 4) {
					if (cons_2 == 1) {
						w15 = 0;
					} else {
						w15 = 0;
					}
				} else {
					if (rel_timestamp < 10412) {
						w15 = 256;
					} else {
						w15 = 0;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_timestamp < 1515138) {
					if (hops < 2) {
						if (rel_timestamp < 1459635) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					} else {
						if (rel_timestamp < 10442) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				} else {
					w15 = 0;
				}
			} else {
				if (rel_timestamp < 1515138) {
					if (rel_timestamp < 10442) {
						w15 = 0;
					} else {
						if (rel_timestamp < 12243) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				} else {
					w15 = 0;
				}
			}
		}
	}
	int w16;
	if (size < 134) {
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
		if (prod_0 == 1) {
			if (hops < 3) {
				if (hops < 2) {
					if (cons_2 == 1) {
						if (rel_timestamp < 12243) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						w16 = 0;
					}
				} else {
					if (cons_1 == 1) {
						w16 = 0;
					} else {
						w16 = 0;
					}
				}
			} else {
				if (cons_1 == 1) {
					if (rel_timestamp < 6169) {
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
			}
		} else {
			if (hops < 4) {
				if (rel_timestamp < 18361) {
					if (rel_timestamp < 17224) {
						if (rel_timestamp < 12243) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						w16 = 0;
					}
				} else {
					if (rel_timestamp < 75581) {
						if (rel_timestamp < 73204) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_timestamp < 92422) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				}
			} else {
				if (rel_timestamp < 1168915) {
					if (rel_timestamp < 37149) {
						if (rel_timestamp < 18361) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_timestamp < 73204) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				} else {
					if (rel_timestamp < 1171316) {
						w16 = 0;
					} else {
						if (rel_timestamp < 1515138) {
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
	if (size < 134) {
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
		if (prod_0 == 1) {
			if (hops < 4) {
				if (hops < 2) {
					if (cons_2 == 1) {
						if (rel_timestamp < 18361) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						w17 = 0;
					}
				} else {
					if (cons_1 == 1) {
						if (rel_timestamp < 18361) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						w17 = 0;
					}
				}
			} else {
				if (rel_timestamp < 10412) {
					w17 = 0;
				} else {
					w17 = 0;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_timestamp < 265419) {
					if (rel_timestamp < 17209) {
						w17 = 0;
					} else {
						if (rel_timestamp < 18361) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_timestamp < 267820) {
						w17 = 0;
					} else {
						if (rel_timestamp < 284640) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			} else {
				if (rel_timestamp < 152487) {
					if (rel_timestamp < 150072) {
						if (cons_1 == 1) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						w17 = 0;
					}
				} else {
					if (rel_timestamp < 226983) {
						if (rel_timestamp < 210161) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_timestamp < 229393) {
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
	if (size < 134) {
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
		if (prod_0 == 1) {
			if (hops < 3) {
				if (cons_1 == 1) {
					if (rel_timestamp < 12243) {
						if (hops < 2) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_timestamp < 17209) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				} else {
					w18 = 0;
				}
			} else {
				if (cons_1 == 1) {
					if (rel_timestamp < 6169) {
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
				} else {
					if (hops < 4) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				}
			}
		} else {
			if (rel_timestamp < 1515138) {
				if (hops < 4) {
					if (rel_timestamp < 18361) {
						if (rel_timestamp < 17224) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_timestamp < 56361) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (rel_timestamp < 37149) {
						if (rel_timestamp < 18361) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_timestamp < 73204) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				}
			} else {
				w18 = 0;
			}
		}
	}
	int w19;
	if (size < 134) {
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
		if (prod_0 == 1) {
			if (hops < 3) {
				if (cons_1 == 1) {
					if (rel_timestamp < 18361) {
						if (rel_timestamp < 17209) {
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
					w19 = 0;
				}
			} else {
				if (hops < 4) {
					if (cons_2 == 1) {
						if (rel_timestamp < 6169) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_timestamp < 6169) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (cons_3 == 1) {
						w19 = 0;
					} else {
						w19 = 0;
					}
				}
			}
		} else {
			if (rel_timestamp < 1495691) {
				if (rel_timestamp < 1478879) {
					if (hops < 2) {
						if (rel_timestamp < 1459635) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_timestamp < 12243) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						w19 = 0;
					}
				}
			} else {
				if (rel_timestamp < 1498091) {
					if (hops < 3) {
						if (hops < 2) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						w19 = 0;
					}
				} else {
					if (rel_timestamp < 1515138) {
						if (hops < 2) {
							w19 = 0;
						} else {
							w19 = 0;
						}
					} else {
						if (rel_timestamp < 1516674) {
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
	if (size < 134) {
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
		if (prod_0 == 1) {
			if (hops < 4) {
				if (rel_timestamp < 18361) {
					if (rel_timestamp < 17209) {
						if (rel_timestamp < 12243) {
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
					if (hops < 3) {
						if (hops < 2) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						w20 = 0;
					}
				}
			} else {
				if (rel_timestamp < 10412) {
					w20 = 0;
				} else {
					if (rel_timestamp < 17209) {
						w20 = 0;
					} else {
						w20 = 0;
					}
				}
			}
		} else {
			if (rel_timestamp < 1399555) {
				if (rel_timestamp < 998288) {
					if (cons_2 == 1) {
						if (rel_timestamp < 976664) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_timestamp < 940635) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				} else {
					if (rel_timestamp < 1130429) {
						if (cons_1 == 1) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_timestamp < 1152070) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					}
				}
			} else {
				if (rel_timestamp < 1401980) {
					if (hops < 3) {
						if (hops < 2) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						w20 = 0;
					}
				} else {
					if (cons_2 == 1) {
						if (rel_timestamp < 1421192) {
							w20 = 0;
						} else {
							w20 = 0;
						}
					} else {
						if (rel_timestamp < 1478879) {
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
	if (size < 134) {
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
		if (prod_0 == 1) {
			if (cons_1 == 1) {
				if (rel_timestamp < 12243) {
					if (hops < 4) {
						if (hops < 2) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_timestamp < 6169) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (rel_timestamp < 17209) {
						if (hops < 2) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_timestamp < 18361) {
							w21 = 0;
						} else {
							w21 = 0;
						}
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
					w21 = 0;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_timestamp < 1438050) {
					if (rel_timestamp < 998288) {
						if (rel_timestamp < 976664) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_timestamp < 1072778) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (rel_timestamp < 1440415) {
						if (hops < 2) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_timestamp < 1440432) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				}
			} else {
				if (rel_timestamp < 1168915) {
					if (rel_timestamp < 37149) {
						if (cons_2 == 1) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_timestamp < 1111218) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					}
				} else {
					if (rel_timestamp < 1421209) {
						if (rel_timestamp < 1361131) {
							w21 = 0;
						} else {
							w21 = 0;
						}
					} else {
						if (rel_timestamp < 1438050) {
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
	if (size < 134) {
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
		if (rel_timestamp < 37133) {
			if (rel_timestamp < 17224) {
				if (cons_1 == 1) {
					if (hops < 2) {
						if (rel_timestamp < 12243) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (prod_0 == 1) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				} else {
					if (rel_timestamp < 10442) {
						if (rel_timestamp < 6169) {
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
				}
			} else {
				if (cons_2 == 1) {
					if (prod_0 == 1) {
						if (rel_timestamp < 18361) {
							w22 = 0;
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
				} else {
					if (hops < 4) {
						if (hops < 2) {
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
			if (rel_timestamp < 56361) {
				if (rel_timestamp < 46474) {
					if (hops < 3) {
						if (rel_timestamp < 37149) {
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
						w22 = 0;
					} else {
						w22 = 0;
					}
				}
			} else {
				if (rel_timestamp < 323059) {
					if (rel_timestamp < 287043) {
						if (rel_timestamp < 284640) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (rel_timestamp < 303849) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					}
				} else {
					if (rel_timestamp < 325491) {
						if (hops < 2) {
							w22 = 0;
						} else {
							w22 = 0;
						}
					} else {
						if (rel_timestamp < 344703) {
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
	if (size < 134) {
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
		if (rel_timestamp < 1226561) {
			if (rel_timestamp < 979069) {
				if (rel_timestamp < 976664) {
					if (rel_timestamp < 959846) {
						if (rel_timestamp < 919002) {
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
						if (hops < 3) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				}
			} else {
				if (cons_1 == 1) {
					if (rel_timestamp < 995863) {
						if (hops < 4) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_timestamp < 1188137) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					}
				} else {
					if (rel_timestamp < 1152099) {
						if (rel_timestamp < 1092000) {
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
		} else {
			if (rel_timestamp < 1228976) {
				if (hops < 2) {
					w23 = 0;
				} else {
					w23 = 0;
				}
			} else {
				if (rel_timestamp < 1322696) {
					if (rel_timestamp < 1305882) {
						if (rel_timestamp < 1303480) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						w23 = 0;
					}
				} else {
					if (rel_timestamp < 1344309) {
						if (rel_timestamp < 1341915) {
							w23 = 0;
						} else {
							w23 = 0;
						}
					} else {
						if (rel_timestamp < 1361131) {
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
	if (size < 134) {
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
		if (rel_timestamp < 37133) {
			if (rel_timestamp < 17209) {
				if (hops < 2) {
					if (prod_0 == 1) {
						if (rel_timestamp < 12243) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_timestamp < 10442) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (cons_1 == 1) {
						if (prod_0 == 1) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_timestamp < 10442) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (cons_2 == 1) {
						if (prod_0 == 1) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_timestamp < 17224) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (cons_3 == 1) {
						if (rel_timestamp < 17224) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						w24 = 0;
					}
				}
			}
		} else {
			if (rel_timestamp < 75581) {
				if (rel_timestamp < 73204) {
					if (hops < 2) {
						if (rel_timestamp < 56361) {
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
					w24 = 0;
				}
			} else {
				if (rel_timestamp < 92422) {
					if (hops < 2) {
						w24 = 0;
					} else {
						if (rel_timestamp < 75610) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				} else {
					if (rel_timestamp < 94810) {
						if (hops < 2) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					} else {
						if (rel_timestamp < 133261) {
							w24 = 0;
						} else {
							w24 = 0;
						}
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24) >> 8;
}
