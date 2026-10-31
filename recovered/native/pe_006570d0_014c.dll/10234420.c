/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234420 */

int __fastcall FUN_10234420(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  
  if (param_1[0x13] != 0) {
    pcVar1 = *(code **)(*param_1 + 0xc);
    (*(code *)PTR_guard_check_icall_1035d810)(0xffff);
    sVar2 = (*pcVar1)();
    if (sVar2 != -1) {
      iVar3 = FUN_1026d698(param_1[0x13]);
      return (-1 < iVar3) - 1;
    }
  }
  return 0;
}

