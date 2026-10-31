/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022a8d0 */

longlong FUN_18022a8d0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x3f0);
  if (lVar2 == 0) {
    if ((*(longlong *)(param_1 + 0x408) == 0) ||
       (((*(ushort *)(param_1 + 6) & 0x7fff) == 0 && ((*(byte *)(param_1 + 9) & 0x80) == 0)))) {
      cVar1 = FUN_180226dc3(param_1,6,&local_14,&local_18);
      if (cVar1 == '\0') {
        lVar2 = 0;
        goto LAB_18022a9bf;
      }
      if ((longlong)local_14 == -1) {
        lVar2 = 0;
      }
      else {
        lVar2 = FUN_18022af06(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x200),
                              (longlong)local_14 * 0x18 + *(longlong *)(param_1 + 0x1e8),
                              &LAB_18022b053);
      }
      if (local_18 != -1 && lVar2 == 0) {
        lVar2 = FUN_18022b077(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x200),
                              (longlong)local_18 * 0x18 + *(longlong *)(param_1 + 0x1e8),
                              &LAB_18022b053);
      }
    }
    else {
      lVar2 = FUN_18022a9e7(param_1);
    }
    *(longlong *)(param_1 + 0x3f0) = lVar2;
  }
LAB_18022a9bf:
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

