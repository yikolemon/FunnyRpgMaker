/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801772c7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1801772c7(longlong param_1,int param_2,int param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  
  lVar5 = FUN_18012be7d(param_3 * param_4 * 8);
  uVar3 = _UNK_1802e12f8;
  uVar2 = _DAT_1802e12f0;
  if (lVar5 == 0) {
    thunk_FUN_180290e40(param_1);
    pcVar7 = "outofmem";
LAB_180177445:
    FUN_1801765d0(pcVar7);
    lVar5 = 0;
  }
  else {
    if (0 < (int)param_4) {
      uVar4 = param_2 * 8 + 4;
      if ((0x1c < uVar4) || ((0x10101000U >> (uVar4 & 0x1f) & 1) == 0)) {
        thunk_FUN_180290e40(param_1);
        thunk_FUN_180290e40(lVar5);
        pcVar7 = "unsupported";
        goto LAB_180177445;
      }
      iVar6 = param_3 + -1;
      uVar9 = 0;
      uVar8 = 0;
      uVar13 = 0;
      do {
        lVar1 = lVar5 + uVar13 * 2;
        lVar11 = param_1 + (ulonglong)uVar8 * 2;
        if (uVar4 == 0x14) {
          if (-1 < iVar6) {
            lVar12 = 0;
            do {
              auVar14 = ZEXT416(*(uint *)(lVar11 + lVar12 * 4));
              auVar14 = pshuflw(auVar14,auVar14,0x40);
              *(longlong *)(lVar1 + lVar12 * 8) = auVar14._0_8_;
              lVar12 = lVar12 + 1;
            } while (param_3 != (int)lVar12);
          }
        }
        else if (uVar4 == 0x1c) {
          if (-1 < iVar6) {
            puVar10 = (undefined4 *)
                      (param_1 + (ulonglong)(uint)(param_3 * (int)uVar9 * param_2) * 2);
            lVar11 = 0;
            do {
              *(undefined4 *)(lVar1 + lVar11 * 8) = *puVar10;
              *(undefined2 *)(lVar1 + 4 + lVar11 * 8) = *(undefined2 *)(puVar10 + 1);
              *(undefined2 *)(lVar1 + 6 + lVar11 * 8) = 0xffff;
              lVar11 = lVar11 + 1;
              puVar10 = (undefined4 *)((longlong)puVar10 + 6);
            } while (param_3 != (int)lVar11);
          }
        }
        else if (-1 < iVar6) {
          lVar12 = 0;
          do {
            auVar14._8_8_ = uVar3;
            auVar14._0_8_ = uVar2 & 0xffffffffffff0000 | (ulonglong)*(ushort *)(lVar11 + lVar12 * 2)
            ;
            auVar14 = pshuflw(auVar14,auVar14,0x40);
            *(longlong *)(lVar1 + lVar12 * 8) = auVar14._0_8_;
            lVar12 = lVar12 + 1;
          } while (param_3 != (int)lVar12);
        }
        uVar9 = uVar9 + 1;
        uVar13 = (ulonglong)(uint)((int)uVar13 + param_3 * 4);
        uVar8 = uVar8 + param_3 * param_2;
      } while (uVar9 != param_4);
    }
    thunk_FUN_180290e40(param_1);
  }
  return lVar5;
}

