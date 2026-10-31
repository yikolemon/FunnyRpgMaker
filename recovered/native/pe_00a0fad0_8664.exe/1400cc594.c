/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cc594 */

undefined8 FUN_1400cc594(longlong param_1,undefined8 param_2)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) < 0x21) {
    FUN_14000f628(param_2,&DAT_140174404);
  }
  else {
    FUN_14000892c(param_2,*(longlong *)(param_1 + 0x28) + 0x20);
  }
  return param_2;
}

