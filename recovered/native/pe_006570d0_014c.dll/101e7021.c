/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e7021 */

int __fastcall FUN_101e7021(int param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
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
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  uint local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&uStack_74;
  puVar2 = *(uint **)(param_1 + 0x2e0);
  local_24 = 0;
  iVar10 = 0;
  if ((((puVar2 != (uint *)0x0) && (*(int *)(param_1 + 0x2c4) != 0)) &&
      (local_5c = param_2[7],
      iVar5 = (**(code **)(param_1 + 0x204))(param_1,0x63766172,param_2,&local_1c), iVar5 == 0)) &&
     (iStack_18 = FUN_101c4b69(param_2,local_1c), iStack_18 == 0)) {
    iVar10 = param_2[8];
    iVar5 = *param_2;
    iVar6 = FUN_101c4ce4(param_2);
    if (iVar6 == 0x10000) {
      uStack_74 = iVar10 - iVar5;
      uVar7 = FUN_101c4ca6(param_2);
      uVar8 = FUN_101c4ca6(param_2);
      uStack_48 = uVar7 & 0xfff;
      if (local_1c < (uVar8 & 0xffff) + uStack_48 * 4) {
        iStack_18 = 8;
      }
      else {
        uVar8 = uStack_74 + (uVar8 & 0xffff);
        if ((short)uVar7 < 0) {
          iVar10 = *param_2;
          uStack_6c = param_2[8] - iVar10;
          iVar5 = iVar10 + uVar8;
          if ((uint)(param_2[9] - iVar10) <= uVar8) {
            iVar5 = param_2[9];
          }
          param_2[8] = iVar5;
          iStack_58 = FUN_101e751b();
          iVar10 = *param_2;
          uStack_74 = param_2[8] - iVar10;
          iVar5 = iVar10 + uStack_6c;
          if ((uint)(param_2[9] - iVar10) <= uStack_6c) {
            iVar5 = param_2[9];
          }
          param_2[8] = iVar5;
        }
        else {
          iStack_58 = 0;
          uStack_74 = uVar8;
        }
        iStack_64 = FUN_101c2a50(local_5c,4,0,*puVar2 * 3,0,&iStack_18);
        iVar10 = 0;
        if ((iStack_18 == 0) &&
           (iVar10 = FUN_101c00c3(local_5c,4,0,*(undefined4 *)(param_1 + 0x2c0),0,&iStack_18),
           iStack_18 == 0)) {
          iStack_60 = iVar10;
          if (uStack_48 != 0) {
            iStack_4c = iStack_64 + *puVar2 * 4;
            uStack_6c = iStack_4c + *puVar2 * 4;
            uVar8 = 0;
            iStack_38 = local_24;
            uVar7 = uStack_74;
            iStack_34 = param_1;
            do {
              uStack_44 = uVar8;
              uStack_4e = FUN_101c4ca6(param_2);
              uVar8 = FUN_101c4ca6(param_2);
              uStack_70 = uVar8 & 0xffff;
              uStack_74 = uVar7;
              if ((short)uVar8 < 0) {
                iStack_68 = iStack_64;
                if (*puVar2 != 0) {
                  uVar7 = 0;
                  do {
                    sVar4 = FUN_101c4ca6(param_2);
                    *(int *)(iStack_64 + uVar7 * 4) = (int)sVar4 << 2;
                    uVar7 = uVar7 + 1;
                    uVar9 = *puVar2;
                    iVar10 = iStack_64;
                  } while (uVar7 < uVar9);
                  goto LAB_101e7262;
                }
              }
              else {
                if (puVar2[0xf] <= (uVar8 & 0xfff)) {
                  iStack_18 = 8;
                  iVar10 = iStack_60;
                  goto LAB_101e74b7;
                }
                uVar9 = *puVar2;
                iVar10 = (uVar8 & 0xfff) * uVar9 * 4 + puVar2[0x10];
LAB_101e7262:
                iVar5 = iStack_4c;
                iStack_68 = iVar10;
                if (((uStack_70 >> 0xe & 1) != 0) && (uVar9 != 0)) {
                  uVar7 = 0;
                  do {
                    sVar4 = FUN_101c4ca6(param_2);
                    param_1 = iStack_34;
                    *(int *)(iVar5 + uVar7 * 4) = (int)sVar4 << 2;
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < *puVar2);
                  if (*puVar2 != 0) {
                    uVar7 = 0;
                    do {
                      sVar4 = FUN_101c4ca6(param_2);
                      *(int *)(uStack_6c + uVar7 * 4) = (int)sVar4 << 2;
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < *puVar2);
                  }
                }
              }
              uVar7 = uStack_74;
              iStack_3c = FUN_101e76a2(iStack_68,iStack_4c,uStack_6c);
              if (iStack_3c != 0) {
                iStack_2c = *param_2;
                iVar10 = iStack_2c + uVar7;
                if ((uint)(param_2[9] - iStack_2c) <= uVar7) {
                  iVar10 = param_2[9];
                }
                iStack_28 = param_2[8];
                param_2[8] = iVar10;
                if ((uStack_70 >> 0xd & 1) == 0) {
                  iStack_20 = iStack_38;
                  iStack_30 = 0;
                  iStack_54 = iStack_58;
                }
                else {
                  iStack_30 = FUN_101e751b();
                  iStack_54 = iStack_30;
                }
                iStack_40 = iStack_20;
                uStack_70 = FUN_101e7762();
                iVar10 = local_5c;
                if ((iStack_54 != 0) && (uStack_70 != 0)) {
                  if (iStack_54 == -1) {
                    if (*(int *)(param_1 + 0x2c0) != 0) {
                      uVar7 = 0;
                      do {
                        lVar3 = (longlong)iStack_3c * (longlong)*(int *)(uStack_70 + uVar7 * 4);
                        iVar5 = (int)(lVar3 >> 0x3f);
                        lVar3 = lVar3 + CONCAT44(iVar5,iVar5) + 0x8000;
                        piVar1 = (int *)(iStack_60 + uVar7 * 4);
                        *piVar1 = *piVar1 + ((int)((ulonglong)lVar3 >> 0x20) << 0x10 |
                                            (uint)lVar3 >> 0x10);
                        uVar7 = uVar7 + 1;
                      } while (uVar7 < *(uint *)(param_1 + 0x2c0));
                    }
                  }
                  else if (iStack_40 != 0) {
                    iVar5 = 0;
                    do {
                      uVar7 = (uint)*(ushort *)(iStack_54 + iVar5 * 2);
                      if (uVar7 < *(uint *)(param_1 + 0x2c0)) {
                        lVar3 = (longlong)iStack_3c * (longlong)*(int *)(uStack_70 + iVar5 * 4);
                        iStack_68 = (int)((ulonglong)lVar3 >> 0x20);
                        lVar3 = lVar3 + CONCAT44(iStack_68 >> 0x1f,iStack_68 >> 0x1f) + 0x8000;
                        piVar1 = (int *)(iStack_60 + uVar7 * 4);
                        *piVar1 = *piVar1 + ((int)((ulonglong)lVar3 >> 0x20) * 0x10000 |
                                            (uint)lVar3 >> 0x10);
                      }
                      iVar5 = iVar5 + 1;
                    } while (iStack_40 != iVar5);
                  }
                }
                if (iStack_30 != -1) {
                  FUN_101c0017(local_5c,iStack_30);
                }
                uVar7 = iStack_28 - iStack_2c;
                FUN_101c0017(iVar10,uStack_70);
                iVar10 = *param_2 + uVar7;
                if ((uint)(param_2[9] - *param_2) <= uVar7) {
                  iVar10 = param_2[9];
                }
                param_2[8] = iVar10;
                uVar7 = uStack_74;
              }
              uVar7 = uVar7 + uStack_4e;
              uVar8 = uStack_44 + 1;
            } while (uVar8 != uStack_48);
          }
          iVar10 = iStack_60;
          if (*(int *)(param_1 + 0x2c0) != 0) {
            uVar7 = 0;
            do {
              piVar1 = (int *)(*(int *)(param_1 + 0x2c4) + uVar7 * 4);
              *piVar1 = *piVar1 + (*(int *)(iStack_60 + uVar7 * 4) + 0x200 >> 10);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(param_1 + 0x2c0));
          }
          FUN_101c58e8(param_1 + 0x6c,&LAB_101e78c5,0);
        }
LAB_101e74b7:
        iVar5 = local_5c;
        if (iStack_58 != -1) {
          FUN_101c0017(local_5c,iStack_58);
        }
        FUN_101c0017(iVar5,iVar10);
        FUN_101c0017(iVar5,iStack_64);
      }
    }
    else {
      iStack_18 = 0;
    }
    FUN_101c4c66(param_2);
    iVar10 = iStack_18;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&uStack_74)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

