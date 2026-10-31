/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180138f6c */

void FUN_180138f6c(void)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  char local_28 [16];
  ulonglong local_18;
  
  lVar1 = DAT_180419160;
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  *(int *)(DAT_180419160 + 0x27d8) = *(int *)(DAT_180419160 + 0x27d8) + -1;
  FUN_1800fead5(local_28,0x10,"##Combo_%02d");
  iVar2 = strcmp(*(char **)(*(longlong *)(lVar1 + 0x1608) + 8),local_28);
  if (iVar2 == 0) {
    FUN_18011b3ef();
  }
  else {
    FUN_180101698("Calling EndCombo() in wrong window!");
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

