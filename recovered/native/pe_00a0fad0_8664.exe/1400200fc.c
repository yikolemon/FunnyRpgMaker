/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400200fc */

longlong FUN_1400200fc(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar6 = 0;
  for (plVar2 = *(longlong **)(param_1 + 0x138); plVar2 != *(longlong **)(param_1 + 0x140);
      plVar2 = plVar2 + 1) {
    lVar6 = lVar6 + (*(longlong *)(*plVar2 + 0x240) - *(longlong *)(*plVar2 + 0x238) >> 5);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x308);
  for (puVar5 = *(undefined8 **)(param_1 + 0x300); puVar5 != puVar1; puVar5 = puVar5 + 2) {
    lVar3 = FUN_1400200fc(*puVar5);
    lVar6 = lVar6 + lVar3;
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x324);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  return uVar4 + lVar6;
}

