/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b06f5 */

void FUN_1400b06f5(void)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  lVar1 = DAT_140f2a910;
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    local_10 = 0;
    FUN_14008a82c(&local_10,DAT_1401c86a4);
  }
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

