/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027f168 */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl free_environment<char>(char * __ptr64 * __ptr64 const)
    void __cdecl free_environment<wchar_t>(wchar_t * __ptr64 * __ptr64 const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void free_environment<>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = *param_1;
    plVar2 = param_1;
    while (lVar1 != 0) {
      FUN_180290e40(lVar1);
      plVar2 = plVar2 + 1;
      lVar1 = *plVar2;
    }
    FUN_180290e40(param_1);
  }
  return;
}

