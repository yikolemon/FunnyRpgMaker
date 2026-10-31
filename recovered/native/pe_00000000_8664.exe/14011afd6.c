/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011afd6 */

void Unwind_14011afd6(undefined8 param_1,longlong param_2)

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

