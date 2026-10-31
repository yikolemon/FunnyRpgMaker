/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e4dfb */

void Unwind_1800e4dfb(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_2 + 0x6254);
  *(char *)(param_2 + 0x6253) = cVar1;
  if ((cVar1 == '\x01') && (plVar2 = *(longlong **)(param_2 + 0x6128), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(param_2 + 0x60f0));
    *(undefined8 *)(param_2 + 0x6128) = 0;
  }
  *(char *)(param_2 + 0x6253) = cVar1;
  return;
}

