/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401552ff */

void FUN_1401552ff(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1401546a1(param_2 + 0x288);
    FUN_140128b39(param_1,*(undefined8 *)(param_2 + 0x2b8));
    *(undefined8 *)(param_2 + 0x2b8) = 0;
    FUN_140128b39(param_1,*(undefined8 *)(param_2 + 0x248));
    *(undefined8 *)(param_2 + 0x248) = 0;
    FUN_140128b39(param_1,*(undefined8 *)(param_2 + 600));
    *(undefined8 *)(param_2 + 600) = 0;
    FUN_140128b39(param_1,*(undefined8 *)(param_2 + 0x270));
    *(undefined8 *)(param_2 + 0x270) = 0;
  }
  return;
}

