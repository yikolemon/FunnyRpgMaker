/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102300a0 */

void __fastcall FUN_102300a0(int *param_1)

{
  code *pcVar1;
  
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)*param_1;
    (*(code *)PTR_guard_check_icall_1035d810)(1);
    (*pcVar1)();
  }
  return;
}

