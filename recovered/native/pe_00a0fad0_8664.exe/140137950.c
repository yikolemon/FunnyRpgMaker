/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137950 */

void FUN_140137950(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x20) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffdf;
    FUN_1400017de(param_2 + 0x188);
  }
  return;
}

