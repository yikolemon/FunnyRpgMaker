/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480df0 */

void __fastcall FUN_00480df0(int *param_1)

{
  code *pcVar1;
  
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    pcVar1 = (code *)**(undefined4 **)*param_1;
    (*(code *)PTR_guard_check_icall_00508898)(1);
    (*pcVar1)();
  }
  return;
}

