/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007f69c */

char FUN_14007f69c(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((param_1 != 0) && (piVar2 = *(int **)(param_1 + 8), piVar2 != (int *)0x0)) {
    iVar3 = 0;
    do {
      iVar4 = piVar2[8];
      if (iVar4 == 3) {
        iVar1 = (piVar2[1] + piVar2[5]) * (piVar2[4] - *piVar2);
        iVar4 = iVar1 + 0x3f;
        if (-1 < iVar1) {
          iVar4 = iVar1;
        }
        iVar6 = (piVar2[5] + piVar2[7]) * (piVar2[6] - piVar2[4]);
        iVar1 = iVar6 + 0x3f;
        if (-1 < iVar6) {
          iVar1 = iVar6;
        }
        iVar5 = (piVar2[7] + piVar2[3]) * (piVar2[2] - piVar2[6]);
        iVar6 = iVar5 + 0x3f;
        if (-1 < iVar5) {
          iVar6 = iVar5;
        }
        iVar3 = (iVar6 >> 6) + (iVar1 >> 6) + (iVar4 >> 6) + iVar3;
      }
      else if (iVar4 == 2) {
        iVar1 = (piVar2[1] + piVar2[5]) * (piVar2[4] - *piVar2);
        iVar4 = iVar1 + 0x3f;
        if (-1 < iVar1) {
          iVar4 = iVar1;
        }
        iVar6 = (piVar2[5] + piVar2[3]) * (piVar2[2] - piVar2[4]);
        iVar1 = iVar6 + 0x3f;
        if (-1 < iVar6) {
          iVar1 = iVar6;
        }
        iVar3 = (iVar1 >> 6) + (iVar4 >> 6) + iVar3;
      }
      else {
        if (iVar4 != 1) {
          return '\0';
        }
        iVar1 = (piVar2[1] + piVar2[3]) * (piVar2[2] - *piVar2);
        iVar4 = iVar1 + 0x3f;
        if (-1 < iVar1) {
          iVar4 = iVar1;
        }
        iVar3 = iVar3 + (iVar4 >> 6);
      }
      piVar2 = *(int **)(piVar2 + 10);
    } while (piVar2 != (int *)0x0);
    return (iVar3 < 1) + '\x01';
  }
  return '\0';
}

