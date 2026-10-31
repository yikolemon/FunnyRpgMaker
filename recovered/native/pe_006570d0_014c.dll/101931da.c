/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101931da */

void FUN_101931da(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 < param_3) {
    do {
      FUN_10193218(param_1,param_2);
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
  }
  return;
}

