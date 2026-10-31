/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180290ce8 */

longlong FUN_180290ce8(longlong *param_1)

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
    lVar1 = FUN_180291218(local_res8,lVar2);
    *param_1 = lVar1;
    SetLastError(local_res8[0]);
  }
  return lVar1;
}

