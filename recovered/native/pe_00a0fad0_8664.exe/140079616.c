/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140079616 */

void FUN_140079616(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_140079826(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x50;
    return;
  }
  FUN_140079656(param_1);
  return;
}

