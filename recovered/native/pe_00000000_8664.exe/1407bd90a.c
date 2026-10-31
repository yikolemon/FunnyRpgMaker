/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd90a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1407bd90a(void)

{
  undefined1 *puVar1;
  int iVar2;
  longlong unaff_RSI;
  
  puVar1 = &stack0xfffffffffffffff8;
  *(char *)(ulonglong)_DAT_2308b08b1039d74c =
       *(char *)(ulonglong)_DAT_2308b08b1039d74c + (char)_DAT_2308b08b1039d74c;
  iVar2 = 0;
  if (((int)unaff_RSI != 0) && ((*(byte *)(unaff_RSI + 4) & 8) != 0)) {
    if (*(char *)(unaff_RSI + 0x1ed) == '\0') {
      FUN_1407b9056();
      puVar1 = (undefined1 *)(ulonglong)((int)&stack0xfffffffffffffff0 + 4);
    }
    *(longlong *)(puVar1 + -8) = unaff_RSI;
    *(undefined8 *)(puVar1 + -0x10) = 0x1407bd93a;
    FUN_1407bacf2();
    iVar2 = (int)unaff_RSI + 0x1a8;
  }
  return iVar2;
}

