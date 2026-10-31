/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142a08 */

void FUN_10142a08(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = DAT_1039d74c;
  *(undefined4 *)(*(int *)(DAT_1039d74c + 0x1220) + 8) = *(undefined4 *)(DAT_1039d74c + 0x2544);
  *(undefined4 *)(*(int *)(iVar4 + 0x1224) + 0x30) = *(undefined4 *)(iVar4 + 0x2524);
  *(undefined4 *)(*(int *)(iVar4 + 0x1224) + 0xc) = *(undefined4 *)(iVar4 + 0x2500);
  iVar1 = *(int *)(iVar4 + 0x1224);
  uVar2 = *(undefined4 *)(iVar4 + 0x250c);
  *(undefined4 *)(iVar4 + 0x250c) = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  uVar2 = *(undefined4 *)(iVar4 + 0x2510);
  *(undefined4 *)(iVar4 + 0x2510) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  uVar2 = *(undefined4 *)(iVar4 + 0x2514);
  *(undefined4 *)(iVar4 + 0x2514) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  puVar3 = *(undefined4 **)(iVar4 + 0x1224);
  uVar2 = *(undefined4 *)(iVar4 + 0x24f4);
  *(undefined4 *)(iVar4 + 0x24f4) = *puVar3;
  *puVar3 = uVar2;
  uVar2 = *(undefined4 *)(iVar4 + 0x24f8);
  *(undefined4 *)(iVar4 + 0x24f8) = puVar3[1];
  puVar3[1] = uVar2;
  uVar2 = *(undefined4 *)(iVar4 + 0x24fc);
  *(undefined4 *)(iVar4 + 0x24fc) = puVar3[2];
  puVar3[2] = uVar2;
  return;
}

