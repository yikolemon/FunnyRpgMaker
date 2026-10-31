/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00472516 */

int __cdecl FUN_00472516(int param_1,char *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  iVar15 = *(int *)(param_1 + 0x58);
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x358) == '\0') &&
     (iVar7 = FUN_004726dc(param_1,*(int **)(param_1 + 0x68)), iVar7 != 0)) {
    return iVar7;
  }
  if (param_2 == (char *)0x0 || iVar15 == 0) {
    return 6;
  }
  iVar7 = *(int *)(param_1 + 0x354);
  sVar6 = _strlen(param_2);
  if (iVar7 == 0 || sVar6 == 0) {
    return 6;
  }
  iVar4 = *(int *)(param_1 + 0x344);
  iVar13 = iVar4 + iVar7 * 4 + 8;
  iVar11 = 0;
  while( true ) {
    uVar3 = *(ushort *)(iVar4 + 8 + iVar11 * 4);
    bVar1 = *(byte *)(iVar4 + 10 + iVar11 * 4);
    bVar2 = *(byte *)(iVar4 + 0xb + iVar11 * 4);
    uVar14 = (uint)CONCAT11(bVar1,bVar2);
    if ((ushort)(uVar3 << 8 | uVar3 >> 8) == *(ushort *)(iVar15 + 0xe)) break;
    iVar13 = iVar13 + uVar14 * 10;
    iVar11 = iVar11 + 1;
    if (iVar7 == iVar11) {
      return 6;
    }
  }
  if (uVar14 == 0) {
    return 6;
  }
  iVar15 = 0;
  do {
    bVar12 = *(byte *)(iVar13 + 5 + iVar15);
    if ((bVar12 & 0x10) != 0) {
      uVar14 = *(uint *)(iVar13 + iVar15);
      uVar8 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
      uVar14 = *(uint *)(param_1 + 0x350);
      uVar10 = uVar14 - uVar8;
      if ((uVar8 <= uVar14 && uVar10 != 0) && (sVar6 < uVar10)) {
        uVar5 = *(uint *)(iVar13 + 6 + iVar15);
        iVar7 = *(int *)(param_1 + 0x34c);
        uVar8 = FUN_00493180((int)param_2,(uint *)(uVar8 + iVar7),uVar10);
        if (uVar8 == 0) {
          uVar8 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          bVar12 = bVar12 & 0xf;
          if (bVar12 < 2) {
            if ((uVar8 < uVar14) &&
               (puVar9 = FUN_00485b20((uint *)(iVar7 + uVar8),0,uVar14), puVar9 != (uint *)0x0)) {
              *param_3 = 1;
              param_3[1] = uVar8 + *(int *)(param_1 + 0x34c);
              return 0;
            }
          }
          else {
            if (bVar12 == 2) {
              *param_3 = 2;
LAB_004726c0:
              param_3[1] = uVar8;
              return 0;
            }
            if (bVar12 == 3) {
              *param_3 = 3;
              goto LAB_004726c0;
            }
          }
        }
      }
    }
    iVar15 = iVar15 + 10;
    if ((uint)bVar1 * 0xa00 + (uint)bVar2 * 10 == iVar15) {
      return 6;
    }
  } while( true );
}

