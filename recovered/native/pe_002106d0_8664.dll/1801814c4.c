/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801814c4 */

void FUN_1801814c4(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_180181688(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x1c;
    return;
  }
  FUN_180181504(param_1);
  return;
}

