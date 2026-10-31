/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180186380 */

void FUN_180186380(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_18018657e(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x40;
    return;
  }
  FUN_1801863c0(param_1);
  return;
}

