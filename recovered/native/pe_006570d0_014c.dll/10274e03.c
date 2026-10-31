/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274e03 */

undefined4 FUN_10274e03(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (DAT_103a9060 == (code *)0xffffffff) {
LAB_10274e46:
    uVar2 = 0;
  }
  else {
    pcVar1 = DAT_103a9060;
    if (DAT_103a9060 == (code *)0x0) {
      pcVar1 = (code *)FUN_10274ffe(0x18,"RoInitialize",&DAT_10325530,&DAT_10325534);
      if (pcVar1 == (code *)0x0) goto LAB_10274e46;
    }
    (*(code *)PTR_guard_check_icall_1035d810)(param_1);
    uVar2 = (*pcVar1)();
  }
  return uVar2;
}

