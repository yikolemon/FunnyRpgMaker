/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018d564 */

void __fastcall FUN_1018d564(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  if (-1 < *param_1) {
    piVar3 = param_1 + 1;
    iVar4 = *param_1 + 1;
    do {
      piVar3 = (int *)*piVar3;
      if (*piVar3 == 0) {
        cVar2 = FUN_1018d5c4(*(undefined4 *)(piVar3[5] + 4),piVar3[1],*(undefined4 *)(piVar3[4] + 4)
                             ,piVar3[5] + 8,piVar3 + 2,piVar3[4] + 8);
        if (cVar2 != '\0') {
          *piVar3 = 1;
          iVar1 = param_1[3];
          param_1[3] = iVar1 + 1;
          *(int **)(param_1[2] + iVar1 * 4) = piVar3;
        }
      }
      piVar3 = piVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (0 < iVar4);
  }
  return;
}

