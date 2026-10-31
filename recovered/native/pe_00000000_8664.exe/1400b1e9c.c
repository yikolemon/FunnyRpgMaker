/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b1e9c */

void FUN_1400b1e9c(void)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  char local_28 [16];
  ulonglong local_18;
  
  lVar1 = DAT_140f2a910;
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  *(int *)(DAT_140f2a910 + 0x27d8) = *(int *)(DAT_140f2a910 + 0x27d8) + -1;
  FUN_140077d91(local_28,0x10,"##Combo_%02d");
  iVar2 = strcmp(*(char **)(*(longlong *)(lVar1 + 0x1608) + 8),local_28);
  if (iVar2 == 0) {
    FUN_1400946ab();
  }
  else {
    FUN_14007a954("Calling EndCombo() in wrong window!");
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

