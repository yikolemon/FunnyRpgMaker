/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cd27e */

void Unwind_1800cd27e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0x80));
    *(undefined8 *)(lVar2 + 0xb8) = 0;
  }
  return;
}

