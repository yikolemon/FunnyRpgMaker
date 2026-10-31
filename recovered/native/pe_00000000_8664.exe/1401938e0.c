/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401938e0 */

longlong FUN_1401938e0(longlong *param_1)

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
    lVar1 = FUN_1401aedb8(local_res8,lVar1);
    *param_1 = lVar1;
    SetLastError(local_res8[0]);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1401a0758();
    }
  }
  return *param_1;
}

