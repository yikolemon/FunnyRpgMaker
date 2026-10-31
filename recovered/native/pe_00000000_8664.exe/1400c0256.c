/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c0256 */

void FUN_1400c0256(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  lVar5 = DAT_140f2a910;
  *(undefined4 *)(*(longlong *)(DAT_140f2a910 + 0x1310) + 0x10) =
       *(undefined4 *)(DAT_140f2a910 + 0x27c0);
  *(undefined4 *)(*(longlong *)(lVar5 + 0x1318) + 0x40) = *(undefined4 *)(lVar5 + 0x2798);
  *(undefined4 *)(*(longlong *)(lVar5 + 0x1318) + 0x10) = *(undefined4 *)(lVar5 + 0x2768);
  lVar2 = *(longlong *)(lVar5 + 0x1318);
  uVar1 = *(undefined4 *)(lVar5 + 0x2778);
  *(undefined4 *)(lVar5 + 0x2778) = *(undefined4 *)(lVar2 + 0x20);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  uVar1 = *(undefined4 *)(lVar5 + 0x277c);
  *(undefined4 *)(lVar5 + 0x277c) = *(undefined4 *)(lVar2 + 0x24);
  *(undefined4 *)(lVar2 + 0x24) = uVar1;
  uVar3 = *(undefined8 *)(lVar5 + 0x2780);
  *(undefined8 *)(lVar5 + 0x2780) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  puVar4 = *(undefined4 **)(lVar5 + 0x1318);
  uVar1 = *(undefined4 *)(lVar5 + 0x2758);
  *(undefined4 *)(lVar5 + 0x2758) = *puVar4;
  *puVar4 = uVar1;
  uVar1 = *(undefined4 *)(lVar5 + 0x275c);
  *(undefined4 *)(lVar5 + 0x275c) = puVar4[1];
  puVar4[1] = uVar1;
  uVar3 = *(undefined8 *)(lVar5 + 0x2760);
  *(undefined8 *)(lVar5 + 0x2760) = *(undefined8 *)(puVar4 + 2);
  *(undefined8 *)(puVar4 + 2) = uVar3;
  return;
}

