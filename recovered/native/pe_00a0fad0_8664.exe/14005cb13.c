/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005cb13 */

short * FUN_14005cb13(short *param_1,short *param_2,undefined8 *param_3)

{
  short sVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  sVar1 = *param_1;
  if ((sVar1 == 0x7d) || (sVar1 == 0x3a)) {
    FUN_14005cbd2(*param_3);
LAB_14005cb99:
    if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_20 ^ (ulonglong)auStack_48);
  }
  if ((ushort)(sVar1 - 0x30U) < 10) {
    local_24 = 0;
    if (sVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (short *)FUN_14005c0d9(param_1,param_2,&local_24);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      FUN_14005cc50(*param_3,local_24);
      goto LAB_14005cb99;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400451d8("Invalid format string.");
}

