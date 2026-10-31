/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10210cf1 */

undefined4 FUN_10210cf1(int param_1,int param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  char *pcVar13;
  int iVar14;
  ushort *puVar15;
  bool bVar16;
  
  if (*(uint *)(param_2 + 0x44) < param_1 + 4U) {
    FUN_101c090a(param_2,8);
  }
  uVar6 = (uint)(ushort)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8);
  pcVar1 = (char *)(uVar6 + param_1);
  if (uVar6 < 0x206 || *(char **)(param_2 + 0x44) < pcVar1) {
    FUN_101c090a(param_2,8);
  }
  iVar14 = 0;
  uVar6 = 0;
  do {
    uVar2 = *(undefined1 *)(param_1 + 6 + iVar14 * 2);
    bVar3 = *(byte *)(param_1 + 7 + iVar14 * 2);
    if ((1 < *(int *)(param_2 + 0x48)) && ((bVar3 & 7) != 0)) {
      FUN_101c090a(param_2,8);
    }
    uVar11 = (uint)(ushort)(CONCAT11(uVar2,bVar3) >> 3);
    if (uVar11 <= uVar6) {
      uVar11 = uVar6;
    }
    iVar14 = iVar14 + 1;
    uVar6 = uVar11;
  } while (iVar14 != 0x100);
  pcVar7 = (char *)(uVar11 * 8 + 0x20e + param_1);
  if (*(char **)(param_2 + 0x44) < pcVar7) {
    FUN_101c090a(param_2,8);
  }
  puVar12 = (ushort *)(param_1 + 0x206);
  uVar6 = 0;
  do {
    uVar9 = puVar12[1] << 8 | puVar12[1] >> 8;
    puVar5 = puVar12 + 4;
    if (uVar9 != 0) {
      uVar4 = puVar12[2];
      uVar10 = (uint)uVar9;
      uVar9 = puVar12[3];
      if ((1 < *(int *)(param_2 + 0x48)) &&
         (((char)*puVar12 != '\0' || (0x100 - *(byte *)((int)puVar12 + 1) < uVar10)))) {
        FUN_101c090a(param_2,8);
      }
      uVar8 = (uint)(ushort)(uVar9 << 8 | uVar9 >> 8);
      if (uVar8 != 0) {
        pcVar13 = (char *)((int)puVar12 + uVar8 + 6);
        if ((pcVar13 < pcVar7) || (pcVar1 < pcVar13 + uVar10 * 2)) {
          FUN_101c090a(param_2,9);
        }
        if (0 < *(int *)(param_2 + 0x48)) {
          puVar12 = puVar5;
          do {
            puVar15 = puVar12;
            uVar9 = *puVar15 << 8 | *puVar15 >> 8;
            if ((uVar9 != 0) &&
               (*(uint *)(param_2 + 0x50) <=
                ((uint)uVar9 + (uint)(ushort)(uVar4 << 8 | uVar4 >> 8) & 0xffff))) {
              FUN_101c090a(param_2,0x10);
            }
            puVar12 = puVar15 + 1;
          } while (puVar15 + 1 < puVar5 + uVar10);
          puVar5 = puVar15 + 1;
        }
      }
    }
    puVar12 = puVar5;
    bVar16 = uVar6 != uVar11;
    uVar6 = uVar6 + 1;
  } while (bVar16);
  return 0;
}

