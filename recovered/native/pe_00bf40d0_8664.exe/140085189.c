/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140085189 */

ulonglong FUN_140085189(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_38 [38];
  char local_12;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  uVar1 = FUN_140020a41((longlong)param_1,0);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_140020a85(param_1,(undefined8 *)&local_12,2);
    if ((int)uVar1 == 0) {
      uVar1 = (ulonglong)((uint)(local_11 != -99 || local_12 != '\x1f') * 3);
    }
  }
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_38);
}

