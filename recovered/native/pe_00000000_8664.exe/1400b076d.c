/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b076d */

void FUN_1400b076d(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  lVar1 = DAT_140f2a910;
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    local_20 = *(undefined8 *)(*(longlong *)(lVar1 + 0x1608) + 0x158);
    local_18 = CONCAT44((float)((ulonglong)*param_1 >> 0x20) + (float)((ulonglong)local_20 >> 0x20),
                        (float)*param_1 + (float)local_20);
    FUN_14008a82c(local_20,DAT_1401c86a4);
    FUN_14008a9ce(&local_20,0,0,0);
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_48);
}

