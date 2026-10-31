/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005271c */

int * __thiscall FUN_1005271c(undefined4 *param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  param_1[1] = param_1[1] + 1;
  piVar4 = (int *)*param_1;
  param_4[1] = (int)param_2;
  if (param_2 == piVar4) {
    *piVar4 = (int)param_4;
    piVar4[1] = (int)param_4;
    piVar4[2] = (int)param_4;
    piVar4 = param_4;
  }
  else {
    piVar1 = param_4 + 1;
    if (param_3 == 0) {
      param_2[2] = (int)param_4;
      if (param_2 == (int *)piVar4[2]) {
        piVar4[2] = (int)param_4;
      }
    }
    else {
      *param_2 = (int)param_4;
      if (param_2 == (int *)*piVar4) {
        *piVar4 = (int)param_4;
      }
    }
    piVar3 = (int *)*piVar1;
    cVar2 = (char)piVar3[3];
    piVar6 = param_4;
    while (cVar2 == '\0') {
      piVar5 = *(int **)piVar3[1];
      if (piVar3 == piVar5) {
        piVar5 = (int *)((undefined4 *)piVar3[1])[2];
        if ((char)piVar5[3] == '\0') goto LAB_100527f9;
        if (piVar6 == (int *)piVar3[2]) {
          FUN_1005227c(piVar3);
          piVar6 = piVar3;
        }
        *(undefined1 *)(piVar6[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0xc) = 0;
        FUN_100522b8(*(undefined4 *)(piVar6[1] + 4));
      }
      else if ((char)piVar5[3] == '\0') {
LAB_100527f9:
        *(undefined1 *)(piVar3 + 3) = 1;
        *(undefined1 *)(piVar5 + 3) = 1;
        *(undefined1 *)(*(int *)(*piVar1 + 4) + 0xc) = 0;
        piVar6 = *(int **)(*piVar1 + 4);
      }
      else {
        if (piVar6 == (int *)*piVar3) {
          FUN_100522b8(piVar3);
          piVar6 = piVar3;
        }
        *(undefined1 *)(piVar6[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0xc) = 0;
        FUN_1005227c(*(undefined4 *)(piVar6[1] + 4));
      }
      piVar1 = piVar6 + 1;
      piVar3 = (int *)piVar6[1];
      cVar2 = (char)piVar3[3];
    }
    piVar4 = (int *)piVar4[1];
  }
  *(undefined1 *)(piVar4 + 3) = 1;
  return param_4;
}

