/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180188417 */

LRESULT FUN_180188417(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LRESULT LVar1;
  
  if (param_2 == 0x10) {
    PostQuitMessage(0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000180188433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcW(param_1,param_2,param_3,param_4);
  return LVar1;
}

