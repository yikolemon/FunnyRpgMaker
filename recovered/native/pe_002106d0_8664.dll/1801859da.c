/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801859da */

void FUN_1801859da(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_180185bce(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x40;
    return;
  }
  FUN_180185a1a(param_1);
  return;
}

