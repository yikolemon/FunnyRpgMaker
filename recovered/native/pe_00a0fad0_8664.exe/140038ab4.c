/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140038ab4 */

void FUN_140038ab4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x308);
  for (plVar3 = *(longlong **)(param_1 + 0x300); plVar3 != plVar1; plVar3 = plVar3 + 2) {
    if ((*(longlong *)(*plVar3 + 0x18) == 0) && (*(longlong *)(*plVar3 + 200) != 0)) {
      lVar2 = FUN_1400200fc();
      if (lVar2 != 0) {
        FUN_140038ab4(*plVar3);
        FUN_140032fde(*plVar3,0,0);
      }
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x140);
  for (plVar3 = *(longlong **)(param_1 + 0x138); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar2 = *plVar3;
    if (((*(longlong *)(lVar2 + 0x238) != *(longlong *)(lVar2 + 0x240)) ||
        (*(char *)(lVar2 + 0x26e) != '\0')) && (*(char *)(lVar2 + 0x268) != '\x06')) {
      FUN_14003a6d0();
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  for (plVar3 = *(longlong **)(param_1 + 0x300); plVar3 != plVar1; plVar3 = plVar3 + 2) {
    if (*(longlong *)(*plVar3 + 200) == 0) {
      FUN_140038ab4();
    }
  }
  return;
}

