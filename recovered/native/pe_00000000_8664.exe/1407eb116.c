/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eb116 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407eb116(void)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  
  uVar7 = (ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar2 = *(uint *)(uVar7 + 0x2c);
  pcVar5 = (char *)(ulonglong)uVar2;
  *(char **)(uVar7 - 8) = pcVar5;
  *(undefined8 *)(uVar7 - 0x10) = 0x1407eb132;
  iVar3 = FUN_1408c85c0();
  puVar8 = (undefined1 *)(ulonglong)((int)(uVar7 - 8) + 4);
  if (*pcVar5 != '\0') {
    do {
      *(ulonglong *)(puVar8 + -8) = (ulonglong)(iVar3 + uVar2);
      *(char **)(puVar8 + -0x10) = pcVar5;
      *(ulonglong *)(puVar8 + -0x18) = (ulonglong)(puVar8 + -8) & 0xffffffff;
      *(undefined8 *)(puVar8 + -0x20) = 0x1407eb14a;
      uVar4 = FUN_140750fa5();
      iVar6 = (int)(puVar8 + -0x18);
      puVar9 = (undefined4 *)(ulonglong)(iVar6 - 8);
      puVar9[4] = *(undefined4 *)(ulonglong)(iVar6 + 0xc);
      puVar9[3] = puVar9[0xf];
      puVar9[1] = puVar9[0xd];
      *puVar9 = puVar9[0xc];
      *(undefined8 *)(puVar9 + -2) = 0x1407eb178;
      FUN_1407eb0e8();
      puVar8 = (undefined1 *)(ulonglong)(iVar6 + 0xc);
      pcVar1 = pcVar5 + uVar4;
      pcVar5 = (char *)(ulonglong)((int)pcVar5 + uVar4);
    } while (*pcVar1 != '\0');
  }
  if (_DAT_150b73e8f == (*(uint *)(puVar8 + 4) ^ (uint)puVar8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar8 + -8) = FUN_1407eb1a6;
  FUN_1408802b0(*(uint *)(puVar8 + 4) ^ (uint)puVar8);
}

