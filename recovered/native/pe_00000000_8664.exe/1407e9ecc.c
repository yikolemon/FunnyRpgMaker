/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e9ecc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e9ecc(uint *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  bool bVar16;
  ulonglong uVar10;
  
  uVar9 = (int)&stack0xffffffffffffffe0 - 0x1c;
  uVar10 = (ulonglong)uVar9;
  pbVar15 = (byte *)((ulonglong)param_1 & 0xffffffff);
  uVar3 = param_1[0xa4];
  uVar4 = *param_1;
  puVar14 = (undefined8 *)(ulonglong)uVar9;
  puVar14[2] = 0;
  *puVar14 = 0;
  puVar14[1] = 0;
  *(undefined8 **)(uVar10 - 8) = puVar14;
  puVar13 = (uint *)(uVar10 - 0x10);
  *(undefined8 *)(uVar10 - 0x10) = *(undefined8 *)((ulonglong)uVar3 + 0xd0);
  *(undefined8 *)(uVar10 - 0x18) = 0x1407e9f05;
  cVar5 = FUN_1407e7f58();
  if (cVar5 == '\0') {
    bVar16 = (uVar4 & 2) == 0;
    uVar7 = 2;
    if (bVar16) {
      uVar7 = 0x1b;
    }
    uVar8 = 0xf5;
    if (!bVar16) {
      uVar8 = 2;
    }
    *(undefined8 **)(uVar10 - 0x18) = puVar14;
    *(undefined8 *)(uVar10 - 0x20) = uVar7;
    *(undefined8 *)(uVar10 - 0x28) = uVar8;
    *(undefined8 *)(uVar10 - 0x30) = 0x1407e9f35;
    uVar6 = FUN_1407e7c44(pbVar15);
    *(undefined4 *)((ulonglong)uVar3 + 0xd0) = uVar6;
    if ((*pbVar15 & 2) == 0) {
      uVar1 = *(ushort *)(uVar10 - 0x28);
      uVar2 = *(ushort *)(uVar10 - 0x26);
      *(undefined8 *)(uVar10 - 0x30) = 0x2e;
      *(undefined8 *)(uVar10 - 0x38) = 0x102fa098;
      *(undefined8 *)(uVar10 - 0x40) = 0x1b;
      *(undefined8 *)(uVar10 - 0x48) = 0x7a;
      *(ulonglong *)(uVar10 - 0x50) = (ulonglong)uVar2;
      *(ulonglong *)(uVar10 - 0x58) = (ulonglong)uVar1;
      *(byte **)(uVar10 - 0x60) = pbVar15;
      *(undefined8 *)(uVar10 - 0x68) = 0x1407e9f68;
      FUN_1407e87e2();
      uVar11 = (ulonglong)((int)(uVar10 - 0x60) + 0x1c);
      uVar2 = *(ushort *)(uVar11 + 2);
      *(undefined8 *)(uVar11 - 8) = 0x58;
      *(undefined8 *)(uVar11 - 0x10) = 0x102fa098;
      *(undefined8 *)(uVar11 - 0x18) = 0x1b;
      *(undefined8 *)(uVar11 - 0x20) = 0x7a;
      *(ulonglong *)(uVar11 - 0x28) = (ulonglong)uVar2;
      puVar12 = (undefined1 *)(uVar11 - 0x30);
      *(ulonglong *)(uVar11 - 0x30) = (ulonglong)(uVar1 + 0x7b);
    }
    else {
      uVar1 = *(ushort *)(uVar10 - 0x26);
      uVar2 = *(ushort *)(uVar10 - 0x28);
      *(undefined8 *)(uVar10 - 0x30) = 0x58;
      *(undefined8 *)(uVar10 - 0x38) = 0x1033bb81;
      *(undefined8 *)(uVar10 - 0x40) = 2;
      *(undefined8 *)(uVar10 - 0x48) = 2;
      *(ulonglong *)(uVar10 - 0x50) = (ulonglong)uVar1;
      puVar12 = (undefined1 *)(uVar10 - 0x58);
      *(ulonglong *)(uVar10 - 0x58) = (ulonglong)uVar2;
    }
    *(byte **)(puVar12 + -8) = pbVar15;
    *(undefined8 *)(puVar12 + -0x10) = 0x1407e9f98;
    FUN_1407e87e2();
    puVar13 = (uint *)(ulonglong)((int)(puVar12 + -8) + 0x1c);
  }
  *(ulonglong *)(pbVar15 + 0x4c) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(pbVar15 + 0x44) >> 0x20) *
                ((float)(*puVar13 >> 0x10) + fRam0000000150aa2976),
                (float)*(undefined8 *)(pbVar15 + 0x44) *
                ((float)(*puVar13 & 0xffff) + _DAT_150aa2972));
  if (_DAT_150b72cca == (puVar13[6] ^ (uint)puVar13)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar13 + -2) = FUN_1407e9fe1;
  FUN_1408802b0(puVar13[6] ^ (uint)puVar13);
}

