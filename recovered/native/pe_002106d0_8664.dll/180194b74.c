/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180194b74 */

void FUN_180194b74(int *param_1)

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
        cVar2 = FUN_180194bf8(param_1,*(undefined4 *)(*(longlong *)(piVar3 + 6) + 4),piVar3[1],
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

