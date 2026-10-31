/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016a66e */

void FUN_14016a66e(undefined8 param_1,int *param_2,int *param_3,undefined8 param_4,longlong param_5,
                  char param_6)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b0;
  int local_a8;
  int local_9c;
  int *local_98;
  int *local_90;
  int local_88 [6];
  int local_70 [4];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  local_88[0] = *param_2;
  local_88[1] = *param_3;
  cVar1 = *(char *)(param_5 + 9);
  local_9c = CONCAT31(local_9c._1_3_,cVar1);
  iVar5 = 0;
  lVar8 = 0;
  local_98 = param_2;
  local_90 = param_3;
  do {
    iVar2 = local_88[lVar8];
    local_88[lVar8 + 2] = iVar2;
    if (*(char *)(param_5 + lVar8) != '\0') {
      iVar4 = FUN_140169fe7(param_1,iVar5);
      local_88[lVar8 + 2] = iVar4 + iVar2;
      iVar5 = iVar5 + 1;
    }
    piVar6 = local_90;
    piVar9 = local_98;
    lVar8 = lVar8 + 1;
  } while (10 - (ulonglong)(cVar1 == '\0') != lVar8);
  if ((char)local_9c == '\0') {
    local_5c = *local_90;
  }
  iVar2 = local_5c;
  if (param_6 == '\0') {
    if (*(char *)(param_5 + 10) == '\0') {
      iVar4 = *local_98;
    }
    else {
      iVar4 = FUN_140169fe7(param_1,iVar5);
      iVar4 = iVar4 + local_60;
      iVar5 = iVar5 + 1;
    }
    iVar2 = local_5c;
    piVar9 = local_98;
    local_58 = iVar4;
    if (*(char *)(param_5 + 0xb) == '\0') {
      iVar5 = *local_90;
    }
    else {
      iVar5 = FUN_140169fe7(param_1,iVar5);
      iVar5 = iVar5 + iVar2;
    }
  }
  else {
    local_9c = local_60;
    iVar4 = -(local_60 - *local_98);
    if (iVar4 < 0) {
      iVar4 = local_60 - *local_98;
    }
    iVar10 = -(local_5c - *local_90);
    if (iVar10 < 0) {
      iVar10 = local_5c - *local_90;
    }
    iVar5 = FUN_140169fe7(param_1,iVar5);
    if (iVar4 <= iVar10) {
      iVar4 = *piVar9;
      local_58 = iVar4;
      iVar5 = iVar5 + iVar2;
      local_54 = iVar5;
      goto LAB_14016a7e2;
    }
    iVar4 = iVar5 + local_9c;
    local_58 = iVar4;
    iVar5 = *piVar6;
  }
  local_54 = iVar5;
LAB_14016a7e2:
  piVar6 = local_88;
  local_54 = iVar5;
  bVar3 = true;
  do {
    bVar7 = bVar3;
    local_a8 = piVar6[7];
    local_b0 = piVar6[6];
    local_b8 = piVar6[5];
    FUN_14016a2d4(param_4,piVar6[2],piVar6[3],piVar6[4]);
    piVar6 = local_70;
    bVar3 = false;
  } while (bVar7);
  FUN_140169d63(param_1);
  *piVar9 = iVar4;
  *local_90 = iVar5;
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_d8);
}

