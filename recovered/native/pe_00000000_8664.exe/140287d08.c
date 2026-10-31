/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140287d08 */

longlong * FUN_140287d08(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*param_1 != param_2) {
    if (*param_1 != 0) {
      thunk_FUN_1404a2310();
    }
    *param_1 = 0;
    if (param_2 != 0) {
      lVar1 = FUN_140287d47(param_2);
      *param_1 = lVar1;
    }
  }
  return param_1;
}

