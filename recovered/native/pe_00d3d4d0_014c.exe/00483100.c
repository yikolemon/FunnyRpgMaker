/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00483100 */

int __fastcall FUN_00483100(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x13] != 0) {
    pcVar1 = *(code **)(*param_1 + 0xc);
    (*(code *)PTR_guard_check_icall_00508898)(0xffffffff);
    iVar2 = (*pcVar1)();
    if (iVar2 != -1) {
      iVar2 = FUN_004907a8(param_1[0x13]);
      return (-1 < iVar2) - 1;
    }
  }
  return 0;
}

