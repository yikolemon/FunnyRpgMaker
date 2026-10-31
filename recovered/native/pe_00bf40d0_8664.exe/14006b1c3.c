/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006b1c3 */

void FUN_14006b1c3(int *param_1,longlong param_2,uint param_3,longlong param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar2 = *(int **)(param_1 + 2);
    do {
      FUN_14006bde8(piVar2,param_2,param_3,param_4);
      piVar2 = piVar2 + 10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

