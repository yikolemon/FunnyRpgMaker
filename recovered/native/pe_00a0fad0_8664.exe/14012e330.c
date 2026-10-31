/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012e330 */

void FUN_14012e330(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x22;
    return;
  }
  return;
}

