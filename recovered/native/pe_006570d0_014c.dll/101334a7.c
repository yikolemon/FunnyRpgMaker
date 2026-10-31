/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101334a7 */

void FUN_101334a7(void)

{
  int iVar1;
  int iVar2;
  char acStack_1c [16];
  uint local_c;
  
  iVar2 = DAT_1039d74c;
  local_c = DAT_10388d00 ^ (uint)acStack_1c;
  iVar1 = *(int *)(DAT_1039d74c + 0x255c) + -1;
  *(int *)(DAT_1039d74c + 0x255c) = iVar1;
  FUN_100fa4b1(acStack_1c,0x10,"##Combo_%02d",iVar1);
  iVar2 = _strcmp(*(char **)(*(int *)(iVar2 + 0x14cc) + 4),acStack_1c);
  if (iVar2 == 0) {
    FUN_101165cb();
  }
  else {
    FUN_100fcef5("Calling EndCombo() in wrong window!");
  }
  if (DAT_10388d00 == (local_c ^ (uint)acStack_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

