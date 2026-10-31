/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401378f0 */

void FUN_1401378f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 8) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffff7;
    FUN_1400017de(param_2 + 0xe8);
  }
  return;
}

