/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c0f87 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407c0f87(void)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar5 = (int)&stack0xfffffffffffffff8 - 0x14;
  puVar6 = (uint *)(ulonglong)uVar5;
  pcVar3 = (char *)(ulonglong)_DAT_14cc808b1039d74c;
  *pcVar3 = *pcVar3 + (char)_DAT_14cc808b1039d74c;
  uVar1 = *(uint *)(pcVar3 + 0x1e8);
  if (uVar1 == 0) {
    *puVar6 = (int)(puVar6 + 2);
    puVar6[-2] = 0x407c0fe8;
    puVar6[-1] = 1;
    FUN_1407642b4();
  }
  else {
    uVar2 = puVar6[7];
    if ((int)uVar2 < 0) {
      uVar2 = *(uint *)((ulonglong)uVar1 + 0xc);
    }
    uVar4 = (ulonglong)*(uint *)((ulonglong)uVar1 + 100);
    puVar6[1] = (uint)(*(float *)(uVar4 + 0x1c + (ulonglong)(uVar2 * 0x1c)) -
                      *(float *)(uVar4 + uVar2 * 0x1c));
    *puVar6 = uVar1;
    puVar6[-2] = 0x407c0fda;
    puVar6[-1] = 1;
    FUN_1407c0ee9();
  }
  if (_DAT_150b49cf8 == (puVar6[4] ^ uVar5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar6 + -2) = &UNK_1407c100e;
  FUN_1408802b0(puVar6[4] ^ uVar5);
}

