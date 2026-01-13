#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

float bolt(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	float w0;
	if (size < 133) {
		if (rel_time < 1447) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (hops < 2) {
						if (prod != 0) {
							w0 = 37.518833;
						} else {
							w0 = 41.188705;
						}
					} else {
						if (prod != 0) {
							w0 = 40.998898;
						} else {
							w0 = 44.86117;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 4) {
							w0 = 44.52535;
						} else {
							w0 = 47.937473;
						}
					} else {
						w0 = 49.5238;
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 3) {
						w0 = -35.019386;
					} else {
						w0 = -28.98027;
					}
				} else {
					w0 = 44.746845;
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w0 = -36.969063;
					} else {
						w0 = -33.669563;
					}
				} else {
					if (hops < 4) {
						if (prod != 1) {
							w0 = -30.314232;
						} else {
							w0 = -29.85232;
						}
					} else {
						w0 = -26.52334;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 2025) {
						if (hops < 2) {
							w0 = -25.470278;
						} else {
							w0 = -21.727953;
						}
					} else {
						if (rel_time < 11870) {
							w0 = -12.535623;
						} else {
							w0 = -23.080067;
						}
					}
				} else {
					if (rel_time < 11870) {
						if (rel_time < 11291) {
							w0 = -8.279728;
						} else {
							w0 = 2.312297;
						}
					} else {
						if (hops < 4) {
							w0 = -18.317791;
						} else {
							w0 = -15.546451;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 867) {
				if (hops < 2) {
					w0 = 54.337368;
				} else {
					w0 = 57.68947;
				}
			} else {
				if (hops < 2) {
					if (rel_time < 10734) {
						if (rel_time < 10155) {
							w0 = 63.756207;
						} else {
							w0 = 66.65338;
						}
					} else {
						w0 = 61.001762;
					}
				} else {
					if (rel_time < 939) {
						w0 = 63.964508;
					} else {
						if (rel_time < 10736) {
							w0 = 67.29139;
						} else {
							w0 = 63.97273;
						}
					}
				}
			}
		} else {
			if (rel_time < 867) {
				w0 = 62.241116;
			} else {
				if (hops < 4) {
					if (rel_time < 10739) {
						if (rel_time < 939) {
							w0 = 67.3809;
						} else {
							w0 = 70.580765;
						}
					} else {
						w0 = 67.31008;
					}
				} else {
					w0 = 73.84264;
				}
			}
		}
	}
	float w1;
	if (size < 133) {
		if (rel_time < 1447) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w1 = 18.775587;
						} else {
							w1 = 20.514553;
						}
					} else {
						if (hops < 2) {
							w1 = 20.637428;
						} else {
							w1 = 22.468943;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 0) {
							w1 = 22.282011;
						} else {
							w1 = 23.953825;
						}
					} else {
						if (prod != 0) {
							w1 = 24.033857;
						} else {
							w1 = 26.915323;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w1 = -19.29928;
					} else {
						w1 = -15.630512;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w1 = 18.705751;
						} else {
							w1 = 22.162973;
						}
					} else {
						w1 = 26.346884;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w1 = -18.485376;
					} else {
						w1 = -16.83544;
					}
				} else {
					if (hops < 4) {
						if (prod != 1) {
							w1 = -15.158535;
						} else {
							w1 = -14.927522;
						}
					} else {
						w1 = -13.263584;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11870) {
						if (rel_time < 11291) {
							w1 = -9.247113;
						} else {
							w1 = 1.080257;
						}
					} else {
						w1 = -13.712609;
					}
				} else {
					if (rel_time < 2025) {
						if (hops < 3) {
							w1 = -10.8798065;
						} else {
							w1 = -13.428231;
						}
					} else {
						if (rel_time < 2605) {
							w1 = 5.544529;
						} else {
							w1 = -4.721958;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 888) {
				w1 = 28.20393;
			} else {
				if (hops < 2) {
					if (rel_time < 939) {
						w1 = 29.36412;
					} else {
						if (rel_time < 1515) {
							w1 = 34.39772;
						} else {
							w1 = 31.890497;
						}
					}
				} else {
					if (rel_time < 10736) {
						if (rel_time < 10159) {
							w1 = 33.39166;
						} else {
							w1 = 36.41096;
						}
					} else {
						w1 = 32.034184;
					}
				}
			}
		} else {
			if (rel_time < 867) {
				if (hops < 4) {
					w1 = 30.279558;
				} else {
					w1 = 33.752716;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 1515) {
						if (rel_time < 939) {
							w1 = 33.748623;
						} else {
							w1 = 38.446808;
						}
					} else {
						if (rel_time < 2094) {
							w1 = 32.455444;
						} else {
							w1 = 35.171528;
						}
					}
				} else {
					if (rel_time < 939) {
						w1 = 34.007614;
					} else {
						if (rel_time < 10780) {
							w1 = 37.25214;
						} else {
							w1 = 34.040047;
						}
					}
				}
			}
		}
	}
	float w2;
	if (size < 133) {
		if (rel_time < 1447) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w2 = 9.395901;
						} else {
							w2 = 10.264849;
						}
					} else {
						if (hops < 2) {
							w2 = 10.340289;
						} else {
							w2 = 11.253681;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 0) {
							w2 = 11.15069;
						} else {
							w2 = 12.000832;
						}
					} else {
						if (prod != 0) {
							w2 = 12.049575;
						} else {
							w2 = 13.529235;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 3) {
						w2 = -9.067099;
					} else {
						if (hops < 4) {
							w2 = -7.3234386;
						} else {
							w2 = -3.0559814;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w2 = 9.45916;
						} else {
							w2 = 11.190133;
						}
					} else {
						w2 = 13.336088;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w2 = -9.243122;
					} else {
						if (prod != 1) {
							w2 = -8.505882;
						} else {
							w2 = -8.32955;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 4343) {
							w2 = -7.4264655;
						} else {
							w2 = -7.556545;
						}
					} else {
						if (prod != 1) {
							w2 = -6.7250404;
						} else {
							w2 = -6.536051;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 3184) {
						if (rel_time < 2605) {
							w2 = -1.8663445;
						} else {
							w2 = -13.230809;
						}
					} else {
						if (rel_time < 3763) {
							w2 = 6.982927;
						} else {
							w2 = -3.4462378;
						}
					}
				} else {
					if (rel_time < 10711) {
						if (rel_time < 10132) {
							w2 = 0.25960016;
						} else {
							w2 = 10.820561;
						}
					} else {
						if (rel_time < 11291) {
							w2 = -9.078428;
						} else {
							w2 = 0.04404714;
						}
					}
				}
			}
		}
	} else {
		if (hops < 3) {
			if (rel_time < 939) {
				if (hops < 2) {
					if (rel_time < 867) {
						w2 = 13.137047;
					} else {
						w2 = 14.77178;
					}
				} else {
					w2 = 15.109891;
				}
			} else {
				if (rel_time < 1515) {
					if (hops < 2) {
						w2 = 17.228167;
					} else {
						w2 = 19.964302;
					}
				} else {
					if (rel_time < 2094) {
						if (hops < 2) {
							w2 = 13.098031;
						} else {
							w2 = 13.905259;
						}
					} else {
						if (rel_time < 2627) {
							w2 = 19.32961;
						} else {
							w2 = 16.296078;
						}
					}
				}
			}
		} else {
			if (rel_time < 867) {
				if (hops < 4) {
					w2 = 15.165935;
				} else {
					w2 = 16.967596;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 10739) {
						if (rel_time < 10159) {
							w2 = 17.487091;
						} else {
							w2 = 20.407833;
						}
					} else {
						w2 = 16.157799;
					}
				} else {
					if (rel_time < 939) {
						w2 = 17.095713;
					} else {
						if (rel_time < 1515) {
							w2 = 21.371418;
						} else {
							w2 = 18.380192;
						}
					}
				}
			}
		}
	}
	float w3;
	if (size < 133) {
		if (rel_time < 1447) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w3 = 4.7020173;
						} else {
							w3 = 5.1362147;
						}
					} else {
						if (hops < 2) {
							w3 = 5.18097;
						} else {
							w3 = 5.6364684;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 0) {
							w3 = 5.580182;
						} else {
							w3 = 6.0123816;
						}
					} else {
						if (rel_time < 1014) {
							w3 = 6.0430536;
						} else {
							w3 = 6.8050094;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w3 = -5.3448744;
					} else {
						if (hops < 4) {
							w3 = -3.8504224;
						} else {
							w3 = -1.8335937;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 4.783322;
						} else {
							w3 = 5.6499248;
						}
					} else {
						w3 = 6.7503796;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w3 = -4.6217813;
					} else {
						if (prod != 1) {
							w3 = -4.253284;
						} else {
							w3 = -4.165109;
						}
					}
				} else {
					if (hops < 4) {
						if (prod != 1) {
							w3 = -3.8200984;
						} else {
							w3 = -3.7036157;
						}
					} else {
						if (prod != 1) {
							w3 = -3.3634744;
						} else {
							w3 = -3.268965;
						}
					}
				}
			} else {
				if (rel_time < 2025) {
					if (hops < 2) {
						w3 = -7.210782;
					} else {
						if (hops < 3) {
							w3 = -4.5160193;
						} else {
							w3 = -6.0635705;
						}
					}
				} else {
					if (rel_time < 2605) {
						if (hops < 2) {
							w3 = 6.3829064;
						} else {
							w3 = 3.562566;
						}
					} else {
						if (rel_time < 4342) {
							w3 = -4.5866556;
						} else {
							w3 = -0.87679595;
						}
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			if (rel_time < 3207) {
				if (rel_time < 2627) {
					if (rel_time < 2094) {
						if (rel_time < 1515) {
							w3 = 7.544221;
						} else {
							w3 = 6.560176;
						}
					} else {
						w3 = 9.279343;
					}
				} else {
					w3 = 5.1180444;
				}
			} else {
				if (rel_time < 3785) {
					w3 = 10.792661;
				} else {
					if (rel_time < 4364) {
						w3 = 5.1418943;
					} else {
						if (rel_time < 4944) {
							w3 = 10.79692;
						} else {
							w3 = 7.718691;
						}
					}
				}
			}
		} else {
			if (rel_time < 939) {
				if (hops < 4) {
					if (rel_time < 867) {
						w3 = 7.423649;
					} else {
						w3 = 8.00538;
					}
				} else {
					w3 = 8.585066;
				}
			} else {
				if (rel_time < 1515) {
					if (hops < 3) {
						w3 = 9.997077;
					} else {
						w3 = 10.594166;
					}
				} else {
					if (rel_time < 2094) {
						if (hops < 4) {
							w3 = 7.2305994;
						} else {
							w3 = 6.4904585;
						}
					} else {
						if (rel_time < 2673) {
							w3 = 10.936498;
						} else {
							w3 = 8.613912;
						}
					}
				}
			}
		}
	}
	float w4;
	if (size < 133) {
		if (rel_time < 1447) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (rel_time < 888) {
						w4 = 2.3783784;
					} else {
						if (hops < 2) {
							w4 = 2.4709175;
						} else {
							w4 = 2.7744951;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1014) {
							w4 = 2.792712;
						} else {
							w4 = 3.0222466;
						}
					} else {
						if (prod != 0) {
							w4 = 3.0278616;
						} else {
							w4 = 3.4202542;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w4 = -2.7155535;
					} else {
						w4 = -1.923138;
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 2.418837;
						} else {
							w4 = 2.9499571;
						}
					} else {
						w4 = 5.4859786;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 2026) {
							w4 = -2.4319816;
						} else {
							w4 = -2.3043556;
						}
					} else {
						if (rel_time < 10272) {
							w4 = -2.0949726;
						} else {
							w4 = -2.156775;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1467) {
							w4 = -1.6072389;
						} else {
							w4 = -1.8873744;
						}
					} else {
						if (rel_time < 2673) {
							w4 = -1.581432;
						} else {
							w4 = -1.6707728;
						}
					}
				}
			} else {
				if (rel_time < 10711) {
					if (rel_time < 10132) {
						if (rel_time < 9555) {
							w4 = -0.21365745;
						} else {
							w4 = -10.61653;
						}
					} else {
						if (hops < 4) {
							w4 = 9.233623;
						} else {
							w4 = 5.873779;
						}
					}
				} else {
					if (rel_time < 11291) {
						if (hops < 4) {
							w4 = -10.806762;
						} else {
							w4 = -4.1259675;
						}
					} else {
						if (rel_time < 11870) {
							w4 = 5.9981723;
						} else {
							w4 = -4.9149384;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 9622) {
			if (rel_time < 9042) {
				if (rel_time < 8463) {
					if (rel_time < 7884) {
						if (rel_time < 7306) {
							w4 = 4.300713;
						} else {
							w4 = 1.4162635;
						}
					} else {
						if (rel_time < 8417) {
							w4 = 6.9867396;
						} else {
							w4 = 7.399991;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w4 = 1.2776124;
						} else {
							w4 = 1.5370343;
						}
					} else {
						w4 = 2.1365235;
					}
				}
			} else {
				if (rel_time < 9576) {
					w4 = 7.065104;
				} else {
					w4 = 7.4191985;
				}
			}
		} else {
			if (rel_time < 10201) {
				if (rel_time < 10159) {
					if (hops < 3) {
						w4 = 1.3027121;
					} else {
						w4 = 1.4506786;
					}
				} else {
					w4 = 2.12301;
				}
			} else {
				if (rel_time < 10780) {
					if (rel_time < 10739) {
						if (rel_time < 10734) {
							w4 = 5.483774;
						} else {
							w4 = 5.866348;
						}
					} else {
						w4 = 7.631118;
					}
				} else {
					if (hops < 2) {
						w4 = 2.6478224;
					} else {
						w4 = 3.6968162;
					}
				}
			}
		}
	}
	float w5;
	if (size < 133) {
		if (rel_time < 1447) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (prod != 0) {
						if (hops < 2) {
							w5 = 1.1418322;
						} else {
							w5 = 1.2830254;
						}
					} else {
						w5 = 1.4057046;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1014) {
							w5 = 1.3975382;
						} else {
							w5 = 1.5142995;
						}
					} else {
						if (prod != 1) {
							w5 = 1.6627308;
						} else {
							w5 = 1.4285774;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 2) {
						w5 = -1.3796653;
					} else {
						if (hops < 4) {
							w5 = -0.98619556;
						} else {
							w5 = -0.3308838;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w5 = 1.2231688;
						} else {
							w5 = 1.4835569;
						}
					} else {
						w5 = 2.9923594;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (prod != 0) {
					if (rel_time < 4921) {
						if (prod != 1) {
							w5 = -1.1988297;
						} else {
							w5 = -1.1582869;
						}
					} else {
						if (rel_time < 5502) {
							w5 = -1.0749205;
						} else {
							w5 = -1.152203;
						}
					}
				} else {
					if (rel_time < 4921) {
						if (rel_time < 4342) {
							w5 = -2.3289;
						} else {
							w5 = 7.915718;
						}
					} else {
						if (rel_time < 5501) {
							w5 = -12.120565;
						} else {
							w5 = -1.481203;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 3) {
						if (prod != 1) {
							w5 = -1.0744882;
						} else {
							w5 = -1.0304368;
						}
					} else {
						if (hops < 4) {
							w5 = -0.9404711;
						} else {
							w5 = -0.8297977;
						}
					}
				} else {
					if (rel_time < 3184) {
						if (rel_time < 2605) {
							w5 = -0.33818802;
						} else {
							w5 = -4.005369;
						}
					} else {
						if (rel_time < 3763) {
							w5 = 7.42641;
						} else {
							w5 = 0.05008676;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 3252) {
			if (rel_time < 2673) {
				if (rel_time < 2626) {
					if (rel_time < 939) {
						if (hops < 2) {
							w5 = 1.0776179;
						} else {
							w5 = 1.7706836;
						}
					} else {
						if (rel_time < 1515) {
							w5 = 2.9328132;
						} else {
							w5 = 1.6465623;
						}
					}
				} else {
					if (hops < 3) {
						w5 = 2.462217;
					} else {
						if (hops < 4) {
							w5 = 4.0048256;
						} else {
							w5 = 4.507613;
						}
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 3205) {
						w5 = 0.43536627;
					} else {
						w5 = 0.34267816;
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w5 = -0.91891336;
						} else {
							w5 = -0.6294737;
						}
					} else {
						if (rel_time < 3207) {
							w5 = 0.056946404;
						} else {
							w5 = -0.060743444;
						}
					}
				}
			}
		} else {
			if (rel_time < 3830) {
				if (hops < 2) {
					w5 = 3.2588255;
				} else {
					if (hops < 4) {
						w5 = 5.2287745;
					} else {
						w5 = 5.651841;
					}
				}
			} else {
				if (rel_time < 4410) {
					if (hops < 2) {
						w5 = 0.42862412;
					} else {
						if (hops < 4) {
							w5 = -0.71027935;
						} else {
							w5 = -0.02924013;
						}
					}
				} else {
					if (rel_time < 4989) {
						if (hops < 2) {
							w5 = 3.260952;
						} else {
							w5 = 5.209554;
						}
					} else {
						if (rel_time < 5568) {
							w5 = -0.7293121;
						} else {
							w5 = 2.3607576;
						}
					}
				}
			}
		}
	}
	float w6;
	if (size < 133) {
		if (rel_time < 12009) {
			if (rel_time < 9114) {
				if (rel_time < 8534) {
					if (rel_time < 7890) {
						if (rel_time < 7310) {
							w6 = -0.19653353;
						} else {
							w6 = -3.7429175;
						}
					} else {
						if (prod != 0) {
							w6 = -0.52790767;
						} else {
							w6 = 9.705339;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 2) {
							w6 = -0.6466266;
						} else {
							w6 = -0.4861093;
						}
					} else {
						if (rel_time < 8975) {
							w6 = -10.333579;
						} else {
							w6 = 9.805979;
						}
					}
				}
			} else {
				if (rel_time < 9121) {
					if (hops < 2) {
						w6 = 8.679999;
					} else {
						if (hops < 4) {
							w6 = 9.925873;
						} else {
							w6 = 11.208096;
						}
					}
				} else {
					if (rel_time < 10132) {
						if (rel_time < 9693) {
							w6 = -0.51089233;
						} else {
							w6 = -5.125331;
						}
					} else {
						if (rel_time < 10711) {
							w6 = 1.2053977;
						} else {
							w6 = -0.60699135;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				w6 = -1.5183799;
			} else {
				if (hops < 3) {
					w6 = -2.805898;
				} else {
					if (hops < 4) {
						w6 = -2.23465;
					} else {
						w6 = -2.6290495;
					}
				}
			}
		}
	} else {
		if (rel_time < 9622) {
			if (rel_time < 9042) {
				if (rel_time < 8463) {
					if (rel_time < 6727) {
						if (rel_time < 6147) {
							w6 = 1.1968739;
						} else {
							w6 = -1.8974653;
						}
					} else {
						if (rel_time < 7306) {
							w6 = 3.93248;
						} else {
							w6 = 0.99732053;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 8999) {
							w6 = -0.53198105;
						} else {
							w6 = -0.3768626;
						}
					} else {
						w6 = -0.09997889;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w6 = 2.3116295;
					} else {
						w6 = 2.4813154;
					}
				} else {
					w6 = 2.8351338;
				}
			}
		} else {
			if (rel_time < 10201) {
				if (rel_time < 10159) {
					if (hops < 3) {
						w6 = -0.5275849;
					} else {
						w6 = -0.45176125;
					}
				} else {
					w6 = -0.10675412;
				}
			} else {
				if (rel_time < 10780) {
					if (rel_time < 10739) {
						if (hops < 2) {
							w6 = 1.5628592;
						} else {
							w6 = 1.7538419;
						}
					} else {
						w6 = 2.6621819;
					}
				} else {
					if (rel_time < 11313) {
						w6 = 0.14859915;
					} else {
						if (hops < 3) {
							w6 = 0.58096224;
						} else {
							w6 = 0.74793065;
						}
					}
				}
			}
		}
	}
	float w7;
	if (size < 133) {
		if (rel_time < 6729) {
			if (rel_time < 6219) {
				if (rel_time < 5640) {
					if (rel_time < 5060) {
						if (rel_time < 4481) {
							w7 = -0.42814603;
						} else {
							w7 = 2.5833035;
						}
					} else {
						if (rel_time < 5064) {
							w7 = -8.68659;
						} else {
							w7 = -0.42772126;
						}
					}
				} else {
					if (rel_time < 6079) {
						if (hops < 3) {
							w7 = 9.264082;
						} else {
							w7 = 10.659639;
						}
					} else {
						if (prod != 0) {
							w7 = -0.39512753;
						} else {
							w7 = -9.862879;
						}
					}
				}
			} else {
				if (rel_time < 6658) {
					if (hops < 3) {
						if (hops < 2) {
							w7 = -11.291385;
						} else {
							w7 = -10.374761;
						}
					} else {
						if (hops < 4) {
							w7 = -9.510126;
						} else {
							w7 = -8.588152;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 6727) {
							w7 = -0.49070555;
						} else {
							w7 = -0.39847308;
						}
					} else {
						if (rel_time < 6661) {
							w7 = -0.54485816;
						} else {
							w7 = -0.18491028;
						}
					}
				}
			}
		} else {
			if (rel_time < 7237) {
				if (prod != 0) {
					if (hops < 4) {
						w7 = -0.54989135;
					} else {
						w7 = -0.39936525;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w7 = 8.7708;
						} else {
							w7 = 9.70893;
						}
					} else {
						if (hops < 4) {
							w7 = 10.348009;
						} else {
							w7 = 11.306741;
						}
					}
				}
			} else {
				if (rel_time < 7816) {
					if (prod != 0) {
						if (rel_time < 7310) {
							w7 = -0.37207904;
						} else {
							w7 = 1.3508394;
						}
					} else {
						if (hops < 3) {
							w7 = -8.991163;
						} else {
							w7 = -7.553402;
						}
					}
				} else {
					if (rel_time < 8396) {
						if (prod != 0) {
							w7 = 1.1719137;
						} else {
							w7 = 4.8550844;
						}
					} else {
						if (rel_time < 8975) {
							w7 = -1.9235607;
						} else {
							w7 = -0.024875179;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 5568) {
			if (rel_time < 4989) {
				if (rel_time < 4942) {
					if (rel_time < 3830) {
						if (rel_time < 3252) {
							w7 = 0.2475797;
						} else {
							w7 = 1.7550803;
						}
					} else {
						if (rel_time < 4410) {
							w7 = -0.7567719;
						} else {
							w7 = 1.0272937;
						}
					}
				} else {
					if (hops < 2) {
						w7 = 1.052372;
					} else {
						if (hops < 4) {
							w7 = 1.9459293;
						} else {
							w7 = 2.4199932;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 3) {
						w7 = -1.0895036;
					} else {
						w7 = -0.9112243;
					}
				} else {
					w7 = -0.25636613;
				}
			}
		} else {
			if (rel_time < 6147) {
				if (hops < 2) {
					w7 = 2.9645748;
				} else {
					if (rel_time < 6103) {
						w7 = 3.4185555;
					} else {
						w7 = 3.8103452;
					}
				}
			} else {
				if (rel_time < 6727) {
					if (hops < 4) {
						if (rel_time < 6681) {
							w7 = -1.1110808;
						} else {
							w7 = -0.83452547;
						}
					} else {
						w7 = -0.23261982;
					}
				} else {
					if (rel_time < 7306) {
						if (hops < 2) {
							w7 = 1.6868414;
						} else {
							w7 = 2.0808396;
						}
					} else {
						if (rel_time < 7884) {
							w7 = -0.96972954;
						} else {
							w7 = 0.6485103;
						}
					}
				}
			}
		}
	}
	float w8;
	if (rel_time < 3830) {
		if (rel_time < 3254) {
			if (rel_time < 2674) {
				if (rel_time < 2165) {
					if (rel_time < 1515) {
						if (rel_time < 867) {
							w8 = -0.14902301;
						} else {
							w8 = 0.6123781;
						}
					} else {
						if (prod != 0) {
							w8 = -0.1938177;
						} else {
							w8 = -2.0703928;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w8 = -0.15915051;
						} else {
							w8 = 0.9753372;
						}
					} else {
						if (hops < 2) {
							w8 = 4.7779336;
						} else {
							w8 = 2.370394;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 2) {
							w8 = -0.27741894;
						} else {
							w8 = -0.14000925;
						}
					} else {
						if (hops < 2) {
							w8 = -0.5119891;
						} else {
							w8 = -1.0621192;
						}
					}
				} else {
					if (hops < 2) {
						w8 = -4.107521;
					} else {
						if (hops < 4) {
							w8 = -1.2911402;
						} else {
							w8 = -4.2257643;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 3784) {
					if (rel_time < 3783) {
						if (hops < 3) {
							w8 = -0.32428405;
						} else {
							w8 = -0.18074545;
						}
					} else {
						if (hops < 2) {
							w8 = 0.15663427;
						} else {
							w8 = 1.0245192;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 0.16512011;
					} else {
						if (hops < 4) {
							w8 = 1.147165;
						} else {
							w8 = 1.3731841;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w8 = 5.971636;
					} else {
						if (hops < 3) {
							w8 = 2.6986234;
						} else {
							w8 = 3.6138637;
						}
					}
				} else {
					w8 = 9.786717;
				}
			}
		}
	} else {
		if (rel_time < 4342) {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w8 = -0.22181225;
					} else {
						if (rel_time < 3903) {
							w8 = -0.30477116;
						} else {
							w8 = -0.53659976;
						}
					}
				} else {
					if (rel_time < 3831) {
						w8 = -0.2879698;
					} else {
						if (hops < 4) {
							w8 = -0.06616687;
						} else {
							w8 = -0.013899155;
						}
					}
				}
			} else {
				if (hops < 3) {
					w8 = -8.643117;
				} else {
					if (hops < 4) {
						w8 = -7.455235;
					} else {
						w8 = -6.4427586;
					}
				}
			}
		} else {
			if (rel_time < 4921) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 4481) {
							w8 = -0.18545377;
						} else {
							w8 = -1.7425741;
						}
					} else {
						if (hops < 2) {
							w8 = -0.005023079;
						} else {
							w8 = -0.5315383;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 2.77359;
					} else {
						if (hops < 3) {
							w8 = 8.3849;
						} else {
							w8 = 9.475583;
						}
					}
				}
			} else {
				if (rel_time < 5501) {
					if (prod != 0) {
						if (size < 133) {
							w8 = -1.5378808;
						} else {
							w8 = 0.8648412;
						}
					} else {
						if (hops < 2) {
							w8 = -1.9369789;
						} else {
							w8 = -5.7265186;
						}
					}
				} else {
					if (rel_time < 6147) {
						if (prod != 0) {
							w8 = 0.1251673;
						} else {
							w8 = 5.2280684;
						}
					} else {
						if (rel_time < 6658) {
							w8 = -2.6513493;
						} else {
							w8 = 0.06476724;
						}
					}
				}
			}
		}
	}
	float w9;
	if (rel_time < 9622) {
		if (rel_time < 9114) {
			if (rel_time < 8534) {
				if (rel_time < 7884) {
					if (rel_time < 7310) {
						if (rel_time < 6798) {
							w9 = -0.047383614;
						} else {
							w9 = 1.3458002;
						}
					} else {
						if (prod != 0) {
							w9 = 0.10996701;
						} else {
							w9 = -4.260555;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w9 = 0.5793475;
						} else {
							w9 = 1.6106045;
						}
					} else {
						if (hops < 2) {
							w9 = 1.3801376;
						} else {
							w9 = 2.7898884;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 8975) {
						if (hops < 3) {
							w9 = 0.3466973;
						} else {
							w9 = 0.98827344;
						}
					} else {
						if (size < 133) {
							w9 = -0.2797601;
						} else {
							w9 = -0.5879522;
						}
					}
				} else {
					if (rel_time < 8975) {
						if (hops < 3) {
							w9 = -4.7774115;
						} else {
							w9 = -3.360864;
						}
					} else {
						w9 = 5.106835;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 9556) {
						if (hops < 2) {
							w9 = -0.20722733;
						} else {
							w9 = -0.38676363;
						}
					} else {
						if (hops < 4) {
							w9 = -0.2531839;
						} else {
							w9 = 0.025267433;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 9574) {
							w9 = 0.6818438;
						} else {
							w9 = 0.87626827;
						}
					} else {
						w9 = 1.0705236;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 9121) {
						if (hops < 2) {
							w9 = 4.3278465;
						} else {
							w9 = 4.6789384;
						}
					} else {
						w9 = 7.302728;
					}
				} else {
					w9 = 5.383817;
				}
			}
		}
	} else {
		if (rel_time < 10272) {
			if (prod != 0) {
				if (rel_time < 9693) {
					if (hops < 3) {
						if (hops < 2) {
							w9 = -0.32440403;
						} else {
							w9 = -0.39044303;
						}
					} else {
						if (hops < 4) {
							w9 = -0.08259384;
						} else {
							w9 = -0.23123147;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w9 = -1.2121948;
						} else {
							w9 = -1.1085124;
						}
					} else {
						if (rel_time < 10159) {
							w9 = -0.60865766;
						} else {
							w9 = -0.40836808;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w9 = -3.6468267;
					} else {
						if (rel_time < 9693) {
							w9 = -4.0969543;
						} else {
							w9 = -2.6749332;
						}
					}
				} else {
					if (rel_time < 10132) {
						if (hops < 4) {
							w9 = -1.9723479;
						} else {
							w9 = -0.9966429;
						}
					} else {
						w9 = 4.1621356;
					}
				}
			}
		} else {
			if (rel_time < 10711) {
				if (hops < 4) {
					if (hops < 2) {
						w9 = 3.3268566;
					} else {
						if (hops < 3) {
							w9 = 4.2918377;
						} else {
							w9 = 4.970239;
						}
					}
				} else {
					w9 = 2.3073184;
				}
			} else {
				if (rel_time < 11291) {
					if (prod != 0) {
						if (size < 133) {
							w9 = -0.25630745;
						} else {
							w9 = 0.53668565;
						}
					} else {
						if (hops < 4) {
							w9 = -4.910708;
						} else {
							w9 = -1.8161896;
						}
					}
				} else {
					if (rel_time < 11870) {
						if (prod != 0) {
							w9 = -0.1995736;
						} else {
							w9 = 3.473056;
						}
					} else {
						if (prod != 0) {
							w9 = -0.21496965;
						} else {
							w9 = -1.1582835;
						}
					}
				}
			}
		}
	}
	float w10;
	if (hops < 3) {
		if (rel_time < 11366) {
			if (rel_time < 10851) {
				if (rel_time < 10272) {
					if (rel_time < 9693) {
						if (rel_time < 9114) {
							w10 = -0.10421805;
						} else {
							w10 = 0.58996415;
						}
					} else {
						if (rel_time < 10132) {
							w10 = -1.5706477;
						} else {
							w10 = -0.47215137;
						}
					}
				} else {
					if (rel_time < 10711) {
						if (hops < 2) {
							w10 = 1.6663842;
						} else {
							w10 = 2.149066;
						}
					} else {
						if (size < 133) {
							w10 = -0.1967367;
						} else {
							w10 = 0.17992236;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11313) {
						if (rel_time < 11293) {
							w10 = -0.33137375;
						} else {
							w10 = -0.19779961;
						}
					} else {
						if (hops < 2) {
							w10 = -0.16625008;
						} else {
							w10 = 0.056789342;
						}
					}
				} else {
					if (hops < 2) {
						w10 = -3.3807285;
					} else {
						w10 = -2.407997;
					}
				}
			}
		} else {
			if (rel_time < 11870) {
				if (hops < 2) {
					if (prod != 0) {
						if (rel_time < 11431) {
							w10 = -0.33698365;
						} else {
							w10 = -0.0017523872;
						}
					} else {
						w10 = -1.0061316;
					}
				} else {
					if (prod != 0) {
						if (rel_time < 11431) {
							w10 = -0.15324545;
						} else {
							w10 = -0.4053303;
						}
					} else {
						w10 = 5.091352;
					}
				}
			} else {
				if (rel_time < 12009) {
					if (prod != 1) {
						if (rel_time < 11875) {
							w10 = -0.16920824;
						} else {
							w10 = -0.03324211;
						}
					} else {
						if (rel_time < 11943) {
							w10 = -0.21461357;
						} else {
							w10 = -0.10237056;
						}
					}
				} else {
					if (hops < 2) {
						w10 = -0.20232344;
					} else {
						w10 = -0.84660006;
					}
				}
			}
		}
	} else {
		if (prod != 2) {
			if (prod != 1) {
				if (rel_time < 10780) {
					if (hops < 4) {
						if (rel_time < 10159) {
							w10 = 0.22052734;
						} else {
							w10 = 1.3980508;
						}
					} else {
						if (size < 133) {
							w10 = 1.1172682;
						} else {
							w10 = 0.45754454;
						}
					}
				} else {
					if (rel_time < 11291) {
						if (hops < 4) {
							w10 = -1.5920938;
						} else {
							w10 = -0.91269493;
						}
					} else {
						if (rel_time < 11870) {
							w10 = 0.43796432;
						} else {
							w10 = -0.6167281;
						}
					}
				}
			} else {
				if (rel_time < 1014) {
					w10 = 0.7206061;
				} else {
					if (rel_time < 6147) {
						if (rel_time < 4481) {
							w10 = -0.054469712;
						} else {
							w10 = -0.5108854;
						}
					} else {
						if (rel_time < 6219) {
							w10 = 1.3492763;
						} else {
							w10 = -0.056032237;
						}
					}
				}
			}
		} else {
			if (rel_time < 888) {
				w10 = 0.7605384;
			} else {
				if (rel_time < 7257) {
					if (rel_time < 6678) {
						if (rel_time < 4362) {
							w10 = -0.04920415;
						} else {
							w10 = -0.3394892;
						}
					} else {
						if (hops < 4) {
							w10 = -0.98459214;
						} else {
							w10 = -0.8323873;
						}
					}
				} else {
					if (rel_time < 7837) {
						if (rel_time < 7818) {
							w10 = 0.81319034;
						} else {
							w10 = 0.6144997;
						}
					} else {
						if (rel_time < 8396) {
							w10 = -1.0449413;
						} else {
							w10 = -0.15251707;
						}
					}
				}
			}
		}
	}
	float w11;
	if (rel_time < 3830) {
		if (rel_time < 3254) {
			if (rel_time < 2674) {
				if (rel_time < 2165) {
					if (rel_time < 1447) {
						if (size < 133) {
							w11 = 0.5858199;
						} else {
							w11 = -0.049118735;
						}
					} else {
						if (prod != 0) {
							w11 = -0.036079098;
						} else {
							w11 = -1.0654924;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w11 = -0.013684726;
						} else {
							w11 = 0.49151924;
						}
					} else {
						if (hops < 2) {
							w11 = 2.4688563;
						} else {
							w11 = 1.1152438;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 3185) {
							w11 = -0.07438737;
						} else {
							w11 = 0.0055284915;
						}
					} else {
						if (hops < 2) {
							w11 = -0.18076721;
						} else {
							w11 = -0.55737627;
						}
					}
				} else {
					if (hops < 2) {
						w11 = -1.9817128;
					} else {
						if (hops < 4) {
							w11 = -0.6440334;
						} else {
							w11 = -2.6557918;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 3784) {
					if (rel_time < 3783) {
						if (hops < 3) {
							w11 = -0.086506635;
						} else {
							w11 = -0.041994717;
						}
					} else {
						if (hops < 2) {
							w11 = 0.15413724;
						} else {
							w11 = 0.5947716;
						}
					}
				} else {
					if (hops < 2) {
						w11 = 0.15842968;
					} else {
						if (hops < 3) {
							w11 = 0.6531183;
						} else {
							w11 = 0.48454523;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w11 = 3.0667827;
					} else {
						if (hops < 3) {
							w11 = 1.4269812;
						} else {
							w11 = 1.7236558;
						}
					}
				} else {
					w11 = 4.385819;
				}
			}
		}
	} else {
		if (rel_time < 4342) {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w11 = -0.035428166;
					} else {
						if (rel_time < 3833) {
							w11 = -0.067805916;
						} else {
							w11 = -0.11993162;
						}
					}
				} else {
					if (rel_time < 3831) {
						w11 = -0.098498024;
					} else {
						if (rel_time < 3833) {
							w11 = 0.013064215;
						} else {
							w11 = 0.061939955;
						}
					}
				}
			} else {
				if (hops < 2) {
					w11 = -4.4785705;
				} else {
					if (hops < 3) {
						w11 = -4.054213;
					} else {
						w11 = -3.8124719;
					}
				}
			}
		} else {
			if (rel_time < 4921) {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 2) {
							w11 = -0.12413451;
						} else {
							w11 = 0.009801246;
						}
					} else {
						if (hops < 2) {
							w11 = 0.073151626;
						} else {
							w11 = -0.29189923;
						}
					}
				} else {
					if (hops < 2) {
						w11 = 1.4649363;
					} else {
						if (hops < 4) {
							w11 = 4.359253;
						} else {
							w11 = 4.7755027;
						}
					}
				}
			} else {
				if (rel_time < 5568) {
					if (prod != 0) {
						if (rel_time < 4941) {
							w11 = -0.77998716;
						} else {
							w11 = -0.21272954;
						}
					} else {
						if (rel_time < 5064) {
							w11 = -2.0494602;
						} else {
							w11 = -6.2037506;
						}
					}
				} else {
					if (rel_time < 6150) {
						if (prod != 0) {
							w11 = 0.54011023;
						} else {
							w11 = 2.5855474;
						}
					} else {
						if (rel_time < 6658) {
							w11 = -2.760313;
						} else {
							w11 = 0.01084398;
						}
					}
				}
			}
		}
	}
	float w12;
	if (rel_time < 7237) {
		if (rel_time < 6798) {
			if (rel_time < 6219) {
				if (rel_time < 6083) {
					if (rel_time < 4989) {
						if (rel_time < 4481) {
							w12 = -0.018630289;
						} else {
							w12 = 0.6434468;
						}
					} else {
						if (rel_time < 5570) {
							w12 = -0.51712763;
						} else {
							w12 = 0.3105921;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 6150) {
							w12 = 0.9816103;
						} else {
							w12 = 2.3358786;
						}
					} else {
						if (hops < 3) {
							w12 = -2.8401592;
						} else {
							w12 = -1.932097;
						}
					}
				}
			} else {
				if (rel_time < 6658) {
					if (hops < 2) {
						w12 = -2.879397;
					} else {
						if (hops < 3) {
							w12 = -2.4179957;
						} else {
							w12 = -2.1551645;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w12 = -0.17928614;
						} else {
							w12 = -0.50932246;
						}
					} else {
						w12 = 4.880618;
					}
				}
			}
		} else {
			if (hops < 2) {
				w12 = 3.7362359;
			} else {
				w12 = 4.2997303;
			}
		}
	} else {
		if (rel_time < 7816) {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 7310) {
						if (hops < 3) {
							w12 = -0.8891924;
						} else {
							w12 = -0.56390655;
						}
					} else {
						if (hops < 3) {
							w12 = 0.5233767;
						} else {
							w12 = 0.82788676;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w12 = 0.2640268;
						} else {
							w12 = 0.16907708;
						}
					} else {
						w12 = 0.4503233;
					}
				}
			} else {
				if (hops < 2) {
					w12 = -2.8758636;
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w12 = -1.9249594;
						} else {
							w12 = -2.0428846;
						}
					} else {
						w12 = -1.544285;
					}
				}
			}
		} else {
			if (rel_time < 8534) {
				if (prod != 0) {
					if (rel_time < 8397) {
						if (size < 133) {
							w12 = 0.35932595;
						} else {
							w12 = -0.59792334;
						}
					} else {
						if (size < 133) {
							w12 = 0.43448576;
						} else {
							w12 = 0.7802177;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w12 = 0.73790467;
						} else {
							w12 = 0.9924568;
						}
					} else {
						if (hops < 4) {
							w12 = 1.4176066;
						} else {
							w12 = 1.9841907;
						}
					}
				}
			} else {
				if (rel_time < 8541) {
					if (hops < 2) {
						w12 = -2.8650243;
					} else {
						if (hops < 4) {
							w12 = -1.9689668;
						} else {
							w12 = -1.5138912;
						}
					}
				} else {
					if (rel_time < 9121) {
						if (rel_time < 9114) {
							w12 = -0.172935;
						} else {
							w12 = 2.1466453;
						}
					} else {
						if (rel_time < 10272) {
							w12 = -0.3312798;
						} else {
							w12 = 0.013727008;
						}
					}
				}
			}
		}
	}
	float w13;
	if (prod != 2) {
		if (rel_time < 7263) {
			if (rel_time < 6798) {
				if (rel_time < 6219) {
					if (rel_time < 5640) {
						if (rel_time < 4989) {
							w13 = 0.06762222;
						} else {
							w13 = -0.35560906;
						}
					} else {
						if (rel_time < 6147) {
							w13 = 0.83137965;
						} else {
							w13 = 0.38815525;
						}
					}
				} else {
					if (rel_time < 6658) {
						if (hops < 2) {
							w13 = -1.4423221;
						} else {
							w13 = -1.1430672;
						}
					} else {
						if (prod != 0) {
							w13 = -0.18154864;
						} else {
							w13 = 2.4693618;
						}
					}
				}
			} else {
				if (rel_time < 7237) {
					if (hops < 2) {
						w13 = 1.8715172;
					} else {
						if (hops < 3) {
							w13 = 2.0590646;
						} else {
							w13 = 2.2326264;
						}
					}
				} else {
					if (hops < 2) {
						w13 = 0.0555919;
					} else {
						if (hops < 3) {
							w13 = 0.19905727;
						} else {
							w13 = 0.10502692;
						}
					}
				}
			}
		} else {
			if (rel_time < 7840) {
				if (prod != 0) {
					if (rel_time < 7310) {
						if (size < 133) {
							w13 = -0.42725202;
						} else {
							w13 = 0.26926082;
						}
					} else {
						if (rel_time < 7377) {
							w13 = 0.31902164;
						} else {
							w13 = -0.34857583;
						}
					}
				} else {
					if (hops < 2) {
						w13 = -1.4404813;
					} else {
						if (hops < 4) {
							w13 = -0.991618;
						} else {
							w13 = -0.77602905;
						}
					}
				}
			} else {
				if (rel_time < 8534) {
					if (rel_time < 7884) {
						if (hops < 4) {
							w13 = -0.3457195;
						} else {
							w13 = 0.19497466;
						}
					} else {
						if (prod != 0) {
							w13 = 0.29557702;
						} else {
							w13 = 0.5714453;
						}
					}
				} else {
					if (rel_time < 8975) {
						if (rel_time < 8541) {
							w13 = -1.0891706;
						} else {
							w13 = -2.1926281;
						}
					} else {
						if (rel_time < 9622) {
							w13 = 0.30318937;
						} else {
							w13 = -0.05744193;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 888) {
			if (hops < 3) {
				if (rel_time < 868) {
					if (hops < 2) {
						w13 = 0.4529552;
					} else {
						w13 = 0.3836499;
					}
				} else {
					w13 = 0.36206827;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 868) {
						w13 = 0.11945255;
					} else {
						w13 = 0.058288846;
					}
				} else {
					w13 = 0.13947414;
				}
			}
		} else {
			if (rel_time < 1467) {
				if (hops < 3) {
					if (rel_time < 1447) {
						w13 = -0.81880456;
					} else {
						w13 = -0.51827776;
					}
				} else {
					if (rel_time < 1447) {
						w13 = -0.6302452;
					} else {
						if (hops < 4) {
							w13 = -0.2541991;
						} else {
							w13 = -0.40081355;
						}
					}
				}
			} else {
				if (rel_time < 4362) {
					if (hops < 2) {
						if (rel_time < 2625) {
							w13 = -0.099071234;
						} else {
							w13 = -0.029312799;
						}
					} else {
						if (rel_time < 3204) {
							w13 = 0.07426794;
						} else {
							w13 = -0.013433974;
						}
					}
				} else {
					if (rel_time < 4941) {
						if (hops < 2) {
							w13 = -0.8584691;
						} else {
							w13 = -0.6550374;
						}
					} else {
						if (rel_time < 5501) {
							w13 = 0.95680046;
						} else {
							w13 = -0.10934879;
						}
					}
				}
			}
		}
	}
	float w14;
	if (hops < 4) {
		if (rel_time < 1515) {
			if (prod != 0) {
				if (rel_time < 1467) {
					if (prod != 1) {
						if (rel_time < 939) {
							w14 = -0.0037647139;
						} else {
							w14 = -0.22512278;
						}
					} else {
						if (hops < 3) {
							w14 = 0.40222958;
						} else {
							w14 = 0.03431118;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w14 = -0.40461934;
						} else {
							w14 = -0.53590775;
						}
					} else {
						if (hops < 2) {
							w14 = 0.30439737;
						} else {
							w14 = 0.47133967;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1014) {
							w14 = 0.6504631;
						} else {
							w14 = 0.41363043;
						}
					} else {
						if (rel_time < 1015) {
							w14 = 0.5014928;
						} else {
							w14 = 0.424501;
						}
					}
				} else {
					if (rel_time < 1015) {
						w14 = 0.3593798;
					} else {
						w14 = 0.4704057;
					}
				}
			}
		} else {
			if (rel_time < 2025) {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 1586) {
							w14 = -0.16690627;
						} else {
							w14 = -0.4145739;
						}
					} else {
						if (rel_time < 1587) {
							w14 = -0.09639858;
						} else {
							w14 = -0.027930954;
						}
					}
				} else {
					if (rel_time < 1586) {
						w14 = -0.13713449;
					} else {
						w14 = -1.6627604;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 10851) {
						if (rel_time < 3764) {
							w14 = 0.10217143;
						} else {
							w14 = -0.08538022;
						}
					} else {
						if (rel_time < 11291) {
							w14 = -1.5558982;
						} else {
							w14 = -0.13159831;
						}
					}
				} else {
					if (rel_time < 11366) {
						if (rel_time < 10851) {
							w14 = 0.011753782;
						} else {
							w14 = -0.28753647;
						}
					} else {
						if (rel_time < 11870) {
							w14 = 1.2715807;
						} else {
							w14 = -0.11852463;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 133) {
				if (rel_time < 7818) {
					if (rel_time < 5570) {
						if (rel_time < 4941) {
							w14 = -0.0013433271;
						} else {
							w14 = 0.26044932;
						}
					} else {
						if (rel_time < 6150) {
							w14 = -0.32137674;
						} else {
							w14 = -0.053373378;
						}
					}
				} else {
					if (rel_time < 9574) {
						if (rel_time < 8416) {
							w14 = 0.30553117;
						} else {
							w14 = 0.13485369;
						}
					} else {
						if (rel_time < 10714) {
							w14 = -0.1460533;
						} else {
							w14 = 0.06915901;
						}
					}
				}
			} else {
				if (rel_time < 1515) {
					if (rel_time < 939) {
						if (rel_time < 867) {
							w14 = 0.392912;
						} else {
							w14 = 0.078668706;
						}
					} else {
						w14 = 0.64455503;
					}
				} else {
					if (rel_time < 2094) {
						w14 = -0.5271273;
					} else {
						if (rel_time < 2673) {
							w14 = 0.58984905;
						} else {
							w14 = 0.11843376;
						}
					}
				}
			}
		} else {
			if (rel_time < 2605) {
				if (rel_time < 2025) {
					if (rel_time < 1015) {
						w14 = 0.05060886;
					} else {
						if (rel_time < 1447) {
							w14 = 0.8629261;
						} else {
							w14 = 0.49644008;
						}
					}
				} else {
					w14 = 2.401919;
				}
			} else {
				if (rel_time < 3184) {
					w14 = -1.3589993;
				} else {
					if (rel_time < 3763) {
						w14 = 2.1796107;
					} else {
						if (rel_time < 4342) {
							w14 = -1.8976539;
						} else {
							w14 = 0.37968227;
						}
					}
				}
			}
		}
	}
	float w15;
	if (rel_time < 4411) {
		if (rel_time < 3833) {
			if (rel_time < 3254) {
				if (rel_time < 2673) {
					if (rel_time < 2165) {
						if (rel_time < 1515) {
							w15 = 0.05920079;
						} else {
							w15 = -0.090734094;
						}
					} else {
						if (prod != 0) {
							w15 = 0.08291245;
						} else {
							w15 = 0.5886337;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w15 = -0.058399856;
						} else {
							w15 = -0.27258107;
						}
					} else {
						if (hops < 3) {
							w15 = -0.8625743;
						} else {
							w15 = -0.13461216;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 3324) {
							w15 = -0.09931706;
						} else {
							w15 = -0.020826044;
						}
					} else {
						if (hops < 2) {
							w15 = 0.09608805;
						} else {
							w15 = 0.24411747;
						}
					}
				} else {
					if (hops < 2) {
						w15 = 1.4606524;
					} else {
						if (hops < 4) {
							w15 = 0.7523779;
						} else {
							w15 = 1.0953016;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 4363) {
					if (rel_time < 4344) {
						if (hops < 2) {
							w15 = 0.07462731;
						} else {
							w15 = -0.08746868;
						}
					} else {
						if (hops < 2) {
							w15 = 0.004517169;
						} else {
							w15 = 0.19205163;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w15 = -0.06616552;
						} else {
							w15 = -0.0051669297;
						}
					} else {
						if (hops < 2) {
							w15 = 0.022820173;
						} else {
							w15 = -0.18329565;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w15 = -2.2250893;
					} else {
						w15 = -2.0109475;
					}
				} else {
					w15 = -0.9536239;
				}
			}
		}
	} else {
		if (rel_time < 4921) {
			if (prod != 0) {
				if (rel_time < 4481) {
					if (hops < 4) {
						if (hops < 3) {
							w15 = -0.0009666225;
						} else {
							w15 = -0.058855515;
						}
					} else {
						if (rel_time < 4412) {
							w15 = 0.01013916;
						} else {
							w15 = 0.1844255;
						}
					}
				} else {
					w15 = -0.8307495;
				}
			} else {
				if (hops < 2) {
					w15 = 0.42146775;
				} else {
					if (hops < 3) {
						w15 = 1.7369204;
					} else {
						w15 = 1.9041705;
					}
				}
			}
		} else {
			if (rel_time < 5501) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 5060) {
							w15 = -0.29457763;
						} else {
							w15 = 0.47034156;
						}
					} else {
						if (hops < 2) {
							w15 = -0.04245676;
						} else {
							w15 = 0.28598946;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 5064) {
							w15 = 0.90089214;
						} else {
							w15 = -1.0521123;
						}
					} else {
						if (rel_time < 5064) {
							w15 = -1.1867721;
						} else {
							w15 = -3.2685373;
						}
					}
				}
			} else {
				if (rel_time < 6079) {
					if (prod != 0) {
						if (rel_time < 5570) {
							w15 = 0.10696428;
						} else {
							w15 = -0.3601382;
						}
					} else {
						if (rel_time < 5640) {
							w15 = 6.2284827;
						} else {
							w15 = 0.3922309;
						}
					}
				} else {
					if (rel_time < 6083) {
						if (hops < 4) {
							w15 = -0.53036445;
						} else {
							w15 = -0.19276997;
						}
					} else {
						if (rel_time < 6219) {
							w15 = 0.26237372;
						} else {
							w15 = -0.0018900859;
						}
					}
				}
			}
		}
	}
	float w16;
	if (rel_time < 10272) {
		if (rel_time < 9622) {
			if (rel_time < 9114) {
				if (rel_time < 8534) {
					if (rel_time < 7816) {
						if (rel_time < 7377) {
							w16 = -0.0016608342;
						} else {
							w16 = -0.560704;
						}
					} else {
						if (rel_time < 7837) {
							w16 = 0.35942668;
						} else {
							w16 = 0.0972539;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 9042) {
							w16 = -0.4808039;
						} else {
							w16 = -0.08609172;
						}
					} else {
						if (rel_time < 8975) {
							w16 = 0.48654744;
						} else {
							w16 = 0.0019248537;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (hops < 3) {
							w16 = -0.22045061;
						} else {
							w16 = 0.09097084;
						}
					} else {
						if (rel_time < 9578) {
							w16 = 0.15421386;
						} else {
							w16 = 0.33719343;
						}
					}
				} else {
					if (rel_time < 9121) {
						if (hops < 3) {
							w16 = 0.7584706;
						} else {
							w16 = 1.1676457;
						}
					} else {
						w16 = 5.5070267;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					if (rel_time < 9693) {
						if (hops < 3) {
							w16 = -0.26887894;
						} else {
							w16 = 0.17095809;
						}
					} else {
						if (hops < 3) {
							w16 = -0.09899879;
						} else {
							w16 = -0.3266668;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 0.16758424;
						} else {
							w16 = 0.08962187;
						}
					} else {
						if (rel_time < 10159) {
							w16 = -0.20487393;
						} else {
							w16 = -0.30283204;
						}
					}
				}
			} else {
				if (rel_time < 10132) {
					if (rel_time < 9693) {
						w16 = -3.006831;
					} else {
						if (hops < 3) {
							w16 = -0.5801398;
						} else {
							w16 = -0.9195134;
						}
					}
				} else {
					w16 = 2.7707891;
				}
			}
		}
	} else {
		if (rel_time < 10711) {
			if (hops < 4) {
				if (hops < 3) {
					if (hops < 2) {
						w16 = 0.8946227;
					} else {
						w16 = 1.0875686;
					}
				} else {
					w16 = 1.8031862;
				}
			} else {
				w16 = 0.43207186;
			}
		} else {
			if (rel_time < 11291) {
				if (prod != 0) {
					if (hops < 4) {
						if (hops < 2) {
							w16 = 0.06940999;
						} else {
							w16 = -0.05004993;
						}
					} else {
						if (size < 133) {
							w16 = 0.08815505;
						} else {
							w16 = 0.4475639;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w16 = -0.9041063;
						} else {
							w16 = -1.0463967;
						}
					} else {
						w16 = -0.63695186;
					}
				}
			} else {
				if (rel_time < 12009) {
					if (prod != 0) {
						if (rel_time < 11363) {
							w16 = 0.058594473;
						} else {
							w16 = -0.0042645754;
						}
					} else {
						if (hops < 2) {
							w16 = -0.420957;
						} else {
							w16 = 0.9254027;
						}
					}
				} else {
					if (hops < 2) {
						w16 = -0.01832351;
					} else {
						if (hops < 4) {
							w16 = -0.27039427;
						} else {
							w16 = -0.6296165;
						}
					}
				}
			}
		}
	}
	float w17;
	if (hops < 2) {
		if (rel_time < 867) {
			w17 = -0.46827626;
		} else {
			if (rel_time < 2605) {
				if (rel_time < 2165) {
					if (rel_time < 1015) {
						if (size < 133) {
							w17 = 0.14518587;
						} else {
							w17 = -0.029591706;
						}
					} else {
						if (rel_time < 1586) {
							w17 = -0.026762817;
						} else {
							w17 = -0.12699096;
						}
					}
				} else {
					if (prod != 0) {
						w17 = -0.021570276;
					} else {
						w17 = 0.8681787;
					}
				}
			} else {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 7310) {
							w17 = -0.07801351;
						} else {
							w17 = 0.003323273;
						}
					} else {
						if (rel_time < 2626) {
							w17 = 0.16997391;
						} else {
							w17 = 0.017113479;
						}
					}
				} else {
					if (rel_time < 3184) {
						w17 = -0.6367464;
					} else {
						if (rel_time < 3763) {
							w17 = 0.73245126;
						} else {
							w17 = -0.13373654;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (rel_time < 2673) {
				if (hops < 3) {
					if (rel_time < 2626) {
						if (prod != 1) {
							w17 = -0.015347406;
						} else {
							w17 = 0.08324246;
						}
					} else {
						if (rel_time < 2627) {
							w17 = -0.24179594;
						} else {
							w17 = -0.05528946;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 1586) {
							w17 = -0.041958414;
						} else {
							w17 = 0.07868572;
						}
					} else {
						if (rel_time < 939) {
							w17 = 0.06333156;
						} else {
							w17 = 0.2584158;
						}
					}
				}
			} else {
				if (rel_time < 10739) {
					if (rel_time < 10736) {
						if (size < 133) {
							w17 = -0.032460015;
						} else {
							w17 = 0.012839325;
						}
					} else {
						w17 = -0.34511048;
					}
				} else {
					if (rel_time < 11363) {
						if (hops < 4) {
							w17 = 0.080874614;
						} else {
							w17 = -0.02143593;
						}
					} else {
						if (rel_time < 11870) {
							w17 = -0.24407053;
						} else {
							w17 = 0.050245527;
						}
					}
				}
			}
		} else {
			if (rel_time < 4342) {
				if (rel_time < 3763) {
					if (rel_time < 3184) {
						if (rel_time < 1447) {
							w17 = 0.16801323;
						} else {
							w17 = -0.11592999;
						}
					} else {
						if (hops < 3) {
							w17 = 0.30935007;
						} else {
							w17 = 0.48285845;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w17 = -1.0555997;
						} else {
							w17 = -0.94346565;
						}
					} else {
						w17 = -0.47840557;
					}
				}
			} else {
				if (rel_time < 4921) {
					if (hops < 3) {
						w17 = 0.8705399;
					} else {
						w17 = 0.95414567;
					}
				} else {
					if (rel_time < 5501) {
						if (hops < 3) {
							w17 = -1.1379563;
						} else {
							w17 = -0.26010075;
						}
					} else {
						if (rel_time < 5640) {
							w17 = 3.2891822;
						} else {
							w17 = 0.11916278;
						}
					}
				}
			}
		}
	}
	float w18;
	if (rel_time < 12009) {
		if (rel_time < 11358) {
			if (rel_time < 10851) {
				if (rel_time < 10272) {
					if (rel_time < 9626) {
						if (rel_time < 9114) {
							w18 = -0.0028384717;
						} else {
							w18 = 0.123070665;
						}
					} else {
						if (prod != 0) {
							w18 = -0.054314997;
						} else {
							w18 = -0.3819684;
						}
					}
				} else {
					if (rel_time < 10711) {
						if (hops < 4) {
							w18 = 0.60672134;
						} else {
							w18 = 0.15785956;
						}
					} else {
						if (hops < 4) {
							w18 = -0.0056483457;
						} else {
							w18 = 0.12221859;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11291) {
						if (hops < 2) {
							w18 = 0.7221327;
						} else {
							w18 = 0.053369567;
						}
					} else {
						if (hops < 4) {
							w18 = 0.0046424693;
						} else {
							w18 = -0.1455269;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w18 = -0.38144758;
						} else {
							w18 = -0.5819008;
						}
					} else {
						w18 = -0.37784547;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (prod != 0) {
					if (rel_time < 11366) {
						if (hops < 2) {
							w18 = -0.020464892;
						} else {
							w18 = 0.19991818;
						}
					} else {
						if (rel_time < 11870) {
							w18 = -0.37843144;
						} else {
							w18 = 0.0051337206;
						}
					}
				} else {
					if (hops < 2) {
						w18 = -0.14410411;
					} else {
						w18 = 1.4103243;
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11875) {
						if (rel_time < 11366) {
							w18 = -0.012463196;
						} else {
							w18 = -0.13555121;
						}
					} else {
						if (prod != 1) {
							w18 = -0.018656248;
						} else {
							w18 = 0.1616026;
						}
					}
				} else {
					if (hops < 4) {
						w18 = -0.8674477;
					} else {
						w18 = 0.6018947;
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			w18 = 0.05756123;
		} else {
			if (hops < 4) {
				if (hops < 3) {
					if (rel_time < 12018) {
						if (rel_time < 12011) {
							w18 = -0.30490735;
						} else {
							w18 = -0.25410932;
						}
					} else {
						w18 = -0.41986492;
					}
				} else {
					if (rel_time < 12014) {
						if (rel_time < 12011) {
							w18 = -0.105026945;
						} else {
							w18 = -0.18303926;
						}
					} else {
						w18 = -0.030959522;
					}
				}
			} else {
				w18 = -0.3756566;
			}
		}
	}
	float w19;
	if (rel_time < 7237) {
		if (rel_time < 6798) {
			if (rel_time < 6219) {
				if (rel_time < 6150) {
					if (rel_time < 6100) {
						if (rel_time < 6079) {
							w19 = 0.004664819;
						} else {
							w19 = -0.233204;
						}
					} else {
						if (size < 133) {
							w19 = -0.084246986;
						} else {
							w19 = 0.3276221;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 3) {
							w19 = 1.1318738;
						} else {
							w19 = 0.5095833;
						}
					} else {
						if (hops < 2) {
							w19 = -2.224322;
						} else {
							w19 = -1.4689723;
						}
					}
				}
			} else {
				if (rel_time < 6658) {
					if (hops < 4) {
						if (hops < 3) {
							w19 = -0.6605928;
						} else {
							w19 = -0.56594855;
						}
					} else {
						w19 = -0.76376224;
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w19 = 0.020023542;
						} else {
							w19 = -0.16452406;
						}
					} else {
						if (hops < 2) {
							w19 = 0.7876216;
						} else {
							w19 = 1.2587831;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				w19 = 1.0161389;
			} else {
				w19 = 0.9241007;
			}
		}
	} else {
		if (rel_time < 7816) {
			if (size < 133) {
				if (prod != 1) {
					if (hops < 3) {
						if (rel_time < 7240) {
							w19 = -0.44591406;
						} else {
							w19 = -0.2566764;
						}
					} else {
						if (rel_time < 7257) {
							w19 = -0.1230009;
						} else {
							w19 = -0.33950695;
						}
					}
				} else {
					if (rel_time < 7310) {
						if (hops < 4) {
							w19 = -0.1610384;
						} else {
							w19 = -0.31529504;
						}
					} else {
						if (hops < 3) {
							w19 = 0.13114446;
						} else {
							w19 = 0.2770115;
						}
					}
				}
			} else {
				if (hops < 3) {
					w19 = 0.078762054;
				} else {
					if (hops < 4) {
						w19 = 0.023180814;
					} else {
						w19 = 0.083663695;
					}
				}
			}
		} else {
			if (rel_time < 8534) {
				if (rel_time < 8396) {
					if (rel_time < 7960) {
						if (size < 133) {
							w19 = 0.16894715;
						} else {
							w19 = -0.21343459;
						}
					} else {
						if (prod != 0) {
							w19 = -1.1342703;
						} else {
							w19 = 0.18050799;
						}
					}
				} else {
					if (prod != 1) {
						if (hops < 4) {
							w19 = 0.17285927;
						} else {
							w19 = 0.33592355;
						}
					} else {
						if (hops < 3) {
							w19 = -0.024570543;
						} else {
							w19 = 0.21722141;
						}
					}
				}
			} else {
				if (rel_time < 8541) {
					if (hops < 2) {
						w19 = -0.539917;
					} else {
						if (hops < 3) {
							w19 = -0.19984493;
						} else {
							w19 = -0.30920738;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 10137) {
							w19 = -0.053712826;
						} else {
							w19 = -0.00072070694;
						}
					} else {
						if (rel_time < 9555) {
							w19 = 0.34620017;
						} else {
							w19 = -0.01686736;
						}
					}
				}
			}
		}
	}
	float w20;
	if (hops < 4) {
		if (rel_time < 4410) {
			if (rel_time < 3833) {
				if (rel_time < 3254) {
					if (rel_time < 3204) {
						if (hops < 3) {
							w20 = -0.019367388;
						} else {
							w20 = 0.028303204;
						}
					} else {
						if (rel_time < 3207) {
							w20 = -0.15246868;
						} else {
							w20 = -0.042092904;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w20 = 0.0069775796;
						} else {
							w20 = 0.099504784;
						}
					} else {
						if (hops < 2) {
							w20 = 0.36600503;
						} else {
							w20 = 0.18251207;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 4363) {
						if (rel_time < 4344) {
							w20 = 0.005853943;
						} else {
							w20 = 0.04745762;
						}
					} else {
						if (hops < 3) {
							w20 = -0.13374403;
						} else {
							w20 = -0.029046396;
						}
					}
				} else {
					if (hops < 2) {
						w20 = -1.0478247;
					} else {
						if (hops < 3) {
							w20 = -0.5294513;
						} else {
							w20 = -0.47343454;
						}
					}
				}
			}
		} else {
			if (rel_time < 4921) {
				if (prod != 0) {
					if (rel_time < 4481) {
						if (hops < 3) {
							w20 = 0.024187189;
						} else {
							w20 = -0.00961563;
						}
					} else {
						w20 = -0.4420912;
					}
				} else {
					if (hops < 2) {
						w20 = 0.27780157;
					} else {
						if (hops < 3) {
							w20 = 0.43501848;
						} else {
							w20 = 0.49040326;
						}
					}
				}
			} else {
				if (rel_time < 4923) {
					if (hops < 3) {
						if (rel_time < 4922) {
							w20 = -0.44420868;
						} else {
							w20 = -0.18897009;
						}
					} else {
						if (rel_time < 4922) {
							w20 = 0.013994728;
						} else {
							w20 = -0.27494508;
						}
					}
				} else {
					if (rel_time < 7237) {
						if (rel_time < 6798) {
							w20 = -0.010588874;
						} else {
							w20 = 0.50837326;
						}
					} else {
						if (rel_time < 7816) {
							w20 = -0.08113234;
						} else {
							w20 = 0.00069533865;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6147) {
			if (prod != 0) {
				if (rel_time < 4923) {
					if (rel_time < 4481) {
						if (rel_time < 2094) {
							w20 = -0.024094423;
						} else {
							w20 = 0.048345074;
						}
					} else {
						if (rel_time < 4922) {
							w20 = -0.41409594;
						} else {
							w20 = -0.020857334;
						}
					}
				} else {
					if (prod != 1) {
						if (rel_time < 6080) {
							w20 = 0.06753789;
						} else {
							w20 = 0.14057851;
						}
					} else {
						if (rel_time < 5570) {
							w20 = 0.1540151;
						} else {
							w20 = 0.29842386;
						}
					}
				}
			} else {
				if (rel_time < 5064) {
					if (rel_time < 2605) {
						if (rel_time < 2025) {
							w20 = 0.1450757;
						} else {
							w20 = 0.9718004;
						}
					} else {
						if (rel_time < 3184) {
							w20 = -0.55837584;
						} else {
							w20 = 0.1340619;
						}
					}
				} else {
					if (rel_time < 5640) {
						w20 = 2.1047537;
					} else {
						w20 = 0.57272255;
					}
				}
			}
		} else {
			if (rel_time < 6658) {
				if (prod != 0) {
					if (rel_time < 6150) {
						w20 = -0.31757933;
					} else {
						w20 = -0.040023804;
					}
				} else {
					w20 = -0.3858473;
				}
			} else {
				if (rel_time < 7237) {
					if (prod != 0) {
						if (size < 133) {
							w20 = 0.11639844;
						} else {
							w20 = 0.004798353;
						}
					} else {
						w20 = 0.47009525;
					}
				} else {
					if (rel_time < 7820) {
						if (rel_time < 7263) {
							w20 = 0.02912709;
						} else {
							w20 = -0.16296598;
						}
					} else {
						if (rel_time < 8463) {
							w20 = 0.14036213;
						} else {
							w20 = -0.0129384035;
						}
					}
				}
			}
		}
	}
	float w21;
	if (rel_time < 1015) {
		if (size < 133) {
			if (hops < 3) {
				if (hops < 2) {
					if (prod != 1) {
						w21 = 0.10842561;
					} else {
						w21 = 0.031779096;
					}
				} else {
					if (rel_time < 1014) {
						w21 = 0.19498348;
					} else {
						w21 = 0.14425139;
					}
				}
			} else {
				if (rel_time < 888) {
					if (hops < 4) {
						w21 = 0.021032447;
					} else {
						w21 = 0.07412116;
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1014) {
							w21 = -0.005314591;
						} else {
							w21 = 0.054865178;
						}
					} else {
						if (prod != 0) {
							w21 = 0.07791591;
						} else {
							w21 = -0.15978338;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 867) {
					if (hops < 2) {
						w21 = -0.22577019;
					} else {
						if (rel_time < 317) {
							w21 = -0.015429097;
						} else {
							w21 = -0.07892743;
						}
					}
				} else {
					if (rel_time < 888) {
						if (hops < 2) {
							w21 = 0.67294884;
						} else {
							w21 = 1.9858941;
						}
					} else {
						if (hops < 2) {
							w21 = -0.066385336;
						} else {
							w21 = -0.17160241;
						}
					}
				}
			} else {
				if (rel_time < 867) {
					if (hops < 4) {
						w21 = 0.053744353;
					} else {
						w21 = 0.14851272;
					}
				} else {
					w21 = -0.030891469;
				}
			}
		}
	} else {
		if (rel_time < 1467) {
			if (prod != 2) {
				if (rel_time < 1447) {
					if (hops < 4) {
						w21 = 0.13406537;
					} else {
						w21 = 0.3014027;
					}
				} else {
					w21 = 0.2896903;
				}
			} else {
				if (rel_time < 1447) {
					if (hops < 2) {
						w21 = -0.39234138;
					} else {
						w21 = -0.24148698;
					}
				} else {
					if (hops < 3) {
						w21 = -0.15661491;
					} else {
						if (hops < 4) {
							w21 = -0.037819922;
						} else {
							w21 = -0.19749342;
						}
					}
				}
			}
		} else {
			if (rel_time < 1468) {
				if (hops < 3) {
					if (hops < 2) {
						w21 = 0.15911105;
					} else {
						w21 = 0.19313633;
					}
				} else {
					w21 = 0.078221746;
				}
			} else {
				if (rel_time < 2026) {
					if (size < 133) {
						if (hops < 3) {
							w21 = -0.027702864;
						} else {
							w21 = -0.2718591;
						}
					} else {
						if (hops < 2) {
							w21 = 0.01328247;
						} else {
							w21 = 0.15285161;
						}
					}
				} else {
					if (rel_time < 2673) {
						if (hops < 3) {
							w21 = -0.009991653;
						} else {
							w21 = 0.11404764;
						}
					} else {
						if (rel_time < 4343) {
							w21 = -0.035787407;
						} else {
							w21 = 0.004008583;
						}
					}
				}
			}
		}
	}
	float w22;
	if (rel_time < 6219) {
		if (rel_time < 6150) {
			if (rel_time < 5501) {
				if (rel_time < 3833) {
					if (rel_time < 3254) {
						if (rel_time < 2627) {
							w22 = 0.0051649883;
						} else {
							w22 = -0.025837714;
						}
					} else {
						if (prod != 0) {
							w22 = 0.03669029;
						} else {
							w22 = 0.15000264;
						}
					}
				} else {
					if (rel_time < 4342) {
						if (prod != 0) {
							w22 = 0.027369002;
						} else {
							w22 = -0.31666234;
						}
					} else {
						if (rel_time < 4921) {
							w22 = 0.048592128;
						} else {
							w22 = -0.037258703;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 5521) {
						if (hops < 2) {
							w22 = 0.071879685;
						} else {
							w22 = 0.29068902;
						}
					} else {
						if (prod != 2) {
							w22 = 0.016164217;
						} else {
							w22 = -0.1963069;
						}
					}
				} else {
					if (rel_time < 5640) {
						if (hops < 2) {
							w22 = 2.0843291;
						} else {
							w22 = 1.464627;
						}
					} else {
						if (hops < 2) {
							w22 = -0.33206883;
						} else {
							w22 = 0.34526336;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (hops < 3) {
					if (hops < 2) {
						w22 = 0.6347606;
					} else {
						w22 = 0.5140496;
					}
				} else {
					if (hops < 4) {
						w22 = 0.32089496;
					} else {
						w22 = -0.022447132;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w22 = -1.1745175;
					} else {
						w22 = -0.8093714;
					}
				} else {
					w22 = -0.20261976;
				}
			}
		}
	} else {
		if (rel_time < 6658) {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 6220) {
						w22 = -0.31593794;
					} else {
						w22 = -0.25954747;
					}
				} else {
					if (hops < 3) {
						w22 = -0.3693335;
					} else {
						if (rel_time < 6221) {
							w22 = -0.31941524;
						} else {
							w22 = -0.2298151;
						}
					}
				}
			} else {
				w22 = -0.19414237;
			}
		} else {
			if (rel_time < 7237) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 6729) {
							w22 = 0.01744013;
						} else {
							w22 = -0.036879376;
						}
					} else {
						if (rel_time < 6683) {
							w22 = -0.08814595;
						} else {
							w22 = 0.005637871;
						}
					}
				} else {
					if (rel_time < 6798) {
						if (hops < 3) {
							w22 = 0.46859893;
						} else {
							w22 = 0.67972076;
						}
					} else {
						if (hops < 2) {
							w22 = 0.2871428;
						} else {
							w22 = 0.2351998;
						}
					}
				}
			} else {
				if (rel_time < 7240) {
					if (hops < 3) {
						if (hops < 2) {
							w22 = -0.029171225;
						} else {
							w22 = -0.31861943;
						}
					} else {
						if (rel_time < 7239) {
							w22 = -0.0044514714;
						} else {
							w22 = -0.079876795;
						}
					}
				} else {
					if (rel_time < 10272) {
						if (rel_time < 9622) {
							w22 = 0.0016072254;
						} else {
							w22 = -0.064188994;
						}
					} else {
						if (rel_time < 10711) {
							w22 = 0.28830808;
						} else {
							w22 = -0.012381699;
						}
					}
				}
			}
		}
	}
	float w23;
	if (rel_time < 12009) {
		if (rel_time < 11313) {
			if (rel_time < 10851) {
				if (rel_time < 10140) {
					if (rel_time < 9622) {
						if (rel_time < 9114) {
							w23 = -0.0016889569;
						} else {
							w23 = 0.058015294;
						}
					} else {
						if (prod != 0) {
							w23 = -0.01942171;
						} else {
							w23 = -0.1604708;
						}
					}
				} else {
					if (prod != 0) {
						if (hops < 3) {
							w23 = 0.0394405;
						} else {
							w23 = -0.03328149;
						}
					} else {
						if (hops < 3) {
							w23 = 0.06118655;
						} else {
							w23 = 0.2858492;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11291) {
						if (hops < 2) {
							w23 = 0.37322047;
						} else {
							w23 = 0.031346522;
						}
					} else {
						if (hops < 2) {
							w23 = -0.06288791;
						} else {
							w23 = 0.01775988;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w23 = -0.1788046;
						} else {
							w23 = -0.2791208;
						}
					} else {
						if (rel_time < 10856) {
							w23 = -0.16000332;
						} else {
							w23 = -0.20822376;
						}
					}
				}
			}
		} else {
			if (hops < 3) {
				if (prod != 0) {
					if (rel_time < 11360) {
						if (hops < 2) {
							w23 = 0.029830586;
						} else {
							w23 = 0.118061155;
						}
					} else {
						if (hops < 2) {
							w23 = 0.022848379;
						} else {
							w23 = -0.023138342;
						}
					}
				} else {
					if (hops < 2) {
						w23 = -0.059933282;
					} else {
						w23 = 0.7184328;
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 11875) {
						if (rel_time < 11366) {
							w23 = -0.012870502;
						} else {
							w23 = -0.062446594;
						}
					} else {
						if (hops < 4) {
							w23 = 0.10065237;
						} else {
							w23 = -0.016836092;
						}
					}
				} else {
					if (hops < 4) {
						w23 = -0.4222394;
					} else {
						w23 = 0.32145783;
					}
				}
			}
		}
	} else {
		if (hops < 2) {
			w23 = 0.04108044;
		} else {
			if (hops < 4) {
				if (hops < 3) {
					w23 = -0.12440606;
				} else {
					if (rel_time < 12014) {
						w23 = -0.06056309;
					} else {
						w23 = -0.0033462944;
					}
				}
			} else {
				w23 = -0.16979241;
			}
		}
	}
	float w24;
	if (rel_time < 8534) {
		if (rel_time < 8397) {
			if (rel_time < 7960) {
				if (rel_time < 7957) {
					if (rel_time < 7837) {
						if (rel_time < 7816) {
							w24 = 0.0002828473;
						} else {
							w24 = 0.12388741;
						}
					} else {
						if (prod != 0) {
							w24 = -0.066172644;
						} else {
							w24 = 0.122339375;
						}
					}
				} else {
					if (hops < 3) {
						w24 = 0.039608393;
					} else {
						if (rel_time < 7958) {
							w24 = 0.30894187;
						} else {
							w24 = 0.20160244;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 8396) {
						if (hops < 3) {
							w24 = -0.8283547;
						} else {
							w24 = -0.17656691;
						}
					} else {
						if (hops < 4) {
							w24 = 0.088351086;
						} else {
							w24 = -0.38965264;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w24 = 0.07689867;
						} else {
							w24 = -0.01007126;
						}
					} else {
						w24 = 0.20659089;
					}
				}
			}
		} else {
			if (prod != 1) {
				if (hops < 4) {
					if (hops < 3) {
						if (rel_time < 8399) {
							w24 = 0.15410073;
						} else {
							w24 = 0.0840788;
						}
					} else {
						w24 = 0.05448937;
					}
				} else {
					w24 = 0.14125134;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 8467) {
							w24 = 0.12095502;
						} else {
							w24 = -0.058254957;
						}
					} else {
						if (rel_time < 8467) {
							w24 = -0.11486631;
						} else {
							w24 = -0.016193489;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 8467) {
							w24 = 0.12837888;
						} else {
							w24 = 0.1966187;
						}
					} else {
						w24 = -0.039613996;
					}
				}
			}
		}
	} else {
		if (rel_time < 8541) {
			if (hops < 2) {
				w24 = -0.27274483;
			} else {
				if (rel_time < 8538) {
					if (rel_time < 8536) {
						if (hops < 4) {
							w24 = -0.14889327;
						} else {
							w24 = -0.06643982;
						}
					} else {
						w24 = -0.087031506;
					}
				} else {
					if (hops < 3) {
						w24 = -0.114459716;
					} else {
						if (hops < 4) {
							w24 = -0.27682763;
						} else {
							w24 = -0.06638055;
						}
					}
				}
			}
		} else {
			if (rel_time < 9042) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 8975) {
							w24 = 0.28272295;
						} else {
							w24 = 0.038973738;
						}
					} else {
						if (hops < 2) {
							w24 = -0.030325739;
						} else {
							w24 = -0.15746447;
						}
					}
				} else {
					if (hops < 2) {
						w24 = -1.464678;
					} else {
						w24 = -0.8788256;
					}
				}
			} else {
				if (rel_time < 9121) {
					if (prod != 0) {
						if (hops < 3) {
							w24 = 0.009558281;
						} else {
							w24 = -0.10291335;
						}
					} else {
						if (rel_time < 9114) {
							w24 = 2.2773173;
						} else {
							w24 = 0.16711755;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 10132) {
							w24 = -0.06700834;
						} else {
							w24 = -0.002724767;
						}
					} else {
						if (hops < 3) {
							w24 = 0.055456746;
						} else {
							w24 = -0.011781286;
						}
					}
				}
			}
		}
	}
	float w25;
	if (hops < 4) {
		if (size < 133) {
			if (rel_time < 1015) {
				if (hops < 3) {
					if (hops < 2) {
						if (prod != 0) {
							w25 = 0.026724972;
						} else {
							w25 = 0.068214126;
						}
					} else {
						if (prod != 1) {
							w25 = 0.07898953;
						} else {
							w25 = 0.1060086;
						}
					}
				} else {
					w25 = 0.0087157795;
				}
			} else {
				if (rel_time < 2026) {
					if (rel_time < 1586) {
						if (rel_time < 1515) {
							w25 = -0.07035755;
						} else {
							w25 = 0.029324042;
						}
					} else {
						if (hops < 3) {
							w25 = 0.0049705133;
						} else {
							w25 = -0.573881;
						}
					}
				} else {
					if (rel_time < 2605) {
						if (hops < 2) {
							w25 = 0.1662549;
						} else {
							w25 = 0.0018376028;
						}
					} else {
						if (rel_time < 3184) {
							w25 = -0.055597894;
						} else {
							w25 = -0.0037298293;
						}
					}
				}
			}
		} else {
			if (rel_time < 939) {
				if (hops < 3) {
					if (rel_time < 867) {
						if (hops < 2) {
							w25 = -0.11496684;
						} else {
							w25 = -0.029713446;
						}
					} else {
						if (rel_time < 888) {
							w25 = 0.4698579;
						} else {
							w25 = -0.06417602;
						}
					}
				} else {
					if (rel_time < 867) {
						w25 = 0.02501598;
					} else {
						w25 = -0.02415453;
					}
				}
			} else {
				if (rel_time < 7263) {
					if (rel_time < 5568) {
						if (rel_time < 4989) {
							w25 = 0.018241828;
						} else {
							w25 = -0.07352149;
						}
					} else {
						if (rel_time < 6147) {
							w25 = 0.18750595;
						} else {
							w25 = 0.01303586;
						}
					}
				} else {
					if (rel_time < 7884) {
						if (rel_time < 7837) {
							w25 = -0.26924148;
						} else {
							w25 = -0.08597783;
						}
					} else {
						if (rel_time < 10736) {
							w25 = 0.02117098;
						} else {
							w25 = -0.032379266;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 2606) {
			if (prod != 0) {
				if (rel_time < 2094) {
					if (rel_time < 2046) {
						if (rel_time < 2027) {
							w25 = 0.011086789;
						} else {
							w25 = 0.26751432;
						}
					} else {
						if (size < 133) {
							w25 = 0.036649264;
						} else {
							w25 = -0.39506307;
						}
					}
				} else {
					w25 = 0.15032144;
				}
			} else {
				if (rel_time < 1015) {
					w25 = -0.082195364;
				} else {
					if (rel_time < 1447) {
						w25 = 0.16268644;
					} else {
						w25 = 0.4226261;
					}
				}
			}
		} else {
			if (rel_time < 3185) {
				if (prod != 0) {
					if (size < 133) {
						if (rel_time < 2745) {
							w25 = -0.023409832;
						} else {
							w25 = -0.10162815;
						}
					} else {
						w25 = 0.05706754;
					}
				} else {
					if (rel_time < 2746) {
						w25 = -0.22425516;
					} else {
						w25 = -0.40617254;
					}
				}
			} else {
				if (rel_time < 6147) {
					if (rel_time < 4412) {
						if (rel_time < 3833) {
							w25 = 0.0533128;
						} else {
							w25 = -0.07804528;
						}
					} else {
						if (rel_time < 4921) {
							w25 = 0.28641793;
						} else {
							w25 = 0.051352486;
						}
					}
				} else {
					if (rel_time < 6659) {
						if (rel_time < 6150) {
							w25 = -0.16925526;
						} else {
							w25 = -0.094815254;
						}
					} else {
						if (prod != 0) {
							w25 = 0.022439335;
						} else {
							w25 = -0.036426578;
						}
					}
				}
			}
		}
	}
	float w26;
	if (hops < 3) {
		if (rel_time < 11313) {
			if (rel_time < 10736) {
				if (rel_time < 10134) {
					if (rel_time < 9121) {
						if (prod != 0) {
							w26 = -0.00021653774;
						} else {
							w26 = -0.024336748;
						}
					} else {
						if (prod != 0) {
							w26 = -0.08803385;
						} else {
							w26 = 0.05227985;
						}
					}
				} else {
					if (rel_time < 10205) {
						if (hops < 2) {
							w26 = 0.009567134;
						} else {
							w26 = 0.12835218;
						}
					} else {
						if (rel_time < 10734) {
							w26 = 0.0028537982;
						} else {
							w26 = 0.08927568;
						}
					}
				}
			} else {
				if (rel_time < 11291) {
					if (rel_time < 10782) {
						if (hops < 2) {
							w26 = -0.12872577;
						} else {
							w26 = -0.21349439;
						}
					} else {
						if (hops < 2) {
							w26 = -0.06693192;
						} else {
							w26 = -0.11975309;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 11293) {
							w26 = 0.29575107;
						} else {
							w26 = -0.059948973;
						}
					} else {
						if (rel_time < 11293) {
							w26 = -0.17010565;
						} else {
							w26 = 0.13541088;
						}
					}
				}
			}
		} else {
			if (rel_time < 11938) {
				if (prod != 0) {
					if (rel_time < 11872) {
						if (rel_time < 11366) {
							w26 = 0.039196935;
						} else {
							w26 = -0.117591254;
						}
					} else {
						if (hops < 2) {
							w26 = -0.056426328;
						} else {
							w26 = 0.1854923;
						}
					}
				} else {
					if (hops < 2) {
						w26 = -0.026788924;
					} else {
						w26 = 0.36296418;
					}
				}
			} else {
				if (hops < 2) {
					if (rel_time < 11940) {
						w26 = -0.014596537;
					} else {
						if (rel_time < 12009) {
							w26 = 0.058767244;
						} else {
							w26 = 0.0238076;
						}
					}
				} else {
					if (rel_time < 11943) {
						w26 = -0.09872531;
					} else {
						if (rel_time < 12009) {
							w26 = -0.007301591;
						} else {
							w26 = -0.059071753;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 6081) {
			if (rel_time < 2165) {
				if (prod != 0) {
					if (rel_time < 2046) {
						if (rel_time < 2027) {
							w26 = 0.011979932;
						} else {
							w26 = 0.17182797;
						}
					} else {
						if (hops < 4) {
							w26 = 0.0047806143;
						} else {
							w26 = -0.065156944;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1447) {
							w26 = 0.027594358;
						} else {
							w26 = -0.32364848;
						}
					} else {
						if (rel_time < 1015) {
							w26 = -0.041306842;
						} else {
							w26 = 0.19808578;
						}
					}
				}
			} else {
				if (rel_time < 2605) {
					if (hops < 4) {
						w26 = 0.2805743;
					} else {
						w26 = 0.21435578;
					}
				} else {
					if (rel_time < 2625) {
						if (hops < 4) {
							w26 = -0.16120315;
						} else {
							w26 = 0.049900014;
						}
					} else {
						if (rel_time < 3204) {
							w26 = 0.09628748;
						} else {
							w26 = 0.021015586;
						}
					}
				}
			}
		} else {
			if (rel_time < 6658) {
				if (size < 133) {
					if (rel_time < 6150) {
						if (rel_time < 6083) {
							w26 = 0.0029223042;
						} else {
							w26 = -0.27788827;
						}
					} else {
						if (prod != 0) {
							w26 = 0.14183994;
						} else {
							w26 = -0.1312712;
						}
					}
				} else {
					w26 = 0.020676078;
				}
			} else {
				if (rel_time < 6659) {
					if (hops < 4) {
						w26 = 0.34721568;
					} else {
						w26 = -0.11684164;
					}
				} else {
					if (rel_time < 9693) {
						if (rel_time < 9114) {
							w26 = -0.0067037465;
						} else {
							w26 = 0.106480405;
						}
					} else {
						if (rel_time < 10272) {
							w26 = -0.08574094;
						} else {
							w26 = 0.004933515;
						}
					}
				}
			}
		}
	}
	float w27;
	if (rel_time < 4481) {
		if (rel_time < 3903) {
			if (rel_time < 3254) {
				if (rel_time < 3205) {
					if (rel_time < 3185) {
						if (rel_time < 2745) {
							w27 = 0.00065372675;
						} else {
							w27 = -0.0636266;
						}
					} else {
						if (hops < 2) {
							w27 = 0.04416396;
						} else {
							w27 = 0.12002591;
						}
					}
				} else {
					if (size < 133) {
						if (hops < 2) {
							w27 = -0.07711774;
						} else {
							w27 = 0.046343755;
						}
					} else {
						if (hops < 2) {
							w27 = 0.024727674;
						} else {
							w27 = -0.109315336;
						}
					}
				}
			} else {
				if (rel_time < 3763) {
					if (prod != 0) {
						w27 = -0.026121147;
					} else {
						if (hops < 2) {
							w27 = 0.14100115;
						} else {
							w27 = 0.053939663;
						}
					}
				} else {
					if (prod != 0) {
						if (size < 133) {
							w27 = 0.003727317;
						} else {
							w27 = 0.031820316;
						}
					} else {
						if (hops < 2) {
							w27 = -0.34701988;
						} else {
							w27 = -0.035088997;
						}
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 133) {
					w27 = -0.017938139;
				} else {
					if (hops < 2) {
						w27 = 0.0098289475;
					} else {
						if (hops < 3) {
							w27 = -0.14457905;
						} else {
							w27 = -0.057507917;
						}
					}
				}
			} else {
				if (hops < 2) {
					w27 = -0.33276924;
				} else {
					w27 = -0.08154878;
				}
			}
		}
	} else {
		if (rel_time < 4921) {
			if (hops < 2) {
				w27 = 0.1259138;
			} else {
				if (prod != 0) {
					w27 = -0.2468436;
				} else {
					if (rel_time < 4482) {
						w27 = 0.13324067;
					} else {
						w27 = 0.21353583;
					}
				}
			}
		} else {
			if (rel_time < 4941) {
				if (rel_time < 4922) {
					if (hops < 2) {
						w27 = 0.10464783;
					} else {
						if (hops < 3) {
							w27 = -0.3515336;
						} else {
							w27 = -0.043562636;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 4923) {
							w27 = -0.10035819;
						} else {
							w27 = -0.18625349;
						}
					} else {
						if (hops < 3) {
							w27 = 0.07598696;
						} else {
							w27 = -0.13598254;
						}
					}
				}
			} else {
				if (rel_time < 4989) {
					if (size < 133) {
						w27 = -0.96751183;
					} else {
						if (hops < 2) {
							w27 = -0.01628682;
						} else {
							w27 = 0.13738498;
						}
					}
				} else {
					if (rel_time < 5501) {
						if (hops < 2) {
							w27 = 0.21722393;
						} else {
							w27 = -0.13693425;
						}
					} else {
						if (rel_time < 5521) {
							w27 = 0.101052545;
						} else {
							w27 = 0.00032001158;
						}
					}
				}
			}
		}
	}
	float w28;
	if (hops < 3) {
		if (rel_time < 6683) {
			if (rel_time < 6219) {
				if (rel_time < 6101) {
					if (prod != 1) {
						if (rel_time < 4410) {
							w28 = -0.010004147;
						} else {
							w28 = 0.018894413;
						}
					} else {
						if (rel_time < 4481) {
							w28 = -0.0023677424;
						} else {
							w28 = -0.14932182;
						}
					}
				} else {
					if (prod != 0) {
						if (rel_time < 6150) {
							w28 = 0.113853455;
						} else {
							w28 = 0.2896034;
						}
					} else {
						if (hops < 2) {
							w28 = -0.6080825;
						} else {
							w28 = -0.39509872;
						}
					}
				}
			} else {
				if (rel_time < 6659) {
					if (hops < 2) {
						if (rel_time < 6658) {
							w28 = -0.12445947;
						} else {
							w28 = 0.012757083;
						}
					} else {
						if (rel_time < 6658) {
							w28 = -0.17039077;
						} else {
							w28 = -0.37981084;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 6661) {
							w28 = 0.16854732;
						} else {
							w28 = -0.14512935;
						}
					} else {
						if (rel_time < 6661) {
							w28 = -0.14235957;
						} else {
							w28 = 0.049324702;
						}
					}
				}
			}
		} else {
			if (rel_time < 7237) {
				if (prod != 0) {
					if (rel_time < 6728) {
						if (rel_time < 6727) {
							w28 = 0.094613366;
						} else {
							w28 = 0.16357337;
						}
					} else {
						w28 = 0.025017519;
					}
				} else {
					if (hops < 2) {
						w28 = 0.1602095;
					} else {
						if (rel_time < 6798) {
							w28 = 0.26227033;
						} else {
							w28 = 0.10295711;
						}
					}
				}
			} else {
				if (rel_time < 7816) {
					if (size < 133) {
						if (prod != 0) {
							w28 = -0.05671752;
						} else {
							w28 = -0.11528398;
						}
					} else {
						w28 = 0.0712912;
					}
				} else {
					if (rel_time < 7837) {
						if (size < 133) {
							w28 = 0.22733139;
						} else {
							w28 = -0.13530599;
						}
					} else {
						if (rel_time < 7890) {
							w28 = 0.040828556;
						} else {
							w28 = -0.005736083;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10851) {
			if (rel_time < 10739) {
				if (prod != 0) {
					if (rel_time < 10134) {
						if (rel_time < 9623) {
							w28 = -0.0021798972;
						} else {
							w28 = 0.20024487;
						}
					} else {
						if (hops < 4) {
							w28 = -0.09297636;
						} else {
							w28 = 0.08419041;
						}
					}
				} else {
					if (rel_time < 10132) {
						if (rel_time < 9555) {
							w28 = 0.039278083;
						} else {
							w28 = -0.14603241;
						}
					} else {
						if (hops < 4) {
							w28 = 0.26820654;
						} else {
							w28 = -0.17659383;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 4) {
						if (rel_time < 10780) {
							w28 = 0.08637834;
						} else {
							w28 = 0.23354736;
						}
					} else {
						if (size < 133) {
							w28 = -0.01479415;
						} else {
							w28 = 0.19445339;
						}
					}
				} else {
					w28 = -0.49130684;
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 11291) {
					if (hops < 4) {
						w28 = 0.35962105;
					} else {
						w28 = -0.43151855;
					}
				} else {
					if (rel_time < 11296) {
						if (rel_time < 11293) {
							w28 = 0.06878277;
						} else {
							w28 = -0.15041825;
						}
					} else {
						if (rel_time < 11311) {
							w28 = 0.18806966;
						} else {
							w28 = 0.0025442778;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 12009) {
						if (rel_time < 11291) {
							w28 = -0.0896217;
						} else {
							w28 = -0.21087667;
						}
					} else {
						w28 = -0.01878564;
					}
				} else {
					if (rel_time < 11870) {
						if (rel_time < 11291) {
							w28 = -0.06362052;
						} else {
							w28 = 0.17841563;
						}
					} else {
						w28 = -0.068439215;
					}
				}
			}
		}
	}
	float w29;
	if (rel_time < 1586) {
		if (rel_time < 1467) {
			if (prod != 0) {
				if (rel_time < 1014) {
					if (size < 133) {
						if (hops < 3) {
							w29 = 0.03558096;
						} else {
							w29 = 0.00033099216;
						}
					} else {
						if (hops < 4) {
							w29 = -0.017099986;
						} else {
							w29 = 0.027752636;
						}
					}
				} else {
					if (size < 133) {
						if (rel_time < 1447) {
							w29 = -0.11304122;
						} else {
							w29 = -0.03349141;
						}
					} else {
						w29 = 0.14171118;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 1015) {
						if (rel_time < 1014) {
							w29 = 0.12458732;
						} else {
							w29 = 0.047044687;
						}
					} else {
						w29 = 0.124646865;
					}
				} else {
					w29 = -0.014783819;
				}
			}
		} else {
			if (size < 133) {
				if (rel_time < 1515) {
					if (hops < 4) {
						w29 = -0.20129277;
					} else {
						w29 = -0.5735977;
					}
				} else {
					if (hops < 3) {
						w29 = -0.024523014;
					} else {
						if (hops < 4) {
							w29 = 0.09727007;
						} else {
							w29 = 0.047335945;
						}
					}
				}
			} else {
				if (hops < 3) {
					w29 = 0.08031405;
				} else {
					if (hops < 4) {
						w29 = 0.026646325;
					} else {
						w29 = 0.094243556;
					}
				}
			}
		}
	} else {
		if (rel_time < 2165) {
			if (hops < 2) {
				if (size < 133) {
					if (prod != 2) {
						w29 = -0.069131106;
					} else {
						if (rel_time < 2026) {
							w29 = -0.2028438;
						} else {
							w29 = -0.02454977;
						}
					}
				} else {
					if (rel_time < 2047) {
						w29 = -0.15121883;
					} else {
						w29 = -0.2825465;
					}
				}
			} else {
				if (size < 133) {
					if (hops < 3) {
						if (rel_time < 2095) {
							w29 = 0.078656025;
						} else {
							w29 = -0.07583408;
						}
					} else {
						if (rel_time < 2025) {
							w29 = -0.1135056;
						} else {
							w29 = -0.0034212635;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 2047) {
							w29 = -0.07341666;
						} else {
							w29 = -0.16571434;
						}
					} else {
						if (hops < 4) {
							w29 = 0.0593131;
						} else {
							w29 = -0.16541517;
						}
					}
				}
			}
		} else {
			if (rel_time < 2605) {
				if (hops < 2) {
					if (prod != 0) {
						w29 = -0.07517271;
					} else {
						w29 = 0.38057894;
					}
				} else {
					if (hops < 3) {
						w29 = -0.2718703;
					} else {
						w29 = 0.1130858;
					}
				}
			} else {
				if (rel_time < 2606) {
					if (hops < 4) {
						if (hops < 2) {
							w29 = -0.0027000427;
						} else {
							w29 = -0.07951861;
						}
					} else {
						w29 = 0.060345072;
					}
				} else {
					if (rel_time < 2626) {
						if (hops < 3) {
							w29 = 0.08152398;
						} else {
							w29 = -0.11100647;
						}
					} else {
						if (rel_time < 3184) {
							w29 = -0.014898002;
						} else {
							w29 = 0.0003196595;
						}
					}
				}
			}
		}
	}
	float w30;
	if (hops < 3) {
		if (rel_time < 11311) {
			if (rel_time < 10736) {
				if (rel_time < 10134) {
					if (rel_time < 10132) {
						if (rel_time < 9626) {
							w30 = -0.0045033847;
						} else {
							w30 = 0.034501363;
						}
					} else {
						if (hops < 2) {
							w30 = 0.24275628;
						} else {
							w30 = -0.32053334;
						}
					}
				} else {
					if (prod != 2) {
						if (hops < 2) {
							w30 = 0.044393804;
						} else {
							w30 = 0.023282332;
						}
					} else {
						if (rel_time < 10716) {
							w30 = 0.020788604;
						} else {
							w30 = -0.07892232;
						}
					}
				}
			} else {
				if (rel_time < 10856) {
					if (prod != 0) {
						if (rel_time < 10785) {
							w30 = -0.06008726;
						} else {
							w30 = 0.055890843;
						}
					} else {
						w30 = -0.07608544;
					}
				} else {
					if (rel_time < 11296) {
						if (hops < 2) {
							w30 = 0.052220356;
						} else {
							w30 = -0.04098736;
						}
					} else {
						if (hops < 2) {
							w30 = -0.2001483;
						} else {
							w30 = 0.07873208;
						}
					}
				}
			}
		} else {
			if (rel_time < 11938) {
				if (prod != 0) {
					if (rel_time < 11872) {
						if (rel_time < 11366) {
							w30 = 0.01960834;
						} else {
							w30 = -0.056345392;
						}
					} else {
						if (hops < 2) {
							w30 = -0.025726503;
						} else {
							w30 = 0.09549842;
						}
					}
				} else {
					if (hops < 2) {
						w30 = -0.01085648;
					} else {
						w30 = 0.18430045;
					}
				}
			} else {
				if (hops < 2) {
					w30 = 0.018271754;
				} else {
					w30 = -0.029354455;
				}
			}
		}
	} else {
		if (rel_time < 6080) {
			if (rel_time < 4944) {
				if (rel_time < 4922) {
					if (rel_time < 4482) {
						if (rel_time < 3185) {
							w30 = 0.014625801;
						} else {
							w30 = -0.017777804;
						}
					} else {
						if (rel_time < 4921) {
							w30 = 0.09176587;
						} else {
							w30 = -0.020932788;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 4923) {
							w30 = -0.060784306;
						} else {
							w30 = -0.11578247;
						}
					} else {
						w30 = 0.0723509;
					}
				}
			} else {
				if (rel_time < 5060) {
					if (rel_time < 4989) {
						if (size < 133) {
							w30 = -0.30107015;
						} else {
							w30 = 0.054801717;
						}
					} else {
						if (hops < 4) {
							w30 = 0.2536711;
						} else {
							w30 = 0.15848231;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 5568) {
							w30 = -0.09207211;
						} else {
							w30 = 0.064994365;
						}
					} else {
						if (rel_time < 5501) {
							w30 = 0.5663059;
						} else {
							w30 = 0.038123287;
						}
					}
				}
			}
		} else {
			if (rel_time < 6658) {
				if (hops < 4) {
					if (size < 133) {
						if (rel_time < 6150) {
							w30 = -0.13328025;
						} else {
							w30 = -0.060152654;
						}
					} else {
						w30 = 0.0027338795;
					}
				} else {
					if (rel_time < 6083) {
						w30 = 0.18425152;
					} else {
						if (rel_time < 6100) {
							w30 = -0.15317254;
						} else {
							w30 = 0.021241102;
						}
					}
				}
			} else {
				if (rel_time < 6678) {
					if (rel_time < 6661) {
						if (rel_time < 6659) {
							w30 = 0.12315931;
						} else {
							w30 = 0.025198026;
						}
					} else {
						w30 = 0.15284172;
					}
				} else {
					if (rel_time < 6728) {
						if (hops < 4) {
							w30 = -0.10847749;
						} else {
							w30 = -0.0072246897;
						}
					} else {
						if (rel_time < 7237) {
							w30 = 0.07883206;
						} else {
							w30 = -0.0031951831;
						}
					}
				}
			}
		}
	}
	float w31;
	if (prod != 1) {
		if (hops < 4) {
			if (rel_time < 9042) {
				if (rel_time < 8463) {
					if (rel_time < 8396) {
						if (rel_time < 7960) {
							w31 = 0.002573316;
						} else {
							w31 = -0.10080827;
						}
					} else {
						if (hops < 2) {
							w31 = 0.06653287;
						} else {
							w31 = 0.030510508;
						}
					}
				} else {
					if (prod != 2) {
						if (hops < 3) {
							w31 = -0.065008536;
						} else {
							w31 = -0.12236771;
						}
					} else {
						if (rel_time < 8975) {
							w31 = 0.17197599;
						} else {
							w31 = 0.018300362;
						}
					}
				}
			} else {
				if (rel_time < 9114) {
					if (hops < 3) {
						w31 = 0.6891218;
					} else {
						w31 = 1.2594558;
					}
				} else {
					if (rel_time < 9121) {
						if (hops < 3) {
							w31 = 0.04589701;
						} else {
							w31 = 0.17426828;
						}
					} else {
						if (rel_time < 9574) {
							w31 = -0.03434103;
						} else {
							w31 = 0.0055515664;
						}
					}
				}
			}
		} else {
			if (rel_time < 11358) {
				if (rel_time < 11311) {
					if (rel_time < 11296) {
						if (rel_time < 8995) {
							w31 = -0.004834309;
						} else {
							w31 = -0.037977166;
						}
					} else {
						w31 = 0.19145909;
					}
				} else {
					w31 = -0.14783704;
				}
			} else {
				if (rel_time < 11938) {
					if (rel_time < 11875) {
						if (prod != 0) {
							w31 = -0.016301693;
						} else {
							w31 = 0.091090344;
						}
					} else {
						w31 = 0.14131394;
					}
				} else {
					w31 = -0.032974705;
				}
			}
		}
	} else {
		if (rel_time < 7890) {
			if (rel_time < 7310) {
				if (rel_time < 6729) {
					if (rel_time < 6147) {
						if (rel_time < 5570) {
							w31 = -0.0016218422;
						} else {
							w31 = -0.145024;
						}
					} else {
						if (hops < 3) {
							w31 = 0.06773459;
						} else {
							w31 = -0.028301125;
						}
					}
				} else {
					if (rel_time < 7307) {
						if (hops < 4) {
							w31 = -0.043475725;
						} else {
							w31 = -0.12217383;
						}
					} else {
						if (hops < 2) {
							w31 = 0.041534025;
						} else {
							w31 = -0.0114711365;
						}
					}
				}
			} else {
				if (rel_time < 7887) {
					if (hops < 2) {
						if (rel_time < 7377) {
							w31 = 0.107681274;
						} else {
							w31 = -0.015007917;
						}
					} else {
						if (hops < 3) {
							w31 = 0.22171913;
						} else {
							w31 = 0.051116943;
						}
					}
				} else {
					if (hops < 3) {
						w31 = 0.035665605;
					} else {
						w31 = -0.024277074;
					}
				}
			}
		} else {
			if (rel_time < 7957) {
				w31 = -1.6253579;
			} else {
				if (rel_time < 9044) {
					if (hops < 3) {
						w31 = 0.0011710504;
					} else {
						if (hops < 4) {
							w31 = 0.08222857;
						} else {
							w31 = -0.023502126;
						}
					}
				} else {
					if (rel_time < 9623) {
						if (rel_time < 9114) {
							w31 = -0.024630802;
						} else {
							w31 = -0.15075512;
						}
					} else {
						if (hops < 3) {
							w31 = -0.0037117146;
						} else {
							w31 = 0.013977119;
						}
					}
				}
			}
		}
	}
	float w32;
	if (hops < 3) {
		if (size < 133) {
			if (rel_time < 1447) {
				if (hops < 2) {
					if (prod != 0) {
						if (rel_time < 868) {
							w32 = 0.056531172;
						} else {
							w32 = -0.0154143935;
						}
					} else {
						if (rel_time < 1015) {
							w32 = 0.027255772;
						} else {
							w32 = 0.097406216;
						}
					}
				} else {
					w32 = 0.030903816;
				}
			} else {
				if (rel_time < 7818) {
					if (rel_time < 6079) {
						if (rel_time < 5501) {
							w32 = -0.011569385;
						} else {
							w32 = 0.062242966;
						}
					} else {
						if (rel_time < 6147) {
							w32 = -0.14867315;
						} else {
							w32 = -0.015281201;
						}
					}
				} else {
					if (rel_time < 7837) {
						if (hops < 2) {
							w32 = 0.06773776;
						} else {
							w32 = 0.35886842;
						}
					} else {
						if (rel_time < 7887) {
							w32 = 0.06423082;
						} else {
							w32 = -0.0062990044;
						}
					}
				}
			}
		} else {
			if (rel_time < 3784) {
				if (rel_time < 1515) {
					if (rel_time < 939) {
						w32 = -0.013156956;
					} else {
						w32 = 0.042447664;
					}
				} else {
					if (rel_time < 2094) {
						if (rel_time < 2047) {
							w32 = -0.058377996;
						} else {
							w32 = -0.09608536;
						}
					} else {
						if (rel_time < 2626) {
							w32 = 0.049316917;
						} else {
							w32 = -0.032504678;
						}
					}
				}
			} else {
				if (rel_time < 6103) {
					if (rel_time < 5523) {
						if (hops < 2) {
							w32 = -0.021724269;
						} else {
							w32 = 0.04189585;
						}
					} else {
						if (rel_time < 6100) {
							w32 = 0.192138;
						} else {
							w32 = 0.071105205;
						}
					}
				} else {
					if (rel_time < 8416) {
						if (rel_time < 7263) {
							w32 = 0.01082519;
						} else {
							w32 = -0.056702863;
						}
					} else {
						if (rel_time < 8419) {
							w32 = 0.036872804;
						} else {
							w32 = 0.009978026;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 10785) {
			if (rel_time < 10739) {
				if (rel_time < 10731) {
					if (rel_time < 10272) {
						if (rel_time < 10201) {
							w32 = 0.0039465376;
						} else {
							w32 = -0.081597276;
						}
					} else {
						if (rel_time < 10714) {
							w32 = 0.08170034;
						} else {
							w32 = -0.020090977;
						}
					}
				} else {
					w32 = -0.084727235;
				}
			} else {
				if (hops < 4) {
					if (rel_time < 10780) {
						w32 = 0.03817152;
					} else {
						w32 = 0.12837619;
					}
				} else {
					if (size < 133) {
						w32 = 0.010088088;
					} else {
						w32 = 0.11805585;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (rel_time < 11938) {
					if (rel_time < 11293) {
						if (hops < 4) {
							w32 = 0.13037954;
						} else {
							w32 = -0.32043278;
						}
					} else {
						if (rel_time < 11296) {
							w32 = -0.073109865;
						} else {
							w32 = -0.006439052;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11940) {
							w32 = 0.22405839;
						} else {
							w32 = 0.032761995;
						}
					} else {
						if (rel_time < 11943) {
							w32 = -0.022103073;
						} else {
							w32 = -0.17898777;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (rel_time < 12009) {
						if (rel_time < 11431) {
							w32 = -0.05190117;
						} else {
							w32 = -0.11668452;
						}
					} else {
						w32 = -0.01074321;
					}
				} else {
					w32 = 0.0058667464;
				}
			}
		}
	}
	return (728.25073 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20 + w21 + w22 + w23 + w24 + w25 + w26 + w27 + w28 + w29 + w30 + w31 + w32);
}
