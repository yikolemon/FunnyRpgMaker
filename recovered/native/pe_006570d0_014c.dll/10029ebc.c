/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10029ebc */

undefined4
FUN_10029ebc(undefined4 param_1,undefined4 param_2,uint *param_3,int param_4,undefined4 param_5,
            uint *param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *local_3c;
  uint *local_38;
  undefined4 *local_34;
  uint *local_30;
  uint *local_2c;
  undefined4 *local_28;
  uint *local_24;
  undefined1 local_1d;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  uVar2 = param_3[2];
  local_18 = uVar2 + param_4;
  iVar1 = (param_4 + 1) - (uint)(param_7 == 0);
  if (-1 < (int)uVar2) {
    iVar1 = uVar2 + iVar1;
    local_1c = param_6[3] - local_18;
    if ((*param_6 >> 0xd & 1) != 0) {
      if ((*param_6 & 7) != 2 && (int)local_1c < 1) {
        local_1c = 0;
      }
      uVar2 = 0;
      if (0 < (int)local_1c) {
        uVar2 = local_1c;
      }
      iVar1 = iVar1 + 1 + uVar2;
    }
    local_3c = &param_7;
    local_38 = param_3;
    local_34 = &param_4;
    local_30 = (uint *)&local_1d;
    local_2c = param_6;
    local_28 = &param_5;
    local_24 = &local_1c;
    FUN_1002a458(param_1,param_2,param_6,iVar1,iVar1,&local_3c);
    goto LAB_1002a03d;
  }
  if (0 < (int)local_18) {
    local_1c = param_6[3] - param_4 & (int)(*param_6 << 0x12) >> 0x1f;
    local_24 = &local_1c;
    uVar2 = local_1c;
    if ((int)local_1c < 1) {
      uVar2 = 0;
    }
    iVar1 = iVar1 + uVar2 + 1;
    local_3c = &param_7;
    local_38 = param_3;
    local_34 = &param_4;
    local_30 = &local_18;
    local_2c = &param_5;
    local_28 = (undefined4 *)&local_1d;
    FUN_1002a622(param_1,param_2,param_6,iVar1,iVar1,&local_3c);
    goto LAB_1002a03d;
  }
  local_1c = -local_18;
  if (param_4 == 0) {
    uVar2 = param_6[3];
    if ((int)uVar2 < (int)local_1c && -1 < (int)uVar2) {
      local_1c = uVar2;
    }
    if (local_1c != 0) goto LAB_10029ff6;
    local_1d = (undefined1)((*param_6 & 0x2000) >> 0xd);
    iVar3 = 2 - (uint)((*param_6 & 0x2000) == 0);
    uVar2 = 0;
  }
  else {
LAB_10029ff6:
    local_1d = 1;
    iVar3 = 2;
    uVar2 = local_1c;
  }
  iVar1 = iVar1 + iVar3 + uVar2;
  local_3c = &param_7;
  local_38 = (uint *)&local_1d;
  local_34 = &param_5;
  local_30 = &local_1c;
  local_2c = param_3;
  local_28 = &param_4;
  FUN_1002a868(param_1,param_2,param_6,iVar1,iVar1,&local_3c);
LAB_1002a03d:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

