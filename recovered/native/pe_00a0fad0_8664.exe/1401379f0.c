/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401379f0 */

void FUN_1401379f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1400017de(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}

