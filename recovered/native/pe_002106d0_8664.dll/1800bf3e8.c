/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf3e8 */

void FUN_1800bf3e8(longlong param_1)

{
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    (*DAT_180417870)(*(undefined8 *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

