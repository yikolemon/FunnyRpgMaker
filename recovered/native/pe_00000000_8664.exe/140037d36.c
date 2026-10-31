/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140037d36 */

void Unwind_140037d36(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x80);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0x48));
    *(undefined8 *)(lVar2 + 0x80) = 0;
  }
  return;
}

