/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ef5aa */

void FUN_1801ef5aa(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (*param_1 == 0) {
    uVar1 = (uint)(param_1[1] != 0);
  }
  *param_1 = uVar1;
  return;
}

