/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ce59 */

int * FUN_18019ce59(int *param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  FUN_18019cf0b();
  puVar2 = *(undefined8 **)(param_1 + 2);
  if (((puVar2 == (undefined8 *)0x0) ||
      (iVar1 = param_1[1], *(int *)(param_2 + 4) < param_4 + iVar1)) ||
     (piVar3 = *(int **)(param_2 + 0x20), piVar3 == (int *)0x0)) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    iVar6 = *param_1;
    *piVar3 = iVar6;
    piVar3[1] = param_4 + iVar1;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(piVar3 + 2);
    piVar7 = (int *)*puVar2;
    if (*piVar7 < iVar6) {
      piVar4 = *(int **)(piVar7 + 2);
      *(int **)(piVar7 + 2) = piVar3;
      piVar7 = piVar4;
    }
    else {
      *puVar2 = piVar3;
    }
    iVar6 = iVar6 + param_3;
    piVar4 = *(int **)(piVar7 + 2);
    while ((piVar5 = piVar4, piVar5 != (int *)0x0 && (*piVar5 <= iVar6))) {
      *(undefined8 *)(piVar7 + 2) = *(undefined8 *)(param_2 + 0x20);
      *(int **)(param_2 + 0x20) = piVar7;
      piVar7 = piVar5;
      piVar4 = *(int **)(piVar5 + 2);
    }
    *(int **)(piVar3 + 2) = piVar7;
    if (*piVar7 < iVar6) {
      *piVar7 = iVar6;
    }
  }
  return param_1;
}

