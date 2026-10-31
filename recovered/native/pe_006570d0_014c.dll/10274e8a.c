/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274e8a */

undefined4 FUN_10274e8a(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (DAT_103a9068 == (code *)0xffffffff) {
LAB_10274ecf:
    uVar2 = 0xc0000225;
  }
  else {
    pcVar1 = DAT_103a9068;
    if (DAT_103a9068 == (code *)0x0) {
      pcVar1 = (code *)FUN_10274ffe(0x1a,"AppPolicyGetProcessTerminationMethod",&DAT_10325538,
                                    &DAT_1032553c);
      if (pcVar1 == (code *)0x0) goto LAB_10274ecf;
    }
    (*(code *)PTR_guard_check_icall_1035d810)(0xfffffffa,param_1);
    uVar2 = (*pcVar1)();
  }
  return uVar2;
}

