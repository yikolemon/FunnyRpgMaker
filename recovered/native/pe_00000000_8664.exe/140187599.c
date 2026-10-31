/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140187599 */

ulonglong FUN_140187599(undefined8 param_1)

{
  ulonglong uVar1;
  undefined1 auStack_38 [38];
  char local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  uVar1 = FUN_14012d612(param_1,0);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_14012d656(param_1,&local_12,2);
    if ((int)uVar1 == 0) {
      uVar1 = (ulonglong)((uint)(local_11 != -99 || local_12 != '\x1f') * 3);
    }
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}

