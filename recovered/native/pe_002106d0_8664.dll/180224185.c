/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180224185 */

int FUN_180224185(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 auStack_78 [44];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  iVar2 = (**(code **)(param_1 + 0x2a0))(param_1,0x6b65726e,param_2,&local_4c);
  if (((iVar2 == 0) && (iVar2 = 0x8e, 3 < local_4c)) &&
     (iVar2 = FUN_1801cec36(param_2,local_4c,param_1 + 0x488), iVar2 == 0)) {
    *(uint *)(param_1 + 0x490) = local_4c;
    lVar10 = *(longlong *)(param_1 + 0x488);
    uVar1 = *(ushort *)(lVar10 + 2) << 8 | *(ushort *)(lVar10 + 2) >> 8;
    uVar12 = 0x20;
    if (uVar1 < 0x20) {
      uVar12 = (uint)uVar1;
    }
    iVar2 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    if (uVar1 != 0) {
      uVar11 = (ulonglong)local_4c + lVar10;
      uVar4 = 0;
      uVar6 = 0;
      uVar8 = 0;
      uVar14 = lVar10 + 4;
      do {
        uVar7 = 1 << ((byte)uVar4 & 0x1f);
        uVar5 = uVar4;
        if ((uVar11 < uVar14 + 6) ||
           (uVar1 = *(ushort *)(uVar14 + 2) << 8 | *(ushort *)(uVar14 + 2) >> 8, uVar1 < 0xf))
        break;
        uVar13 = uVar1 + uVar14;
        if (uVar11 < uVar13) {
          uVar13 = uVar11;
        }
        if (uVar14 + 0xe <= uVar13 &&
            ((*(byte *)(uVar14 + 5) & 3) == 1 && *(char *)(uVar14 + 4) == '\0')) {
          uVar1 = *(ushort *)(uVar14 + 6) << 8 | *(ushort *)(uVar14 + 6) >> 8;
          lVar10 = uVar13 - (uVar14 + 0xe);
          uVar5 = ((int)(lVar10 / 6) + (int)(lVar10 >> 0x3f)) -
                  (SUB164(SEXT816(lVar10) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f);
          if ((longlong)(ulonglong)((uint)uVar1 * 6) <= lVar10) {
            uVar5 = (uint)uVar1;
          }
          uVar6 = uVar6 | uVar7;
          if (uVar5 != 0) {
            uVar3 = *(uint *)(uVar14 + 0xe);
            puVar15 = (uint *)(uVar14 + 0x14);
            uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
            do {
              uVar5 = uVar5 - 1;
              if (uVar5 == 0) {
                uVar8 = uVar8 | uVar7;
                break;
              }
              uVar9 = *puVar15;
              uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                      uVar9 << 0x18;
              puVar15 = (uint *)((longlong)puVar15 + 6);
              bVar16 = uVar3 <= uVar9;
              uVar3 = uVar9;
            } while (bVar16);
          }
        }
        uVar4 = uVar4 + 1;
        uVar14 = uVar13;
        uVar5 = uVar12;
      } while (uVar4 != uVar12);
    }
    *(uint *)(param_1 + 0x494) = uVar5;
    *(uint *)(param_1 + 0x498) = uVar6;
    *(uint *)(param_1 + 0x49c) = uVar8;
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return iVar2;
}

