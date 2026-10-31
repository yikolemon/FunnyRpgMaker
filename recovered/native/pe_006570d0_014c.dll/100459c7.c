/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100459c7 */

undefined1 * FUN_100459c7(undefined1 *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *local_38;
  uint *local_34;
  undefined2 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [24];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_38;
  if (NAN((float)param_3)) {
    local_38 = param_3;
    iVar1 = FUN_10269150();
    local_30 = (undefined2 *)local_24;
    if (iVar1 != 0) {
      local_30 = (undefined2 *)(local_24 + 1);
      local_24[0] = 0x2d;
    }
    *(undefined1 *)(local_30 + 1) = 0x6e;
    *local_30 = 0x616e;
    local_30 = (undefined2 *)((int)local_30 + 3);
    if (local_30 != (undefined2 *)local_24) goto LAB_10045a0e;
  }
  local_34 = &local_c;
  local_28 = 0;
  local_2c = 0;
  local_30 = (undefined2 *)param_3;
  local_38 = local_24;
  local_30 = (undefined2 *)FUN_10007a59();
LAB_10045a0e:
  local_2c = param_2;
  local_34 = (uint *)local_24;
  local_38 = param_1;
  FUN_10045530();
  if (DAT_10388d00 != (local_c ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

