/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14049d014 */

uint FUN_14049d014(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  wint_t *pwVar2;
  short *psVar3;
  ushort *puVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  wint_t _C;
  uint uVar13;
  int local_a8;
  
  pwVar2 = (wint_t *)*param_2;
  uVar9 = (ulonglong)param_3;
  if (pwVar2 == (wint_t *)0x0) {
    puVar8 = (undefined4 *)FUN_14048fb3c();
    *puVar8 = 0x16;
    FUN_1404a1f20();
LAB_14049d091:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_1404a2100(0,0,0,0,0,param_1);
    goto LAB_14049d091;
  }
  _C = *pwVar2;
  *param_2 = (longlong)(pwVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_140484290();
  }
  while (iVar6 = iswctype(_C,8), iVar6 != 0) {
    _C = *(wint_t *)*param_2;
    *param_2 = (longlong)((wint_t *)*param_2 + 1);
  }
  uVar13 = param_4 & 0xff | 2;
  if (_C != 0x2d) {
    uVar13 = param_4 & 0xff;
  }
  if ((_C - 0x2b & 0xfffd) == 0) {
    _C = *(ushort *)*param_2;
    *param_2 = (longlong)((ushort *)*param_2 + 1);
  }
  local_a8 = 0xae6;
  if ((param_3 & 0xffffffef) != 0) goto LAB_14049d481;
  if (_C < 0x30) goto LAB_14049d3d2;
  iVar6 = 0x30;
  if (_C < 0x3a) {
LAB_14049d217:
    iVar6 = (uint)_C - iVar6;
LAB_14049d3cd:
    if (iVar6 == -1) goto LAB_14049d3d2;
LAB_14049d3f8:
    if (iVar6 != 0) goto LAB_14049d472;
    psVar3 = (short *)*param_2;
    sVar1 = *psVar3;
    *param_2 = (longlong)(psVar3 + 1);
    if ((sVar1 - 0x58U & 0xffdf) != 0) {
      *param_2 = (longlong)psVar3;
      uVar9 = 8;
      if (param_3 != 0) {
        uVar9 = (ulonglong)param_3;
      }
      if ((sVar1 != 0) && (*psVar3 != sVar1)) {
        puVar8 = (undefined4 *)FUN_14048fb3c();
        *puVar8 = 0x16;
        FUN_1404a1f20();
      }
      goto LAB_14049d481;
    }
    _C = psVar3[1];
    *param_2 = (longlong)(psVar3 + 2);
    uVar9 = 0x10;
  }
  else {
    if (_C < 0xff10) {
      if (0x65f < _C) {
        if (_C < 0x66a) {
          iVar6 = _C - 0x660;
          goto LAB_14049d3cd;
        }
        if (0x6ef < _C) {
          if (_C < 0x6fa) {
            iVar6 = _C - 0x6f0;
            goto LAB_14049d3cd;
          }
          if (0x965 < _C) {
            if (_C < 0x970) {
              iVar6 = _C - 0x966;
              goto LAB_14049d3cd;
            }
            if (0x9e5 < _C) {
              if (_C < 0x9f0) {
                iVar6 = _C - 0x9e6;
                goto LAB_14049d3cd;
              }
              if (0xa65 < _C) {
                if (_C < 0xa70) {
                  iVar6 = _C - 0xa66;
                  goto LAB_14049d3cd;
                }
                if ((0xae5 < _C) &&
                   ((iVar6 = local_a8, _C < 0xaf0 ||
                    ((iVar6 = 0xb66, 0xb65 < _C &&
                     ((_C < 0xb70 ||
                      ((iVar6 = 0xc66, 0xc65 < _C &&
                       ((_C < 0xc70 ||
                        ((iVar6 = 0xce6, 0xce5 < _C &&
                         ((_C < 0xcf0 ||
                          ((iVar6 = 0xd66, 0xd65 < _C &&
                           ((_C < 0xd70 ||
                            ((iVar6 = 0xe50, 0xe4f < _C &&
                             ((_C < 0xe5a ||
                              ((iVar6 = 0xed0, 0xecf < _C &&
                               ((_C < 0xeda ||
                                ((iVar6 = 0xf20, 0xf1f < _C &&
                                 ((_C < 0xf2a ||
                                  ((iVar6 = 0x1040, 0x103f < _C &&
                                   ((_C < 0x104a ||
                                    ((iVar6 = 0x17e0, 0x17df < _C &&
                                     ((_C < 0x17ea || (iVar6 = 0x1810, (ushort)(_C + 0xe7f0) < 10)))
                                     ))))))))))))))))))))))))))))))))))))) goto LAB_14049d217;
              }
            }
          }
        }
      }
    }
    else if (_C < 0xff1a) {
      iVar6 = _C - 0xff10;
      goto LAB_14049d3cd;
    }
LAB_14049d3d2:
    uVar10 = (uint)_C;
    if ((_C - 0x41 < 0x1a) || (_C - 0x61 < 0x1a)) {
      if (_C - 0x61 < 0x1a) {
        uVar10 = _C - 0x20;
      }
      iVar6 = uVar10 - 0x37;
      goto LAB_14049d3f8;
    }
LAB_14049d472:
    uVar9 = 10;
  }
  if (param_3 != 0) {
    uVar9 = (ulonglong)param_3;
  }
LAB_14049d481:
  uVar12 = 0xffffffff % uVar9;
  uVar10 = 0;
  do {
    if (_C < 0x30) goto LAB_14049d64e;
    if (_C < 0x3a) {
      uVar11 = _C - 0x30;
LAB_14049d649:
      if (uVar11 == 0xffffffff) goto LAB_14049d64e;
    }
    else {
      if (_C < 0xff10) {
        if (0x65f < _C) {
          if (_C < 0x66a) {
            uVar11 = _C - 0x660;
            goto LAB_14049d649;
          }
          if (0x6ef < _C) {
            if (_C < 0x6fa) {
              uVar11 = _C - 0x6f0;
              goto LAB_14049d649;
            }
            if (0x965 < _C) {
              iVar6 = 0x966;
              if (_C < 0x970) {
LAB_14049d515:
                uVar11 = (uint)_C - iVar6;
                goto LAB_14049d649;
              }
              if (0x9e5 < _C) {
                iVar6 = 0x9e6;
                if (_C < 0x9f0) goto LAB_14049d515;
                if (0xa65 < _C) {
                  iVar6 = 0xa66;
                  if (_C < 0xa70) goto LAB_14049d515;
                  if (0xae5 < _C) {
                    iVar6 = local_a8;
                    if (_C < 0xaf0) goto LAB_14049d515;
                    iVar6 = 0xb66;
                    if (0xb65 < _C) {
                      if (_C < 0xb70) goto LAB_14049d515;
                      iVar6 = 0xc66;
                      if (0xc65 < _C) {
                        if (_C < 0xc70) goto LAB_14049d515;
                        iVar6 = 0xce6;
                        if (0xce5 < _C) {
                          if (_C < 0xcf0) goto LAB_14049d515;
                          iVar6 = 0xd66;
                          if (0xd65 < _C) {
                            if (_C < 0xd70) goto LAB_14049d515;
                            iVar6 = 0xe50;
                            if (0xe4f < _C) {
                              if (_C < 0xe5a) goto LAB_14049d515;
                              iVar6 = 0xed0;
                              if (0xecf < _C) {
                                if (_C < 0xeda) goto LAB_14049d515;
                                iVar6 = 0xf20;
                                if (0xf1f < _C) {
                                  if (_C < 0xf2a) goto LAB_14049d515;
                                  iVar6 = 0x1040;
                                  if (0x103f < _C) {
                                    if (_C < 0x104a) goto LAB_14049d515;
                                    iVar6 = 0x17e0;
                                    if (0x17df < _C) {
                                      if (_C < 0x17ea) goto LAB_14049d515;
                                      uVar12 = 0x1810;
                                      if ((ushort)(_C + 0xe7f0) < 10) {
                                        uVar11 = _C - 0x1810;
                                        goto LAB_14049d649;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (_C < 0xff1a) {
        uVar11 = _C - 0xff10;
        goto LAB_14049d649;
      }
LAB_14049d64e:
      uVar11 = (uint)_C;
      if (((_C < 0x41) || (0x5a < _C)) && ((uVar11 < 0x61 || (0x7a < _C)))) {
        uVar11 = 0xffffffff;
      }
      else {
        if ((ushort)(_C - 0x61) < 0x1a) {
          uVar11 = uVar11 - 0x20;
        }
        uVar11 = uVar11 - 0x37;
      }
    }
    puVar4 = (ushort *)*param_2;
    if ((uint)uVar9 <= uVar11) break;
    _C = *puVar4;
    uVar7 = uVar10 * (uint)uVar9;
    uVar11 = uVar7 + uVar11;
    uVar12 = (ulonglong)uVar11;
    *param_2 = (longlong)(puVar4 + 1);
    uVar13 = uVar13 | (uint)(uVar11 < uVar7 || (uint)(0xffffffff / uVar9) < uVar10) << 2 | 8;
    uVar10 = uVar11;
  } while( true );
  *param_2 = (longlong)(puVar4 + -1);
  if ((_C != 0) && (puVar4[-1] != _C)) {
    puVar8 = (undefined4 *)FUN_14048fb3c(uVar11,uVar12);
    *puVar8 = 0x16;
    FUN_1404a1f20();
  }
  if ((uVar13 & 8) == 0) {
    *param_2 = (longlong)pwVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pwVar2;
    return 0;
  }
  if ((uVar13 & 4) == 0) {
    if ((uVar13 & 1) == 0) {
      if ((uVar13 & 2) == 0) goto LAB_14049d74b;
LAB_14049d76a:
      uVar10 = -uVar10;
      goto LAB_14049d74b;
    }
    if ((uVar13 & 2) == 0) {
      if (uVar10 < 0x80000000) goto LAB_14049d74b;
    }
    else if (uVar10 < 0x80000001) goto LAB_14049d76a;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x22;
  if ((uVar13 & 1) != 0) {
    plVar5 = (longlong *)param_2[1];
    if ((uVar13 & 2) != 0) {
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = *param_2;
      return 0x7fffffff;
    }
    return 0x7fffffff;
  }
  uVar10 = 0xffffffff;
LAB_14049d74b:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar10;
  }
  return uVar10;
}

