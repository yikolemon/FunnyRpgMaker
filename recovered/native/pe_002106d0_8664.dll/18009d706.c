/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009d706 */

void FUN_18009d706(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_18000358a(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_18009d746(param_1);
  return;
}

