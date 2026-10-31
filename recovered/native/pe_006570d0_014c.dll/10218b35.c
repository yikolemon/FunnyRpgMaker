/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10218b35 */

int __fastcall FUN_10218b35(int param_1,int param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28 [2];
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  iVar2 = *(int *)(param_1 + 0xc);
  local_18 = FUN_101c461e(param_2,iVar2 + 0xc);
  iVar1 = local_18;
  if (local_18 == 0) {
    if (*(short *)(param_1 + 4) == 0) {
      *param_3 = 0;
    }
    else {
      iVar2 = iVar2 + 0x1c;
      uVar3 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_18 = 0;
      do {
        local_18 = FUN_101c4f57(param_2,&DAT_103222c4,local_28);
        if (local_18 != 0) {
          *(short *)(param_1 + 4) = (short)uVar3;
          break;
        }
        if ((local_20 <= *(uint *)(param_2 + 4)) &&
           (((local_2c = local_1c, local_30 = iVar2, local_1c <= *(uint *)(param_2 + 4) - local_20
             || (local_28[0] == 0x766d7478)) || (local_28[0] == 0x686d7478)))) {
          local_34 = local_34 + 1;
          if (local_28[0] < 0x62686564) {
            if (local_28[0] == 0x4d455441) {
              local_40 = 1;
            }
            else if (local_28[0] == 0x53494e47) {
              local_3c = 1;
            }
          }
          else if ((local_28[0] == 0x68656164) || (local_28[0] == 0x62686564)) {
            if (local_1c < 0x36) {
              iVar1 = 0x8e;
              goto LAB_10218cf6;
            }
            local_18 = FUN_101c461e(param_2,local_20 + 0xc);
            iVar1 = local_18;
            if ((local_18 != 0) ||
               (FUN_101c4970(param_2,&local_18), iVar1 = local_18, local_18 != 0))
            goto LAB_10218cf6;
            iVar1 = FUN_101c461e(param_2,iVar2);
            local_38 = 1;
            local_18 = iVar1;
            if (iVar1 != 0) goto LAB_10218cf6;
          }
        }
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x10;
      } while (uVar3 < *(ushort *)(param_1 + 4));
      *param_3 = (short)local_34;
      if ((short)local_34 != 0) {
        iVar1 = 0;
        if (local_38 == 0) {
          iVar1 = 0;
          if (local_40 == 0) {
            iVar1 = 0x8e;
          }
          if (local_3c == 0) {
            iVar1 = 0x8e;
          }
        }
        goto LAB_10218cf6;
      }
    }
    iVar1 = 2;
  }
LAB_10218cf6:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar1;
}

