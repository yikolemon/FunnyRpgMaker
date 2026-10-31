/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e6a2c */

int __fastcall FUN_101e6a2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  ushort uVar10;
  uint uVar11;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  byte *pbStack_34;
  int iStack_30;
  ushort uStack_2c;
  ushort uStack_2a;
  int iStack_28;
  ushort uStack_24;
  byte bStack_22;
  int iStack_20;
  uint local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&uStack_40;
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x2e0);
  iStack_18 = (**(code **)(param_1 + 0x204))(param_1,0x67766172,iVar1,&local_1c);
  if (iStack_18 != 0) goto LAB_101e6ad5;
  iVar5 = FUN_101c4a88(iVar1);
  iStack_18 = FUN_101c4f57(iVar1,&DAT_1030e364,&iStack_30);
  if (iStack_18 != 0) goto LAB_101e6ad5;
  if ((((iStack_30 != 0x10000) || (uStack_2c != **(ushort **)(iVar3 + 0xc))) ||
      (local_1c >> 1 <= (uint)uStack_2a * (uint)uStack_2c &&
       (uint)uStack_2a * (uint)uStack_2c - (local_1c >> 1) != 0)) ||
     (uVar11 = uStack_24 + 1 << (bStack_22 & 1) + 1, local_1c < uVar11)) {
    iStack_18 = 8;
    goto LAB_101e6ad5;
  }
  *(uint *)(iVar3 + 0x50) = local_1c;
  pbStack_34 = (byte *)(iStack_20 + iVar5);
  iStack_18 = FUN_101c4b69(iVar1,uVar11);
  if (iStack_18 != 0) goto LAB_101e6ad5;
  uStack_3c = *(uint *)(iVar1 + 0x20);
  uVar6 = FUN_101c2a50(uVar2,4,0,uStack_24 + 1,0,&iStack_18);
  *(undefined4 *)(iVar3 + 0x4c) = uVar6;
  if (iStack_18 == 0) {
    uStack_38 = local_1c + iVar5;
    iVar7 = *(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x20);
    if ((bStack_22 & 1) == 0) {
      if ((int)((uint)uStack_24 * 2) <= iVar7) {
        uStack_40 = 0;
        uVar11 = 0xffffffff;
        do {
          *(byte **)(*(int *)(iVar3 + 0x4c) + 4 + uVar11 * 4) =
               pbStack_34 +
               (uint)*(byte *)(uStack_3c + 2 + uVar11 * 2) * 0x200 +
               (uint)*(byte *)(uStack_3c + 3 + uVar11 * 2) * 2;
          iVar7 = *(int *)(iVar3 + 0x4c);
          uVar8 = *(uint *)(iVar7 + 4 + uVar11 * 4);
          uVar4 = uVar8;
          if (uVar8 < uStack_40) {
            *(uint *)(iVar7 + 4 + uVar11 * 4) = uStack_40;
            iVar7 = *(int *)(iVar3 + 0x4c);
            uVar8 = *(uint *)(iVar7 + 4 + uVar11 * 4);
            uVar4 = uStack_40;
          }
          uStack_40 = uVar4;
          if (uStack_38 < uVar8) {
            *(uint *)(iVar7 + 4 + uVar11 * 4) = uStack_38;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uStack_24);
LAB_101e6c47:
        *(uint *)(iVar3 + 0x48) = (uint)uStack_24;
        FUN_101c4c66(iVar1);
        if (uStack_2a == 0) goto LAB_101e6ad5;
        iStack_18 = FUN_101c461e(iVar1,iVar5 + iStack_28);
        if ((iStack_18 == 0) &&
           (iStack_18 = FUN_101c4b69(iVar1,(uint)uStack_2c * (uint)uStack_2a * 2), iStack_18 == 0))
        {
          pbStack_34 = *(byte **)(iVar1 + 0x20);
          uVar6 = FUN_101c2a50(uVar2,4,0,(uint)uStack_2a * (uint)uStack_2c,0,&iStack_18);
          *(undefined4 *)(iVar3 + 0x40) = uVar6;
          if (iStack_18 == 0) {
            uStack_38 = CONCAT22(uStack_38._2_2_,uStack_2a);
            uStack_3c = 0;
            if (uStack_2a != 0) {
              iVar5 = 0;
              uVar11 = 0;
              uVar10 = uStack_2c;
              do {
                uStack_40 = uVar11;
                uVar11 = 0;
                if (uVar10 == 0) {
                  uVar10 = 0;
                }
                else {
                  uVar8 = (uint)uVar10;
                  do {
                    pbVar9 = pbStack_34;
                    pbStack_34 = pbVar9 + 2;
                    *(uint *)(uVar8 * iVar5 + *(int *)(iVar3 + 0x40) + uVar11 * 4) =
                         ((int)(short)((ushort)*pbVar9 << 8) + (uint)pbVar9[1]) * 4;
                    uVar11 = uVar11 + 1;
                    uVar8 = (uint)uStack_2c;
                  } while (uVar11 < uVar8);
                  uStack_38._2_2_ = (undefined2)((uint)pbVar9 >> 0x10);
                  uStack_38 = CONCAT22(uStack_38._2_2_,uStack_2a);
                  uVar10 = uStack_2c;
                }
                uStack_3c = uStack_38 & 0xffff;
                iVar5 = iVar5 + 4;
                uVar11 = uStack_40 + 1;
              } while (uStack_40 + 1 < uStack_3c);
            }
            uVar6 = FUN_101c00c3(uVar2,4,0,uStack_3c,0,&iStack_18);
            *(undefined4 *)(iVar3 + 0x44) = uVar6;
            if (iStack_18 == 0) {
              *(uint *)(iVar3 + 0x3c) = (uint)uStack_2a;
              FUN_101c4c66(iVar1);
              goto LAB_101e6ad5;
            }
          }
          goto LAB_101e6b43;
        }
        goto LAB_101e6c96;
      }
    }
    else if ((int)((uint)uStack_24 * 4) <= iVar7) {
      uStack_40 = 0;
      uVar11 = 0xffffffff;
      do {
        uVar8 = *(uint *)(uStack_3c + 4 + uVar11 * 4);
        *(byte **)(*(int *)(iVar3 + 0x4c) + 4 + uVar11 * 4) =
             pbStack_34 +
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18);
        iVar7 = *(int *)(iVar3 + 0x4c);
        uVar8 = *(uint *)(iVar7 + 4 + uVar11 * 4);
        uVar4 = uVar8;
        if (uVar8 < uStack_40) {
          *(uint *)(iVar7 + 4 + uVar11 * 4) = uStack_40;
          iVar7 = *(int *)(iVar3 + 0x4c);
          uVar8 = *(uint *)(iVar7 + 4 + uVar11 * 4);
          uVar4 = uStack_40;
        }
        uStack_40 = uVar4;
        if (uStack_38 < uVar8) {
          *(uint *)(iVar7 + 4 + uVar11 * 4) = uStack_38;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uStack_24);
      goto LAB_101e6c47;
    }
    iStack_18 = 8;
  }
  else {
LAB_101e6b43:
    FUN_101c4c66(iVar1);
  }
LAB_101e6c96:
  FUN_101c0017(uVar2,*(undefined4 *)(iVar3 + 0x4c));
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
LAB_101e6ad5:
  if (DAT_10388d00 != (local_14 ^ (uint)&uStack_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iStack_18;
}

