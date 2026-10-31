/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ae57 */

void FUN_18019ae57(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 < param_3) {
    do {
      FUN_18019ae95(param_1,param_2);
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  return;
}

