/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401774f0 */

void FUN_1401774f0(longlong param_1)

{
  if (*(char *)(param_1 + 0x4c0) != '\0') {
    if (*(longlong *)(param_1 + 0x4a0) != 0) {
      FUN_14012dd2b(*(undefined8 *)(param_1 + 0xa0));
    }
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    *(undefined4 *)(param_1 + 0x4b8) = 0;
  }
  return;
}

