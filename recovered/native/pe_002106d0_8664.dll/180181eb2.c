/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180181eb2 */

void FUN_180181eb2(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1801820c4(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x70;
    return;
  }
  FUN_180181ef2(param_1);
  return;
}

