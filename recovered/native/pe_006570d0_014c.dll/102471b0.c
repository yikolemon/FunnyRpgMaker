/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102471b0 */

int * __thiscall FUN_102471b0(int *param_1,uint param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint local_8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  if (param_2 < 8) {
    param_1[4] = param_2;
    param_1[5] = 7;
    if (param_2 != 0) {
      piVar7 = param_1;
      for (uVar3 = (param_2 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *piVar7 = CONCAT22(param_3,param_3);
        piVar7 = piVar7 + 1;
      }
      for (uVar3 = (uint)((param_2 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined2 *)piVar7 = param_3;
        piVar7 = (int *)((int)piVar7 + 2);
      }
    }
    *(undefined2 *)(param_2 * 2 + (int)param_1) = 0;
    return param_1;
  }
  local_8 = param_2 | 7;
  if (local_8 < 0x7fffffff) {
    if (local_8 < 10) {
      local_8 = 10;
    }
    puVar2 = (undefined4 *)FUN_10250c70(param_1,&local_8);
    *param_1 = (int)puVar2;
    param_1[5] = local_8;
  }
  else {
    local_8 = 0x7ffffffe;
    puVar2 = (undefined4 *)FUN_10250c70(param_1,&local_8);
    *param_1 = (int)puVar2;
    param_1[5] = local_8;
  }
  param_1[4] = param_2;
  puVar8 = puVar2;
  for (uVar3 = param_2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = CONCAT22(param_3,param_3);
    puVar8 = puVar8 + 1;
  }
  for (uVar3 = (uint)((param_2 & 1) != 0); uVar5 = param_2, uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined2 *)puVar8 = param_3;
    puVar8 = (undefined4 *)((int)puVar8 + 2);
  }
  do {
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  *(undefined2 *)((int)puVar2 + param_2 * 2) = 0;
  uVar3 = param_1[5];
  if ((7 < uVar3) && (iVar1 = *param_1, DAT_103235d4 != '\0')) {
    uVar5 = iVar1 + (uVar3 + 1) * 2;
    uVar6 = iVar1 + (param_1[4] + 1) * 2;
    uVar4 = uVar3 * 2 + 9 + iVar1 & 0xfffffff8;
    uVar3 = uVar4;
    if (uVar5 <= uVar4) {
      uVar3 = uVar5;
    }
    if (uVar4 < uVar6) {
      uVar6 = uVar4;
    }
    guard_check_icall(iVar1,uVar4,uVar3,uVar6);
  }
  return param_1;
}

