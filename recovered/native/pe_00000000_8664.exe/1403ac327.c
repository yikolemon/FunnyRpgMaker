/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ac327 */

void FUN_1403ac327(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 < param_3) {
    do {
      FUN_1403ac365(param_1,param_2);
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  return;
}

