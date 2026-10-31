/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10220fa9 */

char __fastcall FUN_10220fa9(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  cVar1 = '\0';
  if ((param_1 != 0) && (piVar4 = *(int **)(param_1 + 8), piVar4 != (int *)0x0)) {
    iVar5 = 0;
    do {
      iVar3 = piVar4[8];
      if (iVar3 == 3) {
        iVar2 = (piVar4[1] + piVar4[5]) * (piVar4[4] - *piVar4);
        iVar3 = iVar2 + 0x3f;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        iVar7 = (piVar4[5] + piVar4[7]) * (piVar4[6] - piVar4[4]);
        iVar2 = iVar7 + 0x3f;
        if (-1 < iVar7) {
          iVar2 = iVar7;
        }
        iVar6 = (piVar4[7] + piVar4[3]) * (piVar4[2] - piVar4[6]);
        iVar7 = iVar6 + 0x3f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        iVar5 = (iVar7 >> 6) + (iVar2 >> 6) + (iVar3 >> 6) + iVar5;
      }
      else if (iVar3 == 2) {
        iVar2 = (piVar4[1] + piVar4[5]) * (piVar4[4] - *piVar4);
        iVar3 = iVar2 + 0x3f;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        iVar7 = (piVar4[5] + piVar4[3]) * (piVar4[2] - piVar4[4]);
        iVar2 = iVar7 + 0x3f;
        if (-1 < iVar7) {
          iVar2 = iVar7;
        }
        iVar5 = (iVar2 >> 6) + (iVar3 >> 6) + iVar5;
      }
      else {
        if (iVar3 != 1) {
          return '\0';
        }
        iVar2 = (piVar4[1] + piVar4[3]) * (piVar4[2] - *piVar4);
        iVar3 = iVar2 + 0x3f;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        iVar5 = iVar5 + (iVar3 >> 6);
      }
      piVar4 = (int *)piVar4[9];
    } while (piVar4 != (int *)0x0);
    cVar1 = (iVar5 < 1) + '\x01';
  }
  return cVar1;
}

