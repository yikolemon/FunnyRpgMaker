/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c48be */

void FUN_1801c48be(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_180118054(param_2);
  FUN_1801330a5("Document \"%s\"",param_2);
  FUN_1801014f9(0,param_2 + 0x28);
  FUN_1801332a0(
               "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua."
               );
  FUN_180101625(1);
  FUN_180119400(0x1233,0x40000);
  local_38 = 0;
  cVar1 = FUN_180134257("Rename..");
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 0x20) = param_2;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_180119400(0x122e,0x40000);
  local_38 = 0;
  cVar1 = FUN_180134257("Modify");
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 0x26) = 1;
  }
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_180119400(0x1234,0x40000);
  local_38 = 0;
  cVar1 = FUN_180134257(&DAT_180368bae);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 0x26) = 0;
  }
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_180119400(0x1238,0x40000);
  local_38 = 0;
  cVar1 = FUN_180134257("Close");
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == *(int *)(param_1 + 0x14)) {
      if (iVar2 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar2 / 2 + iVar2;
      }
      iVar5 = iVar2 + 1;
      if (iVar2 + 1 < iVar4) {
        iVar5 = iVar4;
      }
      lVar3 = FUN_1800fe7f8((longlong)iVar5 << 3);
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1802a82f0(lVar3,*(longlong *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x10) << 3);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x18));
      }
      *(longlong *)(param_1 + 0x18) = lVar3;
      *(int *)(param_1 + 0x14) = iVar5;
      iVar2 = *(int *)(param_1 + 0x10);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    *(longlong *)(lVar3 + (longlong)iVar2 * 8) = param_2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  FUN_18014836f("color",param_2 + 0x28,0);
  FUN_18011834f();
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

