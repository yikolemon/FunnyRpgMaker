/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140257ee9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_140257ee9(short *param_1,short *param_2,undefined8 *param_3)

{
  short sVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  sVar1 = *param_1;
  if ((sVar1 == 0x7d) || (sVar1 == 0x3a)) {
    FUN_140257fa8(*param_3);
LAB_140257f6f:
    if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((ushort)(sVar1 - 0x30U) < 10) {
    local_24 = 0;
    if (sVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (short *)FUN_1402574af(param_1,param_2,&local_24);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      FUN_140258026(*param_3,local_24);
      goto LAB_140257f6f;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14021738c("ne.");
}

