/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014721f */

void FUN_18014721f(void)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = DAT_180419160;
  lVar7 = FUN_180197c14(*(undefined8 *)(DAT_180419160 + 0x1318),0x2a);
  lVar3 = *(longlong *)(lVar6 + 0x1318);
  *(undefined4 *)(lVar6 + 0x27c0) = *(undefined4 *)(*(longlong *)(lVar6 + 0x1310) + 0x10);
  *(undefined4 *)(lVar6 + 0x2798) = *(undefined4 *)(lVar3 + 0x40);
  *(undefined4 *)(lVar6 + 0x2768) = *(undefined4 *)(lVar3 + 0x10);
  uVar2 = *(undefined4 *)(lVar3 + 0x20);
  *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar6 + 0x2778);
  *(undefined4 *)(lVar6 + 0x2778) = uVar2;
  uVar2 = *(undefined4 *)(lVar3 + 0x24);
  *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar6 + 0x277c);
  *(undefined4 *)(lVar6 + 0x277c) = uVar2;
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar6 + 0x2780);
  *(undefined8 *)(lVar6 + 0x2780) = uVar4;
  puVar5 = *(undefined4 **)(lVar6 + 0x1318);
  uVar2 = *puVar5;
  *puVar5 = *(undefined4 *)(lVar6 + 0x2758);
  *(undefined4 *)(lVar6 + 0x2758) = uVar2;
  uVar2 = puVar5[1];
  puVar5[1] = *(undefined4 *)(lVar6 + 0x275c);
  *(undefined4 *)(lVar6 + 0x275c) = uVar2;
  uVar4 = *(undefined8 *)(puVar5 + 2);
  *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(lVar6 + 0x2760);
  *(undefined8 *)(lVar6 + 0x2760) = uVar4;
  puVar1 = (uint *)(*(longlong *)(lVar6 + 0x1310) + 0x10);
  *puVar1 = *puVar1 | 4;
  *(int *)(*(longlong *)(lVar6 + 0x1318) + 0x40) =
       (int)((ulonglong)(lVar7 - *(longlong *)(*(longlong *)(lVar6 + 0x1318) + 0x38)) >> 2) *
       -0x45d1745d;
  *(undefined4 *)(*(longlong *)(lVar6 + 0x1318) + 0x10) = *(undefined4 *)(lVar7 + 4);
  return;
}

