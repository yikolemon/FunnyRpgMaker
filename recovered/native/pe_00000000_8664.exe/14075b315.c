/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b315 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075b315(void)

{
  undefined8 uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  ulonglong auStack_20 [2];
  uint uVar7;
  
  uVar7 = (uint)((ulonglong)unaff_RDI >> 0x20);
  uVar5 = (ulonglong)uVar7;
  uVar6 = (ulonglong)_DAT_150af8a6d;
  auStack_20[1] = 0;
  auStack_20[0] = uVar5;
  FUN_14075b3b2();
  uVar4 = (ulonglong)((int)auStack_20 + 8);
  *(ulonglong *)(uVar4 - 8) = uVar5;
  *(undefined8 *)(uVar4 - 0x10) = *(undefined8 *)(uVar5 + 0xb4);
  *(undefined8 *)(uVar4 - 0x18) = 0x14075b338;
  FUN_14075a58a();
  if (*(char *)(uVar6 + 0x6a) == '\x01') {
    *(undefined1 *)(uVar6 + 0x2040) = 0;
  }
  uVar1 = *(undefined8 *)((ulonglong)*(uint *)(uVar5 + 0x3b0) + 0x50);
  *(ulonglong *)(uVar6 + 0x1540) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(uVar6 + 0xac8) >> 0x20) -
                (float)((ulonglong)uVar1 >> 0x20),
                (float)*(undefined8 *)(uVar6 + 0xac8) - (float)uVar1);
  *(undefined1 *)(uVar6 + 0x1536) = 1;
  *(undefined8 *)((ulonglong)((int)(uVar4 - 0x10) + 8) - 8) = 0x14075b371;
  FUN_14075b570();
  if (((*(byte *)(uVar5 + 0xc) & 4) != 0) ||
     (bVar3 = true, (*(byte *)((ulonglong)*(uint *)(uVar5 + 0x3b0) + 0xc) & 4) != 0)) {
    bVar3 = false;
  }
  if ((*(uint *)(uVar5 + 0x434) != 0) &&
     (uVar2 = *(uint *)((ulonglong)*(uint *)(uVar5 + 0x434) + 0x7c), uVar2 != 0)) {
    bVar3 = (bool)(bVar3 & (*(byte *)((ulonglong)uVar2 + 0xc) & 4) == 0);
  }
  if (bVar3) {
    *(uint *)(uVar6 + 0x14dc) = uVar7;
  }
  return;
}

