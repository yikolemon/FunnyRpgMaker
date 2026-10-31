/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401272c8 */

void Unwind_1401272c8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(char *)(*(longlong *)(param_2 + 0xb8) + 0x40) == '\x01') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xb8) + 0x38), plVar1 != (longlong *)0x0)) {
    plVar2 = *(longlong **)(param_2 + 0xb8);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar2);
    plVar2[7] = 0;
  }
  return;
}

