/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140071e42 */

int FUN_140071e42(longlong param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 *puVar15;
  
  lVar9 = *(longlong *)(param_1 + 0x488);
  iVar10 = 0;
  if (lVar9 != 0) {
    iVar12 = *(int *)(param_1 + 0x494);
    iVar10 = 0;
    if (9 < *(uint *)(param_1 + 0x490) && iVar12 != 0) {
      puVar7 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x490) + lVar9);
      puVar4 = (undefined1 *)(lVar9 + 10);
      uVar11 = param_2 << 0x10 | param_3;
      uVar5 = 1;
      iVar10 = 0;
      puVar2 = (undefined1 *)(lVar9 + 4);
      do {
        puVar15 = puVar2 + (ulonglong)(byte)puVar2[2] * 0x100 + (ulonglong)(byte)puVar2[3];
        if (puVar7 < puVar2 + (ulonglong)(byte)puVar2[2] * 0x100 + (ulonglong)(byte)puVar2[3]) {
          puVar15 = puVar7;
        }
        if (((*(uint *)(param_1 + 0x498) & uVar5) != 0) && (puVar2[4] == '\0')) {
          puVar13 = (uint *)(puVar2 + 0xe);
          lVar9 = (longlong)puVar15 - (longlong)puVar13;
          uVar3 = ((int)(lVar9 / 6) + (int)(lVar9 >> 0x3f)) -
                  (SUB164(SEXT816(lVar9) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f);
          if ((longlong)(ulonglong)((uint)CONCAT11(*puVar4,puVar2[7]) * 6) <= lVar9) {
            uVar3 = (uint)CONCAT11(*puVar4,puVar2[7]);
          }
          if ((*(uint *)(param_1 + 0x49c) & uVar5) == 0) {
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              uVar1 = *puVar13;
              if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
                  == uVar11) goto LAB_140071f99;
              puVar13 = (uint *)((longlong)puVar13 + 6);
            }
          }
          else if (uVar3 != 0) {
            uVar1 = 0;
LAB_140071f3e:
            uVar6 = (ulonglong)((uVar3 + uVar1 & 0xfffffffe) * 3);
            uVar14 = *(uint *)((longlong)puVar13 + uVar6);
            uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                     uVar14 << 0x18;
            if (uVar14 != uVar11) goto code_r0x000140071f5a;
            puVar13 = (uint *)((longlong)puVar13 + uVar6);
LAB_140071f99:
            if ((puVar2[5] & 8) != 0) {
              iVar10 = 0;
            }
            iVar10 = iVar10 + ((int)(short)((ushort)(byte)puVar13[1] << 8) |
                              (uint)*(byte *)((longlong)puVar13 + 5));
          }
        }
LAB_140071ed2:
        iVar12 = iVar12 + -1;
        if (iVar12 == 0) {
          return iVar10;
        }
        uVar5 = uVar5 * 2;
        puVar4 = puVar15 + 6;
        puVar2 = puVar15;
      } while (puVar4 <= puVar7);
    }
  }
  return iVar10;
code_r0x000140071f5a:
  uVar8 = uVar3 + uVar1 >> 1;
  if (uVar14 < uVar11) {
    uVar1 = uVar8 + 1;
    uVar8 = uVar3;
  }
  uVar3 = uVar8;
  if (uVar3 <= uVar1) goto LAB_140071ed2;
  goto LAB_140071f3e;
}

