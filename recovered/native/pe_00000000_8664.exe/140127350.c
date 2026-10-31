/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140127350 */

void Unwind_140127350(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(*(longlong *)(param_2 + 0xd0) + 0x40) == '\x01') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xd0) + 0x38), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0xd0));
  }
  return;
}

