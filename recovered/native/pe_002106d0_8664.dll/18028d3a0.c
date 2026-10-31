/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028d3a0 */

/* Library Function - Single Match
    __except_validate_context_record
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __except_validate_context_record(longlong param_1)

{
  code *pcVar1;
  
  if ((code *)PTR__guard_check_icall_18038bc70 != _guard_check_icall) {
    if ((*(ulonglong *)(param_1 + 0x98) < *(ulonglong *)((longlong)Self + 0x10)) ||
       (*(ulonglong *)((longlong)Self + 8) < *(ulonglong *)(param_1 + 0x98))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0xd);
    }
  }
  return;
}

