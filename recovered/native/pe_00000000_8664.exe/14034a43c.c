/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14034a43c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14034a43c(void)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  char local_28 [16];
  ulonglong local_18;
  
  lVar1 = DAT_14062a630;
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  *(int *)(DAT_14062a630 + 0x27d8) = *(int *)(DAT_14062a630 + 0x27d8) + -1;
  FUN_14030ffa5(local_28,0x10,
                "_items,weapons:$gameParty._weapons,armors:$gameParty._armors,switches:$gameSwitches._data,variables:$gameVariables._data"
               );
  iVar2 = strcmp(*(char **)(*(longlong *)(lVar1 + 0x1608) + 8),local_28);
  if (iVar2 == 0) {
    FUN_14032c8bf();
  }
  else {
    FUN_140312b68("d!");
  }
  if (ram0x000140613b10 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_18 ^ (ulonglong)auStack_48);
}

