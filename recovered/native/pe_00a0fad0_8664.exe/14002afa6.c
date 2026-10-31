/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002afa6 */

void Unwind_14002afa6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x160);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0x128));
    *(undefined8 *)(lVar2 + 0x160) = 0;
  }
  return;
}

