/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140004b50 */

void FUN_140004b50(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x48), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != (longlong *)(lVar1 + 0x10));
    *(undefined8 *)(lVar1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400863f0();
    return;
  }
  return;
}

