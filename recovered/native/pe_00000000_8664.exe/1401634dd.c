/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401634dd */

undefined8 FUN_1401634dd(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x58) != 3) {
    *(undefined4 *)(param_1 + 0x58) = 3;
    uVar1 = FUN_140163471();
    if ((int)uVar1 == 0) {
      uVar1 = FUN_140163434(param_1,param_2,param_3);
      return uVar1;
    }
  }
  return uVar1;
}

