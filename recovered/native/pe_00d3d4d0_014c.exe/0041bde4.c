/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041bde4 */

int __thiscall FUN_0041bde4(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (param_5 == 4) {
    iVar4 = *(int *)(param_1 + param_4);
    *(int *)(param_1 + param_4) = (param_2 - param_1) + iVar4;
  }
  else if (param_5 == 2) {
    iVar4 = (int)*(short *)(param_1 + param_4);
    iVar3 = (param_2 - param_1) + iVar4;
    sVar2 = (short)iVar3;
    *(short *)(param_1 + param_4) = sVar2;
    if (sVar2 != iVar3) {
      **(undefined4 **)((int)this + 0x24) = 2;
    }
  }
  else {
    iVar4 = 0;
    if (param_5 == 1) {
      iVar4 = (int)*(char *)(param_1 + param_4);
      iVar3 = (param_2 - param_1) + iVar4;
      cVar1 = (char)iVar3;
      *(char *)(param_1 + param_4) = cVar1;
      if (cVar1 != iVar3) {
        **(undefined4 **)((int)this + 0x24) = 3;
      }
    }
  }
  return param_2 + param_3 + iVar4;
}

