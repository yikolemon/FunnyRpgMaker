/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009d5a0 */

void FUN_14009d5a0(longlong *param_1)

{
  code *pcVar1;
  
  if ((code *)PTR__guard_check_icall_1401200e0 != _guard_check_icall) {
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

