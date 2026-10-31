/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274e4d */

void FUN_10274e4d(void)

{
  code *pcVar1;
  
  if (DAT_103a9064 != (code *)0xffffffff) {
    pcVar1 = DAT_103a9064;
    if ((DAT_103a9064 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_10274ffe(0x19,"RoUninitialize",&DAT_10325534,&DAT_10325538),
       pcVar1 == (code *)0x0)) {
      return;
    }
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar1)();
  }
  return;
}

