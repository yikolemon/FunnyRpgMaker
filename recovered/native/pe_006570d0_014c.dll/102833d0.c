/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102833d0 */

void FUN_102833d0(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_10272260();
  pcVar1 = *(code **)(iVar2 + 4);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

