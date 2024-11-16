unsigned score(int rel_timestamp, int hops, int size, bool prod_0, bool prod_1, bool prod_2, bool prod_3, bool prod_4, bool prod_5, bool cons_1, bool cons_2, bool cons_3, bool cons_4, bool cons_5) {
    float var0;
    if (size >= 74) {
        if (prod_0 != 1) {
            if (hops >= 3) {
                var0 = 165.78337;
            } else {
                if (hops >= 2) {
                    var0 = 163.23724;
                } else {
                    var0 = 161.07903;
                }
            }
        } else {
            var0 = 186.99469;
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var0 = 2.9985988;
            } else {
                var0 = 0.89991415;
            }
        } else {
            if (hops >= 2) {
                var0 = -1.199916;
            } else {
                var0 = -3.2997975;
            }
        }
    }
    float var1;
    if (size >= 74) {
        if (prod_0 != 1) {
            if (hops >= 3) {
                if (rel_timestamp >= 27226) {
                    var1 = 115.861786;
                } else {
                    if (rel_timestamp >= 17218) {
                        var1 = 267.96094;
                    } else {
                        var1 = 115.52233;
                    }
                }
            } else {
                if (hops >= 2) {
                    var1 = 114.269585;
                } else {
                    var1 = 112.75837;
                }
            }
        } else {
            var1 = 130.92224;
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var1 = 2.0994391;
            } else {
                var1 = 0.6299658;
            }
        } else {
            if (hops >= 2) {
                var1 = -0.8399662;
            } else {
                var1 = -2.309919;
            }
        }
    }
    float var2;
    if (size >= 74) {
        if (prod_0 != 1) {
            if (hops >= 3) {
                if (hops >= 4) {
                    var2 = 83.04941;
                } else {
                    var2 = 80.84039;
                }
            } else {
                if (rel_timestamp >= 27221) {
                    if (hops >= 2) {
                        var2 = 79.867294;
                    } else {
                        var2 = 78.86483;
                    }
                } else {
                    if (rel_timestamp >= 17215) {
                        var2 = 238.4278;
                    } else {
                        var2 = 79.25379;
                    }
                }
            }
        } else {
            var2 = 91.663734;
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var2 = 1.4699018;
            } else {
                var2 = 0.44099376;
            }
        } else {
            if (hops >= 2) {
                var2 = -0.58799404;
            } else {
                var2 = -1.6169866;
            }
        }
    }
    float var3;
    if (size >= 74) {
        if (prod_0 != 1) {
            if (hops >= 3) {
                if (rel_timestamp >= 27226) {
                    if (hops >= 4) {
                        var3 = 57.8861;
                    } else {
                        var3 = 56.474262;
                    }
                } else {
                    if (rel_timestamp >= 17218) {
                        var3 = 169.65347;
                    } else {
                        var3 = 56.688316;
                    }
                }
            } else {
                if (rel_timestamp >= 27221) {
                    if (hops >= 2) {
                        var3 = 55.908863;
                    } else {
                        var3 = 55.206913;
                    }
                } else {
                    if (rel_timestamp >= 17215) {
                        var3 = 171.107;
                    } else {
                        var3 = 55.51009;
                    }
                }
            }
        } else {
            if (hops >= 2) {
                var3 = 65.39399;
            } else {
                var3 = 62.091827;
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var3 = 1.0291371;
            } else {
                var3 = 0.3087081;
            }
        } else {
            if (hops >= 2) {
                var3 = -0.4116083;
            } else {
                var3 = -1.1319207;
            }
        }
    }
    float var4;
    if (size >= 74) {
        if (rel_timestamp >= 27221) {
            if (hops >= 3) {
                if (hops >= 4) {
                    var4 = 40.527554;
                } else {
                    var4 = 39.533558;
                }
            } else {
                if (hops >= 2) {
                    var4 = 39.13743;
                } else {
                    var4 = 38.645916;
                }
            }
        } else {
            if (rel_timestamp >= 17220) {
                var4 = 126.20376;
            } else {
                if (prod_0 != 1) {
                    var4 = 39.175907;
                } else {
                    if (hops >= 3) {
                        var4 = 47.034485;
                    } else {
                        var4 = 44.048042;
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var4 = 0.7205404;
            } else {
                var4 = 0.21610449;
            }
        } else {
            if (hops >= 2) {
                var4 = -0.28813407;
            } else {
                var4 = -0.7923655;
            }
        }
    }
    float var5;
    if (size >= 74) {
        if (rel_timestamp >= 27221) {
            if (hops >= 3) {
                if (hops >= 4) {
                    var5 = 28.374392;
                } else {
                    var5 = 27.67459;
                }
            } else {
                if (hops >= 2) {
                    var5 = 27.397062;
                } else {
                    var5 = 27.052898;
                }
            }
        } else {
            if (rel_timestamp >= 17220) {
                var5 = 89.525795;
            } else {
                if (prod_0 != 1) {
                    var5 = 27.43433;
                } else {
                    if (hops >= 3) {
                        var5 = 32.94647;
                    } else {
                        var5 = 30.842268;
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var5 = 0.50447965;
            } else {
                var5 = 0.1512799;
            }
        } else {
            if (hops >= 2) {
                var5 = -0.20169945;
            } else {
                var5 = -0.5546703;
            }
        }
    }
    float var6;
    if (size >= 74) {
        if (rel_timestamp >= 27221) {
            if (hops >= 3) {
                if (hops >= 4) {
                    var6 = 19.865644;
                } else {
                    var6 = 19.372986;
                }
            } else {
                if (hops >= 2) {
                    var6 = 19.178547;
                } else {
                    var6 = 18.93755;
                }
            }
        } else {
            if (rel_timestamp >= 17220) {
                var6 = 63.50735;
            } else {
                if (prod_0 != 1) {
                    var6 = 19.211864;
                } else {
                    if (hops >= 2) {
                        if (hops >= 4) {
                            var6 = 24.72708;
                        } else {
                            var6 = 22.422432;
                        }
                    } else {
                        var6 = 21.047543;
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var6 = 0.35320678;
            } else {
                var6 = 0.10590039;
            }
        } else {
            if (hops >= 2) {
                var6 = -0.1411942;
            } else {
                var6 = -0.38827994;
            }
        }
    }
    float var7;
    if (size >= 74) {
        if (rel_timestamp >= 27221) {
            if (hops >= 3) {
                if (hops >= 4) {
                    var7 = 13.908447;
                } else {
                    var7 = 13.561631;
                }
            } else {
                if (hops >= 2) {
                    var7 = 13.425409;
                } else {
                    var7 = 13.256651;
                }
            }
        } else {
            if (rel_timestamp >= 17220) {
                var7 = 45.050533;
            } else {
                if (prod_0 != 1) {
                    if (hops >= 2) {
                        var7 = 13.877646;
                    } else {
                        var7 = 12.718756;
                    }
                } else {
                    if (hops >= 2) {
                        if (hops >= 4) {
                            var7 = 17.37765;
                        } else {
                            var7 = 15.701136;
                        }
                    } else {
                        var7 = 14.741016;
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var7 = 0.24729428;
            } else {
                var7 = 0.07413348;
            }
        } else {
            if (hops >= 2) {
                var7 = -0.09883914;
            } else {
                var7 = -0.2718034;
            }
        }
    }
    float var8;
    if (size >= 74) {
        if (rel_timestamp >= 27221) {
            if (hops >= 3) {
                if (hops >= 4) {
                    var8 = 9.737663;
                } else {
                    var8 = 9.493517;
                }
            } else {
                if (hops >= 2) {
                    var8 = 9.39808;
                } else {
                    var8 = 9.279913;
                }
            }
        } else {
            if (rel_timestamp >= 17220) {
                var8 = 31.957737;
            } else {
                if (prod_0 != 1) {
                    if (hops >= 2) {
                        var8 = 9.720715;
                    } else {
                        var8 = 8.912766;
                    }
                } else {
                    if (hops >= 3) {
                        var8 = 11.456994;
                    } else {
                        var8 = 10.539181;
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var8 = 0.1731403;
            } else {
                var8 = 0.05189515;
            }
        } else {
            if (hops >= 2) {
                var8 = -0.06918957;
            } else {
                var8 = -0.19026695;
            }
        }
    }
    float var9;
    if (size >= 74) {
        if (rel_timestamp >= 27221) {
            if (hops >= 3) {
                if (hops >= 4) {
                    var9 = 6.8175883;
                } else {
                    var9 = 6.6457233;
                }
            } else {
                if (hops >= 2) {
                    var9 = 6.5788655;
                } else {
                    var9 = 6.496122;
                }
            }
        } else {
            if (rel_timestamp >= 17220) {
                var9 = 22.670013;
            } else {
                if (prod_0 != 1) {
                    if (hops >= 4) {
                        var9 = 8.091195;
                    } else {
                        if (hops >= 2) {
                            var9 = 6.6826277;
                        } else {
                            var9 = 6.2456837;
                        }
                    }
                } else {
                    if (hops >= 2) {
                        if (hops >= 4) {
                            var9 = 8.807366;
                        } else {
                            var9 = 7.7189546;
                        }
                    } else {
                        var9 = 7.1662464;
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var9 = 0.121222116;
            } else {
                var9 = 0.036328092;
            }
        } else {
            if (hops >= 2) {
                var9 = -0.04843373;
            } else {
                var9 = -0.13319077;
            }
        }
    }
    float var10;
    if (size >= 74) {
        if (rel_timestamp >= 27221) {
            if (hops >= 3) {
                if (hops >= 4) {
                    var10 = 4.773177;
                } else {
                    var10 = 4.6521835;
                }
            } else {
                if (rel_timestamp >= 1510548) {
                    var10 = 4.2902207;
                } else {
                    if (hops >= 2) {
                        var10 = 4.6084657;
                    } else {
                        var10 = 4.55122;
                    }
                }
            }
        } else {
            if (rel_timestamp >= 17220) {
                var10 = 16.081532;
            } else {
                if (prod_0 != 1) {
                    if (hops >= 4) {
                        var10 = 5.70879;
                    } else {
                        if (hops >= 2) {
                            var10 = 4.6811724;
                        } else {
                            var10 = 4.376715;
                        }
                    }
                } else {
                    if (hops >= 3) {
                        if (hops >= 4) {
                            var10 = 6.189619;
                        } else {
                            var10 = 5.537912;
                        }
                    } else {
                        if (rel_timestamp >= 2824) {
                            var10 = 5.0382895;
                        } else {
                            var10 = 5.4801826;
                        }
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var10 = 0.08487207;
            } else {
                var10 = 0.025430923;
            }
        } else {
            if (hops >= 2) {
                var10 = -0.033904184;
            } else {
                var10 = -0.09323616;
            }
        }
    }
    float var11;
    if (size >= 74) {
        if (rel_timestamp >= 27221) {
            if (hops >= 3) {
                if (rel_timestamp >= 1510558) {
                    var11 = 2.9814517;
                } else {
                    if (hops >= 4) {
                        var11 = 3.3458326;
                    } else {
                        var11 = 3.2602923;
                    }
                }
            } else {
                if (rel_timestamp >= 1510548) {
                    var11 = 3.0066707;
                } else {
                    if (hops >= 2) {
                        var11 = 3.2260306;
                    } else {
                        var11 = 3.1859472;
                    }
                }
            }
        } else {
            if (rel_timestamp >= 17220) {
                if (rel_timestamp >= 17495) {
                    var11 = 12.552679;
                } else {
                    var11 = 7.633902;
                }
            } else {
                if (prod_0 != 1) {
                    if (hops >= 4) {
                        var11 = 4.027865;
                    } else {
                        if (hops >= 3) {
                            var11 = 3.36984;
                        } else {
                            var11 = 3.1317677;
                        }
                    }
                } else {
                    if (hops >= 2) {
                        if (rel_timestamp >= 2828) {
                            var11 = 3.7662325;
                        } else {
                            var11 = 4.116927;
                        }
                    } else {
                        if (rel_timestamp >= 2824) {
                            var11 = 3.388592;
                        } else {
                            var11 = 3.7278204;
                        }
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var11 = 0.059422005;
            } else {
                var11 = 0.017801875;
            }
        } else {
            if (hops >= 2) {
                var11 = -0.023733385;
            } else {
                var11 = -0.06526738;
            }
        }
    }
    float var12;
    if (size >= 74) {
        if (rel_timestamp >= 27221) {
            if (hops >= 3) {
                if (hops >= 4) {
                    var12 = 2.3399153;
                } else {
                    if (rel_timestamp >= 1510558) {
                        var12 = 2.081234;
                    } else {
                        var12 = 2.2822902;
                    }
                }
            } else {
                if (rel_timestamp >= 1510548) {
                    var12 = 2.107139;
                } else {
                    if (hops >= 2) {
                        var12 = 2.2582984;
                    } else {
                        var12 = 2.230218;
                    }
                }
            }
        } else {
            if (rel_timestamp >= 17220) {
                if (rel_timestamp >= 17495) {
                    var12 = 8.95059;
                } else {
                    if (rel_timestamp >= 17494) {
                        var12 = 1.3696839;
                    } else {
                        var12 = 5.8875656;
                    }
                }
            } else {
                if (prod_0 != 1) {
                    if (hops >= 4) {
                        var12 = 2.8418741;
                    } else {
                        if (hops >= 2) {
                            var12 = 2.3098712;
                        } else {
                            var12 = 2.1298583;
                        }
                    }
                } else {
                    if (hops >= 4) {
                        var12 = 3.2012875;
                    } else {
                        if (hops >= 2) {
                            var12 = 2.6563916;
                        } else {
                            var12 = 2.4363146;
                        }
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var12 = 0.041603867;
            } else {
                var12 = 0.012461428;
            }
        } else {
            if (hops >= 2) {
                var12 = -0.01661337;
            } else {
                var12 = -0.04568888;
            }
        }
    }
    float var13;
    if (size >= 74) {
        if (rel_timestamp >= 27221) {
            if (hops >= 3) {
                if (rel_timestamp >= 1510558) {
                    var13 = 1.4576082;
                } else {
                    if (hops >= 4) {
                        var13 = 1.6408387;
                    } else {
                        var13 = 1.5976685;
                    }
                }
            } else {
                if (rel_timestamp >= 1510548) {
                    var13 = 1.4767313;
                } else {
                    if (hops >= 2) {
                        var13 = 1.5808586;
                    } else {
                        var13 = 1.5611947;
                    }
                }
            }
        } else {
            if (rel_timestamp >= 17220) {
                if (rel_timestamp >= 17502) {
                    var13 = 6.7825265;
                } else {
                    var13 = 4.673873;
                }
            } else {
                if (rel_timestamp >= 2824) {
                    if (hops >= 3) {
                        if (hops >= 4) {
                            var13 = 2.0881362;
                        } else {
                            var13 = 1.784148;
                        }
                    } else {
                        if (prod_0 != 1) {
                            var13 = 1.5305978;
                        } else {
                            var13 = 1.6993499;
                        }
                    }
                } else {
                    if (hops >= 3) {
                        var13 = 2.2526717;
                    } else {
                        var13 = 1.9082798;
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var13 = 0.02912877;
            } else {
                var13 = 0.008722999;
            }
        } else {
            if (hops >= 2) {
                var13 = -0.011629816;
            } else {
                var13 = -0.03198313;
            }
        }
    }
    float var14;
    if (size >= 74) {
        if (rel_timestamp >= 27221) {
            if (hops >= 3) {
                if (rel_timestamp >= 1510558) {
                    if (rel_timestamp >= 1519870) {
                        var14 = 1.119627;
                    } else {
                        var14 = 0.9362137;
                    }
                } else {
                    if (hops >= 4) {
                        var14 = 1.1487873;
                    } else {
                        var14 = 1.1184169;
                    }
                }
            } else {
                if (rel_timestamp >= 75482) {
                    if (rel_timestamp >= 1510548) {
                        if (hops >= 2) {
                            var14 = 1.0926092;
                        } else {
                            var14 = 0.9775441;
                        }
                    } else {
                        if (rel_timestamp >= 85109) {
                            var14 = 1.1004226;
                        } else {
                            var14 = 1.2157422;
                        }
                    }
                } else {
                    if (rel_timestamp >= 56220) {
                        var14 = 0.9815549;
                    } else {
                        if (rel_timestamp >= 36934) {
                            var14 = 1.1015971;
                        } else {
                            var14 = 0.97759634;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp >= 17489) {
                if (rel_timestamp >= 17509) {
                    var14 = 5.8709474;
                } else {
                    var14 = 3.6968033;
                }
            } else {
                if (rel_timestamp >= 2824) {
                    if (hops >= 2) {
                        if (prod_0 != 1) {
                            var14 = 1.1541909;
                        } else {
                            var14 = 1.3005207;
                        }
                    } else {
                        if (prod_0 != 1) {
                            var14 = 1.0344927;
                        } else {
                            var14 = 1.1349746;
                        }
                    }
                } else {
                    if (hops >= 3) {
                        if (hops >= 4) {
                            var14 = 1.8526825;
                        } else {
                            var14 = 1.5006454;
                        }
                    } else {
                        var14 = 1.337276;
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var14 = 0.02039414;
            } else {
                var14 = 0.006105985;
            }
        } else {
            if (hops >= 2) {
                var14 = -0.008140758;
            } else {
                var14 = -0.022388991;
            }
        }
    }
    float var15;
    if (size >= 74) {
        if (rel_timestamp >= 27221) {
            if (hops >= 2) {
                if (rel_timestamp >= 36934) {
                    if (hops >= 4) {
                        if (rel_timestamp >= 1472358) {
                            var15 = 0.72065765;
                        } else {
                            var15 = 0.80582815;
                        }
                    } else {
                        var15 = 0.77931964;
                    }
                } else {
                    var15 = 0.5855053;
                }
            } else {
                if (rel_timestamp >= 1519852) {
                    if (rel_timestamp >= 1519856) {
                        var15 = 0.7131655;
                    } else {
                        var15 = 0.5675919;
                    }
                } else {
                    if (rel_timestamp >= 383740) {
                        if (rel_timestamp >= 393374) {
                            var15 = 0.7662804;
                        } else {
                            var15 = 0.9266805;
                        }
                    } else {
                        if (rel_timestamp >= 374114) {
                            var15 = 0.63557065;
                        } else {
                            var15 = 0.752259;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp >= 17220) {
                if (rel_timestamp >= 17509) {
                    var15 = 4.361269;
                } else {
                    if (hops >= 3) {
                        var15 = 3.043528;
                    } else {
                        if (rel_timestamp >= 17489) {
                            var15 = 1.9352084;
                        } else {
                            var15 = 0.3918274;
                        }
                    }
                }
            } else {
                if (hops >= 4) {
                    var15 = 1.1458012;
                } else {
                    if (prod_0 != 1) {
                        if (rel_timestamp >= 13750) {
                            var15 = 0.7137227;
                        } else {
                            var15 = 0.8008725;
                        }
                    } else {
                        if (rel_timestamp >= 2824) {
                            var15 = 0.8543278;
                        } else {
                            var15 = 0.96733874;
                        }
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var15 = 0.014278988;
            } else {
                var15 = 0.0042739604;
            }
        } else {
            if (hops >= 2) {
                var15 = -0.005698759;
            } else {
                var15 = -0.015672868;
            }
        }
    }
    float var16;
    if (size >= 74) {
        if (rel_timestamp >= 36931) {
            if (hops >= 2) {
                if (rel_timestamp >= 36934) {
                    if (hops >= 4) {
                        if (rel_timestamp >= 36947) {
                            var16 = 0.5624999;
                        } else {
                            var16 = 0.27206546;
                        }
                    } else {
                        if (rel_timestamp >= 36938) {
                            var16 = 0.54530287;
                        } else {
                            var16 = 0.6498351;
                        }
                    }
                } else {
                    var16 = 0.4146102;
                }
            } else {
                if (rel_timestamp >= 94743) {
                    if (rel_timestamp >= 1433795) {
                        if (rel_timestamp >= 1462692) {
                            var16 = 0.52256846;
                        } else {
                            var16 = 0.47092032;
                        }
                    } else {
                        if (rel_timestamp >= 1424166) {
                            var16 = 0.6754324;
                        } else {
                            var16 = 0.5368333;
                        }
                    }
                } else {
                    if (rel_timestamp >= 94739) {
                        var16 = 0.35311827;
                    } else {
                        if (rel_timestamp >= 36934) {
                            var16 = 0.5078493;
                        } else {
                            var16 = 0.38285202;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp >= 17220) {
                if (rel_timestamp >= 27221) {
                    if (rel_timestamp >= 36928) {
                        var16 = 0.66197664;
                    } else {
                        var16 = 0.47195742;
                    }
                } else {
                    if (rel_timestamp >= 17509) {
                        var16 = 3.2397845;
                    } else {
                        if (hops >= 3) {
                            var16 = 2.191326;
                        } else {
                            var16 = 1.3456542;
                        }
                    }
                }
            } else {
                if (hops >= 3) {
                    if (rel_timestamp >= 5671) {
                        if (hops >= 4) {
                            var16 = 0.75593954;
                        } else {
                            var16 = 0.6285105;
                        }
                    } else {
                        if (hops >= 4) {
                            var16 = 0.98215765;
                        } else {
                            var16 = 0.771917;
                        }
                    }
                } else {
                    if (rel_timestamp >= 2824) {
                        if (hops >= 2) {
                            var16 = 0.5815993;
                        } else {
                            var16 = 0.5234905;
                        }
                    } else {
                        var16 = 0.64767;
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var16 = 0.009997465;
            } else {
                var16 = 0.0029923446;
            }
        } else {
            if (hops >= 2) {
                var16 = -0.003989131;
            } else {
                var16 = -0.010970779;
            }
        }
    }
    float var17;
    if (size >= 74) {
        if (prod_0 != 1) {
            if (rel_timestamp >= 10576) {
                if (rel_timestamp >= 10583) {
                    if (hops >= 3) {
                        if (rel_timestamp >= 27226) {
                            var17 = 0.38650638;
                        } else {
                            var17 = 0.45703396;
                        }
                    } else {
                        if (rel_timestamp >= 16919) {
                            var17 = 0.37700695;
                        } else {
                            var17 = 0.18651848;
                        }
                    }
                } else {
                    var17 = 0.7194457;
                }
            } else {
                if (rel_timestamp >= 10567) {
                    var17 = 0.12966488;
                } else {
                    var17 = 0.41094807;
                }
            }
        } else {
            if (hops >= 3) {
                if (cons_3 != 1) {
                    if (hops >= 4) {
                        var17 = 0.64358187;
                    } else {
                        if (rel_timestamp >= 11304) {
                            var17 = 0.58194125;
                        } else {
                            var17 = 0.38390574;
                        }
                    }
                } else {
                    if (rel_timestamp >= 5671) {
                        if (rel_timestamp >= 5679) {
                            var17 = 0.53781223;
                        } else {
                            var17 = 0.41435346;
                        }
                    } else {
                        if (hops >= 4) {
                            var17 = 0.6970093;
                        } else {
                            var17 = 0.54199755;
                        }
                    }
                }
            } else {
                if (hops >= 2) {
                    if (rel_timestamp >= 11296) {
                        if (rel_timestamp >= 11297) {
                            var17 = 0.42967832;
                        } else {
                            var17 = 0.24629824;
                        }
                    } else {
                        if (rel_timestamp >= 5677) {
                            var17 = 0.48265874;
                        } else {
                            var17 = 0.43908224;
                        }
                    }
                } else {
                    if (rel_timestamp >= 2824) {
                        if (rel_timestamp >= 11283) {
                            var17 = 0.41272673;
                        } else {
                            var17 = 0.35758206;
                        }
                    } else {
                        var17 = 0.43677774;
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var17 = 0.0069993692;
            } else {
                var17 = 0.0020952134;
            }
        } else {
            if (hops >= 2) {
                var17 = -0.0027921628;
            } else {
                var17 = -0.0076796594;
            }
        }
    }
    float var18;
    if (size >= 74) {
        if (rel_timestamp >= 36938) {
            if (rel_timestamp >= 36941) {
                if (rel_timestamp >= 1481978) {
                    if (rel_timestamp >= 1481981) {
                        if (rel_timestamp >= 1519870) {
                            var18 = 0.31972665;
                        } else {
                            var18 = 0.23748335;
                        }
                    } else {
                        if (rel_timestamp >= 1481980) {
                            var18 = 0.1352591;
                        } else {
                            var18 = 0.041796114;
                        }
                    }
                } else {
                    if (rel_timestamp >= 1481975) {
                        var18 = 0.44530556;
                    } else {
                        if (rel_timestamp >= 1481971) {
                            var18 = 0.17693734;
                        } else {
                            var18 = 0.26640162;
                        }
                    }
                }
            } else {
                if (hops >= 3) {
                    var18 = 0.16954766;
                } else {
                    if (hops >= 2) {
                        var18 = 0.035225183;
                    } else {
                        if (rel_timestamp >= 36940) {
                            var18 = 0.10730243;
                        } else {
                            var18 = 0.038604736;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp >= 16951) {
                if (cons_2 != 1) {
                    if (rel_timestamp >= 17495) {
                        if (rel_timestamp >= 17509) {
                            var18 = 2.3063443;
                        } else {
                            var18 = 1.444881;
                        }
                    } else {
                        if (rel_timestamp >= 17494) {
                            var18 = -0.94513553;
                        } else {
                            var18 = 1.0597047;
                        }
                    }
                } else {
                    if (rel_timestamp >= 36937) {
                        var18 = 0.59250003;
                    } else {
                        if (rel_timestamp >= 36935) {
                            var18 = 0.35738215;
                        } else {
                            var18 = 0.2454068;
                        }
                    }
                }
            } else {
                if (prod_0 != 1) {
                    if (rel_timestamp >= 16935) {
                        if (rel_timestamp >= 16938) {
                            var18 = 0.2914896;
                        } else {
                            var18 = 0.5033777;
                        }
                    } else {
                        if (rel_timestamp >= 16924) {
                            var18 = 0.16117658;
                        } else {
                            var18 = 0.26652852;
                        }
                    }
                } else {
                    if (hops >= 3) {
                        if (cons_3 != 1) {
                            var18 = 0.31355646;
                        } else {
                            var18 = 0.3771688;
                        }
                    } else {
                        if (rel_timestamp >= 2824) {
                            var18 = 0.28306848;
                        } else {
                            var18 = 0.32285133;
                        }
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var18 = 0.004900359;
            } else {
                var18 = 0.0014669927;
            }
        } else {
            if (hops >= 2) {
                var18 = -0.001954514;
            } else {
                var18 = -0.0053761047;
            }
        }
    }
    float var19;
    if (size >= 74) {
        if (rel_timestamp >= 36931) {
            if (rel_timestamp >= 1519860) {
                if (rel_timestamp >= 1519870) {
                    if (rel_timestamp >= 1519874) {
                        if (rel_timestamp >= 1519877) {
                            var19 = 0.1704695;
                        } else {
                            var19 = -0.007890438;
                        }
                    } else {
                        if (rel_timestamp >= 1519871) {
                            var19 = 0.35556686;
                        } else {
                            var19 = 0.1929319;
                        }
                    }
                } else {
                    if (rel_timestamp >= 1519867) {
                        if (rel_timestamp >= 1519869) {
                            var19 = 0.03198181;
                        } else {
                            var19 = -0.077370904;
                        }
                    } else {
                        if (rel_timestamp >= 1519863) {
                            var19 = 0.22799486;
                        } else {
                            var19 = 0.019993164;
                        }
                    }
                }
            } else {
                if (rel_timestamp >= 1519857) {
                    if (hops >= 2) {
                        var19 = 0.3969169;
                    } else {
                        if (rel_timestamp >= 1519858) {
                            var19 = 0.32353517;
                        } else {
                            var19 = 0.20208944;
                        }
                    }
                } else {
                    if (hops >= 2) {
                        if (rel_timestamp >= 557155) {
                            var19 = 0.18654509;
                        } else {
                            var19 = 0.19349591;
                        }
                    } else {
                        if (rel_timestamp >= 75469) {
                            var19 = 0.18204188;
                        } else {
                            var19 = 0.14886184;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp >= 16951) {
                if (cons_2 != 1) {
                    if (rel_timestamp >= 17502) {
                        if (rel_timestamp >= 17516) {
                            var19 = 2.3280764;
                        } else {
                            var19 = 1.2026709;
                        }
                    } else {
                        if (hops >= 2) {
                            var19 = 0.9546094;
                        } else {
                            var19 = -0.6690918;
                        }
                    }
                } else {
                    if (rel_timestamp >= 36928) {
                        if (hops >= 2) {
                            var19 = 0.012066651;
                        } else {
                            var19 = 0.30438182;
                        }
                    } else {
                        if (rel_timestamp >= 26939) {
                            var19 = 0.15731126;
                        } else {
                            var19 = 0.36112976;
                        }
                    }
                }
            } else {
                if (hops >= 4) {
                    if (cons_2 != 1) {
                        if (rel_timestamp >= 16948) {
                            var19 = 0.34345397;
                        } else {
                            var19 = 0.20196955;
                        }
                    } else {
                        if (rel_timestamp >= 16948) {
                            var19 = 0.08041993;
                        } else {
                            var19 = 0.35163426;
                        }
                    }
                } else {
                    if (prod_0 != 1) {
                        if (rel_timestamp >= 16935) {
                            var19 = 0.27102673;
                        } else {
                            var19 = 0.16481726;
                        }
                    } else {
                        if (hops >= 2) {
                            var19 = 0.2311361;
                        } else {
                            var19 = 0.19009814;
                        }
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var19 = 0.0034304804;
            } else {
                var19 = 0.0010264372;
            }
        } else {
            if (hops >= 2) {
                var19 = -0.0013686176;
            } else {
                var19 = -0.003763731;
            }
        }
    }
    float var20;
    if (size >= 74) {
        if (rel_timestamp >= 36938) {
            if (rel_timestamp >= 36941) {
                if (rel_timestamp >= 1510551) {
                    if (rel_timestamp >= 1519870) {
                        if (rel_timestamp >= 1519874) {
                            var20 = 0.09287309;
                        } else {
                            var20 = 0.21088476;
                        }
                    } else {
                        if (rel_timestamp >= 1519867) {
                            var20 = -0.015731918;
                        } else {
                            var20 = 0.10070675;
                        }
                    }
                } else {
                    if (rel_timestamp >= 1501242) {
                        if (rel_timestamp >= 1501245) {
                            var20 = 0.1869021;
                        } else {
                            var20 = 0.4569754;
                        }
                    } else {
                        if (rel_timestamp >= 1501237) {
                            var20 = 0.060818736;
                        } else {
                            var20 = 0.13048764;
                        }
                    }
                }
            } else {
                if (hops >= 3) {
                    var20 = 0.06744347;
                } else {
                    if (hops >= 2) {
                        var20 = -0.029348576;
                    } else {
                        if (rel_timestamp >= 36940) {
                            var20 = 0.035942297;
                        } else {
                            var20 = -0.008255006;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp >= 16939) {
                if (cons_2 != 1) {
                    if (rel_timestamp >= 17495) {
                        if (rel_timestamp >= 17516) {
                            var20 = 1.9788575;
                        } else {
                            var20 = 0.85832024;
                        }
                    } else {
                        if (rel_timestamp >= 17494) {
                            var20 = -0.9465454;
                        } else {
                            var20 = 0.19620328;
                        }
                    }
                } else {
                    if (rel_timestamp >= 16945) {
                        if (rel_timestamp >= 36936) {
                            var20 = 0.29642084;
                        } else {
                            var20 = 0.12397896;
                        }
                    } else {
                        if (rel_timestamp >= 16941) {
                            var20 = 0.21435072;
                        } else {
                            var20 = 0.28616098;
                        }
                    }
                }
            } else {
                if (rel_timestamp >= 16910) {
                    if (rel_timestamp >= 16912) {
                        if (rel_timestamp >= 16938) {
                            var20 = -0.0037096024;
                        } else {
                            var20 = 0.12054548;
                        }
                    } else {
                        if (prod_0 != 1) {
                            var20 = -0.10140166;
                        } else {
                            var20 = 0.22093506;
                        }
                    }
                } else {
                    if (hops >= 4) {
                        if (rel_timestamp >= 10604) {
                            var20 = 0.34716493;
                        } else {
                            var20 = 0.1632713;
                        }
                    } else {
                        if (rel_timestamp >= 2824) {
                            var20 = 0.14191061;
                        } else {
                            var20 = 0.1712285;
                        }
                    }
                }
            }
        }
    } else {
        if (hops >= 3) {
            if (hops >= 4) {
                var20 = 0.0024021368;
            } else {
                var20 = 0.0007186204;
            }
        } else {
            if (hops >= 2) {
                var20 = -0.00095780345;
            } else {
                var20 = -0.0026342685;
            }
        }
    }
    return 50 + (unsigned)(var0 + var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20);
}
