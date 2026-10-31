/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10250ec0 */

int * __thiscall
FUN_10250ec0(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_8;
  
  iVar2 = param_1[4];
  if (0x7ffffffeU - iVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  uVar3 = param_1[5];
  local_8 = iVar2 + param_2 | 7;
  if (local_8 < 0x7fffffff) {
    if (0x7ffffffe - (uVar3 >> 1) < uVar3) {
      local_8 = 0x7ffffffe;
    }
    else {
      uVar6 = (uVar3 >> 1) + uVar3;
      if (local_8 < uVar6) {
        local_8 = uVar6;
      }
    }
  }
  else {
    local_8 = 0x7ffffffe;
  }
  iVar5 = FUN_10001406(param_1,&local_8);
  FUN_10236130();
  param_1[4] = iVar2 + param_2;
  param_1[5] = local_8;
  iVar8 = iVar2 * 2;
  local_8 = iVar5 + iVar8;
  puVar1 = (undefined2 *)(iVar5 + (iVar2 + param_5) * 2);
  if (uVar3 < 8) {
LAB_10250fb3:
    FUN_1025b2d0(iVar5,param_1,iVar8);
    FUN_1025b2d0(local_8,param_4,param_5 * 2);
    *puVar1 = 0;
  }
  else {
    iVar2 = *param_1;
    FUN_1025b2d0(iVar5,iVar2,iVar8);
    FUN_1025b2d0(local_8,param_4,param_5 * 2);
    *puVar1 = 0;
    uVar6 = uVar3 * 2 + 2;
    iVar7 = iVar2;
    if (0xfff < uVar6) {
      iVar7 = *(int *)(iVar2 + -4);
      uVar6 = uVar3 * 2 + 0x25;
      if (0x1f < (iVar2 - iVar7) - 4U) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)();
        goto LAB_10250fb3;
      }
    }
    FUN_102283a0(iVar7,uVar6);
  }
  *param_1 = iVar5;
  FUN_102360d0();
  return param_1;
}

