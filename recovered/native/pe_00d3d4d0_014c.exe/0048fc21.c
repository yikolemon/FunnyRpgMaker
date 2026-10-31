/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048fc21 */

/* Library Function - Multiple Matches With Same Base Name
    char * * __cdecl common_get_or_create_environment_nolock<char>(void)
    wchar_t * * __cdecl common_get_or_create_environment_nolock<wchar_t>(void)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

int common_get_or_create_environment_nolock<>(void)

{
  int iVar1;
  
  iVar1 = DAT_00521928;
  if (DAT_00521928 == 0) {
    if (DAT_00521924 != 0) {
      iVar1 = FUN_0048fb67();
      if (iVar1 == 0) {
        return DAT_00521928;
      }
      iVar1 = FUN_0048fd70();
      if (iVar1 == 0) {
        return DAT_00521928;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

