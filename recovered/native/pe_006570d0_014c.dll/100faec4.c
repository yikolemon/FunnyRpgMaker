/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100faec4 */

void FUN_100faec4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

