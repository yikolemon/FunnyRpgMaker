/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140040ca0 */

void FUN_140040ca0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_140040ebe(*(longlong *)(param_1 + 8),param_2,param_3);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
    return;
  }
  FUN_140040ce6(param_1);
  return;
}

