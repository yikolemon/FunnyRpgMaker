/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d8b0e */

int * __thiscall FUN_100d8b0e(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar3 = *(int **)(iVar2 + 4);
  *param_2 = (int)piVar3;
  param_2[1] = 0;
  param_2[2] = iVar2;
  cVar1 = *(char *)((int)piVar3 + 0xd);
  while (cVar1 == '\0') {
    *param_2 = (int)piVar3;
    iVar2 = FUN_1006287c(param_3);
    if (iVar2 < 0) {
      piVar3 = piVar3 + 2;
    }
    else {
      param_2[2] = (int)piVar3;
    }
    param_2[1] = (uint)(iVar2 >= 0);
    piVar3 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar3 + 0xd);
  }
  return param_2;
}

