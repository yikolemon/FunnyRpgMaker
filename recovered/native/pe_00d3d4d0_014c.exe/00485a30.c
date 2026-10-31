/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485a30 */

void FUN_00485a30(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_00485a50();
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00508898)();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_004903c8();
}

