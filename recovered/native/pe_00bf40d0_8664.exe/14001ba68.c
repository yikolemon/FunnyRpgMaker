/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001ba68 */

void Unwind_14001ba68(undefined8 param_1,longlong param_2)

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

