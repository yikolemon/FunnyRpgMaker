/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011cf4e */

void Unwind_14011cf4e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (((*(char *)(param_2 + 0x211) == '\x01') && (*(char *)(param_2 + 0x90) != '\0')) &&
     (plVar1 = *(longlong **)(param_2 + 0x88), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x50));
  }
  return;
}

