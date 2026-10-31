/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140179fbc */

longlong FUN_140179fbc(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x3f0);
  if (lVar2 == 0) {
    if ((*(longlong *)(param_1 + 0x408) == 0) ||
       (((*(ushort *)(param_1 + 6) & 0x7fff) == 0 && ((*(byte *)(param_1 + 9) & 0x80) == 0)))) {
      cVar1 = FUN_1401764af(param_1,6,&local_14,&local_18);
      if (cVar1 == '\0') {
        lVar2 = 0;
        goto LAB_14017a0ab;
      }
      if ((longlong)local_14 == -1) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_14017a5f2(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x200),
                              (longlong)local_14 * 0x18 + *(longlong *)(param_1 + 0x1e8),
                              &LAB_14017a73f);
      }
      if (local_18 != -1 && lVar2 == 0) {
        lVar2 = FUN_14017a763(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x200),
                              (longlong)local_18 * 0x18 + *(longlong *)(param_1 + 0x1e8),
                              &LAB_14017a73f);
      }
    }
    else {
      lVar2 = FUN_14017a0d3(param_1);
    }
    *(longlong *)(param_1 + 0x3f0) = lVar2;
  }
LAB_14017a0ab:
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}

