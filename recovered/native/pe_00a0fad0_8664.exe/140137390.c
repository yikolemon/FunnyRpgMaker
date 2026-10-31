/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137390 */

void FUN_140137390(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xc0) & 1) != 0) {
    *(uint *)(param_2 + 0xc0) = *(uint *)(param_2 + 0xc0) & 0xfffffffe;
    FUN_1400080f6(param_2 + 0x20);
  }
  return;
}

