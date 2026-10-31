/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025d323 */

undefined4 __thiscall
FUN_1025d323(uint param_1,undefined4 param_2,ushort param_3,uint *param_4,wchar_t **param_5,
            uint *param_6,undefined **param_7,uint param_8)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  wchar_t wVar6;
  undefined2 *puVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  int iVar12;
  undefined *puVar13;
  uint local_c;
  uint local_8;
  
  local_c = param_1;
  local_8 = param_1;
  if (0x5a < param_3) {
    if (param_3 < 0x6f) {
      if (param_3 == 0x6e) {
        puVar13 = &DAT_1035a770;
        goto LAB_1025dcbb;
      }
      if (param_3 < 0x66) {
        if (param_3 == 0x65) {
          uVar4 = param_4[3];
          if (uVar4 - 1 < 0x1f) {
            wVar6 = (wchar_t)(byte)(((byte)param_8 ^ 1) << 5);
LAB_1025d614:
            iVar12 = 2;
            goto LAB_1025d39e;
          }
        }
        else {
          if (param_3 != 0x61) {
            if (param_3 == 0x62) goto LAB_1025d5a2;
            if (param_3 == 99) {
              if ((param_7 == &PTR_DAT_10325310) && ((byte)param_8 == 0)) {
                cVar2 = FUN_1025d323(param_2,0x61,param_4,param_5,param_6,&PTR_DAT_10325310,0);
                if (cVar2 != '\0') {
                  FUN_1025d0db(&DAT_1035a76c,param_5,param_6);
                  cVar2 = FUN_1025d323(param_2,0x62,param_4,param_5,param_6,&PTR_DAT_10325310,0);
                  if (cVar2 != '\0') {
                    FUN_1025d0db(&DAT_1035a76c,param_5,param_6);
                    cVar2 = FUN_1025d323(param_2,0x65,param_4,param_5,param_6,&PTR_DAT_10325310,0);
                    if (cVar2 != '\0') {
                      FUN_1025d0db(&DAT_1035a76c,param_5,param_6);
                      cVar2 = FUN_1025d323(param_2,0x54,param_4,param_5,param_6,&PTR_DAT_10325310,0)
                      ;
                      if (cVar2 != '\0') {
                        FUN_1025d0db(&DAT_1035a76c,param_5,param_6);
                        param_8 = 0;
                        uVar11 = 0x59;
                        goto LAB_1025d540;
                      }
                    }
                  }
                }
              }
              else {
                cVar2 = FUN_1025dceb(param_2,param_8 & 0xff,param_4,param_5,param_6,param_7);
                if (cVar2 != '\0') {
                  FUN_1025d0db(&DAT_1035a76c,param_5,param_6);
                  cVar2 = FUN_1025dceb(param_2,2,param_4,param_5,param_6,param_7);
                  goto LAB_1025d54b;
                }
              }
              goto LAB_1025d4a3;
            }
            if (param_3 != 100) {
              return 0;
            }
            uVar4 = param_4[3];
            if (0x1e < uVar4 - 1) goto LAB_1025d5cd;
            goto LAB_1025d44c;
          }
          if (param_4[6] < 7) {
            puVar13 = param_7[param_4[6] + 0x2d];
            goto LAB_1025dcbb;
          }
        }
      }
      else if (param_3 == 0x67) {
        if (param_4[5] + 0x76c < 10000) {
          wVar6 = L'0';
          iVar12 = 2;
          iVar3 = FUN_1025d2f5(param_4[5],param_4[6],param_4[7]);
          uVar4 = iVar3 + 0x76c;
LAB_1025d40b:
          uVar4 = (int)uVar4 % 100;
          goto LAB_1025d39e;
        }
      }
      else if (param_3 == 0x68) {
LAB_1025d5a2:
        if (param_4[4] < 0xc) {
          puVar13 = param_7[param_4[4] + 0x3b];
LAB_1025dcbb:
          FUN_1025d0db(puVar13,param_5,param_6);
          return 1;
        }
      }
      else if (param_3 == 0x6a) {
        uVar4 = param_4[7];
        if (uVar4 < 0x16e) {
          wVar6 = L'0';
          if ((byte)param_8 != 0) {
            wVar6 = L'\0';
          }
          iVar12 = 3;
          goto LAB_1025d39a;
        }
      }
      else {
        if (param_3 != 0x6d) {
          return 0;
        }
        uVar4 = param_4[4];
        if (uVar4 < 0xc) {
          wVar6 = L'0';
          if ((byte)param_8 != 0) {
            wVar6 = L'\0';
          }
          iVar12 = 2;
LAB_1025d39a:
          uVar4 = uVar4 + 1;
          goto LAB_1025d39e;
        }
      }
    }
    else if (param_3 < 0x78) {
      if (param_3 != 0x77) {
        if (param_3 == 0x70) {
          if (param_4[2] < 0x18) {
            if ((int)param_4[2] < 0xc) {
              puVar13 = param_7[0x53];
            }
            else {
              puVar13 = param_7[0x54];
            }
            goto LAB_1025dcbb;
          }
          goto LAB_1025d5cd;
        }
        if (param_3 == 0x72) {
          if (param_7 == &PTR_DAT_10325310) {
            cVar2 = FUN_1025d323(param_2,0x49,param_4,param_5,param_6,&PTR_DAT_10325310,param_8);
            if (cVar2 != '\0') {
              FUN_1025d0db(&DAT_1035a490,param_5,param_6);
              cVar2 = FUN_1025d323(param_2,0x4d,param_4,param_5,param_6,&PTR_DAT_10325310,param_8);
              if (cVar2 != '\0') {
                FUN_1025d0db(&DAT_1035a490,param_5,param_6);
                cVar2 = FUN_1025d323(param_2,0x53,param_4,param_5,param_6,&PTR_DAT_10325310,param_8)
                ;
                if (cVar2 != '\0') {
                  FUN_1025d0db(&DAT_1035a76c,param_5,param_6);
                  uVar11 = 0x70;
                  goto LAB_1025d540;
                }
              }
            }
            goto LAB_1025d4a3;
          }
          cVar2 = FUN_1025d323(param_2,0x58,param_4,param_5,param_6,param_7,param_8);
          goto LAB_1025d54b;
        }
        if (param_3 == 0x74) {
          puVar13 = &DAT_1035a774;
          goto LAB_1025dcbb;
        }
        if (param_3 != 0x75) {
          return 0;
        }
      }
      uVar4 = param_4[6];
      if (uVar4 < 7) {
        if ((uVar4 == 0) && (param_3 == 0x75)) {
          uVar4 = 7;
        }
        wVar6 = L'0';
        if ((byte)param_8 != 0) {
          wVar6 = L'\0';
        }
        iVar12 = 1;
        goto LAB_1025d39e;
      }
    }
    else {
      if (param_3 == 0x78) {
        param_8 = param_8 & 0xff;
        goto LAB_1025d891;
      }
      if (param_3 == 0x79) {
        uVar4 = param_4[5] + 0x76c;
        if (uVar4 < 10000) {
          wVar6 = L'0';
          if ((byte)param_8 != 0) {
            wVar6 = L'\0';
          }
          iVar12 = 2;
          goto LAB_1025d40b;
        }
      }
      else {
        if (param_3 != 0x7a) {
          return 0;
        }
        ___tzset();
        local_8 = 0;
        iVar12 = FUN_102753a8(&local_8);
        if (iVar12 == 0) {
          if (param_4[8] == 0) {
LAB_1025d7f0:
            puVar7 = (undefined2 *)&DAT_1035a744;
            uVar4 = (int)local_8 >> 0x1f;
            uVar8 = local_8 ^ uVar4;
            if (0 < (int)local_8) {
              puVar7 = &DAT_1035a720;
            }
            FUN_1025d0db(puVar7,param_5,param_6);
            iVar12 = (int)(uVar8 - uVar4) / 0x3c;
            store_number(iVar12 / 0x3c,2,param_5,param_6,L'0');
            store_number(iVar12 % 0x3c,2,param_5,param_6,L'0');
            return 1;
          }
          local_c = 0;
          iVar12 = FUN_1027537c(&local_c);
          if (iVar12 == 0) {
            local_8 = local_8 + local_c;
            goto LAB_1025d7f0;
          }
        }
      }
    }
    goto LAB_1025d5cd;
  }
  if (param_3 == 0x5a) {
    ___tzset();
    iVar12 = FUN_102753d4();
    puVar13 = *(undefined **)((-(uint)(param_4[8] != 0) & 4) + iVar12);
    goto LAB_1025dcbb;
  }
  if (param_3 < 0x4e) {
    if (param_3 == 0x4d) {
      uVar4 = param_4[1];
      bVar9 = uVar4 < 0x3b;
      bVar10 = uVar4 == 0x3b;
      goto LAB_1025da31;
    }
    if (param_3 < 0x45) {
      if (param_3 != 0x44) {
        if (param_3 == 0x25) {
          puVar13 = &DAT_1035a758;
          goto LAB_1025dcbb;
        }
        if (param_3 == 0x41) {
          if (param_4[6] < 7) {
            puVar13 = param_7[param_4[6] + 0x34];
            goto LAB_1025dcbb;
          }
        }
        else if (param_3 == 0x42) {
          if (param_4[4] < 0xc) {
            puVar13 = param_7[param_4[4] + 0x47];
            goto LAB_1025dcbb;
          }
        }
        else {
          if (param_3 != 0x43) {
            return 0;
          }
          if (param_4[5] + 0x76c < 10000) {
            wVar6 = L'0';
            if ((byte)param_8 != 0) {
              wVar6 = L'\0';
            }
            iVar12 = 2;
            uVar4 = (int)(param_4[5] + 0x76c) / 100;
            goto LAB_1025d39e;
          }
        }
        goto LAB_1025d5cd;
      }
      cVar2 = FUN_1025d323(param_2,0x6d,param_4,param_5,param_6,param_7,param_8);
      if (cVar2 != '\0') {
        FUN_1025d0db(&DAT_1035a6f8,param_5,param_6);
        cVar2 = FUN_1025d323(param_2,100,param_4,param_5,param_6,param_7,param_8);
        if (cVar2 != '\0') {
          FUN_1025d0db(&DAT_1035a6f8,param_5,param_6);
          uVar11 = 0x79;
          goto LAB_1025d540;
        }
      }
    }
    else {
      if (param_3 != 0x46) {
        if (param_3 == 0x47) {
          if (param_4[5] + 0x76c < 10000) {
            wVar6 = L'0';
            iVar12 = 4;
            iVar3 = FUN_1025d2f5(param_4[5],param_4[6],param_4[7]);
            uVar4 = iVar3 + 0x76c;
            goto LAB_1025d39e;
          }
        }
        else {
          if (param_3 == 0x48) {
            uVar4 = param_4[2];
            bVar9 = uVar4 < 0x17;
            bVar10 = uVar4 == 0x17;
            goto LAB_1025da31;
          }
          if (param_3 != 0x49) {
            return 0;
          }
          if (param_4[2] < 0x18) {
            uVar4 = (int)param_4[2] % 0xc;
            wVar6 = L'0';
            if (uVar4 == 0) {
              uVar4 = 0xc;
            }
            if ((byte)param_8 != 0) {
              wVar6 = L'\0';
            }
            goto LAB_1025d614;
          }
        }
        goto LAB_1025d5cd;
      }
      cVar2 = FUN_1025d323(param_2,0x59,param_4,param_5,param_6,param_7,param_8);
      if (cVar2 != '\0') {
        FUN_1025d0db(&DAT_1035a720,param_5,param_6);
        cVar2 = FUN_1025d323(param_2,0x6d,param_4,param_5,param_6,param_7,param_8);
        if (cVar2 != '\0') {
          FUN_1025d0db(&DAT_1035a720,param_5,param_6);
          uVar11 = 100;
          goto LAB_1025d540;
        }
      }
    }
    goto LAB_1025d4a3;
  }
  switch(param_3) {
  case 0x52:
    cVar2 = FUN_1025d323(param_2,0x48,param_4,param_5,param_6,param_7,param_8);
    if (cVar2 != '\0') {
      FUN_1025d0db(&DAT_1035a490,param_5,param_6);
      uVar11 = 0x4d;
LAB_1025d540:
      cVar2 = FUN_1025d323(param_2,uVar11,param_4,param_5,param_6,param_7,param_8);
      goto LAB_1025d54b;
    }
    break;
  case 0x53:
    uVar4 = *param_4;
    bVar9 = uVar4 < 0x3c;
    bVar10 = uVar4 == 0x3c;
LAB_1025da31:
    if (bVar9 || bVar10) {
LAB_1025d44c:
      wVar6 = L'0';
      if ((byte)param_8 != 0) {
        wVar6 = L'\0';
      }
      iVar12 = 2;
LAB_1025d39e:
      store_number(uVar4,iVar12,param_5,param_6,wVar6);
      return 1;
    }
    goto LAB_1025d5cd;
  case 0x54:
    cVar2 = FUN_1025d323(param_2,0x48,param_4,param_5,param_6,param_7,param_8);
    if (cVar2 != '\0') {
      FUN_1025d0db(&DAT_1035a490,param_5,param_6);
      cVar2 = FUN_1025d323(param_2,0x4d,param_4,param_5,param_6,param_7,param_8);
      if (cVar2 != '\0') {
        FUN_1025d0db(&DAT_1035a490,param_5,param_6);
        uVar11 = 0x53;
        goto LAB_1025d540;
      }
    }
    break;
  case 0x55:
  case 0x57:
    uVar8 = param_4[6];
    if (uVar8 < 7) {
      if (param_3 == 0x57) {
        if (uVar8 == 0) {
          uVar8 = 6;
        }
        else {
          uVar8 = uVar8 - 1;
        }
      }
      uVar1 = param_4[7];
      if (uVar1 < 0x16e) {
        uVar4 = 0;
        if (((int)uVar8 <= (int)uVar1) && (uVar4 = (int)uVar1 / 7, (int)uVar8 <= (int)uVar1 % 7)) {
          uVar4 = uVar4 + 1;
        }
        wVar6 = L'0';
        if ((byte)param_8 != 0) {
          wVar6 = L'\0';
        }
        iVar12 = 2;
        goto LAB_1025d39e;
      }
    }
    goto LAB_1025d5cd;
  case 0x56:
    wVar6 = L'0';
    if ((byte)param_8 != 0) {
      wVar6 = L'\0';
    }
    iVar12 = 2;
    uVar4 = FUN_1025d2a7(param_4[5],param_4[6],param_4[7]);
    goto LAB_1025d39e;
  case 0x58:
    param_8 = 2;
LAB_1025d891:
    cVar2 = FUN_1025dceb(param_2,param_8,param_4,param_5,param_6,param_7);
LAB_1025d54b:
    if (cVar2 != '\0') {
      return 1;
    }
    break;
  case 0x59:
    uVar4 = param_4[5] + 0x76c;
    if (uVar4 < 10000) {
      wVar6 = L'0';
      if ((byte)param_8 != 0) {
        wVar6 = L'\0';
      }
      iVar12 = 4;
      goto LAB_1025d39e;
    }
LAB_1025d5cd:
    puVar5 = (undefined4 *)FUN_10268ffd();
    *puVar5 = 0x16;
    FUN_10273ea8();
  default:
    goto LAB_1025dcc5;
  }
LAB_1025d4a3:
  puVar5 = (undefined4 *)FUN_10268ffd();
  *puVar5 = 0x16;
LAB_1025dcc5:
  return 0;
}

