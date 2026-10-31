/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402577dd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_1402577dd(short *param_1,short *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  if ((ushort)(*param_1 - 0x31U) < 9) {
    local_28 = (undefined8 *)((ulonglong)local_28 & 0xffffffff00000000);
    param_1 = (short *)FUN_1402574af(param_1,param_2,&local_28);
    *(undefined4 *)*param_3 = local_28._0_4_;
  }
  else if (*param_1 == 0x7b) {
    param_1 = param_1 + 1;
    if (param_1 != param_2) {
      local_28 = param_3;
      param_1 = (short *)FUN_140257d84(param_1,param_2);
    }
    if ((param_1 == param_2) || (*param_1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
      FUN_14021738c("ne.");
    }
    param_1 = param_1 + 1;
  }
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_48);
}

