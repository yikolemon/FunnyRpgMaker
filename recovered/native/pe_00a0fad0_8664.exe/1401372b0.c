/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401372b0 */

void FUN_1401372b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1400017de(param_2 + 0xa0);
  }
  return;
}

