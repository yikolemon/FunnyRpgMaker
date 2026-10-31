/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00495680 */

void __cdecl FUN_00495680(int param_1)

{
  code *pcVar1;
  
  if ((code *)PTR_guard_check_icall_00508898 != guard_check_icall) {
    if ((*(uint *)(param_1 + 0x10) < *(uint *)((int)Self + 8)) ||
       (*(uint *)((int)Self + 4) < *(uint *)(param_1 + 0x10))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
  }
  return;
}

