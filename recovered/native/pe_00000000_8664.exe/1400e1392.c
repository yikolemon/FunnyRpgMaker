/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e1392 */

void FUN_1400e1392(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x34) == '\x01') {
    FUN_140077b90(*(undefined8 *)(param_2 + 0x28));
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_140077b90();
  }
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}

