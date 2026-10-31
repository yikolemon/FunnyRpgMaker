/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079a7f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14079a7f4(void)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)_DAT_150b37f48;
  lVar3 = FUN_1407e81ac(*(undefined4 *)(uVar6 + 0x1224));
  uVar4 = (ulonglong)*(uint *)(uVar6 + 0x1224);
  *(undefined4 *)(uVar6 + 0x2544) = *(undefined4 *)((ulonglong)*(uint *)(uVar6 + 0x1220) + 8);
  *(undefined4 *)(uVar6 + 0x2524) = *(undefined4 *)(uVar4 + 0x30);
  *(undefined4 *)(uVar6 + 0x2500) = *(undefined4 *)(uVar4 + 0xc);
  uVar2 = *(undefined4 *)(uVar4 + 0x18);
  *(undefined4 *)(uVar4 + 0x18) = *(undefined4 *)(uVar6 + 0x250c);
  *(undefined4 *)(uVar6 + 0x250c) = uVar2;
  uVar2 = *(undefined4 *)(uVar4 + 0x1c);
  *(undefined4 *)(uVar4 + 0x1c) = *(undefined4 *)(uVar6 + 0x2510);
  *(undefined4 *)(uVar6 + 0x2510) = uVar2;
  uVar2 = *(undefined4 *)(uVar4 + 0x20);
  *(undefined4 *)(uVar4 + 0x20) = *(undefined4 *)(uVar6 + 0x2514);
  *(undefined4 *)(uVar6 + 0x2514) = uVar2;
  puVar5 = (undefined4 *)(ulonglong)*(uint *)(uVar6 + 0x1224);
  uVar2 = *puVar5;
  *puVar5 = *(undefined4 *)(uVar6 + 0x24f4);
  *(undefined4 *)(uVar6 + 0x24f4) = uVar2;
  uVar2 = puVar5[1];
  puVar5[1] = *(undefined4 *)(uVar6 + 0x24f8);
  *(undefined4 *)(uVar6 + 0x24f8) = uVar2;
  uVar2 = puVar5[2];
  puVar5[2] = *(undefined4 *)(uVar6 + 0x24fc);
  *(undefined4 *)(uVar6 + 0x24fc) = uVar2;
  puVar1 = (uint *)((ulonglong)*(uint *)(uVar6 + 0x1220) + 8);
  *puVar1 = *puVar1 | 4;
  *(int *)((ulonglong)*(uint *)(uVar6 + 0x1224) + 0x30) =
       ((int)lVar3 - *(int *)((ulonglong)*(uint *)(uVar6 + 0x1224) + 0x2c) >> 2) * -0x45d1745d;
  *(undefined4 *)((ulonglong)*(uint *)(uVar6 + 0x1224) + 0xc) = *(undefined4 *)(lVar3 + 4);
  return;
}

