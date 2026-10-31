/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005c9ae */

short * FUN_14005c9ae(short *param_1,short *param_2,undefined8 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  sVar1 = *param_1;
  if ((sVar1 == 0x7d) || (sVar1 == 0x3a)) {
    param_3 = (undefined8 *)*param_3;
    FUN_14005ca96(param_3,local_38);
LAB_14005ca4f:
    uVar2 = FUN_1400499d4(local_38);
    *(undefined4 *)*param_3 = uVar2;
    if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_68)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_20 ^ (ulonglong)auStack_68);
  }
  if ((ushort)(sVar1 - 0x30U) < 10) {
    local_3c = 0;
    if (sVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (short *)FUN_14005c0d9(param_1,param_2,&local_3c);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      param_3 = (undefined8 *)*param_3;
      FUN_14005cad6(param_3,local_38,local_3c);
      goto LAB_14005ca4f;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400451d8("Invalid format string.");
}

