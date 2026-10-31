/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002a5a6 */

void Unwind_14002a5a6(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x217);
  *(undefined1 *)(param_2 + 0x211) = uVar1;
  if (((*(char *)(param_2 + 0x216) == '\x01') && (*(char *)(param_2 + 0x88) != '\0')) &&
     (plVar2 = *(longlong **)(param_2 + 0x80), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(param_2 + 0x48));
    *(undefined8 *)(param_2 + 0x80) = 0;
  }
  *(undefined1 *)(param_2 + 0x211) = uVar1;
  return;
}

