/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10269cc9 */

void FUN_10269cc9(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    pcVar1 = (code *)*param_1;
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_1035d810)();
      (*pcVar1)();
    }
  }
  return;
}

