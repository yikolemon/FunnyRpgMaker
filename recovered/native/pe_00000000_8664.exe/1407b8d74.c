/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407b8d74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407b8d74(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong unaff_RSI;
  
  puVar3 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x18);
  *(char *)(ulonglong)_DAT_2308b08b1039d74c =
       *(char *)(ulonglong)_DAT_2308b08b1039d74c + (char)_DAT_2308b08b1039d74c;
  uVar2 = *(uint *)(unaff_RSI + 0x10);
  uVar1 = *(undefined4 *)(unaff_RSI + 0x8c);
  puVar3[3] = uVar1;
  puVar3[1] = *(undefined4 *)((ulonglong)uVar2 + 0x18 + (ulonglong)(uint)(puVar3[10] * 0x74));
  *puVar3 = uVar1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -2) = &UNK_1407b8db1;
  FUN_140755a9a();
}

