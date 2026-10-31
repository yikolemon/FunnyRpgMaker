/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027ba57 */

void FUN_1027ba57(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_10274120(*param_1);
  }
  return;
}

