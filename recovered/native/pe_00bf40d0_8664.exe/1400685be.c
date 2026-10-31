/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400685be */

void FUN_1400685be(longlong param_1,int *param_2,int *param_3,longlong *param_4,longlong param_5,
                  char param_6)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStackY_d8 [32];
  int local_88 [6];
  int local_70 [4];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_d8;
  local_88[0] = *param_2;
  local_88[1] = *param_3;
  cVar1 = *(char *)(param_5 + 9);
  uVar8 = 0;
  lVar9 = 0;
  do {
    iVar2 = local_88[lVar9];
    local_88[lVar9 + 2] = iVar2;
    if (*(char *)(param_5 + lVar9) != '\0') {
      iVar4 = FUN_140067f37(param_1,uVar8);
      local_88[lVar9 + 2] = iVar4 + iVar2;
      uVar8 = uVar8 + 1;
    }
    lVar9 = lVar9 + 1;
  } while (10 - (ulonglong)(cVar1 == '\0') != lVar9);
  if (cVar1 == '\0') {
    local_5c = *param_3;
  }
  iVar2 = local_5c;
  if (param_6 == '\0') {
    if (*(char *)(param_5 + 10) == '\0') {
      iVar4 = *param_2;
    }
    else {
      iVar4 = FUN_140067f37(param_1,uVar8);
      iVar4 = iVar4 + local_60;
      uVar8 = uVar8 + 1;
    }
    iVar2 = local_5c;
    local_58 = iVar4;
    if (*(char *)(param_5 + 0xb) == '\0') {
      iVar5 = *param_3;
    }
    else {
      iVar5 = FUN_140067f37(param_1,uVar8);
      iVar5 = iVar5 + iVar2;
    }
  }
  else {
    iVar4 = -(local_60 - *param_2);
    if (iVar4 < 0) {
      iVar4 = local_60 - *param_2;
    }
    iVar10 = -(local_5c - *param_3);
    if (iVar10 < 0) {
      iVar10 = local_5c - *param_3;
    }
    iVar5 = FUN_140067f37(param_1,uVar8);
    if (iVar4 <= iVar10) {
      iVar4 = *param_2;
      local_58 = iVar4;
      iVar5 = iVar5 + iVar2;
      local_54 = iVar5;
      goto LAB_140068732;
    }
    iVar4 = iVar5 + local_60;
    local_58 = iVar4;
    iVar5 = *param_3;
  }
  local_54 = iVar5;
LAB_140068732:
  piVar6 = local_88;
  local_54 = iVar5;
  bVar3 = true;
  do {
    bVar7 = bVar3;
    FUN_140068224(param_4,piVar6[2],piVar6[3],piVar6[4],piVar6[5],piVar6[6],piVar6[7]);
    piVar6 = local_70;
    bVar3 = false;
  } while (bVar7);
  FUN_140067cb3(param_1);
  *param_2 = iVar4;
  *param_3 = iVar5;
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_d8);
}

