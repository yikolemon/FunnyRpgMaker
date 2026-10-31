/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407be048 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407be048(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  puVar6 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xa0);
  pcVar4 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffff9c);
  *pcVar4 = *pcVar4 + (char)pcVar4;
  *(char *)(param_1 + 0x1039d74c) = *(char *)(param_1 + 0x1039d74c) + (char)((ulonglong)pcVar4 >> 8)
  ;
  if (*(char *)((ulonglong)*(uint *)(pcVar4 + 0x14cc) + 0xfe) == '\0') {
    *(uint *)(puVar6 + 0x1c) = *(uint *)(pcVar4 + 0x14cc);
    uVar11 = (ulonglong)*(uint *)(pcVar4 + 0x2308);
    if (*(uint *)(pcVar4 + 0x2308) != 0) {
      *(int *)(puVar6 + 8) = (int)pcVar4;
      uVar1 = *(uint *)(uVar11 + 0x48);
      uVar10 = 0x10356101;
      if (*(uint *)(puVar6 + 0xb4) != 0) {
        uVar10 = (ulonglong)*(uint *)(puVar6 + 0xb4);
      }
      *(undefined8 *)(puVar6 + -8) = 0;
      *(ulonglong *)(puVar6 + -0x10) = uVar10;
      *(undefined8 *)(puVar6 + -0x18) = 0x1407be0b1;
      uVar5 = FUN_14075544d();
      uVar7 = (ulonglong)((int)(puVar6 + -0x10) + 8);
      *(undefined8 *)(uVar7 - 8) = 0xffffffffbf800000;
      *(undefined8 *)(uVar7 - 0x10) = 0;
      *(int *)(uVar7 + 0x30) = (int)uVar5;
      *(undefined8 *)(uVar7 - 0x18) = uVar5;
      *(int *)(uVar7 + 0x1c) = (int)uVar10;
      *(ulonglong *)(uVar7 - 0x20) = uVar10;
      *(ulonglong *)(uVar7 - 0x28) = uVar7 + 0x90 & 0xffffffff;
      *(undefined8 *)(uVar7 - 0x30) = 0x1407be0d3;
      FUN_1407559fe();
      uVar8 = (ulonglong)((int)(uVar7 - 0x28) + 0x14);
      uVar10 = (ulonglong)*(uint *)(uVar8 + 0x1c);
      uVar2 = *(undefined4 *)(uVar10 + 0x144);
      uVar3 = *(undefined4 *)(uVar10 + 0x148);
      *(undefined4 *)(uVar8 + 0x30) = *(undefined4 *)(uVar10 + 0x148);
      *(undefined4 *)(uVar8 + 0x8c) = uVar3;
      *(undefined4 *)(uVar8 + 0x88) = uVar2;
      *(uint *)(uVar8 + 0xc) = uVar1;
      *(ulonglong *)(uVar8 - 8) = (ulonglong)uVar1;
      *(ulonglong *)(uVar8 - 0x10) = uVar11;
      *(ulonglong *)(uVar8 - 0x18) = uVar8 + 0x78 & 0xffffffff;
      *(undefined8 *)(uVar8 - 0x20) = 0x1407be112;
      FUN_1407bd0c3();
      uVar2 = *(undefined4 *)((ulonglong)((int)(uVar8 - 0x18) + 0x9c) + 4);
      puVar9 = (undefined4 *)(ulonglong)((int)(uVar8 - 0x18) + 4);
      puVar9[1] = *(float *)(uVar11 + 0x58) -
                  (*(float *)(uVar11 + 0x5c) + *(float *)(uVar11 + 0x5c));
      *puVar9 = uVar2;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar9 + -2) = &UNK_1407be146;
      FUN_140755a9a();
    }
    *(undefined8 *)(puVar6 + -8) = 0x1034b34c;
    *(undefined8 *)(puVar6 + -0x10) = 0x1407be2a2;
    FUN_140754dc5();
    puVar6 = (undefined1 *)(ulonglong)((int)(puVar6 + -8) + 4);
  }
  if (_DAT_150b47561 == (*(uint *)(puVar6 + 0x9c) ^ (uint)puVar6)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar6 + -8) = FUN_1407be87e;
  FUN_1408802b0(*(uint *)(puVar6 + 0x9c) ^ (uint)puVar6);
}

