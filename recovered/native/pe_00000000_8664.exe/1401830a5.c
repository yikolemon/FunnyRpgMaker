/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401830a5 */

void FUN_1401830a5(longlong param_1)

{
  if ((*(char *)(param_1 + 0x78) == '\x01') && (*(char *)(param_1 + 0x79) == '\x01')) {
    (**(code **)(param_1 + 0x88))(param_1 + 0xa0);
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}

