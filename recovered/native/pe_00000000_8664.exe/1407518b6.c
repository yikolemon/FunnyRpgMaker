/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407518b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407518b6(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  undefined4 *puVar3;
  
  uVar2 = (int)&stack0x00000000 - 8;
  puVar3 = (undefined4 *)(ulonglong)uVar2;
  puVar3[1] = _DAT_150ada5c3 ^ uVar2;
  *puVar3 = (int)(puVar3 + 4);
  *(ulonglong *)(puVar3 + -2) = (ulonglong)(puVar3 + 4) & 0xffffffff;
  *(ulonglong *)(puVar3 + -4) = (ulonglong)(uint)puVar3[3];
  *(undefined8 *)(puVar3 + -6) = 0x1407518d7;
  FUN_14077d4d8();
  uVar2 = (int)(puVar3 + -4) + 8;
  uVar4 = (ulonglong)uVar2;
  if (_DAT_150ada5e6 == (*(uint *)(uVar4 + 4) ^ uVar2)) {
    return;
  }
  uVar1 = *(uint *)(uVar4 + 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar4 - 8) = &UNK_1407518f9;
  FUN_1408802b0(uVar1 ^ uVar2);
}

