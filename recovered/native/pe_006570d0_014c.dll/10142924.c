/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142924 */

void FUN_10142924(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_1039d74c;
  iVar6 = FUN_101902dc(0x2a);
  iVar2 = *(int *)(iVar5 + 0x1224);
  *(undefined4 *)(iVar5 + 0x2544) = *(undefined4 *)(*(int *)(iVar5 + 0x1220) + 8);
  *(undefined4 *)(iVar5 + 0x2524) = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(iVar5 + 0x2500) = *(undefined4 *)(iVar2 + 0xc);
  uVar3 = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar5 + 0x250c);
  *(undefined4 *)(iVar5 + 0x250c) = uVar3;
  uVar3 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar5 + 0x2510);
  *(undefined4 *)(iVar5 + 0x2510) = uVar3;
  uVar3 = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar5 + 0x2514);
  *(undefined4 *)(iVar5 + 0x2514) = uVar3;
  puVar4 = *(undefined4 **)(iVar5 + 0x1224);
  uVar3 = *puVar4;
  *puVar4 = *(undefined4 *)(iVar5 + 0x24f4);
  *(undefined4 *)(iVar5 + 0x24f4) = uVar3;
  uVar3 = puVar4[1];
  puVar4[1] = *(undefined4 *)(iVar5 + 0x24f8);
  *(undefined4 *)(iVar5 + 0x24f8) = uVar3;
  uVar3 = puVar4[2];
  puVar4[2] = *(undefined4 *)(iVar5 + 0x24fc);
  *(undefined4 *)(iVar5 + 0x24fc) = uVar3;
  puVar1 = (uint *)(*(int *)(iVar5 + 0x1220) + 8);
  *puVar1 = *puVar1 | 4;
  *(int *)(*(int *)(iVar5 + 0x1224) + 0x30) =
       (iVar6 - *(int *)(*(int *)(iVar5 + 0x1224) + 0x2c) >> 2) * -0x45d1745d;
  *(undefined4 *)(*(int *)(iVar5 + 0x1224) + 0xc) = *(undefined4 *)(iVar6 + 4);
  return;
}

