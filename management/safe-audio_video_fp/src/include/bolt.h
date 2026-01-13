#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

float bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	float w0;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					w0 = -84.404854;
				} else {
					w0 = -79.735466;
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w0 = -58.88926;
						} else {
							w0 = -72.48805;
						}
					} else {
						if (hops < 2) {
							w0 = -59.408356;
						} else {
							w0 = -56.626717;
						}
					}
				} else {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w0 = -54.18321;
						} else {
							w0 = -67.718254;
						}
					} else {
						if (hops < 4) {
							w0 = -53.500904;
						} else {
							w0 = -50.91394;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 1101) {
					if (hops < 3) {
						if (rel_time < 1015) {
							w0 = 32.55972;
						} else {
							w0 = 36.742508;
						}
					} else {
						if (rel_time < 1015) {
							w0 = 37.543877;
						} else {
							w0 = 41.4202;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11853) {
							w0 = 5.480315;
						} else {
							w0 = 54.43799;
						}
					} else {
						if (hops < 3) {
							w0 = -4.233586;
						} else {
							w0 = 0.5929658;
						}
					}
				}
			} else {
				if (rel_time < 854) {
					if (hops < 3) {
						if (hops < 2) {
							w0 = 22.434624;
						} else {
							w0 = 25.02102;
						}
					} else {
						if (hops < 4) {
							w0 = 28.091726;
						} else {
							w0 = 30.861917;
						}
					}
				} else {
					if (rel_time < 2238) {
						if (hops < 3) {
							w0 = -14.829386;
						} else {
							w0 = -8.228064;
						}
					} else {
						if (hops < 3) {
							w0 = -26.51975;
						} else {
							w0 = -21.747036;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				w0 = 103.073204;
			} else {
				w0 = 107.648964;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w0 = 72.62134;
					} else {
						w0 = 75.46273;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w0 = 66.149704;
						} else {
							w0 = 68.893845;
						}
					} else {
						w0 = 74.13503;
					}
				}
			} else {
				if (rel_time < 1743) {
					w0 = 79.066154;
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w0 = 71.72625;
						} else {
							w0 = 74.87744;
						}
					} else {
						w0 = 78.8698;
					}
				}
			}
		}
	}
	float w1;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 2) {
					w1 = -52.06861;
				} else {
					if (hops < 4) {
						w1 = -49.102493;
					} else {
						w1 = -45.458508;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w1 = -35.33821;
						} else {
							w1 = -43.504326;
						}
					} else {
						if (hops < 2) {
							w1 = -35.646297;
						} else {
							w1 = -33.977062;
						}
					}
				} else {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w1 = -32.5171;
						} else {
							w1 = -40.648884;
						}
					} else {
						if (hops < 4) {
							w1 = -32.101727;
						} else {
							w1 = -30.551651;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 1101) {
					if (hops < 2) {
						if (rel_time < 1015) {
							w1 = 18.008924;
						} else {
							w1 = 20.580345;
						}
					} else {
						if (hops < 4) {
							w1 = 22.88566;
						} else {
							w1 = 26.297064;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11853) {
							w1 = 3.288231;
						} else {
							w1 = 32.668194;
						}
					} else {
						if (hops < 2) {
							w1 = -4.059045;
						} else {
							w1 = -0.39537808;
						}
					}
				}
			} else {
				if (rel_time < 854) {
					if (hops < 3) {
						if (hops < 2) {
							w1 = 13.468561;
						} else {
							w1 = 15.020081;
						}
					} else {
						if (hops < 4) {
							w1 = 16.86476;
						} else {
							w1 = 18.549042;
						}
					}
				} else {
					if (rel_time < 2238) {
						if (rel_time < 1285) {
							w1 = -10.947172;
						} else {
							w1 = -5.6044497;
						}
					} else {
						if (hops < 2) {
							w1 = -17.41948;
						} else {
							w1 = -13.779185;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 2) {
				w1 = 60.21301;
			} else {
				w1 = 64.01926;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w1 = 43.585316;
					} else {
						w1 = 45.289104;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w1 = 39.691235;
						} else {
							w1 = 41.33761;
						}
					} else {
						if (rel_time < 12101) {
							w1 = 42.950054;
						} else {
							w1 = 45.818382;
						}
					}
				}
			} else {
				if (rel_time < 1743) {
					if (hops < 4) {
						w1 = 46.675125;
					} else {
						w1 = 49.70137;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w1 = 43.03729;
						} else {
							w1 = 44.931263;
						}
					} else {
						if (hops < 4) {
							w1 = 46.538387;
						} else {
							w1 = 49.617943;
						}
					}
				}
			}
		}
	}
	float w2;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 2) {
					w2 = -31.259266;
				} else {
					if (hops < 4) {
						w2 = -29.469374;
					} else {
						w2 = -27.321974;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1770) {
						if (rel_time < 972) {
							w2 = -19.205812;
						} else {
							w2 = -24.658255;
						}
					} else {
						if (hops < 2) {
							w2 = -21.38855;
						} else {
							w2 = -20.38686;
						}
					}
				} else {
					if (rel_time < 1770) {
						if (rel_time < 972) {
							w2 = -17.541883;
						} else {
							w2 = -22.944818;
						}
					} else {
						if (hops < 4) {
							w2 = -19.261745;
						} else {
							w2 = -18.332972;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 1101) {
					if (rel_time < 1015) {
						if (hops < 3) {
							w2 = 11.295569;
						} else {
							w2 = 13.046224;
						}
					} else {
						if (hops < 2) {
							w2 = 12.351783;
						} else {
							w2 = 14.795888;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11853) {
							w2 = 1.9729661;
						} else {
							w2 = 19.604147;
						}
					} else {
						if (hops < 4) {
							w2 = -1.2348512;
						} else {
							w2 = 2.6546683;
						}
					}
				}
			} else {
				if (rel_time < 854) {
					if (hops < 3) {
						if (hops < 2) {
							w2 = 8.085811;
						} else {
							w2 = 9.016524;
						}
					} else {
						if (hops < 4) {
							w2 = 10.124702;
						} else {
							w2 = 11.148609;
						}
					}
				} else {
					if (rel_time < 1697) {
						if (rel_time < 1285) {
							w2 = -6.5694003;
						} else {
							w2 = 0.3804818;
						}
					} else {
						if (hops < 4) {
							w2 = -9.1498;
						} else {
							w2 = -5.3532553;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 4) {
				if (hops < 2) {
					w2 = 36.14855;
				} else {
					w2 = 37.952923;
				}
			} else {
				w2 = 41.29119;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w2 = 26.158695;
					} else {
						w2 = 27.180328;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w2 = 23.815603;
						} else {
							w2 = 24.803358;
						}
					} else {
						if (rel_time < 12101) {
							w2 = 25.784824;
						} else {
							w2 = 27.504942;
						}
					}
				}
			} else {
				if (rel_time < 1743) {
					if (hops < 4) {
						w2 = 28.01309;
					} else {
						w2 = 29.846283;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w2 = 25.823292;
						} else {
							w2 = 26.96163;
						}
					} else {
						if (hops < 4) {
							w2 = 27.938993;
						} else {
							w2 = 29.821533;
						}
					}
				}
			}
		}
	}
	float w3;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					if (hops < 2) {
						w3 = -18.766417;
					} else {
						w3 = -18.030455;
					}
				} else {
					w3 = -17.048193;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w3 = -13.94474;
						} else {
							w3 = -17.620077;
						}
					} else {
						if (rel_time < 9103) {
							w3 = -12.936464;
						} else {
							w3 = -12.5222435;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1770) {
							w3 = -12.927112;
						} else {
							w3 = -11.92924;
						}
					} else {
						if (rel_time < 972) {
							w3 = -8.249126;
						} else {
							w3 = -11.056809;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 1199) {
					if (rel_time < 1101) {
						if (hops < 3) {
							w3 = 7.497474;
						} else {
							w3 = 8.909907;
						}
					} else {
						if (hops < 2) {
							w3 = 2.5830493;
						} else {
							w3 = 4.556552;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w3 = -1.9187971;
						} else {
							w3 = -0.19387291;
						}
					} else {
						if (size < 69) {
							w3 = 4.705903;
						} else {
							w3 = 0.5401933;
						}
					}
				}
			} else {
				if (rel_time < 854) {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 4.8542914;
						} else {
							w3 = 5.4125957;
						}
					} else {
						if (hops < 4) {
							w3 = 6.078331;
						} else {
							w3 = 6.7006845;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2238) {
							w3 = -6.1887116;
						} else {
							w3 = -6.7923465;
						}
					} else {
						if (rel_time < 1697) {
							w3 = -0.04769199;
						} else {
							w3 = -4.687792;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 4) {
				if (hops < 2) {
					w3 = 21.70158;
				} else {
					w3 = 22.77786;
				}
			} else {
				w3 = 24.816954;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w3 = 15.699727;
					} else {
						w3 = 16.312311;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w3 = 14.28987;
						} else {
							w3 = 14.882491;
						}
					} else {
						if (rel_time < 12101) {
							w3 = 15.479767;
						} else {
							w3 = 16.511312;
						}
					}
				}
			} else {
				if (rel_time < 1743) {
					if (hops < 4) {
						w3 = 16.812674;
					} else {
						w3 = 17.923044;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w3 = 15.494525;
						} else {
							w3 = 16.178717;
						}
					} else {
						if (hops < 4) {
							w3 = 16.772993;
						} else {
							w3 = 17.92343;
						}
					}
				}
			}
		}
	}
	float w4;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					if (hops < 2) {
						w4 = -11.266372;
					} else {
						w4 = -10.823523;
					}
				} else {
					if (hops < 4) {
						w4 = -10.43637;
					} else {
						w4 = -9.619643;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 972) {
						if (hops < 2) {
							w4 = -7.318242;
						} else {
							w4 = -5.20779;
						}
					} else {
						if (rel_time < 1770) {
							w4 = -9.106598;
						} else {
							w4 = -7.5704546;
						}
					}
				} else {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w4 = -6.5865426;
						} else {
							w4 = -10.252566;
						}
					} else {
						if (hops < 4) {
							w4 = -6.7860484;
						} else {
							w4 = -6.5789604;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (rel_time < 1199) {
					if (rel_time < 1101) {
						if (rel_time < 1015) {
							w4 = 3.9679563;
						} else {
							w4 = 5.247212;
						}
					} else {
						if (hops < 3) {
							w4 = 1.8617772;
						} else {
							w4 = 3.2775865;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1627) {
							w4 = -6.2827067;
						} else {
							w4 = -0.51779515;
						}
					} else {
						if (size < 69) {
							w4 = 2.8235943;
						} else {
							w4 = 0.32410693;
						}
					}
				}
			} else {
				if (rel_time < 854) {
					if (hops < 3) {
						if (hops < 2) {
							w4 = 2.9142537;
						} else {
							w4 = 3.24917;
						}
					} else {
						if (hops < 4) {
							w4 = 3.6491132;
						} else {
							w4 = 4.0273366;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 2238) {
							w4 = -2.4134293;
						} else {
							w4 = -3.8043354;
						}
					} else {
						if (rel_time < 2238) {
							w4 = 0.5714325;
						} else {
							w4 = -2.3829505;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				w4 = 13.232791;
			} else {
				if (hops < 4) {
					w4 = 13.961177;
				} else {
					w4 = 14.915558;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w4 = 9.42255;
					} else {
						w4 = 9.789861;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w4 = 8.574236;
						} else {
							w4 = 8.92977;
						}
					} else {
						if (rel_time < 12101) {
							w4 = 9.293206;
						} else {
							w4 = 9.911806;
						}
					}
				}
			} else {
				if (rel_time < 1743) {
					if (hops < 4) {
						if (rel_time < 1163) {
							w4 = 10.308799;
						} else {
							w4 = 9.863516;
						}
					} else {
						w4 = 10.76301;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w4 = 9.297055;
						} else {
							w4 = 9.708269;
						}
					} else {
						if (hops < 4) {
							w4 = 10.069542;
						} else {
							w4 = 10.772405;
						}
					}
				}
			}
		}
	}
	float w5;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					if (hops < 2) {
						w5 = -6.763744;
					} else {
						w5 = -6.4972663;
					}
				} else {
					if (hops < 4) {
						w5 = -6.265539;
					} else {
						w5 = -5.7817087;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1770) {
						if (rel_time < 972) {
							w5 = -4.39349;
						} else {
							w5 = -6.358891;
						}
					} else {
						if (rel_time < 7880) {
							w5 = -4.7692013;
						} else {
							w5 = -4.511207;
						}
					}
				} else {
					if (rel_time < 972) {
						if (hops < 4) {
							w5 = -3.3000703;
						} else {
							w5 = -2.3301437;
						}
					} else {
						if (rel_time < 1770) {
							w5 = -5.0874553;
						} else {
							w5 = -4.227379;
						}
					}
				}
			}
		} else {
			if (cons != 5) {
				if (rel_time < 1101) {
					if (rel_time < 854) {
						if (hops < 3) {
							w5 = 1.8584222;
						} else {
							w5 = 2.249873;
						}
					} else {
						if (hops < 4) {
							w5 = 2.9538734;
						} else {
							w5 = 4.9948583;
						}
					}
				} else {
					if (hops < 4) {
						if (size < 69) {
							w5 = -1.9636481;
						} else {
							w5 = -0.8331704;
						}
					} else {
						if (rel_time < 1697) {
							w5 = 3.0770822;
						} else {
							w5 = 0.4777801;
						}
					}
				}
			} else {
				if (rel_time < 12186) {
					if (hops < 2) {
						if (rel_time < 2087) {
							w5 = -1.97258;
						} else {
							w5 = -0.41463143;
						}
					} else {
						if (rel_time < 2087) {
							w5 = -0.80314934;
						} else {
							w5 = 1.163343;
						}
					}
				} else {
					if (rel_time < 12625) {
						if (hops < 2) {
							w5 = 9.243764;
						} else {
							w5 = 11.700217;
						}
					} else {
						if (hops < 4) {
							w5 = -0.021392632;
						} else {
							w5 = 1.5403465;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				if (hops < 2) {
					w5 = 7.7398605;
				} else {
					w5 = 8.113681;
				}
			} else {
				if (hops < 4) {
					w5 = 8.3814945;
				} else {
					w5 = 8.964606;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w5 = 5.6551557;
					} else {
						w5 = 5.8754044;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w5 = 5.144733;
						} else {
							w5 = 5.3580403;
						}
					} else {
						if (rel_time < 12101) {
							w5 = 5.5791225;
						} else {
							w5 = 5.9500923;
						}
					}
				}
			} else {
				if (rel_time < 1743) {
					if (hops < 4) {
						if (rel_time < 1163) {
							w5 = 6.188824;
						} else {
							w5 = 5.9214892;
						}
					} else {
						w5 = 6.4633217;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w5 = 5.5784316;
						} else {
							w5 = 5.82559;
						}
					} else {
						if (hops < 4) {
							w5 = 6.0451884;
						} else {
							w5 = 6.4744654;
						}
					}
				}
			}
		}
	}
	float w6;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					if (hops < 2) {
						w6 = -4.0606008;
					} else {
						w6 = -3.9002564;
					}
				} else {
					if (hops < 4) {
						w6 = -3.7615573;
					} else {
						w6 = -3.4749863;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1402) {
						if (hops < 2) {
							w6 = -2.9361837;
						} else {
							w6 = -1.457529;
						}
					} else {
						if (rel_time < 1770) {
							w6 = -4.3189044;
						} else {
							w6 = -2.7703016;
						}
					}
				} else {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w6 = -2.3255816;
						} else {
							w6 = -4.1206183;
						}
					} else {
						if (rel_time < 7880) {
							w6 = -2.415716;
						} else {
							w6 = -2.2382662;
						}
					}
				}
			}
		} else {
			if (rel_time < 1199) {
				if (prod != 0) {
					if (hops < 4) {
						if (hops < 2) {
							w6 = 1.2194005;
						} else {
							w6 = 1.7996756;
						}
					} else {
						if (rel_time < 854) {
							w6 = 1.522936;
						} else {
							w6 = 3.0975466;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w6 = 2.5033467;
						} else {
							w6 = 2.7823093;
						}
					} else {
						w6 = 4.180909;
					}
				}
			} else {
				if (cons != 5) {
					if (hops < 2) {
						if (prod != 3) {
							w6 = -1.5924625;
						} else {
							w6 = -0.67862695;
						}
					} else {
						if (prod != 3) {
							w6 = -0.62067;
						} else {
							w6 = 0.18007314;
						}
					}
				} else {
					if (rel_time < 2087) {
						if (size < 69) {
							w6 = -5.0283713;
						} else {
							w6 = 1.9088303;
						}
					} else {
						if (size < 69) {
							w6 = 1.2897142;
						} else {
							w6 = -0.067270085;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				if (hops < 2) {
					w6 = 4.6465797;
				} else {
					w6 = 4.8706594;
				}
			} else {
				if (hops < 4) {
					w6 = 5.0317817;
				} else {
					w6 = 5.387937;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 2346) {
					if (hops < 2) {
						if (rel_time < 1163) {
							w6 = 3.4727116;
						} else {
							w6 = 3.248409;
						}
					} else {
						w6 = 3.492068;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w6 = 3.080472;
						} else {
							w6 = 3.2009964;
						}
					} else {
						if (rel_time < 12101) {
							w6 = 3.349404;
						} else {
							w6 = 3.5718687;
						}
					}
				}
			} else {
				if (rel_time < 2346) {
					if (rel_time < 1163) {
						if (hops < 4) {
							w6 = 3.7154102;
						} else {
							w6 = 3.9397686;
						}
					} else {
						w6 = 3.6034913;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w6 = 3.330005;
						} else {
							w6 = 3.493749;
						}
					} else {
						if (hops < 4) {
							w6 = 3.629196;
						} else {
							w6 = 3.8912938;
						}
					}
				}
			}
		}
	}
	float w7;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					if (rel_time < 432) {
						if (hops < 2) {
							w7 = -2.4389665;
						} else {
							w7 = -2.2091672;
						}
					} else {
						w7 = -2.4157445;
					}
				} else {
					if (hops < 4) {
						w7 = -2.258271;
					} else {
						w7 = -2.0885785;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1770) {
						if (rel_time < 1402) {
							w7 = -1.4433621;
						} else {
							w7 = -2.7264533;
						}
					} else {
						if (hops < 3) {
							w7 = -1.662199;
						} else {
							w7 = -1.4413047;
						}
					}
				} else {
					if (rel_time < 1402) {
						if (rel_time < 972) {
							w7 = -0.47266293;
						} else {
							w7 = 0.09187232;
						}
					} else {
						if (rel_time < 1770) {
							w7 = -0.8674213;
						} else {
							w7 = -1.3176064;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 12186) {
					if (rel_time < 1199) {
						if (rel_time < 854) {
							w7 = 0.52504605;
						} else {
							w7 = 1.2428198;
						}
					} else {
						if (hops < 2) {
							w7 = -0.7232215;
						} else {
							w7 = -0.17769192;
						}
					}
				} else {
					if (size < 69) {
						if (hops < 2) {
							w7 = 5.0340147;
						} else {
							w7 = 6.13249;
						}
					} else {
						if (hops < 2) {
							w7 = -0.5345043;
						} else {
							w7 = 0.016350403;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 69) {
						if (rel_time < 1697) {
							w7 = 2.6877022;
						} else {
							w7 = -0.39676648;
						}
					} else {
						if (prod != 4) {
							w7 = 1.2060407;
						} else {
							w7 = 0.5359433;
						}
					}
				} else {
					if (rel_time < 11853) {
						if (rel_time < 2087) {
							w7 = 0.19639528;
						} else {
							w7 = 3.044817;
						}
					} else {
						w7 = 8.891672;
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				if (hops < 2) {
					w7 = 2.7895381;
				} else {
					w7 = 2.923871;
				}
			} else {
				if (hops < 4) {
					w7 = 3.0207877;
				} else {
					w7 = 3.2382736;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1743) {
					if (hops < 2) {
						w7 = 2.050423;
					} else {
						w7 = 2.1298292;
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 2) {
							w7 = 1.8506479;
						} else {
							w7 = 1.9273176;
						}
					} else {
						if (rel_time < 12101) {
							w7 = 2.0107877;
						} else {
							w7 = 2.1442173;
						}
					}
				}
			} else {
				if (rel_time < 2957) {
					if (rel_time < 1163) {
						if (hops < 4) {
							w7 = 2.2305276;
						} else {
							w7 = 2.3678956;
						}
					} else {
						w7 = 2.1485322;
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w7 = 1.9895123;
						} else {
							w7 = 2.0942209;
						}
					} else {
						if (hops < 4) {
							w7 = 2.1787565;
						} else {
							w7 = 2.338756;
						}
					}
				}
			}
		}
	}
	float w8;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 3) {
					if (hops < 2) {
						w8 = -1.4703264;
					} else {
						if (rel_time < 432) {
							w8 = -1.3276452;
						} else {
							w8 = -1.430084;
						}
					}
				} else {
					if (hops < 4) {
						w8 = -1.3557671;
					} else {
						w8 = -1.2552946;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 7880) {
						if (rel_time < 972) {
							w8 = -0.7351053;
						} else {
							w8 = -1.0563873;
						}
					} else {
						if (rel_time < 9714) {
							w8 = -0.8094717;
						} else {
							w8 = -0.9444302;
						}
					}
				} else {
					if (rel_time < 1744) {
						if (rel_time < 1402) {
							w8 = -0.11457957;
						} else {
							w8 = -0.44629318;
						}
					} else {
						if (rel_time < 7880) {
							w8 = -0.86445266;
						} else {
							w8 = -0.6357348;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (hops < 4) {
					if (rel_time < 12186) {
						if (rel_time < 1199) {
							w8 = 0.7457347;
						} else {
							w8 = -0.089701235;
						}
					} else {
						if (size < 69) {
							w8 = 3.472276;
						} else {
							w8 = -0.09472918;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11853) {
							w8 = 1.5572753;
						} else {
							w8 = 5.3442454;
						}
					} else {
						if (rel_time < 1199) {
							w8 = 1.4687507;
						} else {
							w8 = 0.54036266;
						}
					}
				}
			} else {
				if (rel_time < 2238) {
					if (rel_time < 1285) {
						if (rel_time < 854) {
							w8 = 0.26987398;
						} else {
							w8 = -1.7378947;
						}
					} else {
						if (hops < 2) {
							w8 = -1.0126413;
						} else {
							w8 = 2.2162673;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3302) {
							w8 = -1.0808412;
						} else {
							w8 = -0.879368;
						}
					} else {
						if (hops < 4) {
							w8 = -0.63924664;
						} else {
							w8 = -0.27463663;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 497) {
						w8 = 1.1621928;
					} else {
						w8 = 1.6785704;
					}
				} else {
					w8 = 1.7552027;
				}
			} else {
				if (hops < 4) {
					w8 = 1.8134987;
				} else {
					w8 = 1.9462738;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 4790) {
					if (hops < 2) {
						if (rel_time < 1743) {
							w8 = 1.2306103;
						} else {
							w8 = 1.1408771;
						}
					} else {
						if (rel_time < 2346) {
							w8 = 1.2708772;
						} else {
							w8 = 1.2148234;
						}
					}
				} else {
					if (rel_time < 9066) {
						if (hops < 2) {
							w8 = 1.0617402;
						} else {
							w8 = 1.1111153;
						}
					} else {
						if (rel_time < 12101) {
							w8 = 1.160111;
						} else {
							w8 = 1.2871777;
						}
					}
				}
			} else {
				if (rel_time < 2346) {
					if (hops < 4) {
						if (rel_time < 1163) {
							w8 = 1.3390808;
						} else {
							w8 = 1.2800071;
						}
					} else {
						if (rel_time < 1743) {
							w8 = 1.4724423;
						} else {
							w8 = 1.2216315;
						}
					}
				} else {
					if (rel_time < 11512) {
						if (hops < 4) {
							w8 = 1.1980776;
						} else {
							w8 = 1.2574775;
						}
					} else {
						if (hops < 4) {
							w8 = 1.3079951;
						} else {
							w8 = 1.4056505;
						}
					}
				}
			}
		}
	}
	float w9;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1770) {
				if (rel_time < 1402) {
					if (rel_time < 497) {
						if (hops < 3) {
							w9 = -0.860377;
						} else {
							w9 = -0.7992001;
						}
					} else {
						if (hops < 2) {
							w9 = -0.8269933;
						} else {
							w9 = -0.32144377;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w9 = -1.07949;
						} else {
							w9 = -1.5143721;
						}
					} else {
						if (rel_time < 1744) {
							w9 = -0.2690259;
						} else {
							w9 = -0.21847938;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 2382) {
						if (hops < 2) {
							w9 = -0.44327027;
						} else {
							w9 = -0.2998602;
						}
					} else {
						if (rel_time < 7880) {
							w9 = -0.6639734;
						} else {
							w9 = -0.5476529;
						}
					}
				} else {
					if (rel_time < 9103) {
						if (rel_time < 8491) {
							w9 = -0.47658354;
						} else {
							w9 = -0.64793366;
						}
					} else {
						if (rel_time < 9714) {
							w9 = -0.26806614;
						} else {
							w9 = -0.46311012;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (prod != 2) {
					if (prod != 3) {
						if (rel_time < 12086) {
							w9 = -0.5066848;
						} else {
							w9 = 0.5742342;
						}
					} else {
						if (rel_time < 2324) {
							w9 = 0.092962444;
						} else {
							w9 = -0.124430396;
						}
					}
				} else {
					if (rel_time < 2411) {
						if (rel_time < 1199) {
							w9 = 0.31294614;
						} else {
							w9 = 1.0473467;
						}
					} else {
						if (rel_time < 3023) {
							w9 = 0.2544217;
						} else {
							w9 = -0.02949439;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 2411) {
						if (rel_time < 1629) {
							w9 = 0.08034744;
						} else {
							w9 = 0.740012;
						}
					} else {
						if (size < 69) {
							w9 = -0.44849092;
						} else {
							w9 = -0.023677658;
						}
					}
				} else {
					if (rel_time < 2087) {
						if (rel_time < 1015) {
							w9 = 1.0008194;
						} else {
							w9 = -2.7263086;
						}
					} else {
						if (rel_time < 2690) {
							w9 = 2.7949083;
						} else {
							w9 = 0.7368335;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				if (hops < 2) {
					w9 = 1.0057788;
				} else {
					w9 = 1.0536603;
				}
			} else {
				if (hops < 4) {
					w9 = 1.0887302;
				} else {
					w9 = 1.1697493;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 4790) {
					if (rel_time < 1163) {
						w9 = 0.7766965;
					} else {
						if (hops < 2) {
							w9 = 0.68777174;
						} else {
							w9 = 0.7374971;
						}
					}
				} else {
					if (rel_time < 7214) {
						if (hops < 2) {
							w9 = 0.61224127;
						} else {
							w9 = 0.65384316;
						}
					} else {
						if (rel_time < 11495) {
							w9 = 0.6849107;
						} else {
							w9 = 0.7593407;
						}
					}
				}
			} else {
				if (rel_time < 2957) {
					if (hops < 4) {
						if (rel_time < 1163) {
							w9 = 0.80389565;
						} else {
							w9 = 0.7719092;
						}
					} else {
						if (rel_time < 1743) {
							w9 = 0.8842315;
						} else {
							w9 = 0.7499255;
						}
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 4) {
							w9 = 0.71456593;
						} else {
							w9 = 0.75307566;
						}
					} else {
						w9 = 0.79312027;
					}
				}
			}
		}
	}
	float w10;
	if (size < 133) {
		if (cons != 5) {
			if (prod != 3) {
				if (rel_time < 1697) {
					if (rel_time < 1629) {
						if (rel_time < 1087) {
							w10 = -0.034920197;
						} else {
							w10 = -0.4503351;
						}
					} else {
						if (hops < 4) {
							w10 = 1.355935;
						} else {
							w10 = 7.5910807;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1770) {
							w10 = -0.6478739;
						} else {
							w10 = -0.32427284;
						}
					} else {
						if (rel_time < 2238) {
							w10 = -0.9453109;
						} else {
							w10 = -0.14904921;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1697) {
						if (hops < 2) {
							w10 = -0.16653559;
						} else {
							w10 = 0.4321415;
						}
					} else {
						if (rel_time < 12091) {
							w10 = -0.08000377;
						} else {
							w10 = 0.026543884;
						}
					}
				} else {
					if (rel_time < 1101) {
						w10 = 0.6559466;
					} else {
						if (rel_time < 2324) {
							w10 = 0.02737224;
						} else {
							w10 = 0.26764834;
						}
					}
				}
			}
		} else {
			if (rel_time < 12186) {
				if (rel_time < 2087) {
					if (rel_time < 1840) {
						if (rel_time < 1627) {
							w10 = 0.021160884;
						} else {
							w10 = 0.8960611;
						}
					} else {
						if (hops < 2) {
							w10 = -4.8272567;
						} else {
							w10 = -2.5987508;
						}
					}
				} else {
					if (rel_time < 2690) {
						if (size < 69) {
							w10 = 1.8037812;
						} else {
							w10 = 0.8384433;
						}
					} else {
						if (hops < 4) {
							w10 = -0.0011732103;
						} else {
							w10 = 0.60968566;
						}
					}
				}
			} else {
				if (rel_time < 12625) {
					if (hops < 4) {
						if (hops < 2) {
							w10 = 1.4049627;
						} else {
							w10 = 1.9975153;
						}
					} else {
						w10 = 2.9181411;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12777) {
							w10 = -0.2540055;
						} else {
							w10 = -0.15427063;
						}
					} else {
						if (hops < 3) {
							w10 = 0.2072523;
						} else {
							w10 = 0.36702418;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				if (hops < 2) {
					if (rel_time < 497) {
						w10 = 0.36727092;
					} else {
						w10 = 0.60574913;
					}
				} else {
					w10 = 0.6325201;
				}
			} else {
				if (hops < 4) {
					w10 = 0.6536057;
				} else {
					w10 = 0.7030505;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 2346) {
					if (hops < 2) {
						if (rel_time < 1163) {
							w10 = 0.4631477;
						} else {
							w10 = 0.42066064;
						}
					} else {
						w10 = 0.4625125;
					}
				} else {
					if (rel_time < 11495) {
						if (rel_time < 4790) {
							w10 = 0.42219168;
						} else {
							w10 = 0.39996544;
						}
					} else {
						if (rel_time < 12101) {
							w10 = 0.440047;
						} else {
							w10 = 0.4691952;
						}
					}
				}
			} else {
				if (rel_time < 4159) {
					if (rel_time < 3569) {
						if (rel_time < 2957) {
							w10 = 0.47397685;
						} else {
							w10 = 0.4402542;
						}
					} else {
						w10 = 0.5098415;
					}
				} else {
					if (rel_time < 7235) {
						if (rel_time < 6012) {
							w10 = 0.4287934;
						} else {
							w10 = 0.38832244;
						}
					} else {
						if (hops < 4) {
							w10 = 0.44098696;
						} else {
							w10 = 0.47689602;
						}
					}
				}
			}
		}
	}
	float w11;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 497) {
				if (hops < 2) {
					w11 = -0.52489614;
				} else {
					if (hops < 4) {
						w11 = -0.48221692;
					} else {
						if (rel_time < 432) {
							w11 = -0.36551207;
						} else {
							w11 = -0.4512446;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 10937) {
						if (rel_time < 1770) {
							w11 = -0.42274246;
						} else {
							w11 = -0.2791856;
						}
					} else {
						if (rel_time < 11512) {
							w11 = 0.12111633;
						} else {
							w11 = -0.053998716;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1402) {
							w11 = 0.28612316;
						} else {
							w11 = -0.21168391;
						}
					} else {
						if (rel_time < 2958) {
							w11 = -0.37687892;
						} else {
							w11 = -0.2161893;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 1199) {
					if (prod != 0) {
						if (hops < 3) {
							w11 = 0.19192468;
						} else {
							w11 = 0.42249608;
						}
					} else {
						if (hops < 3) {
							w11 = 0.7483504;
						} else {
							w11 = 0.292827;
						}
					}
				} else {
					if (rel_time < 1627) {
						if (hops < 3) {
							w11 = -0.3623769;
						} else {
							w11 = -1.9800898;
						}
					} else {
						if (rel_time < 1840) {
							w11 = 0.35307103;
						} else {
							w11 = -0.054113474;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 1629) {
						if (rel_time < 1199) {
							w11 = 0.50127363;
						} else {
							w11 = -1.2725447;
						}
					} else {
						if (rel_time < 1697) {
							w11 = 3.5465825;
						} else {
							w11 = 0.19102894;
						}
					}
				} else {
					if (rel_time < 11853) {
						if (rel_time < 1015) {
							w11 = 1.4055195;
						} else {
							w11 = 0.5128612;
						}
					} else {
						w11 = 1.7539123;
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 3) {
				w11 = 0.37185058;
			} else {
				if (hops < 4) {
					w11 = 0.39237976;
				} else {
					w11 = 0.4225441;
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 9046) {
					if (rel_time < 2936) {
						if (rel_time < 1163) {
							w11 = 0.27805334;
						} else {
							w11 = 0.25095388;
						}
					} else {
						if (rel_time < 6603) {
							w11 = 0.2138677;
						} else {
							w11 = 0.24175112;
						}
					}
				} else {
					if (rel_time < 9659) {
						if (rel_time < 9655) {
							w11 = 0.5529594;
						} else {
							w11 = 0.35286927;
						}
					} else {
						if (rel_time < 10266) {
							w11 = 0.08616125;
						} else {
							w11 = 0.23936947;
						}
					}
				}
			} else {
				if (rel_time < 5401) {
					if (rel_time < 1743) {
						if (hops < 4) {
							w11 = 0.2766312;
						} else {
							w11 = 0.34164104;
						}
					} else {
						if (rel_time < 5380) {
							w11 = 0.2671505;
						} else {
							w11 = 0.2874628;
						}
					}
				} else {
					if (rel_time < 7827) {
						if (hops < 4) {
							w11 = 0.22477756;
						} else {
							w11 = 0.28657004;
						}
					} else {
						if (rel_time < 11512) {
							w11 = 0.26117036;
						} else {
							w11 = 0.29376194;
						}
					}
				}
			}
		}
	}
	float w12;
	if (size < 133) {
		if (cons != 5) {
			if (prod != 3) {
				if (rel_time < 1697) {
					if (rel_time < 1629) {
						if (size < 69) {
							w12 = -0.13633649;
						} else {
							w12 = 0.065256536;
						}
					} else {
						if (hops < 3) {
							w12 = -0.16721845;
						} else {
							w12 = 2.6685;
						}
					}
				} else {
					if (rel_time < 2850) {
						if (size < 37) {
							w12 = -0.14486516;
						} else {
							w12 = -0.33648822;
						}
					} else {
						if (hops < 3) {
							w12 = -0.14853492;
						} else {
							w12 = -0.047332;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 12101) {
						if (rel_time < 11490) {
							w12 = -0.026045008;
						} else {
							w12 = -0.12577777;
						}
					} else {
						if (rel_time < 12700) {
							w12 = 0.107238166;
						} else {
							w12 = -0.06181557;
						}
					}
				} else {
					if (rel_time < 2324) {
						if (rel_time < 1101) {
							w12 = 0.21711448;
						} else {
							w12 = -0.08021785;
						}
					} else {
						if (hops < 4) {
							w12 = 0.13502733;
						} else {
							w12 = 0.22908013;
						}
					}
				}
			}
		} else {
			if (rel_time < 2087) {
				if (rel_time < 1840) {
					if (size < 69) {
						if (rel_time < 1015) {
							w12 = 0.40917918;
						} else {
							w12 = -0.6591439;
						}
					} else {
						if (hops < 4) {
							w12 = 0.24142118;
						} else {
							w12 = 0.8805899;
						}
					}
				} else {
					if (hops < 2) {
						w12 = -2.8763778;
					} else {
						if (hops < 4) {
							w12 = -1.7748299;
						} else {
							w12 = -0.23563312;
						}
					}
				}
			} else {
				if (rel_time < 2690) {
					if (size < 69) {
						if (hops < 3) {
							w12 = 1.2784122;
						} else {
							w12 = 0.76252645;
						}
					} else {
						if (hops < 3) {
							w12 = 0.3816598;
						} else {
							w12 = 0.73651546;
						}
					}
				} else {
					if (rel_time < 12186) {
						if (hops < 2) {
							w12 = -0.14303508;
						} else {
							w12 = 0.11423208;
						}
					} else {
						if (rel_time < 12625) {
							w12 = 1.1030005;
						} else {
							w12 = 0.09550314;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 768) {
			if (hops < 2) {
				if (rel_time < 497) {
					w12 = 0.09627686;
				} else {
					w12 = 0.2150491;
				}
			} else {
				if (hops < 4) {
					w12 = 0.23328121;
				} else {
					w12 = 0.25395784;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 4790) {
					if (rel_time < 4769) {
						if (rel_time < 1743) {
							w12 = 0.1678959;
						} else {
							w12 = 0.15123804;
						}
					} else {
						w12 = 0.1872658;
					}
				} else {
					if (rel_time < 5380) {
						w12 = 0.08978024;
					} else {
						if (rel_time < 5401) {
							w12 = 0.189788;
						} else {
							w12 = 0.14396004;
						}
					}
				}
			} else {
				if (rel_time < 10882) {
					if (rel_time < 9066) {
						if (rel_time < 4159) {
							w12 = 0.17175159;
						} else {
							w12 = 0.15290652;
						}
					} else {
						if (rel_time < 10288) {
							w12 = 0.18264262;
						} else {
							w12 = 0.21765907;
						}
					}
				} else {
					if (rel_time < 11495) {
						if (hops < 4) {
							w12 = 0.094540454;
						} else {
							w12 = 0.20785335;
						}
					} else {
						if (rel_time < 11512) {
							w12 = 0.14993493;
						} else {
							w12 = 0.18638901;
						}
					}
				}
			}
		}
	}
	float w13;
	if (size < 37) {
		if (rel_time < 497) {
			if (hops < 2) {
				w13 = -0.26063618;
			} else {
				if (hops < 4) {
					if (rel_time < 432) {
						if (hops < 3) {
							w13 = -0.19381939;
						} else {
							w13 = -0.26056504;
						}
					} else {
						if (hops < 3) {
							w13 = -0.2537433;
						} else {
							w13 = -0.22230224;
						}
					}
				} else {
					if (rel_time < 432) {
						w13 = -0.16622376;
					} else {
						w13 = -0.21716271;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 2994) {
					if (hops < 2) {
						if (rel_time < 1770) {
							w13 = -0.19803955;
						} else {
							w13 = 0.010382524;
						}
					} else {
						if (rel_time < 972) {
							w13 = -0.2712238;
						} else {
							w13 = 0.17551033;
						}
					}
				} else {
					if (rel_time < 9103) {
						if (rel_time < 8491) {
							w13 = -0.10709379;
						} else {
							w13 = -0.24514428;
						}
					} else {
						if (rel_time < 9714) {
							w13 = 0.22943854;
						} else {
							w13 = -0.12101302;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1770) {
						if (rel_time < 972) {
							w13 = -0.04346977;
						} else {
							w13 = -0.5848308;
						}
					} else {
						if (rel_time < 10937) {
							w13 = -0.10184367;
						} else {
							w13 = -0.197979;
						}
					}
				} else {
					if (rel_time < 1770) {
						if (rel_time < 972) {
							w13 = 0.10857444;
						} else {
							w13 = 0.5285949;
						}
					} else {
						if (rel_time < 7880) {
							w13 = -0.16997443;
						} else {
							w13 = -0.031218115;
						}
					}
				}
			}
		}
	} else {
		if (prod != 1) {
			if (hops < 2) {
				if (size < 69) {
					if (rel_time < 2087) {
						if (rel_time < 1015) {
							w13 = 0.4395739;
						} else {
							w13 = -1.4633405;
						}
					} else {
						if (rel_time < 2690) {
							w13 = 0.9049587;
						} else {
							w13 = -0.22551318;
						}
					}
				} else {
					if (rel_time < 12186) {
						if (prod != 4) {
							w13 = 0.057024308;
						} else {
							w13 = -0.014992232;
						}
					} else {
						if (prod != 4) {
							w13 = -0.08714309;
						} else {
							w13 = -0.55169815;
						}
					}
				}
			} else {
				if (size < 69) {
					if (hops < 3) {
						if (rel_time < 2087) {
							w13 = 0.12716044;
						} else {
							w13 = 0.52300614;
						}
					} else {
						if (rel_time < 2087) {
							w13 = -0.6370478;
						} else {
							w13 = 0.09006401;
						}
					}
				} else {
					if (hops < 3) {
						if (size < 133) {
							w13 = -0.089884005;
						} else {
							w13 = 0.0941064;
						}
					} else {
						if (rel_time < 1087) {
							w13 = 0.3374171;
						} else {
							w13 = 0.0775159;
						}
					}
				}
			}
		} else {
			if (rel_time < 1697) {
				if (rel_time < 1285) {
					if (rel_time < 854) {
						if (hops < 4) {
							w13 = 0.2117167;
						} else {
							w13 = -0.4283565;
						}
					} else {
						if (hops < 2) {
							w13 = 0.18971519;
						} else {
							w13 = -0.64745456;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1629) {
							w13 = -2.6207917;
						} else {
							w13 = -1.0601505;
						}
					} else {
						if (rel_time < 1629) {
							w13 = 2.1018393;
						} else {
							w13 = 1.2519346;
						}
					}
				}
			} else {
				if (rel_time < 7737) {
					if (hops < 2) {
						if (rel_time < 2238) {
							w13 = 0.24918619;
						} else {
							w13 = -0.11170774;
						}
					} else {
						if (rel_time < 2850) {
							w13 = -0.33646724;
						} else {
							w13 = -0.15085822;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w13 = -0.0051646014;
						} else {
							w13 = -0.08676141;
						}
					} else {
						if (rel_time < 8799) {
							w13 = 0.051681776;
						} else {
							w13 = 0.13145368;
						}
					}
				}
			}
		}
	}
	float w14;
	if (hops < 4) {
		if (size < 133) {
			if (rel_time < 12186) {
				if (rel_time < 1199) {
					if (size < 37) {
						if (rel_time < 497) {
							w14 = -0.14598417;
						} else {
							w14 = -0.052505136;
						}
					} else {
						if (rel_time < 1087) {
							w14 = 0.17830114;
						} else {
							w14 = 0.049056;
						}
					}
				} else {
					if (rel_time < 2307) {
						if (prod != 0) {
							w14 = -0.029805535;
						} else {
							w14 = -0.6060171;
						}
					} else {
						if (rel_time < 2690) {
							w14 = 0.17783718;
						} else {
							w14 = -0.029486204;
						}
					}
				}
			} else {
				if (size < 69) {
					if (hops < 3) {
						if (hops < 2) {
							w14 = 0.5144026;
						} else {
							w14 = 0.8136202;
						}
					} else {
						w14 = 0.45844814;
					}
				} else {
					if (prod != 4) {
						if (hops < 2) {
							w14 = -0.05229499;
						} else {
							w14 = 0.1314186;
						}
					} else {
						if (hops < 2) {
							w14 = -0.33120874;
						} else {
							w14 = -0.1153625;
						}
					}
				}
			}
		} else {
			if (rel_time < 4159) {
				if (rel_time < 4158) {
					if (rel_time < 1163) {
						if (hops < 3) {
							w14 = 0.0876494;
						} else {
							w14 = 0.04526256;
						}
					} else {
						if (hops < 2) {
							w14 = 0.06603435;
						} else {
							w14 = 0.0595522;
						}
					}
				} else {
					w14 = 0.09395321;
				}
			} else {
				if (rel_time < 7235) {
					if (rel_time < 6012) {
						if (rel_time < 4180) {
							w14 = 0.014340765;
						} else {
							w14 = 0.056901462;
						}
					} else {
						if (hops < 2) {
							w14 = 0.06085697;
						} else {
							w14 = 0.021318143;
						}
					}
				} else {
					if (rel_time < 10882) {
						if (rel_time < 10877) {
							w14 = 0.06431003;
						} else {
							w14 = 0.09417517;
						}
					} else {
						if (rel_time < 11490) {
							w14 = 0.013126941;
						} else {
							w14 = 0.0638977;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 69) {
				if (rel_time < 1285) {
					if (rel_time < 972) {
						if (rel_time < 854) {
							w14 = -0.1889251;
						} else {
							w14 = 0.06525376;
						}
					} else {
						w14 = -0.9902399;
					}
				} else {
					if (rel_time < 1697) {
						if (rel_time < 1629) {
							w14 = 0.2098378;
						} else {
							w14 = 1.5856062;
						}
					} else {
						if (rel_time < 1770) {
							w14 = 0.2313267;
						} else {
							w14 = -0.022265065;
						}
					}
				}
			} else {
				if (rel_time < 1199) {
					if (prod != 4) {
						if (rel_time < 1163) {
							w14 = 0.058120735;
						} else {
							w14 = 0.36194977;
						}
					} else {
						w14 = 0.56392664;
					}
				} else {
					if (rel_time < 1697) {
						if (rel_time < 1629) {
							w14 = -0.31053126;
						} else {
							w14 = -2.4354718;
						}
					} else {
						if (rel_time < 1840) {
							w14 = 0.29962644;
						} else {
							w14 = 0.07448497;
						}
					}
				}
			}
		} else {
			if (rel_time < 1015) {
				w14 = 0.9356737;
			} else {
				if (rel_time < 3301) {
					if (rel_time < 2087) {
						if (rel_time < 1627) {
							w14 = 0.22323863;
						} else {
							w14 = 0.112532474;
						}
					} else {
						if (rel_time < 2690) {
							w14 = 0.9194886;
						} else {
							w14 = 0.5026299;
						}
					}
				} else {
					if (rel_time < 11242) {
						if (rel_time < 10966) {
							w14 = 0.21676219;
						} else {
							w14 = 0.02765582;
						}
					} else {
						if (rel_time < 11853) {
							w14 = 0.39146104;
						} else {
							w14 = 0.5781656;
						}
					}
				}
			}
		}
	}
	float w15;
	if (size < 37) {
		if (rel_time < 10326) {
			if (rel_time < 9714) {
				if (rel_time < 9103) {
					if (rel_time < 8491) {
						if (rel_time < 7880) {
							w15 = -0.061152946;
						} else {
							w15 = 0.07691919;
						}
					} else {
						if (hops < 2) {
							w15 = -0.042666834;
						} else {
							w15 = -0.19547564;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 9681) {
							w15 = 0.16222046;
						} else {
							w15 = 0.13137569;
						}
					} else {
						if (hops < 4) {
							w15 = 0.008619186;
						} else {
							w15 = 0.16386147;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 10293) {
						if (hops < 2) {
							w15 = -0.2751595;
						} else {
							w15 = -0.24039021;
						}
					} else {
						if (hops < 2) {
							w15 = -0.25880158;
						} else {
							w15 = -0.28792045;
						}
					}
				} else {
					if (rel_time < 10293) {
						if (hops < 4) {
							w15 = -0.16520564;
						} else {
							w15 = -0.19060528;
						}
					} else {
						if (hops < 4) {
							w15 = -0.2523029;
						} else {
							w15 = -0.3816705;
						}
					}
				}
			}
		} else {
			if (rel_time < 10937) {
				if (hops < 2) {
					if (rel_time < 10901) {
						w15 = -0.20082068;
					} else {
						if (rel_time < 10906) {
							w15 = -0.059979416;
						} else {
							w15 = 0.004546441;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 10901) {
							w15 = 0.3369624;
						} else {
							w15 = 0.38904938;
						}
					} else {
						if (hops < 4) {
							w15 = 0.13519004;
						} else {
							w15 = -0.072745286;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11512) {
						w15 = 0.19199273;
					} else {
						w15 = 0.087084115;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11512) {
							w15 = -0.28341183;
						} else {
							w15 = -0.22884773;
						}
					} else {
						if (hops < 4) {
							w15 = -0.107068814;
						} else {
							w15 = 0.0860176;
						}
					}
				}
			}
		}
	} else {
		if (prod != 1) {
			if (hops < 2) {
				if (size < 69) {
					if (rel_time < 11853) {
						if (rel_time < 1015) {
							w15 = 0.19264323;
						} else {
							w15 = -0.1867321;
						}
					} else {
						if (rel_time < 12186) {
							w15 = 8.002843;
						} else {
							w15 = 0.30881938;
						}
					}
				} else {
					if (prod != 2) {
						if (size < 133) {
							w15 = -0.014243448;
						} else {
							w15 = 0.040173125;
						}
					} else {
						if (rel_time < 12186) {
							w15 = 0.0663533;
						} else {
							w15 = -0.107250705;
						}
					}
				}
			} else {
				if (size < 69) {
					if (hops < 3) {
						if (rel_time < 1627) {
							w15 = 0.6657335;
						} else {
							w15 = 0.2459416;
						}
					} else {
						if (hops < 4) {
							w15 = -0.104631476;
						} else {
							w15 = 0.19093291;
						}
					}
				} else {
					if (hops < 3) {
						if (prod != 2) {
							w15 = 0.0022635132;
						} else {
							w15 = -0.12235104;
						}
					} else {
						if (rel_time < 3546) {
							w15 = 0.07124143;
						} else {
							w15 = 0.031572532;
						}
					}
				}
			}
		} else {
			if (rel_time < 1697) {
				if (rel_time < 1285) {
					if (hops < 2) {
						if (rel_time < 854) {
							w15 = 0.24020968;
						} else {
							w15 = 0.12580588;
						}
					} else {
						if (rel_time < 854) {
							w15 = -0.04991633;
						} else {
							w15 = -0.32519507;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1629) {
							w15 = -1.566911;
						} else {
							w15 = -0.6246063;
						}
					} else {
						if (rel_time < 1629) {
							w15 = 1.2665805;
						} else {
							w15 = 0.6681565;
						}
					}
				}
			} else {
				if (rel_time < 7737) {
					if (hops < 2) {
						if (rel_time < 2238) {
							w15 = 0.16149382;
						} else {
							w15 = -0.055259474;
						}
					} else {
						if (rel_time < 3302) {
							w15 = -0.18029357;
						} else {
							w15 = -0.07596506;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w15 = 0.008700865;
						} else {
							w15 = -0.097296;
						}
					} else {
						if (rel_time < 9416) {
							w15 = 0.007855324;
						} else {
							w15 = 0.062624775;
						}
					}
				}
			}
		}
	}
	float w16;
	if (rel_time < 2324) {
		if (rel_time < 1840) {
			if (rel_time < 1770) {
				if (hops < 2) {
					if (rel_time < 1015) {
						if (rel_time < 497) {
							w16 = -0.07304973;
						} else {
							w16 = 0.103619695;
						}
					} else {
						if (size < 69) {
							w16 = -0.2026631;
						} else {
							w16 = -0.029442398;
						}
					}
				} else {
					if (hops < 3) {
						if (prod != 0) {
							w16 = 0.0505726;
						} else {
							w16 = 0.39954874;
						}
					} else {
						if (rel_time < 1199) {
							w16 = 0.068916224;
						} else {
							w16 = -0.1398624;
						}
					}
				}
			} else {
				if (hops < 2) {
					w16 = 0.013912893;
				} else {
					if (size < 69) {
						w16 = -2.3607118;
					} else {
						if (hops < 3) {
							w16 = 0.30655402;
						} else {
							w16 = 0.46836725;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 2) {
					if (prod != 4) {
						if (rel_time < 2087) {
							w16 = 0.045909707;
						} else {
							w16 = 0.116516225;
						}
					} else {
						w16 = 0.011941659;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 2238) {
							w16 = 0.33325082;
						} else {
							w16 = -0.31679207;
						}
					} else {
						if (rel_time < 2238) {
							w16 = -0.44520733;
						} else {
							w16 = -0.1124198;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w16 = -0.82517064;
					} else {
						w16 = -0.76601887;
					}
				} else {
					if (rel_time < 1841) {
						w16 = -0.026820509;
					} else {
						w16 = 0.1203715;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 69) {
				if (rel_time < 9416) {
					if (hops < 4) {
						if (rel_time < 5403) {
							w16 = -0.027755668;
						} else {
							w16 = -0.060358334;
						}
					} else {
						if (size < 37) {
							w16 = -0.052763082;
						} else {
							w16 = 0.060941905;
						}
					}
				} else {
					if (rel_time < 10180) {
						if (hops < 4) {
							w16 = 0.055501122;
						} else {
							w16 = 0.10872497;
						}
					} else {
						if (rel_time < 10634) {
							w16 = -0.1340292;
						} else {
							w16 = 0.005859056;
						}
					}
				}
			} else {
				if (rel_time < 2411) {
					if (rel_time < 2346) {
						if (hops < 4) {
							w16 = 0.030841831;
						} else {
							w16 = -0.018255724;
						}
					} else {
						if (hops < 2) {
							w16 = 0.017274207;
						} else {
							w16 = 0.3212501;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 2920) {
							w16 = -0.11305403;
						} else {
							w16 = 0.018210158;
						}
					} else {
						if (hops < 2) {
							w16 = 0.042209987;
						} else {
							w16 = -0.061964966;
						}
					}
				}
			}
		} else {
			if (rel_time < 2690) {
				if (hops < 2) {
					if (rel_time < 2411) {
						w16 = 0.5981837;
					} else {
						w16 = 0.5276553;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w16 = 0.26889256;
						} else {
							w16 = 0.2254226;
						}
					} else {
						if (rel_time < 2411) {
							w16 = 0.39738226;
						} else {
							w16 = 0.48790693;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11853) {
						if (rel_time < 11242) {
							w16 = -0.08472899;
						} else {
							w16 = -0.25473627;
						}
					} else {
						if (rel_time < 12186) {
							w16 = 5.1573787;
						} else {
							w16 = 0.18539137;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3301) {
							w16 = 0.4718995;
						} else {
							w16 = 0.18016635;
						}
					} else {
						if (rel_time < 11853) {
							w16 = -0.0055887057;
						} else {
							w16 = 0.35556927;
						}
					}
				}
			}
		}
	}
	float w17;
	if (hops < 4) {
		if (rel_time < 12091) {
			if (size < 133) {
				if (rel_time < 2347) {
					if (prod != 0) {
						if (prod != 2) {
							w17 = -0.013333075;
						} else {
							w17 = 0.079282805;
						}
					} else {
						if (rel_time < 1627) {
							w17 = -0.033081856;
						} else {
							w17 = -0.47635737;
						}
					}
				} else {
					if (rel_time < 2690) {
						if (cons != 5) {
							w17 = -0.024282176;
						} else {
							w17 = 0.16548574;
						}
					} else {
						if (rel_time < 2920) {
							w17 = -0.08420735;
						} else {
							w17 = -0.0076690624;
						}
					}
				}
			} else {
				if (rel_time < 10882) {
					if (rel_time < 10877) {
						if (rel_time < 10288) {
							w17 = 0.018136388;
						} else {
							w17 = -0.17140788;
						}
					} else {
						if (hops < 2) {
							w17 = 0.02262513;
						} else {
							w17 = 0.050062187;
						}
					}
				} else {
					if (rel_time < 10901) {
						w17 = -0.029851396;
					} else {
						if (rel_time < 11490) {
							w17 = -0.0057353913;
						} else {
							w17 = 0.008016023;
						}
					}
				}
			}
		} else {
			if (size < 69) {
				if (rel_time < 12186) {
					if (hops < 2) {
						w17 = 3.3236547;
					} else {
						w17 = 9.215145;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12191) {
							w17 = 0.09406239;
						} else {
							w17 = 0.13662718;
						}
					} else {
						if (hops < 3) {
							w17 = 0.31809327;
						} else {
							w17 = 0.17493199;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (rel_time < 12771) {
						if (prod != 2) {
							w17 = 0.032906607;
						} else {
							w17 = -0.0104113715;
						}
					} else {
						if (hops < 2) {
							w17 = -0.067508444;
						} else {
							w17 = 0.18144737;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12630) {
							w17 = -0.3339009;
						} else {
							w17 = -0.0129522635;
						}
					} else {
						if (rel_time < 12630) {
							w17 = 0.005506703;
						} else {
							w17 = -0.23204343;
						}
					}
				}
			}
		}
	} else {
		if (cons != 5) {
			if (rel_time < 2850) {
				if (size < 37) {
					if (rel_time < 972) {
						if (rel_time < 497) {
							w17 = -0.047792196;
						} else {
							w17 = 0.036129795;
						}
					} else {
						if (rel_time < 1770) {
							w17 = 0.3096395;
						} else {
							w17 = 0.03560124;
						}
					}
				} else {
					if (rel_time < 2238) {
						if (rel_time < 1629) {
							w17 = -0.108193;
						} else {
							w17 = 0.10494899;
						}
					} else {
						if (size < 133) {
							w17 = -0.30994704;
						} else {
							w17 = -0.01097459;
						}
					}
				}
			} else {
				if (size < 37) {
					if (rel_time < 10901) {
						if (rel_time < 10293) {
							w17 = -0.03185791;
						} else {
							w17 = -0.27031794;
						}
					} else {
						if (rel_time < 11512) {
							w17 = 0.10902188;
						} else {
							w17 = 0.0006742245;
						}
					}
				} else {
					if (rel_time < 4072) {
						if (size < 133) {
							w17 = 0.11866555;
						} else {
							w17 = 0.0006838438;
						}
					} else {
						if (rel_time < 12156) {
							w17 = 0.04154071;
						} else {
							w17 = -0.038307097;
						}
					}
				}
			}
		} else {
			if (rel_time < 3301) {
				if (rel_time < 1015) {
					w17 = 0.45871755;
				} else {
					if (rel_time < 2382) {
						if (size < 69) {
							w17 = 0.054456722;
						} else {
							w17 = 0.22857265;
						}
					} else {
						if (rel_time < 2994) {
							w17 = 0.2960795;
						} else {
							w17 = 0.23228489;
						}
					}
				}
			} else {
				if (rel_time < 4244) {
					if (rel_time < 4216) {
						if (rel_time < 3634) {
							w17 = 0.0013002602;
						} else {
							w17 = -0.031937;
						}
					} else {
						w17 = -0.0943716;
					}
				} else {
					if (size < 69) {
						if (rel_time < 11242) {
							w17 = 0.056657385;
						} else {
							w17 = 0.14559087;
						}
					} else {
						if (rel_time < 12186) {
							w17 = 0.037498865;
						} else {
							w17 = -0.043852475;
						}
					}
				}
			}
		}
	}
	float w18;
	if (hops < 4) {
		if (rel_time < 12091) {
			if (size < 133) {
				if (prod != 3) {
					if (rel_time < 1840) {
						if (prod != 1) {
							w18 = -0.012709744;
						} else {
							w18 = 0.069519885;
						}
					} else {
						if (rel_time < 2087) {
							w18 = -0.25179332;
						} else {
							w18 = -0.007955092;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1101) {
							w18 = -0.2607658;
						} else {
							w18 = -0.00469851;
						}
					} else {
						if (rel_time < 1101) {
							w18 = 0.16678505;
						} else {
							w18 = 0.014684148;
						}
					}
				}
			} else {
				if (rel_time < 768) {
					if (hops < 3) {
						if (hops < 2) {
							w18 = 0.0066636303;
						} else {
							w18 = 0.03682978;
						}
					} else {
						w18 = -0.07387042;
					}
				} else {
					if (rel_time < 10882) {
						if (rel_time < 9066) {
							w18 = 0.010417658;
						} else {
							w18 = 0.020726686;
						}
					} else {
						if (hops < 3) {
							w18 = 0.006216246;
						} else {
							w18 = -0.010439744;
						}
					}
				}
			}
		} else {
			if (size < 69) {
				if (rel_time < 12186) {
					if (hops < 2) {
						w18 = 2.1419055;
					} else {
						w18 = 5.792376;
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12191) {
							w18 = 0.05649492;
						} else {
							w18 = 0.08210602;
						}
					} else {
						if (hops < 3) {
							w18 = 0.19094248;
						} else {
							w18 = 0.10502254;
						}
					}
				}
			} else {
				if (prod != 4) {
					if (rel_time < 12695) {
						if (rel_time < 12160) {
							w18 = 0.015285241;
						} else {
							w18 = -0.03385539;
						}
					} else {
						if (hops < 2) {
							w18 = -0.01529283;
						} else {
							w18 = 0.068644255;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12630) {
							w18 = -0.20052771;
						} else {
							w18 = -0.0077871317;
						}
					} else {
						if (rel_time < 12630) {
							w18 = 0.0033108478;
						} else {
							w18 = -0.13932197;
						}
					}
				}
			}
		}
	} else {
		if (cons != 5) {
			if (rel_time < 2850) {
				if (prod != 6) {
					if (rel_time < 1101) {
						if (prod != 4) {
							w18 = -0.0428083;
						} else {
							w18 = 0.3262061;
						}
					} else {
						if (rel_time < 1629) {
							w18 = -0.33399907;
						} else {
							w18 = -0.05680703;
						}
					}
				} else {
					if (rel_time < 1163) {
						if (rel_time < 768) {
							w18 = -0.023323573;
						} else {
							w18 = 0.021949999;
						}
					} else {
						if (rel_time < 1402) {
							w18 = 0.27569908;
						} else {
							w18 = 0.032307968;
						}
					}
				}
			} else {
				if (prod != 6) {
					if (rel_time < 4072) {
						if (rel_time < 3531) {
							w18 = 0.028638229;
						} else {
							w18 = 0.16687106;
						}
					} else {
						if (rel_time < 4158) {
							w18 = -0.03486007;
						} else {
							w18 = 0.031597618;
						}
					}
				} else {
					if (rel_time < 8455) {
						if (rel_time < 7235) {
							w18 = -0.012085696;
						} else {
							w18 = -0.073261835;
						}
					} else {
						if (rel_time < 9066) {
							w18 = 0.08086198;
						} else {
							w18 = 0.012744223;
						}
					}
				}
			}
		} else {
			if (rel_time < 3301) {
				if (rel_time < 1015) {
					w18 = 0.27569804;
				} else {
					if (rel_time < 2382) {
						if (rel_time < 1840) {
							w18 = 0.123070024;
						} else {
							w18 = -0.018523756;
						}
					} else {
						if (rel_time < 2995) {
							w18 = 0.17437321;
						} else {
							w18 = 0.124971904;
						}
					}
				}
			} else {
				if (rel_time < 5466) {
					if (rel_time < 5439) {
						if (rel_time < 4244) {
							w18 = -0.01942347;
						} else {
							w18 = 0.015564034;
						}
					} else {
						w18 = -0.12429593;
					}
				} else {
					if (rel_time < 6965) {
						if (rel_time < 6663) {
							w18 = 0.03751039;
						} else {
							w18 = 0.1876867;
						}
					} else {
						if (rel_time < 7576) {
							w18 = -0.042618867;
						} else {
							w18 = 0.034027826;
						}
					}
				}
			}
		}
	}
	float w19;
	if (prod != 0) {
		if (hops < 3) {
			if (rel_time < 1627) {
				if (rel_time < 1285) {
					if (size < 37) {
						if (hops < 2) {
							w19 = 0.01691433;
						} else {
							w19 = -0.097996734;
						}
					} else {
						if (rel_time < 1163) {
							w19 = 0.032018255;
						} else {
							w19 = -0.021771036;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1402) {
							w19 = -0.118937254;
						} else {
							w19 = 2.2403429;
						}
					} else {
						if (rel_time < 1402) {
							w19 = 0.6798799;
						} else {
							w19 = 1.7787924;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1697) {
						if (size < 69) {
							w19 = -0.39928395;
						} else {
							w19 = -0.003104752;
						}
					} else {
						if (rel_time < 1712) {
							w19 = 0.16895716;
						} else {
							w19 = 0.0032098908;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 2920) {
							w19 = -0.06250956;
						} else {
							w19 = -0.006747046;
						}
					} else {
						if (rel_time < 3023) {
							w19 = 0.108226016;
						} else {
							w19 = -0.108014576;
						}
					}
				}
			}
		} else {
			if (rel_time < 1629) {
				if (rel_time < 1199) {
					if (prod != 4) {
						if (rel_time < 854) {
							w19 = -0.058662146;
						} else {
							w19 = 0.00093894993;
						}
					} else {
						if (hops < 4) {
							w19 = 0.22436832;
						} else {
							w19 = 0.19604668;
						}
					}
				} else {
					if (size < 37) {
						if (hops < 4) {
							w19 = -0.5098905;
						} else {
							w19 = 0.16570498;
						}
					} else {
						if (rel_time < 1285) {
							w19 = -0.2129126;
						} else {
							w19 = -0.11173087;
						}
					}
				}
			} else {
				if (rel_time < 1697) {
					if (size < 69) {
						w19 = 0.70847046;
					} else {
						if (hops < 4) {
							w19 = 0.066056214;
						} else {
							w19 = -1.4659765;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 2850) {
							w19 = -0.10682162;
						} else {
							w19 = 0.0032584388;
						}
					} else {
						if (rel_time < 1840) {
							w19 = 0.084235266;
						} else {
							w19 = 0.015402667;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 1015) {
				if (rel_time < 973) {
					w19 = 0.12824689;
				} else {
					w19 = 0.041779824;
				}
			} else {
				if (rel_time < 2087) {
					if (rel_time < 1402) {
						w19 = -0.30718777;
					} else {
						if (rel_time < 1627) {
							w19 = -0.17596574;
						} else {
							w19 = -0.2096176;
						}
					}
				} else {
					if (rel_time < 2690) {
						if (rel_time < 2411) {
							w19 = 0.29687026;
						} else {
							w19 = 0.25390396;
						}
					} else {
						if (rel_time < 10631) {
							w19 = -0.05762702;
						} else {
							w19 = 0.009553873;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1015) {
					w19 = -0.3777233;
				} else {
					if (rel_time < 1627) {
						w19 = 0.893726;
					} else {
						if (rel_time < 2087) {
							w19 = -0.1872082;
						} else {
							w19 = 0.110115804;
						}
					}
				}
			} else {
				if (rel_time < 2087) {
					if (rel_time < 1015) {
						if (hops < 4) {
							w19 = 0.2281616;
						} else {
							w19 = 0.16570617;
						}
					} else {
						if (rel_time < 1840) {
							w19 = -0.6075579;
						} else {
							w19 = -0.12025704;
						}
					}
				} else {
					if (rel_time < 11242) {
						if (rel_time < 10631) {
							w19 = -0.0018048286;
						} else {
							w19 = -0.1325105;
						}
					} else {
						if (rel_time < 12186) {
							w19 = 0.112558715;
						} else {
							w19 = 0.06175937;
						}
					}
				}
			}
		}
	}
	float w20;
	if (prod != 0) {
		if (hops < 3) {
			if (rel_time < 3023) {
				if (prod != 4) {
					if (rel_time < 1200) {
						if (rel_time < 1199) {
							w20 = -0.0077137672;
						} else {
							w20 = -0.12384051;
						}
					} else {
						if (rel_time < 1629) {
							w20 = 0.17415258;
						} else {
							w20 = 0.016949091;
						}
					}
				} else {
					if (rel_time < 1627) {
						if (rel_time < 1087) {
							w20 = 0.06283522;
						} else {
							w20 = 1.4363631;
						}
					} else {
						if (hops < 2) {
							w20 = 0.0073927017;
						} else {
							w20 = -0.19808303;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (prod != 2) {
						if (rel_time < 3462) {
							w20 = -0.110086;
						} else {
							w20 = 0.0009823353;
						}
					} else {
						if (hops < 2) {
							w20 = 0.022124413;
						} else {
							w20 = -0.064803675;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 3461) {
							w20 = -0.057820108;
						} else {
							w20 = 0.005712894;
						}
					} else {
						if (rel_time < 7737) {
							w20 = -0.086225085;
						} else {
							w20 = -0.041780338;
						}
					}
				}
			}
		} else {
			if (rel_time < 1629) {
				if (rel_time < 1199) {
					if (prod != 4) {
						if (rel_time < 854) {
							w20 = -0.03520533;
						} else {
							w20 = 0.00057279883;
						}
					} else {
						w20 = 0.13046646;
					}
				} else {
					if (size < 37) {
						if (hops < 4) {
							w20 = -0.30611703;
						} else {
							w20 = 0.099591635;
						}
					} else {
						if (rel_time < 1285) {
							w20 = -0.12781163;
						} else {
							w20 = -0.06705357;
						}
					}
				}
			} else {
				if (rel_time < 1697) {
					if (size < 69) {
						w20 = 0.4252955;
					} else {
						if (hops < 4) {
							w20 = 0.03975455;
						} else {
							w20 = -0.8872909;
						}
					}
				} else {
					if (rel_time < 1840) {
						if (rel_time < 1770) {
							w20 = 0.008543114;
						} else {
							w20 = 0.19243972;
						}
					} else {
						if (rel_time < 2238) {
							w20 = -0.20794263;
						} else {
							w20 = 0.005801351;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 1015) {
				if (rel_time < 973) {
					w20 = 0.07702827;
				} else {
					w20 = 0.025090957;
				}
			} else {
				if (rel_time < 2087) {
					if (rel_time < 1402) {
						w20 = -0.18512553;
					} else {
						if (rel_time < 1627) {
							w20 = -0.10564963;
						} else {
							w20 = -0.12585191;
						}
					}
				} else {
					if (rel_time < 2690) {
						if (rel_time < 2411) {
							w20 = 0.1785058;
						} else {
							w20 = 0.15246038;
						}
					} else {
						if (rel_time < 3301) {
							w20 = -0.1137432;
						} else {
							w20 = -0.021237409;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1015) {
					w20 = -0.22673741;
				} else {
					if (rel_time < 1627) {
						if (rel_time < 1402) {
							w20 = 0.46640378;
						} else {
							w20 = 0.54415697;
						}
					} else {
						if (rel_time < 2087) {
							w20 = -0.112386145;
						} else {
							w20 = 0.06607477;
						}
					}
				}
			} else {
				if (rel_time < 2087) {
					if (rel_time < 1015) {
						if (hops < 4) {
							w20 = 0.13698119;
						} else {
							w20 = 0.09959416;
						}
					} else {
						if (hops < 4) {
							w20 = -0.34460256;
						} else {
							w20 = 0.15719162;
						}
					}
				} else {
					if (rel_time < 2690) {
						if (hops < 4) {
							w20 = 0.07311375;
						} else {
							w20 = 0.09983811;
						}
					} else {
						if (rel_time < 11242) {
							w20 = -0.01246582;
						} else {
							w20 = 0.05241507;
						}
					}
				}
			}
		}
	}
	float w21;
	if (rel_time < 12771) {
		if (size < 37) {
			if (hops < 2) {
				if (rel_time < 10937) {
					if (rel_time < 9714) {
						if (rel_time < 9070) {
							w21 = -0.0327826;
						} else {
							w21 = 0.0522166;
						}
					} else {
						if (rel_time < 10901) {
							w21 = -0.1064747;
						} else {
							w21 = -0.028931638;
						}
					}
				} else {
					if (rel_time < 11512) {
						w21 = 0.11773779;
					} else {
						w21 = 0.054502156;
					}
				}
			} else {
				if (rel_time < 10937) {
					if (rel_time < 10326) {
						if (rel_time < 9714) {
							w21 = -0.0014758582;
						} else {
							w21 = -0.07338763;
						}
					} else {
						if (hops < 3) {
							w21 = 0.22909252;
						} else {
							w21 = 0.047091316;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11512) {
							w21 = -0.16408037;
						} else {
							w21 = -0.13120316;
						}
					} else {
						if (hops < 4) {
							w21 = -0.06399198;
						} else {
							w21 = 0.027340416;
						}
					}
				}
			}
		} else {
			if (rel_time < 4828) {
				if (rel_time < 2346) {
					if (prod != 1) {
						if (rel_time < 1163) {
							w21 = 0.014256074;
						} else {
							w21 = -0.023164172;
						}
					} else {
						if (rel_time < 1285) {
							w21 = -0.034162853;
						} else {
							w21 = 0.0922997;
						}
					}
				} else {
					if (rel_time < 3301) {
						if (cons != 5) {
							w21 = 0.0010268786;
						} else {
							w21 = 0.05944121;
						}
					} else {
						if (prod != 2) {
							w21 = 0.010755594;
						} else {
							w21 = -0.025739787;
						}
					}
				}
			} else {
				if (rel_time < 7810) {
					if (prod != 1) {
						if (rel_time < 5364) {
							w21 = -0.037791368;
						} else {
							w21 = 0.0023584012;
						}
					} else {
						if (rel_time < 7579) {
							w21 = -0.023182735;
						} else {
							w21 = -0.14585677;
						}
					}
				} else {
					if (rel_time < 8352) {
						if (prod != 2) {
							w21 = 0.037536737;
						} else {
							w21 = -0.033692535;
						}
					} else {
						if (rel_time < 8419) {
							w21 = -0.062363245;
						} else {
							w21 = -0.00012557424;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 12777) {
				w21 = -0.051310755;
			} else {
				w21 = -0.0055690515;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 12777) {
					w21 = 0.17734466;
				} else {
					w21 = 0.010494238;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 12777) {
						w21 = 0.06251185;
					} else {
						w21 = 0.10578885;
					}
				} else {
					w21 = -0.025615642;
				}
			}
		}
	}
	float w22;
	if (hops < 4) {
		if (rel_time < 12695) {
			if (rel_time < 12625) {
				if (rel_time < 12091) {
					if (rel_time < 11247) {
						if (rel_time < 10791) {
							w22 = -0.0017952016;
						} else {
							w22 = 0.028571172;
						}
					} else {
						if (rel_time < 12086) {
							w22 = -0.015130155;
						} else {
							w22 = -0.057107855;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 12186) {
							w22 = 2.843365;
						} else {
							w22 = 0.036038574;
						}
					} else {
						if (hops < 2) {
							w22 = 0.0327262;
						} else {
							w22 = -0.0022507657;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (hops < 2) {
						if (rel_time < 12630) {
							w22 = -0.14817956;
						} else {
							w22 = -0.0063009383;
						}
					} else {
						if (rel_time < 12630) {
							w22 = -0.0051080706;
						} else {
							w22 = -0.08527496;
						}
					}
				} else {
					if (hops < 3) {
						w22 = -0.0069480524;
					} else {
						w22 = 0.02676042;
					}
				}
			}
		} else {
			if (rel_time < 12700) {
				w22 = 0.081744365;
			} else {
				if (prod != 2) {
					if (hops < 2) {
						w22 = 0.0034209264;
					} else {
						if (hops < 3) {
							w22 = -0.09561404;
						} else {
							w22 = -0.15715076;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12771) {
							w22 = -0.11213261;
						} else {
							w22 = -0.026745895;
						}
					} else {
						if (rel_time < 12771) {
							w22 = 0.13314314;
						} else {
							w22 = 0.06994176;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 12186) {
				if (rel_time < 10963) {
					if (rel_time < 10791) {
						if (rel_time < 2238) {
							w22 = 0.016675996;
						} else {
							w22 = 0.00059205934;
						}
					} else {
						if (rel_time < 10796) {
							w22 = -0.1435944;
						} else {
							w22 = -0.036661368;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 12014) {
							w22 = 0.013442305;
						} else {
							w22 = 0.06166617;
						}
					} else {
						if (rel_time < 11490) {
							w22 = 0.12593387;
						} else {
							w22 = 0.048685193;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (rel_time < 12625) {
						w22 = -0.15393798;
					} else {
						if (rel_time < 12695) {
							w22 = 0.0042723934;
						} else {
							w22 = -0.041321058;
						}
					}
				} else {
					if (rel_time < 12700) {
						if (rel_time < 12695) {
							w22 = -0.1399335;
						} else {
							w22 = -0.09279811;
						}
					} else {
						w22 = -0.023811288;
					}
				}
			}
		} else {
			if (rel_time < 1627) {
				if (rel_time < 1402) {
					if (rel_time < 1015) {
						w22 = 0.054155845;
					} else {
						w22 = 0.14415541;
					}
				} else {
					w22 = 0.25270304;
				}
			} else {
				if (rel_time < 1841) {
					w22 = -0.035948697;
				} else {
					if (rel_time < 9748) {
						if (rel_time < 9412) {
							w22 = 0.027328465;
						} else {
							w22 = -0.053920455;
						}
					} else {
						if (rel_time < 10631) {
							w22 = 0.18400162;
						} else {
							w22 = 0.0035284143;
						}
					}
				}
			}
		}
	}
	float w23;
	if (rel_time < 6014) {
		if (rel_time < 6012) {
			if (rel_time < 1770) {
				if (rel_time < 1743) {
					if (hops < 3) {
						if (hops < 2) {
							w23 = -0.022105975;
						} else {
							w23 = 0.033419263;
						}
					} else {
						if (prod != 0) {
							w23 = -0.0074866116;
						} else {
							w23 = -0.11105251;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = -0.029635152;
						} else {
							w23 = -0.20290425;
						}
					} else {
						if (hops < 4) {
							w23 = 0.0540543;
						} else {
							w23 = 0.11597536;
						}
					}
				}
			} else {
				if (rel_time < 1840) {
					if (size < 69) {
						w23 = -1.395119;
					} else {
						if (hops < 2) {
							w23 = -0.010375575;
						} else {
							w23 = 0.12071569;
						}
					}
				} else {
					if (rel_time < 2324) {
						if (hops < 2) {
							w23 = 0.020827347;
						} else {
							w23 = -0.034134176;
						}
					} else {
						if (rel_time < 3301) {
							w23 = 0.017145772;
						} else {
							w23 = 0.0011362925;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w23 = 0.044912156;
			} else {
				if (hops < 3) {
					w23 = 0.16483384;
				} else {
					w23 = 0.07398094;
				}
			}
		}
	} else {
		if (rel_time < 7810) {
			if (size < 37) {
				if (rel_time < 6623) {
					if (hops < 4) {
						if (hops < 3) {
							w23 = -0.092521705;
						} else {
							w23 = -0.0008978285;
						}
					} else {
						if (rel_time < 6048) {
							w23 = -0.17319554;
						} else {
							w23 = -0.08117969;
						}
					}
				} else {
					if (rel_time < 6626) {
						if (hops < 2) {
							w23 = -0.048161756;
						} else {
							w23 = 0.01221248;
						}
					} else {
						if (rel_time < 6660) {
							w23 = -0.11885659;
						} else {
							w23 = -0.048109464;
						}
					}
				}
			} else {
				if (rel_time < 7740) {
					if (prod != 1) {
						if (rel_time < 6585) {
							w23 = -0.020472733;
						} else {
							w23 = 0.006433006;
						}
					} else {
						if (hops < 4) {
							w23 = -0.040416863;
						} else {
							w23 = 0.077115364;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = -0.061260324;
						} else {
							w23 = -0.095445685;
						}
					} else {
						if (prod != 3) {
							w23 = 0.05685385;
						} else {
							w23 = -0.044493046;
						}
					}
				}
			}
		} else {
			if (rel_time < 8495) {
				if (rel_time < 8455) {
					if (prod != 4) {
						if (hops < 3) {
							w23 = -0.0065906392;
						} else {
							w23 = 0.02239995;
						}
					} else {
						if (hops < 3) {
							w23 = 0.0763618;
						} else {
							w23 = 0.010522253;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = 0.0035504547;
						} else {
							w23 = 0.17571199;
						}
					} else {
						if (hops < 4) {
							w23 = -0.031340275;
						} else {
							w23 = 0.05476291;
						}
					}
				}
			} else {
				if (rel_time < 9132) {
					if (hops < 2) {
						if (rel_time < 8961) {
							w23 = 0.074726515;
						} else {
							w23 = -0.03695486;
						}
					} else {
						if (rel_time < 8799) {
							w23 = -0.09613605;
						} else {
							w23 = -0.023612512;
						}
					}
				} else {
					if (rel_time < 9714) {
						if (hops < 2) {
							w23 = -0.007396356;
						} else {
							w23 = 0.0349088;
						}
					} else {
						if (rel_time < 10791) {
							w23 = -0.010908203;
						} else {
							w23 = 0.0025252278;
						}
					}
				}
			}
		}
	}
	float w24;
	if (rel_time < 497) {
		if (hops < 4) {
			if (hops < 2) {
				w24 = -0.014897957;
			} else {
				w24 = -0.035509646;
			}
		} else {
			w24 = 0.018159492;
		}
	} else {
		if (rel_time < 6014) {
			if (rel_time < 6012) {
				if (hops < 2) {
					if (rel_time < 5466) {
						if (rel_time < 973) {
							w24 = 0.05805641;
						} else {
							w24 = -0.0035101157;
						}
					} else {
						if (prod != 0) {
							w24 = -0.02727128;
						} else {
							w24 = -0.20198767;
						}
					}
				} else {
					if (rel_time < 5364) {
						if (rel_time < 4790) {
							w24 = 0.0031163576;
						} else {
							w24 = -0.025534555;
						}
					} else {
						if (prod != 0) {
							w24 = 0.016648717;
						} else {
							w24 = 0.11286475;
						}
					}
				}
			} else {
				if (hops < 2) {
					w24 = 0.026970923;
				} else {
					if (hops < 3) {
						w24 = 0.09898009;
					} else {
						w24 = 0.044422276;
					}
				}
			}
		} else {
			if (rel_time < 7576) {
				if (prod != 3) {
					if (hops < 2) {
						if (rel_time < 7298) {
							w24 = -0.007485552;
						} else {
							w24 = 0.11657431;
						}
					} else {
						if (rel_time < 7298) {
							w24 = -0.014683674;
						} else {
							w24 = -0.08933529;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 7199) {
							w24 = -0.009735017;
						} else {
							w24 = -0.07240262;
						}
					} else {
						if (rel_time < 6588) {
							w24 = 0.0643622;
						} else {
							w24 = 0.021327099;
						}
					}
				}
			} else {
				if (rel_time < 7579) {
					if (hops < 4) {
						if (hops < 2) {
							w24 = 0.10576508;
						} else {
							w24 = 0.036783587;
						}
					} else {
						w24 = 0.13892514;
					}
				} else {
					if (rel_time < 7737) {
						if (hops < 3) {
							w24 = -0.089505665;
						} else {
							w24 = -0.04830941;
						}
					} else {
						if (rel_time < 7740) {
							w24 = 0.04723205;
						} else {
							w24 = 0.00014784314;
						}
					}
				}
			}
		}
	}
	float w25;
	if (rel_time < 972) {
		if (hops < 2) {
			if (rel_time < 768) {
				if (rel_time < 497) {
					w25 = -0.008946053;
				} else {
					w25 = -0.025171516;
				}
			} else {
				w25 = 0.06714398;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 768) {
					if (size < 37) {
						if (rel_time < 432) {
							w25 = 0.00071461505;
						} else {
							w25 = -0.03498875;
						}
					} else {
						w25 = -0.0068650753;
					}
				} else {
					if (rel_time < 854) {
						w25 = -0.058348846;
					} else {
						w25 = -0.09827847;
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 4) {
						if (rel_time < 432) {
							w25 = -0.035282478;
						} else {
							w25 = -0.0050864303;
						}
					} else {
						w25 = 0.011365416;
					}
				} else {
					if (hops < 4) {
						w25 = -0.010167242;
					} else {
						w25 = -0.08323013;
					}
				}
			}
		}
	} else {
		if (rel_time < 1101) {
			if (hops < 2) {
				if (rel_time < 1087) {
					if (rel_time < 1015) {
						w25 = 0.024199236;
					} else {
						w25 = -0.04533122;
					}
				} else {
					w25 = -0.16104834;
				}
			} else {
				if (rel_time < 1015) {
					if (hops < 3) {
						w25 = -0.15572111;
					} else {
						if (hops < 4) {
							w25 = 0.12036967;
						} else {
							w25 = 0.07560877;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1087) {
							w25 = 0.09474238;
						} else {
							w25 = 0.18834923;
						}
					} else {
						if (rel_time < 1087) {
							w25 = 0.073174134;
						} else {
							w25 = -0.014265033;
						}
					}
				}
			}
		} else {
			if (rel_time < 1285) {
				if (hops < 2) {
					if (rel_time < 1199) {
						if (rel_time < 1163) {
							w25 = 0.021804513;
						} else {
							w25 = -0.045507897;
						}
					} else {
						if (rel_time < 1200) {
							w25 = 0.16739346;
						} else {
							w25 = 0.108206525;
						}
					}
				} else {
					if (rel_time < 1199) {
						if (rel_time < 1163) {
							w25 = -0.015415725;
						} else {
							w25 = 0.007780276;
						}
					} else {
						if (hops < 3) {
							w25 = -0.15162398;
						} else {
							w25 = -0.06244138;
						}
					}
				}
			} else {
				if (rel_time < 1627) {
					if (hops < 3) {
						if (hops < 2) {
							w25 = -0.079143;
						} else {
							w25 = 0.32251745;
						}
					} else {
						if (hops < 4) {
							w25 = -0.28206795;
						} else {
							w25 = 0.118991636;
						}
					}
				} else {
					if (rel_time < 1712) {
						if (size < 69) {
							w25 = 0.092632376;
						} else {
							w25 = -0.074813075;
						}
					} else {
						if (size < 37) {
							w25 = -0.006207714;
						} else {
							w25 = 0.0016141953;
						}
					}
				}
			}
		}
	}
	float w26;
	if (rel_time < 5403) {
		if (rel_time < 5401) {
			if (size < 37) {
				if (rel_time < 3569) {
					if (rel_time < 2347) {
						if (rel_time < 1402) {
							w26 = 0.0023543497;
						} else {
							w26 = -0.031606283;
						}
					} else {
						if (hops < 3) {
							w26 = 0.031509817;
						} else {
							w26 = 0.0013196553;
						}
					}
				} else {
					if (rel_time < 4215) {
						if (hops < 3) {
							w26 = -0.06917208;
						} else {
							w26 = -0.008350959;
						}
					} else {
						if (hops < 3) {
							w26 = -0.0018445613;
						} else {
							w26 = -0.04522434;
						}
					}
				}
			} else {
				if (rel_time < 2920) {
					if (rel_time < 2690) {
						if (prod != 4) {
							w26 = 0.0036391981;
						} else {
							w26 = -0.019531518;
						}
					} else {
						if (hops < 2) {
							w26 = 0.030674001;
						} else {
							w26 = -0.05762722;
						}
					}
				} else {
					if (rel_time < 2935) {
						if (hops < 2) {
							w26 = -0.038605962;
						} else {
							w26 = 0.09514921;
						}
					} else {
						if (rel_time < 3301) {
							w26 = 0.021200888;
						} else {
							w26 = 0.0031908904;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (hops < 2) {
					w26 = 0.14788161;
				} else {
					w26 = 0.24002734;
				}
			} else {
				if (hops < 4) {
					w26 = 0.02464888;
				} else {
					w26 = 0.04930293;
				}
			}
		}
	} else {
		if (rel_time < 5906) {
			if (cons != 5) {
				if (hops < 2) {
					if (size < 69) {
						if (rel_time < 5437) {
							w26 = -0.06897055;
						} else {
							w26 = -0.024443753;
						}
					} else {
						w26 = 0.1497464;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 5747) {
							w26 = -0.08845416;
						} else {
							w26 = -0.111140825;
						}
					} else {
						if (rel_time < 5745) {
							w26 = -0.010330949;
						} else {
							w26 = -0.048548505;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (size < 69) {
						w26 = -0.121716514;
					} else {
						w26 = 0.005003509;
					}
				} else {
					if (size < 69) {
						if (hops < 4) {
							w26 = 0.07361392;
						} else {
							w26 = 0.024845779;
						}
					} else {
						if (rel_time < 5439) {
							w26 = -0.0036642717;
						} else {
							w26 = -0.052462637;
						}
					}
				}
			}
		} else {
			if (rel_time < 5974) {
				if (hops < 2) {
					w26 = -0.07035056;
				} else {
					if (hops < 3) {
						w26 = 0.21733582;
					} else {
						if (hops < 4) {
							w26 = 0.04805597;
						} else {
							w26 = -0.05004234;
						}
					}
				}
			} else {
				if (rel_time < 5975) {
					if (hops < 2) {
						w26 = -0.059468586;
					} else {
						if (hops < 4) {
							w26 = -0.10835781;
						} else {
							w26 = -0.06251116;
						}
					}
				} else {
					if (rel_time < 5989) {
						if (hops < 2) {
							w26 = -0.008533711;
						} else {
							w26 = 0.07780106;
						}
					} else {
						if (rel_time < 7129) {
							w26 = -0.0071809143;
						} else {
							w26 = 0.00022777243;
						}
					}
				}
			}
		}
	}
	float w27;
	if (rel_time < 972) {
		if (hops < 2) {
			if (rel_time < 768) {
				w27 = -0.011429141;
			} else {
				w27 = 0.03909209;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 768) {
					w27 = -0.010669812;
				} else {
					if (rel_time < 854) {
						w27 = -0.036490146;
					} else {
						w27 = -0.059951898;
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 768) {
						if (hops < 4) {
							w27 = -0.011571727;
						} else {
							w27 = 0.0072657573;
						}
					} else {
						w27 = 0.004904349;
					}
				} else {
					if (hops < 4) {
						w27 = -0.0075571984;
					} else {
						w27 = -0.05147645;
					}
				}
			}
		}
	} else {
		if (rel_time < 1087) {
			if (hops < 3) {
				if (rel_time < 1015) {
					if (hops < 2) {
						w27 = 0.013076012;
					} else {
						w27 = -0.09495106;
					}
				} else {
					if (hops < 2) {
						w27 = -0.019401329;
					} else {
						w27 = 0.06468665;
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1015) {
						w27 = 0.07080343;
					} else {
						w27 = 0.057864618;
					}
				} else {
					w27 = 0.038883;
				}
			}
		} else {
			if (rel_time < 12771) {
				if (rel_time < 11247) {
					if (rel_time < 11242) {
						if (rel_time < 10906) {
							w27 = 0.00040942323;
						} else {
							w27 = -0.0150425825;
						}
					} else {
						if (hops < 2) {
							w27 = 0.08735023;
						} else {
							w27 = 0.06808069;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w27 = -0.010515367;
						} else {
							w27 = 0.009249697;
						}
					} else {
						if (hops < 2) {
							w27 = -0.053177513;
						} else {
							w27 = 0.04771946;
						}
					}
				}
			} else {
				if (hops < 2) {
					w27 = -0.01784586;
				} else {
					if (hops < 3) {
						if (rel_time < 12777) {
							w27 = 0.07675417;
						} else {
							w27 = -0.023224873;
						}
					} else {
						if (rel_time < 12777) {
							w27 = 0.005445195;
						} else {
							w27 = 0.034385853;
						}
					}
				}
			}
		}
	}
	float w28;
	if (rel_time < 6965) {
		if (rel_time < 6689) {
			if (rel_time < 4524) {
				if (rel_time < 4159) {
					if (prod != 4) {
						if (rel_time < 3911) {
							w28 = 0.00092500757;
						} else {
							w28 = 0.04291985;
						}
					} else {
						if (rel_time < 1627) {
							w28 = 0.025704507;
						} else {
							w28 = -0.029932067;
						}
					}
				} else {
					if (hops < 2) {
						if (prod != 0) {
							w28 = -0.010029296;
						} else {
							w28 = -0.18059105;
						}
					} else {
						if (prod != 0) {
							w28 = -0.042288873;
						} else {
							w28 = 0.06853234;
						}
					}
				}
			} else {
				if (rel_time < 4753) {
					if (prod != 4) {
						if (rel_time < 4683) {
							w28 = -0.040228035;
						} else {
							w28 = -0.14737144;
						}
					} else {
						if (hops < 2) {
							w28 = 0.08641611;
						} else {
							w28 = 0.12154193;
						}
					}
				} else {
					if (rel_time < 5403) {
						if (rel_time < 5401) {
							w28 = 0.0027651947;
						} else {
							w28 = 0.07785703;
						}
					} else {
						if (hops < 3) {
							w28 = -0.007653221;
						} else {
							w28 = 0.010878682;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w28 = -0.12260791;
			} else {
				if (hops < 3) {
					w28 = 0.121280126;
				} else {
					if (hops < 4) {
						w28 = 0.08212204;
					} else {
						w28 = 0.12648214;
					}
				}
			}
		}
	} else {
		if (rel_time < 7129) {
			if (rel_time < 6967) {
				if (hops < 4) {
					if (hops < 2) {
						w28 = -0.09361069;
					} else {
						w28 = -0.020443343;
					}
				} else {
					w28 = 0.09385579;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 7126) {
						w28 = -0.09790613;
					} else {
						w28 = 0.055199157;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 7126) {
							w28 = -0.117948525;
						} else {
							w28 = -0.096012264;
						}
					} else {
						if (hops < 4) {
							w28 = -0.07087254;
						} else {
							w28 = -0.049280126;
						}
					}
				}
			}
		} else {
			if (rel_time < 7196) {
				if (hops < 2) {
					w28 = -0.08506071;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w28 = 0.264376;
						} else {
							w28 = 0.16970572;
						}
					} else {
						w28 = -0.036775663;
					}
				}
			} else {
				if (prod != 2) {
					if (rel_time < 12700) {
						if (rel_time < 12695) {
							w28 = 0.0011971606;
						} else {
							w28 = 0.039406575;
						}
					} else {
						if (hops < 2) {
							w28 = 0.0044684187;
						} else {
							w28 = -0.06717668;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 12186) {
							w28 = 0.027336583;
						} else {
							w28 = -0.027323077;
						}
					} else {
						if (hops < 3) {
							w28 = -0.045273464;
						} else {
							w28 = 0.0013218158;
						}
					}
				}
			}
		}
	}
	float w29;
	if (rel_time < 12771) {
		if (rel_time < 1285) {
			if (rel_time < 1199) {
				if (hops < 2) {
					if (prod != 3) {
						if (size < 69) {
							w29 = 0.012844443;
						} else {
							w29 = -0.013053936;
						}
					} else {
						w29 = -0.09867616;
					}
				} else {
					if (prod != 3) {
						if (hops < 3) {
							w29 = -0.016423035;
						} else {
							w29 = 0.0063951323;
						}
					} else {
						if (hops < 3) {
							w29 = 0.11106253;
						} else {
							w29 = -0.010556513;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 1200) {
						w29 = 0.09876183;
					} else {
						w29 = 0.06296616;
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1200) {
							w29 = -0.14222883;
						} else {
							w29 = -0.07552153;
						}
					} else {
						if (rel_time < 1200) {
							w29 = 0.0011024693;
						} else {
							w29 = -0.051366307;
						}
					}
				}
			}
		} else {
			if (rel_time < 1629) {
				if (prod != 1) {
					if (hops < 3) {
						if (hops < 2) {
							w29 = -0.024555342;
						} else {
							w29 = 0.10503087;
						}
					} else {
						if (hops < 4) {
							w29 = -0.14414553;
						} else {
							w29 = 0.0941953;
						}
					}
				} else {
					if (hops < 2) {
						w29 = -0.86078864;
					} else {
						if (hops < 4) {
							w29 = 0.9115267;
						} else {
							w29 = -1.6815051;
						}
					}
				}
			} else {
				if (rel_time < 1712) {
					if (hops < 3) {
						if (hops < 2) {
							w29 = -0.016344486;
						} else {
							w29 = -0.15994547;
						}
					} else {
						if (size < 69) {
							w29 = 0.17989433;
						} else {
							w29 = -0.025914151;
						}
					}
				} else {
					if (rel_time < 1840) {
						if (prod != 0) {
							w29 = 0.014926522;
						} else {
							w29 = -0.8801479;
						}
					} else {
						if (rel_time < 2324) {
							w29 = -0.008749026;
						} else {
							w29 = 0.00020555899;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			w29 = 0.00019804882;
		} else {
			if (hops < 3) {
				if (rel_time < 12777) {
					w29 = 0.06417121;
				} else {
					w29 = 0.003997673;
				}
			} else {
				w29 = 0.004549123;
			}
		}
	}
	float w30;
	if (rel_time < 8495) {
		if (rel_time < 8419) {
			if (rel_time < 8352) {
				if (prod != 6) {
					if (rel_time < 8191) {
						if (rel_time < 6965) {
							w30 = 0.0029244549;
						} else {
							w30 = -0.0051163556;
						}
					} else {
						if (hops < 4) {
							w30 = 0.019987099;
						} else {
							w30 = 0.08657419;
						}
					}
				} else {
					if (rel_time < 1743) {
						if (rel_time < 1163) {
							w30 = -0.004411713;
						} else {
							w30 = 0.01625832;
						}
					} else {
						if (rel_time < 1744) {
							w30 = -0.03975631;
						} else {
							w30 = -0.005936296;
						}
					}
				}
			} else {
				if (prod != 3) {
					if (hops < 4) {
						if (hops < 2) {
							w30 = -0.010113678;
						} else {
							w30 = 0.08606556;
						}
					} else {
						w30 = -0.17546271;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w30 = -0.115022756;
						} else {
							w30 = -0.1380201;
						}
					} else {
						w30 = -0.060259957;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (size < 37) {
					if (hops < 2) {
						w30 = -0.05806466;
					} else {
						if (rel_time < 8457) {
							w30 = 0.21305387;
						} else {
							w30 = 0.24494982;
						}
					}
				} else {
					if (rel_time < 8455) {
						if (rel_time < 8435) {
							w30 = 0.01884834;
						} else {
							w30 = 0.052772757;
						}
					} else {
						if (hops < 2) {
							w30 = 0.0954281;
						} else {
							w30 = -0.07893137;
						}
					}
				}
			} else {
				if (prod != 6) {
					if (hops < 4) {
						if (rel_time < 8435) {
							w30 = 0.053706545;
						} else {
							w30 = 0.022627635;
						}
					} else {
						if (rel_time < 8423) {
							w30 = -0.040748723;
						} else {
							w30 = 0.00548128;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 8455) {
							w30 = 0.0010296202;
						} else {
							w30 = -0.04301023;
						}
					} else {
						if (rel_time < 8455) {
							w30 = -0.040338527;
						} else {
							w30 = 0.05208105;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9030) {
			if (rel_time < 8961) {
				if (hops < 2) {
					if (prod != 0) {
						if (prod != 4) {
							w30 = -0.043725498;
						} else {
							w30 = 0.17138308;
						}
					} else {
						if (rel_time < 8524) {
							w30 = 0.15759087;
						} else {
							w30 = 0.08441051;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 3) {
							w30 = -0.024417948;
						} else {
							w30 = 0.014593161;
						}
					} else {
						if (hops < 3) {
							w30 = -0.051112916;
						} else {
							w30 = -0.089712895;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (prod != 3) {
						if (rel_time < 8965) {
							w30 = -0.09833258;
						} else {
							w30 = 0.102846585;
						}
					} else {
						if (hops < 2) {
							w30 = -0.14929087;
						} else {
							w30 = -0.12644213;
						}
					}
				} else {
					if (prod != 3) {
						if (rel_time < 8965) {
							w30 = -0.002569912;
						} else {
							w30 = -0.45166126;
						}
					} else {
						w30 = 0.11161895;
					}
				}
			}
		} else {
			if (rel_time < 9044) {
				if (hops < 2) {
					w30 = 0.039567813;
				} else {
					w30 = 0.06903588;
				}
			} else {
				if (rel_time < 9416) {
					if (size < 37) {
						if (hops < 2) {
							w30 = 0.019267915;
						} else {
							w30 = -0.07570767;
						}
					} else {
						if (hops < 2) {
							w30 = -0.052998986;
						} else {
							w30 = 0.009944108;
						}
					}
				} else {
					if (rel_time < 10180) {
						if (hops < 2) {
							w30 = 0.042988937;
						} else {
							w30 = 0.007409837;
						}
					} else {
						if (rel_time < 10250) {
							w30 = -0.041125692;
						} else {
							w30 = -0.0006711315;
						}
					}
				}
			}
		}
	}
	return (695.2852 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30);
}
