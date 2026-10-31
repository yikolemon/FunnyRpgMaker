/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258ef0 */

void FUN_10258ef0(undefined4 *param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[1] = param_2;
  *param_1 = std::bad_typeid::vftable;
  return;
}

