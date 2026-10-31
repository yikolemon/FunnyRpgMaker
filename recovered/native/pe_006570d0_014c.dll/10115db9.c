/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115db9 */

void FUN_10115db9(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 >> 10 & 1) == 0) {
    uVar1 = FUN_101021d4(param_1,0);
  }
  FUN_10103f84(uVar1,param_2);
  return;
}

