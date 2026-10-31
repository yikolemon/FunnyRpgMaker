/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025ebf0 */

int __fastcall FUN_1025ebf0(int *param_1)

{
  int iVar1;
  int *local_8;
  
  if (*param_1 == 0) {
    local_8 = param_1;
    local_8 = (int *)GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      iVar1 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      iVar1 = param_1[1];
    }
    iVar1 = FUN_102744ee(&local_8,iVar1);
    *param_1 = iVar1;
    SetLastError((DWORD)local_8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
  }
  return *param_1;
}

