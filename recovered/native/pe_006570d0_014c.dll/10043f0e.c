/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10043f0e */

void __thiscall FUN_10043f0e(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  uVar4 = FUN_10043f8a(*(undefined4 *)(*param_2 + 4),*param_1);
  *(undefined4 *)(*param_1 + 4) = uVar4;
  param_1[1] = param_2[1];
  piVar1 = (int *)*param_1;
  piVar2 = (int *)piVar1[1];
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    do {
      piVar6 = piVar2;
      piVar2 = (int *)*piVar6;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
    *piVar1 = (int)piVar6;
    iVar5 = *param_1;
    iVar3 = *(int *)(iVar5 + 4);
    do {
      iVar7 = iVar3;
      iVar3 = *(int *)(iVar7 + 8);
    } while (*(char *)(*(int *)(iVar7 + 8) + 0xd) == '\0');
  }
  else {
    *piVar1 = (int)piVar1;
    iVar5 = *param_1;
    iVar7 = iVar5;
  }
  *(int *)(iVar5 + 8) = iVar7;
  return;
}

