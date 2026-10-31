/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d794c */

void Unwind_1801d794c(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x207);
  *(undefined1 *)(param_2 + 0x204) = uVar1;
  *(undefined1 *)(param_2 + 0x205) = uVar1;
  if ((*(char *)(param_2 + 0x206) == '\x01') &&
     (plVar2 = *(longlong **)(param_2 + 0x1a8), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(param_2 + 0x170));
    *(undefined8 *)(param_2 + 0x1a8) = 0;
  }
  *(undefined1 *)(param_2 + 0x204) = uVar1;
  *(undefined1 *)(param_2 + 0x205) = uVar1;
  return;
}

