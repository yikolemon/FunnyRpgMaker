/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140083eed */

undefined8 FUN_140083eed(longlong *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  while( true ) {
    uVar1 = (int)param_1[0x410] - (int)param_1[0x40f];
    if (param_2 < uVar1) {
      uVar1 = param_2;
    }
    param_1[0x40f] = param_1[0x40f] + (ulonglong)uVar1;
    *(int *)((longlong)param_1 + 0x2074) = *(int *)((longlong)param_1 + 0x2074) + uVar1;
    param_2 = param_2 - uVar1;
    if (param_2 == 0) break;
    uVar2 = FUN_140083f37(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}

