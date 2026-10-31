/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a3590 */

void FUN_004a3590(void)

{
  code *pcVar1;
  PVOID pvVar2;
  
  pvVar2 = FUN_00494580();
  pcVar1 = *(code **)((int)pvVar2 + 4);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00508898)();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00493bd8();
}

