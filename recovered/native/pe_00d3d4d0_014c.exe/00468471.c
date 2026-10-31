/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00468471 */

undefined4 __cdecl
FUN_00468471(int param_1,uint *param_2,undefined4 param_3,uint *param_4,undefined4 param_5,
            uint *param_6)

{
  char *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ushort uVar11;
  uint uVar12;
  ushort *puVar13;
  char *pcVar14;
  int iVar15;
  ushort *puVar16;
  bool bVar17;
  undefined4 uStack_18;
  
  if (param_2[0x11] < param_1 + 4U) {
    FUN_0041cefa(param_2,(uint *)0x8);
    param_2 = param_4;
  }
  uVar6 = (uint)(ushort)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8);
  pcVar1 = (char *)(uVar6 + param_1);
  if (uVar6 < 0x206 || (char *)param_2[0x11] < pcVar1) {
    FUN_0041cefa(param_4,(uint *)0x8);
  }
  uVar6 = 0;
  iVar15 = 0;
  puVar10 = param_4;
  do {
    uVar2 = *(undefined1 *)(param_1 + 6 + iVar15 * 2);
    bVar3 = *(byte *)(param_1 + 7 + iVar15 * 2);
    uVar8 = uVar6;
    if ((1 < (int)puVar10[0x12]) && ((bVar3 & 7) != 0)) {
      FUN_0041cefa(puVar10,(uint *)0x8);
      puVar10 = param_6;
      uVar8 = uStack_18;
    }
    uVar6 = (uint)(ushort)(CONCAT11(uVar2,bVar3) >> 3);
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 != 0x100);
  pcVar7 = (char *)(uVar6 * 8 + 0x20e + param_1);
  if ((char *)puVar10[0x11] < pcVar7) {
    FUN_0041cefa(puVar10,(uint *)0x8);
    puVar10 = param_6;
  }
  puVar13 = (ushort *)(param_1 + 0x206);
  uVar8 = 0;
  do {
    uVar11 = puVar13[1] << 8 | puVar13[1] >> 8;
    puVar5 = puVar13 + 4;
    if (uVar11 != 0) {
      uVar4 = puVar13[2];
      uStack_18 = CONCAT22(uVar4,(undefined2)uStack_18);
      uVar12 = (uint)uVar11;
      uVar11 = puVar13[3];
      if ((1 < (int)puVar10[0x12]) &&
         (((char)*puVar13 != '\0' || (0x100 - *(byte *)((int)puVar13 + 1) < uVar12)))) {
        FUN_0041cefa(param_4,(uint *)0x8);
      }
      uVar9 = (uint)(ushort)(uVar11 << 8 | uVar11 >> 8);
      puVar10 = param_4;
      if (uVar9 != 0) {
        pcVar14 = (char *)((int)puVar13 + uVar9 + 6);
        if ((pcVar14 < pcVar7) || (pcVar1 < pcVar14 + uVar12 * 2)) {
          FUN_0041cefa(param_4,(uint *)0x9);
          puVar10 = param_6;
          uVar12 = uStack_18;
        }
        if (0 < (int)puVar10[0x12]) {
          puVar13 = puVar5;
          do {
            puVar16 = puVar13;
            uVar11 = *puVar16 << 8 | *puVar16 >> 8;
            if ((uVar11 != 0) &&
               (puVar10[0x14] <= ((uint)uVar11 + (uint)(ushort)(uVar4 << 8 | uVar4 >> 8) & 0xffff)))
            {
              FUN_0041cefa(puVar10,(uint *)0x10);
              puVar10 = param_6;
            }
            puVar13 = puVar16 + 1;
          } while (puVar16 + 1 < puVar5 + uVar12);
          puVar5 = puVar16 + 1;
        }
      }
    }
    puVar13 = puVar5;
    bVar17 = uVar8 != uVar6;
    uVar8 = uVar8 + 1;
  } while (bVar17);
  return 0;
}

