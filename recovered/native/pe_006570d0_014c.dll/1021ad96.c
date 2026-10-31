/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021ad96 */

int FUN_1021ad96(int param_1,char *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  uint _MaxCount;
  int iVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  iVar14 = *(int *)(param_1 + 0x58);
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x358) == '\0') && (iVar6 = FUN_1021af5c(), iVar6 != 0)) {
    return iVar6;
  }
  if (param_2 == (char *)0x0 || iVar14 == 0) {
    return 6;
  }
  iVar6 = *(int *)(param_1 + 0x354);
  sVar5 = _strlen(param_2);
  if (iVar6 == 0 || sVar5 == 0) {
    return 6;
  }
  iVar8 = *(int *)(param_1 + 0x344);
  iVar12 = iVar8 + iVar6 * 4 + 8;
  iVar10 = 0;
  while( true ) {
    uVar3 = *(ushort *)(iVar8 + 8 + iVar10 * 4);
    bVar1 = *(byte *)(iVar8 + 10 + iVar10 * 4);
    bVar2 = *(byte *)(iVar8 + 0xb + iVar10 * 4);
    uVar13 = (uint)CONCAT11(bVar1,bVar2);
    if ((ushort)(uVar3 << 8 | uVar3 >> 8) == *(ushort *)(iVar14 + 0xe)) break;
    iVar12 = iVar12 + uVar13 * 10;
    iVar10 = iVar10 + 1;
    if (iVar6 == iVar10) {
      return 6;
    }
  }
  if (uVar13 == 0) {
    return 6;
  }
  iVar14 = 0;
  do {
    bVar11 = *(byte *)(iVar12 + 5 + iVar14);
    if ((bVar11 & 0x10) != 0) {
      uVar13 = *(uint *)(iVar12 + iVar14);
      uVar7 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
      uVar13 = *(uint *)(param_1 + 0x350);
      _MaxCount = uVar13 - uVar7;
      if ((uVar7 <= uVar13 && _MaxCount != 0) && (sVar5 < _MaxCount)) {
        uVar4 = *(uint *)(iVar12 + 6 + iVar14);
        iVar6 = *(int *)(param_1 + 0x34c);
        iVar8 = _strncmp(param_2,(char *)(uVar7 + iVar6),_MaxCount);
        if (iVar8 == 0) {
          uVar7 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          bVar11 = bVar11 & 0xf;
          if (bVar11 < 2) {
            if ((uVar7 < uVar13) &&
               (pvVar9 = _memchr((void *)(iVar6 + uVar7),0,uVar13), pvVar9 != (void *)0x0)) {
              *param_3 = 1;
              param_3[1] = uVar7 + *(int *)(param_1 + 0x34c);
              return 0;
            }
          }
          else {
            if (bVar11 == 2) {
              *param_3 = 2;
LAB_1021af40:
              param_3[1] = uVar7;
              return 0;
            }
            if (bVar11 == 3) {
              *param_3 = 3;
              goto LAB_1021af40;
            }
          }
        }
      }
    }
    iVar14 = iVar14 + 10;
    if ((uint)bVar1 * 0xa00 + (uint)bVar2 * 10 == iVar14) {
      return 6;
    }
  } while( true );
}

