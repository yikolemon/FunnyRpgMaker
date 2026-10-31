/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137550 */

void FUN_140137550(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x20) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffdf;
    thunk_FUN_1400de380(param_2 + 0x188);
  }
  return;
}

