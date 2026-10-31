/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140019753 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140019753(void)

{
  DAT_14013c948 = 0;
  _DAT_14013c950 = 0;
  DAT_14013c948 = FUN_1400863a0(0x20);
  *(longlong *)DAT_14013c948 = DAT_14013c948;
  *(longlong *)(DAT_14013c948 + 8) = DAT_14013c948;
  FUN_14008b5e0(0x140017a7d);
  FUN_140017aaa(&DAT_14013c958);
  FUN_14008b5e0(0x140017b3f);
  FUN_140017aaa(&DAT_14013c968);
  FUN_14008b5e0(0x140017b72);
  FUN_140017ba6(&DAT_14013c978);
  FUN_14008b5e0(0x140017c3b);
  return;
}

