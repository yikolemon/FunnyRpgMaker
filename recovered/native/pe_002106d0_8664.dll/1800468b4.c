/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800468b4 */

short * FUN_1800468b4(short *param_1,short *param_2,undefined8 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  sVar1 = *param_1;
  if ((sVar1 == 0x7d) || (sVar1 == 0x3a)) {
    param_3 = (undefined8 *)*param_3;
    FUN_18004699c(param_3,local_38);
LAB_180046955:
    uVar2 = FUN_18000a77e(local_38);
    *(undefined4 *)*param_3 = uVar2;
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((ushort)(sVar1 - 0x30U) < 10) {
    local_3c = 0;
    if (sVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (short *)FUN_180045fdf(param_1,param_2,&local_3c);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      param_3 = (undefined8 *)*param_3;
      FUN_1800469dc(param_3,local_38,local_3c);
      goto LAB_180046955;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005ebc("Invalid format string.");
}

