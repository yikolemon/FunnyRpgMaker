/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008f040 */

longlong FUN_14008f040(longlong *param_1)

{
  __acrt_ptd *p_Var1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      lVar2 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[1] = 0;
    }
    else {
      lVar2 = param_1[1];
    }
    p_Var1 = FUN_1400a1618(local_res8,lVar2);
    *param_1 = (longlong)p_Var1;
    SetLastError(local_res8[0]);
    if (p_Var1 == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_140096cf8();
    }
  }
  return *param_1;
}

