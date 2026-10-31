/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020bb0a */

void __fastcall
FUN_1020bb0a(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,
            char param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int *local_50;
  int local_4c [6];
  int aiStack_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_70;
  local_4c[0] = *param_2;
  local_4c[1] = *param_3;
  local_5c = CONCAT31(local_5c._1_3_,*(char *)(param_5 + 9));
  local_58 = 10 - (uint)(*(char *)(param_5 + 9) == '\0');
  iVar5 = 0;
  local_54 = param_1;
  local_50 = param_2;
  do {
    iVar6 = local_4c[iVar5];
    local_4c[iVar5 + 2] = iVar6;
    if (*(char *)(param_5 + iVar5) != '\0') {
      iVar3 = FUN_1020b54f();
      local_4c[iVar5 + 2] = iVar3 + iVar6;
    }
    piVar4 = local_50;
    iVar5 = iVar5 + 1;
  } while (local_58 != iVar5);
  if ((char)local_5c == '\0') {
    local_20 = *param_3;
  }
  if (param_6 == '\0') {
    if (*(char *)(param_5 + 10) == '\0') {
      local_58 = *local_50;
    }
    else {
      local_58 = FUN_1020b54f();
      local_58 = local_58 + local_24;
    }
    iVar5 = local_20;
    local_1c = local_58;
    if (*(char *)(param_5 + 0xb) == '\0') {
      local_18 = *param_3;
    }
    else {
      local_18 = FUN_1020b54f();
      local_18 = local_18 + iVar5;
    }
  }
  else {
    local_58 = local_24;
    iVar5 = -(local_24 - *local_50);
    if (iVar5 < 0) {
      iVar5 = local_24 - *local_50;
    }
    local_5c = local_20;
    iVar6 = -(local_20 - *param_3);
    if (iVar6 < 0) {
      iVar6 = local_20 - *param_3;
    }
    local_18 = FUN_1020b54f();
    if (iVar6 < iVar5) {
      local_58 = local_18 + local_58;
      local_1c = local_58;
      local_18 = *param_3;
    }
    else {
      local_58 = *piVar4;
      local_1c = local_58;
      local_18 = local_18 + local_5c;
    }
  }
  piVar4 = local_4c;
  local_5c = local_18;
  bVar1 = true;
  do {
    bVar2 = bVar1;
    local_60 = piVar4[7];
    local_70 = piVar4[3];
    iStack_6c = piVar4[4];
    iStack_68 = piVar4[5];
    iStack_64 = piVar4[6];
    FUN_1020b7e5();
    piVar4 = aiStack_34;
    bVar1 = false;
  } while (bVar2);
  FUN_1020b317();
  *local_50 = local_58;
  *param_3 = local_5c;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_70)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

