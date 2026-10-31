/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd7c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bd7c6(void)

{
  undefined4 uVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  ulonglong uVar4;
  
  pcVar2 = (char *)(ulonglong)_DAT_14ccb08b1039d74c;
  *pcVar2 = *pcVar2 + (char)_DAT_14ccb08b1039d74c;
  uVar4 = (ulonglong)*(uint *)(pcVar2 + 0x2308);
  FUN_1407bd486();
  uVar3 = (ulonglong)((int)&stack0xffffffffffffffe0 + 8);
  uVar1 = *(undefined4 *)(uVar4 + 0x168);
  *(ulonglong *)(uVar3 - 8) =
       (ulonglong)
       *(ushort *)
        ((ulonglong)*(uint *)(uVar4 + 0x10) + 0x60 +
        (ulonglong)(uint)(*(int *)(uVar4 + 0x48) * 0x74));
  *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)(unaff_RSI + 0x2e8);
  *(undefined8 *)(uVar3 - 0x18) = 0x1407bd807;
  FUN_1407e5d3c(uVar1);
  return;
}

