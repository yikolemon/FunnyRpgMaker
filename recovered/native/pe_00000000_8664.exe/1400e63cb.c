/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e63cb */

void FUN_1400e63cb(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 < param_3) {
    do {
      FUN_1400e6409(param_1,param_2);
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  return;
}

