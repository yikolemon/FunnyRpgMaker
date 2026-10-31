/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10247420 */

int * __thiscall FUN_10247420(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint local_8;
  
  uVar5 = param_1[5];
  iVar9 = param_1[4];
  if (param_2 <= uVar5 - iVar9) {
    iVar4 = iVar9 + param_2;
    if (iVar9 != iVar4) {
      piVar3 = param_1;
      if (7 < uVar5) {
        piVar3 = (int *)*param_1;
      }
      FUN_10236190(piVar3,uVar5,iVar9,iVar4);
    }
    param_1[4] = iVar4;
    piVar3 = param_1;
    if (7 < (uint)param_1[5]) {
      piVar3 = (int *)*param_1;
    }
    if (param_2 != 0) {
      puVar7 = (uint *)((int)piVar3 + iVar9 * 2);
      for (uVar5 = param_2 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = param_3 & 0xffff | param_3 << 0x10;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = (uint)((param_2 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
        *(short *)puVar7 = (short)param_3;
        puVar7 = (uint *)((int)puVar7 + 2);
      }
    }
    *(undefined2 *)((int)piVar3 + iVar4 * 2) = 0;
    return param_1;
  }
  if (0x7ffffffeU - iVar9 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  local_8 = iVar9 + param_2 | 7;
  if (local_8 < 0x7fffffff) {
    if (0x7ffffffe - (uVar5 >> 1) < uVar5) {
      local_8 = 0x7ffffffe;
    }
    else {
      uVar6 = (uVar5 >> 1) + uVar5;
      if (local_8 < uVar6) {
        local_8 = uVar6;
      }
    }
  }
  else {
    local_8 = 0x7ffffffe;
  }
  iVar4 = FUN_10250c70(param_1,&local_8);
  FUN_10236130();
  param_1[4] = iVar9 + param_2;
  param_1[5] = local_8;
  if (uVar5 < 8) {
LAB_1024756c:
    FUN_102506a0(iVar4,param_1,iVar9,param_2,param_3);
  }
  else {
    iVar1 = *param_1;
    FUN_102506a0(iVar4,iVar1,iVar9,param_2,param_3);
    uVar6 = uVar5 * 2 + 2;
    iVar8 = iVar1;
    if (0xfff < uVar6) {
      iVar8 = *(int *)(iVar1 + -4);
      uVar6 = uVar5 * 2 + 0x25;
      if (0x1f < (iVar1 - iVar8) - 4U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        iVar4 = iVar1 - iVar8;
        goto LAB_1024756c;
      }
    }
    FUN_102283a0(iVar8,uVar6);
  }
  *param_1 = iVar4;
  FUN_102360d0();
  return param_1;
}

