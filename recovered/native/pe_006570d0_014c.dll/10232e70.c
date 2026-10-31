/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10232e70 */

int * __thiscall
FUN_10232e70(int *param_1,uint param_2,undefined4 param_3,size_t param_4,char param_5)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint local_8;
  
  iVar10 = param_1[4];
  if (0x7fffffffU - iVar10 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  uVar6 = param_1[5];
  local_8 = iVar10 + param_2 | 0xf;
  if (local_8 < 0x80000000) {
    if (0x7fffffff - (uVar6 >> 1) < uVar6) {
      local_8 = 0x7fffffff;
    }
    else {
      uVar7 = (uVar6 >> 1) + uVar6;
      if (local_8 < uVar7) {
        local_8 = uVar7;
      }
    }
  }
  else {
    local_8 = 0x7fffffff;
  }
  iVar3 = FUN_1022d410(param_1,&local_8);
  if ((0xf < (uint)param_1[5]) && (DAT_103235d4 != '\0')) {
    uVar9 = param_1[5] + 1U + *param_1;
    uVar4 = *param_1 + param_1[4] + 1;
    uVar8 = uVar9 + 7 & 0xfffffff8;
    uVar7 = uVar8;
    if (uVar4 <= uVar8) {
      uVar7 = uVar4;
    }
    if (uVar8 < uVar9) {
      uVar9 = uVar8;
    }
    guard_check_icall(*param_1,uVar8,uVar7,uVar9);
  }
  param_1[4] = iVar10 + param_2;
  param_1[5] = local_8;
  puVar5 = (undefined1 *)(iVar10 + iVar3 + param_4);
  local_8 = (int)param_5;
  if (uVar6 < 0x10) {
LAB_10232f92:
    FUN_1025b2d0(iVar3,param_1,iVar10);
    _memset((void *)(iVar10 + iVar3),local_8,param_4);
    *puVar5 = 0;
  }
  else {
    iVar1 = *param_1;
    FUN_1025b2d0(iVar3,iVar1,iVar10);
    _memset((void *)(iVar10 + iVar3),local_8,param_4);
    uVar7 = uVar6 + 1;
    *puVar5 = 0;
    iVar11 = iVar1;
    if (0xfff < uVar7) {
      iVar11 = *(int *)(iVar1 + -4);
      uVar7 = uVar6 + 0x24;
      iVar10 = iVar1 - iVar11;
      if (0x1f < iVar10 - 4U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        goto LAB_10232f92;
      }
    }
    FUN_102283a0(iVar11,uVar7);
  }
  *param_1 = iVar3;
  uVar6 = param_1[5];
  if ((0xf < uVar6) && (DAT_103235d4 != '\0')) {
    uVar7 = param_1[4] + 1 + iVar3;
    uVar4 = uVar6 + 8 + iVar3 & 0xfffffff8;
    uVar9 = uVar6 + 1 + iVar3;
    uVar6 = uVar4;
    if (uVar9 <= uVar4) {
      uVar6 = uVar9;
    }
    if (uVar4 < uVar7) {
      uVar7 = uVar4;
    }
    guard_check_icall(iVar3,uVar4,uVar6,uVar7);
  }
  return param_1;
}

