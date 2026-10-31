/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043e791 */

int __fastcall FUN_0043e791(int param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  ushort uStack_4e;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  uint local_24;
  uint uStack_20;
  uint local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&uStack_74;
  puVar2 = *(uint **)(param_1 + 0x2e0);
  local_24 = 0;
  iVar9 = 0;
  if ((((puVar2 != (uint *)0x0) && (*(int *)(param_1 + 0x2c4) != 0)) &&
      (local_5c = param_2[7],
      iVar6 = (**(code **)(param_1 + 0x204))(param_1,0x63766172,param_2,&local_1c), iVar6 == 0)) &&
     (iStack_18 = FUN_00420be1(param_2,local_1c), iStack_18 == 0)) {
    iVar9 = param_2[8];
    iVar6 = *param_2;
    uVar7 = FUN_00420d5c((int)param_2);
    if (uVar7 == 0x10000) {
      uStack_74 = iVar9 - iVar6;
      uVar4 = FUN_00420d1e((int)param_2);
      uVar5 = FUN_00420d1e((int)param_2);
      uStack_48 = uVar4 & 0xfff;
      if (local_1c < (uint)uVar5 + uStack_48 * 4) {
        iStack_18 = 8;
      }
      else {
        uVar7 = uStack_74 + uVar5;
        if ((short)uVar4 < 0) {
          iVar9 = *param_2;
          uStack_6c = param_2[8] - iVar9;
          iVar6 = iVar9 + uVar7;
          if ((uint)(param_2[9] - iVar9) <= uVar7) {
            iVar6 = param_2[9];
          }
          param_2[8] = iVar6;
          iStack_58 = FUN_0043ec8b((int)param_2,&local_24);
          iVar9 = *param_2;
          uStack_74 = param_2[8] - iVar9;
          iVar6 = iVar9 + uStack_6c;
          if ((uint)(param_2[9] - iVar9) <= uStack_6c) {
            iVar6 = param_2[9];
          }
          param_2[8] = iVar6;
        }
        else {
          iStack_58 = 0;
          uStack_74 = uVar7;
        }
        iStack_64 = FUN_0041efcd(local_5c,4,0,*puVar2 * 3,0,&iStack_18);
        iVar9 = 0;
        if ((iStack_18 == 0) &&
           (iVar9 = FUN_0041c6b3(local_5c,4,0,*(uint *)(param_1 + 0x2c0),0,&iStack_18),
           iStack_18 == 0)) {
          iStack_60 = iVar9;
          if (uStack_48 != 0) {
            iStack_4c = iStack_64 + *puVar2 * 4;
            uStack_6c = iStack_4c + *puVar2 * 4;
            uVar8 = 0;
            uStack_38 = local_24;
            uVar7 = uStack_74;
            iStack_34 = param_1;
            do {
              uStack_44 = uVar8;
              uStack_4e = FUN_00420d1e((int)param_2);
              uVar4 = FUN_00420d1e((int)param_2);
              uStack_70 = (uint)uVar4;
              uStack_74 = uVar7;
              if ((short)uVar4 < 0) {
                iStack_68 = iStack_64;
                if (*puVar2 != 0) {
                  uVar7 = 0;
                  do {
                    uVar4 = FUN_00420d1e((int)param_2);
                    *(int *)(iStack_64 + uVar7 * 4) = (int)(short)uVar4 << 2;
                    uVar7 = uVar7 + 1;
                    uVar8 = *puVar2;
                    iVar9 = iStack_64;
                  } while (uVar7 < uVar8);
                  goto LAB_0043e9d2;
                }
              }
              else {
                if (puVar2[0xf] <= (uStack_70 & 0xfff)) {
                  iStack_18 = 8;
                  iVar9 = iStack_60;
                  goto LAB_0043ec27;
                }
                uVar8 = *puVar2;
                iVar9 = (uStack_70 & 0xfff) * uVar8 * 4 + puVar2[0x10];
LAB_0043e9d2:
                iVar6 = iStack_4c;
                iStack_68 = iVar9;
                if (((uStack_70 >> 0xe & 1) != 0) && (uVar8 != 0)) {
                  uVar7 = 0;
                  do {
                    uVar4 = FUN_00420d1e((int)param_2);
                    param_1 = iStack_34;
                    *(int *)(iVar6 + uVar7 * 4) = (int)(short)uVar4 << 2;
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < *puVar2);
                  if (*puVar2 != 0) {
                    uVar7 = 0;
                    do {
                      uVar4 = FUN_00420d1e((int)param_2);
                      *(int *)(uStack_6c + uVar7 * 4) = (int)(short)uVar4 << 2;
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < *puVar2);
                  }
                }
              }
              uVar7 = uStack_74;
              uStack_3c = FUN_0043ee12(puVar2,uStack_70,iStack_68,iStack_4c,uStack_6c);
              if (uStack_3c != 0) {
                iStack_2c = *param_2;
                iVar9 = iStack_2c + uVar7;
                if ((uint)(param_2[9] - iStack_2c) <= uVar7) {
                  iVar9 = param_2[9];
                }
                iStack_28 = param_2[8];
                param_2[8] = iVar9;
                if ((uStack_70 >> 0xd & 1) == 0) {
                  uStack_20 = uStack_38;
                  iStack_30 = 0;
                  iStack_54 = iStack_58;
                }
                else {
                  iStack_30 = FUN_0043ec8b((int)param_2,&uStack_20);
                  iStack_54 = iStack_30;
                }
                uVar7 = uStack_20;
                if (uStack_20 == 0) {
                  uVar7 = *(uint *)(param_1 + 0x2c0);
                }
                uStack_40 = uStack_20;
                uStack_70 = FUN_0043eed2((int)param_2,uVar7);
                iVar9 = local_5c;
                if ((iStack_54 != 0) && (uStack_70 != 0)) {
                  if (iStack_54 == -1) {
                    if (*(int *)(param_1 + 0x2c0) != 0) {
                      uVar7 = 0;
                      do {
                        lVar3 = (longlong)(int)uStack_3c * (longlong)*(int *)(uStack_70 + uVar7 * 4)
                        ;
                        iVar6 = (int)(lVar3 >> 0x3f);
                        lVar3 = lVar3 + CONCAT44(iVar6,iVar6) + 0x8000;
                        piVar1 = (int *)(iStack_60 + uVar7 * 4);
                        *piVar1 = *piVar1 + ((int)((ulonglong)lVar3 >> 0x20) << 0x10 |
                                            (uint)lVar3 >> 0x10);
                        uVar7 = uVar7 + 1;
                      } while (uVar7 < *(uint *)(param_1 + 0x2c0));
                    }
                  }
                  else if (uStack_40 != 0) {
                    uVar7 = 0;
                    do {
                      uVar8 = (uint)*(ushort *)(iStack_54 + uVar7 * 2);
                      if (uVar8 < *(uint *)(param_1 + 0x2c0)) {
                        lVar3 = (longlong)(int)uStack_3c * (longlong)*(int *)(uStack_70 + uVar7 * 4)
                        ;
                        iStack_68 = (int)((ulonglong)lVar3 >> 0x20);
                        lVar3 = lVar3 + CONCAT44(iStack_68 >> 0x1f,iStack_68 >> 0x1f) + 0x8000;
                        piVar1 = (int *)(iStack_60 + uVar8 * 4);
                        *piVar1 = *piVar1 + ((int)((ulonglong)lVar3 >> 0x20) * 0x10000 |
                                            (uint)lVar3 >> 0x10);
                      }
                      uVar7 = uVar7 + 1;
                    } while (uStack_40 != uVar7);
                  }
                }
                if (iStack_30 != -1) {
                  FUN_0041c607(local_5c,iStack_30);
                }
                uVar7 = iStack_28 - iStack_2c;
                FUN_0041c607(iVar9,uStack_70);
                iVar9 = *param_2 + uVar7;
                if ((uint)(param_2[9] - *param_2) <= uVar7) {
                  iVar9 = param_2[9];
                }
                param_2[8] = iVar9;
                uVar7 = uStack_74;
              }
              uVar7 = uVar7 + uStack_4e;
              uVar8 = uStack_44 + 1;
            } while (uVar8 != uStack_48);
          }
          iVar9 = iStack_60;
          if (*(int *)(param_1 + 0x2c0) != 0) {
            uVar7 = 0;
            do {
              piVar1 = (int *)(*(int *)(param_1 + 0x2c4) + uVar7 * 4);
              *piVar1 = *piVar1 + (*(int *)(iStack_60 + uVar7 * 4) + 0x200 >> 10);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1 + 0x2c0));
          }
          FUN_00421960((int *)(param_1 + 0x6c),&LAB_0043f035,0);
        }
LAB_0043ec27:
        iVar6 = local_5c;
        if (iStack_58 != -1) {
          FUN_0041c607(local_5c,iStack_58);
        }
        FUN_0041c607(iVar6,iVar9);
        FUN_0041c607(iVar6,iStack_64);
      }
    }
    else {
      iStack_18 = 0;
    }
    FUN_00420cde(param_2);
    iVar9 = iStack_18;
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&uStack_74)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&uStack_74);
  }
  return iVar9;
}

