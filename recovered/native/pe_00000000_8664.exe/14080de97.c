/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14080de97 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14080de97(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar8;
  ulonglong uVar7;
  
  puVar6 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar5 = puVar6[7];
  uVar1 = puVar6[8];
  *puVar6 = (int)(puVar6 + 9);
  *(undefined8 *)(puVar6 + -2) = 0x14080debd;
  puVar4 = (uint *)FUN_14069af0e();
  uVar2 = *puVar4;
  *(ulonglong *)(puVar6 + -2) = (ulonglong)(puVar6 + 9) & 0xffffffff;
  *(undefined8 *)(puVar6 + -4) = 0;
  *(ulonglong *)(puVar6 + -6) = (ulonglong)uVar1;
  *(undefined8 *)(puVar6 + -8) = 0;
  *(ulonglong *)(puVar6 + -10) = (ulonglong)uVar5;
  *(undefined8 *)(puVar6 + -0xc) = *(undefined8 *)(puVar4 + 1);
  *(ulonglong *)(puVar6 + -0xe) = (ulonglong)(uVar2 | 1);
  *(undefined8 *)(puVar6 + -0x10) = 0x14080ded4;
  iVar3 = FUN_1408b6908();
  uVar5 = (int)(puVar6 + -0xe) + 0x1c;
  uVar7 = (ulonglong)uVar5;
  iVar8 = 0;
  if (-1 < iVar3) {
    iVar8 = iVar3;
  }
  if (_DAT_150b96be8 == (*(uint *)(uVar7 + 4) ^ uVar5)) {
    return iVar8;
  }
  uVar1 = *(uint *)(uVar7 + 4);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar7 - 8) = &UNK_14080df01;
  FUN_1408802b0(uVar1 ^ uVar5);
}

