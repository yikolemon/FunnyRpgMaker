/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022061d */

void FUN_18022061d(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_180220656(param_1 + 3,uVar1);
  FUN_180220656(param_1 + 9,uVar1);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

