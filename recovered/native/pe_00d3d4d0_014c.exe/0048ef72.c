/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048ef72 */

LPVOID __cdecl FUN_0048ef72(uint param_1,uint param_2,uint param_3)

{
  LPVOID pvVar1;
  
  if ((param_1 < 0x3fffffff) && (param_2 < (uint)(0xffffffff / (ulonglong)param_3))) {
    if (param_2 * param_3 < ~(param_1 * 4)) {
      pvVar1 = FUN_00497060(param_1 * 4 + param_2 * param_3,1);
      FUN_00495f00((LPVOID)0x0);
      return pvVar1;
    }
  }
  return (LPVOID)0x0;
}

