/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180205c13 */

void FUN_180205c13(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_180204fb5(param_2 + 0x288);
    FUN_1801c9b65(param_1,*(undefined8 *)(param_2 + 0x2b8));
    *(undefined8 *)(param_2 + 0x2b8) = 0;
    FUN_1801c9b65(param_1,*(undefined8 *)(param_2 + 0x248));
    *(undefined8 *)(param_2 + 0x248) = 0;
    FUN_1801c9b65(param_1,*(undefined8 *)(param_2 + 600));
    *(undefined8 *)(param_2 + 600) = 0;
    FUN_1801c9b65(param_1,*(undefined8 *)(param_2 + 0x270));
    *(undefined8 *)(param_2 + 0x270) = 0;
  }
  return;
}

