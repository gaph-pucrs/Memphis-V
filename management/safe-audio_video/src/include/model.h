#include <stdbool.h>

int model(int rel_time, int hops, int size, int prod, int cons)
{
	int w0;
	if (size < 45) {
		if (rel_time < 1324) {
			if (rel_time < 64) {
				if (hops < 3) {
					if (hops < 2) {
						w0 = 92008;
					} else {
						w0 = 94513;
					}
				} else {
					if (hops < 4) {
						w0 = 96486;
					} else {
						w0 = 99143;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w0 = 66215;
					} else {
						w0 = 68201;
					}
				} else {
					if (hops < 4) {
						w0 = 70455;
					} else {
						if (hops < 5) {
							w0 = 72671;
						} else {
							w0 = 74602;
						}
					}
				}
			}
		} else {
			if (rel_time < 1928) {
				w0 = 312665;
			} else {
				if (rel_time < 5549) {
					if (rel_time < 2491) {
						w0 = 68754;
					} else {
						if (rel_time < 2532) {
							w0 = 104288;
						} else {
							w0 = 87027;
						}
					}
				} else {
					if (rel_time < 6758) {
						if (rel_time < 6724) {
							w0 = 75686;
						} else {
							w0 = 116251;
						}
					} else {
						if (hops < 3) {
							w0 = 69322;
						} else {
							w0 = 74136;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (rel_time < 652) {
				if (rel_time < 412) {
					if (hops < 3) {
						w0 = 130318;
					} else {
						w0 = 135067;
					}
				} else {
					if (rel_time < 583) {
						if (hops < 3) {
							w0 = 161358;
						} else {
							w0 = 166094;
						}
					} else {
						if (hops < 3) {
							w0 = 171324;
						} else {
							w0 = 175853;
						}
					}
				}
			} else {
				if (size < 77) {
					if (hops < 3) {
						if (rel_time < 831) {
							w0 = 130305;
						} else {
							w0 = 137197;
						}
					} else {
						if (rel_time < 831) {
							w0 = 135053;
						} else {
							w0 = 141751;
						}
					}
				} else {
					if (hops < 3) {
						if (prod == 4) {
							w0 = 144422;
						} else {
							w0 = 140235;
						}
					} else {
						if (prod == 4) {
							w0 = 149086;
						} else {
							w0 = 144860;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 3) {
					w0 = 190577;
				} else {
					w0 = 195243;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w0 = 163847;
					} else {
						w0 = 165859;
					}
				} else {
					if (hops < 4) {
						w0 = 168126;
					} else {
						w0 = 170797;
					}
				}
			}
		}
	}
	int w1;
	if (size < 45) {
		if (rel_time < 1324) {
			if (rel_time < 64) {
				if (hops < 3) {
					if (hops < 2) {
						w1 = 64410;
					} else {
						w1 = 66164;
					}
				} else {
					if (hops < 5) {
						w1 = 68096;
					} else {
						w1 = 71241;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w1 = 46352;
					} else {
						w1 = 47743;
					}
				} else {
					if (hops < 4) {
						w1 = 49321;
					} else {
						if (hops < 5) {
							w1 = 50873;
						} else {
							w1 = 52232;
						}
					}
				}
			}
		} else {
			if (rel_time < 1928) {
				w1 = 218890;
			} else {
				if (rel_time < 4945) {
					if (rel_time < 3096) {
						if (rel_time < 2532) {
							w1 = 65265;
						} else {
							w1 = 42496;
						}
					} else {
						if (rel_time < 3135) {
							w1 = 132257;
						} else {
							w1 = 61051;
						}
					}
				} else {
					if (rel_time < 6153) {
						if (rel_time < 6115) {
							w1 = 51390;
						} else {
							w1 = 88181;
						}
					} else {
						if (hops < 3) {
							w1 = 48798;
						} else {
							w1 = 52263;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (rel_time < 652) {
				if (rel_time < 412) {
					if (hops < 2) {
						w1 = 90205;
					} else {
						if (hops < 4) {
							w1 = 92810;
						} else {
							w1 = 95717;
						}
					}
				} else {
					if (rel_time < 583) {
						if (hops < 4) {
							w1 = 113420;
						} else {
							w1 = 117635;
						}
					} else {
						if (hops < 4) {
							w1 = 120338;
						} else {
							w1 = 124473;
						}
					}
				}
			} else {
				if (size < 77) {
					if (hops < 4) {
						if (rel_time < 2226) {
							w1 = 93513;
						} else {
							w1 = 97028;
						}
					} else {
						if (rel_time < 2226) {
							w1 = 97705;
						} else {
							w1 = 101095;
						}
					}
				} else {
					if (hops < 4) {
						if (prod == 4) {
							w1 = 101540;
						} else {
							w1 = 98589;
						}
					} else {
						if (prod == 4) {
							w1 = 105755;
						} else {
							w1 = 102762;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 2) {
					w1 = 132340;
				} else {
					if (hops < 4) {
						w1 = 134992;
					} else {
						w1 = 137895;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w1 = 114695;
					} else {
						w1 = 116103;
					}
				} else {
					if (hops < 5) {
						w1 = 118237;
					} else {
						w1 = 121101;
					}
				}
			}
		}
	}
	int w2;
	if (size < 45) {
		if (rel_time < 1324) {
			if (rel_time < 64) {
				if (hops < 3) {
					if (hops < 2) {
						w2 = 45090;
					} else {
						w2 = 46319;
					}
				} else {
					if (hops < 4) {
						w2 = 47125;
					} else {
						w2 = 48750;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w2 = 32447;
					} else {
						w2 = 33421;
					}
				} else {
					if (hops < 4) {
						w2 = 34527;
					} else {
						if (hops < 5) {
							w2 = 35614;
						} else {
							w2 = 36571;
						}
					}
				}
			}
		} else {
			if (rel_time < 1928) {
				w2 = 153241;
			} else {
				if (rel_time < 5549) {
					if (rel_time < 5510) {
						if (rel_time < 4945) {
							w2 = 44020;
						} else {
							w2 = 27103;
						}
					} else {
						if (hops < 5) {
							w2 = 62705;
						} else {
							w2 = 50743;
						}
					}
				} else {
					if (rel_time < 6115) {
						if (hops < 3) {
							w2 = 29057;
						} else {
							w2 = 33112;
						}
					} else {
						if (rel_time < 6153) {
							w2 = 61756;
						} else {
							w2 = 35077;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (rel_time < 652) {
				if (rel_time < 412) {
					if (hops < 3) {
						if (hops < 2) {
							w2 = 63147;
						} else {
							w2 = 64577;
						}
					} else {
						if (hops < 5) {
							w2 = 65936;
						} else {
							w2 = 68498;
						}
					}
				} else {
					if (rel_time < 583) {
						if (hops < 2) {
							w2 = 78036;
						} else {
							w2 = 80932;
						}
					} else {
						if (hops < 2) {
							w2 = 82804;
						} else {
							w2 = 85798;
						}
					}
				}
			} else {
				if (prod == 0) {
					if (hops < 2) {
						if (rel_time < 1867) {
							w2 = 66171;
						} else {
							w2 = 69316;
						}
					} else {
						if (rel_time < 1867) {
							w2 = 69193;
						} else {
							w2 = 72326;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 2226) {
							w2 = 65052;
						} else {
							w2 = 64161;
						}
					} else {
						if (hops < 4) {
							w2 = 66691;
						} else {
							w2 = 68623;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 3) {
					w2 = 93344;
				} else {
					w2 = 95760;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w2 = 80288;
					} else {
						w2 = 81274;
					}
				} else {
					if (hops < 4) {
						w2 = 82222;
					} else {
						w2 = 83866;
					}
				}
			}
		}
	}
	int w3;
	if (size < 45) {
		if (rel_time < 4341) {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 31565;
						} else {
							w3 = 32425;
						}
					} else {
						if (hops < 5) {
							w3 = 33322;
						} else {
							w3 = 35283;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 22714;
						} else {
							w3 = 23396;
						}
					} else {
						if (hops < 4) {
							w3 = 24170;
						} else {
							w3 = 25102;
						}
					}
				}
			} else {
				if (rel_time < 1928) {
					if (hops < 5) {
						w3 = 106712;
					} else {
						w3 = 117931;
					}
				} else {
					if (rel_time < 3703) {
						if (rel_time < 3135) {
							w3 = 32733;
						} else {
							w3 = 15529;
						}
					} else {
						if (rel_time < 3740) {
							w3 = 142954;
						} else {
							w3 = 29484;
						}
					}
				}
			}
		} else {
			if (rel_time < 4905) {
				if (hops < 3) {
					if (hops < 2) {
						w3 = 8628;
					} else {
						w3 = 10330;
					}
				} else {
					if (hops < 4) {
						w3 = 12068;
					} else {
						w3 = 15011;
					}
				}
			} else {
				if (rel_time < 4945) {
					if (hops < 2) {
						w3 = 31486;
					} else {
						if (hops < 5) {
							w3 = 36842;
						} else {
							w3 = 31928;
						}
					}
				} else {
					if (rel_time < 5510) {
						if (hops < 3) {
							w3 = 17465;
						} else {
							w3 = 21451;
						}
					} else {
						if (rel_time < 5549) {
							w3 = 43418;
						} else {
							w3 = 24787;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (rel_time < 652) {
				if (rel_time < 412) {
					if (hops < 3) {
						if (hops < 2) {
							w3 = 44206;
						} else {
							w3 = 45207;
						}
					} else {
						if (hops < 4) {
							w3 = 45766;
						} else {
							w3 = 47032;
						}
					}
				} else {
					if (rel_time < 583) {
						if (hops < 3) {
							w3 = 55125;
						} else {
							w3 = 57339;
						}
					} else {
						if (hops < 3) {
							w3 = 58580;
						} else {
							w3 = 60646;
						}
					}
				}
			} else {
				if (size < 77) {
					if (rel_time < 831) {
						if (hops < 3) {
							w3 = 42900;
						} else {
							w3 = 45113;
						}
					} else {
						if (prod == 0) {
							w3 = 49197;
						} else {
							w3 = 46426;
						}
					}
				} else {
					if (hops < 3) {
						if (prod == 4) {
							w3 = 49674;
						} else {
							w3 = 47478;
						}
					} else {
						if (prod == 4) {
							w3 = 51830;
						} else {
							w3 = 49597;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 2) {
					w3 = 64646;
				} else {
					if (hops < 5) {
						w3 = 66435;
					} else {
						w3 = 69433;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w3 = 56202;
					} else {
						w3 = 56893;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w3 = 57557;
						} else {
							w3 = 58375;
						}
					} else {
						w3 = 59625;
					}
				}
			}
		}
	}
	int w4;
	if (size < 45) {
		if (rel_time < 4341) {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 4) {
						if (hops < 2) {
							w4 = 22097;
						} else {
							w4 = 22818;
						}
					} else {
						if (hops < 5) {
							w4 = 23741;
						} else {
							w4 = 24710;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w4 = 15900;
						} else {
							w4 = 16377;
						}
					} else {
						if (hops < 4) {
							w4 = 16920;
						} else {
							w4 = 17573;
						}
					}
				}
			} else {
				if (rel_time < 1928) {
					if (hops < 4) {
						w4 = 74109;
					} else {
						w4 = 79228;
					}
				} else {
					if (rel_time < 3096) {
						if (rel_time < 2532) {
							w4 = 22671;
						} else {
							w4 = 6734;
						}
					} else {
						if (rel_time < 3135) {
							w4 = 69618;
						} else {
							w4 = 21652;
						}
					}
				}
			}
		} else {
			if (rel_time < 4905) {
				if (hops < 3) {
					if (hops < 2) {
						w4 = 6047;
					} else {
						w4 = 7238;
					}
				} else {
					if (hops < 4) {
						w4 = 8461;
					} else {
						if (hops < 5) {
							w4 = 9946;
						} else {
							w4 = 12217;
						}
					}
				}
			} else {
				if (rel_time < 7358) {
					if (rel_time < 4945) {
						if (hops < 2) {
							w4 = 22051;
						} else {
							w4 = 25539;
						}
					} else {
						if (rel_time < 5510) {
							w4 = 13288;
						} else {
							w4 = 20396;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 9171) {
							w4 = 15338;
						} else {
							w4 = 13771;
						}
					} else {
						if (hops < 4) {
							w4 = 16686;
						} else {
							w4 = 19098;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (rel_time < 652) {
				if (rel_time < 412) {
					if (hops < 3) {
						if (hops < 2) {
							w4 = 30946;
						} else {
							w4 = 31648;
						}
					} else {
						if (hops < 5) {
							w4 = 32270;
						} else {
							w4 = 33876;
						}
					}
				} else {
					if (rel_time < 583) {
						if (hops < 4) {
							w4 = 38780;
						} else {
							w4 = 40884;
						}
					} else {
						if (hops < 2) {
							w4 = 40396;
						} else {
							w4 = 42138;
						}
					}
				}
			} else {
				if (prod == 2) {
					if (hops < 2) {
						if (rel_time < 1627) {
							w4 = 30779;
						} else {
							w4 = 32865;
						}
					} else {
						if (rel_time < 831) {
							w4 = 31798;
						} else {
							w4 = 34577;
						}
					}
				} else {
					if (hops < 2) {
						if (rel_time < 1379) {
							w4 = 35482;
						} else {
							w4 = 34672;
						}
					} else {
						if (hops < 5) {
							w4 = 36408;
						} else {
							w4 = 39237;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 4) {
					if (hops < 2) {
						w4 = 45255;
					} else {
						w4 = 46275;
					}
				} else {
					w4 = 47657;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w4 = 39342;
					} else {
						w4 = 39826;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w4 = 40291;
						} else {
							w4 = 40864;
						}
					} else {
						w4 = 41742;
					}
				}
			}
		}
	}
	int w5;
	if (size < 45) {
		if (rel_time < 5549) {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 4) {
						if (hops < 2) {
							w5 = 15469;
						} else {
							w5 = 15973;
						}
					} else {
						if (hops < 5) {
							w5 = 16621;
						} else {
							w5 = 17305;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w5 = 11130;
						} else {
							w5 = 11465;
						}
					} else {
						if (hops < 5) {
							w5 = 11971;
						} else {
							w5 = 12809;
						}
					}
				}
			} else {
				if (rel_time < 1928) {
					if (hops < 5) {
						w5 = 52248;
					} else {
						w5 = 59108;
					}
				} else {
					if (rel_time < 2491) {
						if (hops < 3) {
							w5 = -2813;
						} else {
							w5 = 1130;
						}
					} else {
						if (rel_time < 2532) {
							w5 = 23626;
						} else {
							w5 = 14906;
						}
					}
				}
			}
		} else {
			if (rel_time < 6115) {
				if (hops < 4) {
					if (hops < 2) {
						w5 = 5882;
					} else {
						w5 = 7916;
					}
				} else {
					if (hops < 5) {
						w5 = 10496;
					} else {
						w5 = 12873;
					}
				}
			} else {
				if (rel_time < 6153) {
					if (hops < 5) {
						if (hops < 2) {
							w5 = 27793;
						} else {
							w5 = 31578;
						}
					} else {
						w5 = 19593;
					}
				} else {
					if (hops < 4) {
						if (hops < 2) {
							w5 = 10498;
						} else {
							w5 = 12001;
						}
					} else {
						if (rel_time < 7962) {
							w5 = 15413;
						} else {
							w5 = 13133;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (size < 77) {
				if (hops < 3) {
					if (rel_time < 583) {
						if (rel_time < 412) {
							w5 = 21891;
						} else {
							w5 = 26956;
						}
					} else {
						if (rel_time < 831) {
							w5 = 20658;
						} else {
							w5 = 22548;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 583) {
							w5 = 25278;
						} else {
							w5 = 23660;
						}
					} else {
						if (rel_time < 412) {
							w5 = 23724;
						} else {
							w5 = 26602;
						}
					}
				}
			} else {
				if (rel_time < 652) {
					if (hops < 4) {
						if (hops < 2) {
							w5 = 28279;
						} else {
							w5 = 29060;
						}
					} else {
						if (hops < 5) {
							w5 = 30092;
						} else {
							w5 = 32181;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 661) {
							w5 = 22018;
						} else {
							w5 = 24388;
						}
					} else {
						if (hops < 5) {
							w5 = 25561;
						} else {
							w5 = 27329;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 4) {
					if (hops < 2) {
						w5 = 31681;
					} else {
						w5 = 32394;
					}
				} else {
					if (hops < 5) {
						w5 = 33001;
					} else {
						w5 = 34344;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w5 = 27540;
					} else {
						w5 = 27878;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w5 = 28204;
						} else {
							w5 = 28606;
						}
					} else {
						w5 = 29222;
					}
				}
			}
		}
	}
	int w6;
	if (size < 45) {
		if (rel_time < 3740) {
			if (rel_time < 3703) {
				if (rel_time < 1324) {
					if (rel_time < 64) {
						if (hops < 3) {
							w6 = 10941;
						} else {
							w6 = 11567;
						}
					} else {
						if (hops < 3) {
							w6 = 7902;
						} else {
							w6 = 8455;
						}
					}
				} else {
					if (rel_time < 1928) {
						if (hops < 4) {
							w6 = 36214;
						} else {
							w6 = 39328;
						}
					} else {
						if (rel_time < 3135) {
							w6 = 11428;
						} else {
							w6 = -93;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w6 = 81918;
					} else {
						if (hops < 4) {
							w6 = 103585;
						} else {
							w6 = 78856;
						}
					}
				} else {
					w6 = 53462;
				}
			}
		} else {
			if (rel_time < 4301) {
				if (hops < 3) {
					if (hops < 2) {
						w6 = -11214;
					} else {
						w6 = -9534;
					}
				} else {
					if (hops < 4) {
						w6 = -7573;
					} else {
						if (hops < 5) {
							w6 = -5268;
						} else {
							w6 = -2913;
						}
					}
				}
			} else {
				if (rel_time < 4341) {
					if (hops < 2) {
						w6 = 14028;
					} else {
						if (hops < 5) {
							w6 = 20837;
						} else {
							w6 = 14204;
						}
					}
				} else {
					if (rel_time < 4905) {
						if (hops < 3) {
							w6 = 246;
						} else {
							w6 = 2135;
						}
					} else {
						if (rel_time < 5549) {
							w6 = 11253;
						} else {
							w6 = 8417;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (size < 77) {
				if (hops < 4) {
					if (rel_time < 583) {
						if (rel_time < 412) {
							w6 = 15198;
						} else {
							w6 = 19181;
						}
					} else {
						if (prod == 0) {
							w6 = 16418;
						} else {
							w6 = 15169;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 412) {
							w6 = 15316;
						} else {
							w6 = 17266;
						}
					} else {
						if (rel_time < 412) {
							w6 = 16614;
						} else {
							w6 = 18622;
						}
					}
				}
			} else {
				if (rel_time < 652) {
					if (hops < 4) {
						if (hops < 2) {
							w6 = 19797;
						} else {
							w6 = 20343;
						}
					} else {
						if (hops < 5) {
							w6 = 21068;
						} else {
							w6 = 22539;
						}
					}
				} else {
					if (prod == 4) {
						if (rel_time < 661) {
							w6 = 15558;
						} else {
							w6 = 17806;
						}
					} else {
						if (hops < 4) {
							w6 = 15939;
						} else {
							w6 = 17298;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 4) {
					if (hops < 2) {
						w6 = 22178;
					} else {
						w6 = 22677;
					}
				} else {
					if (hops < 5) {
						w6 = 23104;
					} else {
						w6 = 24052;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 663) {
							w6 = 19590;
						} else {
							w6 = 19198;
						}
					} else {
						w6 = 19515;
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w6 = 19744;
						} else {
							w6 = 20025;
						}
					} else {
						w6 = 20458;
					}
				}
			}
		}
	}
	int w7;
	if (size < 45) {
		if (rel_time < 7962) {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 4) {
						if (hops < 2) {
							w7 = 7547;
						} else {
							w7 = 7827;
						}
					} else {
						if (hops < 5) {
							w7 = 8168;
						} else {
							w7 = 8653;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 413) {
							w7 = 5296;
						} else {
							w7 = 5637;
						}
					} else {
						if (hops < 5) {
							w7 = 6004;
						} else {
							w7 = 6433;
						}
					}
				}
			} else {
				if (rel_time < 1928) {
					if (hops < 5) {
						if (hops < 2) {
							w7 = 24548;
						} else {
							w7 = 26109;
						}
					} else {
						w7 = 29740;
					}
				} else {
					if (rel_time < 2491) {
						if (hops < 4) {
							w7 = -4977;
						} else {
							w7 = -1175;
						}
					} else {
						if (rel_time < 2532) {
							w7 = 13114;
						} else {
							w7 = 7051;
						}
					}
				}
			}
		} else {
			if (rel_time < 8528) {
				if (hops < 2) {
					w7 = 2251;
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w7 = 3211;
						} else {
							w7 = 3799;
						}
					} else {
						w7 = 6045;
					}
				}
			} else {
				if (rel_time < 8567) {
					if (hops < 3) {
						if (hops < 2) {
							w7 = 8356;
						} else {
							w7 = 9262;
						}
					} else {
						if (hops < 5) {
							w7 = 12168;
						} else {
							w7 = 8669;
						}
					}
				} else {
					if (rel_time < 9135) {
						if (hops < 5) {
							w7 = 2967;
						} else {
							w7 = 6051;
						}
					} else {
						if (rel_time < 9171) {
							w7 = 15491;
						} else {
							w7 = 4893;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 2) {
				if (rel_time < 652) {
					if (rel_time < 412) {
						w7 = 10539;
					} else {
						if (rel_time < 583) {
							w7 = 12623;
						} else {
							w7 = 13858;
						}
					}
				} else {
					if (prod == 0) {
						if (rel_time < 1867) {
							w7 = 10429;
						} else {
							w7 = 11530;
						}
					} else {
						if (rel_time < 2226) {
							w7 = 10977;
						} else {
							w7 = 9813;
						}
					}
				}
			} else {
				if (rel_time < 652) {
					if (rel_time < 412) {
						if (hops < 5) {
							w7 = 10713;
						} else {
							w7 = 11635;
						}
					} else {
						if (hops < 4) {
							w7 = 14115;
						} else {
							w7 = 15334;
						}
					}
				} else {
					if (prod == 0) {
						if (rel_time < 1867) {
							w7 = 11379;
						} else {
							w7 = 12602;
						}
					} else {
						if (rel_time < 2226) {
							w7 = 11685;
						} else {
							w7 = 10691;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 4) {
					if (hops < 2) {
						w7 = 15526;
					} else {
						w7 = 15875;
					}
				} else {
					if (hops < 5) {
						w7 = 16176;
					} else {
						w7 = 16844;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 724) {
						w7 = 13746;
					} else {
						if (hops < 2) {
							w7 = 13440;
						} else {
							w7 = 13620;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w7 = 13821;
						} else {
							w7 = 14018;
						}
					} else {
						w7 = 14322;
					}
				}
			}
		}
	}
	int w8;
	if (size < 45) {
		if (rel_time < 3740) {
			if (rel_time < 3703) {
				if (rel_time < 3135) {
					if (rel_time < 3096) {
						if (rel_time < 2532) {
							w8 = 5253;
						} else {
							w8 = -5297;
						}
					} else {
						if (hops < 5) {
							w8 = 40370;
						} else {
							w8 = 9987;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w8 = -6815;
						} else {
							w8 = -3066;
						}
					} else {
						if (hops < 5) {
							w8 = 2759;
						} else {
							w8 = -994;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w8 = 55359;
					} else {
						if (hops < 4) {
							w8 = 70556;
						} else {
							w8 = 53486;
						}
					}
				} else {
					w8 = 35913;
				}
			}
		} else {
			if (rel_time < 4301) {
				if (hops < 3) {
					if (hops < 2) {
						w8 = -9969;
					} else {
						w8 = -8791;
					}
				} else {
					if (hops < 4) {
						w8 = -7417;
					} else {
						if (hops < 5) {
							w8 = -5800;
						} else {
							w8 = -4129;
						}
					}
				}
			} else {
				if (rel_time < 4341) {
					if (hops < 2) {
						w8 = 7711;
					} else {
						if (hops < 5) {
							w8 = 12476;
						} else {
							w8 = 7875;
						}
					}
				} else {
					if (rel_time < 4905) {
						if (hops < 4) {
							w8 = -1764;
						} else {
							w8 = 203;
						}
					} else {
						if (hops < 2) {
							w8 = 3311;
						} else {
							w8 = 4854;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 4) {
				if (rel_time < 754) {
					if (prod == 3) {
						if (rel_time < 412) {
							w8 = 7447;
						} else {
							w8 = 9598;
						}
					} else {
						if (hops < 2) {
							w8 = 7019;
						} else {
							w8 = 7744;
						}
					}
				} else {
					if (rel_time < 831) {
						if (hops < 2) {
							w8 = 6015;
						} else {
							w8 = 6331;
						}
					} else {
						if (prod == 0) {
							w8 = 8259;
						} else {
							w8 = 7422;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (prod == 2) {
						if (rel_time < 652) {
							w8 = 9486;
						} else {
							w8 = 8425;
						}
					} else {
						if (rel_time < 1379) {
							w8 = 10537;
						} else {
							w8 = 9204;
						}
					}
				} else {
					if (size < 77) {
						if (rel_time < 583) {
							w8 = 10157;
						} else {
							w8 = 9146;
						}
					} else {
						if (prod == 4) {
							w8 = 10449;
						} else {
							w8 = 9819;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 3) {
					w8 = 10957;
				} else {
					if (hops < 5) {
						w8 = 11246;
					} else {
						w8 = 11796;
					}
				}
			} else {
				if (hops < 3) {
					if (rel_time < 724) {
						w8 = 9622;
					} else {
						if (hops < 2) {
							w8 = 9408;
						} else {
							w8 = 9534;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w8 = 9675;
						} else {
							w8 = 9813;
						}
					} else {
						w8 = 10026;
					}
				}
			}
		}
	}
	int w9;
	if (size < 45) {
		if (rel_time < 1324) {
			if (rel_time < 64) {
				if (hops < 4) {
					if (hops < 2) {
						w9 = 3708;
					} else {
						if (hops < 3) {
							w9 = 3859;
						} else {
							w9 = 3972;
						}
					}
				} else {
					if (hops < 5) {
						w9 = 4143;
					} else {
						w9 = 4486;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 832) {
							w9 = 2228;
						} else {
							w9 = 1928;
						}
					} else {
						if (rel_time < 952) {
							w9 = 2445;
						} else {
							w9 = 2086;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 534) {
							w9 = 2475;
						} else {
							w9 = 2754;
						}
					} else {
						w9 = 2929;
					}
				}
			}
		} else {
			if (rel_time < 1928) {
				if (hops < 4) {
					if (hops < 2) {
						w9 = 15615;
					} else {
						if (hops < 3) {
							w9 = 17163;
						} else {
							w9 = 15412;
						}
					}
				} else {
					if (hops < 5) {
						w9 = 17374;
					} else {
						w9 = 19299;
					}
				}
			} else {
				if (rel_time < 2491) {
					if (hops < 2) {
						w9 = -6607;
					} else {
						if (hops < 4) {
							w9 = -4426;
						} else {
							w9 = -2393;
						}
					}
				} else {
					if (rel_time < 2532) {
						if (hops < 2) {
							w9 = 3191;
						} else {
							w9 = 10230;
						}
					} else {
						if (rel_time < 3096) {
							w9 = -3709;
						} else {
							w9 = 3522;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 2) {
				if (rel_time < 652) {
					if (rel_time < 583) {
						if (rel_time < 412) {
							w9 = 5144;
						} else {
							w9 = 5958;
						}
					} else {
						w9 = 6823;
					}
				} else {
					if (prod == 2) {
						if (prod == 3) {
							w9 = 5031;
						} else {
							w9 = 5657;
						}
					} else {
						if (rel_time < 1379) {
							w9 = 6242;
						} else {
							w9 = 5677;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (prod == 2) {
						if (rel_time < 652) {
							w9 = 6471;
						} else {
							w9 = 5717;
						}
					} else {
						if (rel_time < 1379) {
							w9 = 7118;
						} else {
							w9 = 6199;
						}
					}
				} else {
					if (rel_time < 412) {
						w9 = 5105;
					} else {
						if (rel_time < 652) {
							w9 = 8726;
						} else {
							w9 = 6808;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 2) {
					w9 = 7582;
				} else {
					if (hops < 5) {
						w9 = 7827;
					} else {
						w9 = 8261;
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 663) {
							w9 = 6705;
						} else {
							w9 = 6582;
						}
					} else {
						if (rel_time < 1284) {
							w9 = 6791;
						} else {
							w9 = 6669;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 4) {
							w9 = 6773;
						} else {
							w9 = 6869;
						}
					} else {
						w9 = 7019;
					}
				}
			}
		}
	}
	int w10;
	if (size < 45) {
		if (rel_time < 7962) {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 4) {
						if (hops < 2) {
							w10 = 2596;
						} else {
							w10 = 2733;
						}
					} else {
						if (hops < 5) {
							w10 = 2901;
						} else {
							w10 = 3142;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 413) {
							w10 = 1464;
						} else {
							w10 = 1666;
						}
					} else {
						if (rel_time < 952) {
							w10 = 1923;
						} else {
							w10 = 1583;
						}
					}
				}
			} else {
				if (rel_time < 1928) {
					if (hops < 4) {
						if (hops < 2) {
							w10 = 10934;
						} else {
							w10 = 11550;
						}
					} else {
						if (hops < 5) {
							w10 = 12171;
						} else {
							w10 = 13541;
						}
					}
				} else {
					if (rel_time < 2491) {
						if (hops < 3) {
							w10 = -3893;
						} else {
							w10 = -2182;
						}
					} else {
						if (rel_time < 3135) {
							w10 = 5068;
						} else {
							w10 = 2416;
						}
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 8528) {
					if (hops < 3) {
						if (hops < 2) {
							w10 = -470;
						} else {
							w10 = 11;
						}
					} else {
						w10 = -638;
					}
				} else {
					if (rel_time < 8567) {
						if (hops < 3) {
							w10 = 3892;
						} else {
							w10 = 6069;
						}
					} else {
						if (rel_time < 9135) {
							w10 = -397;
						} else {
							w10 = 1216;
						}
					}
				}
			} else {
				if (rel_time < 8528) {
					if (hops < 5) {
						w10 = 158;
					} else {
						w10 = 1773;
					}
				} else {
					if (rel_time < 8567) {
						if (hops < 5) {
							w10 = 5940;
						} else {
							w10 = 3605;
						}
					} else {
						if (rel_time < 9135) {
							w10 = 765;
						} else {
							w10 = 2794;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 3) {
				if (rel_time < 652) {
					if (rel_time < 412) {
						w10 = 3620;
					} else {
						if (rel_time < 583) {
							w10 = 4387;
						} else {
							w10 = 4974;
						}
					}
				} else {
					if (prod == 0) {
						if (rel_time < 1867) {
							w10 = 3431;
						} else {
							w10 = 4115;
						}
					} else {
						if (rel_time < 2226) {
							w10 = 3955;
						} else {
							w10 = 3215;
						}
					}
				}
			} else {
				if (rel_time < 412) {
					if (hops < 5) {
						if (hops < 4) {
							w10 = 2835;
						} else {
							w10 = 2725;
						}
					} else {
						w10 = 3575;
					}
				} else {
					if (rel_time < 652) {
						if (hops < 4) {
							w10 = 5260;
						} else {
							w10 = 5749;
						}
					} else {
						if (rel_time < 1867) {
							w10 = 3768;
						} else {
							w10 = 4458;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 4) {
					if (hops < 2) {
						w10 = 5308;
					} else {
						w10 = 5443;
					}
				} else {
					w10 = 5654;
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						if (rel_time < 663) {
							w10 = 4694;
						} else {
							w10 = 4607;
						}
					} else {
						if (rel_time < 1284) {
							w10 = 4754;
						} else {
							w10 = 4668;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 663) {
							w10 = 4688;
						} else {
							w10 = 4785;
						}
					} else {
						w10 = 4914;
					}
				}
			}
		}
	}
	int w11;
	if (size < 45) {
		if (rel_time < 9171) {
			if (rel_time < 9135) {
				if (rel_time < 1324) {
					if (rel_time < 64) {
						if (hops < 3) {
							w11 = 1848;
						} else {
							w11 = 2019;
						}
					} else {
						if (hops < 3) {
							w11 = 1114;
						} else {
							w11 = 1277;
						}
					}
				} else {
					if (rel_time < 1928) {
						if (hops < 4) {
							w11 = 7914;
						} else {
							w11 = 8782;
						}
					} else {
						if (rel_time < 3096) {
							w11 = -647;
						} else {
							w11 = 2100;
						}
					}
				}
			} else {
				if (hops < 3) {
					if (hops < 2) {
						w11 = 6107;
					} else {
						w11 = 7356;
					}
				} else {
					if (hops < 5) {
						w11 = 10972;
					} else {
						w11 = 4790;
					}
				}
			}
		} else {
			if (hops < 4) {
				if (rel_time < 9731) {
					if (hops < 3) {
						if (hops < 2) {
							w11 = -1194;
						} else {
							w11 = -652;
						}
					} else {
						w11 = -1504;
					}
				} else {
					if (rel_time < 9776) {
						if (rel_time < 9745) {
							w11 = 693;
						} else {
							w11 = 4710;
						}
					} else {
						if (rel_time < 10336) {
							w11 = -1063;
						} else {
							w11 = 449;
						}
					}
				}
			} else {
				if (rel_time < 9731) {
					if (hops < 5) {
						w11 = -997;
					} else {
						w11 = 1305;
					}
				} else {
					if (rel_time < 9776) {
						if (rel_time < 9745) {
							w11 = 1720;
						} else {
							w11 = 8193;
						}
					} else {
						if (rel_time < 10336) {
							w11 = -508;
						} else {
							w11 = 1552;
						}
					}
				}
			}
		}
	} else {
		if (size < 141) {
			if (hops < 2) {
				if (prod == 4) {
					if (rel_time < 1950) {
						if (cons == 5) {
							w11 = 1854;
						} else {
							w11 = 2979;
						}
					} else {
						if (prod == 0) {
							w11 = 3044;
						} else {
							w11 = 2178;
						}
					}
				} else {
					if (rel_time < 1857) {
						if (rel_time < 652) {
							w11 = 3284;
						} else {
							w11 = 3683;
						}
					} else {
						if (rel_time < 10909) {
							w11 = 1845;
						} else {
							w11 = 2338;
						}
					}
				}
			} else {
				if (prod == 3) {
					if (rel_time < 754) {
						if (rel_time < 412) {
							w11 = 2254;
						} else {
							w11 = 3783;
						}
					} else {
						if (rel_time < 831) {
							w11 = 1511;
						} else {
							w11 = 2830;
						}
					}
				} else {
					if (rel_time < 1867) {
						if (rel_time < 661) {
							w11 = 2600;
						} else {
							w11 = 452;
						}
					} else {
						if (hops < 4) {
							w11 = 3660;
						} else {
							w11 = 4436;
						}
					}
				}
			}
		} else {
			if (rel_time < 334) {
				if (hops < 4) {
					if (hops < 2) {
						w11 = 3716;
					} else {
						w11 = 3810;
					}
				} else {
					if (hops < 5) {
						w11 = 3909;
					} else {
						w11 = 4091;
					}
				}
			} else {
				if (hops < 4) {
					if (hops < 2) {
						if (rel_time < 663) {
							w11 = 3286;
						} else {
							w11 = 3225;
						}
					} else {
						if (rel_time < 663) {
							w11 = 3233;
						} else {
							w11 = 3308;
						}
					}
				} else {
					if (rel_time < 1284) {
						w11 = 3561;
					} else {
						if (hops < 5) {
							w11 = 3309;
						} else {
							w11 = 3408;
						}
					}
				}
			}
		}
	}
	int w12;
	if (size < 45) {
		if (rel_time < 3740) {
			if (rel_time < 3703) {
				if (rel_time < 3135) {
					if (rel_time < 3096) {
						if (rel_time < 2532) {
							w12 = 1307;
						} else {
							w12 = -3922;
						}
					} else {
						if (hops < 5) {
							w12 = 25068;
						} else {
							w12 = 3899;
						}
					}
				} else {
					if (hops < 3) {
						if (hops < 2) {
							w12 = -7181;
						} else {
							w12 = -4556;
						}
					} else {
						if (hops < 5) {
							w12 = -477;
						} else {
							w12 = -3093;
						}
					}
				}
			} else {
				if (hops < 5) {
					if (hops < 2) {
						w12 = 36434;
					} else {
						if (hops < 4) {
							w12 = 47093;
						} else {
							w12 = 35317;
						}
					}
				} else {
					w12 = 23167;
				}
			}
		} else {
			if (rel_time < 4301) {
				if (hops < 3) {
					if (hops < 2) {
						w12 = -9392;
					} else {
						w12 = -8566;
					}
				} else {
					if (hops < 4) {
						w12 = -7603;
					} else {
						if (hops < 5) {
							w12 = -6467;
						} else {
							w12 = -5277;
						}
					}
				}
			} else {
				if (rel_time < 4341) {
					if (hops < 2) {
						w12 = 2991;
					} else {
						if (hops < 5) {
							w12 = 6326;
						} else {
							w12 = 3136;
						}
					}
				} else {
					if (rel_time < 5510) {
						if (rel_time < 4945) {
							w12 = 1075;
						} else {
							w12 = -4368;
						}
					} else {
						if (rel_time < 5549) {
							w12 = 10618;
						} else {
							w12 = 659;
						}
					}
				}
			}
		}
	} else {
		if (prod == 4) {
			if (prod == 0) {
				if (rel_time < 1867) {
					if (rel_time < 754) {
						if (size < 77) {
							w12 = 1706;
						} else {
							w12 = 2350;
						}
					} else {
						if (prod == 2) {
							w12 = 927;
						} else {
							w12 = 3119;
						}
					}
				} else {
					if (hops < 4) {
						if (prod == 2) {
							w12 = 2405;
						} else {
							w12 = 2013;
						}
					} else {
						if (size < 77) {
							w12 = 3530;
						} else {
							w12 = 2624;
						}
					}
				}
			} else {
				if (rel_time < 2553) {
					if (hops < 3) {
						if (rel_time < 583) {
							w12 = 2067;
						} else {
							w12 = 1905;
						}
					} else {
						if (rel_time < 583) {
							w12 = 2925;
						} else {
							w12 = 2209;
						}
					}
				} else {
					if (hops < 4) {
						if (hops < 3) {
							w12 = 1507;
						} else {
							w12 = 1564;
						}
					} else {
						if (hops < 5) {
							w12 = 982;
						} else {
							w12 = 1234;
						}
					}
				}
			}
		} else {
			if (rel_time < 1857) {
				if (rel_time < 652) {
					if (hops < 2) {
						w12 = 2299;
					} else {
						if (hops < 5) {
							w12 = 2522;
						} else {
							w12 = 2778;
						}
					}
				} else {
					if (hops < 5) {
						if (rel_time < 1791) {
							w12 = 2804;
						} else {
							w12 = 2557;
						}
					} else {
						w12 = 3760;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 11455) {
						if (hops < 4) {
							w12 = 1272;
						} else {
							w12 = 1372;
						}
					} else {
						if (rel_time < 11516) {
							w12 = 5186;
						} else {
							w12 = 1255;
						}
					}
				} else {
					w12 = 2132;
				}
			}
		}
	}
	int w13;
	if (size < 45) {
		if (hops < 2) {
			if (rel_time < 1928) {
				if (rel_time < 1324) {
					if (rel_time < 64) {
						w13 = 871;
					} else {
						if (rel_time < 832) {
							w13 = 364;
						} else {
							w13 = 125;
						}
					}
				} else {
					w13 = 4893;
				}
			} else {
				if (rel_time < 3096) {
					if (rel_time < 2532) {
						if (rel_time < 2491) {
							w13 = -3665;
						} else {
							w13 = 518;
						}
					} else {
						w13 = -5327;
					}
				} else {
					if (rel_time < 3135) {
						w13 = 17580;
					} else {
						if (rel_time < 3703) {
							w13 = -5029;
						} else {
							w13 = 249;
						}
					}
				}
			}
		} else {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 5) {
						if (hops < 4) {
							w13 = 947;
						} else {
							w13 = 1034;
						}
					} else {
						w13 = 1204;
					}
				} else {
					if (rel_time < 952) {
						if (hops < 5) {
							w13 = 480;
						} else {
							w13 = 718;
						}
					} else {
						if (hops < 5) {
							w13 = 223;
						} else {
							w13 = 610;
						}
					}
				}
			} else {
				if (rel_time < 3135) {
					if (rel_time < 3096) {
						if (rel_time < 2532) {
							w13 = 4110;
						} else {
							w13 = -1487;
						}
					} else {
						if (hops < 5) {
							w13 = 17513;
						} else {
							w13 = 2751;
						}
					}
				} else {
					if (rel_time < 3703) {
						if (hops < 3) {
							w13 = -3191;
						} else {
							w13 = -556;
						}
					} else {
						if (rel_time < 3740) {
							w13 = 29826;
						} else {
							w13 = 834;
						}
					}
				}
			}
		}
	} else {
		if (prod == 4) {
			if (prod == 0) {
				if (rel_time < 1867) {
					if (rel_time < 754) {
						if (prod == 3) {
							w13 = 1680;
						} else {
							w13 = 1053;
						}
					} else {
						if (prod == 3) {
							w13 = 1005;
						} else {
							w13 = -183;
						}
					}
				} else {
					if (hops < 3) {
						if (prod == 2) {
							w13 = 1630;
						} else {
							w13 = 1369;
						}
					} else {
						if (size < 77) {
							w13 = 2280;
						} else {
							w13 = 1755;
						}
					}
				}
			} else {
				if (rel_time < 1623) {
					if (hops < 3) {
						if (hops < 2) {
							w13 = 1344;
						} else {
							w13 = 1451;
						}
					} else {
						if (rel_time < 583) {
							w13 = 2048;
						} else {
							w13 = 1589;
						}
					}
				} else {
					if (hops < 4) {
						if (rel_time < 2553) {
							w13 = 1310;
						} else {
							w13 = 1065;
						}
					} else {
						if (rel_time < 11280) {
							w13 = 728;
						} else {
							w13 = 1111;
						}
					}
				}
			}
		} else {
			if (rel_time < 1857) {
				if (rel_time < 652) {
					if (hops < 2) {
						w13 = 1609;
					} else {
						if (hops < 5) {
							w13 = 1765;
						} else {
							w13 = 1946;
						}
					}
				} else {
					if (hops < 5) {
						if (hops < 2) {
							w13 = 1768;
						} else {
							w13 = 1977;
						}
					} else {
						w13 = 2635;
					}
				}
			} else {
				if (hops < 5) {
					if (rel_time < 11455) {
						if (hops < 4) {
							w13 = 890;
						} else {
							w13 = 961;
						}
					} else {
						if (rel_time < 11516) {
							w13 = 3632;
						} else {
							w13 = 879;
						}
					}
				} else {
					w13 = 1493;
				}
			}
		}
	}
	int w14;
	if (size < 45) {
		if (hops < 3) {
			if (rel_time < 3740) {
				if (rel_time < 3703) {
					if (rel_time < 3135) {
						if (rel_time < 3096) {
							w14 = 451;
						} else {
							w14 = 13540;
						}
					} else {
						if (hops < 2) {
							w14 = -3522;
						} else {
							w14 = -2235;
						}
					}
				} else {
					if (hops < 2) {
						w14 = 25483;
					} else {
						w14 = 18821;
					}
				}
			} else {
				if (rel_time < 4301) {
					w14 = -6422;
				} else {
					if (rel_time < 4341) {
						if (hops < 2) {
							w14 = 2020;
						} else {
							w14 = 4013;
						}
					} else {
						if (rel_time < 4905) {
							w14 = -4315;
						} else {
							w14 = 100;
						}
					}
				}
			}
		} else {
			if (rel_time < 1324) {
				if (rel_time < 64) {
					if (hops < 5) {
						if (hops < 4) {
							w14 = 680;
						} else {
							w14 = 724;
						}
					} else {
						w14 = 843;
					}
				} else {
					if (rel_time < 952) {
						if (hops < 5) {
							w14 = 355;
						} else {
							w14 = 503;
						}
					} else {
						if (hops < 5) {
							w14 = 132;
						} else {
							w14 = 428;
						}
					}
				}
			} else {
				if (rel_time < 6758) {
					if (rel_time < 6724) {
						if (rel_time < 1928) {
							w14 = 3948;
						} else {
							w14 = 1424;
						}
					} else {
						if (hops < 5) {
							w14 = 31356;
						} else {
							w14 = 11875;
						}
					}
				} else {
					if (rel_time < 7319) {
						if (hops < 5) {
							w14 = -4292;
						} else {
							w14 = -988;
						}
					} else {
						if (rel_time < 7358) {
							w14 = 3972;
						} else {
							w14 = 444;
						}
					}
				}
			}
		}
	} else {
		if (hops < 5) {
			if (rel_time < 334) {
				if (hops < 3) {
					if (hops < 2) {
						w14 = 1392;
					} else {
						w14 = 1441;
					}
				} else {
					if (hops < 4) {
						w14 = 1484;
					} else {
						w14 = 1528;
					}
				}
			} else {
				if (prod == 4) {
					if (size < 77) {
						if (rel_time < 1950) {
							w14 = 770;
						} else {
							w14 = 982;
						}
					} else {
						if (rel_time < 661) {
							w14 = 718;
						} else {
							w14 = 1119;
						}
					}
				} else {
					if (rel_time < 1857) {
						if (rel_time < 652) {
							w14 = 1197;
						} else {
							w14 = 1333;
						}
					} else {
						if (rel_time < 11455) {
							w14 = 631;
						} else {
							w14 = 928;
						}
					}
				}
			}
		} else {
			if (prod == 3) {
				if (rel_time < 754) {
					if (cons == 5) {
						if (size < 77) {
							w14 = 813;
						} else {
							w14 = 1429;
						}
					} else {
						if (rel_time < 583) {
							w14 = 2183;
						} else {
							w14 = 2444;
						}
					}
				} else {
					if (rel_time < 831) {
						if (rel_time < 755) {
							w14 = 194;
						} else {
							w14 = 331;
						}
					} else {
						if (prod == 1) {
							w14 = 1102;
						} else {
							w14 = 1902;
						}
					}
				}
			} else {
				if (rel_time < 1867) {
					if (rel_time < 1265) {
						w14 = 1115;
					} else {
						w14 = 996;
					}
				} else {
					if (rel_time < 2471) {
						w14 = 2036;
					} else {
						if (rel_time < 3667) {
							w14 = 2467;
						} else {
							w14 = 2255;
						}
					}
				}
			}
		}
	}
	return (51200 + w0 + w1 + w2 + w3 + w4 + w5 + w6 + w7 + w8 + w9 + w10 + w11 + w12 + w13 + w14) >> 10;
}
