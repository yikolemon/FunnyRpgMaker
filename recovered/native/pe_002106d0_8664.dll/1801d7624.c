/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d7624 */

void Unwind_1801d7624(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x217);
  *(undefined1 *)(param_2 + 0x211) = uVar1;
  if (((*(char *)(param_2 + 0x216) == '\x01') && (*(char *)(param_2 + 0xd8) != '\0')) &&
     (plVar2 = *(longlong **)(param_2 + 0xd0), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(param_2 + 0x98));
    *(undefined8 *)(param_2 + 0xd0) = 0;
  }
  *(undefined1 *)(param_2 + 0x211) = uVar1;
  return;
}

