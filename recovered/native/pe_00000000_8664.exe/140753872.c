/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140753872 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140753872(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = (int)&stack0x00000000 - 8;
  puVar2 = (undefined4 *)(ulonglong)uVar1;
  puVar2[1] = _DAT_150adc583 ^ uVar1;
  *puVar2 = (int)(puVar2 + 5);
  *(ulonglong *)(puVar2 + -2) = (ulonglong)(puVar2 + 5) & 0xffffffff;
  *(ulonglong *)(puVar2 + -4) = (ulonglong)(uint)puVar2[4];
  *(undefined8 *)(puVar2 + -6) = 0x140753897;
  FUN_1407538b6(puVar2[3]);
  if (_DAT_150adc5a3 == (puVar2[-3] ^ (uint)(puVar2 + -4))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar2 + -6) = FUN_1407538b6;
  FUN_1408802b0(puVar2[-3] ^ (uint)(puVar2 + -4));
}

