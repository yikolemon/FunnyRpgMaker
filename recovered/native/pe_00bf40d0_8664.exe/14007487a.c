/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007487a */

int * FUN_14007487a(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (*(ushort *)(param_1 + 0xf4) != 0) {
    piVar1 = *(int **)(param_1 + 0xf8);
    piVar2 = piVar1 + (ulonglong)*(ushort *)(param_1 + 0xf4) * 4;
    do {
      if ((*piVar1 == param_2) && (piVar1[3] != 0)) {
        return piVar1;
      }
      piVar1 = piVar1 + 4;
    } while (piVar1 < piVar2);
  }
  return (int *)0x0;
}

