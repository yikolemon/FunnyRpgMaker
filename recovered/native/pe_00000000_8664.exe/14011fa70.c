/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011fa70 */

void Unwind_14011fa70(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x213);
  *(undefined1 *)(param_2 + 0x216) = uVar1;
  *(undefined1 *)(param_2 + 0x217) = uVar1;
  if (((*(char *)(param_2 + 0x212) == '\x01') && (*(char *)(param_2 + 0x1e8) != '\0')) &&
     (plVar2 = *(longlong **)(param_2 + 0x1e0), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(param_2 + 0x1a8));
    *(undefined8 *)(param_2 + 0x1e0) = 0;
  }
  *(undefined1 *)(param_2 + 0x216) = uVar1;
  *(undefined1 *)(param_2 + 0x217) = uVar1;
  return;
}

