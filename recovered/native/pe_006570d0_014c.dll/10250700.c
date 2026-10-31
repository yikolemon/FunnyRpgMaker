/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10250700 */

void __thiscall FUN_10250700(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  if (param_3 < 8) {
    param_1[4] = param_3;
    param_1[5] = 7;
    FUN_1025b2d0(param_1,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (int)param_1) = 0;
    return;
  }
  local_8 = param_3 | 7;
  if (local_8 < 0x7fffffff) {
    if (local_8 < 10) {
      local_8 = 10;
    }
  }
  else {
    local_8 = 0x7ffffffe;
  }
  iVar2 = FUN_10250c70(param_1,&local_8);
  param_1[4] = param_3;
  *param_1 = iVar2;
  param_1[5] = local_8;
  FUN_1025b2d0(iVar2,param_2,param_3 * 2);
  *(undefined2 *)(param_3 * 2 + iVar2) = 0;
  uVar1 = param_1[5];
  if ((7 < uVar1) && (iVar2 = *param_1, DAT_103235d4 != '\0')) {
    uVar4 = uVar1 * 2 + 9 + iVar2 & 0xfffffff8;
    uVar1 = iVar2 + (uVar1 + 1) * 2;
    uVar5 = iVar2 + (param_1[4] + 1) * 2;
    uVar3 = uVar4;
    if (uVar1 <= uVar4) {
      uVar3 = uVar1;
    }
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    guard_check_icall(iVar2,uVar4,uVar3,uVar5);
  }
  return;
}

