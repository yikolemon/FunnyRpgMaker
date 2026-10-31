/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cd234 */

void Unwind_1800cd234(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0xf8);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0xc0));
    *(undefined8 *)(lVar2 + 0xf8) = 0;
  }
  return;
}

