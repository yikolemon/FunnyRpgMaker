/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001df2d */

void FUN_14001df2d(longlong param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (((param_2 != (int *)0x0 && param_1 != 0) &&
      (piVar2 = *(int **)(param_1 + 8), piVar2 != (int *)0x0)) && (*(ushort *)(param_1 + 2) != 0)) {
    piVar1 = piVar2 + (ulonglong)*(ushort *)(param_1 + 2) * 2;
    do {
      FUN_14001df9f(piVar2,param_2);
      piVar2 = piVar2 + 2;
    } while (piVar2 < piVar1);
  }
  return;
}

