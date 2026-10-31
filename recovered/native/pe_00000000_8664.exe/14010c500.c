/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010c500 */

void Unwind_14010c500(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x98);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0x60));
    *(undefined8 *)(lVar2 + 0x98) = 0;
  }
  return;
}

