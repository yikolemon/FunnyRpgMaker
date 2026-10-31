/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008abca */

void FUN_18008abca(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800895fc(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_18008ac0a(param_1);
  return;
}

