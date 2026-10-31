/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079025a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14079025a(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = (int)&stack0xfffffffffffffff0 - 0x24;
  puVar2 = (undefined4 *)(ulonglong)uVar1;
  puVar2[8] = _DAT_150b18f7b ^ uVar1;
  puVar2[7] = puVar2[0x12];
  puVar2[6] = puVar2[0x11];
  puVar2[5] = (int)(puVar2 + 0x10);
  puVar2[4] = (int)(puVar2 + 0xf);
  puVar2[3] = puVar2[0xe];
  puVar2[2] = puVar2[0xd];
  *puVar2 = puVar2[0xc];
  puVar2[1] = 4;
  *(undefined8 *)(puVar2 + -2) = 0x1407902b3;
  FUN_14078f47e();
  if (_DAT_150b18fbf == (puVar2[8] ^ uVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar2 + -2) = &UNK_1407902d4;
  FUN_1408802b0(puVar2[8] ^ uVar1);
}

