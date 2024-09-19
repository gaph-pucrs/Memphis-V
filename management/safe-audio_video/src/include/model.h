float score(float rel_timestamp, int hops, int size, bool prod_0, bool prod_1, bool prod_2, bool prod_3, bool prod_4, bool prod_6, bool cons_0, bool cons_1, bool cons_2, bool cons_3, bool cons_4, bool cons_5) {
    float var0;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 2) {
                        var0 = 0.9137001;
                    } else {
                        if (hops < 3) {
                            var0 = 0.9362965;
                        } else {
                            var0 = 0.9597592;
                        }
                    }
                } else {
                    if (hops < 2) {
                        var0 = 0.68121743;
                    } else {
                        if (hops < 3) {
                            var0 = 0.7010718;
                        } else {
                            var0 = 0.7250962;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.44148) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var0 = 2.0520105;
                        } else {
                            var0 = 2.1054044;
                        }
                    } else {
                        var0 = 2.1825333;
                    }
                } else {
                    if (hops < 4) {
                        var0 = 2.2940402;
                    } else {
                        var0 = 2.400619;
                    }
                }
            }
        } else {
            if (hops < 2) {
                var0 = 0.6298662;
            } else {
                if (hops < 3) {
                    var0 = 0.65088505;
                } else {
                    if (hops < 4) {
                        var0 = 0.6718538;
                    } else {
                        var0 = 0.6928003;
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (size < 77) {
                if (prod_0 != 1) {
                    if (rel_timestamp < 1.34281) {
                        if (rel_timestamp < 0.41619) {
                            var0 = 1.2977107;
                        } else {
                            var0 = 1.3516043;
                        }
                    } else {
                        if (hops < 2) {
                            var0 = 1.3788569;
                        } else {
                            var0 = 1.4081638;
                        }
                    }
                } else {
                    if (rel_timestamp < 0.66052) {
                        if (hops < 2) {
                            var0 = 1.5675308;
                        } else {
                            var0 = 1.5979745;
                        }
                    } else {
                        if (hops < 2) {
                            var0 = 1.3240101;
                        } else {
                            var0 = 1.3538172;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 0.66071) {
                    if (hops < 2) {
                        var0 = 1.6639472;
                    } else {
                        var0 = 1.6910721;
                    }
                } else {
                    if (prod_4 != 1) {
                        if (hops < 3) {
                            var0 = 1.4335403;
                        } else {
                            var0 = 1.4683088;
                        }
                    } else {
                        if (rel_timestamp < 0.72426) {
                            var0 = 1.7006215;
                        } else {
                            var0 = 1.403203;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 2) {
                    var0 = 1.8529431;
                } else {
                    var0 = 1.882089;
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        var0 = 1.6217209;
                    } else {
                        var0 = 1.6416272;
                    }
                } else {
                    if (hops < 4) {
                        var0 = 1.6627182;
                    } else {
                        var0 = 1.6845565;
                    }
                }
            }
        }
    }
    float var1;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 2) {
                        var1 = 0.6396124;
                    } else {
                        if (hops < 3) {
                            var1 = 0.6554317;
                        } else {
                            var1 = 0.6718769;
                        }
                    }
                } else {
                    if (hops < 2) {
                        var1 = 0.47686055;
                    } else {
                        if (hops < 3) {
                            var1 = 0.49075934;
                        } else {
                            var1 = 0.5075846;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.44148) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var1 = 1.4365145;
                        } else {
                            var1 = 1.4738795;
                        }
                    } else {
                        var1 = 1.5278364;
                    }
                } else {
                    if (hops < 4) {
                        var1 = 1.6059297;
                    } else {
                        var1 = 1.681302;
                    }
                }
            }
        } else {
            if (hops < 2) {
                var1 = 0.44090727;
            } else {
                if (hops < 3) {
                    var1 = 0.45562056;
                } else {
                    if (hops < 4) {
                        var1 = 0.4702999;
                    } else {
                        var1 = 0.48497587;
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (size < 77) {
                if (hops < 3) {
                    if (prod_0 != 1) {
                        if (rel_timestamp < 1.34281) {
                            var1 = 0.92617905;
                        } else {
                            var1 = 0.9710828;
                        }
                    } else {
                        if (rel_timestamp < 0.66052) {
                            var1 = 1.1040173;
                        } else {
                            var1 = 0.9330011;
                        }
                    }
                } else {
                    if (prod_0 != 1) {
                        if (rel_timestamp < 1.34281) {
                            var1 = 0.9613496;
                        } else {
                            var1 = 1.0011692;
                        }
                    } else {
                        if (rel_timestamp < 0.66052) {
                            var1 = 1.1325661;
                        } else {
                            var1 = 0.96276385;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 0.66071) {
                    if (hops < 3) {
                        var1 = 1.1707932;
                    } else {
                        var1 = 1.2000093;
                    }
                } else {
                    if (hops < 2) {
                        if (prod_4 != 1) {
                            var1 = 0.9935617;
                        } else {
                            var1 = 0.9650964;
                        }
                    } else {
                        if (prod_4 != 1) {
                            var1 = 1.0187862;
                        } else {
                            var1 = 0.9959706;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 3) {
                    var1 = 1.3028517;
                } else {
                    var1 = 1.3328602;
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        var1 = 1.1352067;
                    } else {
                        var1 = 1.1491412;
                    }
                } else {
                    if (hops < 4) {
                        var1 = 1.1639074;
                    } else {
                        var1 = 1.1792188;
                    }
                }
            }
        }
    }
    float var2;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 2) {
                        var2 = 0.44774428;
                    } else {
                        if (hops < 3) {
                            var2 = 0.4588191;
                        } else {
                            var2 = 0.47034568;
                        }
                    }
                } else {
                    if (hops < 3) {
                        if (hops < 2) {
                            var2 = 0.33380818;
                        } else {
                            var2 = 0.3435378;
                        }
                    } else {
                        if (hops < 4) {
                            var2 = 0.35253623;
                        } else {
                            var2 = 0.37358975;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.44148) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var2 = 1.0056351;
                        } else {
                            var2 = 1.0317833;
                        }
                    } else {
                        var2 = 1.0695297;
                    }
                } else {
                    if (hops < 3) {
                        var2 = 1.0901929;
                    } else {
                        if (hops < 4) {
                            var2 = 1.1320891;
                        } else {
                            var2 = 1.1775197;
                        }
                    }
                }
            }
        } else {
            if (hops < 2) {
                var2 = 0.30863577;
            } else {
                if (hops < 3) {
                    var2 = 0.31893516;
                } else {
                    if (hops < 4) {
                        var2 = 0.32921153;
                    } else {
                        var2 = 0.3394941;
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (size < 77) {
                if (hops < 2) {
                    if (prod_0 != 1) {
                        if (rel_timestamp < 0.34003) {
                            var2 = 0.6124933;
                        } else {
                            var2 = 0.67150927;
                        }
                    } else {
                        if (rel_timestamp < 0.66052) {
                            var2 = 0.76613235;
                        } else {
                            var2 = 0.6469097;
                        }
                    }
                } else {
                    if (prod_0 != 1) {
                        if (rel_timestamp < 0.41619) {
                            var2 = 0.63914394;
                        } else {
                            var2 = 0.6896181;
                        }
                    } else {
                        if (rel_timestamp < 0.66052) {
                            var2 = 0.7843994;
                        } else {
                            var2 = 0.6646227;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 0.66071) {
                    if (hops < 2) {
                        var2 = 0.8135957;
                    } else {
                        var2 = 0.8301631;
                    }
                } else {
                    if (hops < 3) {
                        if (prod_4 != 1) {
                            var2 = 0.701699;
                        } else {
                            var2 = 0.68154883;
                        }
                    } else {
                        if (rel_timestamp < 0.72426) {
                            var2 = 0.8435717;
                        } else {
                            var2 = 0.71848917;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 3) {
                    var2 = 0.91201264;
                } else {
                    var2 = 0.93306375;
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        var2 = 0.79464614;
                    } else {
                        var2 = 0.8044003;
                    }
                } else {
                    if (hops < 4) {
                        var2 = 0.8147384;
                    } else {
                        var2 = 0.8254736;
                    }
                }
            }
        }
    }
    float var3;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 2) {
                        var3 = 0.31343192;
                    } else {
                        if (hops < 4) {
                            var3 = 0.3229865;
                        } else {
                            var3 = 0.34561485;
                        }
                    }
                } else {
                    if (hops < 3) {
                        if (hops < 2) {
                            var3 = 0.23366982;
                        } else {
                            var3 = 0.24048091;
                        }
                    } else {
                        if (hops < 4) {
                            var3 = 0.246785;
                        } else {
                            var3 = 0.26158047;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.44148) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var3 = 0.7039971;
                        } else {
                            var3 = 0.7222958;
                        }
                    } else {
                        var3 = 0.74870175;
                    }
                } else {
                    if (hops < 3) {
                        var3 = 0.7633866;
                    } else {
                        if (hops < 4) {
                            var3 = 0.7925244;
                        } else {
                            var3 = 0.8246899;
                        }
                    }
                }
            }
        } else {
            if (hops < 2) {
                var3 = 0.21604553;
            } else {
                if (hops < 3) {
                    var3 = 0.22325511;
                } else {
                    if (hops < 4) {
                        var3 = 0.2304492;
                    } else {
                        var3 = 0.23765361;
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (size < 77) {
                if (hops < 3) {
                    if (prod_0 != 1) {
                        if (rel_timestamp < 1.34281) {
                            var3 = 0.44972146;
                        } else {
                            var3 = 0.47566265;
                        }
                    } else {
                        if (rel_timestamp < 0.66052) {
                            var3 = 0.5403102;
                        } else {
                            var3 = 0.45642447;
                        }
                    }
                } else {
                    if (hops < 4) {
                        if (prod_0 != 1) {
                            var3 = 0.48783493;
                        } else {
                            var3 = 0.47580773;
                        }
                    } else {
                        if (prod_0 != 1) {
                            var3 = 0.50850374;
                        } else {
                            var3 = 0.49735585;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 0.66071) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var3 = 0.5695372;
                        } else {
                            var3 = 0.5772945;
                        }
                    } else {
                        var3 = 0.5911099;
                    }
                } else {
                    if (hops < 2) {
                        if (prod_4 != 1) {
                            var3 = 0.48498455;
                        } else {
                            var3 = 0.47110492;
                        }
                    } else {
                        if (prod_4 != 1) {
                            var3 = 0.50080335;
                        } else {
                            var3 = 0.48849323;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 2) {
                    var3 = 0.6327012;
                } else {
                    if (hops < 4) {
                        var3 = 0.6462602;
                    } else {
                        var3 = 0.67154825;
                    }
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        var3 = 0.55625325;
                    } else {
                        var3 = 0.56308126;
                    }
                } else {
                    if (hops < 4) {
                        var3 = 0.5703192;
                    } else {
                        var3 = 0.5778458;
                    }
                }
            }
        }
    }
    float var4;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var4 = 0.21940994;
                        } else {
                            var4 = 0.22429751;
                        }
                    } else {
                        if (hops < 4) {
                            var4 = 0.22986108;
                        } else {
                            var4 = 0.24205545;
                        }
                    }
                } else {
                    if (hops < 3) {
                        if (hops < 2) {
                            var4 = 0.16357175;
                        } else {
                            var4 = 0.16833973;
                        }
                    } else {
                        if (hops < 4) {
                            var4 = 0.17275624;
                        } else {
                            var4 = 0.18315366;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.44148) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var4 = 0.4928347;
                        } else {
                            var4 = 0.5056402;
                        }
                    } else {
                        var4 = 0.524113;
                    }
                } else {
                    if (hops < 3) {
                        var4 = 0.53454673;
                    } else {
                        if (hops < 4) {
                            var4 = 0.55481046;
                        } else {
                            var4 = 0.57758135;
                        }
                    }
                }
            }
        } else {
            if (hops < 2) {
                var4 = 0.15123215;
            } else {
                if (hops < 3) {
                    var4 = 0.15627891;
                } else {
                    if (hops < 4) {
                        var4 = 0.16131523;
                    } else {
                        var4 = 0.16636285;
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (size < 77) {
                if (hops < 2) {
                    if (rel_timestamp < 0.34003) {
                        var4 = 0.29385477;
                    } else {
                        if (rel_timestamp < 0.66052) {
                            var4 = 0.3742317;
                        } else {
                            var4 = 0.32207063;
                        }
                    }
                } else {
                    if (hops < 3) {
                        if (prod_0 != 1) {
                            var4 = 0.3342253;
                        } else {
                            var4 = 0.3261848;
                        }
                    } else {
                        if (rel_timestamp < 0.66052) {
                            var4 = 0.36170104;
                        } else {
                            var4 = 0.33803734;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 0.66071) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var4 = 0.39869022;
                        } else {
                            var4 = 0.40412265;
                        }
                    } else {
                        var4 = 0.4138213;
                    }
                } else {
                    if (hops < 3) {
                        if (rel_timestamp < 1.42042) {
                            var4 = 0.32132357;
                        } else {
                            var4 = 0.3414619;
                        }
                    } else {
                        if (rel_timestamp < 0.72426) {
                            var4 = 0.44313923;
                        } else {
                            var4 = 0.35388398;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 2) {
                    var4 = 0.44290644;
                } else {
                    if (hops < 4) {
                        var4 = 0.4523934;
                    } else {
                        var4 = 0.47030488;
                    }
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        var4 = 0.38937798;
                    } else {
                        var4 = 0.39415765;
                    }
                } else {
                    if (hops < 4) {
                        var4 = 0.39922506;
                    } else {
                        var4 = 0.40450218;
                    }
                }
            }
        }
    }
    float var5;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var5 = 0.15359232;
                        } else {
                            var5 = 0.15701404;
                        }
                    } else {
                        if (hops < 4) {
                            var5 = 0.16091533;
                        } else {
                            var5 = 0.16952641;
                        }
                    }
                } else {
                    if (hops < 3) {
                        if (hops < 2) {
                            var5 = 0.11450219;
                        } else {
                            var5 = 0.117839985;
                        }
                    } else {
                        if (hops < 4) {
                            var5 = 0.12093409;
                        } else {
                            var5 = 0.12824075;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.44148) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var5 = 0.34501;
                        } else {
                            var5 = 0.3539714;
                        }
                    } else {
                        var5 = 0.36689425;
                    }
                } else {
                    if (hops < 3) {
                        var5 = 0.37430602;
                    } else {
                        if (hops < 4) {
                            var5 = 0.3883977;
                        } else {
                            var5 = 0.40451598;
                        }
                    }
                }
            }
        } else {
            if (hops < 2) {
                var5 = 0.10586273;
            } else {
                if (hops < 3) {
                    var5 = 0.10939552;
                } else {
                    if (hops < 4) {
                        var5 = 0.11292121;
                    } else {
                        var5 = 0.1164578;
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (size < 77) {
                if (rel_timestamp < 0.41619) {
                    if (hops < 3) {
                        if (rel_timestamp < 0.34003) {
                            var5 = 0.20547685;
                        } else {
                            var5 = 0.20924142;
                        }
                    } else {
                        if (hops < 4) {
                            var5 = 0.19876856;
                        } else {
                            var5 = 0.21251543;
                        }
                    }
                } else {
                    if (rel_timestamp < 0.66052) {
                        if (hops < 2) {
                            var5 = 0.26197135;
                        } else {
                            var5 = 0.29192054;
                        }
                    } else {
                        if (prod_0 != 1) {
                            var5 = 0.23557773;
                        } else {
                            var5 = 0.22380322;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 0.66071) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var5 = 0.27909306;
                        } else {
                            var5 = 0.2828973;
                        }
                    } else {
                        if (hops < 4) {
                            var5 = 0.28812125;
                        } else {
                            var5 = 0.3092728;
                        }
                    }
                } else {
                    if (hops < 2) {
                        if (rel_timestamp < 0.73772) {
                            var5 = 0.19886164;
                        } else {
                            var5 = 0.23492743;
                        }
                    } else {
                        if (hops < 4) {
                            var5 = 0.24306913;
                        } else {
                            var5 = 0.26671475;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 3) {
                    if (hops < 2) {
                        var5 = 0.31004542;
                    } else {
                        var5 = 0.3147979;
                    }
                } else {
                    var5 = 0.32182652;
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        var5 = 0.27256507;
                    } else {
                        var5 = 0.27591082;
                    }
                } else {
                    if (hops < 4) {
                        var5 = 0.2794586;
                    } else {
                        var5 = 0.28315845;
                    }
                }
            }
        }
    }
    float var6;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var6 = 0.107518375;
                        } else {
                            var6 = 0.10991383;
                        }
                    } else {
                        if (hops < 4) {
                            var6 = 0.112649485;
                        } else {
                            var6 = 0.11872985;
                        }
                    }
                } else {
                    if (hops < 3) {
                        if (rel_timestamp < 0.41635) {
                            var6 = 0.07955664;
                        } else {
                            var6 = 0.082283616;
                        }
                    } else {
                        if (hops < 4) {
                            var6 = 0.08465719;
                        } else {
                            var6 = 0.08979171;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.44148) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var6 = 0.2415251;
                        } else {
                            var6 = 0.24779621;
                        }
                    } else {
                        var6 = 0.2568366;
                    }
                } else {
                    if (hops < 3) {
                        var6 = 0.26210055;
                    } else {
                        if (hops < 4) {
                            var6 = 0.2718996;
                        } else {
                            var6 = 0.2833076;
                        }
                    }
                }
            }
        } else {
            if (hops < 2) {
                if (rel_timestamp < 2.16117) {
                    var6 = 0.0732609;
                } else {
                    var6 = 0.07415991;
                }
            } else {
                if (hops < 3) {
                    if (rel_timestamp < 2.80176) {
                        var6 = 0.07591053;
                    } else {
                        var6 = 0.076637365;
                    }
                } else {
                    if (hops < 4) {
                        var6 = 0.07904522;
                    } else {
                        var6 = 0.08152313;
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (prod_3 != 1) {
                if (rel_timestamp < 0.72426) {
                    if (rel_timestamp < 0.41619) {
                        if (hops < 3) {
                            var6 = 0.1445856;
                        } else {
                            var6 = 0.14042923;
                        }
                    } else {
                        if (rel_timestamp < 0.66071) {
                            var6 = 0.19669431;
                        } else {
                            var6 = 0.31609017;
                        }
                    }
                } else {
                    if (prod_2 != 1) {
                        if (hops < 3) {
                            var6 = 0.15891999;
                        } else {
                            var6 = 0.16787542;
                        }
                    } else {
                        if (hops < 2) {
                            var6 = 0.16484825;
                        } else {
                            var6 = 0.17230533;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.42042) {
                    if (rel_timestamp < 0.73772) {
                        if (hops < 3) {
                            var6 = 0.13354805;
                        } else {
                            var6 = 0.121218294;
                        }
                    } else {
                        if (hops < 2) {
                            var6 = 0.13354029;
                        } else {
                            var6 = 0.13870439;
                        }
                    }
                } else {
                    if (hops < 2) {
                        var6 = 0.1736446;
                    } else {
                        if (hops < 4) {
                            var6 = 0.17928028;
                        } else {
                            var6 = 0.19381243;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 3) {
                    if (hops < 2) {
                        var6 = 0.2170395;
                    } else {
                        var6 = 0.22036669;
                    }
                } else {
                    if (hops < 4) {
                        var6 = 0.22400805;
                    } else {
                        var6 = 0.2329263;
                    }
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        var6 = 0.19079593;
                    } else {
                        var6 = 0.19313794;
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 12.36219) {
                            var6 = 0.19543135;
                        } else {
                            var6 = 0.19901474;
                        }
                    } else {
                        var6 = 0.19821586;
                    }
                }
            }
        }
    }
    float var7;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var7 = 0.07526547;
                        } else {
                            var7 = 0.07694252;
                        }
                    } else {
                        if (hops < 4) {
                            var7 = 0.07886079;
                        } else {
                            var7 = 0.08315387;
                        }
                    }
                } else {
                    if (hops < 2) {
                        if (rel_timestamp < 0.83952) {
                            var7 = 0.055039342;
                        } else {
                            var7 = 0.05730223;
                        }
                    } else {
                        if (hops < 4) {
                            var7 = 0.05839767;
                        } else {
                            var7 = 0.062870435;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.44148) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var7 = 0.16908015;
                        } else {
                            var7 = 0.17346877;
                        }
                    } else {
                        var7 = 0.17979309;
                    }
                } else {
                    if (hops < 3) {
                        var7 = 0.18353084;
                    } else {
                        if (hops < 4) {
                            var7 = 0.1903446;
                        } else {
                            var7 = 0.19841787;
                        }
                    }
                }
            }
        } else {
            if (hops < 2) {
                if (rel_timestamp < 4.85131) {
                    var7 = 0.051604364;
                } else {
                    var7 = 0.051973257;
                }
            } else {
                if (hops < 3) {
                    if (rel_timestamp < 2.80176) {
                        var7 = 0.053138822;
                    } else {
                        var7 = 0.053646322;
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 4.20948) {
                            var7 = 0.054989714;
                        } else {
                            var7 = 0.05544513;
                        }
                    } else {
                        var7 = 0.057068016;
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (prod_0 != 1) {
                if (hops < 4) {
                    if (rel_timestamp < 2.08819) {
                        if (prod_4 != 1) {
                            var7 = 0.10598317;
                        } else {
                            var7 = 0.12494481;
                        }
                    } else {
                        if (prod_3 != 1) {
                            var7 = 0.11588908;
                        } else {
                            var7 = 0.12388906;
                        }
                    }
                } else {
                    if (rel_timestamp < 0.41619) {
                        var7 = 0.10676062;
                    } else {
                        if (rel_timestamp < 0.72426) {
                            var7 = 0.19154394;
                        } else {
                            var7 = 0.13322932;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 0.66052) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var7 = 0.12438291;
                        } else {
                            var7 = 0.1379257;
                        }
                    } else {
                        if (hops < 4) {
                            var7 = 0.15690544;
                        } else {
                            var7 = 0.1717242;
                        }
                    }
                } else {
                    if (hops < 2) {
                        if (rel_timestamp < 3.82177) {
                            var7 = 0.10502928;
                        } else {
                            var7 = 0.10427469;
                        }
                    } else {
                        if (hops < 4) {
                            var7 = 0.110377476;
                        } else {
                            var7 = 0.12510616;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 3) {
                    if (hops < 2) {
                        var7 = 0.15193298;
                    } else {
                        var7 = 0.15426245;
                    }
                } else {
                    if (hops < 4) {
                        var7 = 0.15681766;
                    } else {
                        var7 = 0.16312507;
                    }
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        if (rel_timestamp < 13.03252) {
                            var7 = 0.13348266;
                        } else {
                            var7 = 0.13499284;
                        }
                    } else {
                        if (rel_timestamp < 3.47064) {
                            var7 = 0.13577443;
                        } else {
                            var7 = 0.13498962;
                        }
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 12.36219) {
                            var7 = 0.13680257;
                        } else {
                            var7 = 0.13932103;
                        }
                    } else {
                        var7 = 0.13875452;
                    }
                }
            }
        }
    }
    float var8;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var8 = 0.052687686;
                        } else {
                            var8 = 0.053861767;
                        }
                    } else {
                        if (hops < 4) {
                            var8 = 0.05520687;
                        } else {
                            var8 = 0.058237772;
                        }
                    }
                } else {
                    if (hops < 2) {
                        if (rel_timestamp < 0.83952) {
                            var8 = 0.038528584;
                        } else {
                            var8 = 0.04011345;
                        }
                    } else {
                        if (rel_timestamp < 0.41635) {
                            var8 = 0.03899719;
                        } else {
                            var8 = 0.041363142;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.44148) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var8 = 0.11836489;
                        } else {
                            var8 = 0.12143614;
                        }
                    } else {
                        var8 = 0.12586042;
                    }
                } else {
                    if (hops < 3) {
                        var8 = 0.12851395;
                    } else {
                        if (hops < 4) {
                            var8 = 0.13325156;
                        } else {
                            var8 = 0.13896424;
                        }
                    }
                }
            }
        } else {
            if (hops < 2) {
                if (rel_timestamp < 2.80176) {
                    var8 = 0.035831112;
                } else {
                    if (rel_timestamp < 2.84424) {
                        var8 = 0.036722835;
                    } else {
                        if (rel_timestamp < 4.16828) {
                            var8 = 0.03586253;
                        } else {
                            var8 = 0.036373932;
                        }
                    }
                }
            } else {
                if (hops < 3) {
                    if (rel_timestamp < 2.11885) {
                        var8 = 0.036551297;
                    } else {
                        if (rel_timestamp < 4.20948) {
                            var8 = 0.037370466;
                        } else {
                            var8 = 0.037588138;
                        }
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 4.20948) {
                            var8 = 0.038493518;
                        } else {
                            var8 = 0.03881182;
                        }
                    } else {
                        var8 = 0.03994888;
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (hops < 2) {
                if (prod_0 != 1) {
                    if (prod_4 != 1) {
                        if (rel_timestamp < 1.42042) {
                            var8 = 0.0700298;
                        } else {
                            var8 = 0.081697844;
                        }
                    } else {
                        if (rel_timestamp < 0.72426) {
                            var8 = 0.10077416;
                        } else {
                            var8 = 0.07430503;
                        }
                    }
                } else {
                    if (rel_timestamp < 0.66052) {
                        var8 = 0.08707109;
                    } else {
                        if (rel_timestamp < 3.82177) {
                            var8 = 0.07352106;
                        } else {
                            var8 = 0.072992444;
                        }
                    }
                }
            } else {
                if (hops < 4) {
                    if (prod_0 != 1) {
                        if (rel_timestamp < 0.41619) {
                            var8 = 0.06844107;
                        } else {
                            var8 = 0.083953895;
                        }
                    } else {
                        if (rel_timestamp < 0.66052) {
                            var8 = 0.100819886;
                        } else {
                            var8 = 0.077264376;
                        }
                    }
                } else {
                    if (rel_timestamp < 0.72426) {
                        if (rel_timestamp < 0.41619) {
                            var8 = 0.07477134;
                        } else {
                            var8 = 0.12732092;
                        }
                    } else {
                        if (rel_timestamp < 1.42042) {
                            var8 = 0.08114079;
                        } else {
                            var8 = 0.092991054;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 3) {
                    if (hops < 2) {
                        var8 = 0.10635677;
                    } else {
                        var8 = 0.10798767;
                    }
                } else {
                    if (hops < 4) {
                        var8 = 0.109780855;
                    } else {
                        var8 = 0.11424129;
                    }
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        if (rel_timestamp < 13.03252) {
                            var8 = 0.093438104;
                        } else {
                            var8 = 0.094498485;
                        }
                    } else {
                        if (rel_timestamp < 2.78737) {
                            var8 = 0.095124416;
                        } else {
                            var8 = 0.09450782;
                        }
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 12.36219) {
                            var8 = 0.09576217;
                        } else {
                            var8 = 0.09753225;
                        }
                    } else {
                        var8 = 0.09713062;
                    }
                }
            }
        }
    }
    float var9;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var9 = 0.036882676;
                        } else {
                            var9 = 0.037704602;
                        }
                    } else {
                        if (hops < 4) {
                            var9 = 0.03864785;
                        } else {
                            var9 = 0.040787514;
                        }
                    }
                } else {
                    if (hops < 3) {
                        if (rel_timestamp < 0.83981) {
                            var9 = 0.02788932;
                        } else {
                            var9 = 0.025766369;
                        }
                    } else {
                        if (hops < 4) {
                            var9 = 0.029336758;
                        } else {
                            var9 = 0.031619184;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.44148) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var9 = 0.08286163;
                        } else {
                            var9 = 0.085010886;
                        }
                    } else {
                        var9 = 0.08810601;
                    }
                } else {
                    if (hops < 4) {
                        if (hops < 3) {
                            var9 = 0.08998945;
                        } else {
                            var9 = 0.09328336;
                        }
                    } else {
                        var9 = 0.097325124;
                    }
                }
            }
        } else {
            if (hops < 2) {
                if (rel_timestamp < 2.80176) {
                    var9 = 0.025082504;
                } else {
                    if (rel_timestamp < 2.84424) {
                        if (rel_timestamp < 2.80287) {
                            var9 = 0.025546594;
                        } else {
                            var9 = 0.026345622;
                        }
                    } else {
                        if (rel_timestamp < 3.48605) {
                            var9 = 0.025006428;
                        } else {
                            var9 = 0.02545629;
                        }
                    }
                }
            } else {
                if (hops < 3) {
                    if (rel_timestamp < 2.11885) {
                        var9 = 0.025590304;
                    } else {
                        if (rel_timestamp < 4.20948) {
                            var9 = 0.026159588;
                        } else {
                            var9 = 0.026311783;
                        }
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 2.11885) {
                            var9 = 0.025783274;
                        } else {
                            var9 = 0.027122762;
                        }
                    } else {
                        var9 = 0.0279651;
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (hops < 2) {
                if (prod_3 != 1) {
                    if (prod_2 != 1) {
                        if (rel_timestamp < 0.72426) {
                            var9 = 0.0597863;
                        } else {
                            var9 = 0.0526638;
                        }
                    } else {
                        if (rel_timestamp < 0.83952) {
                            var9 = 0.06792962;
                        } else {
                            var9 = 0.05599319;
                        }
                    }
                } else {
                    if (rel_timestamp < 1.42042) {
                        if (rel_timestamp < 0.73772) {
                            var9 = 0.043104984;
                        } else {
                            var9 = 0.04068202;
                        }
                    } else {
                        if (rel_timestamp < 2.08819) {
                            var9 = 0.06361985;
                        } else {
                            var9 = 0.05989073;
                        }
                    }
                }
            } else {
                if (prod_0 != 1) {
                    if (prod_4 != 1) {
                        if (rel_timestamp < 1.42042) {
                            var9 = 0.04857012;
                        } else {
                            var9 = 0.06119731;
                        }
                    } else {
                        if (rel_timestamp < 0.72426) {
                            var9 = 0.09124404;
                        } else {
                            var9 = 0.054222394;
                        }
                    }
                } else {
                    if (rel_timestamp < 0.66052) {
                        if (hops < 3) {
                            var9 = 0.06630812;
                        } else {
                            var9 = 0.079952285;
                        }
                    } else {
                        if (hops < 4) {
                            var9 = 0.054085154;
                        } else {
                            var9 = 0.0598681;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 3) {
                    if (rel_timestamp < 0.06265) {
                        var9 = 0.074489765;
                    } else {
                        var9 = 0.07575973;
                    }
                } else {
                    if (hops < 4) {
                        var9 = 0.076852515;
                    } else {
                        var9 = 0.08000657;
                    }
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        if (rel_timestamp < 12.34907) {
                            var9 = 0.065404885;
                        } else {
                            var9 = 0.06613573;
                        }
                    } else {
                        if (rel_timestamp < 13.03514) {
                            var9 = 0.06619819;
                        } else {
                            var9 = 0.067640826;
                        }
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 1.44106) {
                            var9 = 0.06798766;
                        } else {
                            var9 = 0.066994734;
                        }
                    } else {
                        var9 = 0.06799307;
                    }
                }
            }
        }
    }
    float var10;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var10 = 0.025818786;
                        } else {
                            var10 = 0.02639416;
                        }
                    } else {
                        if (hops < 4) {
                            var10 = 0.02705559;
                        } else {
                            var10 = 0.028566035;
                        }
                    }
                } else {
                    if (hops < 2) {
                        if (rel_timestamp < 0.83952) {
                            var10 = 0.018604493;
                        } else {
                            var10 = 0.019714888;
                        }
                    } else {
                        if (rel_timestamp < 0.41635) {
                            var10 = 0.018935153;
                        } else {
                            var10 = 0.020419847;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.44148) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var10 = 0.058007527;
                        } else {
                            var10 = 0.059511483;
                        }
                    } else {
                        var10 = 0.061676715;
                    }
                } else {
                    if (hops < 4) {
                        if (hops < 3) {
                            var10 = 0.06301332;
                        } else {
                            var10 = 0.06530351;
                        }
                    } else {
                        var10 = 0.06816275;
                    }
                }
            }
        } else {
            if (hops < 2) {
                if (rel_timestamp < 8.94784) {
                    if (rel_timestamp < 2.11885) {
                        var10 = 0.01695076;
                    } else {
                        if (rel_timestamp < 6.25841) {
                            var10 = 0.017787049;
                        } else {
                            var10 = 0.017659605;
                        }
                    }
                } else {
                    if (rel_timestamp < 11.72146) {
                        if (rel_timestamp < 11.68152) {
                            var10 = 0.017866524;
                        } else {
                            var10 = 0.018481487;
                        }
                    } else {
                        if (rel_timestamp < 12.36219) {
                            var10 = 0.015965424;
                        } else {
                            var10 = 0.017698862;
                        }
                    }
                }
            } else {
                if (hops < 3) {
                    if (rel_timestamp < 4.20948) {
                        if (rel_timestamp < 3.52734) {
                            var10 = 0.018372728;
                        } else {
                            var10 = 0.01804439;
                        }
                    } else {
                        if (rel_timestamp < 4.89252) {
                            var10 = 0.018844012;
                        } else {
                            var10 = 0.018379427;
                        }
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 4.20948) {
                            var10 = 0.018821433;
                        } else {
                            var10 = 0.019031724;
                        }
                    } else {
                        var10 = 0.019576212;
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (hops < 3) {
                if (prod_3 != 1) {
                    if (rel_timestamp < 0.83952) {
                        if (prod_1 != 1) {
                            var10 = 0.05058937;
                        } else {
                            var10 = 0.03355498;
                        }
                    } else {
                        if (prod_2 != 1) {
                            var10 = 0.03750962;
                        } else {
                            var10 = 0.040065195;
                        }
                    }
                } else {
                    if (rel_timestamp < 1.42042) {
                        if (hops < 2) {
                            var10 = 0.029327715;
                        } else {
                            var10 = 0.022898335;
                        }
                    } else {
                        if (hops < 2) {
                            var10 = 0.041948244;
                        } else {
                            var10 = 0.043639258;
                        }
                    }
                }
            } else {
                if (prod_0 != 1) {
                    if (rel_timestamp < 2.08819) {
                        if (prod_3 != 1) {
                            var10 = 0.042567525;
                        } else {
                            var10 = 0.017843356;
                        }
                    } else {
                        if (prod_4 != 1) {
                            var10 = 0.04551643;
                        } else {
                            var10 = 0.04059576;
                        }
                    }
                } else {
                    if (rel_timestamp < 0.66052) {
                        if (hops < 4) {
                            var10 = 0.0556204;
                        } else {
                            var10 = 0.058157522;
                        }
                    } else {
                        if (hops < 4) {
                            var10 = 0.037480883;
                        } else {
                            var10 = 0.0419087;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 2) {
                    var10 = 0.0520229;
                } else {
                    if (hops < 4) {
                        var10 = 0.053275835;
                    } else {
                        var10 = 0.056030937;
                    }
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        if (rel_timestamp < 0.73772) {
                            var10 = 0.046341352;
                        } else {
                            var10 = 0.045781024;
                        }
                    } else {
                        if (rel_timestamp < 4.838) {
                            var10 = 0.046627983;
                        } else {
                            var10 = 0.046223916;
                        }
                    }
                } else {
                    if (rel_timestamp < 12.36219) {
                        if (rel_timestamp < 2.11885) {
                            var10 = 0.047501866;
                        } else {
                            var10 = 0.0468892;
                        }
                    } else {
                        var10 = 0.048251916;
                    }
                }
            }
        }
    }
    float var11;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var11 = 0.01807377;
                        } else {
                            var11 = 0.018476602;
                        }
                    } else {
                        if (hops < 4) {
                            var11 = 0.018940415;
                        } else {
                            var11 = 0.020006536;
                        }
                    }
                } else {
                    if (hops < 3) {
                        if (rel_timestamp < 0.83981) {
                            var11 = 0.013674541;
                        } else {
                            var11 = 0.0119165825;
                        }
                    } else {
                        if (rel_timestamp < 0.52553) {
                            var11 = 0.013906873;
                        } else {
                            var11 = 0.0153359845;
                        }
                    }
                }
            } else {
                if (rel_timestamp < 1.44148) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var11 = 0.040608242;
                        } else {
                            var11 = 0.041660715;
                        }
                    } else {
                        var11 = 0.043175552;
                    }
                } else {
                    if (hops < 4) {
                        if (hops < 3) {
                            var11 = 0.0441238;
                        } else {
                            var11 = 0.045716085;
                        }
                    } else {
                        var11 = 0.047738533;
                    }
                }
            }
        } else {
            if (hops < 2) {
                if (rel_timestamp < 2.16117) {
                    var11 = 0.012216858;
                } else {
                    if (rel_timestamp < 4.85131) {
                        if (rel_timestamp < 2.84424) {
                            var11 = 0.01261852;
                        } else {
                            var11 = 0.012302059;
                        }
                    } else {
                        if (rel_timestamp < 5.57547) {
                            var11 = 0.012654072;
                        } else {
                            var11 = 0.012465707;
                        }
                    }
                }
            } else {
                if (hops < 3) {
                    if (rel_timestamp < 2.11885) {
                        var11 = 0.012406618;
                    } else {
                        if (rel_timestamp < 12.36456) {
                            var11 = 0.012883599;
                        } else {
                            var11 = 0.01261223;
                        }
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 2.11885) {
                            var11 = 0.0124223;
                        } else {
                            var11 = 0.013291987;
                        }
                    } else {
                        if (rel_timestamp < 11.72146) {
                            var11 = 0.013738549;
                        } else {
                            var11 = 0.013166024;
                        }
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (hops < 4) {
                if (prod_0 != 1) {
                    if (prod_4 != 1) {
                        if (rel_timestamp < 0.76457) {
                            var11 = 0.019289035;
                        } else {
                            var11 = 0.029069006;
                        }
                    } else {
                        if (rel_timestamp < 0.72426) {
                            var11 = 0.0442498;
                        } else {
                            var11 = 0.025558677;
                        }
                    }
                } else {
                    if (hops < 2) {
                        if (rel_timestamp < 0.66052) {
                            var11 = 0.027841907;
                        } else {
                            var11 = 0.024140662;
                        }
                    } else {
                        if (rel_timestamp < 0.66052) {
                            var11 = 0.033711836;
                        } else {
                            var11 = 0.026609583;
                        }
                    }
                }
            } else {
                if (prod_0 != 1) {
                    if (rel_timestamp < 0.66071) {
                        if (rel_timestamp < 0.41619) {
                            var11 = 0.025058953;
                        } else {
                            var11 = 0.0226852;
                        }
                    } else {
                        if (rel_timestamp < 0.72426) {
                            var11 = 0.07257977;
                        } else {
                            var11 = 0.03499049;
                        }
                    }
                } else {
                    if (rel_timestamp < 0.66052) {
                        var11 = 0.040730625;
                    } else {
                        if (rel_timestamp < 1.77851) {
                            var11 = 0.0319079;
                        } else {
                            var11 = 0.029032204;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 3) {
                    if (rel_timestamp < 0.06265) {
                        var11 = 0.036416396;
                    } else {
                        var11 = 0.037157156;
                    }
                } else {
                    if (hops < 4) {
                        var11 = 0.037820987;
                    } else {
                        var11 = 0.03924016;
                    }
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        if (rel_timestamp < 12.34907) {
                            var11 = 0.032039892;
                        } else {
                            var11 = 0.03256338;
                        }
                    } else {
                        if (rel_timestamp < 13.03514) {
                            var11 = 0.03242542;
                        } else {
                            var11 = 0.033485975;
                        }
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 12.36219) {
                            var11 = 0.032805193;
                        } else {
                            var11 = 0.033709966;
                        }
                    } else {
                        var11 = 0.033479776;
                    }
                }
            }
        }
    }
    float var12;
    if (size < 45) {
        if (rel_timestamp < 1.47775) {
            if (rel_timestamp < 0.95765) {
                if (rel_timestamp < 0.06265) {
                    if (hops < 3) {
                        if (hops < 2) {
                            var12 = 0.012652072;
                        } else {
                            var12 = 0.0129341325;
                        }
                    } else {
                        if (hops < 4) {
                            var12 = 0.013259313;
                        } else {
                            var12 = 0.014011851;
                        }
                    }
                } else {
                    if (hops < 2) {
                        if (rel_timestamp < 0.83952) {
                            var12 = 0.008921413;
                        } else {
                            var12 = 0.009699191;
                        }
                    } else {
                        if (hops < 4) {
                            var12 = 0.009896312;
                        } else {
                            var12 = 0.011633129;
                        }
                    }
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        if (rel_timestamp < 1.44106) {
                            var12 = 0.028427841;
                        } else {
                            var12 = 0.029164393;
                        }
                    } else {
                        var12 = 0.030283557;
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 1.44148) {
                            var12 = 0.03935899;
                        } else {
                            var12 = 0.032003704;
                        }
                    } else {
                        var12 = 0.033434387;
                    }
                }
            }
        } else {
            if (hops < 2) {
                if (rel_timestamp < 6.94135) {
                    if (rel_timestamp < 6.25841) {
                        if (rel_timestamp < 5.53435) {
                            var12 = 0.008664831;
                        } else {
                            var12 = 0.008885298;
                        }
                    } else {
                        if (rel_timestamp < 6.89909) {
                            var12 = 0.007906328;
                        } else {
                            var12 = 0.008429919;
                        }
                    }
                } else {
                    if (rel_timestamp < 11.72146) {
                        if (rel_timestamp < 11.68152) {
                            var12 = 0.008753022;
                        } else {
                            var12 = 0.009198622;
                        }
                    } else {
                        if (rel_timestamp < 12.36219) {
                            var12 = 0.0074496106;
                        } else {
                            var12 = 0.0086502945;
                        }
                    }
                }
            } else {
                if (hops < 3) {
                    if (rel_timestamp < 2.80176) {
                        if (rel_timestamp < 2.11885) {
                            var12 = 0.008686129;
                        } else {
                            var12 = 0.008885608;
                        }
                    } else {
                        if (rel_timestamp < 6.25841) {
                            var12 = 0.00908372;
                        } else {
                            var12 = 0.008985773;
                        }
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 8.26493) {
                            var12 = 0.009238708;
                        } else {
                            var12 = 0.009383516;
                        }
                    } else {
                        if (rel_timestamp < 4.20948) {
                            var12 = 0.009350991;
                        } else {
                            var12 = 0.009673015;
                        }
                    }
                }
            }
        }
    } else {
        if (size < 141) {
            if (hops < 3) {
                if (hops < 2) {
                    if (prod_3 != 1) {
                        if (prod_0 != 1) {
                            var12 = 0.018426482;
                        } else {
                            var12 = 0.017028099;
                        }
                    } else {
                        if (rel_timestamp < 1.42042) {
                            var12 = 0.013276323;
                        } else {
                            var12 = 0.020643162;
                        }
                    }
                } else {
                    if (prod_4 != 1) {
                        if (rel_timestamp < 0.73772) {
                            var12 = 0.015639257;
                        } else {
                            var12 = 0.020132788;
                        }
                    } else {
                        if (rel_timestamp < 0.72426) {
                            var12 = 0.03179234;
                        } else {
                            var12 = 0.017741332;
                        }
                    }
                }
            } else {
                if (hops < 4) {
                    if (prod_0 != 1) {
                        if (rel_timestamp < 2.08819) {
                            var12 = 0.017314903;
                        } else {
                            var12 = 0.021872139;
                        }
                    } else {
                        if (rel_timestamp < 0.66052) {
                            var12 = 0.02882562;
                        } else {
                            var12 = 0.01825399;
                        }
                    }
                } else {
                    if (prod_0 != 1) {
                        if (rel_timestamp < 0.66071) {
                            var12 = 0.01714154;
                        } else {
                            var12 = 0.024723569;
                        }
                    } else {
                        if (rel_timestamp < 0.66052) {
                            var12 = 0.028525723;
                        } else {
                            var12 = 0.020536907;
                        }
                    }
                }
            }
        } else {
            if (rel_timestamp < 0.33995) {
                if (hops < 3) {
                    if (hops < 2) {
                        if (rel_timestamp < 0.06265) {
                            var12 = 0.025299547;
                        } else {
                            var12 = 0.025941657;
                        }
                    } else {
                        var12 = 0.025978073;
                    }
                } else {
                    if (hops < 4) {
                        var12 = 0.02647677;
                    } else {
                        var12 = 0.027480977;
                    }
                }
            } else {
                if (hops < 3) {
                    if (hops < 2) {
                        if (rel_timestamp < 0.73772) {
                            var12 = 0.022828825;
                        } else {
                            var12 = 0.022426033;
                        }
                    } else {
                        if (rel_timestamp < 2.78737) {
                            var12 = 0.023013169;
                        } else {
                            var12 = 0.022645392;
                        }
                    }
                } else {
                    if (hops < 4) {
                        if (rel_timestamp < 1.44106) {
                            var12 = 0.023503305;
                        } else {
                            var12 = 0.022937685;
                        }
                    } else {
                        if (rel_timestamp < 11.67138) {
                            var12 = 0.02336223;
                        } else {
                            var12 = 0.023969445;
                        }
                    }
                }
            }
        }
    }
    return 0.5 + var0 + var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12;
}

