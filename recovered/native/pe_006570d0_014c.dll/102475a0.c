/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102475a0 */

int * __thiscall FUN_102475a0(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint local_8;
  
  uVar6 = param_1[4];
  if (uVar6 < param_2) {
    FUN_10247090();
LAB_10247740:
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  uVar1 = param_1[5];
  if (param_3 <= uVar1 - uVar6) {
    if (uVar6 != uVar6 + param_3) {
      piVar4 = param_1;
      if (7 < uVar1) {
        piVar4 = (int *)*param_1;
      }
      FUN_10236190(piVar4,uVar1,uVar6,uVar6 + param_3);
    }
    param_1[4] = uVar6 + param_3;
    piVar4 = param_1;
    if (7 < (uint)param_1[5]) {
      piVar4 = (int *)*param_1;
    }
    puVar9 = (uint *)((int)piVar4 + param_2 * 2);
    FUN_1025b2d0((undefined2 *)((int)puVar9 + param_3 * 2),puVar9,(uVar6 - param_2) * 2 + 2);
    if (param_3 == 0) {
      return param_1;
    }
    for (uVar6 = (param_3 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = param_4 & 0xffff | param_4 << 0x10;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = (uint)((param_3 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
      *(short *)puVar9 = (short)param_4;
      puVar9 = (uint *)((int)puVar9 + 2);
    }
    return param_1;
  }
  if (0x7ffffffe - uVar6 < param_3) goto LAB_10247740;
  local_8 = uVar6 + param_3 | 7;
  if (local_8 < 0x7fffffff) {
    if (0x7ffffffe - (uVar1 >> 1) < uVar1) {
      local_8 = 0x7ffffffe;
    }
    else {
      uVar7 = (uVar1 >> 1) + uVar1;
      if (local_8 < uVar7) {
        local_8 = uVar7;
      }
    }
  }
  else {
    local_8 = 0x7ffffffe;
  }
  iVar5 = FUN_10250c70(param_1,&local_8);
  FUN_10236130();
  param_1[4] = uVar6 + param_3;
  param_1[5] = local_8;
  if (uVar1 < 8) {
LAB_10247718:
    FUN_10250d10(iVar5,param_1,uVar6,param_2,param_3,param_4);
  }
  else {
    iVar2 = *param_1;
    FUN_10250d10(iVar5,iVar2,uVar6,param_2,param_3,param_4);
    uVar7 = uVar1 * 2 + 2;
    iVar8 = iVar2;
    if (0xfff < uVar7) {
      iVar8 = *(int *)(iVar2 + -4);
      uVar7 = uVar1 * 2 + 0x25;
      if (0x1f < (iVar2 - iVar8) - 4U) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)();
        iVar5 = iVar2 - iVar8;
        goto LAB_10247718;
      }
    }
    FUN_102283a0(iVar8,uVar7);
  }
  *param_1 = iVar5;
  FUN_102360d0();
  return param_1;
}

