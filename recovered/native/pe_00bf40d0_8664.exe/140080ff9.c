/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140080ff9 */

void FUN_140080ff9(longlong param_1)

{
  if ((*(char *)(param_1 + 0x78) == '\x01') && (*(char *)(param_1 + 0x79) == '\x01')) {
    (**(code **)(param_1 + 0x88))(param_1 + 0xa0);
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}

