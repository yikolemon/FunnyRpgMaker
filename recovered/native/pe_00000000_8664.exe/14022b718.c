/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022b718 */

/* WARNING: Switch with 1 destination removed at 0x00014022b789 : 21 cases all go to same
   destination */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14022b718(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  char cVar5;
  undefined1 auStack_98 [80];
  ulonglong local_48;
  
  local_48 = ram0x000140613b10 ^ (ulonglong)auStack_98;
  puVar4 = (undefined *)CONCAT71((int7)(local_48 >> 8),1);
  if (param_2 != 0) {
    cVar5 = '\x01';
    FUN_14022c43a(param_1);
    uVar3 = *(int *)(param_2 + 8) - 1;
    if (uVar3 < 0x15) {
      iVar2 = *(int *)(&DAT_1404c75b0 + (ulonglong)uVar3 * 4);
      pcVar1 = (char *)((longlong)iVar2 + 0x16910f8f8);
      *pcVar1 = *pcVar1 + cVar5;
      return &DAT_1404c75b0 + iVar2;
    }
    puVar4 = (undefined *)0x0;
  }
  if (ram0x000140613b10 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_48 ^ (ulonglong)auStack_98);
  }
  return puVar4;
}

