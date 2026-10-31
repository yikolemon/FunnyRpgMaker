/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002ae9a */

void Unwind_14002ae9a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x230);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0x1f8));
    *(undefined8 *)(lVar2 + 0x230) = 0;
  }
  return;
}

