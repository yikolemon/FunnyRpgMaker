/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077d8f9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14077d8f9(void)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  puVar4 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 8);
  uVar3 = puVar4[6];
  uVar1 = puVar4[7];
  *puVar4 = (int)(puVar4 + 8);
  *(undefined8 *)(puVar4 + -2) = 0x14077d91e;
  puVar2 = (undefined8 *)FUN_140784485();
  *(ulonglong *)(puVar4 + -2) = (ulonglong)(puVar4 + 8) & 0xffffffff;
  *(undefined8 *)(puVar4 + -4) = 0;
  *(ulonglong *)(puVar4 + -6) = (ulonglong)uVar1;
  *(undefined8 *)(puVar4 + -8) = 0xffffffffffffffff;
  *(ulonglong *)(puVar4 + -10) = (ulonglong)uVar3;
  *(undefined8 *)(puVar4 + -0xc) = *(undefined8 *)((longlong)puVar2 + 4);
  *(undefined8 *)(puVar4 + -0xe) = *puVar2;
  *(undefined8 *)(puVar4 + -0x10) = 0x14077d92f;
  FUN_1408bb745();
  uVar3 = (int)(puVar4 + -0xe) + 0x1c;
  uVar5 = (ulonglong)uVar3;
  if (_DAT_150b0663e == (*(uint *)(uVar5 + 4) ^ uVar3)) {
    return;
  }
  uVar1 = *(uint *)(uVar5 + 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar5 - 8) = &UNK_14077d954;
  FUN_1408802b0(uVar1 ^ uVar3);
}

