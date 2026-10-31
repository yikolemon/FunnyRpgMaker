/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00463282 */

void __fastcall
FUN_00463282(int param_1,int *param_2,int *param_3,int *param_4,int param_5,char param_6)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_58;
  int local_4c [6];
  int aiStack_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xffffff90;
  local_4c[0] = *param_2;
  local_4c[1] = *param_3;
  cVar1 = *(char *)(param_5 + 9);
  iVar9 = 0;
  uVar6 = 0;
  do {
    iVar8 = local_4c[iVar9];
    local_4c[iVar9 + 2] = iVar8;
    uVar7 = uVar6;
    if (*(char *)(param_5 + iVar9) != '\0') {
      uVar7 = uVar6 + 1;
      iVar4 = FUN_00462cc7(param_1,uVar6);
      local_4c[iVar9 + 2] = iVar4 + iVar8;
    }
    iVar9 = iVar9 + 1;
    uVar6 = uVar7;
  } while (10 - (uint)(cVar1 == '\0') != iVar9);
  if (cVar1 == '\0') {
    local_20 = *param_3;
  }
  iVar9 = local_20;
  if (param_6 == '\0') {
    if (*(char *)(param_5 + 10) == '\0') {
      local_58 = *param_2;
    }
    else {
      local_58 = FUN_00462cc7(param_1,uVar7);
      local_58 = local_58 + local_24;
      uVar7 = uVar7 + 1;
    }
    iVar9 = local_20;
    local_1c = local_58;
    if (*(char *)(param_5 + 0xb) == '\0') {
      local_18 = *param_3;
    }
    else {
      local_18 = FUN_00462cc7(param_1,uVar7);
      local_18 = local_18 + iVar9;
    }
  }
  else {
    iVar8 = -(local_24 - *param_2);
    if (iVar8 < 0) {
      iVar8 = local_24 - *param_2;
    }
    iVar4 = -(local_20 - *param_3);
    if (iVar4 < 0) {
      iVar4 = local_20 - *param_3;
    }
    local_18 = FUN_00462cc7(param_1,uVar7);
    if (iVar4 < iVar8) {
      local_58 = local_18 + local_24;
      local_1c = local_58;
      local_18 = *param_3;
    }
    else {
      local_58 = *param_2;
      local_1c = local_58;
      local_18 = local_18 + iVar9;
    }
  }
  iVar9 = local_18;
  piVar5 = local_4c;
  bVar2 = true;
  do {
    bVar3 = bVar2;
    FUN_00462f5d(param_4,piVar5[2],piVar5[3],piVar5[4],piVar5[5],piVar5[6],piVar5[7]);
    piVar5 = aiStack_34;
    bVar2 = false;
  } while (bVar3);
  FUN_00462a8f(param_1);
  *param_2 = local_58;
  *param_3 = iVar9;
  if (DAT_0050e8c0 != (local_14 ^ (uint)&stack0xffffff90)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&stack0xffffff90);
  }
  return;
}

