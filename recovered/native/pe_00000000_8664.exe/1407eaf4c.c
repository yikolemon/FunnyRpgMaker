/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eaf4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407eaf4c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  uVar5 = (int)&stack0x00000000 - 0x10;
  uVar6 = (ulonglong)uVar5;
  uVar1 = *(undefined4 *)(uVar6 + 0x1c);
  uVar2 = *(undefined4 *)(uVar6 + 0x18);
  *(uint *)(uVar6 + 0xc) = _DAT_150b73c65 ^ uVar5;
  puVar4 = (undefined4 *)(ulonglong)uVar5;
  *puVar4 = *(undefined4 *)(uVar6 + 0x14);
  puVar4[1] = uVar2;
  puVar4[2] = uVar1;
  *(undefined8 *)(uVar6 - 8) = 0;
  *(undefined8 *)(uVar6 - 0x10) = 0xc;
  *(undefined4 **)(uVar6 - 0x18) = puVar4;
  *(undefined8 *)(uVar6 - 0x20) = 0x1407eaf83;
  FUN_140752561();
  uVar5 = (int)(uVar6 - 0x18) + 0xc;
  uVar7 = (ulonglong)uVar5;
  if (_DAT_150b73c92 == (*(uint *)(uVar7 + 0xc) ^ uVar5)) {
    return;
  }
  uVar3 = *(uint *)(uVar7 + 0xc);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar7 - 8) = FUN_1407eafa5;
  FUN_1408802b0(uVar3 ^ uVar5);
}

