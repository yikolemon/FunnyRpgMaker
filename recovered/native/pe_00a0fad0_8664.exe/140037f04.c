/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140037f04 */

void FUN_140037f04(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_14003812c(*(longlong *)(param_1 + 8),param_2,param_3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
    return;
  }
  FUN_140037f4a(param_1);
  return;
}

