/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076fc82 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14076fc82(void)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint unaff_EBX;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  
  uVar5 = (ulonglong)_DAT_150b0d3d7;
  if (((*(char *)(uVar5 + 0x2250) == '\x01') && (*(uint *)(uVar5 + 0x14d4) != 0)) &&
     (uVar6 = (ulonglong)*(uint *)(uVar5 + 0x14cc),
     *(int *)(uVar6 + 0x3b0) == *(int *)((ulonglong)*(uint *)(uVar5 + 0x14d4) + 0x3b0))) {
    puVar4 = (undefined8 *)(ulonglong)unaff_EBX;
    uStack_28 = (ulonglong)(unaff_EBX + 8);
    uStack_20 = 1;
    puStack_30 = puVar4;
    cVar3 = FUN_14075ae0a();
    if (((cVar3 != '\0') &&
        (iVar1 = *(int *)((ulonglong)((int)&puStack_30 + 0xc) + 0x14),
        iVar1 != *(int *)(uVar5 + 0x2268))) && (*(char *)(uVar6 + 0xfe) == '\0')) {
      uVar2 = puVar4[1];
      *(undefined8 *)(uVar5 + 0x2298) = *puVar4;
      *(undefined8 *)(uVar5 + 0x22a0) = uVar2;
      uVar2 = *(undefined8 *)(uVar6 + 0x294);
      *(undefined8 *)(uVar5 + 0x22a8) = *(undefined8 *)(uVar6 + 0x28c);
      *(undefined8 *)(uVar5 + 0x22b0) = uVar2;
      *(int *)(uVar5 + 0x22b8) = iVar1;
      *(undefined4 *)(uVar5 + 0x22bc) = 0;
      *(undefined1 *)(uVar5 + 0x2252) = 1;
      return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
  }
  return 0;
}

