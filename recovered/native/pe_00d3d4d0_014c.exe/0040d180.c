/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040d180 */

undefined4 * __cdecl FUN_0040d180(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (param_3 != '\0') {
    pwVar1 = L"true";
  }
  FUN_0040d1a9(param_1,param_2,pwVar1);
  return param_1;
}

