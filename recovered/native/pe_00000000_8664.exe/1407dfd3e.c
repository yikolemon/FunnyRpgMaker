/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407dfd3e */

void FUN_1407dfd3e(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if (0 < iVar1) {
    piVar2 = (int *)(ulonglong)((iVar1 * 0x40 + param_1[2]) - 0x14);
    do {
      if (piVar2[-1] != 0) {
        return;
      }
      if (*piVar2 != 0) {
        return;
      }
      *param_1 = iVar1 + -1;
      piVar2 = piVar2 + -0x10;
    } while (1 < iVar1 + 1);
  }
  return;
}

