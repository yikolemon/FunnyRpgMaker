/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000611c */

void Unwind_14000611c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x88);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0x50));
    *(undefined8 *)(lVar2 + 0x88) = 0;
  }
  return;
}

