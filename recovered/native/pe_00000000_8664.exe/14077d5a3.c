/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077d5a3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14077d5a3(void)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  puVar4 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 8);
  uVar3 = puVar4[6];
  *puVar4 = (int)(puVar4 + 7);
  *(undefined8 *)(puVar4 + -2) = 1;
  *(undefined8 *)(puVar4 + -4) = 0x14077d5c6;
  uVar1 = FUN_1408b664b();
  uVar5 = (ulonglong)((int)(puVar4 + -2) + 4);
  *(undefined8 *)(uVar5 - 8) = 0x14077d5d0;
  puVar2 = (undefined8 *)FUN_14069af0e();
  *(ulonglong *)(uVar5 - 8) = (ulonglong)(puVar4 + 7) & 0xffffffff;
  *(undefined8 *)(uVar5 - 0x10) = 0;
  *(ulonglong *)(uVar5 - 0x18) = (ulonglong)uVar3;
  *(ulonglong *)(uVar5 - 0x20) = (ulonglong)uVar1;
  *(undefined8 *)(uVar5 - 0x28) = *(undefined8 *)((longlong)puVar2 + 4);
  *(undefined8 *)(uVar5 - 0x30) = *puVar2;
  *(undefined8 *)(uVar5 - 0x38) = 0x14077d5df;
  FUN_1408b6864();
  uVar3 = (int)(uVar5 - 0x30) + 0x18;
  uVar6 = (ulonglong)uVar3;
  if (_DAT_150b062ee == (*(uint *)(uVar6 + 4) ^ uVar3)) {
    return;
  }
  uVar1 = *(uint *)(uVar6 + 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar6 - 8) = &UNK_14077d604;
  FUN_1408802b0(uVar1 ^ uVar3);
}

