/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010a5c2 */

void FUN_14010a5c2(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  FUN_14009136c(param_2);
  FUN_1400abfd5("Document \"%s\"",param_2);
  FUN_14007a7b5(0,param_2 + 0x28);
  FUN_1400ac1d0(
               "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua."
               );
  FUN_14007a8e1(1);
  FUN_140092718(0x1233,0x40000);
  local_38 = 0;
  cVar1 = FUN_1400ad187("Rename..");
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 0x20) = param_2;
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  FUN_140092bab(0,DAT_1401c86a4);
  FUN_140092718(0x122e,0x40000);
  local_38 = 0;
  cVar1 = FUN_1400ad187("Modify");
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 0x26) = 1;
  }
  FUN_140092bab(0,DAT_1401c86a4);
  FUN_140092718(0x1234,0x40000);
  local_38 = 0;
  cVar1 = FUN_1400ad187(&DAT_140ec9c59);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 0x26) = 0;
  }
  FUN_140092bab(0,DAT_1401c86a4);
  FUN_140092718(0x1238,0x40000);
  local_38 = 0;
  cVar1 = FUN_1400ad187("Close");
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
      lVar3 = FUN_140077ab4((longlong)iVar5 << 3);
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1401c5180(lVar3,*(longlong *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x10) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x18));
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
  FUN_1400c129f("color",param_2 + 0x28,0);
  FUN_140091667();
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

