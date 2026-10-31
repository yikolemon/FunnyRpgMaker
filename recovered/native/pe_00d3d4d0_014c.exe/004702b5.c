/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004702b5 */

int __fastcall FUN_004702b5(int param_1,int *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28 [2];
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_40;
  iVar1 = *(int *)(param_1 + 0xc);
  local_18 = FUN_00420696((int)param_2,iVar1 + 0xc);
  iVar2 = local_18;
  if (local_18 == 0) {
    if (*(short *)(param_1 + 4) == 0) {
      *param_3 = 0;
    }
    else {
      uVar3 = iVar1 + 0x1c;
      uVar4 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_18 = 0;
      do {
        local_18 = FUN_00420fcf(param_2,0x4f6864,(int)local_28);
        if (local_18 != 0) {
          *(short *)(param_1 + 4) = (short)uVar4;
          break;
        }
        if ((local_20 <= (uint)param_2[1]) &&
           (((local_2c = local_1c, local_30 = uVar3, local_1c <= param_2[1] - local_20 ||
             (local_28[0] == 0x766d7478)) || (local_28[0] == 0x686d7478)))) {
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
              iVar2 = 0x8e;
              goto LAB_00470476;
            }
            local_18 = FUN_00420696((int)param_2,local_20 + 0xc);
            iVar2 = local_18;
            if ((local_18 != 0) ||
               (FUN_004209e8(param_2,&local_18), iVar2 = local_18, local_18 != 0))
            goto LAB_00470476;
            iVar2 = FUN_00420696((int)param_2,uVar3);
            local_38 = 1;
            local_18 = iVar2;
            if (iVar2 != 0) goto LAB_00470476;
          }
        }
        uVar4 = uVar4 + 1;
        uVar3 = uVar3 + 0x10;
      } while (uVar4 < *(ushort *)(param_1 + 4));
      *param_3 = (short)local_34;
      if ((short)local_34 != 0) {
        iVar2 = 0;
        if (local_38 == 0) {
          iVar2 = 0;
          if (local_40 == 0) {
            iVar2 = 0x8e;
          }
          if (local_3c == 0) {
            iVar2 = 0x8e;
          }
        }
        goto LAB_00470476;
      }
    }
    iVar2 = 2;
  }
LAB_00470476:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_40);
  }
  return iVar2;
}

