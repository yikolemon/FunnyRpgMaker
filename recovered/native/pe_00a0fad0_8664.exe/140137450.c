/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137450 */

void FUN_140137450(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    FUN_1400017de(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}

