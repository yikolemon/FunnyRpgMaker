/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002425a */

void FUN_1002425a(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  local_18 = *param_1;
  FUN_100244ca();
  iVar2 = local_18;
  local_1c = *(int *)*param_1;
  if ((int *)local_1c != (int *)*param_1) {
    do {
      iVar1 = local_1c;
      if (*(uint *)(local_1c + 0x24) < 0x10) {
        iVar3 = local_1c + 0x10;
      }
      else {
        iVar3 = *(int *)(local_1c + 0x10);
      }
      FUN_1001909c(iVar3,*(int *)(local_1c + 0x20) + iVar3);
      FUN_1001909c(&DAT_1033da8f,&DAT_1033da90);
      if (*(uint *)(iVar1 + 0x3c) < 0x10) {
        iVar3 = iVar1 + 0x28;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x28);
      }
      FUN_1001909c(iVar3,*(int *)(iVar1 + 0x38) + iVar3);
      if (local_1c != iVar2) {
        FUN_1001909c(&DAT_1034bcc8,&DAT_1034bcc9);
      }
      FUN_10016fb8();
    } while (local_1c != *param_1);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

