/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140121a8c */

void Unwind_140121a8c(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x215);
  *(undefined1 *)(param_2 + 0x212) = uVar1;
  *(undefined1 *)(param_2 + 0x213) = uVar1;
  if ((*(char *)(param_2 + 0x214) == '\x01') &&
     (plVar2 = *(longlong **)(param_2 + 0x118), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(param_2 + 0xe0));
    *(undefined8 *)(param_2 + 0x118) = 0;
  }
  *(undefined1 *)(param_2 + 0x212) = uVar1;
  *(undefined1 *)(param_2 + 0x213) = uVar1;
  return;
}

