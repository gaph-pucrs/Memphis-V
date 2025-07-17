#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

int model(const uint16_t rel_time, const uint8_t hops, const uint8_t size, const uint8_t prod, const uint8_t cons)
{
	int w0;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (rel_time < 59) {
						if (hops < 3) {
							w0 = 32135;
						} else {
							w0 = 33277;
						}
					} else {
						if (hops < 3) {
							w0 = 36296;
						} else {
							w0 = 37439;
						}
					}
				} else {
					if (rel_time < 1838) {
						w0 = 59439;
					} else {
						w0 = 56966;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w0 = 35806;
					} else {
						w0 = 36336;
					}
				} else {
					if (hops < 4) {
						w0 = 36876;
					} else {
						w0 = 37551;
					}
				}
			}
		} else {
			if (rel_time < 807) {
				if (rel_time < 725) {
					if (rel_time < 640) {
						if (rel_time < 399) {
							w0 = 52228;
						} else {
							w0 = 54382;
						}
					} else {
						w0 = 47567;
					}
				} else {
					if (rel_time < 726) {
						w0 = 63127;
					} else {
						w0 = 59927;
					}
				}
			} else {
				if (prod != 1) {
					if (size < 69) {
						if (rel_time < 10961) {
							w0 = 48129;
						} else {
							w0 = 56944;
						}
					} else {
						if (hops < 3) {
							w0 = 46308;
						} else {
							w0 = 47464;
						}
					}
				} else {
					if (rel_time < 1734) {
						if (hops < 3) {
							w0 = 44100;
						} else {
							w0 = 45256;
						}
					} else {
						if (hops < 3) {
							w0 = 42030;
						} else {
							w0 = 43195;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			w0 = 66970;
		} else {
			if (hops < 3) {
				w0 = 59976;
			} else {
				w0 = 61101;
			}
		}
	}
	int w1;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (rel_time < 59) {
						if (hops < 2) {
							w1 = 22232;
						} else {
							w1 = 23082;
						}
					} else {
						if (hops < 2) {
							w1 = 25141;
						} else {
							w1 = 25992;
						}
					}
				} else {
					if (rel_time < 1838) {
						w1 = 41615;
					} else {
						w1 = 39888;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w1 = 25065;
					} else {
						w1 = 25436;
					}
				} else {
					if (hops < 5) {
						w1 = 25961;
					} else {
						w1 = 26701;
					}
				}
			}
		} else {
			if (rel_time < 807) {
				if (rel_time < 725) {
					if (rel_time < 640) {
						if (rel_time < 558) {
							w1 = 37014;
						} else {
							w1 = 38372;
						}
					} else {
						if (hops < 3) {
							w1 = 32850;
						} else {
							w1 = 34015;
						}
					}
				} else {
					if (rel_time < 726) {
						w1 = 44204;
					} else {
						w1 = 41956;
					}
				}
			} else {
				if (prod != 1) {
					if (size < 69) {
						if (rel_time < 10961) {
							w1 = 33690;
						} else {
							w1 = 39866;
						}
					} else {
						if (hops < 4) {
							w1 = 32526;
						} else {
							w1 = 33564;
						}
					}
				} else {
					if (rel_time < 1734) {
						if (hops < 4) {
							w1 = 30985;
						} else {
							w1 = 32020;
						}
					} else {
						if (hops < 4) {
							w1 = 29532;
						} else {
							w1 = 30584;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			w1 = 46884;
		} else {
			if (hops < 4) {
				if (hops < 2) {
					w1 = 41760;
				} else {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w1 = 43304;
						} else {
							w1 = 42205;
						}
					} else {
						w1 = 43330;
					}
				}
			} else {
				w1 = 43117;
			}
		}
	}
	int w2;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (rel_time < 59) {
						if (hops < 4) {
							w2 = 15794;
						} else {
							w2 = 16682;
						}
					} else {
						if (hops < 4) {
							w2 = 17826;
						} else {
							w2 = 18726;
						}
					}
				} else {
					if (rel_time < 1838) {
						w2 = 29136;
					} else {
						w2 = 27930;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w2 = 17546;
					} else {
						w2 = 17805;
					}
				} else {
					if (hops < 4) {
						w2 = 18027;
					} else {
						w2 = 18444;
					}
				}
			}
		} else {
			if (rel_time < 807) {
				if (rel_time < 725) {
					if (rel_time < 640) {
						if (hops < 3) {
							w2 = 25948;
						} else {
							w2 = 27104;
						}
					} else {
						if (hops < 4) {
							w2 = 23114;
						} else {
							w2 = 24149;
						}
					}
				} else {
					if (rel_time < 726) {
						w2 = 30954;
					} else {
						w2 = 29374;
					}
				}
			} else {
				if (prod != 1) {
					if (size < 69) {
						if (rel_time < 10961) {
							w2 = 23583;
						} else {
							w2 = 27909;
						}
					} else {
						if (hops < 2) {
							w2 = 22403;
						} else {
							w2 = 23156;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1734) {
							w2 = 21335;
						} else {
							w2 = 20313;
						}
					} else {
						if (rel_time < 1734) {
							w2 = 22078;
						} else {
							w2 = 21064;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 3) {
				w2 = 32382;
			} else {
				w2 = 33512;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 699) {
					w2 = 30186;
				} else {
					if (rel_time < 10645) {
						if (hops < 2) {
							w2 = 29123;
						} else {
							w2 = 29467;
						}
					} else {
						w2 = 30181;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w2 = 30693;
						} else {
							w2 = 29766;
						}
					} else {
						w2 = 30726;
					}
				} else {
					w2 = 30567;
				}
			}
		}
	}
	int w3;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (rel_time < 59) {
						if (hops < 3) {
							w3 = 10976;
						} else {
							w3 = 11511;
						}
					} else {
						if (hops < 3) {
							w3 = 12400;
						} else {
							w3 = 12930;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1838) {
							w3 = 20193;
						} else {
							w3 = 19159;
						}
					} else {
						w3 = 21168;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w3 = 12282;
					} else {
						w3 = 12464;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w3 = 12619;
						} else {
							w3 = 12826;
						}
					} else {
						w3 = 13163;
					}
				}
			}
		} else {
			if (rel_time < 807) {
				if (rel_time < 725) {
					if (rel_time < 640) {
						if (rel_time < 399) {
							w3 = 17549;
						} else {
							w3 = 18779;
						}
					} else {
						if (hops < 2) {
							w3 = 15818;
						} else {
							w3 = 16571;
						}
					}
				} else {
					if (rel_time < 726) {
						w3 = 21675;
					} else {
						w3 = 20565;
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 15753;
						} else {
							w3 = 16133;
						}
					} else {
						if (size < 69) {
							w3 = 17371;
						} else {
							w3 = 16366;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1734) {
							w3 = 15078;
						} else {
							w3 = 14365;
						}
					} else {
						if (hops < 5) {
							w3 = 14895;
						} else {
							w3 = 15560;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 2) {
				w3 = 22418;
			} else {
				w3 = 23253;
			}
		} else {
			if (hops < 4) {
				if (rel_time < 10645) {
					if (rel_time < 699) {
						w3 = 21168;
					} else {
						if (hops < 2) {
							w3 = 20386;
						} else {
							w3 = 20667;
						}
					}
				} else {
					w3 = 21173;
				}
			} else {
				if (rel_time < 10645) {
					if (rel_time < 699) {
						w3 = 21944;
					} else {
						w3 = 21072;
					}
				} else {
					w3 = 21971;
				}
			}
		}
	}
	int w4;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (rel_time < 59) {
						if (hops < 4) {
							w4 = 7729;
						} else {
							w4 = 8236;
						}
					} else {
						if (rel_time < 512) {
							w4 = 9146;
						} else {
							w4 = 8659;
						}
					}
				} else {
					if (hops < 3) {
						w4 = 13728;
					} else {
						w4 = 14597;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w4 = 8598;
					} else {
						w4 = 8725;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w4 = 8834;
						} else {
							w4 = 8979;
						}
					} else {
						w4 = 9215;
					}
				}
			}
		} else {
			if (rel_time < 807) {
				if (rel_time < 725) {
					if (rel_time < 640) {
						if (hops < 4) {
							w4 = 12734;
						} else {
							w4 = 13775;
						}
					} else {
						if (hops < 3) {
							w4 = 11220;
						} else {
							w4 = 11766;
						}
					}
				} else {
					if (rel_time < 726) {
						w4 = 15178;
					} else {
						if (hops < 4) {
							w4 = 14547;
						} else {
							w4 = 13742;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 4) {
						if (size < 69) {
							w4 = 11537;
						} else {
							w4 = 11105;
						}
					} else {
						if (size < 69) {
							w4 = 12484;
						} else {
							w4 = 11639;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1734) {
							w4 = 10415;
						} else {
							w4 = 9910;
						}
					} else {
						if (rel_time < 1734) {
							w4 = 10950;
						} else {
							w4 = 10330;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 4) {
				w4 = 15918;
			} else {
				w4 = 16815;
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 699) {
						w4 = 14749;
					} else {
						if (rel_time < 10627) {
							w4 = 14271;
						} else {
							w4 = 14739;
						}
					}
				} else {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w4 = 14861;
						} else {
							w4 = 14467;
						}
					} else {
						w4 = 14874;
					}
				}
			} else {
				if (hops < 5) {
					w4 = 14735;
				} else {
					w4 = 15052;
				}
			}
		}
	}
	int w5;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (rel_time < 59) {
						if (hops < 2) {
							w5 = 5227;
						} else {
							w5 = 5604;
						}
					} else {
						if (hops < 4) {
							w5 = 6077;
						} else {
							w5 = 6589;
						}
					}
				} else {
					if (hops < 2) {
						w5 = 9392;
					} else {
						if (rel_time < 1838) {
							w5 = 10318;
						} else {
							w5 = 9626;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w5 = 6019;
					} else {
						w5 = 6108;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w5 = 6184;
						} else {
							w5 = 6286;
						}
					} else {
						w5 = 6452;
					}
				}
			}
		} else {
			if (rel_time < 807) {
				if (rel_time < 725) {
					if (rel_time < 640) {
						if (rel_time < 558) {
							w5 = 8667;
						} else {
							w5 = 9437;
						}
					} else {
						if (hops < 4) {
							w5 = 7902;
						} else {
							w5 = 8425;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 726) {
							w5 = 10813;
						} else {
							w5 = 10185;
						}
					} else {
						w5 = 9679;
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 2) {
						if (rel_time < 11271) {
							w5 = 7622;
						} else {
							w5 = 8328;
						}
					} else {
						if (size < 69) {
							w5 = 8418;
						} else {
							w5 = 7953;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1734) {
							w5 = 7433;
						} else {
							w5 = 7054;
						}
					} else {
						if (rel_time < 1734) {
							w5 = 8002;
						} else {
							w5 = 7472;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 3) {
				w5 = 11060;
			} else {
				w5 = 11590;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 699) {
					w5 = 10348;
				} else {
					if (rel_time < 10645) {
						w5 = 10035;
					} else {
						w5 = 10343;
					}
				}
			} else {
				if (rel_time < 10645) {
					if (rel_time < 699) {
						w5 = 10695;
					} else {
						if (hops < 5) {
							w5 = 10213;
						} else {
							w5 = 10449;
						}
					}
				} else {
					w5 = 10717;
				}
			}
		}
	}
	int w6;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (rel_time < 59) {
						if (hops < 5) {
							w6 = 3805;
						} else {
							w6 = 4471;
						}
					} else {
						if (hops < 2) {
							w6 = 4067;
						} else {
							w6 = 4449;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1838) {
							w6 = 6966;
						} else {
							w6 = 6402;
						}
					} else {
						w6 = 7453;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w6 = 4213;
					} else {
						w6 = 4276;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w6 = 4329;
						} else {
							w6 = 4400;
						}
					} else {
						w6 = 4517;
					}
				}
			}
		} else {
			if (rel_time < 807) {
				if (rel_time < 725) {
					if (hops < 2) {
						if (rel_time < 399) {
							w6 = 5296;
						} else {
							w6 = 5848;
						}
					} else {
						if (rel_time < 640) {
							w6 = 6589;
						} else {
							w6 = 5730;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 726) {
							w6 = 7496;
						} else {
							w6 = 7097;
						}
					} else {
						w6 = 6324;
					}
				}
			} else {
				if (prod != 1) {
					if (hops < 5) {
						if (rel_time < 11271) {
							w6 = 5482;
						} else {
							w6 = 6101;
						}
					} else {
						if (size < 69) {
							w6 = 6610;
						} else {
							w6 = 6180;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1734) {
							w6 = 5063;
						} else {
							w6 = 4822;
						}
					} else {
						if (hops < 5) {
							w6 = 5081;
						} else {
							w6 = 5516;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 4) {
				if (hops < 2) {
					w6 = 7611;
				} else {
					w6 = 7909;
				}
			} else {
				w6 = 8305;
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 699) {
						w6 = 7226;
					} else {
						if (rel_time < 10627) {
							w6 = 6979;
						} else {
							w6 = 7220;
						}
					}
				} else {
					w6 = 7113;
				}
			} else {
				if (rel_time < 10645) {
					if (rel_time < 699) {
						w6 = 7727;
					} else {
						w6 = 7224;
					}
				} else {
					w6 = 7739;
				}
			}
		}
	}
	int w7;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (rel_time < 59) {
						if (hops < 2) {
							w7 = 2520;
						} else {
							w7 = 2768;
						}
					} else {
						if (rel_time < 512) {
							w7 = 3254;
						} else {
							w7 = 2912;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1838) {
							w7 = 4927;
						} else {
							w7 = 4541;
						}
					} else {
						w7 = 5690;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w7 = 2949;
					} else {
						w7 = 2993;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w7 = 3030;
						} else {
							w7 = 3080;
						}
					} else {
						w7 = 3162;
					}
				}
			}
		} else {
			if (rel_time < 807) {
				if (rel_time < 725) {
					if (hops < 3) {
						if (rel_time < 640) {
							w7 = 4254;
						} else {
							w7 = 3749;
						}
					} else {
						if (rel_time < 640) {
							w7 = 4768;
						} else {
							w7 = 4074;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 726) {
							w7 = 5325;
						} else {
							w7 = 5003;
						}
					} else {
						w7 = 4686;
					}
				}
			} else {
				if (cons != 5) {
					if (hops < 3) {
						if (size < 69) {
							w7 = 3447;
						} else {
							w7 = 3659;
						}
					} else {
						if (size < 69) {
							w7 = 3633;
						} else {
							w7 = 3907;
						}
					}
				} else {
					if (rel_time < 11271) {
						if (rel_time < 1574) {
							w7 = 3209;
						} else {
							w7 = 4029;
						}
					} else {
						if (size < 69) {
							w7 = 6725;
						} else {
							w7 = 3707;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 5) {
				if (hops < 2) {
					w7 = 5329;
				} else {
					w7 = 5569;
				}
			} else {
				w7 = 6205;
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 699) {
						w7 = 5060;
					} else {
						if (rel_time < 10627) {
							w7 = 4886;
						} else {
							w7 = 5056;
						}
					}
				} else {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w7 = 5127;
						} else {
							w7 = 4961;
						}
					} else {
						w7 = 5134;
					}
				}
			} else {
				if (rel_time < 10645) {
					if (rel_time < 699) {
						w7 = 5412;
					} else {
						if (hops < 5) {
							w7 = 5023;
						} else {
							w7 = 5149;
						}
					}
				} else {
					w7 = 5421;
				}
			}
		}
	}
	int w8;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (hops < 5) {
						if (rel_time < 920) {
							w8 = 1964;
						} else {
							w8 = 2228;
						}
					} else {
						if (rel_time < 59) {
							w8 = 2311;
						} else {
							w8 = 2749;
						}
					}
				} else {
					if (hops < 2) {
						w8 = 3129;
					} else {
						if (hops < 4) {
							w8 = 3412;
						} else {
							w8 = 3723;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w8 = 2065;
					} else {
						w8 = 2095;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w8 = 2121;
						} else {
							w8 = 2156;
						}
					} else {
						w8 = 2214;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 807) {
					if (rel_time < 725) {
						if (rel_time < 399) {
							w8 = 2535;
						} else {
							w8 = 3048;
						}
					} else {
						if (rel_time < 726) {
							w8 = 3729;
						} else {
							w8 = 3503;
						}
					}
				} else {
					if (cons != 5) {
						if (size < 69) {
							w8 = 2425;
						} else {
							w8 = 2583;
						}
					} else {
						if (rel_time < 1574) {
							w8 = 2169;
						} else {
							w8 = 2791;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (hops < 5) {
						if (rel_time < 807) {
							w8 = 3283;
						} else {
							w8 = 2739;
						}
					} else {
						if (size < 69) {
							w8 = 2818;
						} else {
							w8 = 3187;
						}
					}
				} else {
					if (rel_time < 10961) {
						if (rel_time < 1574) {
							w8 = 2603;
						} else {
							w8 = 3267;
						}
					} else {
						w8 = 5195;
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 4) {
				w8 = 3813;
			} else {
				if (hops < 5) {
					w8 = 4000;
				} else {
					w8 = 4353;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 699) {
					w8 = 3567;
				} else {
					if (rel_time < 10645) {
						if (hops < 2) {
							w8 = 3420;
						} else {
							w8 = 3455;
						}
					} else {
						w8 = 3564;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w8 = 3625;
						} else {
							w8 = 3506;
						}
					} else {
						w8 = 3631;
					}
				} else {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w8 = 4086;
						} else {
							w8 = 3605;
						}
					} else {
						w8 = 4134;
					}
				}
			}
		}
	}
	int w9;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (hops < 2) {
						if (rel_time < 808) {
							w9 = 1249;
						} else {
							w9 = 1402;
						}
					} else {
						if (rel_time < 59) {
							w9 = 1342;
						} else {
							w9 = 1576;
						}
					}
				} else {
					if (hops < 2) {
						w9 = 2191;
					} else {
						if (rel_time < 1838) {
							w9 = 2562;
						} else {
							w9 = 2268;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w9 = 1445;
					} else {
						w9 = 1467;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w9 = 1485;
						} else {
							w9 = 1509;
						}
					} else {
						w9 = 1550;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 11718) {
					if (rel_time < 11295) {
						if (rel_time < 807) {
							w9 = 1999;
						} else {
							w9 = 1731;
						}
					} else {
						w9 = 3524;
					}
				} else {
					if (rel_time < 11726) {
						w9 = 1284;
					} else {
						if (prod != 2) {
							w9 = 1390;
						} else {
							w9 = 1476;
						}
					}
				}
			} else {
				if (cons != 5) {
					if (rel_time < 807) {
						if (rel_time < 399) {
							w9 = 1914;
						} else {
							w9 = 2533;
						}
					} else {
						if (size < 69) {
							w9 = 1758;
						} else {
							w9 = 1891;
						}
					}
				} else {
					if (rel_time < 11271) {
						if (hops < 4) {
							w9 = 1968;
						} else {
							w9 = 2183;
						}
					} else {
						if (size < 69) {
							w9 = 3831;
						} else {
							w9 = 1895;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 2) {
				w9 = 2589;
			} else {
				if (hops < 5) {
					w9 = 2743;
				} else {
					w9 = 3054;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 699) {
						w9 = 2474;
					} else {
						if (rel_time < 10627) {
							w9 = 2394;
						} else {
							w9 = 2472;
						}
					}
				} else {
					if (rel_time < 1250) {
						w9 = 2496;
					} else {
						if (rel_time < 10645) {
							w9 = 2427;
						} else {
							w9 = 2518;
						}
					}
				}
			} else {
				if (rel_time < 10645) {
					if (rel_time < 699) {
						if (hops < 5) {
							w9 = 2593;
						} else {
							w9 = 2867;
						}
					} else {
						if (hops < 5) {
							w9 = 2465;
						} else {
							w9 = 2524;
						}
					}
				} else {
					if (hops < 5) {
						w9 = 2582;
					} else {
						w9 = 2900;
					}
				}
			}
		}
	}
	int w10;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (hops < 5) {
						if (rel_time < 920) {
							w10 = 951;
						} else {
							w10 = 1105;
						}
					} else {
						if (rel_time < 920) {
							w10 = 1329;
						} else {
							w10 = 1594;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1838) {
							w10 = 1709;
						} else {
							w10 = 1502;
						}
					} else {
						w10 = 2163;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w10 = 1012;
					} else {
						if (rel_time < 10092) {
							w10 = 1024;
						} else {
							w10 = 1068;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w10 = 1040;
						} else {
							w10 = 1057;
						}
					} else {
						w10 = 1085;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 807) {
					if (rel_time < 725) {
						if (rel_time < 640) {
							w10 = 1469;
						} else {
							w10 = 1115;
						}
					} else {
						if (hops < 2) {
							w10 = 1950;
						} else {
							w10 = 1748;
						}
					}
				} else {
					if (rel_time < 921) {
						if (hops < 2) {
							w10 = 405;
						} else {
							w10 = 570;
						}
					} else {
						if (cons != 5) {
							w10 = 1220;
						} else {
							w10 = 1322;
						}
					}
				}
			} else {
				if (cons != 5) {
					if (rel_time < 1146) {
						if (size < 69) {
							w10 = 1538;
						} else {
							w10 = 1902;
						}
					} else {
						if (hops < 5) {
							w10 = 1283;
						} else {
							w10 = 1505;
						}
					}
				} else {
					if (rel_time < 11271) {
						if (rel_time < 1574) {
							w10 = 1286;
						} else {
							w10 = 1521;
						}
					} else {
						if (size < 69) {
							w10 = 2671;
						} else {
							w10 = 1416;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 4) {
				if (hops < 2) {
					w10 = 1813;
				} else {
					w10 = 1902;
				}
			} else {
				w10 = 2026;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 699) {
					w10 = 1752;
				} else {
					if (rel_time < 10645) {
						w10 = 1682;
					} else {
						w10 = 1748;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 10645) {
						if (rel_time < 1250) {
							w10 = 1762;
						} else {
							w10 = 1719;
						}
					} else {
						w10 = 1780;
					}
				} else {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w10 = 2011;
						} else {
							w10 = 1767;
						}
					} else {
						w10 = 2035;
					}
				}
			}
		}
	}
	int w11;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 1871) {
				if (rel_time < 1283) {
					if (hops < 4) {
						if (rel_time < 512) {
							w11 = 742;
						} else {
							w11 = 598;
						}
					} else {
						if (rel_time < 920) {
							w11 = 819;
						} else {
							w11 = 982;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 1838) {
							w11 = 1172;
						} else {
							w11 = 1018;
						}
					} else {
						if (hops < 5) {
							w11 = 1294;
						} else {
							w11 = 1518;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 2458) {
						w11 = 733;
					} else {
						if (rel_time < 7745) {
							w11 = 707;
						} else {
							w11 = 720;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w11 = 728;
						} else {
							w11 = 740;
						}
					} else {
						w11 = 760;
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 11718) {
					if (rel_time < 11295) {
						if (size < 69) {
							w11 = 790;
						} else {
							w11 = 880;
						}
					} else {
						w11 = 2072;
					}
				} else {
					if (prod != 4) {
						w11 = 625;
					} else {
						if (rel_time < 11726) {
							w11 = 534;
						} else {
							w11 = 577;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (prod != 0) {
						if (rel_time < 1899) {
							w11 = 1082;
						} else {
							w11 = 897;
						}
					} else {
						if (rel_time < 10961) {
							w11 = 993;
						} else {
							w11 = 2055;
						}
					}
				} else {
					if (rel_time < 640) {
						if (rel_time < 399) {
							w11 = 1526;
						} else {
							w11 = 1952;
						}
					} else {
						if (prod != 1) {
							w11 = 1180;
						} else {
							w11 = 950;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 5) {
				if (hops < 2) {
					w11 = 1269;
				} else {
					w11 = 1342;
				}
			} else {
				w11 = 1538;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 1837) {
					if (hops < 2) {
						w11 = 1193;
					} else {
						w11 = 1229;
					}
				} else {
					if (rel_time < 10627) {
						w11 = 1174;
					} else {
						w11 = 1219;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 699) {
						w11 = 1250;
					} else {
						if (rel_time < 10645) {
							w11 = 1204;
						} else {
							w11 = 1247;
						}
					}
				} else {
					if (rel_time < 10645) {
						if (rel_time < 699) {
							w11 = 1411;
						} else {
							w11 = 1237;
						}
					} else {
						w11 = 1428;
					}
				}
			}
		}
	}
	int w12;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 59) {
				if (hops < 3) {
					if (hops < 2) {
						w12 = 294;
					} else {
						w12 = 372;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w12 = 405;
						} else {
							w12 = 466;
						}
					} else {
						w12 = 580;
					}
				}
			} else {
				if (rel_time < 512) {
					if (hops < 2) {
						w12 = 615;
					} else {
						if (hops < 5) {
							w12 = 755;
						} else {
							w12 = 977;
						}
					}
				} else {
					if (rel_time < 920) {
						if (hops < 4) {
							w12 = 271;
						} else {
							w12 = 386;
						}
					} else {
						if (rel_time < 1871) {
							w12 = 701;
						} else {
							w12 = 505;
						}
					}
				}
			}
		} else {
			if (hops < 2) {
				if (rel_time < 11718) {
					if (rel_time < 11271) {
						if (size < 69) {
							w12 = 542;
						} else {
							w12 = 618;
						}
					} else {
						if (size < 69) {
							w12 = 1680;
						} else {
							w12 = 285;
						}
					}
				} else {
					if (rel_time < 11726) {
						w12 = 374;
					} else {
						if (prod != 2) {
							w12 = 422;
						} else {
							w12 = 450;
						}
					}
				}
			} else {
				if (prod != 1) {
					if (rel_time < 640) {
						if (hops < 4) {
							w12 = 915;
						} else {
							w12 = 1164;
						}
					} else {
						if (rel_time < 1132) {
							w12 = 317;
						} else {
							w12 = 698;
						}
					}
				} else {
					if (rel_time < 1734) {
						if (rel_time < 399) {
							w12 = 553;
						} else {
							w12 = 811;
						}
					} else {
						if (hops < 5) {
							w12 = 538;
						} else {
							w12 = 622;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 699) {
			if (hops < 4) {
				if (rel_time < 317) {
					if (hops < 3) {
						w12 = 901;
					} else {
						w12 = 950;
					}
				} else {
					w12 = 860;
				}
			} else {
				if (hops < 5) {
					w12 = 944;
				} else {
					w12 = 1037;
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 11214) {
					if (hops < 2) {
						w12 = 820;
					} else {
						if (rel_time < 1837) {
							w12 = 850;
						} else {
							w12 = 828;
						}
					}
				} else {
					w12 = 874;
				}
			} else {
				if (rel_time < 10645) {
					if (hops < 5) {
						if (rel_time < 3012) {
							w12 = 855;
						} else {
							w12 = 839;
						}
					} else {
						w12 = 866;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w12 = 851;
						} else {
							w12 = 902;
						}
					} else {
						w12 = 1002;
					}
				}
			}
		}
	}
	int w13;
	if (size < 133) {
		if (size < 37) {
			if (rel_time < 59) {
				if (hops < 3) {
					if (hops < 2) {
						w13 = 206;
					} else {
						w13 = 260;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w13 = 284;
						} else {
							w13 = 327;
						}
					} else {
						w13 = 407;
					}
				}
			} else {
				if (rel_time < 512) {
					if (hops < 2) {
						w13 = 430;
					} else {
						if (hops < 5) {
							w13 = 529;
						} else {
							w13 = 686;
						}
					}
				} else {
					if (rel_time < 920) {
						if (hops < 5) {
							w13 = 197;
						} else {
							w13 = 376;
						}
					} else {
						if (rel_time < 1871) {
							w13 = 491;
						} else {
							w13 = 354;
						}
					}
				}
			}
		} else {
			if (hops < 5) {
				if (rel_time < 807) {
					if (rel_time < 399) {
						if (hops < 2) {
							w13 = 234;
						} else {
							w13 = 345;
						}
					} else {
						if (prod != 2) {
							w13 = 670;
						} else {
							w13 = 369;
						}
					}
				} else {
					if (rel_time < 921) {
						if (hops < 2) {
							w13 = -115;
						} else {
							w13 = -46;
						}
					} else {
						if (cons != 5) {
							w13 = 414;
						} else {
							w13 = 486;
						}
					}
				}
			} else {
				if (rel_time < 725) {
					if (prod != 0) {
						w13 = 940;
					} else {
						w13 = 1117;
					}
				} else {
					if (cons != 5) {
						if (prod != 3) {
							w13 = 485;
						} else {
							w13 = 596;
						}
					} else {
						if (rel_time < 11271) {
							w13 = 651;
						} else {
							w13 = 1097;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 317) {
			if (hops < 4) {
				if (hops < 2) {
					w13 = 619;
				} else {
					w13 = 653;
				}
			} else {
				if (hops < 5) {
					w13 = 690;
				} else {
					w13 = 770;
				}
			}
		} else {
			if (hops < 4) {
				if (hops < 2) {
					if (rel_time < 10627) {
						if (rel_time < 1837) {
							w13 = 585;
						} else {
							w13 = 571;
						}
					} else {
						w13 = 596;
					}
				} else {
					if (rel_time < 2424) {
						w13 = 598;
					} else {
						if (rel_time < 10645) {
							w13 = 581;
						} else {
							w13 = 607;
						}
					}
				}
			} else {
				if (rel_time < 10645) {
					if (rel_time < 1250) {
						w13 = 633;
					} else {
						w13 = 597;
					}
				} else {
					if (hops < 5) {
						w13 = 632;
					} else {
						w13 = 703;
					}
				}
			}
		}
	}
	int w14;
	if (size < 133) {
		if (hops < 3) {
			if (prod != 3) {
				if (rel_time < 11271) {
					if (hops < 2) {
						if (prod != 2) {
							w14 = 245;
						} else {
							w14 = 297;
						}
					} else {
						if (rel_time < 726) {
							w14 = 371;
						} else {
							w14 = 285;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11295) {
							w14 = 1581;
						} else {
							w14 = 1057;
						}
					} else {
						if (rel_time < 11786) {
							w14 = 118;
						} else {
							w14 = 183;
						}
					}
				}
			} else {
				if (rel_time < 11211) {
					if (rel_time < 640) {
						w14 = 484;
					} else {
						if (rel_time < 1228) {
							w14 = 311;
						} else {
							w14 = 338;
						}
					}
				} else {
					w14 = 174;
				}
			}
		} else {
			if (cons != 5) {
				if (prod != 3) {
					if (rel_time < 1871) {
						if (rel_time < 1800) {
							w14 = 339;
						} else {
							w14 = 544;
						}
					} else {
						if (size < 69) {
							w14 = 248;
						} else {
							w14 = 305;
						}
					}
				} else {
					if (rel_time < 11211) {
						if (hops < 5) {
							w14 = 378;
						} else {
							w14 = 434;
						}
					} else {
						if (hops < 5) {
							w14 = 217;
						} else {
							w14 = 385;
						}
					}
				}
			} else {
				if (rel_time < 1574) {
					if (rel_time < 1333) {
						if (rel_time < 1132) {
							w14 = 269;
						} else {
							w14 = 899;
						}
					} else {
						if (hops < 4) {
							w14 = -484;
						} else {
							w14 = -381;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 10961) {
							w14 = 473;
						} else {
							w14 = 909;
						}
					} else {
						if (rel_time < 1899) {
							w14 = 544;
						} else {
							w14 = 335;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 699) {
			if (hops < 5) {
				if (rel_time < 317) {
					if (hops < 3) {
						w14 = 441;
					} else {
						w14 = 475;
					}
				} else {
					if (hops < 2) {
						w14 = 416;
					} else {
						if (hops < 3) {
							w14 = 443;
						} else {
							w14 = 423;
						}
					}
				}
			} else {
				w14 = 517;
			}
		} else {
			if (hops < 3) {
				if (rel_time < 10627) {
					if (rel_time < 10047) {
						if (hops < 2) {
							w14 = 401;
						} else {
							w14 = 407;
						}
					} else {
						if (hops < 2) {
							w14 = 389;
						} else {
							w14 = 365;
						}
					}
				} else {
					w14 = 423;
				}
			} else {
				if (hops < 5) {
					if (rel_time < 10645) {
						if (rel_time < 3012) {
							w14 = 419;
						} else {
							w14 = 411;
						}
					} else {
						if (hops < 4) {
							w14 = 414;
						} else {
							w14 = 443;
						}
					}
				} else {
					if (rel_time < 10645) {
						w14 = 427;
					} else {
						w14 = 493;
					}
				}
			}
		}
	}
	int w15;
	if (size < 133) {
		if (hops < 5) {
			if (size < 37) {
				if (rel_time < 1283) {
					if (rel_time < 512) {
						if (rel_time < 59) {
							w15 = 85;
						} else {
							w15 = 252;
						}
					} else {
						if (hops < 2) {
							w15 = 30;
						} else {
							w15 = 124;
						}
					}
				} else {
					if (rel_time < 1871) {
						if (rel_time < 1838) {
							w15 = 372;
						} else {
							w15 = 271;
						}
					} else {
						if (hops < 3) {
							w15 = 162;
						} else {
							w15 = 181;
						}
					}
				}
			} else {
				if (rel_time < 807) {
					if (rel_time < 399) {
						if (hops < 4) {
							w15 = 109;
						} else {
							w15 = 180;
						}
					} else {
						if (prod != 2) {
							w15 = 367;
						} else {
							w15 = 166;
						}
					}
				} else {
					if (rel_time < 1132) {
						if (prod != 0) {
							w15 = 290;
						} else {
							w15 = -192;
						}
					} else {
						if (rel_time < 1333) {
							w15 = 351;
						} else {
							w15 = 213;
						}
					}
				}
			}
		} else {
			if (rel_time < 725) {
				if (size < 37) {
					if (rel_time < 59) {
						w15 = 185;
					} else {
						w15 = 380;
					}
				} else {
					if (prod != 0) {
						w15 = 555;
					} else {
						w15 = 703;
					}
				}
			} else {
				if (cons != 5) {
					if (rel_time < 2403) {
						if (rel_time < 920) {
							w15 = 188;
						} else {
							w15 = 349;
						}
					} else {
						if (size < 69) {
							w15 = 206;
						} else {
							w15 = 277;
						}
					}
				} else {
					if (rel_time < 1132) {
						w15 = -214;
					} else {
						if (rel_time < 11271) {
							w15 = 353;
						} else {
							w15 = 589;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 699) {
			if (hops < 4) {
				if (rel_time < 317) {
					if (hops < 2) {
						w15 = 301;
					} else {
						w15 = 321;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w15 = 292;
						} else {
							w15 = 310;
						}
					} else {
						w15 = 283;
					}
				}
			} else {
				if (rel_time < 317) {
					if (hops < 5) {
						w15 = 341;
					} else {
						w15 = 386;
					}
				} else {
					w15 = 322;
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 10645) {
					if (hops < 2) {
						if (rel_time < 6516) {
							w15 = 283;
						} else {
							w15 = 277;
						}
					} else {
						if (rel_time < 2424) {
							w15 = 292;
						} else {
							w15 = 284;
						}
					}
				} else {
					w15 = 296;
				}
			} else {
				if (rel_time < 10645) {
					if (rel_time < 10047) {
						if (hops < 5) {
							w15 = 293;
						} else {
							w15 = 300;
						}
					} else {
						w15 = 276;
					}
				} else {
					if (hops < 5) {
						w15 = 310;
					} else {
						w15 = 346;
					}
				}
			}
		}
	}
	int w16;
	if (size < 133) {
		if (cons != 5) {
			if (prod != 3) {
				if (rel_time < 807) {
					if (rel_time < 400) {
						if (rel_time < 399) {
							w16 = 80;
						} else {
							w16 = 166;
						}
					} else {
						if (hops < 2) {
							w16 = 438;
						} else {
							w16 = 224;
						}
					}
				} else {
					if (rel_time < 11199) {
						if (hops < 2) {
							w16 = 100;
						} else {
							w16 = 134;
						}
					} else {
						if (hops < 5) {
							w16 = 0;
						} else {
							w16 = 163;
						}
					}
				}
			} else {
				if (rel_time < 11211) {
					if (hops < 4) {
						if (rel_time < 640) {
							w16 = 215;
						} else {
							w16 = 173;
						}
					} else {
						if (rel_time < 640) {
							w16 = 283;
						} else {
							w16 = 208;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 3) {
							w16 = 58;
						} else {
							w16 = 88;
						}
					} else {
						if (rel_time < 11786) {
							w16 = 246;
						} else {
							w16 = 145;
						}
					}
				}
			}
		} else {
			if (rel_time < 1574) {
				if (rel_time < 1333) {
					if (rel_time < 1132) {
						if (rel_time < 725) {
							w16 = 175;
						} else {
							w16 = -136;
						}
					} else {
						if (hops < 4) {
							w16 = 676;
						} else {
							w16 = 455;
						}
					}
				} else {
					if (hops < 3) {
						w16 = -807;
					} else {
						if (hops < 4) {
							w16 = -402;
						} else {
							w16 = -341;
						}
					}
				}
			} else {
				if (rel_time < 2156) {
					if (size < 69) {
						if (hops < 4) {
							w16 = 608;
						} else {
							w16 = 661;
						}
					} else {
						if (hops < 2) {
							w16 = 340;
						} else {
							w16 = 300;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 10961) {
							w16 = 199;
						} else {
							w16 = 678;
						}
					} else {
						if (hops < 3) {
							w16 = 102;
						} else {
							w16 = 165;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 699) {
			if (hops < 4) {
				if (rel_time < 317) {
					if (hops < 2) {
						w16 = 211;
					} else {
						w16 = 225;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w16 = 204;
						} else {
							w16 = 217;
						}
					} else {
						w16 = 198;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 317) {
						w16 = 239;
					} else {
						w16 = 219;
					}
				} else {
					if (rel_time < 317) {
						w16 = 271;
					} else {
						w16 = 241;
					}
				}
			}
		} else {
			if (hops < 3) {
				if (rel_time < 11214) {
					if (rel_time < 1837) {
						w16 = 203;
					} else {
						if (rel_time < 2404) {
							w16 = 190;
						} else {
							w16 = 197;
						}
					}
				} else {
					w16 = 215;
				}
			} else {
				if (hops < 5) {
					if (rel_time < 5360) {
						w16 = 205;
					} else {
						if (rel_time < 7692) {
							w16 = 197;
						} else {
							w16 = 203;
						}
					}
				} else {
					if (rel_time < 10645) {
						if (rel_time < 6535) {
							w16 = 213;
						} else {
							w16 = 204;
						}
					} else {
						w16 = 243;
					}
				}
			}
		}
	}
	int w17;
	if (size < 133) {
		if (hops < 2) {
			if (prod != 3) {
				if (rel_time < 725) {
					if (cons != 5) {
						if (rel_time < 399) {
							w17 = 27;
						} else {
							w17 = 133;
						}
					} else {
						if (rel_time < 558) {
							w17 = -15;
						} else {
							w17 = -130;
						}
					}
				} else {
					if (rel_time < 807) {
						if (rel_time < 726) {
							w17 = 574;
						} else {
							w17 = 414;
						}
					} else {
						if (rel_time < 1574) {
							w17 = 8;
						} else {
							w17 = 86;
						}
					}
				}
			} else {
				if (rel_time < 11211) {
					if (rel_time < 640) {
						w17 = 170;
					} else {
						if (rel_time < 2990) {
							w17 = 125;
						} else {
							w17 = 109;
						}
					}
				} else {
					if (rel_time < 11786) {
						w17 = 37;
					} else {
						w17 = 44;
					}
				}
			}
		} else {
			if (prod != 0) {
				if (size < 69) {
					if (rel_time < 1871) {
						if (rel_time < 1283) {
							w17 = 101;
						} else {
							w17 = 230;
						}
					} else {
						if (rel_time < 2322) {
							w17 = 31;
						} else {
							w17 = 78;
						}
					}
				} else {
					if (rel_time < 11271) {
						if (rel_time < 725) {
							w17 = 168;
						} else {
							w17 = 121;
						}
					} else {
						if (prod != 4) {
							w17 = 73;
						} else {
							w17 = -13;
						}
					}
				}
			} else {
				if (rel_time < 1574) {
					if (rel_time < 921) {
						if (rel_time < 558) {
							w17 = 258;
						} else {
							w17 = -22;
						}
					} else {
						if (hops < 3) {
							w17 = -519;
						} else {
							w17 = -241;
						}
					}
				} else {
					if (rel_time < 10961) {
						if (rel_time < 2156) {
							w17 = 418;
						} else {
							w17 = 159;
						}
					} else {
						if (hops < 4) {
							w17 = 646;
						} else {
							w17 = 172;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 699) {
			if (hops < 4) {
				if (rel_time < 317) {
					if (hops < 3) {
						w17 = 150;
					} else {
						w17 = 163;
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w17 = 143;
						} else {
							w17 = 152;
						}
					} else {
						w17 = 139;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 317) {
						w17 = 167;
					} else {
						w17 = 153;
					}
				} else {
					if (rel_time < 317) {
						w17 = 190;
					} else {
						w17 = 169;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 10645) {
					if (rel_time < 10047) {
						if (hops < 2) {
							w17 = 138;
						} else {
							w17 = 140;
						}
					} else {
						if (rel_time < 10627) {
							w17 = 125;
						} else {
							w17 = 138;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w17 = 143;
						} else {
							w17 = 153;
						}
					} else {
						w17 = 140;
					}
				}
			} else {
				if (rel_time < 10645) {
					if (rel_time < 9473) {
						if (rel_time < 1250) {
							w17 = 154;
						} else {
							w17 = 144;
						}
					} else {
						w17 = 135;
					}
				} else {
					if (hops < 5) {
						w17 = 157;
					} else {
						w17 = 170;
					}
				}
			}
		}
	}
	int w18;
	if (hops < 4) {
		if (size < 133) {
			if (rel_time < 1574) {
				if (rel_time < 1333) {
					if (rel_time < 1283) {
						if (prod != 1) {
							w18 = 30;
						} else {
							w18 = 128;
						}
					} else {
						if (hops < 2) {
							w18 = 534;
						} else {
							w18 = 394;
						}
					}
				} else {
					if (hops < 2) {
						w18 = -572;
					} else {
						if (hops < 3) {
							w18 = -403;
						} else {
							w18 = -210;
						}
					}
				}
			} else {
				if (prod != 0) {
					if (rel_time < 1899) {
						if (prod != 4) {
							w18 = 136;
						} else {
							w18 = 30;
						}
					} else {
						if (prod != 3) {
							w18 = 50;
						} else {
							w18 = 88;
						}
					}
				} else {
					if (rel_time < 10961) {
						if (rel_time < 2156) {
							w18 = 341;
						} else {
							w18 = 87;
						}
					} else {
						if (rel_time < 11295) {
							w18 = 690;
						} else {
							w18 = 361;
						}
					}
				}
			}
		} else {
			if (rel_time < 1837) {
				if (rel_time < 317) {
					if (hops < 2) {
						w18 = 103;
					} else {
						if (hops < 3) {
							w18 = 108;
						} else {
							w18 = 114;
						}
					}
				} else {
					if (hops < 2) {
						w18 = 99;
					} else {
						if (hops < 3) {
							w18 = 104;
						} else {
							w18 = 100;
						}
					}
				}
			} else {
				if (rel_time < 10645) {
					if (rel_time < 10047) {
						if (rel_time < 2404) {
							w18 = 91;
						} else {
							w18 = 97;
						}
					} else {
						if (rel_time < 10627) {
							w18 = 88;
						} else {
							w18 = 97;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w18 = 100;
						} else {
							w18 = 107;
						}
					} else {
						w18 = 98;
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 69) {
				if (rel_time < 1871) {
					if (rel_time < 920) {
						if (rel_time < 807) {
							w18 = 102;
						} else {
							w18 = -15;
						}
					} else {
						if (hops < 5) {
							w18 = 147;
						} else {
							w18 = 286;
						}
					}
				} else {
					if (hops < 5) {
						if (size < 37) {
							w18 = 68;
						} else {
							w18 = 39;
						}
					} else {
						if (rel_time < 8303) {
							w18 = 90;
						} else {
							w18 = 64;
						}
					}
				}
			} else {
				if (rel_time < 640) {
					if (hops < 5) {
						if (prod != 4) {
							w18 = 110;
						} else {
							w18 = 145;
						}
					} else {
						if (rel_time < 317) {
							w18 = 133;
						} else {
							w18 = 274;
						}
					}
				} else {
					if (rel_time < 1228) {
						if (rel_time < 725) {
							w18 = 109;
						} else {
							w18 = -18;
						}
					} else {
						if (rel_time < 1333) {
							w18 = 195;
						} else {
							w18 = 100;
						}
					}
				}
			}
		} else {
			if (rel_time < 558) {
				w18 = 376;
			} else {
				if (rel_time < 1574) {
					if (rel_time < 1333) {
						if (rel_time < 1132) {
							w18 = -69;
						} else {
							w18 = 607;
						}
					} else {
						if (rel_time < 1334) {
							w18 = -163;
						} else {
							w18 = -185;
						}
					}
				} else {
					if (rel_time < 2156) {
						if (hops < 5) {
							w18 = 322;
						} else {
							w18 = 385;
						}
					} else {
						if (hops < 5) {
							w18 = 130;
						} else {
							w18 = 194;
						}
					}
				}
			}
		}
	}
	int w19;
	if (hops < 5) {
		if (rel_time < 11718) {
			if (rel_time < 11295) {
				if (size < 69) {
					if (rel_time < 11132) {
						if (rel_time < 1574) {
							w19 = 6;
						} else {
							w19 = 49;
						}
					} else {
						if (hops < 2) {
							w19 = 748;
						} else {
							w19 = 120;
						}
					}
				} else {
					if (rel_time < 2424) {
						if (prod != 2) {
							w19 = 54;
						} else {
							w19 = 159;
						}
					} else {
						if (prod != 2) {
							w19 = 64;
						} else {
							w19 = 37;
						}
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						w19 = 84;
					} else {
						if (hops < 3) {
							w19 = 418;
						} else {
							w19 = 237;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 11300) {
							w19 = -5;
						} else {
							w19 = -10;
						}
					} else {
						w19 = -84;
					}
				}
			}
		} else {
			if (prod != 4) {
				if (hops < 3) {
					if (hops < 2) {
						if (prod != 2) {
							w19 = 3;
						} else {
							w19 = -21;
						}
					} else {
						if (prod != 2) {
							w19 = -9;
						} else {
							w19 = 12;
						}
					}
				} else {
					if (prod != 2) {
						if (rel_time < 11792) {
							w19 = 15;
						} else {
							w19 = -2;
						}
					} else {
						if (hops < 4) {
							w19 = 51;
						} else {
							w19 = 97;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 11726) {
							w19 = -2;
						} else {
							w19 = 15;
						}
					} else {
						if (rel_time < 11726) {
							w19 = -24;
						} else {
							w19 = -20;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 11726) {
							w19 = -39;
						} else {
							w19 = -50;
						}
					} else {
						if (rel_time < 11726) {
							w19 = -70;
						} else {
							w19 = -53;
						}
					}
				}
			}
		}
	} else {
		if (rel_time < 725) {
			if (prod != 6) {
				if (prod != 4) {
					if (prod != 3) {
						w19 = 263;
					} else {
						w19 = 198;
					}
				} else {
					w19 = 184;
				}
			} else {
				if (rel_time < 59) {
					w19 = 45;
				} else {
					if (size < 37) {
						w19 = 139;
					} else {
						w19 = 90;
					}
				}
			}
		} else {
			if (cons != 5) {
				if (rel_time < 2403) {
					if (size < 69) {
						if (rel_time < 920) {
							w19 = 35;
						} else {
							w19 = 176;
						}
					} else {
						if (rel_time < 2388) {
							w19 = 51;
						} else {
							w19 = 135;
						}
					}
				} else {
					if (size < 69) {
						if (rel_time < 10679) {
							w19 = 58;
						} else {
							w19 = 9;
						}
					} else {
						if (rel_time < 10645) {
							w19 = 74;
						} else {
							w19 = 97;
						}
					}
				}
			} else {
				if (rel_time < 1132) {
					if (rel_time < 921) {
						w19 = -84;
					} else {
						w19 = -15;
					}
				} else {
					if (rel_time < 1333) {
						w19 = 320;
					} else {
						if (rel_time < 1574) {
							w19 = -110;
						} else {
							w19 = 113;
						}
					}
				}
			}
		}
	}
	int w20;
	if (hops < 2) {
		if (rel_time < 3633) {
			if (prod != 0) {
				if (rel_time < 1899) {
					if (rel_time < 725) {
						if (rel_time < 699) {
							w20 = 49;
						} else {
							w20 = -148;
						}
					} else {
						if (prod != 2) {
							w20 = 65;
						} else {
							w20 = 227;
						}
					}
				} else {
					if (prod != 1) {
						if (size < 133) {
							w20 = 34;
						} else {
							w20 = 49;
						}
					} else {
						if (rel_time < 2909) {
							w20 = -40;
						} else {
							w20 = -1;
						}
					}
				}
			} else {
				if (rel_time < 1574) {
					if (rel_time < 921) {
						if (rel_time < 558) {
							w20 = -22;
						} else {
							w20 = -69;
						}
					} else {
						if (rel_time < 1132) {
							w20 = -525;
						} else {
							w20 = -402;
						}
					}
				} else {
					if (rel_time < 2156) {
						w20 = 320;
					} else {
						if (rel_time < 2739) {
							w20 = 58;
						} else {
							w20 = 138;
						}
					}
				}
			}
		} else {
			if (prod != 1) {
				if (size < 133) {
					if (rel_time < 11718) {
						if (rel_time < 11271) {
							w20 = 25;
						} else {
							w20 = 91;
						}
					} else {
						if (prod != 2) {
							w20 = 1;
						} else {
							w20 = -15;
						}
					}
				} else {
					if (rel_time < 4165) {
						w20 = 72;
					} else {
						if (rel_time < 4168) {
							w20 = 39;
						} else {
							w20 = 48;
						}
					}
				}
			} else {
				if (rel_time < 8194) {
					if (rel_time < 4671) {
						if (rel_time < 4083) {
							w20 = -7;
						} else {
							w20 = 26;
						}
					} else {
						if (rel_time < 5259) {
							w20 = -22;
						} else {
							w20 = 4;
						}
					}
				} else {
					if (rel_time < 9369) {
						if (rel_time < 8781) {
							w20 = -44;
						} else {
							w20 = -27;
						}
					} else {
						if (rel_time < 10961) {
							w20 = -52;
						} else {
							w20 = -60;
						}
					}
				}
			}
		}
	} else {
		if (prod != 0) {
			if (size < 69) {
				if (rel_time < 1838) {
					if (rel_time < 920) {
						if (rel_time < 807) {
							w20 = 47;
						} else {
							w20 = -43;
						}
					} else {
						if (hops < 3) {
							w20 = 45;
						} else {
							w20 = 124;
						}
					}
				} else {
					if (rel_time < 10679) {
						if (hops < 5) {
							w20 = 23;
						} else {
							w20 = 46;
						}
					} else {
						if (hops < 5) {
							w20 = -22;
						} else {
							w20 = 6;
						}
					}
				}
			} else {
				if (rel_time < 11267) {
					if (prod != 4) {
						if (rel_time < 2990) {
							w20 = 63;
						} else {
							w20 = 45;
						}
					} else {
						if (rel_time < 1800) {
							w20 = -2;
						} else {
							w20 = 44;
						}
					}
				} else {
					if (prod != 4) {
						if (hops < 4) {
							w20 = 11;
						} else {
							w20 = 46;
						}
					} else {
						if (hops < 5) {
							w20 = -29;
						} else {
							w20 = 60;
						}
					}
				}
			}
		} else {
			if (rel_time < 1574) {
				if (rel_time < 921) {
					if (rel_time < 558) {
						if (hops < 4) {
							w20 = 90;
						} else {
							w20 = 242;
						}
					} else {
						if (hops < 3) {
							w20 = 29;
						} else {
							w20 = -57;
						}
					}
				} else {
					if (hops < 3) {
						if (rel_time < 1333) {
							w20 = -200;
						} else {
							w20 = -284;
						}
					} else {
						if (hops < 4) {
							w20 = -151;
						} else {
							w20 = -99;
						}
					}
				}
			} else {
				if (rel_time < 11295) {
					if (rel_time < 2156) {
						if (hops < 3) {
							w20 = 131;
						} else {
							w20 = 206;
						}
					} else {
						if (hops < 3) {
							w20 = 46;
						} else {
							w20 = 77;
						}
					}
				} else {
					if (hops < 3) {
						w20 = 316;
					} else {
						if (hops < 5) {
							w20 = 94;
						} else {
							w20 = 307;
						}
					}
				}
			}
		}
	}
	return (12800 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14 + w15 + w16 + w17 + w18 + w19 + w20) >> 8;
}
