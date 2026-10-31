/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140078e16 */

ulonglong FUN_140078e16(longlong param_1,char *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  size_t sVar10;
  ulonglong uVar11;
  char *pcVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  
  lVar14 = *(longlong *)(param_1 + 0x80);
  *param_3 = 0;
  if (*(char *)(param_1 + 0x4c0) == '\0') {
    uVar11 = FUN_14007900c(param_1,*(longlong **)(param_1 + 0xa0));
    if ((int)uVar11 != 0) {
      return uVar11 & 0xffffffff;
    }
  }
  if (param_2 == (char *)0x0 || lVar14 == 0) {
    return 6;
  }
  iVar9 = *(int *)(param_1 + 0x4bc);
  sVar10 = strlen(param_2);
  if (iVar9 == 0 || sVar10 == 0) {
    return 6;
  }
  lVar6 = *(longlong *)(param_1 + 0x4a0);
  lVar13 = lVar6 + (ulonglong)(uint)(iVar9 * 4) + 8;
  lVar15 = 0;
  while( true ) {
    uVar3 = *(ushort *)(lVar6 + 8 + lVar15 * 4);
    bVar1 = *(byte *)(lVar6 + 10 + lVar15 * 4);
    bVar2 = *(byte *)(lVar6 + 0xb + lVar15 * 4);
    uVar7 = CONCAT11(bVar1,bVar2);
    if ((ushort)(uVar3 << 8 | uVar3 >> 8) == *(ushort *)(lVar14 + 0x1a)) break;
    lVar13 = lVar13 + (ulonglong)((uint)uVar7 * 10);
    lVar15 = lVar15 + 1;
    if (iVar9 == (int)lVar15) {
      return 6;
    }
  }
  if (uVar7 == 0) {
    return 6;
  }
  lVar14 = 0;
  do {
    bVar16 = *(byte *)(lVar13 + 5 + lVar14);
    if ((bVar16 & 0x10) != 0) {
      uVar4 = *(uint *)(lVar13 + lVar14);
      uVar8 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      uVar4 = *(uint *)(param_1 + 0x4b8);
      if ((uVar8 < uVar4) && (sVar10 < uVar4 - uVar8)) {
        uVar5 = *(uint *)(lVar13 + 6 + lVar14);
        lVar6 = *(longlong *)(param_1 + 0x4b0);
        iVar9 = strncmp(param_2,(char *)((ulonglong)uVar8 + lVar6),(ulonglong)(uVar4 - uVar8));
        if (iVar9 == 0) {
          uVar8 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
          bVar16 = bVar16 & 0xf;
          if (bVar16 < 2) {
            if (uVar8 < uVar4) {
              pcVar12 = FUN_1400b33b0((char *)(lVar6 + (ulonglong)uVar8),0,(char *)(ulonglong)uVar4)
              ;
              if (pcVar12 != (char *)0x0) {
                *param_3 = 1;
                *(ulonglong *)(param_3 + 2) = (ulonglong)uVar8 + *(longlong *)(param_1 + 0x4b0);
                return 0;
              }
            }
          }
          else {
            if (bVar16 == 2) {
              *param_3 = 2;
LAB_140078fea:
              param_3[2] = uVar8;
              return 0;
            }
            if (bVar16 == 3) {
              *param_3 = 3;
              goto LAB_140078fea;
            }
          }
        }
      }
    }
    lVar14 = lVar14 + 10;
    if ((uint)bVar1 * 0xa00 + (uint)bVar2 * 10 == (int)lVar14) {
      return 6;
    }
  } while( true );
}

