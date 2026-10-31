/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101412d9 */

void FUN_101412d9(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

