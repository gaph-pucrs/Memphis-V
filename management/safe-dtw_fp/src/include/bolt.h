#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

float bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	float w0;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w0 = -107.453186;
			} else {
				if (rel_time < 15780) {
					w0 = -105.38709;
				} else {
					if (prod != 2) {
						w0 = -105.34849;
					} else {
						w0 = -99.7411;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w0 = -103.28695;
				} else {
					if (prod != 2) {
						w0 = -103.243225;
					} else {
						w0 = -94.72475;
					}
				}
			} else {
				if (rel_time < 15780) {
					w0 = -101.18474;
				} else {
					if (prod != 2) {
						w0 = -101.05855;
					} else {
						w0 = -88.590996;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (rel_time < 601) {
					w0 = 150.35957;
				} else {
					if (hops < 3) {
						w0 = 144.60832;
					} else {
						w0 = 148.19888;
					}
				}
			} else {
				if (hops < 3) {
					w0 = 105.18128;
				} else {
					w0 = 108.71911;
				}
			}
		} else {
			if (rel_time < 616) {
				if (hops < 3) {
					w0 = 71.64514;
				} else {
					w0 = 75.262566;
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (hops < 3) {
							w0 = 93.78652;
						} else {
							w0 = 97.36818;
						}
					} else {
						if (hops < 3) {
							w0 = 99.999725;
						} else {
							w0 = 103.591255;
						}
					}
				} else {
					if (rel_time < 15382) {
						if (hops < 3) {
							w0 = 99.75204;
						} else {
							w0 = 103.33851;
						}
					} else {
						w0 = 110.751465;
					}
				}
			}
		}
	}
	float w1;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w1 = -75.21758;
			} else {
				if (rel_time < 15780) {
					w1 = -73.77127;
				} else {
					if (prod != 2) {
						w1 = -73.75584;
					} else {
						w1 = -69.84128;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w1 = -72.30121;
				} else {
					if (prod != 2) {
						w1 = -72.28372;
					} else {
						if (rel_time < 15971) {
							w1 = -63.877964;
						} else {
							w1 = -68.044556;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w1 = -70.83032;
				} else {
					if (prod != 2) {
						w1 = -70.77981;
					} else {
						w1 = -62.082542;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (rel_time < 601) {
					if (hops < 3) {
						w1 = 103.87162;
					} else {
						w1 = 107.40409;
					}
				} else {
					if (hops < 2) {
						w1 = 100.09318;
					} else {
						w1 = 103.04919;
					}
				}
			} else {
				if (hops < 2) {
					w1 = 72.47923;
				} else {
					w1 = 75.416245;
				}
			}
		} else {
			if (rel_time < 616) {
				if (hops < 2) {
					w1 = 49.122242;
				} else {
					w1 = 51.93231;
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (hops < 2) {
							w1 = 64.51425;
						} else {
							w1 = 67.43632;
						}
					} else {
						if (hops < 2) {
							w1 = 68.88333;
						} else {
							w1 = 71.79378;
						}
					}
				} else {
					if (rel_time < 15382) {
						if (hops < 2) {
							w1 = 68.70794;
						} else {
							w1 = 71.60339;
						}
					} else {
						if (hops < 3) {
							w1 = 76.17662;
						} else {
							w1 = 79.6986;
						}
					}
				}
			}
		}
	}
	float w2;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w2 = -52.652546;
			} else {
				if (rel_time < 15780) {
					w2 = -51.640102;
				} else {
					if (prod != 2) {
						w2 = -51.6374;
					} else {
						w2 = -48.904663;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w2 = -50.611095;
				} else {
					if (prod != 2) {
						w2 = -50.608025;
					} else {
						if (rel_time < 15971) {
							w2 = -44.752983;
						} else {
							w2 = -47.661385;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w2 = -49.581932;
				} else {
					if (prod != 2) {
						w2 = -49.57305;
					} else {
						w2 = -43.50603;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 3) {
					if (rel_time < 601) {
						w2 = 72.72272;
					} else {
						w2 = 70.73956;
					}
				} else {
					if (rel_time < 601) {
						w2 = 75.20352;
					} else {
						w2 = 72.84892;
					}
				}
			} else {
				if (hops < 3) {
					w2 = 51.42544;
				} else {
					w2 = 53.51441;
				}
			}
		} else {
			if (rel_time < 616) {
				if (hops < 3) {
					w2 = 34.97599;
				} else {
					w2 = 37.12886;
				}
			} else {
				if (hops < 3) {
					if (cons != 4) {
						if (cons != 2) {
							w2 = 45.82289;
						} else {
							w2 = 48.86798;
						}
					} else {
						if (rel_time < 15382) {
							w2 = 48.74432;
						} else {
							w2 = 53.33277;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w2 = 47.92765;
						} else {
							w2 = 50.977467;
						}
					} else {
						if (rel_time < 15382) {
							w2 = 50.85774;
						} else {
							w2 = 55.804607;
						}
					}
				}
			}
		}
	}
	float w3;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w3 = -36.890694;
				} else {
					if (prod != 2) {
						w3 = -36.87525;
					} else {
						w3 = -34.14587;
					}
				}
			} else {
				if (rel_time < 15780) {
					w3 = -36.148224;
				} else {
					if (rel_time < 15971) {
						w3 = -32.88511;
					} else {
						w3 = -35.911728;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w3 = -35.42794;
				} else {
					if (prod != 2) {
						w3 = -35.432213;
					} else {
						if (rel_time < 15971) {
							w3 = -31.353989;
						} else {
							w3 = -33.38412;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w3 = -34.707848;
				} else {
					if (rel_time < 15971) {
						w3 = -27.613039;
					} else {
						if (prod != 2) {
							w3 = -34.720177;
						} else {
							w3 = -31.807356;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 2) {
					w3 = 49.15626;
				} else {
					if (rel_time < 601) {
						w3 = 52.336826;
					} else {
						if (hops < 4) {
							w3 = 50.26413;
						} else {
							w3 = 52.536594;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w3 = 35.340466;
					} else {
						w3 = 36.72325;
					}
				} else {
					w3 = 39.0054;
				}
			}
		} else {
			if (rel_time < 616) {
				if (hops < 4) {
					if (hops < 2) {
						w3 = 23.91466;
					} else {
						w3 = 25.194645;
					}
				} else {
					w3 = 27.580368;
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (cons != 3) {
							w3 = 32.892204;
						} else {
							w3 = 31.398;
						}
					} else {
						if (cons != 4) {
							w3 = 33.53658;
						} else {
							w3 = 35.035385;
						}
					}
				} else {
					if (cons != 3) {
						if (cons != 1) {
							w3 = 37.314465;
						} else {
							w3 = 35.144264;
						}
					} else {
						w3 = 35.091415;
					}
				}
			}
		}
	}
	float w4;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w4 = -25.823614;
				} else {
					if (prod != 2) {
						w4 = -25.817432;
					} else {
						w4 = -23.91104;
					}
				}
			} else {
				if (rel_time < 15780) {
					w4 = -25.303862;
				} else {
					if (prod != 2) {
						w4 = -25.382532;
					} else {
						w4 = -23.834164;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w4 = -24.799673;
				} else {
					if (prod != 2) {
						w4 = -24.807167;
					} else {
						if (rel_time < 15971) {
							w4 = -21.966646;
						} else {
							w4 = -23.383698;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w4 = -24.295837;
				} else {
					if (rel_time < 15971) {
						w4 = -19.393341;
					} else {
						if (prod != 2) {
							w4 = -24.317457;
						} else {
							w4 = -22.302137;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 4) {
					if (hops < 2) {
						w4 = 34.41364;
					} else {
						if (rel_time < 601) {
							w4 = 36.34385;
						} else {
							w4 = 35.18793;
						}
					}
				} else {
					w4 = 37.382824;
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w4 = 24.747639;
					} else {
						w4 = 25.710669;
					}
				} else {
					w4 = 27.33372;
				}
			}
		} else {
			if (cons != 1) {
				if (cons != 3) {
					if (rel_time < 680) {
						if (hops < 2) {
							w4 = 27.534145;
						} else {
							w4 = 29.078943;
						}
					} else {
						if (hops < 2) {
							w4 = 23.619064;
						} else {
							w4 = 24.786121;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 21.979006;
						} else {
							w4 = 22.746191;
						}
					} else {
						w4 = 24.565363;
					}
				}
			} else {
				if (rel_time < 616) {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 16.746485;
						} else {
							w4 = 17.63928;
						}
					} else {
						w4 = 19.327633;
					}
				} else {
					if (hops < 2) {
						w4 = 21.561785;
					} else {
						if (hops < 4) {
							w4 = 22.764492;
						} else {
							w4 = 24.602413;
						}
					}
				}
			}
		}
	}
	float w5;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w5 = -18.076618;
				} else {
					if (prod != 2) {
						w5 = -18.075535;
					} else {
						w5 = -16.74398;
					}
				}
			} else {
				if (rel_time < 15780) {
					w5 = -17.712774;
				} else {
					if (rel_time < 15971) {
						w5 = -15.901986;
					} else {
						w5 = -17.636974;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w5 = -17.359856;
				} else {
					if (prod != 2) {
						w5 = -17.368252;
					} else {
						if (rel_time < 15971) {
							w5 = -15.389859;
						} else {
							w5 = -16.378967;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w5 = -17.007332;
				} else {
					if (rel_time < 15971) {
						w5 = -13.6204405;
					} else {
						if (prod != 2) {
							w5 = -17.03156;
						} else {
							w5 = -15.637433;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 4) {
					if (rel_time < 601) {
						w5 = 25.203356;
					} else {
						if (hops < 2) {
							w5 = 23.805195;
						} else {
							w5 = 24.63368;
						}
					}
				} else {
					if (rel_time < 601) {
						w5 = 27.28795;
					} else {
						w5 = 25.595304;
					}
				}
			} else {
				if (hops < 3) {
					w5 = 17.602184;
				} else {
					w5 = 18.455435;
				}
			}
		} else {
			if (cons != 1) {
				if (cons != 3) {
					if (rel_time < 15774) {
						if (rel_time < 680) {
							w5 = 20.053228;
						} else {
							w5 = 17.033545;
						}
					} else {
						if (hops < 2) {
							w5 = 19.239424;
						} else {
							w5 = 20.690819;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w5 = 15.580565;
						} else {
							w5 = 16.13357;
						}
					} else {
						w5 = 17.196716;
					}
				}
			} else {
				if (rel_time < 616) {
					if (hops < 3) {
						w5 = 11.943319;
					} else {
						if (hops < 4) {
							w5 = 12.605491;
						} else {
							w5 = 13.544322;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w5 = 15.093549;
						} else {
							w5 = 15.758267;
						}
					} else {
						if (hops < 4) {
							w5 = 16.140284;
						} else {
							w5 = 17.222694;
						}
					}
				}
			}
		}
	}
	float w6;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w6 = -12.653695;
				} else {
					if (prod != 2) {
						w6 = -12.655207;
					} else {
						w6 = -11.725163;
					}
				}
			} else {
				if (rel_time < 15780) {
					w6 = -12.398995;
				} else {
					if (prod != 2) {
						w6 = -12.481529;
					} else {
						if (rel_time < 15971) {
							w6 = -11.140546;
						} else {
							w6 = -11.891141;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w6 = -12.151961;
				} else {
					if (prod != 2) {
						w6 = -12.160039;
					} else {
						if (rel_time < 15971) {
							w6 = -10.782153;
						} else {
							w6 = -11.472545;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w6 = -11.905303;
				} else {
					if (rel_time < 15971) {
						w6 = -9.565979;
					} else {
						if (prod != 2) {
							w6 = -11.928637;
						} else {
							w6 = -10.96439;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 3) {
					if (rel_time < 601) {
						w6 = 17.473232;
					} else {
						w6 = 16.88213;
					}
				} else {
					if (rel_time < 601) {
						if (hops < 4) {
							w6 = 17.990282;
						} else {
							w6 = 19.12277;
						}
					} else {
						w6 = 17.574015;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w6 = 12.053855;
					} else {
						w6 = 12.604785;
					}
				} else {
					w6 = 13.632097;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 616) {
					if (hops < 2) {
						w6 = 8.147028;
					} else {
						w6 = 8.676217;
					}
				} else {
					if (cons != 2) {
						if (cons != 4) {
							w6 = 10.999437;
						} else {
							w6 = 11.796263;
						}
					} else {
						if (rel_time < 680) {
							w6 = 13.896448;
						} else {
							w6 = 11.86308;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 616) {
							w6 = 9.4915285;
						} else {
							w6 = 12.048099;
						}
					} else {
						if (rel_time < 680) {
							w6 = 15.351064;
						} else {
							w6 = 13.315061;
						}
					}
				} else {
					if (rel_time < 15382) {
						if (rel_time < 1262) {
							w6 = 12.541385;
						} else {
							w6 = 13.492548;
						}
					} else {
						w6 = 15.855814;
					}
				}
			}
		}
	}
	float w7;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w7 = -8.857627;
				} else {
					if (prod != 2) {
						w7 = -8.860275;
					} else {
						w7 = -8.210683;
					}
				}
			} else {
				if (rel_time < 15780) {
					w7 = -8.679331;
				} else {
					if (prod != 2) {
						w7 = -8.738481;
					} else {
						if (rel_time < 15971) {
							w7 = -7.8047953;
						} else {
							w7 = -8.328206;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w7 = -8.5064125;
				} else {
					if (prod != 2) {
						w7 = -8.513615;
					} else {
						if (rel_time < 15971) {
							w7 = -7.55399;
						} else {
							w7 = -8.0358715;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w7 = -8.333831;
				} else {
					if (rel_time < 15971) {
						w7 = -6.7184324;
					} else {
						if (prod != 2) {
							w7 = -8.354628;
						} else {
							w7 = -7.687824;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 2) {
					if (rel_time < 670) {
						w7 = 11.839502;
					} else {
						w7 = 11.39077;
					}
				} else {
					if (rel_time < 601) {
						if (hops < 4) {
							w7 = 12.574463;
						} else {
							w7 = 13.40081;
						}
					} else {
						if (hops < 4) {
							w7 = 12.085197;
						} else {
							w7 = 12.661093;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w7 = 8.440881;
					} else {
						w7 = 8.824856;
					}
				} else {
					w7 = 9.552932;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 15967) {
					if (rel_time < 616) {
						w7 = 5.8332434;
					} else {
						if (hops < 2) {
							w7 = 7.594069;
						} else {
							w7 = 8.016628;
						}
					}
				} else {
					if (hops < 2) {
						w7 = 9.92993;
					} else {
						w7 = 10.619471;
					}
				}
			} else {
				if (cons != 2) {
					if (cons != 4) {
						if (rel_time < 616) {
							w7 = 6.337267;
						} else {
							w7 = 8.106175;
						}
					} else {
						if (rel_time < 15382) {
							w7 = 8.714367;
						} else {
							w7 = 10.92826;
						}
					}
				} else {
					if (rel_time < 680) {
						w7 = 10.309406;
					} else {
						if (hops < 4) {
							w7 = 8.781004;
						} else {
							w7 = 9.321089;
						}
					}
				}
			}
		}
	}
	float w8;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w8 = -6.2003713;
				} else {
					if (prod != 2) {
						w8 = -6.203335;
					} else {
						w8 = -5.749626;
					}
				}
			} else {
				w8 = -6.07198;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w8 = -5.9545183;
				} else {
					if (prod != 2) {
						w8 = -5.960641;
					} else {
						if (rel_time < 15971) {
							w8 = -5.2923365;
						} else {
							w8 = -5.6286755;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w8 = -5.833765;
				} else {
					if (rel_time < 15971) {
						w8 = -4.7185283;
					} else {
						if (prod != 2) {
							w8 = -5.851448;
						} else {
							w8 = -5.390417;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 2) {
					if (rel_time < 670) {
						w8 = 8.289196;
					} else {
						w8 = 7.976488;
					}
				} else {
					if (rel_time < 670) {
						if (hops < 4) {
							w8 = 8.705787;
						} else {
							w8 = 9.22201;
						}
					} else {
						w8 = 8.366951;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w8 = 5.9108467;
					} else {
						w8 = 6.1784635;
					}
				} else {
					w8 = 6.6943865;
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 1) {
					if (cons != 3) {
						if (rel_time < 15774) {
							w8 = 5.7251153;
						} else {
							w8 = 7.3327494;
						}
					} else {
						if (rel_time < 987) {
							w8 = 4.714471;
						} else {
							w8 = 5.2883253;
						}
					}
				} else {
					if (rel_time < 616) {
						if (hops < 2) {
							w8 = 3.9565828;
						} else {
							w8 = 4.1902776;
						}
					} else {
						if (hops < 2) {
							w8 = 4.9878893;
						} else {
							w8 = 5.3263893;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (cons != 2) {
						if (rel_time < 15781) {
							w8 = 5.64231;
						} else {
							w8 = 7.3827987;
						}
					} else {
						if (rel_time < 680) {
							w8 = 7.060233;
						} else {
							w8 = 6.1468225;
						}
					}
				} else {
					if (cons != 4) {
						if (cons != 2) {
							w8 = 5.9711857;
						} else {
							w8 = 6.583521;
						}
					} else {
						if (rel_time < 15382) {
							w8 = 6.798096;
						} else {
							w8 = 7.8416677;
						}
					}
				}
			}
		}
	}
	float w9;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w9 = -4.3402786;
				} else {
					if (prod != 2) {
						w9 = -4.3431334;
					} else {
						w9 = -4.0262446;
					}
				}
			} else {
				if (rel_time < 15780) {
					w9 = -4.253979;
				} else {
					if (prod != 2) {
						w9 = -4.297014;
					} else {
						if (rel_time < 15971) {
							w9 = -3.6497548;
						} else {
							w9 = -4.013494;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w9 = -4.1681843;
				} else {
					if (prod != 2) {
						w9 = -4.173224;
					} else {
						if (rel_time < 15971) {
							w9 = -3.707815;
						} else {
							w9 = -3.9425704;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w9 = -4.0836926;
				} else {
					if (rel_time < 15971) {
						w9 = -3.3139446;
					} else {
						if (prod != 2) {
							w9 = -4.0982585;
						} else {
							w9 = -3.7795606;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 3) {
					if (rel_time < 601) {
						if (hops < 2) {
							w9 = 5.8290334;
						} else {
							w9 = 6.1651163;
						}
					} else {
						if (rel_time < 670) {
							w9 = 5.8380284;
						} else {
							w9 = 5.6689215;
						}
					}
				} else {
					if (rel_time < 670) {
						if (hops < 4) {
							w9 = 6.1678085;
						} else {
							w9 = 6.458979;
						}
					} else {
						w9 = 5.9553876;
					}
				}
			} else {
				if (hops < 3) {
					w9 = 4.2090244;
				} else {
					if (hops < 4) {
						w9 = 4.3942156;
					} else {
						w9 = 4.6912036;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 987) {
							w9 = 2.956937;
						} else {
							w9 = 3.53459;
						}
					} else {
						if (rel_time < 680) {
							w9 = 5.112598;
						} else {
							w9 = 3.7392056;
						}
					}
				} else {
					if (rel_time < 1262) {
						w9 = 2.9449706;
					} else {
						if (rel_time < 15382) {
							w9 = 3.9287932;
						} else {
							w9 = 4.864664;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 1262) {
						if (rel_time < 616) {
							w9 = 2.8211854;
						} else {
							w9 = 3.3851278;
						}
					} else {
						if (cons != 4) {
							w9 = 3.8759227;
						} else {
							w9 = 4.253581;
						}
					}
				} else {
					if (rel_time < 680) {
						if (hops < 3) {
							w9 = 5.773243;
						} else {
							w9 = 5.1377172;
						}
					} else {
						if (hops < 4) {
							w9 = 4.2827682;
						} else {
							w9 = 4.550362;
						}
					}
				}
			}
		}
	}
	float w10;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w10 = -3.0382073;
				} else {
					if (prod != 2) {
						w10 = -3.0407517;
					} else {
						w10 = -2.8194242;
					}
				}
			} else {
				if (rel_time < 15780) {
					w10 = -2.977797;
				} else {
					if (prod != 2) {
						w10 = -3.0083947;
					} else {
						if (rel_time < 15971) {
							w10 = -2.5569315;
						} else {
							w10 = -2.8109355;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w10 = -2.9177437;
				} else {
					if (prod != 2) {
						w10 = -2.9218025;
					} else {
						if (rel_time < 15971) {
							w10 = -2.5977008;
						} else {
							w10 = -2.7615504;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w10 = -2.858625;
				} else {
					if (rel_time < 15971) {
						w10 = -2.3274672;
					} else {
						if (prod != 2) {
							w10 = -2.8703575;
						} else {
							w10 = -2.6500888;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 2) {
					if (rel_time < 670) {
						w10 = 4.054204;
					} else {
						w10 = 3.88638;
					}
				} else {
					if (rel_time < 601) {
						if (hops < 4) {
							w10 = 4.3437634;
						} else {
							w10 = 4.6988754;
						}
					} else {
						if (hops < 4) {
							w10 = 4.1315284;
						} else {
							w10 = 4.3729024;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w10 = 2.8775501;
					} else {
						w10 = 3.002743;
					}
				} else {
					if (hops < 4) {
						w10 = 3.0770957;
					} else {
						w10 = 3.287436;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15781) {
					if (cons != 2) {
						if (rel_time < 1262) {
							w10 = 2.144479;
						} else {
							w10 = 2.6656916;
						}
					} else {
						if (rel_time < 680) {
							w10 = 3.6964114;
						} else {
							w10 = 2.8770208;
						}
					}
				} else {
					if (cons != 3) {
						if (hops < 2) {
							w10 = 3.406532;
						} else {
							w10 = 4.0896344;
						}
					} else {
						if (hops < 3) {
							w10 = 2.587243;
						} else {
							w10 = 2.1599314;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (rel_time < 616) {
						w10 = 2.124268;
					} else {
						if (rel_time < 680) {
							w10 = 4.165696;
						} else {
							w10 = 3.095882;
						}
					}
				} else {
					if (rel_time < 15382) {
						if (rel_time < 1262) {
							w10 = 3.1344502;
						} else {
							w10 = 3.516424;
						}
					} else {
						w10 = 4.2226086;
					}
				}
			}
		}
	}
	float w11;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w11 = -2.1267552;
				} else {
					if (prod != 2) {
						w11 = -2.128917;
					} else {
						w11 = -1.974333;
					}
				}
			} else {
				if (rel_time < 15780) {
					w11 = -2.0844662;
				} else {
					if (prod != 2) {
						w11 = -2.1062164;
					} else {
						if (rel_time < 15971) {
							w11 = -1.7913249;
						} else {
							w11 = -1.9686989;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w11 = -2.0424316;
				} else {
					if (prod != 2) {
						w11 = -2.045644;
					} else {
						w11 = -1.8873508;
					}
				}
			} else {
				if (rel_time < 15780) {
					w11 = -2.0010655;
				} else {
					if (rel_time < 15971) {
						w11 = -1.6346385;
					} else {
						if (prod != 2) {
							w11 = -2.0103514;
						} else {
							w11 = -1.8581446;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 3) {
					if (rel_time < 670) {
						if (hops < 2) {
							w11 = 2.8384702;
						} else {
							w11 = 2.9587882;
						}
					} else {
						w11 = 2.764397;
					}
				} else {
					if (rel_time < 670) {
						w11 = 3.0777063;
					} else {
						if (hops < 4) {
							w11 = 2.8523822;
						} else {
							w11 = 3.0867438;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w11 = 2.015039;
					} else {
						w11 = 2.1025822;
					}
				} else {
					if (hops < 4) {
						w11 = 2.1547737;
					} else {
						w11 = 2.3037338;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 1) {
					if (rel_time < 680) {
						if (hops < 2) {
							w11 = 2.4721677;
						} else {
							w11 = 2.934463;
						}
					} else {
						if (rel_time < 15781) {
							w11 = 1.8783865;
						} else {
							w11 = 2.5185633;
						}
					}
				} else {
					if (rel_time < 616) {
						if (hops < 2) {
							w11 = 1.2415466;
						} else {
							w11 = 1.4455407;
						}
					} else {
						if (hops < 2) {
							w11 = 1.631573;
						} else {
							w11 = 1.7661165;
						}
					}
				}
			} else {
				if (rel_time < 616) {
					if (hops < 4) {
						w11 = 1.1473405;
					} else {
						w11 = 1.4886345;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 15967) {
							w11 = 2.031536;
						} else {
							w11 = 2.8601925;
						}
					} else {
						if (cons != 4) {
							w11 = 2.1800342;
						} else {
							w11 = 2.4739509;
						}
					}
				}
			}
		}
	}
	float w12;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w12 = -1.488736;
				} else {
					if (prod != 2) {
						w12 = -1.490515;
					} else {
						if (rel_time < 15971) {
							w12 = -1.439673;
						} else {
							w12 = -1.3470578;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w12 = -1.4591305;
				} else {
					if (prod != 2) {
						w12 = -1.4745889;
					} else {
						if (rel_time < 15971) {
							w12 = -1.2549601;
						} else {
							w12 = -1.3788174;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w12 = -1.4297081;
				} else {
					if (rel_time < 15971) {
						w12 = -1.2548832;
					} else {
						w12 = -1.4183273;
					}
				}
			} else {
				w12 = -1.3992219;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (rel_time < 601) {
					if (hops < 4) {
						if (hops < 2) {
							w12 = 2.015857;
						} else {
							w12 = 2.137151;
						}
					} else {
						w12 = 2.371936;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w12 = 1.9260912;
						} else {
							w12 = 1.9937291;
						}
					} else {
						if (hops < 4) {
							w12 = 2.0488043;
						} else {
							w12 = 2.1392243;
						}
					}
				}
			} else {
				if (hops < 3) {
					w12 = 1.4449285;
				} else {
					if (hops < 4) {
						w12 = 1.5089012;
					} else {
						w12 = 1.6143881;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (rel_time < 616) {
						w12 = 0.86939687;
					} else {
						if (rel_time < 680) {
							w12 = 1.7311561;
						} else {
							w12 = 1.1601262;
						}
					}
				} else {
					if (rel_time < 1262) {
						w12 = 0.85646254;
					} else {
						if (rel_time < 15382) {
							w12 = 1.3870646;
						} else {
							w12 = 1.6305501;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (cons != 4) {
						if (hops < 4) {
							w12 = 1.2706256;
						} else {
							w12 = 1.4587166;
						}
					} else {
						if (rel_time < 15382) {
							w12 = 1.4543538;
						} else {
							w12 = 2.097167;
						}
					}
				} else {
					if (rel_time < 680) {
						if (hops < 4) {
							w12 = 1.8857458;
						} else {
							w12 = 2.2669115;
						}
					} else {
						if (hops < 4) {
							w12 = 1.5501568;
						} else {
							w12 = 1.6028777;
						}
					}
				}
			}
		}
	}
	float w13;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w13 = -1.0421194;
				} else {
					if (prod != 2) {
						w13 = -1.0435545;
					} else {
						w13 = -0.9685133;
					}
				}
			} else {
				if (rel_time < 15780) {
					w13 = -1.0213937;
				} else {
					if (prod != 2) {
						w13 = -1.032377;
					} else {
						if (rel_time < 15971) {
							w13 = -0.8791946;
						} else {
							w13 = -0.9656848;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w13 = -1.0008022;
				} else {
					if (prod != 2) {
						w13 = -1.0069078;
					} else {
						if (rel_time < 15971) {
							w13 = -0.8791728;
						} else {
							w13 = -0.944078;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w13 = -0.9810143;
				} else {
					if (rel_time < 15971) {
						w13 = -0.73153687;
					} else {
						if (prod != 2) {
							w13 = -0.98879284;
						} else {
							w13 = -0.8847258;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 3) {
					if (rel_time < 670) {
						if (hops < 2) {
							w13 = 1.3963794;
						} else {
							w13 = 1.4521959;
						}
					} else {
						if (hops < 2) {
							w13 = 1.3155432;
						} else {
							w13 = 1.3737533;
						}
					}
				} else {
					if (rel_time < 670) {
						if (rel_time < 601) {
							w13 = 1.5450602;
						} else {
							w13 = 1.482549;
						}
					} else {
						if (hops < 4) {
							w13 = 1.383288;
						} else {
							w13 = 1.5229677;
						}
					}
				}
			} else {
				if (hops < 2) {
					w13 = 0.9779619;
				} else {
					if (hops < 4) {
						w13 = 1.047546;
					} else {
						w13 = 1.1313127;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (cons != 2) {
					if (rel_time < 1262) {
						if (cons != 3) {
							w13 = 0.5667572;
						} else {
							w13 = 0.77199405;
						}
					} else {
						if (cons != 4) {
							w13 = 0.84108776;
						} else {
							w13 = 0.96448827;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 680) {
							w13 = 1.2122614;
						} else {
							w13 = 0.84291947;
						}
					} else {
						if (rel_time < 680) {
							w13 = 1.489485;
						} else {
							w13 = 1.0889951;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 987) {
							w13 = 0.548251;
						} else {
							w13 = 0.9607525;
						}
					} else {
						if (rel_time < 680) {
							w13 = 1.2397697;
						} else {
							w13 = 1.0909848;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1262) {
							w13 = 0.72238123;
						} else {
							w13 = 1.1142594;
						}
					} else {
						if (rel_time < 15382) {
							w13 = 1.2696855;
						} else {
							w13 = 1.5914223;
						}
					}
				}
			}
		}
	}
	float w14;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w14 = -0.72948855;
				} else {
					if (prod != 2) {
						w14 = -0.73062456;
					} else {
						if (rel_time < 15971) {
							w14 = -0.718921;
						} else {
							w14 = -0.6533485;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w14 = -0.71497875;
				} else {
					if (prod != 2) {
						w14 = -0.7227797;
					} else {
						if (rel_time < 15971) {
							w14 = -0.6159423;
						} else {
							w14 = -0.6763378;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w14 = -0.70056283;
				} else {
					if (prod != 2) {
						w14 = -0.7049655;
					} else {
						w14 = -0.6425737;
					}
				}
			} else {
				if (rel_time < 15780) {
					w14 = -0.6867187;
				} else {
					if (rel_time < 15971) {
						w14 = -0.5137757;
					} else {
						if (prod != 2) {
							w14 = -0.6925326;
						} else {
							w14 = -0.6203381;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (hops < 4) {
					if (rel_time < 670) {
						if (hops < 2) {
							w14 = 0.9776519;
						} else {
							w14 = 1.0287054;
						}
					} else {
						if (hops < 2) {
							w14 = 0.9212175;
						} else {
							w14 = 0.965476;
						}
					}
				} else {
					if (rel_time < 601) {
						w14 = 1.1998826;
					} else {
						w14 = 1.048033;
					}
				}
			} else {
				if (hops < 2) {
					w14 = 0.6848296;
				} else {
					if (hops < 4) {
						w14 = 0.7334076;
					} else {
						w14 = 0.7927947;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (cons != 4) {
					if (cons != 2) {
						if (rel_time < 987) {
							w14 = 0.4548239;
						} else {
							w14 = 0.5470519;
						}
					} else {
						if (rel_time < 680) {
							w14 = 0.8488905;
						} else {
							w14 = 0.5900623;
						}
					}
				} else {
					if (rel_time < 1262) {
						w14 = 0.42986983;
					} else {
						if (rel_time < 15382) {
							w14 = 0.68163;
						} else {
							w14 = 0.85271984;
						}
					}
				}
			} else {
				if (cons != 2) {
					if (rel_time < 15781) {
						if (rel_time < 1262) {
							w14 = 0.43938163;
						} else {
							w14 = 0.6731944;
						}
					} else {
						if (cons != 3) {
							w14 = 1.1363195;
						} else {
							w14 = 0.41666207;
						}
					}
				} else {
					if (rel_time < 680) {
						if (hops < 4) {
							w14 = 0.90816784;
						} else {
							w14 = 1.2176481;
						}
					} else {
						if (hops < 4) {
							w14 = 0.75814646;
						} else {
							w14 = 0.7948159;
						}
					}
				}
			}
		}
	}
	float w15;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w15 = -0.5102348;
			} else {
				w15 = -0.5000994;
			}
		} else {
			if (hops < 4) {
				w15 = -0.48997256;
			} else {
				w15 = -0.47998744;
			}
		}
	} else {
		if (prod != 0) {
			if (cons != 1) {
				if (rel_time < 601) {
					if (hops < 4) {
						if (rel_time < 553) {
							w15 = 0.6898817;
						} else {
							w15 = 0.74288654;
						}
					} else {
						w15 = 0.8408665;
					}
				} else {
					if (hops < 3) {
						w15 = 0.665682;
					} else {
						w15 = 0.71337783;
					}
				}
			} else {
				if (hops < 3) {
					w15 = 0.4937112;
				} else {
					w15 = 0.53147334;
				}
			}
		} else {
			if (hops < 4) {
				if (cons != 1) {
					if (cons != 3) {
						if (rel_time < 15774) {
							w15 = 0.48758864;
						} else {
							w15 = 0.73541856;
						}
					} else {
						if (hops < 2) {
							w15 = 0.38552523;
						} else {
							w15 = 0.44730642;
						}
					}
				} else {
					if (rel_time < 616) {
						if (hops < 3) {
							w15 = 0.31728825;
						} else {
							w15 = 0.12653312;
						}
					} else {
						if (hops < 3) {
							w15 = 0.39015812;
						} else {
							w15 = 0.4311913;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (rel_time < 616) {
						w15 = 0.31116727;
					} else {
						if (rel_time < 680) {
							w15 = 0.8533016;
						} else {
							w15 = 0.54987496;
						}
					}
				} else {
					if (rel_time < 1262) {
						w15 = 0.509802;
					} else {
						if (rel_time < 13029) {
							w15 = 0.6953941;
						} else {
							w15 = 0.73856664;
						}
					}
				}
			}
		}
	}
	float w16;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				if (rel_time < 15780) {
					w16 = -0.35757348;
				} else {
					if (prod != 2) {
						w16 = -0.35852653;
					} else {
						if (rel_time < 15971) {
							w16 = -0.35104173;
						} else {
							w16 = -0.30475438;
						}
					}
				}
			} else {
				if (rel_time < 15780) {
					w16 = -0.3504559;
				} else {
					if (prod != 2) {
						w16 = -0.35605204;
					} else {
						if (rel_time < 15971) {
							w16 = -0.2817717;
						} else {
							w16 = -0.32384259;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 15780) {
					w16 = -0.34340587;
				} else {
					if (rel_time < 15971) {
						w16 = -0.27686656;
					} else {
						w16 = -0.34115982;
					}
				}
			} else {
				if (rel_time < 15780) {
					w16 = -0.3367197;
				} else {
					if (rel_time < 15971) {
						w16 = -0.21795967;
					} else {
						if (prod != 2) {
							w16 = -0.3412282;
						} else {
							w16 = -0.29152513;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 875) {
				if (cons != 1) {
					if (hops < 2) {
						if (rel_time < 671) {
							w16 = 0.47317848;
						} else {
							w16 = 0.4418858;
						}
					} else {
						if (prod != 0) {
							w16 = 0.49094358;
						} else {
							w16 = 0.62455475;
						}
					}
				} else {
					if (rel_time < 553) {
						if (hops < 2) {
							w16 = 0.3315816;
						} else {
							w16 = 0.35720706;
						}
					} else {
						if (hops < 2) {
							w16 = 0.20749635;
						} else {
							w16 = 0.23456012;
						}
					}
				}
			} else {
				if (rel_time < 1262) {
					if (rel_time < 987) {
						if (hops < 2) {
							w16 = 0.21853091;
						} else {
							w16 = 0.33329016;
						}
					} else {
						if (hops < 2) {
							w16 = 0.15486583;
						} else {
							w16 = -0.009777293;
						}
					}
				} else {
					if (rel_time < 15781) {
						if (cons != 2) {
							w16 = 0.2907299;
						} else {
							w16 = 0.332058;
						}
					} else {
						if (cons != 3) {
							w16 = 0.5100701;
						} else {
							w16 = 0.17385486;
						}
					}
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (hops < 4) {
						if (prod != 0) {
							w16 = 0.44108897;
						} else {
							w16 = 0.3033105;
						}
					} else {
						if (rel_time < 1660) {
							w16 = 0.31394073;
						} else {
							w16 = 0.39019066;
						}
					}
				} else {
					if (rel_time < 601) {
						if (hops < 4) {
							w16 = 0.5154565;
						} else {
							w16 = 0.5892738;
						}
					} else {
						if (hops < 4) {
							w16 = 0.3771911;
						} else {
							w16 = 0.40187365;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 15382) {
						if (rel_time < 1262) {
							w16 = 0.3475354;
						} else {
							w16 = 0.41472453;
						}
					} else {
						if (rel_time < 15967) {
							w16 = 0.7795598;
						} else {
							w16 = 0.4796296;
						}
					}
				} else {
					if (rel_time < 15382) {
						if (rel_time < 1071) {
							w16 = 0.5420891;
						} else {
							w16 = 0.48275772;
						}
					} else {
						w16 = 0.554259;
					}
				}
			}
		}
	}
	float w17;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w17 = -0.2500196;
			} else {
				w17 = -0.24505396;
			}
		} else {
			if (hops < 4) {
				w17 = -0.24009226;
			} else {
				w17 = -0.23521115;
			}
		}
	} else {
		if (hops < 2) {
			if (cons != 4) {
				if (prod != 0) {
					if (cons != 1) {
						if (rel_time < 553) {
							w17 = 0.2888301;
						} else {
							w17 = 0.34153306;
						}
					} else {
						w17 = 0.23218773;
					}
				} else {
					if (rel_time < 680) {
						if (rel_time < 616) {
							w17 = 0.14529452;
						} else {
							w17 = 0.31116727;
						}
					} else {
						if (cons != 3) {
							w17 = 0.1702852;
						} else {
							w17 = 0.18405157;
						}
					}
				}
			} else {
				if (rel_time < 15967) {
					if (rel_time < 15382) {
						if (rel_time < 875) {
							w17 = 0.3130992;
						} else {
							w17 = 0.23655196;
						}
					} else {
						w17 = 0.8492749;
					}
				} else {
					w17 = 0.11624628;
				}
			}
		} else {
			if (cons != 2) {
				if (hops < 4) {
					if (rel_time < 15781) {
						if (prod != 0) {
							w17 = 0.31258792;
						} else {
							w17 = 0.21740845;
						}
					} else {
						if (cons != 3) {
							w17 = 0.42288214;
						} else {
							w17 = 0.07871965;
						}
					}
				} else {
					if (cons != 4) {
						if (prod != 0) {
							w17 = 0.35429865;
						} else {
							w17 = 0.2622802;
						}
					} else {
						if (rel_time < 1262) {
							w17 = 0.2967878;
						} else {
							w17 = 0.34732735;
						}
					}
				}
			} else {
				if (rel_time < 680) {
					if (hops < 3) {
						if (rel_time < 601) {
							w17 = 0.37879965;
						} else {
							w17 = 0.43732277;
						}
					} else {
						if (hops < 4) {
							w17 = 0.29076952;
						} else {
							w17 = 0.44588795;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 3817) {
							w17 = 0.30131894;
						} else {
							w17 = 0.28629515;
						}
					} else {
						if (rel_time < 14990) {
							w17 = 0.26868653;
						} else {
							w17 = 0.24686746;
						}
					}
				}
			}
		}
	}
	float w18;
	if (size < 126) {
		if (hops < 3) {
			if (hops < 2) {
				w18 = -0.17501582;
			} else {
				w18 = -0.1715378;
			}
		} else {
			if (rel_time < 15780) {
				w18 = -0.16755134;
			} else {
				if (prod != 2) {
					w18 = -0.1714244;
				} else {
					if (rel_time < 15971) {
						w18 = -0.11425287;
					} else {
						w18 = -0.14424223;
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 875) {
				if (cons != 1) {
					if (hops < 2) {
						if (rel_time < 601) {
							w18 = 0.24264337;
						} else {
							w18 = 0.2207918;
						}
					} else {
						if (prod != 0) {
							w18 = 0.24332999;
						} else {
							w18 = 0.3062256;
						}
					}
				} else {
					if (rel_time < 601) {
						w18 = 0.15950182;
					} else {
						w18 = 0.09913095;
					}
				}
			} else {
				if (rel_time < 1262) {
					if (rel_time < 987) {
						if (hops < 2) {
							w18 = 0.09785993;
						} else {
							w18 = 0.1681955;
						}
					} else {
						if (hops < 2) {
							w18 = 0.037542757;
						} else {
							w18 = -0.07202384;
						}
					}
				} else {
					if (cons != 1) {
						if (hops < 2) {
							w18 = 0.13937078;
						} else {
							w18 = 0.16782176;
						}
					} else {
						if (rel_time < 1458) {
							w18 = 0.15333809;
						} else {
							w18 = 0.12576172;
						}
					}
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 1) {
					if (rel_time < 670) {
						if (rel_time < 553) {
							w18 = 0.25184944;
						} else {
							w18 = 0.29004365;
						}
					} else {
						if (rel_time < 987) {
							w18 = 0.10754683;
						} else {
							w18 = 0.18042722;
						}
					}
				} else {
					if (rel_time < 616) {
						if (rel_time < 553) {
							w18 = 0.15267284;
						} else {
							w18 = -0.039103676;
						}
					} else {
						if (hops < 4) {
							w18 = 0.14563301;
						} else {
							w18 = 0.18768926;
						}
					}
				}
			} else {
				if (rel_time < 1262) {
					if (rel_time < 875) {
						w18 = 0.2731684;
					} else {
						if (hops < 4) {
							w18 = 0.058668967;
						} else {
							w18 = 0.12389522;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 6754) {
							w18 = 0.21760578;
						} else {
							w18 = 0.23077823;
						}
					} else {
						if (rel_time < 4209) {
							w18 = 0.27273262;
						} else {
							w18 = 0.23713344;
						}
					}
				}
			}
		}
	}
	float w19;
	if (size < 126) {
		if (hops < 3) {
			if (rel_time < 15780) {
				if (hops < 2) {
					w19 = -0.12279373;
				} else {
					w19 = -0.1203449;
				}
			} else {
				if (prod != 2) {
					w19 = -0.1240048;
				} else {
					w19 = -0.09418529;
				}
			}
		} else {
			w19 = -0.117043674;
		}
	} else {
		if (hops < 3) {
			if (rel_time < 875) {
				if (cons != 1) {
					if (cons != 2) {
						w19 = 0.15776923;
					} else {
						if (hops < 2) {
							w19 = 0.16083986;
						} else {
							w19 = 0.20348725;
						}
					}
				} else {
					if (rel_time < 601) {
						w19 = 0.11167521;
					} else {
						w19 = 0.069406755;
					}
				}
			} else {
				if (rel_time < 15781) {
					if (rel_time < 1262) {
						if (rel_time < 987) {
							w19 = 0.09530042;
						} else {
							w19 = -0.0152968485;
						}
					} else {
						if (cons != 2) {
							w19 = 0.09757887;
						} else {
							w19 = 0.11589824;
						}
					}
				} else {
					if (rel_time < 15967) {
						if (cons != 3) {
							w19 = 0.77553064;
						} else {
							w19 = 0.037854187;
						}
					} else {
						if (hops < 2) {
							w19 = 0.03964003;
						} else {
							w19 = 0.17409137;
						}
					}
				}
			}
		} else {
			if (cons != 4) {
				if (cons != 2) {
					if (rel_time < 616) {
						if (rel_time < 553) {
							w19 = 0.10690794;
						} else {
							w19 = -0.027374232;
						}
					} else {
						if (rel_time < 670) {
							w19 = 0.2079582;
						} else {
							w19 = 0.11136063;
						}
					}
				} else {
					if (rel_time < 671) {
						if (hops < 4) {
							w19 = 0.16193198;
						} else {
							w19 = 0.24507216;
						}
					} else {
						if (hops < 4) {
							w19 = 0.13111854;
						} else {
							w19 = 0.14023922;
						}
					}
				}
			} else {
				if (rel_time < 2640) {
					if (rel_time < 875) {
						w19 = 0.19126306;
					} else {
						if (rel_time < 1262) {
							w19 = 0.05248111;
						} else {
							w19 = 0.14216962;
						}
					}
				} else {
					if (rel_time < 12838) {
						if (rel_time < 12054) {
							w19 = 0.16078791;
						} else {
							w19 = 0.1052616;
						}
					} else {
						if (hops < 4) {
							w19 = 0.16653067;
						} else {
							w19 = 0.18747833;
						}
					}
				}
			}
		}
	}
	float w20;
	if (size < 126) {
		if (hops < 4) {
			if (hops < 2) {
				w20 = -0.08577247;
			} else {
				w20 = -0.08346309;
			}
		} else {
			w20 = -0.07936436;
		}
	} else {
		if (hops < 2) {
			if (cons != 4) {
				if (rel_time < 1458) {
					if (cons != 2) {
						if (prod != 0) {
							w20 = 0.09655731;
						} else {
							w20 = 0.064892605;
						}
					} else {
						if (rel_time < 553) {
							w20 = 0.081755586;
						} else {
							w20 = 0.11795979;
						}
					}
				} else {
					if (cons != 2) {
						if (rel_time < 15781) {
							w20 = 0.056419253;
						} else {
							w20 = -0.047706768;
						}
					} else {
						if (rel_time < 2248) {
							w20 = 0.020668201;
						} else {
							w20 = 0.040856607;
						}
					}
				}
			} else {
				if (rel_time < 15967) {
					if (rel_time < 15382) {
						if (rel_time < 1262) {
							w20 = 0.0686064;
						} else {
							w20 = 0.10161664;
						}
					} else {
						w20 = 0.32317713;
					}
				} else {
					w20 = 0.027768627;
				}
			}
		} else {
			if (cons != 2) {
				if (hops < 4) {
					if (rel_time < 15781) {
						if (hops < 3) {
							w20 = 0.06527133;
						} else {
							w20 = 0.08193611;
						}
					} else {
						if (rel_time < 15967) {
							w20 = 0.26045722;
						} else {
							w20 = 0.107311435;
						}
					}
				} else {
					if (rel_time < 2242) {
						if (prod != 0) {
							w20 = 0.13994434;
						} else {
							w20 = 0.04912138;
						}
					} else {
						if (rel_time < 2837) {
							w20 = 0.14930606;
						} else {
							w20 = 0.11070904;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 680) {
						if (rel_time < 553) {
							w20 = 0.1166854;
						} else {
							w20 = 0.14741188;
						}
					} else {
						if (rel_time < 11068) {
							w20 = 0.120393395;
						} else {
							w20 = 0.11020438;
						}
					}
				} else {
					if (rel_time < 601) {
						w20 = 0.13666311;
					} else {
						if (hops < 4) {
							w20 = 0.09085759;
						} else {
							w20 = 0.10252147;
						}
					}
				}
			}
		}
	}
	float w21;
	if (size < 126) {
		if (hops < 3) {
			w21 = -0.05948475;
		} else {
			w21 = -0.057199523;
		}
	} else {
		if (cons != 1) {
			if (rel_time < 875) {
				if (hops < 4) {
					if (prod != 0) {
						if (hops < 3) {
							w21 = 0.088946335;
						} else {
							w21 = 0.10783286;
						}
					} else {
						if (hops < 3) {
							w21 = 0.09020582;
						} else {
							w21 = 0.028654462;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 553) {
							w21 = 0.036711518;
						} else {
							w21 = 0.1039446;
						}
					} else {
						w21 = 0.22374038;
					}
				}
			} else {
				if (rel_time < 1262) {
					if (hops < 3) {
						if (rel_time < 1071) {
							w21 = 0.045557424;
						} else {
							w21 = -0.032602374;
						}
					} else {
						if (rel_time < 1071) {
							w21 = -0.058389317;
						} else {
							w21 = 0.018801443;
						}
					}
				} else {
					if (hops < 2) {
						if (cons != 4) {
							w21 = 0.035230767;
						} else {
							w21 = 0.070013896;
						}
					} else {
						if (rel_time < 15781) {
							w21 = 0.06459922;
						} else {
							w21 = 0.10537448;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 616) {
					if (hops < 3) {
						if (rel_time < 601) {
							w21 = 0.05440359;
						} else {
							w21 = 0.029080145;
						}
					} else {
						if (rel_time < 553) {
							w21 = 0.03523484;
						} else {
							w21 = -0.072092384;
						}
					}
				} else {
					if (rel_time < 1458) {
						if (hops < 2) {
							w21 = 0.08475131;
						} else {
							w21 = 0.045682162;
						}
					} else {
						if (hops < 2) {
							w21 = 0.035248015;
						} else {
							w21 = 0.044109084;
						}
					}
				}
			} else {
				if (rel_time < 3027) {
					w21 = 0.054157924;
				} else {
					if (rel_time < 6949) {
						w21 = 0.08474377;
					} else {
						if (rel_time < 11466) {
							w21 = 0.051960718;
						} else {
							w21 = 0.073623486;
						}
					}
				}
			}
		}
	}
	float w22;
	if (size < 126) {
		if (rel_time < 15780) {
			w22 = -0.041238554;
		} else {
			if (prod != 2) {
				w22 = -0.043397993;
			} else {
				w22 = -0.020023746;
			}
		}
	} else {
		if (cons != 1) {
			if (rel_time < 875) {
				if (hops < 4) {
					if (prod != 0) {
						if (hops < 3) {
							w22 = 0.06226819;
						} else {
							w22 = 0.07549361;
						}
					} else {
						if (hops < 3) {
							w22 = 0.063153654;
						} else {
							w22 = 0.020074284;
						}
					}
				} else {
					if (prod != 0) {
						w22 = 0.06958545;
					} else {
						w22 = 0.15678826;
					}
				}
			} else {
				if (rel_time < 1262) {
					if (hops < 3) {
						if (rel_time < 987) {
							w22 = 0.03355888;
						} else {
							w22 = -0.022014974;
						}
					} else {
						if (rel_time < 1071) {
							w22 = -0.04087703;
						} else {
							w22 = 0.013165674;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 15781) {
							w22 = 0.036292378;
						} else {
							w22 = 0.071940474;
						}
					} else {
						if (cons != 4) {
							w22 = 0.042666245;
						} else {
							w22 = 0.06561293;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 616) {
					if (hops < 3) {
						if (rel_time < 601) {
							w22 = 0.038095318;
						} else {
							w22 = 0.02036788;
						}
					} else {
						if (rel_time < 553) {
							w22 = 0.024678854;
						} else {
							w22 = -0.050486352;
						}
					}
				} else {
					if (rel_time < 1458) {
						if (hops < 2) {
							w22 = 0.059340034;
						} else {
							w22 = 0.03199136;
						}
					} else {
						if (hops < 2) {
							w22 = 0.024665028;
						} else {
							w22 = 0.030870853;
						}
					}
				}
			} else {
				w22 = 0.046526372;
			}
		}
	}
	float w23;
	if (size < 126) {
		w23 = -0.028717693;
	} else {
		if (hops < 2) {
			if (cons != 4) {
				if (cons != 2) {
					if (rel_time < 15781) {
						if (rel_time < 12048) {
							w23 = 0.02172089;
						} else {
							w23 = 0.015087206;
						}
					} else {
						w23 = -0.06544978;
					}
				} else {
					if (rel_time < 671) {
						if (rel_time < 553) {
							w23 = 0.012085653;
						} else {
							w23 = 0.047028366;
						}
					} else {
						w23 = 0.006372824;
					}
				}
			} else {
				if (rel_time < 15967) {
					if (rel_time < 15382) {
						if (rel_time < 8322) {
							w23 = 0.032536782;
						} else {
							w23 = 0.046030745;
						}
					} else {
						w23 = 0.18446307;
					}
				} else {
					w23 = -0.02310099;
				}
			}
		} else {
			if (cons != 2) {
				if (hops < 4) {
					if (prod != 0) {
						if (rel_time < 553) {
							w23 = 0.02302603;
						} else {
							w23 = 0.051495876;
						}
					} else {
						if (rel_time < 1268) {
							w23 = -0.0064196666;
						} else {
							w23 = 0.024127368;
						}
					}
				} else {
					if (rel_time < 1850) {
						if (prod != 0) {
							w23 = 0.053263053;
						} else {
							w23 = 0.0030470586;
						}
					} else {
						if (cons != 1) {
							w23 = 0.047442053;
						} else {
							w23 = 0.033797715;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 6170) {
						w23 = 0.056252368;
					} else {
						if (rel_time < 7930) {
							w23 = 0.036437698;
						} else {
							w23 = 0.053123053;
						}
					}
				} else {
					if (rel_time < 4008) {
						w23 = 0.039299317;
					} else {
						if (rel_time < 5577) {
							w23 = 0.021550385;
						} else {
							w23 = 0.03274655;
						}
					}
				}
			}
		}
	}
	float w24;
	if (size < 126) {
		w24 = -0.020102605;
	} else {
		if (cons != 1) {
			if (hops < 3) {
				if (rel_time < 15781) {
					if (cons != 4) {
						if (hops < 2) {
							w24 = 0.010817946;
						} else {
							w24 = 0.02983709;
						}
					} else {
						if (hops < 2) {
							w24 = 0.027028026;
						} else {
							w24 = -0.004834175;
						}
					}
				} else {
					if (rel_time < 15967) {
						if (cons != 3) {
							w24 = 0.38009903;
						} else {
							w24 = -0.049831826;
						}
					} else {
						if (hops < 2) {
							w24 = -0.016186673;
						} else {
							w24 = 0.029380778;
						}
					}
				}
			} else {
				if (cons != 4) {
					if (rel_time < 15781) {
						if (rel_time < 671) {
							w24 = 0.036842544;
						} else {
							w24 = 0.020110609;
						}
					} else {
						if (hops < 4) {
							w24 = -0.33821687;
						} else {
							w24 = 0.01622489;
						}
					}
				} else {
					if (rel_time < 6754) {
						if (rel_time < 4400) {
							w24 = 0.035510644;
						} else {
							w24 = 0.017457167;
						}
					} else {
						if (rel_time < 8131) {
							w24 = 0.068960726;
						} else {
							w24 = 0.037368715;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 9113) {
					if (rel_time < 5380) {
						if (rel_time < 5190) {
							w24 = 0.012863542;
						} else {
							w24 = 0.026750645;
						}
					} else {
						if (rel_time < 8518) {
							w24 = 0.0073827324;
						} else {
							w24 = -0.005009655;
						}
					}
				} else {
					if (rel_time < 13819) {
						if (hops < 2) {
							w24 = 0.013265106;
						} else {
							w24 = 0.02366778;
						}
					} else {
						if (rel_time < 14009) {
							w24 = 0.00010156466;
						} else {
							w24 = 0.013400936;
						}
					}
				}
			} else {
				w24 = 0.023030171;
			}
		}
	}
	float w25;
	if (size < 126) {
		w25 = -0.014073877;
	} else {
		if (prod != 0) {
			if (rel_time < 553) {
				w25 = 0.012766168;
			} else {
				w25 = 0.027892977;
			}
		} else {
			if (rel_time < 1262) {
				if (cons != 2) {
					if (hops < 3) {
						if (rel_time < 1071) {
							w25 = 0.01175467;
						} else {
							w25 = -0.022699857;
						}
					} else {
						if (rel_time < 1071) {
							w25 = -0.02926921;
						} else {
							w25 = -0.00025264526;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w25 = 0.025165766;
						} else {
							w25 = -0.006087875;
						}
					} else {
						w25 = 0.08957653;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 15781) {
						if (cons != 4) {
							w25 = 0.012588832;
						} else {
							w25 = 0.0072712684;
						}
					} else {
						if (rel_time < 15967) {
							w25 = 0.10343356;
						} else {
							w25 = 0.0059124404;
						}
					}
				} else {
					if (cons != 4) {
						if (rel_time < 15781) {
							w25 = 0.013987009;
						} else {
							w25 = -0.20358115;
						}
					} else {
						if (rel_time < 15967) {
							w25 = 0.0273863;
						} else {
							w25 = 0.004163028;
						}
					}
				}
			}
		}
	}
	float w26;
	if (size < 126) {
		w26 = -0.00985331;
	} else {
		if (cons != 1) {
			if (hops < 2) {
				if (cons != 2) {
					if (rel_time < 15781) {
						if (rel_time < 9700) {
							w26 = 0.008753303;
						} else {
							w26 = 0.018512378;
						}
					} else {
						if (cons != 3) {
							w26 = -0.013365406;
						} else {
							w26 = -0.06193397;
						}
					}
				} else {
					if (rel_time < 601) {
						w26 = 0.02308114;
					} else {
						w26 = -0.0024059338;
					}
				}
			} else {
				if (cons != 2) {
					if (hops < 3) {
						if (rel_time < 15781) {
							w26 = 0.0026531026;
						} else {
							w26 = 0.05935004;
						}
					} else {
						if (cons != 3) {
							w26 = 0.017341804;
						} else {
							w26 = 0.0079712765;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 14990) {
							w26 = 0.022589406;
						} else {
							w26 = 0.038212292;
						}
					} else {
						if (rel_time < 14990) {
							w26 = 0.0134238675;
						} else {
							w26 = -0.0015438036;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				w26 = 0.005593068;
			} else {
				w26 = 0.012570774;
			}
		}
	}
	float w27;
	if (size < 126) {
		w27 = -0.0068961647;
	} else {
		if (hops < 4) {
			if (prod != 0) {
				if (rel_time < 553) {
					w27 = 0.0058279783;
				} else {
					w27 = 0.016453808;
				}
			} else {
				if (rel_time < 1262) {
					if (hops < 3) {
						if (rel_time < 987) {
							w27 = 0.009363108;
						} else {
							w27 = -0.017047808;
						}
					} else {
						if (rel_time < 616) {
							w27 = -0.030197533;
						} else {
							w27 = -0.011474159;
						}
					}
				} else {
					if (rel_time < 15967) {
						if (rel_time < 15781) {
							w27 = 0.006205998;
						} else {
							w27 = 0.05116799;
						}
					} else {
						w27 = -0.008224103;
					}
				}
			}
		} else {
			if (rel_time < 15781) {
				if (rel_time < 13814) {
					if (rel_time < 13422) {
						if (rel_time < 12054) {
							w27 = 0.012484827;
						} else {
							w27 = -0.0031891048;
						}
					} else {
						if (rel_time < 13427) {
							w27 = 0.16397154;
						} else {
							w27 = 0.039904058;
						}
					}
				} else {
					if (rel_time < 14407) {
						w27 = -0.013916271;
					} else {
						if (rel_time < 14794) {
							w27 = 0.037086178;
						} else {
							w27 = -0.0015611128;
						}
					}
				}
			} else {
				w27 = 0.042583574;
			}
		}
	}
	float w28;
	if (size < 126) {
		w28 = -0.004827079;
	} else {
		if (cons != 1) {
			if (hops < 2) {
				if (cons != 4) {
					if (rel_time < 15781) {
						if (rel_time < 4008) {
							w28 = -0.0053906487;
						} else {
							w28 = 0.0016994402;
						}
					} else {
						w28 = -0.058709625;
					}
				} else {
					if (rel_time < 15191) {
						if (rel_time < 14407) {
							w28 = 0.0102530895;
						} else {
							w28 = 0.053748928;
						}
					} else {
						w28 = -0.0042851167;
					}
				}
			} else {
				if (cons != 2) {
					if (hops < 3) {
						if (rel_time < 15382) {
							w28 = -0.00039728975;
						} else {
							w28 = 0.030902427;
						}
					} else {
						if (rel_time < 2640) {
							w28 = -0.0015463699;
						} else {
							w28 = 0.008240893;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 11068) {
							w28 = 0.01654042;
						} else {
							w28 = 0.008800972;
						}
					} else {
						w28 = 0.0069742124;
					}
				}
			}
		} else {
			w28 = 0.0025204702;
		}
	}
	float w29;
	if (size < 126) {
		w29 = -0.0033805505;
	} else {
		if (prod != 0) {
			w29 = 0.008398222;
		} else {
			if (rel_time < 2445) {
				if (cons != 4) {
					if (hops < 2) {
						if (cons != 3) {
							w29 = -0.0020176908;
						} else {
							w29 = -0.017802307;
						}
					} else {
						if (hops < 3) {
							w29 = 0.013442001;
						} else {
							w29 = -0.004074512;
						}
					}
				} else {
					if (hops < 2) {
						w29 = 0.008352008;
					} else {
						if (hops < 3) {
							w29 = -0.029945683;
						} else {
							w29 = -0.000341544;
						}
					}
				}
			} else {
				if (rel_time < 2831) {
					if (hops < 4) {
						if (rel_time < 2635) {
							w29 = 0.0040589953;
						} else {
							w29 = 0.022978656;
						}
					} else {
						w29 = 0.048656087;
					}
				} else {
					if (rel_time < 3621) {
						if (rel_time < 2837) {
							w29 = -0.01375432;
						} else {
							w29 = 0.009845442;
						}
					} else {
						if (hops < 4) {
							w29 = 0.002469173;
						} else {
							w29 = 0.0065304576;
						}
					}
				}
			}
		}
	}
	float w30;
	if (size < 126) {
		w30 = -0.0023643188;
	} else {
		if (rel_time < 15967) {
			if (rel_time < 15781) {
				if (rel_time < 15191) {
					if (rel_time < 14996) {
						if (rel_time < 13819) {
							w30 = 0.0025654586;
						} else {
							w30 = -0.0017257346;
						}
					} else {
						if (rel_time < 15186) {
							w30 = 0.02481172;
						} else {
							w30 = 0.16866454;
						}
					}
				} else {
					w30 = -0.0020368344;
				}
			} else {
				if (cons != 3) {
					if (hops < 2) {
						w30 = -0.025473678;
					} else {
						if (hops < 3) {
							w30 = 0.39535972;
						} else {
							w30 = 0.117831916;
						}
					}
				} else {
					if (hops < 2) {
						w30 = -0.041913874;
					} else {
						if (hops < 4) {
							w30 = -0.14139411;
						} else {
							w30 = 0.051067244;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				w30 = -0.010287836;
			} else {
				w30 = 0.023077875;
			}
		}
	}
	return (524.2937 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30);
}
