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
		if (size < 37) {
			if (rel_time < 1341) {
				if (rel_time < 65) {
					if (hops < 3) {
						w0 = 32000;
					} else {
						w0 = 33280;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w0 = 35328;
						} else {
							w0 = 35840;
						}
					} else {
						if (hops < 4) {
							w0 = 36352;
						} else {
							w0 = 37120;
						}
					}
				}
			} else {
				if (rel_time < 3177) {
					if (rel_time < 2566) {
						if (rel_time < 2528) {
							w0 = 84480;
						} else {
							w0 = 78080;
						}
					} else {
						if (rel_time < 3141) {
							w0 = 69632;
						} else {
							w0 = 62720;
						}
					}
				} else {
					if (rel_time < 3753) {
						w0 = 53248;
					} else {
						if (rel_time < 4362) {
							w0 = 43008;
						} else {
							w0 = 36864;
						}
					}
				}
			}
		} else {
			if (rel_time < 670) {
				if (rel_time < 419) {
					if (hops < 3) {
						w0 = 51712;
					} else {
						w0 = 52736;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 588) {
							w0 = 53248;
						} else {
							w0 = 54016;
						}
					} else {
						w0 = 55040;
					}
				}
			} else {
				if (prod == 1) {
					if (size < 69) {
						if (rel_time < 11422) {
							w0 = 47616;
						} else {
							w0 = 56576;
						}
					} else {
						if (hops < 3) {
							w0 = 45824;
						} else {
							w0 = 46848;
						}
					}
				} else {
					if (rel_time < 1813) {
						if (hops < 3) {
							w0 = 43008;
						} else {
							w0 = 44288;
						}
					} else {
						if (hops < 3) {
							w0 = 41728;
						} else {
							w0 = 43008;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 3) {
				w0 = 67328;
			} else {
				w0 = 68352;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 734) {
					w0 = 59648;
				} else {
					w0 = 58624;
				}
			} else {
				if (rel_time < 734) {
					w0 = 60928;
				} else {
					w0 = 59648;
				}
			}
		}
	}
	int w1;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1341) {
				if (rel_time < 65) {
					if (hops < 4) {
						if (hops < 2) {
							w1 = 22272;
						} else {
							w1 = 22784;
						}
					} else {
						w1 = 23552;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w1 = 24576;
						} else {
							w1 = 25088;
						}
					} else {
						if (hops < 4) {
							w1 = 25344;
						} else {
							w1 = 25856;
						}
					}
				}
			} else {
				if (rel_time < 3177) {
					if (rel_time < 2566) {
						if (rel_time < 1954) {
							w1 = 59648;
						} else {
							w1 = 55296;
						}
					} else {
						if (rel_time < 3141) {
							w1 = 48640;
						} else {
							w1 = 43776;
						}
					}
				} else {
					if (rel_time < 3753) {
						w1 = 37120;
					} else {
						if (rel_time < 4399) {
							w1 = 28416;
						} else {
							w1 = 25600;
						}
					}
				}
			}
		} else {
			if (rel_time < 670) {
				if (rel_time < 419) {
					if (hops < 4) {
						if (hops < 2) {
							w1 = 35840;
						} else {
							w1 = 36608;
						}
					} else {
						w1 = 37376;
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w1 = 37376;
						} else {
							w1 = 38144;
						}
					} else {
						if (rel_time < 588) {
							w1 = 38400;
						} else {
							w1 = 39168;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (size < 69) {
						if (rel_time < 11422) {
							w1 = 33280;
						} else {
							w1 = 39680;
						}
					} else {
						if (hops < 4) {
							w1 = 32000;
						} else {
							w1 = 33024;
						}
					}
				} else {
					if (rel_time < 1813) {
						if (hops < 4) {
							w1 = 30208;
						} else {
							w1 = 31232;
						}
					} else {
						if (hops < 4) {
							w1 = 29440;
						} else {
							w1 = 30464;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 4) {
				w1 = 47104;
			} else {
				w1 = 48128;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 734) {
					w1 = 41728;
				} else {
					if (hops < 2) {
						w1 = 40704;
					} else {
						if (rel_time < 11071) {
							w1 = 41216;
						} else {
							w1 = 42240;
						}
					}
				}
			} else {
				w1 = 42240;
			}
		}
	}
	int w2;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1341) {
				if (rel_time < 65) {
					if (hops < 3) {
						if (hops < 2) {
							w2 = 15360;
						} else {
							w2 = 15872;
						}
					} else {
						if (hops < 5) {
							w2 = 16128;
						} else {
							w2 = 16896;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w2 = 17152;
						} else {
							w2 = 17408;
						}
					} else {
						if (hops < 5) {
							w2 = 17920;
						} else {
							w2 = 18432;
						}
					}
				}
			} else {
				if (rel_time < 3177) {
					if (rel_time < 2566) {
						if (rel_time < 2528) {
							w2 = 41472;
						} else {
							w2 = 38144;
						}
					} else {
						if (rel_time < 3141) {
							w2 = 34048;
						} else {
							w2 = 30720;
						}
					}
				} else {
					if (rel_time < 3789) {
						if (rel_time < 3753) {
							w2 = 26112;
						} else {
							w2 = 22528;
						}
					} else {
						if (hops < 3) {
							w2 = 17664;
						} else {
							w2 = 18688;
						}
					}
				}
			}
		} else {
			if (rel_time < 670) {
				if (rel_time < 419) {
					if (hops < 4) {
						if (hops < 2) {
							w2 = 25088;
						} else {
							w2 = 25600;
						}
					} else {
						w2 = 26112;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 588) {
							w2 = 26112;
						} else {
							w2 = 26624;
						}
					} else {
						if (rel_time < 588) {
							w2 = 26880;
						} else {
							w2 = 27392;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (hops < 2) {
						if (size < 69) {
							w2 = 22784;
						} else {
							w2 = 22016;
						}
					} else {
						if (size < 69) {
							w2 = 23808;
						} else {
							w2 = 22784;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1813) {
							w2 = 20736;
						} else {
							w2 = 20224;
						}
					} else {
						if (rel_time < 1650) {
							w2 = 21504;
						} else {
							w2 = 20992;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 2) {
				w2 = 32512;
			} else {
				w2 = 33280;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 734) {
					if (hops < 2) {
						w2 = 28928;
					} else {
						w2 = 29440;
					}
				} else {
					if (rel_time < 11071) {
						if (hops < 2) {
							w2 = 28416;
						} else {
							w2 = 28672;
						}
					} else {
						w2 = 29440;
					}
				}
			} else {
				if (rel_time < 734) {
					w2 = 29952;
				} else {
					if (hops < 5) {
						if (rel_time < 11088) {
							w2 = 29184;
						} else {
							w2 = 29952;
						}
					} else {
						w2 = 29696;
					}
				}
			}
		}
	}
	int w3;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1341) {
				if (rel_time < 65) {
					if (hops < 4) {
						if (hops < 2) {
							w3 = 10752;
						} else {
							w3 = 11008;
						}
					} else {
						w3 = 11520;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 539) {
							w3 = 12032;
						} else {
							w3 = 12288;
						}
					} else {
						if (hops < 5) {
							w3 = 12544;
						} else {
							w3 = 12800;
						}
					}
				}
			} else {
				if (rel_time < 3177) {
					if (rel_time < 2566) {
						if (rel_time < 1954) {
							w3 = 29440;
						} else {
							w3 = 26880;
						}
					} else {
						if (rel_time < 3141) {
							w3 = 23808;
						} else {
							w3 = 21504;
						}
					}
				} else {
					if (rel_time < 4362) {
						if (rel_time < 3753) {
							w3 = 18176;
						} else {
							w3 = 15616;
						}
					} else {
						if (hops < 4) {
							w3 = 12288;
						} else {
							w3 = 13312;
						}
					}
				}
			}
		} else {
			if (rel_time < 670) {
				if (rel_time < 419) {
					if (hops < 3) {
						w3 = 17664;
					} else {
						w3 = 18176;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 588) {
							w3 = 17920;
						} else {
							w3 = 18432;
						}
					} else {
						if (rel_time < 588) {
							w3 = 18432;
						} else {
							w3 = 18944;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (hops < 3) {
						if (rel_time < 11740) {
							w3 = 15616;
						} else {
							w3 = 16640;
						}
					} else {
						if (size < 69) {
							w3 = 16896;
						} else {
							w3 = 16128;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 846) {
							w3 = 14848;
						} else {
							w3 = 14336;
						}
					} else {
						if (hops < 5) {
							w3 = 14848;
						} else {
							w3 = 15360;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 3) {
				w3 = 23040;
			} else {
				w3 = 23552;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 734) {
					if (hops < 2) {
						w3 = 20224;
					} else {
						w3 = 20480;
					}
				} else {
					if (rel_time < 11088) {
						if (hops < 2) {
							w3 = 19968;
						} else {
							w3 = 20224;
						}
					} else {
						w3 = 20736;
					}
				}
			} else {
				if (rel_time < 734) {
					w3 = 21248;
				} else {
					if (rel_time < 11088) {
						w3 = 20480;
					} else {
						w3 = 21504;
					}
				}
			}
		}
	}
	int w4;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1341) {
				if (rel_time < 65) {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 7424;
						} else {
							w4 = 7680;
						}
					} else {
						w4 = 7936;
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 8448;
						} else {
							w4 = 8448;
						}
					} else {
						if (rel_time < 539) {
							w4 = 8704;
						} else {
							w4 = 8960;
						}
					}
				}
			} else {
				if (rel_time < 3177) {
					if (rel_time < 2566) {
						if (rel_time < 2528) {
							w4 = 20224;
						} else {
							w4 = 18432;
						}
					} else {
						if (rel_time < 3141) {
							w4 = 16640;
						} else {
							w4 = 15104;
						}
					}
				} else {
					if (rel_time < 4362) {
						if (rel_time < 3753) {
							w4 = 12544;
						} else {
							w4 = 11008;
						}
					} else {
						if (hops < 2) {
							w4 = 8192;
						} else {
							w4 = 8960;
						}
					}
				}
			}
		} else {
			if (rel_time < 670) {
				if (rel_time < 419) {
					if (hops < 5) {
						if (hops < 2) {
							w4 = 12288;
						} else {
							w4 = 12544;
						}
					} else {
						w4 = 13056;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 588) {
							w4 = 12544;
						} else {
							w4 = 12800;
						}
					} else {
						if (hops < 5) {
							w4 = 13056;
						} else {
							w4 = 13824;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (hops < 4) {
						if (size < 69) {
							w4 = 11264;
						} else {
							w4 = 10752;
						}
					} else {
						if (size < 69) {
							w4 = 12032;
						} else {
							w4 = 11520;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 846) {
							w4 = 10240;
						} else {
							w4 = 9728;
						}
					} else {
						if (rel_time < 846) {
							w4 = 10752;
						} else {
							w4 = 10240;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 2) {
				w4 = 15872;
			} else {
				if (hops < 5) {
					w4 = 16128;
				} else {
					w4 = 16896;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 11071) {
						if (rel_time < 734) {
							w4 = 14080;
						} else {
							w4 = 13824;
						}
					} else {
						w4 = 14336;
					}
				} else {
					if (rel_time < 734) {
						w4 = 14336;
					} else {
						if (rel_time < 11088) {
							w4 = 14080;
						} else {
							w4 = 14336;
						}
					}
				}
			} else {
				if (rel_time < 734) {
					w4 = 14848;
				} else {
					if (rel_time < 11088) {
						if (hops < 5) {
							w4 = 14336;
						} else {
							w4 = 14592;
						}
					} else {
						w4 = 15104;
					}
				}
			}
		}
	}
	int w5;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1341) {
				if (rel_time < 65) {
					if (hops < 3) {
						if (hops < 2) {
							w5 = 5120;
						} else {
							w5 = 5376;
						}
					} else {
						if (hops < 5) {
							w5 = 5376;
						} else {
							w5 = 5888;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 539) {
							w5 = 5888;
						} else {
							w5 = 5888;
						}
					} else {
						if (hops < 5) {
							w5 = 6144;
						} else {
							w5 = 6400;
						}
					}
				}
			} else {
				if (rel_time < 3177) {
					if (rel_time < 2566) {
						if (rel_time < 1954) {
							w5 = 14336;
						} else {
							w5 = 13056;
						}
					} else {
						if (hops < 3) {
							w5 = 10752;
						} else {
							w5 = 12032;
						}
					}
				} else {
					if (rel_time < 4362) {
						if (rel_time < 3753) {
							w5 = 8960;
						} else {
							w5 = 7680;
						}
					} else {
						if (hops < 3) {
							w5 = 5888;
						} else {
							w5 = 6400;
						}
					}
				}
			}
		} else {
			if (rel_time < 670) {
				if (rel_time < 588) {
					if (hops < 4) {
						if (rel_time < 419) {
							w5 = 8704;
						} else {
							w5 = 8704;
						}
					} else {
						if (hops < 5) {
							w5 = 8960;
						} else {
							w5 = 9216;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w5 = 8960;
						} else {
							w5 = 8960;
						}
					} else {
						if (hops < 5) {
							w5 = 9216;
						} else {
							w5 = 9728;
						}
					}
				}
			} else {
				if (prod == 1) {
					if (hops < 2) {
						if (rel_time < 1956) {
							w5 = 7168;
						} else {
							w5 = 7424;
						}
					} else {
						if (rel_time < 11740) {
							w5 = 7936;
						} else {
							w5 = 8704;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1813) {
							w5 = 7168;
						} else {
							w5 = 6912;
						}
					} else {
						if (rel_time < 1813) {
							w5 = 7680;
						} else {
							w5 = 7424;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 4) {
				if (hops < 2) {
					w5 = 11008;
				} else {
					w5 = 11264;
				}
			} else {
				w5 = 11520;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 734) {
					w5 = 9984;
				} else {
					if (rel_time < 11071) {
						w5 = 9728;
					} else {
						w5 = 9984;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 734) {
						w5 = 9984;
					} else {
						if (rel_time < 11088) {
							w5 = 9984;
						} else {
							w5 = 10240;
						}
					}
				} else {
					if (rel_time < 734) {
						w5 = 10752;
					} else {
						w5 = 10240;
					}
				}
			}
		}
	}
	int w6;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1341) {
				if (rel_time < 65) {
					if (hops < 4) {
						if (hops < 2) {
							w6 = 3584;
						} else {
							w6 = 3840;
						}
					} else {
						if (hops < 5) {
							w6 = 3840;
						} else {
							w6 = 4096;
						}
					}
				} else {
					if (hops < 2) {
						w6 = 4096;
					} else {
						if (rel_time < 539) {
							w6 = 4096;
						} else {
							w6 = 4352;
						}
					}
				}
			} else {
				if (rel_time < 3177) {
					if (rel_time < 2566) {
						if (hops < 4) {
							w6 = 9216;
						} else {
							w6 = 10752;
						}
					} else {
						if (rel_time < 3141) {
							w6 = 8192;
						} else {
							w6 = 6912;
						}
					}
				} else {
					if (rel_time < 4399) {
						if (rel_time < 3753) {
							w6 = 6144;
						} else {
							w6 = 5120;
						}
					} else {
						if (hops < 2) {
							w6 = 3840;
						} else {
							w6 = 4352;
						}
					}
				}
			}
		} else {
			if (rel_time < 763) {
				if (rel_time < 670) {
					if (rel_time < 588) {
						if (hops < 2) {
							w6 = 5888;
						} else {
							w6 = 6144;
						}
					} else {
						if (hops < 3) {
							w6 = 6144;
						} else {
							w6 = 6400;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w6 = 5888;
						} else {
							w6 = 5888;
						}
					} else {
						w6 = 6400;
					}
				}
			} else {
				if (rel_time < 1650) {
					if (prod == 0) {
						if (hops < 3) {
							w6 = 4864;
						} else {
							w6 = 5376;
						}
					} else {
						if (hops < 4) {
							w6 = 4096;
						} else {
							w6 = 4608;
						}
					}
				} else {
					if (prod == 0) {
						if (size < 69) {
							w6 = 4864;
						} else {
							w6 = 5120;
						}
					} else {
						if (rel_time < 11422) {
							w6 = 5888;
						} else {
							w6 = 9472;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 4) {
				if (hops < 2) {
					w6 = 7680;
				} else {
					w6 = 7936;
				}
			} else {
				if (hops < 5) {
					w6 = 7936;
				} else {
					w6 = 8448;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 11071) {
						w6 = 6656;
					} else {
						w6 = 6912;
					}
				} else {
					if (rel_time < 734) {
						w6 = 6912;
					} else {
						if (rel_time < 11088) {
							w6 = 6912;
						} else {
							w6 = 6912;
						}
					}
				}
			} else {
				if (rel_time < 734) {
					if (hops < 5) {
						w6 = 7168;
					} else {
						w6 = 7424;
					}
				} else {
					if (rel_time < 11088) {
						w6 = 6912;
					} else {
						w6 = 7424;
					}
				}
			}
		}
	}
	int w7;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1341) {
				if (rel_time < 65) {
					if (hops < 3) {
						w7 = 2560;
					} else {
						if (hops < 5) {
							w7 = 2560;
						} else {
							w7 = 2816;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w7 = 2816;
						} else {
							w7 = 2816;
						}
					} else {
						if (rel_time < 539) {
							w7 = 2816;
						} else {
							w7 = 3072;
						}
					}
				}
			} else {
				if (rel_time < 3177) {
					if (rel_time < 2528) {
						if (hops < 3) {
							w7 = 6656;
						} else {
							w7 = 7424;
						}
					} else {
						if (hops < 4) {
							w7 = 5376;
						} else {
							w7 = 6656;
						}
					}
				} else {
					if (rel_time < 4399) {
						if (hops < 4) {
							w7 = 3584;
						} else {
							w7 = 4864;
						}
					} else {
						if (hops < 4) {
							w7 = 2816;
						} else {
							w7 = 3328;
						}
					}
				}
			}
		} else {
			if (rel_time < 763) {
				if (rel_time < 670) {
					if (rel_time < 419) {
						if (hops < 5) {
							w7 = 4096;
						} else {
							w7 = 4352;
						}
					} else {
						if (hops < 2) {
							w7 = 4352;
						} else {
							w7 = 4352;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w7 = 4096;
						} else {
							w7 = 4096;
						}
					} else {
						w7 = 4608;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 1650) {
						if (prod == 0) {
							w7 = 3584;
						} else {
							w7 = 2816;
						}
					} else {
						if (prod == 0) {
							w7 = 3584;
						} else {
							w7 = 4096;
						}
					}
				} else {
					if (prod == 1) {
						if (rel_time < 1647) {
							w7 = 3840;
						} else {
							w7 = 4608;
						}
					} else {
						if (rel_time < 846) {
							w7 = 4096;
						} else {
							w7 = 3840;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 4) {
				if (hops < 2) {
					w7 = 5376;
				} else {
					w7 = 5376;
				}
			} else {
				if (hops < 5) {
					w7 = 5632;
				} else {
					w7 = 5888;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 11071) {
						if (rel_time < 734) {
							w7 = 4864;
						} else {
							w7 = 4608;
						}
					} else {
						w7 = 4864;
					}
				} else {
					if (rel_time < 734) {
						w7 = 4864;
					} else {
						if (rel_time < 11088) {
							w7 = 4864;
						} else {
							w7 = 4864;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 1305) {
						w7 = 4864;
					} else {
						w7 = 4864;
					}
				} else {
					if (rel_time < 11088) {
						if (rel_time < 734) {
							w7 = 5120;
						} else {
							w7 = 4864;
						}
					} else {
						w7 = 5376;
					}
				}
			}
		}
	}
	int w8;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1341) {
				if (rel_time < 65) {
					if (hops < 4) {
						if (hops < 2) {
							w8 = 1792;
						} else {
							w8 = 1792;
						}
					} else {
						if (hops < 5) {
							w8 = 1792;
						} else {
							w8 = 1792;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 539) {
							w8 = 1792;
						} else {
							w8 = 2048;
						}
					} else {
						if (hops < 5) {
							w8 = 2048;
						} else {
							w8 = 2048;
						}
					}
				}
			} else {
				if (rel_time < 3141) {
					if (rel_time < 1954) {
						if (hops < 2) {
							w8 = 4352;
						} else {
							w8 = 5120;
						}
					} else {
						if (hops < 3) {
							w8 = 3840;
						} else {
							w8 = 4608;
						}
					}
				} else {
					if (rel_time < 3789) {
						if (hops < 4) {
							w8 = 2816;
						} else {
							w8 = 4096;
						}
					} else {
						if (hops < 5) {
							w8 = 2048;
						} else {
							w8 = 2560;
						}
					}
				}
			}
		} else {
			if (rel_time < 763) {
				if (hops < 5) {
					if (rel_time < 670) {
						if (rel_time < 588) {
							w8 = 2816;
						} else {
							w8 = 3072;
						}
					} else {
						if (hops < 4) {
							w8 = 2816;
						} else {
							w8 = 2816;
						}
					}
				} else {
					if (rel_time < 419) {
						w8 = 3072;
					} else {
						if (rel_time < 670) {
							w8 = 3328;
						} else {
							w8 = 3072;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (prod == 0) {
						if (size < 69) {
							w8 = 2048;
						} else {
							w8 = 2304;
						}
					} else {
						if (rel_time < 11422) {
							w8 = 2304;
						} else {
							w8 = 5120;
						}
					}
				} else {
					if (rel_time < 1650) {
						if (prod == 0) {
							w8 = 2560;
						} else {
							w8 = 2048;
						}
					} else {
						if (prod == 0) {
							w8 = 2560;
						} else {
							w8 = 3072;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 3) {
				w8 = 3840;
			} else {
				if (hops < 5) {
					w8 = 3840;
				} else {
					w8 = 4096;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 734) {
					if (hops < 2) {
						w8 = 3328;
					} else {
						w8 = 3328;
					}
				} else {
					if (rel_time < 11071) {
						if (hops < 2) {
							w8 = 3328;
						} else {
							w8 = 3328;
						}
					} else {
						w8 = 3328;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 1916) {
						w8 = 3328;
					} else {
						if (rel_time < 11088) {
							w8 = 3328;
						} else {
							w8 = 3328;
						}
					}
				} else {
					if (rel_time < 11088) {
						if (rel_time < 734) {
							w8 = 3584;
						} else {
							w8 = 3328;
						}
					} else {
						w8 = 3840;
					}
				}
			}
		}
	}
	int w9;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1341) {
				if (rel_time < 65) {
					if (hops < 3) {
						if (hops < 2) {
							w9 = 1280;
						} else {
							w9 = 1280;
						}
					} else {
						if (hops < 5) {
							w9 = 1280;
						} else {
							w9 = 1280;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w9 = 1280;
						} else {
							w9 = 1280;
						}
					} else {
						if (hops < 5) {
							w9 = 1280;
						} else {
							w9 = 1536;
						}
					}
				}
			} else {
				if (rel_time < 3141) {
					if (rel_time < 2528) {
						if (hops < 4) {
							w9 = 3328;
						} else {
							w9 = 3840;
						}
					} else {
						if (hops < 3) {
							w9 = 2560;
						} else {
							w9 = 3328;
						}
					}
				} else {
					if (rel_time < 4974) {
						if (hops < 3) {
							w9 = 1792;
						} else {
							w9 = 2304;
						}
					} else {
						if (hops < 2) {
							w9 = 1280;
						} else {
							w9 = 1280;
						}
					}
				}
			}
		} else {
			if (rel_time < 763) {
				if (hops < 4) {
					if (rel_time < 670) {
						if (rel_time < 419) {
							w9 = 2048;
						} else {
							w9 = 2048;
						}
					} else {
						if (hops < 2) {
							w9 = 1792;
						} else {
							w9 = 2048;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 670) {
							w9 = 2048;
						} else {
							w9 = 2048;
						}
					} else {
						if (rel_time < 419) {
							w9 = 2048;
						} else {
							w9 = 2304;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (prod == 1) {
						if (rel_time < 1189) {
							w9 = 1280;
						} else {
							w9 = 1792;
						}
					} else {
						if (rel_time < 846) {
							w9 = 1536;
						} else {
							w9 = 1536;
						}
					}
				} else {
					if (prod == 0) {
						if (hops < 5) {
							w9 = 1792;
						} else {
							w9 = 2048;
						}
					} else {
						if (rel_time < 11422) {
							w9 = 2048;
						} else {
							w9 = 4864;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 4) {
				if (hops < 2) {
					w9 = 2560;
				} else {
					w9 = 2560;
				}
			} else {
				w9 = 2816;
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 734) {
						w9 = 2304;
					} else {
						if (rel_time < 11071) {
							w9 = 2304;
						} else {
							w9 = 2304;
						}
					}
				} else {
					if (rel_time < 2528) {
						w9 = 2304;
					} else {
						if (hops < 3) {
							w9 = 2304;
						} else {
							w9 = 2304;
						}
					}
				}
			} else {
				if (rel_time < 11088) {
					if (rel_time < 734) {
						w9 = 2304;
					} else {
						if (hops < 5) {
							w9 = 2304;
						} else {
							w9 = 2304;
						}
					}
				} else {
					w9 = 2560;
				}
			}
		}
	}
	int w10;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1341) {
				if (rel_time < 65) {
					if (hops < 4) {
						if (hops < 2) {
							w10 = 768;
						} else {
							w10 = 768;
						}
					} else {
						if (hops < 5) {
							w10 = 768;
						} else {
							w10 = 768;
						}
					}
				} else {
					if (rel_time < 539) {
						if (hops < 2) {
							w10 = 768;
						} else {
							w10 = 768;
						}
					} else {
						if (hops < 4) {
							w10 = 1024;
						} else {
							w10 = 1024;
						}
					}
				}
			} else {
				if (rel_time < 3753) {
					if (rel_time < 2566) {
						if (hops < 3) {
							w10 = 2048;
						} else {
							w10 = 2560;
						}
					} else {
						if (hops < 3) {
							w10 = 1536;
						} else {
							w10 = 2048;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 4974) {
							w10 = 1024;
						} else {
							w10 = 768;
						}
					} else {
						if (rel_time < 3789) {
							w10 = 7424;
						} else {
							w10 = 1280;
						}
					}
				}
			}
		} else {
			if (rel_time < 763) {
				if (hops < 2) {
					if (rel_time < 419) {
						w10 = 1280;
					} else {
						if (rel_time < 670) {
							w10 = 1280;
						} else {
							w10 = 1280;
						}
					}
				} else {
					if (rel_time < 670) {
						if (rel_time < 588) {
							w10 = 1280;
						} else {
							w10 = 1536;
						}
					} else {
						if (hops < 4) {
							w10 = 1280;
						} else {
							w10 = 1280;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 12205) {
						if (rel_time < 11740) {
							w10 = 1024;
						} else {
							w10 = 2560;
						}
					} else {
						if (prod == 2) {
							w10 = 768;
						} else {
							w10 = 512;
						}
					}
				} else {
					if (prod == 1) {
						if (rel_time < 1647) {
							w10 = 1024;
						} else {
							w10 = 1280;
						}
					} else {
						if (rel_time < 846) {
							w10 = 1280;
						} else {
							w10 = 1024;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 5) {
				if (hops < 2) {
					w10 = 1792;
				} else {
					w10 = 1792;
				}
			} else {
				w10 = 2048;
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 734) {
						w10 = 1536;
					} else {
						if (rel_time < 3729) {
							w10 = 1536;
						} else {
							w10 = 1536;
						}
					}
				} else {
					if (rel_time < 3138) {
						w10 = 1536;
					} else {
						if (rel_time < 11088) {
							w10 = 1536;
						} else {
							w10 = 1536;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 672) {
						w10 = 1536;
					} else {
						if (rel_time < 11088) {
							w10 = 1536;
						} else {
							w10 = 1536;
						}
					}
				} else {
					if (rel_time < 11088) {
						if (rel_time < 1305) {
							w10 = 1792;
						} else {
							w10 = 1536;
						}
					} else {
						w10 = 1792;
					}
				}
			}
		}
	}
	int w11;
	if (size < 133) {
		if (hops < 5) {
			if (size < 37) {
				if (rel_time < 1341) {
					if (rel_time < 65) {
						if (hops < 3) {
							w11 = 512;
						} else {
							w11 = 512;
						}
					} else {
						if (rel_time < 539) {
							w11 = 512;
						} else {
							w11 = 512;
						}
					}
				} else {
					if (rel_time < 3141) {
						if (rel_time < 1954) {
							w11 = 1536;
						} else {
							w11 = 1280;
						}
					} else {
						if (rel_time < 3753) {
							w11 = 1024;
						} else {
							w11 = 512;
						}
					}
				}
			} else {
				if (rel_time < 763) {
					if (hops < 2) {
						if (rel_time < 419) {
							w11 = 768;
						} else {
							w11 = 768;
						}
					} else {
						if (rel_time < 670) {
							w11 = 1024;
						} else {
							w11 = 768;
						}
					}
				} else {
					if (prod == 1) {
						if (rel_time < 1189) {
							w11 = 512;
						} else {
							w11 = 768;
						}
					} else {
						if (rel_time < 1200) {
							w11 = 768;
						} else {
							w11 = 512;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (rel_time < 539) {
					if (size < 37) {
						if (rel_time < 65) {
							w11 = 512;
						} else {
							w11 = 768;
						}
					} else {
						w11 = 1024;
					}
				} else {
					if (prod == 1) {
						if (rel_time < 3789) {
							w11 = 1024;
						} else {
							w11 = 1024;
						}
					} else {
						if (rel_time < 846) {
							w11 = 1024;
						} else {
							w11 = 768;
						}
					}
				}
			} else {
				if (rel_time < 11422) {
					if (rel_time < 1647) {
						if (rel_time < 588) {
							w11 = 1024;
						} else {
							w11 = 768;
						}
					} else {
						w11 = 1536;
					}
				} else {
					w11 = 3328;
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 4) {
				if (hops < 2) {
					w11 = 1280;
				} else {
					w11 = 1280;
				}
			} else {
				if (hops < 5) {
					w11 = 1280;
				} else {
					w11 = 1280;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 734) {
					if (hops < 2) {
						w11 = 1024;
					} else {
						w11 = 1024;
					}
				} else {
					if (rel_time < 11071) {
						w11 = 1024;
					} else {
						w11 = 1024;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 1916) {
						if (hops < 4) {
							w11 = 1024;
						} else {
							w11 = 1024;
						}
					} else {
						if (rel_time < 11088) {
							w11 = 1024;
						} else {
							w11 = 1024;
						}
					}
				} else {
					if (rel_time < 11088) {
						if (rel_time < 734) {
							w11 = 1280;
						} else {
							w11 = 1024;
						}
					} else {
						w11 = 1280;
					}
				}
			}
		}
	}
	int w12;
	if (size < 133) {
		if (prod == 0) {
			if (hops < 2) {
				if (rel_time < 3177) {
					if (rel_time < 65) {
						w12 = 256;
					} else {
						if (prod == 3) {
							w12 = 512;
						} else {
							w12 = 512;
						}
					}
				} else {
					if (prod == 3) {
						if (rel_time < 11740) {
							w12 = 256;
						} else {
							w12 = 0;
						}
					} else {
						if (rel_time < 11675) {
							w12 = 512;
						} else {
							w12 = 256;
						}
					}
				}
			} else {
				if (rel_time < 11740) {
					if (size < 69) {
						if (rel_time < 65) {
							w12 = 256;
						} else {
							w12 = 512;
						}
					} else {
						if (prod == 2) {
							w12 = 512;
						} else {
							w12 = 512;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 12205) {
							w12 = -256;
						} else {
							w12 = 0;
						}
					} else {
						if (hops < 5) {
							w12 = 256;
						} else {
							w12 = 512;
						}
					}
				}
			}
		} else {
			if (rel_time < 11422) {
				if (rel_time < 1647) {
					if (rel_time < 588) {
						if (hops < 4) {
							w12 = 512;
						} else {
							w12 = 768;
						}
					} else {
						if (rel_time < 1189) {
							w12 = 256;
						} else {
							w12 = 0;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w12 = 512;
						} else {
							w12 = 512;
						}
					} else {
						if (hops < 5) {
							w12 = 768;
						} else {
							w12 = 1024;
						}
					}
				}
			} else {
				if (hops < 2) {
					w12 = 2048;
				} else {
					if (hops < 3) {
						w12 = 2560;
					} else {
						if (hops < 4) {
							w12 = 3328;
						} else {
							w12 = 2560;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 3) {
				w12 = 768;
			} else {
				if (hops < 5) {
					w12 = 768;
				} else {
					w12 = 768;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 11071) {
						if (rel_time < 734) {
							w12 = 768;
						} else {
							w12 = 768;
						}
					} else {
						w12 = 768;
					}
				} else {
					if (rel_time < 3750) {
						w12 = 768;
					} else {
						if (rel_time < 11088) {
							w12 = 768;
						} else {
							w12 = 768;
						}
					}
				}
			} else {
				if (rel_time < 11088) {
					if (rel_time < 1305) {
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
				} else {
					if (hops < 5) {
						w12 = 768;
					} else {
						w12 = 768;
					}
				}
			}
		}
	}
	int w13;
	if (size < 133) {
		if (hops < 4) {
			if (prod == 0) {
				if (prod == 3) {
					if (rel_time < 11740) {
						if (rel_time < 3753) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					} else {
						if (rel_time < 12205) {
							w13 = 0;
						} else {
							w13 = 0;
						}
					}
				} else {
					if (rel_time < 11675) {
						if (hops < 2) {
							w13 = 256;
						} else {
							w13 = 512;
						}
					} else {
						if (hops < 3) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					}
				}
			} else {
				if (rel_time < 11422) {
					if (rel_time < 2257) {
						if (rel_time < 588) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					} else {
						if (hops < 2) {
							w13 = 512;
						} else {
							w13 = 256;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w13 = 1280;
						} else {
							w13 = 1792;
						}
					} else {
						w13 = 2304;
					}
				}
			}
		} else {
			if (prod == 0) {
				if (hops < 5) {
					if (prod == 3) {
						if (rel_time < 65) {
							w13 = 256;
						} else {
							w13 = 256;
						}
					} else {
						if (rel_time < 1894) {
							w13 = 512;
						} else {
							w13 = 512;
						}
					}
				} else {
					if (prod == 3) {
						if (rel_time < 1341) {
							w13 = 256;
						} else {
							w13 = 512;
						}
					} else {
						if (rel_time < 11675) {
							w13 = 512;
						} else {
							w13 = 512;
						}
					}
				}
			} else {
				if (rel_time < 11422) {
					if (rel_time < 1647) {
						if (rel_time < 588) {
							w13 = 512;
						} else {
							w13 = 256;
						}
					} else {
						if (hops < 5) {
							w13 = 512;
						} else {
							w13 = 768;
						}
					}
				} else {
					if (hops < 5) {
						w13 = 1792;
					} else {
						w13 = 1536;
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 3) {
				w13 = 512;
			} else {
				if (hops < 5) {
					w13 = 512;
				} else {
					w13 = 512;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 734) {
					if (hops < 2) {
						w13 = 512;
					} else {
						if (rel_time < 672) {
							w13 = 512;
						} else {
							w13 = 512;
						}
					}
				} else {
					if (rel_time < 11071) {
						if (rel_time < 1305) {
							w13 = 512;
						} else {
							w13 = 512;
						}
					} else {
						w13 = 512;
					}
				}
			} else {
				if (hops < 5) {
					w13 = 512;
				} else {
					if (rel_time < 11088) {
						if (rel_time < 1916) {
							w13 = 512;
						} else {
							w13 = 512;
						}
					} else {
						w13 = 512;
					}
				}
			}
		}
	}
	int w14;
	if (size < 133) {
		if (hops < 2) {
			if (prod == 0) {
				if (rel_time < 2566) {
					if (rel_time < 2505) {
						if (size < 37) {
							w14 = 0;
						} else {
							w14 = 256;
						}
					} else {
						if (size < 37) {
							w14 = 768;
						} else {
							w14 = 0;
						}
					}
				} else {
					if (prod == 3) {
						if (prod == 4) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					} else {
						if (rel_time < 11675) {
							w14 = 256;
						} else {
							w14 = 0;
						}
					}
				}
			} else {
				if (rel_time < 11422) {
					if (rel_time < 1647) {
						if (rel_time < 588) {
							w14 = 256;
						} else {
							w14 = 0;
						}
					} else {
						if (rel_time < 4085) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					}
				} else {
					w14 = 1024;
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 12205) {
					if (rel_time < 11765) {
						if (rel_time < 11740) {
							w14 = 256;
						} else {
							w14 = 512;
						}
					} else {
						if (size < 69) {
							w14 = 1280;
						} else {
							w14 = 0;
						}
					}
				} else {
					if (prod == 2) {
						if (hops < 3) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					} else {
						if (hops < 3) {
							w14 = 0;
						} else {
							w14 = 0;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (prod == 3) {
						if (rel_time < 65) {
							w14 = 0;
						} else {
							w14 = 256;
						}
					} else {
						if (rel_time < 11675) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					}
				} else {
					if (rel_time < 11422) {
						if (rel_time < 1647) {
							w14 = 256;
						} else {
							w14 = 512;
						}
					} else {
						w14 = 1024;
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 4) {
				if (hops < 2) {
					w14 = 256;
				} else {
					w14 = 256;
				}
			} else {
				if (hops < 5) {
					w14 = 256;
				} else {
					w14 = 256;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 734) {
					if (hops < 2) {
						w14 = 256;
					} else {
						if (rel_time < 672) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					}
				} else {
					if (rel_time < 11071) {
						if (rel_time < 1305) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					} else {
						w14 = 256;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 2508) {
						if (hops < 4) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					} else {
						if (rel_time < 11088) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					}
				} else {
					if (rel_time < 11088) {
						if (rel_time < 1916) {
							w14 = 256;
						} else {
							w14 = 256;
						}
					} else {
						w14 = 256;
					}
				}
			}
		}
	}
	int w15;
	if (size < 133) {
		if (hops < 3) {
			if (size < 37) {
				if (rel_time < 1341) {
					if (rel_time < 847) {
						if (rel_time < 539) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					} else {
						if (hops < 2) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				} else {
					if (rel_time < 3177) {
						if (rel_time < 2528) {
							w15 = 512;
						} else {
							w15 = 256;
						}
					} else {
						if (rel_time < 4362) {
							w15 = 256;
						} else {
							w15 = 0;
						}
					}
				}
			} else {
				if (rel_time < 763) {
					if (prod == 4) {
						if (hops < 2) {
							w15 = 256;
						} else {
							w15 = 256;
						}
					} else {
						w15 = 256;
					}
				} else {
					if (prod == 2) {
						if (prod == 1) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					} else {
						if (rel_time < 1982) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				}
			}
		} else {
			if (prod == 0) {
				if (rel_time < 3753) {
					if (rel_time < 3729) {
						if (rel_time < 539) {
							w15 = 0;
						} else {
							w15 = 256;
						}
					} else {
						if (hops < 5) {
							w15 = 768;
						} else {
							w15 = 0;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 4362) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					} else {
						if (rel_time < 11740) {
							w15 = 0;
						} else {
							w15 = 0;
						}
					}
				}
			} else {
				if (rel_time < 11422) {
					if (rel_time < 1647) {
						if (rel_time < 1189) {
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
					if (hops < 4) {
						if (rel_time < 11765) {
							w15 = 1280;
						} else {
							w15 = 1024;
						}
					} else {
						if (hops < 5) {
							w15 = 1024;
						} else {
							w15 = 768;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 4) {
				if (hops < 2) {
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
		} else {
			if (hops < 3) {
				if (rel_time < 734) {
					if (hops < 2) {
						w15 = 256;
					} else {
						if (rel_time < 672) {
							w15 = 256;
						} else {
							w15 = 256;
						}
					}
				} else {
					if (rel_time < 11071) {
						if (rel_time < 1305) {
							w15 = 256;
						} else {
							w15 = 256;
						}
					} else {
						if (hops < 2) {
							w15 = 256;
						} else {
							w15 = 256;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 2508) {
						if (hops < 4) {
							w15 = 256;
						} else {
							w15 = 256;
						}
					} else {
						if (rel_time < 11088) {
							w15 = 256;
						} else {
							w15 = 256;
						}
					}
				} else {
					if (rel_time < 11088) {
						if (rel_time < 734) {
							w15 = 256;
						} else {
							w15 = 256;
						}
					} else {
						w15 = 256;
					}
				}
			}
		}
	}
	int w16;
	if (size < 133) {
		if (hops < 2) {
			if (rel_time < 763) {
				if (size < 37) {
					if (rel_time < 65) {
						w16 = 0;
					} else {
						w16 = 0;
					}
				} else {
					if (prod == 0) {
						if (prod == 4) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						w16 = 0;
					}
				}
			} else {
				if (prod == 2) {
					if (rel_time < 1650) {
						if (size < 69) {
							w16 = 0;
						} else {
							w16 = 256;
						}
					} else {
						if (prod == 0) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				} else {
					if (rel_time < 1982) {
						if (rel_time < 1399) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_time < 11740) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 65) {
				if (hops < 4) {
					if (hops < 3) {
						w16 = 0;
					} else {
						w16 = 0;
					}
				} else {
					if (hops < 5) {
						w16 = 0;
					} else {
						w16 = 0;
					}
				}
			} else {
				if (hops < 5) {
					if (prod == 3) {
						if (prod == 0) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_time < 11675) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				} else {
					if (rel_time < 1894) {
						if (size < 37) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_time < 1954) {
							w16 = 1280;
						} else {
							w16 = 0;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 3) {
				if (hops < 2) {
					w16 = 0;
				} else {
					w16 = 0;
				}
			} else {
				if (hops < 5) {
					w16 = 0;
				} else {
					w16 = 0;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 5567) {
					if (rel_time < 734) {
						w16 = 0;
					} else {
						if (rel_time < 1305) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				} else {
					if (rel_time < 8619) {
						if (rel_time < 8012) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_time < 8626) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				}
			} else {
				if (rel_time < 4341) {
					if (hops < 5) {
						if (hops < 3) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_time < 734) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11071) {
							w16 = 0;
						} else {
							w16 = 0;
						}
					} else {
						if (rel_time < 11686) {
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
	if (size < 133) {
		if (hops < 4) {
			if (size < 37) {
				if (rel_time < 1341) {
					if (hops < 2) {
						if (rel_time < 847) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 65) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 3141) {
						if (hops < 3) {
							w17 = 256;
						} else {
							w17 = 512;
						}
					} else {
						if (rel_time < 4974) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			} else {
				if (rel_time < 763) {
					if (prod == 0) {
						if (hops < 3) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (hops < 3) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 3714) {
						if (cons == 5) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (prod == 0) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			}
		} else {
			if (rel_time < 1650) {
				if (size < 37) {
					if (rel_time < 65) {
						if (hops < 5) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 964) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 763) {
						if (prod == 4) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (cons == 5) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			} else {
				if (size < 37) {
					if (rel_time < 3789) {
						if (hops < 5) {
							w17 = 512;
						} else {
							w17 = 1024;
						}
					} else {
						if (rel_time < 4974) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (prod == 0) {
						if (prod == 3) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 11422) {
							w17 = 0;
						} else {
							w17 = 512;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 336) {
			if (hops < 4) {
				if (hops < 2) {
					w17 = 0;
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
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 5567) {
						if (rel_time < 734) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (rel_time < 11064) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				} else {
					if (rel_time < 6195) {
						if (rel_time < 734) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					} else {
						if (hops < 3) {
							w17 = 0;
						} else {
							w17 = 0;
						}
					}
				}
			} else {
				if (rel_time < 11088) {
					if (rel_time < 672) {
						if (hops < 5) {
							w17 = 0;
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
					w17 = 0;
				}
			}
		}
	}
	int w18;
	if (rel_time < 12205) {
		if (rel_time < 11765) {
			if (size < 69) {
				if (rel_time < 11593) {
					if (rel_time < 1650) {
						if (rel_time < 1200) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_time < 1954) {
							w18 = 256;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (hops < 2) {
						w18 = 512;
					} else {
						if (hops < 4) {
							w18 = 768;
						} else {
							w18 = 512;
						}
					}
				}
			} else {
				if (rel_time < 11740) {
					if (rel_time < 1283) {
						if (rel_time < 763) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (prod == 2) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w18 = -256;
						} else {
							w18 = -256;
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
			if (size < 69) {
				if (hops < 4) {
					if (hops < 2) {
						w18 = 512;
					} else {
						if (hops < 3) {
							w18 = 512;
						} else {
							w18 = 512;
						}
					}
				} else {
					if (hops < 5) {
						w18 = 256;
					} else {
						w18 = 256;
					}
				}
			} else {
				w18 = -256;
			}
		}
	} else {
		if (prod == 3) {
			if (hops < 2) {
				if (rel_time < 12276) {
					if (rel_time < 12213) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				} else {
					if (rel_time < 12347) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 12347) {
						if (rel_time < 12276) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						w18 = 0;
					}
				} else {
					if (rel_time < 12276) {
						if (hops < 4) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (hops < 5) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 12276) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				} else {
					if (rel_time < 12276) {
						w18 = 0;
					} else {
						w18 = 0;
					}
				}
			} else {
				if (hops < 4) {
					w18 = 0;
				} else {
					if (hops < 5) {
						if (rel_time < 12276) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					} else {
						if (rel_time < 12276) {
							w18 = 0;
						} else {
							w18 = 0;
						}
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18) >> 8;
}
