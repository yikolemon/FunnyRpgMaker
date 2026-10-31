/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401700be */

undefined8 FUN_1401700be(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  bool bVar16;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_1401294ed(param_2,8);
  }
  uVar5 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
  pcVar1 = (char *)((ulonglong)uVar5 + param_1);
  if (uVar5 < 0x206 || *(char **)(param_2 + 0x108) < pcVar1) {
    FUN_1401294ed(param_2,8);
  }
  uVar13 = 0;
  lVar8 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 6 + lVar8 * 2);
    bVar3 = *(byte *)(param_1 + 7 + lVar8 * 2);
    if ((1 < *(int *)(param_2 + 0x110)) && ((bVar3 & 7) != 0)) {
      FUN_1401294ed(param_2,8);
    }
    uVar14 = (uint)(ushort)(CONCAT11(uVar2,bVar3) >> 3);
    if (uVar14 <= uVar13) {
      uVar14 = uVar13;
    }
    uVar13 = uVar14;
    lVar8 = lVar8 + 1;
  } while ((int)lVar8 != 0x100);
  pcVar6 = (char *)(param_1 + (ulonglong)uVar13 * 8 + 0x20e);
  if (*(char **)(param_2 + 0x108) < pcVar6) {
    FUN_1401294ed(param_2,8);
  }
  uVar14 = 0;
  puVar11 = (ushort *)(param_1 + 0x206);
  do {
    uVar5 = puVar11[1] << 8 | puVar11[1] >> 8;
    puVar10 = puVar11 + 4;
    if (uVar5 != 0) {
      uVar4 = puVar11[2];
      uVar15 = puVar11[3];
      if ((1 < *(int *)(param_2 + 0x110)) &&
         (((char)*puVar11 != '\0' || (0x100 - *(byte *)((longlong)puVar11 + 1) < (uint)uVar5)))) {
        FUN_1401294ed(param_2,8);
      }
      uVar15 = uVar15 << 8 | uVar15 >> 8;
      if (uVar15 != 0) {
        pcVar7 = (char *)((longlong)puVar11 + (ulonglong)uVar15 + 6);
        uVar12 = (ulonglong)((uint)uVar5 * 2);
        if ((pcVar7 < pcVar6) || (pcVar1 < pcVar7 + uVar12)) {
          FUN_1401294ed(param_2,9);
        }
        if (0 < *(int *)(param_2 + 0x110)) {
          puVar11 = puVar10;
          do {
            puVar9 = puVar11;
            uVar5 = *puVar9 << 8 | *puVar9 >> 8;
            if ((uVar5 != 0) &&
               (*(uint *)(param_2 + 0x120) <=
                ((uint)uVar5 + (uint)(ushort)(uVar4 << 8 | uVar4 >> 8) & 0xffff))) {
              FUN_1401294ed(param_2,0x10);
            }
            puVar11 = puVar9 + 1;
          } while (puVar9 + 1 < (ushort *)(uVar12 + (longlong)puVar10));
          puVar10 = puVar9 + 1;
        }
      }
    }
    bVar16 = uVar14 != uVar13;
    uVar14 = uVar14 + 1;
    puVar11 = puVar10;
  } while (bVar16);
  return 0;
}

