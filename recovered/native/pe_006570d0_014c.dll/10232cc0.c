/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10232cc0 */

int * __thiscall
FUN_10232cc0(int *param_1,uint param_2,undefined4 param_3,int param_4,size_t param_5,char param_6)

{
  void *_Dst;
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint local_c;
  int local_8;
  
  iVar9 = param_1[4];
  local_8 = iVar9;
  if (0x7fffffffU - iVar9 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  uVar4 = param_1[5];
  local_c = iVar9 + param_2 | 0xf;
  if (local_c < 0x80000000) {
    if (0x7fffffff - (uVar4 >> 1) < uVar4) {
      local_c = 0x7fffffff;
    }
    else {
      uVar5 = (uVar4 >> 1) + uVar4;
      if (local_c < uVar5) {
        local_c = uVar5;
      }
    }
  }
  else {
    local_c = 0x7fffffff;
  }
  iVar2 = FUN_1022d410(param_1,&local_c);
  iVar8 = iVar9;
  if ((0xf < (uint)param_1[5]) && (DAT_103235d4 != '\0')) {
    uVar7 = param_1[5] + 1U + *param_1;
    uVar3 = *param_1 + param_1[4] + 1;
    uVar6 = uVar7 + 7 & 0xfffffff8;
    uVar5 = uVar6;
    if (uVar3 <= uVar6) {
      uVar5 = uVar3;
    }
    if (uVar6 < uVar7) {
      uVar7 = uVar6;
    }
    guard_check_icall(*param_1,uVar6,uVar5,uVar7);
    iVar8 = local_8;
  }
  param_1[4] = iVar9 + param_2;
  param_1[5] = local_c;
  iVar9 = (iVar8 - param_4) + 1;
  _Dst = (void *)(iVar2 + param_4);
  iVar8 = param_4;
  local_c = (int)param_6;
  local_8 = iVar9;
  if (uVar4 < 0x10) {
LAB_10232df3:
    FUN_1025b2d0(iVar2,param_1,iVar8);
    _memset(_Dst,local_c,param_5);
    FUN_1025b2d0((int)_Dst + param_5,param_4 + (int)param_1,iVar9);
  }
  else {
    iVar9 = *param_1;
    FUN_1025b2d0(iVar2,iVar9,param_4);
    _memset(_Dst,local_c,param_5);
    FUN_1025b2d0((int)_Dst + param_5,param_4 + iVar9,local_8);
    uVar5 = uVar4 + 1;
    iVar10 = iVar9;
    if (0xfff < uVar5) {
      iVar10 = *(int *)(iVar9 + -4);
      uVar5 = uVar4 + 0x24;
      iVar9 = iVar9 - iVar10;
      if (0x1f < iVar9 - 4U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        goto LAB_10232df3;
      }
    }
    FUN_102283a0(iVar10,uVar5);
  }
  *param_1 = iVar2;
  uVar4 = param_1[5];
  if ((0xf < uVar4) && (DAT_103235d4 != '\0')) {
    uVar5 = param_1[4] + 1 + iVar2;
    uVar3 = uVar4 + 8 + iVar2 & 0xfffffff8;
    uVar7 = uVar4 + 1 + iVar2;
    uVar4 = uVar3;
    if (uVar7 <= uVar3) {
      uVar4 = uVar7;
    }
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
    guard_check_icall(iVar2,uVar3,uVar4,uVar5);
  }
  return param_1;
}

