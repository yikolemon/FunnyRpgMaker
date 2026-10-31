/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10271099 */

uint FUN_10271099(int param_1,wchar_t *param_2,undefined4 *param_3,uint param_4,byte param_5)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  wchar_t wVar5;
  byte bVar6;
  ushort uVar7;
  wchar_t wVar8;
  uint uVar9;
  wint_t _C;
  uint local_8;
  
  cVar2 = FUN_10262835();
  puVar1 = (ushort *)param_2;
  if (cVar2 == '\0') {
LAB_102710dd:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
    return 0;
  }
  if ((param_4 != 0) && (((int)param_4 < 2 || (0x24 < (int)param_4)))) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_1);
    goto LAB_102710dd;
  }
  local_8 = 0;
  uVar9 = (uint)(ushort)*param_2;
  param_2 = param_2 + 1;
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_1025ec50();
  }
  while( true ) {
    _C = (wint_t)uVar9;
    iVar3 = _iswctype(_C,8);
    if (iVar3 == 0) break;
    uVar9 = (uint)(ushort)*param_2;
    param_2 = param_2 + 1;
  }
  bVar6 = param_5 | 2;
  if ((_C == 0x2d) || (bVar6 = param_5, _C == 0x2b)) {
    uVar9 = (uint)(ushort)*param_2;
    param_2 = param_2 + 1;
  }
  if ((param_4 != 0) && (uVar4 = param_4, param_4 != 0x10)) goto LAB_10271439;
  uVar7 = (ushort)uVar9;
  if (uVar7 < 0x30) goto LAB_102713c5;
  if (uVar7 < 0x3a) {
    iVar3 = uVar9 - 0x30;
LAB_102713c0:
    if (iVar3 == -1) goto LAB_102713c5;
LAB_102713ed:
    if (iVar3 != 0) goto LAB_1027142c;
    wVar8 = *param_2;
    if ((wVar8 == L'x') || (wVar8 == L'X')) {
      uVar9 = (uint)(ushort)param_2[1];
      param_2 = param_2 + 2;
      uVar4 = 0x10;
      if (param_4 != 0) {
        uVar4 = param_4;
      }
      goto LAB_10271439;
    }
    param_2 = param_2 + 1;
    __crt_strtox::c_string_character_source<wchar_t>::unget
              ((c_string_character_source<wchar_t> *)&param_2,wVar8);
    uVar4 = 8;
  }
  else {
    if (uVar7 < 0xff10) {
      if (0x65f < uVar7) {
        if (uVar7 < 0x66a) {
          iVar3 = uVar9 - 0x660;
        }
        else {
          if (uVar7 < 0x6f0) goto LAB_102713c5;
          if (uVar7 < 0x6fa) {
            iVar3 = uVar9 - 0x6f0;
          }
          else {
            if (uVar7 < 0x966) goto LAB_102713c5;
            if (uVar7 < 0x970) {
              iVar3 = uVar9 - 0x966;
            }
            else {
              if (uVar7 < 0x9e6) goto LAB_102713c5;
              if (uVar7 < 0x9f0) {
                iVar3 = uVar9 - 0x9e6;
              }
              else {
                if (uVar7 < 0xa66) goto LAB_102713c5;
                if (uVar7 < 0xa70) {
                  iVar3 = uVar9 - 0xa66;
                }
                else {
                  if (uVar7 < 0xae6) goto LAB_102713c5;
                  if (uVar7 < 0xaf0) {
                    iVar3 = uVar9 - 0xae6;
                  }
                  else {
                    if (uVar7 < 0xb66) goto LAB_102713c5;
                    if (uVar7 < 0xb70) {
                      iVar3 = uVar9 - 0xb66;
                    }
                    else {
                      if (uVar7 < 0xc66) goto LAB_102713c5;
                      if (uVar7 < 0xc70) {
                        iVar3 = uVar9 - 0xc66;
                      }
                      else {
                        if (uVar7 < 0xce6) goto LAB_102713c5;
                        if (uVar7 < 0xcf0) {
                          iVar3 = uVar9 - 0xce6;
                        }
                        else {
                          if (uVar7 < 0xd66) goto LAB_102713c5;
                          if (uVar7 < 0xd70) {
                            iVar3 = uVar9 - 0xd66;
                          }
                          else {
                            if (uVar7 < 0xe50) goto LAB_102713c5;
                            if (uVar7 < 0xe5a) {
                              iVar3 = uVar9 - 0xe50;
                            }
                            else {
                              if (uVar7 < 0xed0) goto LAB_102713c5;
                              if (uVar7 < 0xeda) {
                                iVar3 = uVar9 - 0xed0;
                              }
                              else {
                                if (uVar7 < 0xf20) goto LAB_102713c5;
                                if (uVar7 < 0xf2a) {
                                  iVar3 = uVar9 - 0xf20;
                                }
                                else {
                                  if (uVar7 < 0x1040) goto LAB_102713c5;
                                  if (uVar7 < 0x104a) {
                                    iVar3 = uVar9 - 0x1040;
                                  }
                                  else {
                                    if (uVar7 < 0x17e0) goto LAB_102713c5;
                                    if (uVar7 < 0x17ea) {
                                      iVar3 = uVar9 - 0x17e0;
                                    }
                                    else {
                                      if ((uVar7 < 0x1810) || (0x1819 < uVar7)) goto LAB_102713c5;
                                      iVar3 = uVar9 - 0x1810;
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
        goto LAB_102713c0;
      }
    }
    else if (uVar7 < 0xff1a) {
      iVar3 = uVar9 - 0xff10;
      goto LAB_102713c0;
    }
LAB_102713c5:
    if (((0x40 < uVar9) && (uVar9 < 0x5b)) || (uVar9 - 0x61 < 0x1a)) {
      uVar4 = uVar9;
      if (uVar9 - 0x61 < 0x1a) {
        uVar4 = uVar9 - 0x20;
      }
      iVar3 = uVar4 - 0x37;
      goto LAB_102713ed;
    }
LAB_1027142c:
    uVar4 = 10;
  }
  if (param_4 != 0) {
    uVar4 = param_4;
  }
LAB_10271439:
  param_4 = uVar4;
  do {
    iVar3 = 0x30;
    wVar8 = (wchar_t)uVar9;
    if ((ushort)wVar8 < 0x30) goto LAB_102715cb;
    if ((ushort)wVar8 < 0x3a) {
LAB_102715c1:
      uVar4 = uVar9 - iVar3;
      if (uVar4 == 0xffffffff) goto LAB_102715cb;
    }
    else {
      iVar3 = 0xff10;
      if ((ushort)wVar8 < 0xff10) {
        iVar3 = 0x660;
        if (0x65f < (ushort)wVar8) {
          if ((ushort)wVar8 < 0x66a) goto LAB_102715c1;
          iVar3 = 0x6f0;
          if (0x6ef < (ushort)wVar8) {
            if ((ushort)wVar8 < 0x6fa) goto LAB_102715c1;
            iVar3 = 0x966;
            if (0x965 < (ushort)wVar8) {
              if ((ushort)wVar8 < 0x970) goto LAB_102715c1;
              iVar3 = 0x9e6;
              if (0x9e5 < (ushort)wVar8) {
                if ((ushort)wVar8 < 0x9f0) goto LAB_102715c1;
                iVar3 = 0xa66;
                if (0xa65 < (ushort)wVar8) {
                  if ((ushort)wVar8 < 0xa70) goto LAB_102715c1;
                  iVar3 = 0xae6;
                  if (0xae5 < (ushort)wVar8) {
                    if ((ushort)wVar8 < 0xaf0) goto LAB_102715c1;
                    iVar3 = 0xb66;
                    if (0xb65 < (ushort)wVar8) {
                      if ((ushort)wVar8 < 0xb70) goto LAB_102715c1;
                      iVar3 = 0xc66;
                      if (0xc65 < (ushort)wVar8) {
                        if ((ushort)wVar8 < 0xc70) goto LAB_102715c1;
                        iVar3 = 0xce6;
                        if (0xce5 < (ushort)wVar8) {
                          if ((ushort)wVar8 < 0xcf0) goto LAB_102715c1;
                          iVar3 = 0xd66;
                          if (0xd65 < (ushort)wVar8) {
                            if ((ushort)wVar8 < 0xd70) goto LAB_102715c1;
                            iVar3 = 0xe50;
                            if (0xe4f < (ushort)wVar8) {
                              if ((ushort)wVar8 < 0xe5a) goto LAB_102715c1;
                              iVar3 = 0xed0;
                              if (0xecf < (ushort)wVar8) {
                                if ((ushort)wVar8 < 0xeda) goto LAB_102715c1;
                                iVar3 = 0xf20;
                                if (0xf1f < (ushort)wVar8) {
                                  if ((ushort)wVar8 < 0xf2a) goto LAB_102715c1;
                                  iVar3 = 0x1040;
                                  if (0x103f < (ushort)wVar8) {
                                    if ((ushort)wVar8 < 0x104a) goto LAB_102715c1;
                                    iVar3 = 0x17e0;
                                    if (0x17df < (ushort)wVar8) {
                                      if ((ushort)wVar8 < 0x17ea) goto LAB_102715c1;
                                      iVar3 = 0x1810;
                                      if (0x180f < (ushort)wVar8) {
                                        wVar5 = L'᠚';
                                        goto LAB_102715bc;
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
LAB_102715bc:
        if ((ushort)wVar8 < (ushort)wVar5) goto LAB_102715c1;
      }
LAB_102715cb:
      if (((uVar9 < 0x41) || (0x5a < uVar9)) && ((uVar9 < 0x61 || (0x7a < (ushort)wVar8)))) {
        uVar4 = 0xffffffff;
      }
      else {
        if ((ushort)(wVar8 + L'ﾟ') < 0x1a) {
          uVar9 = uVar9 - 0x20;
        }
        uVar4 = uVar9 - 0x37;
      }
    }
    if (param_4 <= uVar4) {
      __crt_strtox::c_string_character_source<wchar_t>::unget
                ((c_string_character_source<wchar_t> *)&param_2,wVar8);
      if ((bVar6 & 8) == 0) {
        if (param_3 == (undefined4 *)0x0) {
          return 0;
        }
        *param_3 = puVar1;
        return 0;
      }
      cVar2 = FUN_10263750(bVar6,local_8);
      if (cVar2 == '\0') {
        if ((bVar6 & 2) != 0) {
          local_8 = -local_8;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x1c) = 1;
        *(undefined4 *)(param_1 + 0x18) = 0x22;
        if ((bVar6 & 1) != 0) {
          if ((bVar6 & 2) == 0) {
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
    uVar4 = local_8 * param_4 + uVar4;
    bVar6 = bVar6 | (uVar4 < local_8 * param_4 || (uint)(0xffffffff / (ulonglong)param_4) < local_8)
                    << 2 | 8U;
    uVar9 = (uint)(ushort)*param_2;
    param_2 = param_2 + 1;
    local_8 = uVar4;
  } while( true );
}

