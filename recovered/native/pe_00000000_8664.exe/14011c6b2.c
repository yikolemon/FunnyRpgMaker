/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011c6b2 */

void Unwind_14011c6b2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x1f8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x170));
    *(undefined8 *)(param_2 + 0x1a8) = 0;
  }
  *(undefined1 *)(param_2 + 0x204) = 1;
  *(undefined1 *)(param_2 + 0x205) = 1;
  return;
}

