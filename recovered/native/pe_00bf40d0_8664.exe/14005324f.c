/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005324f */

void FUN_14005324f(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1400525f1((longlong *)(param_2 + 0x288));
    FUN_14001c53d(param_1,*(longlong *)(param_2 + 0x2b8));
    *(undefined8 *)(param_2 + 0x2b8) = 0;
    FUN_14001c53d(param_1,*(longlong *)(param_2 + 0x248));
    *(undefined8 *)(param_2 + 0x248) = 0;
    FUN_14001c53d(param_1,*(longlong *)(param_2 + 600));
    *(undefined8 *)(param_2 + 600) = 0;
    FUN_14001c53d(param_1,*(longlong *)(param_2 + 0x270));
    *(undefined8 *)(param_2 + 0x270) = 0;
  }
  return;
}

