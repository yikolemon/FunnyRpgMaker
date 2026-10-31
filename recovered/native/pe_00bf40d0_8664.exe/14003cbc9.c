/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003cbc9 */

void FUN_14003cbc9(uint *param_1)

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

