/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016a505 */

void FUN_14016a505(longlong param_1)

{
  if (*(char *)(param_1 + 0x48d4) != '\0') {
    *(undefined1 *)(param_1 + 0x48d5) = 1;
    FUN_14016a12d(param_1,*(undefined4 *)(param_1 + 0x4930),*(undefined4 *)(param_1 + 0x4934));
    if (*(char *)(param_1 + 0x4938) != '\0') {
      FUN_14016b5f1(param_1,param_1 + 0x10,param_1 + 0x4910,*(undefined8 *)(param_1 + 0x4918),1);
    }
    *(undefined1 *)(param_1 + 0x48d7) = 1;
    *(undefined2 *)(param_1 + 0x48d4) = 0;
    *(undefined1 *)(param_1 + 0x4938) = 0;
  }
  return;
}

