/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004340a */

void __thiscall FUN_1004340a(int param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  param_4 = *(uint *)(param_1 + 0x18) & param_4;
  piVar3 = *(int **)(*(int *)(param_1 + 0xc) + 4 + param_4 * 8);
  piVar4 = *(int **)(param_1 + 4);
  piVar5 = (int *)0x0;
  if (piVar3 != *(int **)(param_1 + 4)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0xc) + param_4 * 8);
    while (cVar2 = FUN_1001bb3a(piVar3 + 2), cVar2 == '\0') {
      piVar4 = piVar3;
      if (piVar3 == piVar1) goto LAB_10043454;
      piVar3 = (int *)piVar3[1];
    }
    piVar4 = (int *)*piVar3;
    piVar5 = piVar3;
  }
LAB_10043454:
  *param_2 = (int)piVar4;
  param_2[1] = (int)piVar5;
  return;
}

