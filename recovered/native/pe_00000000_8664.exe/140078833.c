/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140078833 */

void FUN_140078833(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

