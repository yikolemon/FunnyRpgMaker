/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d5b1a */

void Unwind_1801d5b1a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x205);
  *(undefined1 *)(param_2 + 0x202) = uVar1;
  *(undefined1 *)(param_2 + 0x203) = uVar1;
  if (((*(char *)(param_2 + 0x204) == '\x01') && (*(char *)(param_2 + 0x148) != '\0')) &&
     (plVar2 = *(longlong **)(param_2 + 0x140), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(param_2 + 0x108));
    *(undefined8 *)(param_2 + 0x140) = 0;
  }
  *(undefined1 *)(param_2 + 0x202) = uVar1;
  *(undefined1 *)(param_2 + 0x203) = uVar1;
  return;
}

