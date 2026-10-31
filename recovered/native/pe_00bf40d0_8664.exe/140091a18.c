/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140091a18 */

uint FUN_140091a18(longlong *param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  ushort *puVar2;
  short *psVar3;
  ushort *puVar4;
  longlong *plVar5;
  int iVar6;
  __acrt_ptd *p_Var7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  int local_a8;
  
  puVar2 = (ushort *)*param_2;
  if (puVar2 == (ushort *)0x0) {
    p_Var7 = FUN_140095e5c();
    *(undefined4 *)p_Var7 = 0x16;
    FUN_1400a0ea0();
LAB_140091a91:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_140091a91;
  }
  uVar10 = *puVar2;
  *param_2 = (longlong)(puVar2 + 1);
  uVar12 = param_4 & 0xff | 2;
  if (uVar10 != 0x2d) {
    uVar12 = param_4 & 0xff;
  }
  if ((uVar10 - 0x2b & 0xfffd) == 0) {
    uVar10 = puVar2[1];
    *param_2 = (longlong)(puVar2 + 2);
  }
  local_a8 = 0xae6;
  uVar8 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_140091e55;
  if (uVar10 < 0x30) goto LAB_140091da6;
  iVar6 = 0x30;
  if (uVar10 < 0x3a) {
LAB_140091beb:
    iVar6 = (uint)uVar10 - iVar6;
LAB_140091da1:
    if (iVar6 == -1) goto LAB_140091da6;
LAB_140091dcc:
    if (iVar6 != 0) goto LAB_140091e46;
    psVar3 = (short *)*param_2;
    sVar1 = *psVar3;
    *param_2 = (longlong)(psVar3 + 1);
    if ((sVar1 - 0x58U & 0xffdf) != 0) {
      *param_2 = (longlong)psVar3;
      uVar8 = 8;
      if (param_3 != 0) {
        uVar8 = param_3;
      }
      if ((sVar1 != 0) && (*psVar3 != sVar1)) {
        p_Var7 = FUN_140095e5c();
        *(undefined4 *)p_Var7 = 0x16;
        FUN_1400a0ea0();
      }
      goto LAB_140091e55;
    }
    uVar10 = psVar3[1];
    *param_2 = (longlong)(psVar3 + 2);
    uVar8 = 0x10;
  }
  else {
    if (uVar10 < 0xff10) {
      if (0x65f < uVar10) {
        if (uVar10 < 0x66a) {
          iVar6 = uVar10 - 0x660;
          goto LAB_140091da1;
        }
        if (0x6ef < uVar10) {
          if (uVar10 < 0x6fa) {
            iVar6 = uVar10 - 0x6f0;
            goto LAB_140091da1;
          }
          if (0x965 < uVar10) {
            if (uVar10 < 0x970) {
              iVar6 = uVar10 - 0x966;
              goto LAB_140091da1;
            }
            if (0x9e5 < uVar10) {
              if (uVar10 < 0x9f0) {
                iVar6 = uVar10 - 0x9e6;
                goto LAB_140091da1;
              }
              if (0xa65 < uVar10) {
                if (uVar10 < 0xa70) {
                  iVar6 = uVar10 - 0xa66;
                  goto LAB_140091da1;
                }
                if ((0xae5 < uVar10) &&
                   ((iVar6 = local_a8, uVar10 < 0xaf0 ||
                    ((iVar6 = 0xb66, 0xb65 < uVar10 &&
                     ((uVar10 < 0xb70 ||
                      ((iVar6 = 0xc66, 0xc65 < uVar10 &&
                       ((uVar10 < 0xc70 ||
                        ((iVar6 = 0xce6, 0xce5 < uVar10 &&
                         ((uVar10 < 0xcf0 ||
                          ((iVar6 = 0xd66, 0xd65 < uVar10 &&
                           ((uVar10 < 0xd70 ||
                            ((iVar6 = 0xe50, 0xe4f < uVar10 &&
                             ((uVar10 < 0xe5a ||
                              ((iVar6 = 0xed0, 0xecf < uVar10 &&
                               ((uVar10 < 0xeda ||
                                ((iVar6 = 0xf20, 0xf1f < uVar10 &&
                                 ((uVar10 < 0xf2a ||
                                  ((iVar6 = 0x1040, 0x103f < uVar10 &&
                                   ((uVar10 < 0x104a ||
                                    ((iVar6 = 0x17e0, 0x17df < uVar10 &&
                                     ((uVar10 < 0x17ea ||
                                      (iVar6 = 0x1810, (ushort)(uVar10 + 0xe7f0) < 10)))))))))))))))
                               ))))))))))))))))))))))))) goto LAB_140091beb;
              }
            }
          }
        }
      }
    }
    else if (uVar10 < 0xff1a) {
      iVar6 = uVar10 - 0xff10;
      goto LAB_140091da1;
    }
LAB_140091da6:
    uVar8 = (uint)uVar10;
    if ((uVar10 - 0x41 < 0x1a) || (uVar10 - 0x61 < 0x1a)) {
      if (uVar10 - 0x61 < 0x1a) {
        uVar8 = uVar10 - 0x20;
      }
      iVar6 = uVar8 - 0x37;
      goto LAB_140091dcc;
    }
LAB_140091e46:
    uVar8 = 10;
  }
  if (param_3 != 0) {
    uVar8 = param_3;
  }
LAB_140091e55:
  uVar11 = 0;
  do {
    if (uVar10 < 0x30) goto LAB_140092022;
    if (uVar10 < 0x3a) {
      uVar9 = uVar10 - 0x30;
LAB_14009201d:
      if (uVar9 == 0xffffffff) goto LAB_140092022;
    }
    else {
      if (uVar10 < 0xff10) {
        if (0x65f < uVar10) {
          if (uVar10 < 0x66a) {
            uVar9 = uVar10 - 0x660;
            goto LAB_14009201d;
          }
          if (0x6ef < uVar10) {
            if (uVar10 < 0x6fa) {
              uVar9 = uVar10 - 0x6f0;
              goto LAB_14009201d;
            }
            if (0x965 < uVar10) {
              iVar6 = 0x966;
              if (uVar10 < 0x970) {
LAB_140091ee9:
                uVar9 = (uint)uVar10 - iVar6;
                goto LAB_14009201d;
              }
              if (0x9e5 < uVar10) {
                iVar6 = 0x9e6;
                if (uVar10 < 0x9f0) goto LAB_140091ee9;
                if (0xa65 < uVar10) {
                  iVar6 = 0xa66;
                  if (uVar10 < 0xa70) goto LAB_140091ee9;
                  if (0xae5 < uVar10) {
                    iVar6 = local_a8;
                    if (uVar10 < 0xaf0) goto LAB_140091ee9;
                    iVar6 = 0xb66;
                    if (0xb65 < uVar10) {
                      if (uVar10 < 0xb70) goto LAB_140091ee9;
                      iVar6 = 0xc66;
                      if (0xc65 < uVar10) {
                        if (uVar10 < 0xc70) goto LAB_140091ee9;
                        iVar6 = 0xce6;
                        if (0xce5 < uVar10) {
                          if (uVar10 < 0xcf0) goto LAB_140091ee9;
                          iVar6 = 0xd66;
                          if (0xd65 < uVar10) {
                            if (uVar10 < 0xd70) goto LAB_140091ee9;
                            iVar6 = 0xe50;
                            if (0xe4f < uVar10) {
                              if (uVar10 < 0xe5a) goto LAB_140091ee9;
                              iVar6 = 0xed0;
                              if (0xecf < uVar10) {
                                if (uVar10 < 0xeda) goto LAB_140091ee9;
                                iVar6 = 0xf20;
                                if (0xf1f < uVar10) {
                                  if (uVar10 < 0xf2a) goto LAB_140091ee9;
                                  iVar6 = 0x1040;
                                  if (0x103f < uVar10) {
                                    if (uVar10 < 0x104a) goto LAB_140091ee9;
                                    iVar6 = 0x17e0;
                                    if (0x17df < uVar10) {
                                      if (uVar10 < 0x17ea) goto LAB_140091ee9;
                                      if ((ushort)(uVar10 + 0xe7f0) < 10) {
                                        uVar9 = uVar10 - 0x1810;
                                        goto LAB_14009201d;
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
      else if (uVar10 < 0xff1a) {
        uVar9 = uVar10 - 0xff10;
        goto LAB_14009201d;
      }
LAB_140092022:
      uVar9 = (uint)uVar10;
      if (((uVar10 < 0x41) || (0x5a < uVar10)) && ((uVar9 < 0x61 || (0x7a < uVar10)))) {
        uVar9 = 0xffffffff;
      }
      else {
        if ((ushort)(uVar10 - 0x61) < 0x1a) {
          uVar9 = uVar9 - 0x20;
        }
        uVar9 = uVar9 - 0x37;
      }
    }
    puVar4 = (ushort *)*param_2;
    if (uVar8 <= uVar9) break;
    uVar10 = *puVar4;
    uVar9 = uVar11 * uVar8 + uVar9;
    *param_2 = (longlong)(puVar4 + 1);
    uVar12 = uVar12 | (uint)(uVar9 < uVar11 * uVar8 ||
                            (uint)(0xffffffff / (ulonglong)uVar8) < uVar11) << 2 | 8;
    uVar11 = uVar9;
  } while( true );
  *param_2 = (longlong)(puVar4 + -1);
  if ((uVar10 != 0) && (puVar4[-1] != uVar10)) {
    p_Var7 = FUN_140095e5c();
    *(undefined4 *)p_Var7 = 0x16;
    FUN_1400a0ea0();
  }
  if ((uVar12 & 8) == 0) {
    *param_2 = (longlong)puVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = puVar2;
    return 0;
  }
  if ((uVar12 & 4) == 0) {
    if ((uVar12 & 1) == 0) {
      if ((uVar12 & 2) == 0) goto LAB_14009211f;
LAB_14009213e:
      uVar11 = -uVar11;
      goto LAB_14009211f;
    }
    if ((uVar12 & 2) == 0) {
      if (uVar11 < 0x80000000) goto LAB_14009211f;
    }
    else if (uVar11 < 0x80000001) goto LAB_14009213e;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x22;
  if ((uVar12 & 1) != 0) {
    plVar5 = (longlong *)param_2[1];
    if ((uVar12 & 2) != 0) {
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
  uVar11 = 0xffffffff;
LAB_14009211f:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar11;
  }
  return uVar11;
}

