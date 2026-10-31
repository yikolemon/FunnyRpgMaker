/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009d6a2 */

undefined8 FUN_14009d6a2(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x30)) {
    FUN_14000f628(param_2,&DAT_140174404);
  }
  else {
    FUN_14000892c(param_2);
  }
  return param_2;
}

