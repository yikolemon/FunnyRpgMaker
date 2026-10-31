/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001f18e */

longlong * FUN_14001f18e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_1 + 0x250);
  if (*(longlong *)(param_1 + 0x250) == *(longlong *)(param_1 + 600)) {
    plVar1 = (longlong *)(param_1 + 0x238);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_28 = param_2;
  FUN_140020d68(param_2,plVar1[1] - *plVar1 >> 5,plVar1,plVar1 + 1);
  if (*(char *)(param_1 + 0x268) < '\x04') {
    if (*(char *)(param_1 + 0x268) == '\0') {
      if (local_28 != (longlong *)(param_1 + 0x238)) {
        FUN_140020e9e(local_28,*(longlong *)(param_1 + 0x238),
                      *(longlong *)(param_1 + 0x240) - *(longlong *)(param_1 + 0x238) >> 5);
      }
      FUN_1400203b6(param_1,local_28);
    }
    if (*local_28 != local_28[1]) {
      local_48 = 0;
      lStack_40 = 0;
      local_38 = 0;
      FUN_140020762(param_1,&local_48,local_28);
      plVar1 = local_28;
      if ((local_28 != &local_48) && (local_48 != lStack_40)) {
        FUN_14000eeca(local_28);
        *plVar1 = local_48;
        plVar1[1] = lStack_40;
        plVar1[2] = local_38;
        local_48 = 0;
        lStack_40 = 0;
        local_38 = 0;
      }
      FUN_14000eeca(&local_48);
    }
  }
  return local_28;
}

