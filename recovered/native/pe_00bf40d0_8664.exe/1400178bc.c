/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400178bc */

byte * FUN_1400178bc(longlong param_1,byte *param_2,byte *param_3)

{
  ulonglong uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_14008b0a0((uint)*param_2,(UINT *)(param_1 + 0x10));
      *param_2 = (byte)uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

