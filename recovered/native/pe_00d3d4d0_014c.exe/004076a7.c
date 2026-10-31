/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004076a7 */

HMODULE __cdecl FUN_004076a7(undefined *param_1)

{
  code *lpModuleName;
  HMODULE local_c;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&local_c;
  local_c = (HMODULE)0x0;
  lpModuleName = FUN_004076a7;
  if (param_1 != (undefined *)0x0) {
    lpModuleName = (code *)param_1;
  }
  GetModuleHandleExW(6,(LPCWSTR)lpModuleName,&local_c);
  if (DAT_0050e8c0 == (local_8 ^ (uint)&local_c)) {
    return local_c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&local_c);
}

