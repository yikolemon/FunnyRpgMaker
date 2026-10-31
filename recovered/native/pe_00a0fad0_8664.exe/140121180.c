/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121180 */

longlong FUN_140121180(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  lVar1 = *param_1;
  lVar2 = 0;
  if (lVar1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    lVar1 = FUN_140121668(local_res8,lVar2);
    *param_1 = lVar1;
    SetLastError(local_res8[0]);
  }
  return lVar1;
}

