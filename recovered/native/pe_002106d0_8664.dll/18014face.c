/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014face */

void FUN_18014face(longlong param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  if ((longlong)*param_2 != 0) {
    piVar4 = *(int **)(param_2 + 2);
    piVar1 = piVar4 + (longlong)*param_2 * 6;
    do {
      iVar3 = *piVar4;
      if (iVar3 == 1) {
        if (0 < param_2[9]) {
          iVar3 = 0;
          do {
            (**(code **)(param_1 + 8))(param_1,iVar3,(char)piVar4[1]);
            iVar3 = iVar3 + 1;
          } while (iVar3 < param_2[9]);
          iVar3 = *piVar4;
          goto LAB_18014fb19;
        }
      }
      else {
LAB_18014fb19:
        if ((iVar3 == 2) && (iVar3 = piVar4[2], piVar4[2] <= piVar4[4])) {
          do {
            (**(code **)(param_1 + 8))(param_1,iVar3,(char)piVar4[1]);
            bVar2 = iVar3 < piVar4[4];
            iVar3 = iVar3 + 1;
          } while (bVar2);
        }
      }
      piVar4 = piVar4 + 6;
    } while (piVar4 != piVar1);
  }
  return;
}

