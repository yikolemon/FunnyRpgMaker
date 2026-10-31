/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017aec2 */

int FUN_14017aec2(longlong param_1,char *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  size_t sVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  
  lVar12 = *(longlong *)(param_1 + 0x80);
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x4c0) == '\0') &&
     (iVar8 = FUN_14017b0b8(param_1,*(undefined8 *)(param_1 + 0xa0)), iVar8 != 0)) {
    return iVar8;
  }
  if (param_2 == (char *)0x0 || lVar12 == 0) {
    return 6;
  }
  iVar8 = *(int *)(param_1 + 0x4bc);
  sVar9 = strlen(param_2);
  if (iVar8 == 0 || sVar9 == 0) {
    return 6;
  }
  lVar10 = *(longlong *)(param_1 + 0x4a0);
  lVar11 = lVar10 + (ulonglong)(uint)(iVar8 * 4) + 8;
  lVar13 = 0;
  while( true ) {
    uVar3 = *(ushort *)(lVar10 + 8 + lVar13 * 4);
    bVar1 = *(byte *)(lVar10 + 10 + lVar13 * 4);
    bVar2 = *(byte *)(lVar10 + 0xb + lVar13 * 4);
    uVar6 = CONCAT11(bVar1,bVar2);
    if ((ushort)(uVar3 << 8 | uVar3 >> 8) == *(ushort *)(lVar12 + 0x1a)) break;
    lVar11 = lVar11 + (ulonglong)((uint)uVar6 * 10);
    lVar13 = lVar13 + 1;
    if (iVar8 == (int)lVar13) {
      return 6;
    }
  }
  if (uVar6 == 0) {
    return 6;
  }
  lVar12 = 0;
  do {
    bVar14 = *(byte *)(lVar11 + 5 + lVar12);
    if ((bVar14 & 0x10) != 0) {
      uVar4 = *(uint *)(lVar11 + lVar12);
      uVar7 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar4 = *(uint *)(param_1 + 0x4b8);
      if ((uVar7 < uVar4) && (sVar9 < uVar4 - uVar7)) {
        uVar5 = *(uint *)(lVar11 + 6 + lVar12);
        lVar10 = *(longlong *)(param_1 + 0x4b0);
        iVar8 = strncmp(param_2,(char *)((ulonglong)uVar7 + lVar10),(ulonglong)(uVar4 - uVar7));
        if (iVar8 == 0) {
          uVar7 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          bVar14 = bVar14 & 0xf;
          if (bVar14 < 2) {
            if (uVar7 < uVar4) {
              lVar10 = FUN_1401c4fe0(lVar10 + (ulonglong)uVar7,0,uVar4);
              if (lVar10 != 0) {
                *param_3 = 1;
                *(ulonglong *)(param_3 + 2) = (ulonglong)uVar7 + *(longlong *)(param_1 + 0x4b0);
                return 0;
              }
            }
          }
          else {
            if (bVar14 == 2) {
              *param_3 = 2;
LAB_14017b096:
              param_3[2] = uVar7;
              return 0;
            }
            if (bVar14 == 3) {
              *param_3 = 3;
              goto LAB_14017b096;
            }
          }
        }
      }
    }
    lVar12 = lVar12 + 10;
    if ((uint)bVar1 * 0xa00 + (uint)bVar2 * 10 == (int)lVar12) {
      return 6;
    }
  } while( true );
}

