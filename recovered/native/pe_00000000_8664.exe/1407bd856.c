/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd856 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bd856(void)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  pcVar3 = (char *)(ulonglong)_DAT_2308b08b1039d74c;
  *pcVar3 = *pcVar3 + (char)_DAT_2308b08b1039d74c;
  if (((*(byte *)(unaff_RSI + 6) & 0x10) == 0) && (*(int *)(unaff_RSI + 0x48) != -1)) {
    uVar1 = *(uint *)(pcVar3 + 0x14cc);
    uVar4 = (ulonglong)(*(int *)(unaff_RSI + 0x10) + *(int *)(unaff_RSI + 0x48) * 0x74 + 0x24);
    uStack_28 = (ulonglong)uVar1;
    uStack_20 = uVar4;
    FUN_1407bd486();
    uVar5 = (ulonglong)((int)&uStack_28 + 8);
    uVar2 = *(undefined4 *)(unaff_RSI + 0x168);
    *(ulonglong *)(uVar5 - 8) = (ulonglong)*(ushort *)(uVar4 + 0x3c);
    *(undefined8 *)(uVar5 - 0x10) = *(undefined8 *)((ulonglong)uVar1 + 0x2e8);
    *(undefined8 *)(uVar5 - 0x18) = 0x1407bd8a4;
    FUN_1407e5d3c(uVar2);
  }
  return;
}

