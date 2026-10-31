/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019f45c */

void Unwind_18019f45c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(char *)(*(longlong *)(param_2 + 0x28) + 0x130) == '\x01') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x128), plVar1 != (longlong *)0x0)) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0xf0));
    *(undefined8 *)(lVar2 + 0x128) = 0;
  }
  return;
}

