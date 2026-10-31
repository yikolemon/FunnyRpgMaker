/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010bc10 */

longlong FUN_14010bc10(longlong *param_1)

{
  longlong lVar1;
  DWORD local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      lVar1 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[1] = 0;
    }
    else {
      lVar1 = param_1[1];
    }
    lVar1 = FUN_140121668(local_res8,lVar1);
    *param_1 = lVar1;
    SetLastError(local_res8[0]);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140115938();
    }
  }
  return *param_1;
}

