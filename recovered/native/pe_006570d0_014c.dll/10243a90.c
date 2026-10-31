/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10243a90 */

/* WARNING: Removing unreachable block (ram,0x10243b07) */
/* WARNING: Removing unreachable block (ram,0x10243b0d) */
/* WARNING: Removing unreachable block (ram,0x10243b17) */
/* WARNING: Removing unreachable block (ram,0x10243b2f) */
/* WARNING: Removing unreachable block (ram,0x10243b32) */
/* WARNING: Removing unreachable block (ram,0x10243b34) */
/* WARNING: Removing unreachable block (ram,0x10243b37) */

int * __thiscall FUN_10243a90(int param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &DAT_1028a0ce;
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 7;
  *(undefined2 *)param_2 = 0;
  local_8 = 0;
  local_14 = param_4 - param_3 >> 1;
  if (local_14 != 0) {
    uVar4 = 0;
    if (local_14 != 0) goto LAB_10243b5f;
    local_8 = 0;
    puStack_c = &DAT_1028a0ce;
    param_2[4] = 0;
    piVar5 = param_2;
    if (7 < (uint)param_2[5]) {
      piVar5 = (int *)*param_2;
    }
    *(undefined2 *)piVar5 = 0;
    while( true ) {
      if ((uint)param_2[5] < 8) {
        iVar2 = (int)param_2 + param_2[4] * 2;
        piVar5 = param_2;
      }
      else {
        iVar2 = *param_2 + param_2[4] * 2;
        piVar5 = (int *)*param_2;
      }
      local_14 = FUN_10233490(piVar5,iVar2,param_3,param_4,param_1 + 8);
      if (local_14 == 0xffffffff) break;
      uVar4 = param_2[4];
      if (local_14 <= uVar4) goto LAB_10243ba7;
LAB_10243b5f:
      FUN_10247420(local_14 - uVar4,0);
    }
    local_14 = 0;
  }
LAB_10243ba7:
  uVar4 = param_2[4];
  if (uVar4 < local_14) {
    FUN_10247420(local_14 - uVar4,0);
  }
  else {
    if (((local_14 != uVar4) && (7 < (uint)param_2[5])) && (iVar2 = *param_2, DAT_103235d4 != '\0'))
    {
      uVar7 = iVar2 + (local_14 + 1) * 2;
      uVar4 = iVar2 + (uVar4 + 1) * 2;
      uVar6 = iVar2 + param_2[5] * 2 + 9U & 0xfffffff8;
      uVar3 = uVar6;
      if (uVar4 <= uVar6) {
        uVar3 = uVar4;
      }
      if (uVar6 < uVar7) {
        uVar7 = uVar6;
      }
      guard_check_icall(*param_2,uVar6,uVar3,uVar7,uVar1);
    }
    param_2[4] = local_14;
    piVar5 = param_2;
    if (7 < (uint)param_2[5]) {
      piVar5 = (int *)*param_2;
    }
    *(undefined2 *)((int)piVar5 + local_14 * 2) = 0;
  }
  ExceptionList = local_10;
  return param_2;
}

