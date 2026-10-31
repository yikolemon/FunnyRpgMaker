/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016936c */

void FUN_1016936c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined1 local_a4 [100];
  int local_40;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_a4;
  local_18 = &LAB_1016a620;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar2 = *(int *)(param_1 + 0x2cc);
  if (0 < iVar2) {
    piVar1 = *(int **)(param_1 + 0x2d4);
    do {
      if (*piVar1 == param_2) goto code_r0x1016950d;
      piVar1 = piVar1 + 0x1f;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_14 = 0xffffffff;
  FUN_1016958a();
  local_14 = 3;
  iVar2 = *(int *)(param_1 + 0x2cc);
  if (iVar2 == *(int *)(param_1 + 0x2d0)) {
    if (iVar2 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar2 / 2 + iVar2;
    }
    local_28 = iVar2 + 1;
    if (iVar2 + 1 < iVar3) {
      local_28 = iVar3;
    }
    iVar3 = FUN_100fa1fa(local_28 * 0x7c);
    if (*(int *)(param_1 + 0x2d4) != 0) {
      local_24 = iVar3;
      FUN_1025b2d0(iVar3,*(int *)(param_1 + 0x2d4),*(int *)(param_1 + 0x2cc) * 0x7c);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x2d4));
      iVar3 = local_24;
    }
    *(int *)(param_1 + 0x2d4) = iVar3;
    *(int *)(param_1 + 0x2d0) = local_28;
    iVar2 = *(int *)(param_1 + 0x2cc);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2d4);
  }
  FUN_1025b2d0(iVar2 * 0x7c + iVar3,local_a4,0x7c);
  *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x2cc) + 1;
  local_14 = 0;
  FUN_10187cd0();
  local_14 = 0xffffffff;
  if (local_2c != 0) {
    FUN_100fa2cb(local_2c);
  }
  if (local_40 != 0) {
    FUN_100fa2cb(local_40);
  }
  *(int *)(*(int *)(param_1 + 0x2d4) + *(int *)(param_1 + 0x2cc) * 0x7c + -0x7c) = param_2;
code_r0x1016950d:
  *unaff_FS_OFFSET = local_1c;
  return;
}

