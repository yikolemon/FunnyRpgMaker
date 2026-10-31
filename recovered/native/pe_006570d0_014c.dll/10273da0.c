/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10273da0 */

/* Library Function - Single Match
    @_EH4_GlobalUnwind2@8
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release
   __fastcall _EH4_GlobalUnwind2,8 */

void __fastcall _EH4_GlobalUnwind2(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  RtlUnwind(param_1,(PVOID)0x10273db5,param_2,(PVOID)0x0);
  return;
}

