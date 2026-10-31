/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488ed0 */

int __fastcall FUN_00488ed0(int *param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
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
    p_Var2 = FUN_0049628a(&local_8,iVar1);
    *param_1 = (int)p_Var2;
    SetLastError((DWORD)local_8);
    if (p_Var2 == (__acrt_ptd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_004903c8();
    }
  }
  return *param_1;
}

