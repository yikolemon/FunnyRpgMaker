/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291834 */

/* Library Function - Single Match
    __acrt_uninitialize_winapi_thunks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_winapi_thunks(char param_1)

{
  HMODULE hLibModule;
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_180421250;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != &DAT_180421308);
  }
  return 1;
}

