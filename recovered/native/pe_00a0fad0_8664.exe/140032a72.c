/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140032a72 */

void FUN_140032a72(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  lVar5 = *(longlong *)(param_1 + 0x278);
  lVar6 = *(longlong *)(param_1 + 0x280);
  if (lVar5 != lVar6) {
    do {
      FUN_1400318c3(lVar5);
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != lVar6);
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x278);
  }
  if (*(longlong *)(param_1 + 0x2a8) != *(longlong *)(param_1 + 0x2b0)) {
    *(longlong *)(param_1 + 0x2b0) = *(longlong *)(param_1 + 0x2a8);
  }
  plVar1 = *(longlong **)(param_1 + 0x140);
  for (plVar4 = *(longlong **)(param_1 + 0x138); plVar4 != plVar1; plVar4 = plVar4 + 1) {
    lVar5 = *plVar4;
    lVar6 = *(longlong *)(lVar5 + 0x238);
    lVar2 = *(longlong *)(lVar5 + 0x240);
    if (lVar6 != lVar2) {
      do {
        FUN_1400017de(lVar6);
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != lVar2);
      *(undefined8 *)(lVar5 + 0x240) = *(undefined8 *)(lVar5 + 0x238);
    }
    *(undefined1 *)(lVar5 + 0x268) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x308);
  for (puVar7 = *(undefined8 **)(param_1 + 0x300); puVar7 != puVar3; puVar7 = puVar7 + 2) {
    FUN_140032a72(*puVar7);
  }
  return;
}

