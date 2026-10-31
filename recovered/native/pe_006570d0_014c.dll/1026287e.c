/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026287e */

uint FUN_1026287e(int param_1,wchar_t *param_2,undefined4 *param_3,uint param_4,byte param_5)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  wchar_t wVar5;
  wchar_t *pwVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  wchar_t wVar10;
  uint uVar11;
  bool bVar12;
  uint local_8;
  
  cVar2 = FUN_10262835();
  uVar7 = param_4;
  puVar1 = (ushort *)param_2;
  if (cVar2 == '\0') {
LAB_102628c3:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
    return 0;
  }
  if ((param_4 != 0) && (((int)param_4 < 2 || (0x24 < (int)param_4)))) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_1);
    goto LAB_102628c3;
  }
  local_8 = 0;
  uVar11 = (uint)(ushort)*param_2;
  pwVar6 = param_2 + 1;
  bVar8 = param_5 | 2;
  if ((*param_2 == 0x2d) || (bVar8 = param_5, uVar11 == 0x2b)) {
    uVar11 = (uint)(ushort)*pwVar6;
    pwVar6 = param_2 + 2;
  }
  param_2 = pwVar6;
  if ((param_4 != 0) && (param_4 = uVar7, param_4 != 0x10)) goto LAB_10262bdf;
  uVar9 = (ushort)uVar11;
  if (uVar9 < 0x30) goto LAB_10262b74;
  if (uVar9 < 0x3a) {
    iVar3 = uVar11 - 0x30;
LAB_10262b6f:
    if (iVar3 == -1) goto LAB_10262b74;
LAB_10262b9c:
    if (iVar3 != 0) goto LAB_10262bd2;
    wVar10 = *pwVar6;
    param_2 = pwVar6 + 1;
    if ((wVar10 == L'x') || (wVar10 == L'X')) {
      uVar11 = (uint)(ushort)*param_2;
      param_2 = pwVar6 + 2;
      bVar12 = param_4 != 0;
      param_4 = 0x10;
      if (bVar12) {
        param_4 = uVar7;
      }
      goto LAB_10262bdf;
    }
    __crt_strtox::c_string_character_source<wchar_t>::unget
              ((c_string_character_source<wchar_t> *)&param_2,wVar10);
    param_4 = 8;
  }
  else {
    if (uVar9 < 0xff10) {
      if (0x65f < uVar9) {
        if (uVar9 < 0x66a) {
          iVar3 = uVar11 - 0x660;
        }
        else {
          if (uVar9 < 0x6f0) goto LAB_10262b74;
          if (uVar9 < 0x6fa) {
            iVar3 = uVar11 - 0x6f0;
          }
          else {
            if (uVar9 < 0x966) goto LAB_10262b74;
            if (uVar9 < 0x970) {
              iVar3 = uVar11 - 0x966;
            }
            else {
              if (uVar9 < 0x9e6) goto LAB_10262b74;
              if (uVar9 < 0x9f0) {
                iVar3 = uVar11 - 0x9e6;
              }
              else {
                if (uVar9 < 0xa66) goto LAB_10262b74;
                if (uVar9 < 0xa70) {
                  iVar3 = uVar11 - 0xa66;
                }
                else {
                  if (uVar9 < 0xae6) goto LAB_10262b74;
                  if (uVar9 < 0xaf0) {
                    iVar3 = uVar11 - 0xae6;
                  }
                  else {
                    if (uVar9 < 0xb66) goto LAB_10262b74;
                    if (uVar9 < 0xb70) {
                      iVar3 = uVar11 - 0xb66;
                    }
                    else {
                      if (uVar9 < 0xc66) goto LAB_10262b74;
                      if (uVar9 < 0xc70) {
                        iVar3 = uVar11 - 0xc66;
                      }
                      else {
                        if (uVar9 < 0xce6) goto LAB_10262b74;
                        if (uVar9 < 0xcf0) {
                          iVar3 = uVar11 - 0xce6;
                        }
                        else {
                          if (uVar9 < 0xd66) goto LAB_10262b74;
                          if (uVar9 < 0xd70) {
                            iVar3 = uVar11 - 0xd66;
                          }
                          else {
                            if (uVar9 < 0xe50) goto LAB_10262b74;
                            if (uVar9 < 0xe5a) {
                              iVar3 = uVar11 - 0xe50;
                            }
                            else {
                              if (uVar9 < 0xed0) goto LAB_10262b74;
                              if (uVar9 < 0xeda) {
                                iVar3 = uVar11 - 0xed0;
                              }
                              else {
                                if (uVar9 < 0xf20) goto LAB_10262b74;
                                if (uVar9 < 0xf2a) {
                                  iVar3 = uVar11 - 0xf20;
                                }
                                else {
                                  if (uVar9 < 0x1040) goto LAB_10262b74;
                                  if (uVar9 < 0x104a) {
                                    iVar3 = uVar11 - 0x1040;
                                  }
                                  else {
                                    if (uVar9 < 0x17e0) goto LAB_10262b74;
                                    if (uVar9 < 0x17ea) {
                                      iVar3 = uVar11 - 0x17e0;
                                    }
                                    else {
                                      if ((uVar9 < 0x1810) || (0x1819 < uVar9)) goto LAB_10262b74;
                                      iVar3 = uVar11 - 0x1810;
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
        goto LAB_10262b6f;
      }
    }
    else if (uVar9 < 0xff1a) {
      iVar3 = uVar11 - 0xff10;
      goto LAB_10262b6f;
    }
LAB_10262b74:
    if (((0x40 < uVar11) && (uVar11 < 0x5b)) || (uVar11 - 0x61 < 0x1a)) {
      uVar4 = uVar11;
      if (uVar11 - 0x61 < 0x1a) {
        uVar4 = uVar11 - 0x20;
      }
      iVar3 = uVar4 - 0x37;
      goto LAB_10262b9c;
    }
LAB_10262bd2:
    param_4 = 10;
  }
  if (uVar7 != 0) {
    param_4 = uVar7;
  }
LAB_10262bdf:
  do {
    iVar3 = 0x30;
    wVar10 = (wchar_t)uVar11;
    if ((ushort)wVar10 < 0x30) goto LAB_10262d71;
    if ((ushort)wVar10 < 0x3a) {
LAB_10262d67:
      uVar7 = uVar11 - iVar3;
      if (uVar7 == 0xffffffff) goto LAB_10262d71;
    }
    else {
      iVar3 = 0xff10;
      if ((ushort)wVar10 < 0xff10) {
        iVar3 = 0x660;
        if (0x65f < (ushort)wVar10) {
          if ((ushort)wVar10 < 0x66a) goto LAB_10262d67;
          iVar3 = 0x6f0;
          if (0x6ef < (ushort)wVar10) {
            if ((ushort)wVar10 < 0x6fa) goto LAB_10262d67;
            iVar3 = 0x966;
            if (0x965 < (ushort)wVar10) {
              if ((ushort)wVar10 < 0x970) goto LAB_10262d67;
              iVar3 = 0x9e6;
              if (0x9e5 < (ushort)wVar10) {
                if ((ushort)wVar10 < 0x9f0) goto LAB_10262d67;
                iVar3 = 0xa66;
                if (0xa65 < (ushort)wVar10) {
                  if ((ushort)wVar10 < 0xa70) goto LAB_10262d67;
                  iVar3 = 0xae6;
                  if (0xae5 < (ushort)wVar10) {
                    if ((ushort)wVar10 < 0xaf0) goto LAB_10262d67;
                    iVar3 = 0xb66;
                    if (0xb65 < (ushort)wVar10) {
                      if ((ushort)wVar10 < 0xb70) goto LAB_10262d67;
                      iVar3 = 0xc66;
                      if (0xc65 < (ushort)wVar10) {
                        if ((ushort)wVar10 < 0xc70) goto LAB_10262d67;
                        iVar3 = 0xce6;
                        if (0xce5 < (ushort)wVar10) {
                          if ((ushort)wVar10 < 0xcf0) goto LAB_10262d67;
                          iVar3 = 0xd66;
                          if (0xd65 < (ushort)wVar10) {
                            if ((ushort)wVar10 < 0xd70) goto LAB_10262d67;
                            iVar3 = 0xe50;
                            if (0xe4f < (ushort)wVar10) {
                              if ((ushort)wVar10 < 0xe5a) goto LAB_10262d67;
                              iVar3 = 0xed0;
                              if (0xecf < (ushort)wVar10) {
                                if ((ushort)wVar10 < 0xeda) goto LAB_10262d67;
                                iVar3 = 0xf20;
                                if (0xf1f < (ushort)wVar10) {
                                  if ((ushort)wVar10 < 0xf2a) goto LAB_10262d67;
                                  iVar3 = 0x1040;
                                  if (0x103f < (ushort)wVar10) {
                                    if ((ushort)wVar10 < 0x104a) goto LAB_10262d67;
                                    iVar3 = 0x17e0;
                                    if (0x17df < (ushort)wVar10) {
                                      if ((ushort)wVar10 < 0x17ea) goto LAB_10262d67;
                                      iVar3 = 0x1810;
                                      if (0x180f < (ushort)wVar10) {
                                        wVar5 = L'᠚';
                                        goto LAB_10262d62;
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
      else {
        wVar5 = L'：';
LAB_10262d62:
        if ((ushort)wVar10 < (ushort)wVar5) goto LAB_10262d67;
      }
LAB_10262d71:
      if (((uVar11 < 0x41) || (0x5a < uVar11)) && ((uVar11 < 0x61 || (0x7a < (ushort)wVar10)))) {
        uVar7 = 0xffffffff;
      }
      else {
        if ((ushort)(wVar10 + L'ﾟ') < 0x1a) {
          uVar11 = uVar11 - 0x20;
        }
        uVar7 = uVar11 - 0x37;
      }
    }
    if (param_4 <= uVar7) {
      __crt_strtox::c_string_character_source<wchar_t>::unget
                ((c_string_character_source<wchar_t> *)&param_2,wVar10);
      if ((bVar8 & 8) == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return 0;
        }
        *param_3 = puVar1;
        return 0;
      }
      cVar2 = FUN_10263750(bVar8,local_8);
      if (cVar2 == '\0') {
        if ((bVar8 & 2) != 0) {
          local_8 = -local_8;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x1c) = 1;
        *(undefined4 *)(param_1 + 0x18) = 0x22;
        if ((bVar8 & 1) != 0) {
          if ((bVar8 & 2) == 0) {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = param_2;
            }
            return 0x7fffffff;
          }
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = param_2;
          }
          return 0x80000000;
        }
        local_8 = 0xffffffff;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = param_2;
        return local_8;
      }
      return local_8;
    }
    uVar7 = local_8 * param_4 + uVar7;
    bVar8 = bVar8 | (uVar7 < local_8 * param_4 || (uint)(0xffffffff / (ulonglong)param_4) < local_8)
                    << 2 | 8U;
    uVar11 = (uint)(ushort)*param_2;
    param_2 = param_2 + 1;
    local_8 = uVar7;
  } while( true );
}

