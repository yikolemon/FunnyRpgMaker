/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140077f10 */

char * FUN_140077f10(longlong param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(param_1 + 0x3f0);
  if (pcVar2 == (char *)0x0) {
    if ((*(longlong *)(param_1 + 0x408) == 0) ||
       (((*(ushort *)(param_1 + 6) & 0x7fff) == 0 && ((*(byte *)(param_1 + 9) & 0x80) == 0)))) {
      uVar1 = FUN_140074403(param_1,6,&local_14,&local_18);
      if ((char)uVar1 == '\0') {
        pcVar2 = (char *)0x0;
        goto LAB_140077fff;
      }
      if ((longlong)local_14 == -1) {
        pcVar2 = (char *)0x0;
      }
      else {
        pcVar2 = FUN_140078546(*(longlong *)(param_1 + 0x98),*(longlong **)(param_1 + 0x200),
                               (longlong)local_14 * 0x18 + *(longlong *)(param_1 + 0x1e8),
                               &LAB_140078693);
      }
      if (local_18 != -1 && pcVar2 == (char *)0x0) {
        pcVar2 = FUN_1400786b7(*(longlong *)(param_1 + 0x98),*(longlong **)(param_1 + 0x200),
                               (longlong)local_18 * 0x18 + *(longlong *)(param_1 + 0x1e8),
                               &LAB_140078693);
      }
    }
    else {
      pcVar2 = FUN_140078027(param_1);
    }
    *(char **)(param_1 + 0x3f0) = pcVar2;
  }
LAB_140077fff:
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_38)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_38);
}

