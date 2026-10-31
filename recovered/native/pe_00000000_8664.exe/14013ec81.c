/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013ec81 */

void FUN_14013ec81(uint *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)(param_1[1] != 0);
  }
  *param_1 = uVar1;
  return;
}

