/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00493bd8 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_00493bd8(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_004961ad();
  pcVar1 = *(code **)(iVar2 + 0xc);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_00508898)();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_004903c8();
}

