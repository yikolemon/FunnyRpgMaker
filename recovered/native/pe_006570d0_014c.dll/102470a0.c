/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102470a0 */

int * __thiscall FUN_102470a0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
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
  uVar3 = param_2[4];
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  if (uVar3 < 0x7fffffff) {
    if (uVar3 < 8) {
      param_1[4] = uVar3;
      param_1[5] = 7;
      FUN_1025b2d0(param_1,param_2,uVar3 * 2 + 2);
      return param_1;
    }
    local_8 = uVar3 | 7;
    if (local_8 < 0x7fffffff) {
      if (local_8 < 10) {
        local_8 = 10;
      }
    }
    else {
      local_8 = 0x7ffffffe;
    }
    iVar2 = FUN_10250c70(param_1,&local_8);
    param_1[5] = local_8;
    *param_1 = iVar2;
    param_1[4] = uVar3;
    FUN_1025b2d0(iVar2,param_2,uVar3 * 2 + 2);
    uVar3 = param_1[5];
    if ((7 < uVar3) && (iVar2 = *param_1, DAT_103235d4 != '\0')) {
      uVar1 = iVar2 + (uVar3 + 1) * 2;
      uVar5 = iVar2 + (param_1[4] + 1) * 2;
      uVar4 = uVar3 * 2 + 9 + iVar2 & 0xfffffff8;
      uVar3 = uVar4;
      if (uVar1 <= uVar4) {
        uVar3 = uVar1;
      }
      if (uVar4 < uVar5) {
        uVar5 = uVar4;
      }
      guard_check_icall(*param_1,uVar4,uVar3,uVar5);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100013fb();
}

