/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140075326 */

void FUN_140075326(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1400032ac(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_140075366(param_1);
  return;
}

