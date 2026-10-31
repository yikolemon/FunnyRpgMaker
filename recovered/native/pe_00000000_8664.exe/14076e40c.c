/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076e40c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14076e40c(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar9;
  undefined1 *puVar8;
  
  uVar7 = (ulonglong)((int)&stack0xffffffffffffffe8 - 0x18);
  uVar1 = *(uint *)(uVar7 + 0x28);
  *(undefined8 *)(uVar7 - 8) = 0;
  *(ulonglong *)(uVar7 - 0x10) = (ulonglong)uVar1;
  *(undefined8 *)(uVar7 - 0x18) = 0x14076e429;
  cVar3 = FUN_14075be54();
  uVar6 = (int)(uVar7 - 0x10) + 8;
  puVar8 = (undefined1 *)(ulonglong)uVar6;
  if (cVar3 == '\0') {
    pcVar5 = (char *)(ulonglong)_DAT_1ed080c71039d74c;
    cVar3 = (char)_DAT_1ed080c71039d74c;
    *pcVar5 = *pcVar5 + cVar3;
    *pcVar5 = *pcVar5 + cVar3;
    *pcVar5 = *pcVar5 + cVar3;
    uVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(puVar8 + 0x2c);
    *(ulonglong *)(puVar8 + -8) = (ulonglong)uVar1;
    *(undefined8 *)(puVar8 + -0x10) = 0x10330a14;
    *(undefined8 *)(puVar8 + -0x18) = 0x14;
    *(ulonglong *)(puVar8 + -0x20) = (ulonglong)uVar6;
    *(undefined8 *)(puVar8 + -0x28) = 0x14076e444;
    FUN_140752381();
    uVar9 = (ulonglong)((int)(puVar8 + -0x20) + 0x10);
    *(ulonglong *)(uVar9 - 8) = (ulonglong)(uVar2 | 0x4080000);
    *(undefined8 *)(uVar9 - 0x10) = 0;
    *(ulonglong *)(uVar9 - 0x18) = (ulonglong)uVar6;
    *(undefined8 *)(uVar9 - 0x20) = 0x14076e456;
    uVar4 = FUN_14075fbfb();
    puVar8 = (undefined1 *)(ulonglong)((int)(uVar9 - 0x18) + 0xc);
    if ((char)uVar4 == '\0') {
      *(undefined8 *)(puVar8 + -8) = 0x14076e464;
      FUN_14076e49b();
    }
  }
  if (_DAT_150af7183 == (*(uint *)(puVar8 + 0x14) ^ (uint)puVar8)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar8 + -8) = FUN_14076e49b;
  FUN_1408802b0(*(uint *)(puVar8 + 0x14) ^ (uint)puVar8);
}

