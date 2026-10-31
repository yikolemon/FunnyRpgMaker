/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752381 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140752381(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  
  puVar7 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar1 = puVar7[8];
  uVar2 = puVar7[7];
  uVar4 = puVar7[9];
  *puVar7 = (int)(puVar7 + 10);
  *(undefined8 *)(puVar7 + -2) = 0x1407523ab;
  puVar5 = (uint *)FUN_14069af0e();
  uVar6 = *puVar5;
  *(ulonglong *)(puVar7 + -2) = (ulonglong)(puVar7 + 10) & 0xffffffff;
  *(undefined8 *)(puVar7 + -4) = 0;
  *(ulonglong *)(puVar7 + -6) = (ulonglong)uVar4;
  *(ulonglong *)(puVar7 + -8) = (ulonglong)uVar1;
  *(ulonglong *)(puVar7 + -10) = (ulonglong)uVar2;
  *(undefined8 *)(puVar7 + -0xc) = *(undefined8 *)(puVar5 + 1);
  *(ulonglong *)(puVar7 + -0xe) = (ulonglong)(uVar6 | 1);
  *(undefined8 *)(puVar7 + -0x10) = 0x1407523bf;
  uVar4 = FUN_1408b6908();
  uVar6 = (int)(puVar7 + -0xe) + 0x1c;
  uVar8 = (ulonglong)uVar6;
  if (uVar2 != 0) {
    uVar3 = uVar4;
    if ((int)uVar1 <= (int)uVar4) {
      uVar3 = uVar1 - 1;
    }
    if ((int)uVar4 < 0) {
      uVar3 = uVar1 - 1;
    }
    *(undefined1 *)((ulonglong)uVar2 + (ulonglong)uVar3) = 0;
  }
  if (_DAT_150adb0ed != (*(uint *)(uVar8 + 4) ^ uVar6)) {
    uVar1 = *(uint *)(uVar8 + 4);
                    /* WARNING: Subroutine does not return */
    *(code **)(uVar8 - 8) = FUN_140752404;
    FUN_1408802b0(uVar1 ^ uVar6);
  }
  return;
}

