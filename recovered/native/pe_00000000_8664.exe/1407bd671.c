/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd671 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1407bd671(void)

{
  undefined1 *puVar1;
  longlong unaff_RSI;
  ulonglong uVar2;
  undefined8 uStack_20;
  
  puVar1 = &stack0xfffffffffffffff0;
  *(char *)(ulonglong)_DAT_2308b08b1039d74c =
       *(char *)(ulonglong)_DAT_2308b08b1039d74c + (char)_DAT_2308b08b1039d74c;
  if ((int)unaff_RSI != 0) {
    if ((*(char *)(unaff_RSI + 0x1ee) == '\x01') &&
       (*(int *)(unaff_RSI + 0x48) + 1 < *(int *)(unaff_RSI + 0x40))) {
      if (*(int *)(unaff_RSI + 0x48) == -1) {
        uVar2 = 0;
      }
      else {
        uStack_20 = 0x1407bd6a1;
        FUN_1407bd3c7();
        puVar1 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe8 + 4);
        uVar2 = (ulonglong)*(uint *)(unaff_RSI + 0x48);
      }
    }
    else {
      uVar2 = 0;
      uStack_20 = 0;
      FUN_1407bd234();
      puVar1 = (undefined1 *)(ulonglong)((int)&uStack_20 + 8);
    }
    *(ulonglong *)(puVar1 + -8) = uVar2;
    *(longlong *)(puVar1 + -0x10) = unaff_RSI;
    *(undefined8 *)(puVar1 + -0x18) = 0x1407bd6bd;
    FUN_1407bd531();
    return CONCAT31((int3)(*(uint *)(unaff_RSI + 0x10) >> 8),
                    *(undefined1 *)
                     ((ulonglong)*(uint *)(unaff_RSI + 0x10) + 0x6b +
                     (ulonglong)(uint)(*(int *)(unaff_RSI + 0x48) * 0x74)));
  }
  return 0;
}

