/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401374f0 */

void FUN_1401374f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 8) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffff7;
    thunk_FUN_1400de380(param_2 + 0x108);
  }
  return;
}

