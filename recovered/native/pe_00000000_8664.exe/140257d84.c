/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140257d84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_140257d84(short *param_1,short *param_2,undefined8 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  sVar1 = *param_1;
  if ((sVar1 == 0x7d) || (sVar1 == 0x3a)) {
    param_3 = (undefined8 *)*param_3;
    FUN_140257e6c(param_3,local_38);
LAB_140257e25:
    uVar2 = FUN_14021bc4e(local_38);
    *(undefined4 *)*param_3 = uVar2;
    if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_68)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((ushort)(sVar1 - 0x30U) < 10) {
    local_3c = 0;
    if (sVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (short *)FUN_1402574af(param_1,param_2,&local_3c);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      param_3 = (undefined8 *)*param_3;
      FUN_140257eac(param_3,local_38,local_3c);
      goto LAB_140257e25;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14021738c("ne.");
}

