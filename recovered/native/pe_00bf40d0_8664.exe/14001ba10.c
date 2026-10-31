/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001ba10 */

void Unwind_14001ba10(undefined8 param_1,longlong param_2)

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

