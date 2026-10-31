/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180272d50 */

longlong FUN_180272d50(longlong *param_1)

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
    lVar1 = FUN_180291218(local_res8,lVar1);
    *param_1 = lVar1;
    SetLastError(local_res8[0]);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return *param_1;
}

