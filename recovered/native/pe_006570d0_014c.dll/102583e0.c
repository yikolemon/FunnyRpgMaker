/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102583e0 */

undefined4 FUN_102583e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = DAT_103235d0;
  if (DAT_103235d0 == (code *)0x0) {
    return 1;
  }
  (*(code *)PTR_guard_check_icall_1035d810)(param_1,param_2,param_3);
  uVar2 = (*pcVar1)();
  return uVar2;
}

