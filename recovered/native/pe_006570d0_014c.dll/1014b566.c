/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014b566 */

void __thiscall FUN_1014b566(int param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  if (*param_2 != 0) {
    piVar3 = (int *)param_2[2];
    piVar1 = piVar3 + *param_2 * 6;
    do {
      iVar4 = *piVar3;
      if (iVar4 == 1) {
        if (0 < param_2[9]) {
          iVar4 = 0;
          do {
            (**(code **)(param_1 + 4))(param_1,iVar4,(char)piVar3[1]);
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_2[9]);
          iVar4 = *piVar3;
          goto LAB_1014b5a7;
        }
      }
      else {
LAB_1014b5a7:
        if ((iVar4 == 2) && (iVar4 = piVar3[2], piVar3[2] <= piVar3[4])) {
          do {
            (**(code **)(param_1 + 4))(param_1,iVar4,(char)piVar3[1]);
            bVar2 = iVar4 < piVar3[4];
            iVar4 = iVar4 + 1;
          } while (bVar2);
        }
      }
      piVar3 = piVar3 + 6;
    } while (piVar3 != piVar1);
  }
  return;
}

