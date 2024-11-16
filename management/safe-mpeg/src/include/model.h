unsigned score(int rel_timestamp, int hops, int size, bool prod_0, bool prod_1, bool prod_2, bool prod_4, bool cons_0, bool cons_1, bool cons_2, bool cons_3) {
    float var0;
    if (size >= 109) {
        if (rel_timestamp >= 31275) {
            var0 = 167.31375;
        } else {
            var0 = 188.82858;
        }
    } else {
        if (rel_timestamp >= 99285) {
            var0 = 144.90106;
        } else {
            if (prod_1 != 1) {
                var0 = 141.1945;
            } else {
                var0 = 170.74144;
            }
        }
    }
    float var1;
    if (size >= 109) {
        if (rel_timestamp >= 31275) {
            var1 = 117.14895;
        } else {
            var1 = 132.8025;
        }
    } else {
        if (rel_timestamp >= 99285) {
            if (hops >= 3) {
                var1 = 104.338554;
            } else {
                var1 = 100.377464;
            }
        } else {
            if (prod_1 != 1) {
                var1 = 99.301636;
            } else {
                var1 = 119.802;
            }
        }
    }
    float var2;
    if (size >= 109) {
        if (rel_timestamp >= 31275) {
            var2 = 82.024796;
        } else {
            var2 = 93.39957;
        }
    } else {
        if (rel_timestamp >= 99285) {
            if (prod_0 != 1) {
                var2 = 73.39689;
            } else {
                if (hops >= 2) {
                    var2 = 70.95762;
                } else {
                    var2 = 68.295525;
                }
            }
        } else {
            if (prod_1 != 1) {
                var2 = 69.83851;
            } else {
                var2 = 84.05997;
            }
        }
    }
    float var3;
    if (size >= 109) {
        if (rel_timestamp >= 31275) {
            if (hops >= 2) {
                var3 = 58.926907;
            } else {
                var3 = 55.307068;
            }
        } else {
            var3 = 65.68761;
        }
    } else {
        if (rel_timestamp >= 99285) {
            if (prod_0 != 1) {
                if (hops >= 2) {
                    var3 = 52.52979;
                } else {
                    var3 = 49.68673;
                }
            } else {
                if (hops >= 3) {
                    var3 = 50.508778;
                } else {
                    var3 = 48.316143;
                }
            }
        } else {
            if (prod_1 != 1) {
                var3 = 49.11719;
            } else {
                var3 = 58.9813;
            }
        }
    }
    float var4;
    if (size >= 109) {
        if (hops >= 3) {
            var4 = 42.98276;
        } else {
            if (rel_timestamp >= 31275) {
                var4 = 39.261105;
            } else {
                var4 = 44.896877;
            }
        }
    } else {
        if (rel_timestamp >= 99285) {
            if (hops >= 2) {
                if (prod_0 != 1) {
                    var4 = 36.786484;
                } else {
                    var4 = 34.901207;
                }
            } else {
                var4 = 33.818672;
            }
        } else {
            if (prod_1 != 1) {
                var4 = 34.54396;
            } else {
                var4 = 41.38467;
            }
        }
    }
    float var5;
    if (size >= 109) {
        if (rel_timestamp >= 31275) {
            if (hops >= 3) {
                var5 = 29.765768;
            } else {
                var5 = 27.492306;
            }
        } else {
            var5 = 33.034588;
        }
    } else {
        if (hops >= 3) {
            if (rel_timestamp >= 99292) {
                if (hops >= 4) {
                    var5 = 26.921736;
                } else {
                    var5 = 25.010908;
                }
            } else {
                var5 = 30.102365;
            }
        } else {
            if (prod_0 != 1) {
                var5 = 25.025787;
            } else {
                if (rel_timestamp >= 64022) {
                    var5 = 23.55231;
                } else {
                    var5 = 27.735147;
                }
            }
        }
    }
    float var6;
    if (size >= 109) {
        if (hops >= 4) {
            var6 = 22.504183;
        } else {
            if (rel_timestamp >= 31275) {
                if (hops >= 2) {
                    var6 = 19.989758;
                } else {
                    var6 = 18.73957;
                }
            } else {
                var6 = 22.708529;
            }
        }
    } else {
        if (prod_0 != 1) {
            if (rel_timestamp >= 105828) {
                if (hops >= 3) {
                    var6 = 18.806133;
                } else {
                    var6 = 17.358536;
                }
            } else {
                var6 = 21.103676;
            }
        } else {
            if (rel_timestamp >= 64029) {
                if (hops >= 2) {
                    if (hops >= 4) {
                        var6 = 18.280405;
                    } else {
                        var6 = 16.989256;
                    }
                } else {
                    var6 = 16.125557;
                }
            } else {
                var6 = 20.391808;
            }
        }
    }
    float var7;
    if (size >= 109) {
        if (hops >= 2) {
            if (rel_timestamp >= 31283) {
                if (hops >= 4) {
                    var7 = 15.503937;
                } else {
                    var7 = 14.000165;
                }
            } else {
                var7 = 17.904116;
            }
        } else {
            var7 = 13.196367;
        }
    } else {
        if (hops >= 2) {
            if (rel_timestamp >= 99289) {
                if (hops >= 4) {
                    var7 = 13.34746;
                } else {
                    if (prod_0 != 1) {
                        var7 = 12.578048;
                    } else {
                        var7 = 11.875668;
                    }
                }
            } else {
                if (prod_1 != 1) {
                    var7 = 12.573971;
                } else {
                    var7 = 15.755416;
                }
            }
        } else {
            if (prod_0 != 1) {
                var7 = 12.050227;
            } else {
                var7 = 11.332526;
            }
        }
    }
    float var8;
    if (size >= 109) {
        if (rel_timestamp >= 31275) {
            if (hops >= 4) {
                var8 = 10.8798065;
            } else {
                if (hops >= 2) {
                    var8 = 9.805244;
                } else {
                    var8 = 9.172048;
                }
            }
        } else {
            if (hops >= 3) {
                var8 = 14.101511;
            } else {
                var8 = 10.685635;
            }
        }
    } else {
        if (rel_timestamp >= 99285) {
            if (prod_0 != 1) {
                if (hops >= 4) {
                    var8 = 10.298607;
                } else {
                    if (hops >= 3) {
                        var8 = 9.047891;
                    } else {
                        var8 = 8.476406;
                    }
                }
            } else {
                if (hops >= 2) {
                    var8 = 8.371831;
                } else {
                    var8 = 7.903547;
                }
            }
        } else {
            if (prod_1 != 1) {
                var8 = 8.28783;
            } else {
                if (hops >= 3) {
                    var8 = 11.822335;
                } else {
                    var8 = 9.923501;
                }
            }
        }
    }
    float var9;
    if (size >= 109) {
        if (rel_timestamp >= 31275) {
            if (hops >= 4) {
                var9 = 7.634836;
            } else {
                if (hops >= 2) {
                    var9 = 6.867269;
                } else {
                    var9 = 6.424236;
                }
            }
        } else {
            if (hops >= 3) {
                var9 = 10.033771;
            } else {
                var9 = 7.5285234;
            }
        }
    } else {
        if (hops >= 4) {
            if (rel_timestamp >= 99295) {
                if (prod_0 != 1) {
                    var9 = 7.235898;
                } else {
                    var9 = 6.295025;
                }
            } else {
                var9 = 9.03386;
            }
        } else {
            if (rel_timestamp >= 99285) {
                if (prod_0 != 1) {
                    if (hops >= 2) {
                        var9 = 6.1958985;
                    } else {
                        var9 = 5.824223;
                    }
                } else {
                    if (hops >= 2) {
                        var9 = 5.804964;
                    } else {
                        var9 = 5.5340652;
                    }
                }
            } else {
                if (prod_1 != 1) {
                    if (hops >= 2) {
                        var9 = 6.2344937;
                    } else {
                        var9 = 4.894003;
                    }
                } else {
                    var9 = 7.1889763;
                }
            }
        }
    }
    float var10;
    if (size >= 109) {
        if (rel_timestamp >= 31275) {
            if (hops >= 4) {
                var10 = 5.3577046;
            } else {
                if (hops >= 2) {
                    var10 = 4.809613;
                } else {
                    var10 = 4.4996247;
                }
            }
        } else {
            if (hops >= 3) {
                var10 = 7.1394186;
            } else {
                var10 = 5.304193;
            }
        }
    } else {
        if (hops >= 4) {
            if (rel_timestamp >= 99295) {
                if (prod_0 != 1) {
                    var10 = 5.0840034;
                } else {
                    var10 = 4.415505;
                }
            } else {
                var10 = 6.4742627;
            }
        } else {
            if (rel_timestamp >= 99285) {
                if (prod_2 != 1) {
                    if (hops >= 2) {
                        var10 = 4.0365925;
                    } else {
                        var10 = 3.726469;
                    }
                } else {
                    if (hops >= 3) {
                        var10 = 4.335881;
                    } else {
                        var10 = 4.0868955;
                    }
                }
            } else {
                if (prod_1 != 1) {
                    if (hops >= 2) {
                        var10 = 4.4039392;
                    } else {
                        var10 = 3.4625046;
                    }
                } else {
                    if (hops >= 2) {
                        var10 = 5.4403477;
                    } else {
                        var10 = 4.5141172;
                    }
                }
            }
        }
    }
    float var11;
    if (size >= 109) {
        if (rel_timestamp >= 31275) {
            if (hops >= 3) {
                var11 = 3.5574927;
            } else {
                var11 = 3.2260017;
            }
        } else {
            if (hops >= 4) {
                var11 = 5.8569674;
            } else {
                var11 = 3.9043233;
            }
        }
    } else {
        if (rel_timestamp >= 99285) {
            if (prod_0 != 1) {
                if (hops >= 3) {
                    if (hops >= 4) {
                        var11 = 3.572071;
                    } else {
                        var11 = 3.1893942;
                    }
                } else {
                    var11 = 2.917679;
                }
            } else {
                if (hops >= 2) {
                    if (hops >= 4) {
                        var11 = 3.0971541;
                    } else {
                        var11 = 2.8315694;
                    }
                } else {
                    if (prod_1 != 1) {
                        var11 = 2.7976046;
                    } else {
                        var11 = 2.6099966;
                    }
                }
            }
        } else {
            if (hops >= 3) {
                if (prod_1 != 1) {
                    var11 = 3.2085001;
                } else {
                    var11 = 4.4250393;
                }
            } else {
                if (rel_timestamp >= 74288) {
                    var11 = 3.6309395;
                } else {
                    var11 = 2.9492626;
                }
            }
        }
    }
    float var12;
    if (size >= 109) {
        if (hops >= 4) {
            if (rel_timestamp >= 31297) {
                var12 = 2.6986878;
            } else {
                var12 = 4.2755785;
            }
        } else {
            if (hops >= 2) {
                if (rel_timestamp >= 31283) {
                    var12 = 2.3649092;
                } else {
                    var12 = 3.0822856;
                }
            } else {
                var12 = 2.193841;
            }
        }
    } else {
        if (hops >= 2) {
            if (rel_timestamp >= 99289) {
                if (prod_0 != 1) {
                    if (hops >= 4) {
                        var12 = 2.5097647;
                    } else {
                        var12 = 2.1737814;
                    }
                } else {
                    if (hops >= 4) {
                        var12 = 2.1724284;
                    } else {
                        var12 = 1.982603;
                    }
                }
            } else {
                if (hops >= 4) {
                    var12 = 3.4875093;
                } else {
                    if (prod_1 != 1) {
                        var12 = 2.2151291;
                    } else {
                        var12 = 2.717554;
                    }
                }
            }
        } else {
            if (prod_2 != 1) {
                var12 = 1.8445374;
            } else {
                if (rel_timestamp >= 67111) {
                    var12 = 1.9786807;
                } else {
                    var12 = 1.4712598;
                }
            }
        }
    }
    float var13;
    if (size >= 109) {
        if (hops >= 4) {
            if (rel_timestamp >= 31297) {
                var13 = 1.893794;
            } else {
                var13 = 3.1211739;
            }
        } else {
            if (rel_timestamp >= 31275) {
                if (hops >= 2) {
                    if (rel_timestamp >= 1139284) {
                        var13 = 1.8423495;
                    } else {
                        var13 = 1.6361477;
                    }
                } else {
                    var13 = 1.5278924;
                }
            } else {
                if (hops >= 2) {
                    var13 = 2.1786187;
                } else {
                    var13 = 1.657684;
                }
            }
        }
    } else {
        if (rel_timestamp >= 99285) {
            if (hops >= 2) {
                if (prod_0 != 1) {
                    if (hops >= 3) {
                        var13 = 1.6293899;
                    } else {
                        var13 = 1.4732475;
                    }
                } else {
                    if (hops >= 4) {
                        var13 = 1.5238045;
                    } else {
                        var13 = 1.388169;
                    }
                }
            } else {
                if (prod_2 != 1) {
                    var13 = 1.275394;
                } else {
                    var13 = 1.3781328;
                }
            }
        } else {
            if (prod_1 != 1) {
                if (hops >= 2) {
                    var13 = 1.5745255;
                } else {
                    var13 = 1.0996317;
                }
            } else {
                if (hops >= 4) {
                    var13 = 2.8196666;
                } else {
                    if (rel_timestamp >= 60934) {
                        var13 = 1.8467448;
                    } else {
                        var13 = 1.1494404;
                    }
                }
            }
        }
    }
    float var14;
    if (size >= 109) {
        if (rel_timestamp >= 31275) {
            if (hops >= 4) {
                var14 = 1.3289573;
            } else {
                if (hops >= 2) {
                    if (rel_timestamp >= 1202607) {
                        var14 = 1.3598753;
                    } else {
                        var14 = 1.1486889;
                    }
                } else {
                    if (rel_timestamp >= 157533) {
                        var14 = 1.0512419;
                    } else {
                        var14 = 1.2152078;
                    }
                }
            }
        } else {
            if (hops >= 3) {
                var14 = 2.0115967;
            } else {
                var14 = 1.2725899;
            }
        }
    } else {
        if (rel_timestamp >= 99285) {
            if (hops >= 4) {
                if (prod_0 != 1) {
                    var14 = 1.2788143;
                } else {
                    var14 = 1.0688401;
                }
            } else {
                if (prod_0 != 1) {
                    if (hops >= 2) {
                        var14 = 1.060986;
                    } else {
                        var14 = 0.9754378;
                    }
                } else {
                    if (hops >= 2) {
                        var14 = 0.9719575;
                    } else {
                        var14 = 0.9237557;
                    }
                }
            }
        } else {
            if (hops >= 3) {
                if (prod_1 != 1) {
                    var14 = 1.1170052;
                } else {
                    if (hops >= 4) {
                        var14 = 2.038843;
                    } else {
                        var14 = 1.4757153;
                    }
                }
            } else {
                if (rel_timestamp >= 74288) {
                    var14 = 1.3315711;
                } else {
                    var14 = 1.0065063;
                }
            }
        }
    }
    float var15;
    if (size >= 109) {
        if (rel_timestamp >= 62559) {
            if (hops >= 2) {
                if (hops >= 4) {
                    var15 = 0.9325815;
                } else {
                    if (rel_timestamp >= 1202607) {
                        var15 = 0.96186644;
                    } else {
                        var15 = 0.8045273;
                    }
                }
            } else {
                var15 = 0.74007237;
            }
        } else {
            if (hops >= 3) {
                if (hops >= 4) {
                    var15 = 1.7353309;
                } else {
                    var15 = 1.1683077;
                }
            } else {
                if (rel_timestamp >= 62552) {
                    var15 = 1.2020336;
                } else {
                    if (hops >= 2) {
                        var15 = 0.99752134;
                    } else {
                        var15 = 0.75643456;
                    }
                }
            }
        }
    } else {
        if (rel_timestamp >= 99285) {
            if (hops >= 4) {
                if (prod_0 != 1) {
                    var15 = 0.8985078;
                } else {
                    var15 = 0.74971277;
                }
            } else {
                if (prod_0 != 1) {
                    if (hops >= 3) {
                        var15 = 0.77967715;
                    } else {
                        var15 = 0.69697;
                    }
                } else {
                    if (hops >= 2) {
                        var15 = 0.68053246;
                    } else {
                        var15 = 0.64681005;
                    }
                }
            }
        } else {
            if (hops >= 2) {
                if (rel_timestamp >= 60941) {
                    if (prod_1 != 1) {
                        var15 = 0.80044067;
                    } else {
                        var15 = 1.1417546;
                    }
                } else {
                    var15 = 0.58982706;
                }
            } else {
                if (prod_1 != 1) {
                    if (rel_timestamp >= 67103) {
                        var15 = 0.49604574;
                    } else {
                        var15 = 0.16456299;
                    }
                } else {
                    if (rel_timestamp >= 60935) {
                        var15 = 0.8593039;
                    } else {
                        var15 = 0.60453755;
                    }
                }
            }
        }
    }
    float var16;
    if (size >= 109) {
        if (rel_timestamp >= 31275) {
            if (rel_timestamp >= 1202348) {
                var16 = 0.7384889;
            } else {
                if (hops >= 4) {
                    var16 = 0.63921535;
                } else {
                    if (hops >= 2) {
                        var16 = 0.5633754;
                    } else {
                        var16 = 0.52270573;
                    }
                }
            }
        } else {
            if (hops >= 4) {
                var16 = 1.2667859;
            } else {
                if (hops >= 2) {
                    var16 = 0.775093;
                } else {
                    var16 = 0.58004904;
                }
            }
        }
    } else {
        if (rel_timestamp >= 99285) {
            if (hops >= 4) {
                if (prod_0 != 1) {
                    var16 = 0.6313021;
                } else {
                    var16 = 0.52587533;
                }
            } else {
                if (prod_2 != 1) {
                    if (hops >= 3) {
                        var16 = 0.3652888;
                    } else {
                        var16 = 0.4690877;
                    }
                } else {
                    if (hops >= 3) {
                        var16 = 0.52945924;
                    } else {
                        var16 = 0.48069337;
                    }
                }
            }
        } else {
            if (hops >= 4) {
                if (prod_1 != 1) {
                    var16 = 0.51589966;
                } else {
                    var16 = 1.1580604;
                }
            } else {
                if (prod_1 != 1) {
                    if (hops >= 2) {
                        var16 = 0.5591737;
                    } else {
                        var16 = 0.3434683;
                    }
                } else {
                    if (rel_timestamp >= 60935) {
                        var16 = 0.6522652;
                    } else {
                        var16 = 0.43180805;
                    }
                }
            }
        }
    }
    float var17;
    if (rel_timestamp >= 62559) {
        if (hops >= 2) {
            if (prod_1 != 1) {
                if (rel_timestamp >= 130351) {
                    if (hops >= 3) {
                        var17 = 0.34797654;
                    } else {
                        var17 = 0.30423903;
                    }
                } else {
                    if (rel_timestamp >= 67111) {
                        var17 = 0.42919353;
                    } else {
                        var17 = 0.22504121;
                    }
                }
            } else {
                if (hops >= 4) {
                    if (prod_2 != 1) {
                        var17 = 0.3965749;
                    } else {
                        var17 = 0.45930052;
                    }
                } else {
                    if (prod_2 != 1) {
                        var17 = 0.34415612;
                    } else {
                        var17 = 0.3898772;
                    }
                }
            }
        } else {
            if (prod_2 != 1) {
                if (rel_timestamp >= 1200714) {
                    if (rel_timestamp >= 1264988) {
                        var17 = 0.078099065;
                    } else {
                        var17 = 0.37171838;
                    }
                } else {
                    if (rel_timestamp >= 1137514) {
                        var17 = 0.16618258;
                    } else {
                        var17 = 0.27939296;
                    }
                }
            } else {
                if (rel_timestamp >= 1204698) {
                    if (prod_0 != 1) {
                        var17 = 0.40057766;
                    } else {
                        var17 = 0.17827845;
                    }
                } else {
                    if (prod_0 != 1) {
                        var17 = 0.32360455;
                    } else {
                        var17 = 0.35686532;
                    }
                }
            }
        }
    } else {
        if (hops >= 4) {
            var17 = 1.0331944;
        } else {
            if (rel_timestamp >= 62552) {
                var17 = 0.7150506;
            } else {
                if (hops >= 3) {
                    var17 = 0.6021307;
                } else {
                    if (rel_timestamp >= 60938) {
                        var17 = 0.30781108;
                    } else {
                        var17 = 0.44126466;
                    }
                }
            }
        }
    }
    float var18;
    if (rel_timestamp >= 99285) {
        if (size >= 109) {
            if (rel_timestamp >= 1202348) {
                if (rel_timestamp >= 1202881) {
                    if (rel_timestamp >= 1203159) {
                        var18 = 0.228154;
                    } else {
                        var18 = 0.6160419;
                    }
                } else {
                    if (rel_timestamp >= 1202751) {
                        var18 = 0.17041495;
                    } else {
                        var18 = 0.42325774;
                    }
                }
            } else {
                if (hops >= 2) {
                    if (rel_timestamp >= 125900) {
                        var18 = 0.28841102;
                    } else {
                        var18 = 0.06489674;
                    }
                } else {
                    if (rel_timestamp >= 157533) {
                        var18 = 0.24846584;
                    } else {
                        var18 = 0.3094445;
                    }
                }
            }
        } else {
            if (hops >= 2) {
                if (prod_0 != 1) {
                    if (hops >= 3) {
                        var18 = 0.28013933;
                    } else {
                        var18 = 0.24509953;
                    }
                } else {
                    if (hops >= 3) {
                        var18 = 0.21583365;
                    } else {
                        var18 = 0.25650546;
                    }
                }
            } else {
                if (prod_2 != 1) {
                    if (rel_timestamp >= 1200714) {
                        var18 = 0.25419268;
                    } else {
                        var18 = 0.19180058;
                    }
                } else {
                    if (rel_timestamp >= 200668) {
                        var18 = 0.24130867;
                    } else {
                        var18 = 0.1615199;
                    }
                }
            }
        }
    } else {
        if (hops >= 4) {
            if (rel_timestamp >= 61775) {
                var18 = 0.38376203;
            } else {
                var18 = 0.742606;
            }
        } else {
            if (prod_1 != 1) {
                if (hops >= 2) {
                    if (rel_timestamp >= 67112) {
                        var18 = 0.30504724;
                    } else {
                        var18 = 0.19273813;
                    }
                } else {
                    if (rel_timestamp >= 67105) {
                        var18 = 0.15758172;
                    } else {
                        var18 = 0.055822756;
                    }
                }
            } else {
                if (hops >= 3) {
                    var18 = 0.4032057;
                } else {
                    if (rel_timestamp >= 74315) {
                        var18 = 0.55605286;
                    } else {
                        var18 = 0.2956047;
                    }
                }
            }
        }
    }
    float var19;
    if (rel_timestamp >= 62559) {
        if (hops >= 4) {
            if (prod_1 != 1) {
                if (rel_timestamp >= 1207328) {
                    var19 = 0.3152239;
                } else {
                    if (rel_timestamp >= 1017050) {
                        var19 = 0.07290116;
                    } else {
                        var19 = 0.16743232;
                    }
                }
            } else {
                if (rel_timestamp >= 1139791) {
                    if (size >= 109) {
                        var19 = 0.4204651;
                    } else {
                        var19 = 0.24021903;
                    }
                } else {
                    if (rel_timestamp >= 1138710) {
                        var19 = 0.040680807;
                    } else {
                        var19 = 0.22241847;
                    }
                }
            }
        } else {
            if (size >= 109) {
                if (rel_timestamp >= 1139284) {
                    if (hops >= 3) {
                        var19 = 0.16206555;
                    } else {
                        var19 = 0.28145894;
                    }
                } else {
                    if (rel_timestamp >= 1139141) {
                        var19 = -0.017372131;
                    } else {
                        var19 = 0.18513615;
                    }
                }
            } else {
                if (hops >= 2) {
                    if (rel_timestamp >= 124282) {
                        var19 = 0.16755742;
                    } else {
                        var19 = 0.26222774;
                    }
                } else {
                    if (rel_timestamp >= 187561) {
                        var19 = 0.15861721;
                    } else {
                        var19 = 0.113618426;
                    }
                }
            }
        }
    } else {
        if (hops >= 4) {
            var19 = 0.5337456;
        } else {
            if (rel_timestamp >= 62552) {
                var19 = 0.42969903;
            } else {
                if (hops >= 3) {
                    if (rel_timestamp >= 60949) {
                        var19 = 0.5162506;
                    } else {
                        var19 = 0.25435117;
                    }
                } else {
                    if (rel_timestamp >= 60938) {
                        var19 = 0.13034238;
                    } else {
                        var19 = 0.22228694;
                    }
                }
            }
        }
    }
    float var20;
    if (rel_timestamp >= 124243) {
        if (size >= 109) {
            if (rel_timestamp >= 1202879) {
                if (rel_timestamp >= 1203159) {
                    if (rel_timestamp >= 1203176) {
                        var20 = 0.2548096;
                    } else {
                        var20 = -0.06025391;
                    }
                } else {
                    var20 = 0.34042513;
                }
            } else {
                if (rel_timestamp >= 125871) {
                    if (rel_timestamp >= 125884) {
                        var20 = 0.13275842;
                    } else {
                        var20 = 0.32273096;
                    }
                } else {
                    var20 = 0.041036323;
                }
            }
        } else {
            if (rel_timestamp >= 1010756) {
                if (rel_timestamp >= 1010978) {
                    if (rel_timestamp >= 1207688) {
                        var20 = 0.13693073;
                    } else {
                        var20 = 0.095693156;
                    }
                } else {
                    if (hops >= 4) {
                        var20 = 0.074110635;
                    } else {
                        var20 = -0.038907986;
                    }
                }
            } else {
                if (rel_timestamp >= 947426) {
                    if (rel_timestamp >= 1010751) {
                        var20 = 0.38463748;
                    } else {
                        var20 = 0.165371;
                    }
                } else {
                    if (rel_timestamp >= 890723) {
                        var20 = 0.03641256;
                    } else {
                        var20 = 0.11849075;
                    }
                }
            }
        }
    } else {
        if (hops >= 4) {
            if (rel_timestamp >= 61775) {
                if (rel_timestamp >= 74320) {
                    if (rel_timestamp >= 74327) {
                        var20 = 0.0903534;
                    } else {
                        var20 = 0.3903534;
                    }
                } else {
                    if (rel_timestamp >= 67129) {
                        var20 = 0.10903146;
                    } else {
                        var20 = 0.21381931;
                    }
                }
            } else {
                if (rel_timestamp >= 60955) {
                    var20 = 0.5175476;
                } else {
                    if (rel_timestamp >= 30477) {
                        var20 = 0.010528564;
                    } else {
                        var20 = 0.30117005;
                    }
                }
            }
        } else {
            if (rel_timestamp >= 74300) {
                if (hops >= 2) {
                    if (hops >= 3) {
                        var20 = 0.17231447;
                    } else {
                        var20 = 0.3241458;
                    }
                } else {
                    if (rel_timestamp >= 124242) {
                        var20 = 0.36294433;
                    } else {
                        var20 = 0.09956818;
                    }
                }
            } else {
                if (rel_timestamp >= 62566) {
                    if (rel_timestamp >= 62572) {
                        var20 = 0.11165368;
                    } else {
                        var20 = -0.0692971;
                    }
                } else {
                    if (rel_timestamp >= 62552) {
                        var20 = 0.23078023;
                    } else {
                        var20 = 0.15232477;
                    }
                }
            }
        }
    }
    float var21;
    if (hops >= 4) {
        if (rel_timestamp >= 61775) {
            if (rel_timestamp >= 1277414) {
                if (rel_timestamp >= 1277561) {
                    var21 = 0.10755616;
                } else {
                    var21 = 0.38633424;
                }
            } else {
                if (prod_1 != 1) {
                    if (rel_timestamp >= 1207328) {
                        var21 = 0.20072283;
                    } else {
                        var21 = 0.07267071;
                    }
                } else {
                    if (rel_timestamp >= 1264459) {
                        var21 = -0.08327332;
                    } else {
                        var21 = 0.1221569;
                    }
                }
            }
        } else {
            if (rel_timestamp >= 60955) {
                var21 = 0.3881531;
            } else {
                if (rel_timestamp >= 30477) {
                    var21 = 0.008953858;
                } else {
                    var21 = 0.21986024;
                }
            }
        }
    } else {
        if (rel_timestamp >= 260534) {
            if (prod_2 != 1) {
                if (hops >= 3) {
                    if (rel_timestamp >= 1200724) {
                        var21 = 0.05816693;
                    } else {
                        var21 = -0.011336069;
                    }
                } else {
                    if (hops >= 2) {
                        var21 = 0.1299474;
                    } else {
                        var21 = 0.049541686;
                    }
                }
            } else {
                if (hops >= 3) {
                    if (rel_timestamp >= 1139523) {
                        var21 = 0.04180285;
                    } else {
                        var21 = 0.11280995;
                    }
                } else {
                    if (rel_timestamp >= 264107) {
                        var21 = 0.081069134;
                    } else {
                        var21 = 0.01491276;
                    }
                }
            }
        } else {
            if (prod_1 != 1) {
                if (rel_timestamp >= 257035) {
                    var21 = 0.17852144;
                } else {
                    if (hops >= 2) {
                        var21 = 0.09032333;
                    } else {
                        var21 = 0.044087812;
                    }
                }
            } else {
                if (rel_timestamp >= 252572) {
                    if (rel_timestamp >= 252599) {
                        var21 = 0.082944624;
                    } else {
                        var21 = 0.26339614;
                    }
                } else {
                    if (rel_timestamp >= 252542) {
                        var21 = -0.104400635;
                    } else {
                        var21 = 0.10729719;
                    }
                }
            }
        }
    }
    return 50 + (unsigned)(var0 + var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21);
}
