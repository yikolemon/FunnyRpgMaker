/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ff577 */

void FUN_1800ff577(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

