/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005702e */

void FUN_18005702e(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800553fc(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_18005706e(param_1);
  return;
}

