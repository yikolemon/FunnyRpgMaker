/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006cfe6 */

int * __thiscall FUN_1006cfe6(int *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *param_1;
  piVar4 = *(int **)(iVar3 + 4);
  *param_2 = (int)piVar4;
  param_2[1] = 0;
  param_2[2] = iVar3;
  cVar1 = *(char *)((int)piVar4 + 0xd);
  while (cVar1 == '\0') {
    *param_2 = (int)piVar4;
    puVar2 = param_3;
    if (7 < (uint)param_3[5]) {
      puVar2 = (undefined4 *)*param_3;
    }
    iVar3 = FUN_1006d1a8(puVar2,param_3[4]);
    if (iVar3 < 0) {
      piVar4 = piVar4 + 2;
    }
    else {
      param_2[2] = (int)piVar4;
    }
    param_2[1] = (uint)(iVar3 >= 0);
    piVar4 = (int *)*piVar4;
    cVar1 = *(char *)((int)piVar4 + 0xd);
  }
  return param_2;
}

