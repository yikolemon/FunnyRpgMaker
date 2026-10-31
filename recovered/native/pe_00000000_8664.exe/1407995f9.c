/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407995f9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407995f9(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar6 = (int)&stack0xffffffffffffffe0 - 0xc;
  uVar8 = (ulonglong)uVar6;
  uVar7 = *(uint *)(uVar8 + 0x20);
  uVar1 = *(uint *)(uVar8 + 0x24);
  uVar2 = *(uint *)(uVar8 + 0x28);
  uVar3 = *(uint *)(uVar8 + 0x2c);
  uVar4 = *(uint *)(uVar8 + 0x30);
  uVar5 = *(uint *)(uVar8 + 0x34);
  *(uint *)(uVar8 + 8) = _DAT_150b2231e ^ uVar6;
  *(undefined8 *)(ulonglong)uVar6 = 0;
  *(ulonglong *)(uVar8 - 8) = (ulonglong)uVar5;
  *(ulonglong *)(uVar8 - 0x10) = (ulonglong)uVar4;
  *(ulonglong *)(uVar8 - 0x18) = (ulonglong)uVar3;
  *(undefined8 **)(uVar8 - 0x20) = (undefined8 *)(ulonglong)uVar6;
  *(ulonglong *)(uVar8 - 0x28) = (ulonglong)uVar2;
  *(ulonglong *)(uVar8 - 0x30) = (ulonglong)uVar1;
  *(undefined8 *)(uVar8 - 0x38) = 0;
  *(ulonglong *)(uVar8 - 0x40) = (ulonglong)uVar7;
  *(undefined8 *)(uVar8 - 0x48) = 0x14079963c;
  FUN_140795c6a();
  uVar7 = (int)(uVar8 - 0x40) + 0x20;
  uVar9 = (ulonglong)uVar7;
  if (_DAT_150b2234b == (*(uint *)(uVar9 + 8) ^ uVar7)) {
    return;
  }
  uVar1 = *(uint *)(uVar9 + 8);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar9 - 8) = &UNK_140799662;
  FUN_1408802b0(uVar1 ^ uVar7);
}

