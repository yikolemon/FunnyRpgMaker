/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137850 */

void FUN_140137850(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_1400de380(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}

