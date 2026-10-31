/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180224802 */

int FUN_180224802(longlong param_1,int param_2,uint param_3)

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
  int iVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 *puVar14;
  
  lVar9 = *(longlong *)(param_1 + 0x488);
  iVar10 = 0;
  if (lVar9 != 0) {
    iVar11 = *(int *)(param_1 + 0x494);
    iVar10 = 0;
    if (9 < *(uint *)(param_1 + 0x490) && iVar11 != 0) {
      puVar7 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x490) + lVar9);
      puVar4 = (undefined1 *)(lVar9 + 10);
      param_3 = param_2 << 0x10 | param_3;
      uVar5 = 1;
      iVar10 = 0;
      puVar2 = (undefined1 *)(lVar9 + 4);
      do {
        puVar14 = puVar2 + (ulonglong)(byte)puVar2[2] * 0x100 + (ulonglong)(byte)puVar2[3];
        if (puVar7 < puVar2 + (ulonglong)(byte)puVar2[2] * 0x100 + (ulonglong)(byte)puVar2[3]) {
          puVar14 = puVar7;
        }
        if (((*(uint *)(param_1 + 0x498) & uVar5) != 0) && (puVar2[4] == '\0')) {
          puVar12 = (uint *)(puVar2 + 0xe);
          lVar9 = (longlong)puVar14 - (longlong)puVar12;
          uVar3 = ((int)(lVar9 / 6) + (int)(lVar9 >> 0x3f)) -
                  (SUB164(SEXT816(lVar9) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f);
          if ((longlong)(ulonglong)((uint)CONCAT11(*puVar4,puVar2[7]) * 6) <= lVar9) {
            uVar3 = (uint)CONCAT11(*puVar4,puVar2[7]);
          }
          if ((*(uint *)(param_1 + 0x49c) & uVar5) == 0) {
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              uVar1 = *puVar12;
              if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
                  == param_3) goto LAB_180224959;
              puVar12 = (uint *)((longlong)puVar12 + 6);
            }
          }
          else if (uVar3 != 0) {
            uVar1 = 0;
LAB_1802248fe:
            uVar6 = (ulonglong)((uVar3 + uVar1 & 0xfffffffe) * 3);
            uVar13 = *(uint *)((longlong)puVar12 + uVar6);
            uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                     uVar13 << 0x18;
            if (uVar13 != param_3) goto code_r0x00018022491a;
            puVar12 = (uint *)((longlong)puVar12 + uVar6);
LAB_180224959:
            if ((puVar2[5] & 8) != 0) {
              iVar10 = 0;
            }
            iVar10 = iVar10 + ((int)(short)((ushort)(byte)puVar12[1] << 8) |
                              (uint)*(byte *)((longlong)puVar12 + 5));
          }
        }
LAB_180224892:
        iVar11 = iVar11 + -1;
        if (iVar11 == 0) {
          return iVar10;
        }
        uVar5 = uVar5 * 2;
        puVar4 = puVar14 + 6;
        puVar2 = puVar14;
      } while (puVar4 <= puVar7);
    }
  }
  return iVar10;
code_r0x00018022491a:
  uVar8 = uVar3 + uVar1 >> 1;
  if (uVar13 < param_3) {
    uVar1 = uVar8 + 1;
    uVar8 = uVar3;
  }
  uVar3 = uVar8;
  if (uVar3 <= uVar1) goto LAB_180224892;
  goto LAB_1802248fe;
}

