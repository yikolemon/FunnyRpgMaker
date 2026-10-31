/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076d403 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076d403(void)

{
  float fVar1;
  char *pcVar2;
  uint uVar3;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined4 *puVar4;
  
  uVar3 = (int)&stack0xfffffffffffffff8 - 0x2c;
  puVar4 = (undefined4 *)(ulonglong)uVar3;
  pcVar2 = (char *)(ulonglong)_DAT_1e4880f61039d74c;
  *pcVar2 = *pcVar2 + (char)_DAT_1e4880f61039d74c;
  *(int *)(unaff_RBP + 0xf) = *(int *)(unaff_RBP + 0xf) + unaff_ESI;
  fVar1 = *(float *)(ulonglong)(*(int *)(pcVar2 + 0x14cc) + 0x218);
  if (fVar1 < 0.0) {
    *puVar4 = (int)(puVar4 + 8);
    *(undefined1 (*) [16])(puVar4 + 4) = ZEXT416((uint)fVar1);
    *(undefined8 *)(puVar4 + -2) = 0x14076d451;
    FUN_1407642b4();
    puVar4[1] = (float)puVar4[4] + *(float *)((ulonglong)(puVar4 + 8) & 0xffffffff);
    *puVar4 = 0x3f800000;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar4 + -2) = &UNK_14076d46c;
    FUN_140755a9a();
  }
  puVar4[2] = (float)(int)fVar1;
  if (_DAT_150af6193 == (puVar4[10] ^ uVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar4 + -2) = &UNK_14076d4a9;
  FUN_1408802b0(puVar4[10] ^ uVar3);
}

