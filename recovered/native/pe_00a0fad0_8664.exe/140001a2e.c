/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140001a2e */

void Unwind_140001a2e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x78);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0x40));
    *(undefined8 *)(lVar2 + 0x78) = 0;
  }
  return;
}

