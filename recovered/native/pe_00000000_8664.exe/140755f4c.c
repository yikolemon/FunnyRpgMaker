/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140755f4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140755f4c(char param_1)

{
  uint uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  longlong unaff_RBX;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *unaff_RBP;
  undefined4 unaff_ESI;
  byte *unaff_RDI;
  ulonglong uVar12;
  
  uVar9 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x40);
  uVar5 = *(undefined4 *)(uVar9 + 0x54);
  *(undefined4 *)(uVar9 + 0x34) = uVar5;
  *(undefined4 *)(uVar9 + 0x38) = *(undefined4 *)(uVar9 + 0x58);
  *(undefined4 *)(uVar9 + 0x2c) = *(undefined4 *)(uVar9 + 0x5c);
  *(undefined4 *)(uVar9 + 0x30) = *(undefined4 *)(uVar9 + 0x60);
  uVar8 = _DAT_88100ff31039d74c;
  pcVar7 = (char *)(ulonglong)_DAT_88100ff31039d74c;
  DAT_197845f9d = DAT_197845f9d - param_1;
  *unaff_RDI = *unaff_RDI >> 6 | *unaff_RDI << 2;
  puVar10 = (undefined8 *)(uVar9 - 8);
  *(undefined8 **)(uVar9 - 8) = unaff_RBP;
  cVar2 = '\x01';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar10 = puVar10 + -1;
    *puVar10 = *unaff_RBP;
    cVar2 = cVar2 + -1;
  } while ('\0' < cVar2);
  *(ulonglong *)(uVar9 - 0x18) = uVar9 - 8;
  *pcVar7 = *pcVar7 + (char)uVar8;
  *(char *)(unaff_RBX + 0x14ccb8) = *(char *)(unaff_RBX + 0x14ccb8) + param_1;
  *(char *)(unaff_RBX + 0x2e8b7) = *(char *)(unaff_RBX + 0x2e8b7) + param_1;
  *(char *)(unaff_RBX + 0x3f800000) =
       *(char *)(unaff_RBX + 0x3f800000) + (char)((ulonglong)unaff_RBX >> 8);
  *(int *)(uVar9 - 0x8623) = (int)unaff_RBX;
  *(undefined4 *)(uVar9 - 0x8627) = 6;
  *(undefined4 *)(uVar9 - 0x860f) = uVar5;
  *(undefined8 *)(uVar9 - 0x862f) = 0x140755fce;
  uVar5 = FUN_140754a09();
  fVar4 = fRam0000000150a0d088;
  fVar3 = _DAT_150a0d084;
  *(ulonglong *)(uVar9 - 0x8603 & 0xffffffff) =
       CONCAT44(*(float *)(uVar9 - 0x85c7) + fRam0000000150a0d088,
                *(float *)(uVar9 - 0x85cb) + _DAT_150a0d084);
  *(ulonglong *)(uVar9 - 0x860b & 0xffffffff) =
       CONCAT44(*(float *)(uVar9 - 0x85cf) + fVar4,*(float *)(uVar9 - 0x85d3) + fVar3);
  *(undefined4 *)(uVar9 - 0x8613) = 0;
  *(undefined4 *)(uVar9 - 0x8617) = *(undefined4 *)(uVar9 - 0x860f);
  *(undefined4 *)(uVar9 - 0x861b) = *(undefined4 *)(uVar9 - 0x85c3);
  *(undefined4 *)(uVar9 - 0x861f) = uVar5;
  *(int *)(uVar9 - 0x8623) = (int)(uVar9 - 0x8603);
  *(int *)(uVar9 - 0x8627) = (int)(uVar9 - 0x860b);
  *(undefined8 *)(uVar9 - 0x862f) = 0x140756037;
  FUN_1407e3632(unaff_ESI);
  puVar11 = (undefined4 *)(ulonglong)((int)(uVar9 - 0x8627) - 0x18);
  uVar5 = *(undefined4 *)(unaff_RDI + 0x2e8);
  puVar11[1] = (int)unaff_RBX;
  *puVar11 = 5;
  *(undefined8 *)(puVar11 + -2) = 0x140756050;
  uVar6 = FUN_140754a09();
  puVar11[5] = 0;
  puVar11[4] = puVar11[6];
  puVar11[3] = puVar11[0x19];
  puVar11[2] = uVar6;
  puVar11[1] = (int)(puVar11 + 0xb);
  *puVar11 = (int)(puVar11 + 0xd);
  *(undefined8 *)(puVar11 + -2) = 0x140756086;
  FUN_1407e3632(uVar5);
  uVar8 = (int)(uVar9 - 0x8627) - 0x30;
  uVar12 = (ulonglong)uVar8;
  if (_DAT_150aded95 == (*(uint *)(uVar12 + 0x3c) ^ uVar8)) {
    return;
  }
  uVar1 = *(uint *)(uVar12 + 0x3c);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar12 - 8) = FUN_1407560ac;
  FUN_1408802b0(uVar1 ^ uVar8);
}

