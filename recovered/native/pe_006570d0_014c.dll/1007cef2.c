/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007cef2 */

int * __thiscall
FUN_1007cef2(int *param_1,uint param_2,undefined4 param_3,int param_4,size_t param_5,byte param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = param_1[4];
  if ((uVar6 ^ 0x7fffffff) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  param_2 = param_2 + uVar6;
  uVar1 = param_1[5];
  uVar4 = 0x7fffffff;
  if ((-1 < (int)param_2) && (uVar1 <= (uVar1 >> 1 ^ 0x7fffffff))) {
    uVar4 = (uVar1 >> 1) + uVar1;
    if (uVar4 < (param_2 | 0xf)) {
      uVar4 = param_2 | 0xf;
    }
  }
  iVar5 = FUN_10001426(uVar4 + 1);
  param_1[4] = param_2;
  param_1[5] = uVar4;
  if (uVar1 < 0x10) {
    FUN_1025b2d0(iVar5,param_1,param_4);
    _memset((void *)(iVar5 + param_4),(uint)param_6,param_5);
    FUN_1025b2d0(iVar5 + param_4 + param_5,param_4 + (int)param_1,(uVar6 - param_4) + 1);
  }
  else {
    iVar2 = *param_1;
    FUN_1025b2d0(iVar5,iVar2,param_4);
    _memset((void *)(iVar5 + param_4),(uint)param_6,param_5);
    FUN_1025b2d0(iVar5 + param_4 + param_5,param_4 + iVar2,(uVar6 - param_4) + 1);
    uVar6 = uVar1 + 1;
    iVar7 = iVar2;
    if (0xfff < uVar6) {
      iVar7 = *(int *)(iVar2 + -4);
      if (0x1f < (uint)((iVar2 + -4) - iVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar6 = uVar1 + 0x24;
    }
    FUN_102283a0(iVar7,uVar6);
  }
  *param_1 = iVar5;
  return param_1;
}

