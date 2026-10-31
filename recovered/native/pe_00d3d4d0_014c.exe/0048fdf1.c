/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048fdf1 */

void __cdecl FUN_0048fdf1(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    pcVar1 = (code *)*param_1;
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00508898)();
      (*pcVar1)();
    }
  }
  return;
}

