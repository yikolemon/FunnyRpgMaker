/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028d3e0 */

void FUN_18028d3e0(longlong *param_1)

{
  code *pcVar1;
  
  if ((code *)PTR__guard_check_icall_18038bc70 != _guard_check_icall) {
    if (((ulonglong)param_1[2] < *(ulonglong *)((longlong)Self + 0x10)) ||
       (*(ulonglong *)((longlong)Self + 8) < (ulonglong)param_1[2])) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0xd);
    }
    if (*param_1 == 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0xd);
    }
  }
  return;
}

