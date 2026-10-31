/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180046a19 */

short * FUN_180046a19(short *param_1,short *param_2,undefined8 *param_3)

{
  short sVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  sVar1 = *param_1;
  if ((sVar1 == 0x7d) || (sVar1 == 0x3a)) {
    FUN_180046ad8(*param_3);
LAB_180046a9f:
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((ushort)(sVar1 - 0x30U) < 10) {
    local_24 = 0;
    if (sVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (short *)FUN_180045fdf(param_1,param_2,&local_24);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      FUN_180046b56(*param_3,local_24);
      goto LAB_180046a9f;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005ebc("Invalid format string.");
}

