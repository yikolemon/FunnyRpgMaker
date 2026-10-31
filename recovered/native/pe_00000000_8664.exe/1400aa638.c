/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400aa638 */

void FUN_1400aa638(longlong param_1,longlong *param_2)

{
  while( true ) {
    if (0 < *(int *)(param_1 + 0x30)) {
      if (param_2[1] == 0) {
        param_2[1] = param_1;
      }
      *(int *)(param_2 + 2) = (int)param_2[2] + 1;
    }
    if ((*(byte *)(param_1 + 0x11) & 8) != 0) {
      *param_2 = param_1;
    }
    if ((1 < (int)param_2[2]) && (*param_2 != 0)) break;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400aa638(*(longlong *)(param_1 + 0x20),param_2);
    }
    param_1 = *(longlong *)(param_1 + 0x28);
    if (param_1 == 0) {
      return;
    }
  }
  return;
}

