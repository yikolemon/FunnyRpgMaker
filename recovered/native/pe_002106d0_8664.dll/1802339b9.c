/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802339b9 */

void FUN_1802339b9(longlong param_1)

{
  if ((*(char *)(param_1 + 0x78) == '\x01') && (*(char *)(param_1 + 0x79) == '\x01')) {
    (**(code **)(param_1 + 0x88))(param_1 + 0xa0);
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}

