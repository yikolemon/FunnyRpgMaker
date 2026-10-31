/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e00e8 */

void FUN_1400e00e8(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  if (-1 < *param_1) {
    piVar3 = param_1 + 2;
    iVar4 = *param_1 + 1;
    do {
      piVar3 = *(int **)piVar3;
      if (*piVar3 == 0) {
        cVar2 = FUN_1400e016c(param_1,*(undefined4 *)(*(longlong *)(piVar3 + 6) + 4),piVar3[1],
                              *(undefined4 *)(*(longlong *)(piVar3 + 4) + 4),
                              *(longlong *)(piVar3 + 6) + 8,piVar3 + 2,*(longlong *)(piVar3 + 4) + 8
                             );
        if (cVar2 != '\0') {
          *piVar3 = 1;
          iVar1 = param_1[6];
          param_1[6] = iVar1 + 1;
          *(int **)(*(longlong *)(param_1 + 4) + (longlong)iVar1 * 8) = piVar3;
        }
      }
      piVar3 = piVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (0 < iVar4);
  }
  return;
}

