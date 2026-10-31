/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480ab0 */

int __fastcall FUN_00480ab0(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  
  if (param_1[0x13] != 0) {
    pcVar1 = *(code **)(*param_1 + 0xc);
    (*(code *)PTR_guard_check_icall_00508898)(0xffff);
    sVar2 = (*pcVar1)();
    if (sVar2 != -1) {
      iVar3 = FUN_004907a8(param_1[0x13]);
      return (-1 < iVar3) - 1;
    }
  }
  return 0;
}

