/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10196498 */

int __thiscall FUN_10196498(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (param_6 == 4) {
    iVar4 = *(int *)(param_2 + param_5);
    *(int *)(param_2 + param_5) = (param_3 - param_2) + iVar4;
  }
  else if (param_6 == 2) {
    iVar4 = (int)*(short *)(param_2 + param_5);
    iVar3 = (param_3 - param_2) + iVar4;
    sVar2 = (short)iVar3;
    *(short *)(param_2 + param_5) = sVar2;
    if (sVar2 != iVar3) {
      **(undefined4 **)(param_1 + 0x24) = 2;
    }
  }
  else {
    iVar4 = 0;
    if (param_6 == 1) {
      iVar4 = (int)*(char *)(param_2 + param_5);
      iVar3 = (param_3 - param_2) + iVar4;
      cVar1 = (char)iVar3;
      *(char *)(param_2 + param_5) = cVar1;
      if (cVar1 != iVar3) {
        **(undefined4 **)(param_1 + 0x24) = 3;
      }
    }
  }
  return param_3 + param_4 + iVar4;
}

