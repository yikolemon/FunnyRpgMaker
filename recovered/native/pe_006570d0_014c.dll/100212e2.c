/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100212e2 */

int FUN_100212e2(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = param_2;
  if ((param_4 - param_3 <= param_2 - param_1) && (iVar4 = param_1, param_3 != param_4)) {
    while( true ) {
      iVar4 = 0;
      while (cVar2 = *(char *)(param_3 + iVar4),
            cVar3 = (**(code **)(**(int **)(param_5 + 4) + 0x10))((int)*(char *)(param_1 + iVar4)),
            cVar3 == cVar2) {
        iVar1 = iVar4 + param_3;
        iVar4 = iVar4 + 1;
        if (iVar1 + 1 == param_4) {
          return param_1;
        }
      }
      iVar4 = param_2;
      if (param_1 == param_2 - (param_4 - param_3)) break;
      param_1 = param_1 + 1;
    }
  }
  return iVar4;
}

