/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400457a8 */

void FUN_1400457a8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x48), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(lVar1 + 0x10));
    *(undefined8 *)(lVar1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_14018e090(*(longlong *)(param_1 + 8),0x50);
    return;
  }
  return;
}

