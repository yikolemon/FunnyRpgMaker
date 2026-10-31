/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400058a2 */

WCHAR * FUN_1400058a2(longlong param_1,WCHAR *param_2,WCHAR *param_3)

{
  WCHAR WVar1;
  
  if (param_2 != param_3) {
    do {
      WVar1 = FUN_140088d60(*param_2,param_1 + 0x10);
      *param_2 = WVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

