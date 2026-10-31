/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140789c5e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140789c5e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined1 *puVar8;
  
  uVar7 = (int)&stack0xfffffffffffffff0 - 0x14;
  puVar8 = (undefined1 *)(ulonglong)uVar7;
  pcVar5 = (char *)(ulonglong)_DAT_14cc888b1039d74c;
  *pcVar5 = *pcVar5 + (char)_DAT_14cc888b1039d74c;
  *(undefined1 *)(param_1 + 0xfb) = 1;
  uVar6 = (ulonglong)*(uint *)(pcVar5 + 0x14cc);
  if (*(char *)(uVar6 + 0xfe) == '\0') {
    uVar3 = *(uint *)(puVar8 + 0x20);
    uVar4 = *(undefined4 *)(uVar6 + 0x148);
    uVar1 = *(undefined8 *)(uVar6 + 0x144);
    puVar10 = (undefined4 *)(ulonglong)uVar7;
    *puVar10 = *(undefined4 *)(uVar6 + 0x144);
    puVar10[1] = uVar4;
    uVar2 = *(undefined8 *)(ulonglong)uVar3;
    *(ulonglong *)(puVar10 + 2) =
         CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar1 >> 0x20),
                  (float)uVar2 + (float)uVar1);
    *(undefined8 *)(puVar8 + -8) = 0xffffffffbf800000;
    *(undefined8 **)(puVar8 + -0x10) = (undefined8 *)(ulonglong)uVar3;
    *(undefined8 *)(puVar8 + -0x18) = 0x140789cc4;
    FUN_1407646e0();
    uVar9 = (ulonglong)((int)(puVar8 + -0x10) + 8);
    *(undefined8 *)(uVar9 - 8) = 0;
    *(undefined8 *)(uVar9 - 0x10) = 0;
    *(undefined8 *)(uVar9 - 0x18) = 0;
    *(undefined4 **)(uVar9 - 0x20) = puVar10;
    *(undefined8 *)(uVar9 - 0x28) = 0x140789cd2;
    FUN_1407648a8();
    puVar8 = (undefined1 *)(ulonglong)((int)(uVar9 - 0x20) + 0x10);
  }
  if (_DAT_150b129e1 == (*(uint *)(puVar8 + 0x10) ^ (uint)puVar8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar8 + -8) = &UNK_140789cf6;
  FUN_1408802b0(*(uint *)(puVar8 + 0x10) ^ (uint)puVar8);
}

