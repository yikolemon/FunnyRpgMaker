/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10232b40 */

int * __thiscall FUN_10232b40(int *param_1,uint param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint local_8;
  
  iVar9 = param_1[4];
  if (0x7fffffffU - iVar9 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  uVar5 = param_1[5];
  local_8 = param_2 + iVar9 | 0xf;
  if (local_8 < 0x80000000) {
    if (0x7fffffff - (uVar5 >> 1) < uVar5) {
      local_8 = 0x7fffffff;
    }
    else {
      uVar6 = uVar5 + (uVar5 >> 1);
      if (local_8 < uVar6) {
        local_8 = uVar6;
      }
    }
  }
  else {
    local_8 = 0x7fffffff;
  }
  iVar3 = FUN_1022d410(param_1,&local_8);
  if ((0xf < (uint)param_1[5]) && (DAT_103235d4 != '\0')) {
    uVar8 = param_1[5] + 1U + *param_1;
    uVar4 = *param_1 + param_1[4] + 1;
    uVar7 = uVar8 + 7 & 0xfffffff8;
    uVar6 = uVar7;
    if (uVar4 <= uVar7) {
      uVar6 = uVar4;
    }
    if (uVar7 < uVar8) {
      uVar8 = uVar7;
    }
    guard_check_icall(*param_1,uVar7,uVar6,uVar8);
  }
  param_1[4] = param_2 + iVar9;
  param_1[5] = local_8;
  if (uVar5 < 0x10) {
LAB_10232c49:
    FUN_1025b2d0(iVar3,param_1,iVar9);
    *(undefined1 *)(iVar9 + iVar3) = param_4;
    ((undefined1 *)(iVar9 + iVar3))[1] = 0;
  }
  else {
    iVar1 = *param_1;
    FUN_1025b2d0(iVar3,iVar1,iVar9);
    *(undefined1 *)(iVar9 + iVar3) = param_4;
    ((undefined1 *)(iVar9 + iVar3))[1] = 0;
    uVar6 = uVar5 + 1;
    iVar10 = iVar1;
    if (0xfff < uVar6) {
      iVar10 = *(int *)(iVar1 + -4);
      uVar6 = uVar5 + 0x24;
      iVar9 = iVar1 - iVar10;
      if (0x1f < iVar9 - 4U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        goto LAB_10232c49;
      }
    }
    FUN_102283a0(iVar10,uVar6);
  }
  *param_1 = iVar3;
  uVar5 = param_1[5];
  if ((0xf < uVar5) && (DAT_103235d4 != '\0')) {
    uVar6 = param_1[4] + 1 + iVar3;
    uVar4 = uVar5 + 8 + iVar3 & 0xfffffff8;
    uVar8 = uVar5 + 1 + iVar3;
    uVar5 = uVar4;
    if (uVar8 <= uVar4) {
      uVar5 = uVar8;
    }
    if (uVar4 < uVar6) {
      uVar6 = uVar4;
    }
    guard_check_icall(iVar3,uVar4,uVar5,uVar6);
  }
  return param_1;
}

