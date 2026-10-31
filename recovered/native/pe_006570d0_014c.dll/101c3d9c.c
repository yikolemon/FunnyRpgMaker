/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c3d9c */

undefined4 FUN_101c3d9c(ushort *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int iStack_20;
  uint uStack_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  local_24 = 0;
  iStack_20 = 0;
  uStack_1c = 0;
  iStack_18 = 0;
  uVar1 = 0;
  if ((param_1 != (ushort *)0x0) && (param_1[1] != 0)) {
    FUN_101c0df9(param_1,&local_24);
    uVar1 = 2;
    if (local_24 != uStack_1c) {
      uVar4 = iStack_18 - iStack_20;
      if ((((uVar4 != 0) && (iStack_18 < 0x1000001)) && ((int)uStack_1c < 0x1000001)) &&
         ((-0x1000001 < (int)local_24 && (-0x1000001 < iStack_20)))) {
        uVar11 = -uStack_1c;
        if ((int)-uStack_1c < 0) {
          uVar11 = uStack_1c;
        }
        uVar8 = -local_24;
        if ((int)-local_24 < 0) {
          uVar8 = local_24;
        }
        iVar2 = 0x1f;
        if ((uVar8 | uVar11) != 0) {
          for (; (uVar8 | uVar11) >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar2 = iVar2 + -0xe;
        iVar10 = 0;
        if (iVar2 < 1) {
          iVar2 = 0;
        }
        iVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = iVar5 + -0xe;
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        local_30 = (uint)*param_1;
        if (local_30 != 0) {
          local_40 = *(int *)(param_1 + 2);
          local_34 = *(int *)(param_1 + 6);
          uVar4 = 0;
          uVar11 = 0xffffffff;
          do {
            local_2c = uVar4;
            uVar8 = (uint)*(ushort *)(local_34 + local_2c * 2);
            if ((int)uVar11 < (int)uVar8) {
              iVar3 = *(int *)(local_40 + uVar8 * 8) >> ((byte)iVar2 & 0x1f);
              iVar6 = *(int *)(local_40 + 4 + uVar8 * 8) >> ((byte)iVar5 & 0x1f);
              do {
                iVar9 = *(int *)(local_40 + 8 + uVar11 * 8) >> ((byte)iVar2 & 0x1f);
                iVar7 = *(int *)(local_40 + 0xc + uVar11 * 8) >> ((byte)iVar5 & 0x1f);
                iVar10 = iVar10 + (iVar3 + iVar9) * (iVar7 - iVar6);
                uVar11 = uVar11 + 1;
                iVar3 = iVar9;
                iVar6 = iVar7;
                local_28 = uVar8;
              } while (uVar8 != uVar11);
            }
            uVar4 = local_2c + 1;
            uVar11 = uVar8;
          } while (local_2c + 1 != local_30);
          local_3c = iVar5;
          local_38 = iVar2;
          if (0 < iVar10) {
            uVar1 = 1;
            goto LAB_101c3df1;
          }
          uVar1 = 0;
          if (iVar10 != 0) goto LAB_101c3df1;
        }
        uVar1 = 2;
      }
    }
  }
LAB_101c3df1:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_40)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

