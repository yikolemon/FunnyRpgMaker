/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102699e5 */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * * const)
    void __cdecl free_environment<wchar_t>(wchar_t * * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void free_environment<>(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      FUN_10274120(iVar1);
      piVar2 = piVar2 + 1;
      iVar1 = *piVar2;
    }
    FUN_10274120(param_1);
  }
  return;
}

