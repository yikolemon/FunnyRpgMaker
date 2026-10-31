/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077dd8b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14077dd8b(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  uVar3 = (int)&stack0x00000000 - 0x10;
  puVar4 = (undefined8 *)(ulonglong)uVar3;
  puVar1 = (undefined8 *)(ulonglong)*(uint *)(puVar4 + 3);
  puVar2 = (undefined8 *)(ulonglong)*(uint *)((longlong)puVar4 + 0x14);
  *(uint *)((longlong)puVar4 + 0xc) = _DAT_150b06a9c ^ uVar3;
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar2 + 1);
  *puVar4 = *puVar2;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
  *puVar2 = *puVar1;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
  *puVar1 = *puVar4;
  if (_DAT_150b06adc == (*(uint *)((longlong)puVar4 + 0xc) ^ uVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puVar4[-1] = &UNK_14077ddef;
  FUN_1408802b0(*(uint *)((longlong)puVar4 + 0xc) ^ uVar3);
}

