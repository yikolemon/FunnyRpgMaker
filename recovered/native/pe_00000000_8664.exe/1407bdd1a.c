/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bdd1a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bdd1a(void)

{
  float fVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  uint *puVar6;
  
  uVar2 = _DAT_2308b88b1039d74c;
  uVar5 = (int)&stack0xffffffffffffffe0 - 0x1c;
  puVar6 = (uint *)(ulonglong)uVar5;
  pcVar3 = (char *)(ulonglong)_DAT_2308b88b1039d74c;
  *pcVar3 = *pcVar3 + (char)_DAT_2308b88b1039d74c;
  *puVar6 = uVar2;
  fVar1 = *(float *)(pcVar3 + 0x1228);
  if (0 < *(int *)(unaff_RDI + 0x40)) {
    uVar9 = 0;
    do {
      if (((*(uint *)(ulonglong)*(uint *)(unaff_RDI + 0x2c) & 1) != 0) &&
         ((*(byte *)((ulonglong)*(uint *)(unaff_RDI + 0x10) + 1 + uVar9) & 0x10) == 0)) {
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *(longlong *)(puVar6 + -4) = unaff_RDI;
        puVar6[-1] = (uint)fVar1;
        puVar6[-6] = 0x407bdd76;
        puVar6[-5] = 1;
        uVar4 = FUN_1407bd044();
        uVar7 = (ulonglong)((int)(puVar6 + -4) + 8);
        *(undefined8 *)(uVar7 - 8) = 0xffffffffbf800000;
        *(undefined8 *)(uVar7 - 0x10) = 0;
        *(undefined8 *)(uVar7 - 0x18) = 0;
        *(undefined8 *)(uVar7 - 0x20) = uVar4;
        *(ulonglong *)(uVar7 - 0x28) = uVar7;
        *(undefined8 *)(uVar7 - 0x30) = 0x1407bdd8b;
        FUN_1407559fe();
        puVar8 = (undefined4 *)(ulonglong)((int)(uVar7 - 0x28) + 0xc);
        puVar8[1] = *(undefined4 *)((ulonglong)((int)(uVar7 - 0x28) + 0x14) + 0x14);
        *puVar8 = puVar8[3];
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar8 + -2) = &UNK_1407bddad;
        FUN_140755a9a();
      }
      uVar9 = (ulonglong)((int)uVar9 + 0x74);
    } while (0 < *(int *)(unaff_RDI + 0x40));
  }
  puVar6[2] = (uint)(*(float *)((ulonglong)*puVar6 + 0xd30) + *(float *)((ulonglong)*puVar6 + 0xd30)
                    + fVar1);
  if (_DAT_150b46aee == (puVar6[6] ^ uVar5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar6 + -2) = FUN_1407bde07;
  FUN_1408802b0(puVar6[6] ^ uVar5);
}

