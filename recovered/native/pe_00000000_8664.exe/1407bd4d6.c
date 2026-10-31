/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd4d6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1407bd4d6(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint uVar3;
  
  puVar2 = &stack0xfffffffffffffff0;
  *(char *)(ulonglong)_DAT_2308b08b1039d74c =
       *(char *)(ulonglong)_DAT_2308b08b1039d74c + (char)_DAT_2308b08b1039d74c;
  if ((int)unaff_RSI == 0) {
LAB_1407bd52c:
    uVar1 = 0;
  }
  else {
    uVar3 = (uint)((ulonglong)unaff_RDI >> 0x20);
    if (*(uint *)(unaff_RSI + 0x48) != uVar3) {
      if (*(uint *)(unaff_RSI + 0x48) != 0xffffffff) {
        FUN_1407bd3c7();
        puVar2 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe8 + 4);
      }
      if ((unaff_RDI < 0) || (*(int *)(unaff_RSI + 0x40) <= (int)uVar3)) {
        *(undefined8 *)(puVar2 + -8) = 0x1034a82a;
        *(undefined8 *)(puVar2 + -0x10) = 0x1407bd529;
        FUN_140754dc5();
        goto LAB_1407bd52c;
      }
      *(ulonglong *)(puVar2 + -8) = (ulonglong)uVar3;
      *(longlong *)(puVar2 + -0x10) = unaff_RSI;
      *(undefined8 *)(puVar2 + -0x18) = 0x1407bd510;
      FUN_1407bd531();
    }
    uVar1 = CONCAT31((int3)(*(uint *)(unaff_RSI + 0x10) >> 8),
                     *(undefined1 *)
                      ((ulonglong)*(uint *)(unaff_RSI + 0x10) + 0x6b + (ulonglong)(uVar3 * 0x74)));
  }
  return uVar1;
}

