/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bb968 */

void FUN_1800bb968(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800bbb90(*(longlong *)(param_1 + 8),param_2,param_3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
    return;
  }
  FUN_1800bb9ae(param_1);
  return;
}

