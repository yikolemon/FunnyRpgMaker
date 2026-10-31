/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd779 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bd779(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong unaff_RSI;
  ulonglong uVar6;
  
  pcVar4 = (char *)(ulonglong)_DAT_14ccb08b1039d74c;
  *pcVar4 = *pcVar4 + (char)_DAT_14ccb08b1039d74c;
  uVar6 = (ulonglong)*(uint *)(pcVar4 + 0x2308);
  uVar1 = *(undefined4 *)(unaff_RSI + 0x290);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x294);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x298);
  *(undefined4 *)(uVar6 + 0x144) = *(undefined4 *)(unaff_RSI + 0x28c);
  *(undefined4 *)(uVar6 + 0x148) = uVar1;
  *(undefined4 *)(uVar6 + 0x14c) = uVar2;
  *(undefined4 *)(uVar6 + 0x150) = uVar3;
  FUN_1407bd486();
  uVar5 = (ulonglong)((int)&stack0xffffffffffffffe0 + 8);
  uVar1 = *(undefined4 *)(uVar6 + 0x168);
  *(ulonglong *)(uVar5 - 8) = (ulonglong)*(ushort *)(uVar6 + 0x1e8);
  *(undefined8 *)(uVar5 - 0x10) = *(undefined8 *)(unaff_RSI + 0x2e8);
  *(undefined8 *)(uVar5 - 0x18) = 0x1407bd7c3;
  FUN_1407e5d3c(uVar1);
  return;
}

