/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137920 */

void FUN_140137920(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x10) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffef;
    FUN_1400017de(param_2 + 0x148);
  }
  return;
}

