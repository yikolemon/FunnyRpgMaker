/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400260e8 */

void Unwind_1400260e8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (((*(char *)(param_2 + 0x201) == '\x01') && (*(char *)(param_2 + 0xb8) != '\0')) &&
     (plVar1 = *(longlong **)(param_2 + 0xb0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x78));
  }
  return;
}

