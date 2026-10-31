/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004630d */

short * FUN_18004630d(short *param_1,short *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  if ((ushort)(*param_1 - 0x31U) < 9) {
    local_28 = (undefined8 *)((ulonglong)local_28 & 0xffffffff00000000);
    param_1 = (short *)FUN_180045fdf(param_1,param_2,&local_28);
    *(undefined4 *)*param_3 = local_28._0_4_;
  }
  else if (*param_1 == 0x7b) {
    param_1 = param_1 + 1;
    if (param_1 != param_2) {
      local_28 = param_3;
      param_1 = (short *)FUN_1800468b4(param_1,param_2);
    }
    if ((param_1 == param_2) || (*param_1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
      FUN_180005ebc("Invalid format string.");
    }
    param_1 = param_1 + 1;
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
}

