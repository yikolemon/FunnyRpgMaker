/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10273560 */

/* Library Function - Single Match
    __global_unwind2
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10273579,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

