/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c6330 */

void FUN_1401c6330(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xa8) & 1) != 0) {
    *(uint *)(param_2 + 0xa8) = *(uint *)(param_2 + 0xa8) & 0xfffffffe;
    FUN_14018bde0(*(longlong *)(param_2 + 0x90) + 0x10);
  }
  return;
}

