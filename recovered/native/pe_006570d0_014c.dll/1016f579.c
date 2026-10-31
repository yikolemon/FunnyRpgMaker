/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016f579 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __fastcall FUN_1016f579(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_8868;
  undefined4 local_8864;
  int local_8860;
  undefined4 local_885c;
  undefined4 local_8858;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_8868;
  _memset(&local_8868,0,0x8858);
  iVar1 = FUN_101738e2();
  if ((iVar1 == param_1) || (iVar1 == 0)) {
    iVar1 = 0;
    if (local_8860 != 0) {
      thunk_FUN_10274120(local_8860);
    }
  }
  else {
    *param_2 = local_8868;
    *param_3 = local_8864;
  }
  thunk_FUN_10274120(local_8858);
  thunk_FUN_10274120(local_885c);
  if (DAT_10388d00 == (local_10 ^ (uint)&local_8868)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

