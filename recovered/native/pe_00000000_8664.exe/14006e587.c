/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006e587 */

LRESULT FUN_14006e587(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LRESULT LVar1;
  
  if (param_2 == 0x10) {
    PostQuitMessage(0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014006e5a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcW(param_1,param_2,param_3,param_4);
  return LVar1;
}

