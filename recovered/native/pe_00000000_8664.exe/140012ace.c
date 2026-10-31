/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140012ace */

void FUN_140012ace(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_140010a1a(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_140012b0e(param_1);
  return;
}

