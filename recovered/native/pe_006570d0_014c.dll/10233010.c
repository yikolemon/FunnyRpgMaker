/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233010 */

int * __thiscall FUN_10233010(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (0x7fffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  if (param_3 < 0x10) {
    param_1[4] = param_3;
    param_1[5] = 0xf;
    FUN_1025b2d0(param_1,param_2,param_3);
    *(undefined1 *)(param_3 + (int)param_1) = 0;
    return param_1;
  }
  local_8 = param_3 | 0xf;
  if (local_8 < 0x80000000) {
    if (local_8 < 0x16) {
      local_8 = 0x16;
    }
  }
  else {
    local_8 = 0x7fffffff;
  }
  iVar1 = FUN_1022d410(param_1,&local_8);
  *param_1 = iVar1;
  param_1[4] = param_3;
  param_1[5] = local_8;
  FUN_1025b2d0(iVar1,param_2,param_3);
  *(undefined1 *)(iVar1 + param_3) = 0;
  uVar2 = param_1[5];
  if ((0xf < uVar2) && (iVar1 = *param_1, DAT_103235d4 != '\0')) {
    uVar5 = param_1[4] + 1 + iVar1;
    uVar4 = uVar2 + 8 + iVar1 & 0xfffffff8;
    uVar3 = uVar2 + 1 + iVar1;
    uVar2 = uVar4;
    if (uVar3 <= uVar4) {
      uVar2 = uVar3;
    }
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    guard_check_icall(*param_1,uVar4,uVar2,uVar5);
  }
  return param_1;
}

