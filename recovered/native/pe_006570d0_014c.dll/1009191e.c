/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009191e */

int FUN_1009191e(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = param_2;
  if ((param_4 - param_3 <= param_2 - param_1) && (iVar4 = param_1, param_3 != param_4)) {
    while( true ) {
      iVar4 = 0;
      while (sVar2 = *(short *)(param_3 + iVar4),
            sVar3 = (**(code **)(**(int **)(param_5 + 4) + 0x20))(*(undefined2 *)(param_1 + iVar4)),
            sVar3 == sVar2) {
        iVar1 = iVar4 + param_3;
        iVar4 = iVar4 + 2;
        if (iVar1 + 2 == param_4) {
          return param_1;
        }
      }
      iVar4 = param_2;
      if (param_1 == param_2 - (param_4 - param_3)) break;
      param_1 = param_1 + 2;
    }
  }
  return iVar4;
}

