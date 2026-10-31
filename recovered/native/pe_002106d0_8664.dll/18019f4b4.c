/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019f4b4 */

void Unwind_18019f4b4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((*(char *)(*(longlong *)(param_2 + 0x28) + 0xe8) == '\x01') &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0xe0), plVar1 != (longlong *)0x0)) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0xa8));
    *(undefined8 *)(lVar2 + 0xe0) = 0;
  }
  return;
}

