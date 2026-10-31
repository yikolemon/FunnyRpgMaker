/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002e1ce */

int * __thiscall FUN_1002e1ce(int *param_1,uint param_2,undefined4 param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  void *_Dst;
  int iVar4;
  uint uVar5;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  uVar1 = param_1[5];
  uVar5 = (uVar1 >> 1) + uVar1;
  if (uVar5 < (param_2 | 0xf)) {
    uVar5 = param_2 | 0xf;
  }
  if ((uVar1 >> 1 ^ 0x7fffffff) < uVar1) {
    uVar5 = 0x7fffffff;
  }
  _Dst = (void *)FUN_10001426(uVar5 + 1);
  param_1[4] = param_2;
  param_1[5] = uVar5;
  _memset(_Dst,(uint)param_4,param_2);
  *(undefined1 *)((int)_Dst + param_2) = 0;
  if (0xf < uVar1) {
    iVar2 = *param_1;
    uVar5 = uVar1 + 1;
    iVar4 = iVar2;
    if (0xfff < uVar5) {
      iVar4 = *(int *)(iVar2 + -4);
      if (0x1f < (uint)((iVar2 + -4) - iVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = uVar1 + 0x24;
    }
    FUN_102283a0(iVar4,uVar5);
  }
  *param_1 = (int)_Dst;
  return param_1;
}

