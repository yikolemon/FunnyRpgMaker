/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002e0a2 */

longlong FUN_14002e0a2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_60 [32];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x140);
  local_40 = param_2;
  for (plVar4 = *(longlong **)(param_1 + 0x138); plVar4 != plVar1; plVar4 = plVar4 + 1) {
    cVar2 = FUN_1400304b8(*plVar4,local_40);
    if (cVar2 != '\0') {
      lVar3 = *plVar4;
      goto code_r0x00014002e140;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  for (plVar4 = *(longlong **)(param_1 + 0x300); lVar3 = 0, plVar4 != plVar1; plVar4 = plVar4 + 2) {
    lVar3 = *plVar4;
    if (*(longlong *)(lVar3 + 0x18) == 0) {
      FUN_140006874(local_60,local_40);
      lVar3 = FUN_14002e0a2(lVar3,local_60);
      if (lVar3 != 0) break;
    }
  }
code_r0x00014002e140:
  FUN_1400017de(local_40);
  return lVar3;
}

