/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004814c0 */

int __cdecl FUN_004814c0(LPCWSTR param_1,int param_2,LPWORD param_3)

{
  GetStringTypeW(1,param_1,param_2 - (int)param_1 >> 1,param_3);
  return param_2;
}

