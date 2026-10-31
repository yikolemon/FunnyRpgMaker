/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400319d0 */

void Unwind_1400319d0(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x2c) & 1) != 0) {
    thunk_FUN_1400ddcd0(*(undefined8 *)(param_2 + 0x20),0x3d0);
  }
  return;
}

