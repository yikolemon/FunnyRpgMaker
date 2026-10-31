/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140012852 */

void FUN_140012852(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_14000f088(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_140012892(param_1);
  return;
}

