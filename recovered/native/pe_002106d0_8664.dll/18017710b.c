/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017710b */

longlong FUN_18017710b(longlong param_1,int param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  if (param_2 == 4) {
    return param_1;
  }
  lVar3 = FUN_180178ee1(4,param_3,param_4,0);
  if (lVar3 == 0) {
    thunk_FUN_180290e40(param_1);
    pcVar5 = "outofmem";
LAB_1801772ac:
    FUN_1801765d0(pcVar5);
    lVar3 = 0;
  }
  else {
    if (0 < (int)param_4) {
      uVar2 = param_2 * 8 + 4;
      if ((0x1c < uVar2) || ((0x10101000U >> (uVar2 & 0x1f) & 1) == 0)) {
        thunk_FUN_180290e40(param_1);
        thunk_FUN_180290e40(lVar3);
        pcVar5 = "unsupported";
        goto LAB_1801772ac;
      }
      iVar4 = param_3 + -1;
      uVar12 = 0;
      uVar8 = 0;
      uVar11 = 0;
      do {
        lVar6 = lVar3 + 3 + uVar11;
        lVar9 = (ulonglong)uVar8 + param_1;
        if (uVar2 == 0x14) {
          if (-1 < iVar4) {
            lVar7 = 0;
            do {
              uVar1 = *(undefined1 *)(lVar9 + lVar7 * 2);
              *(undefined1 *)(lVar6 + -1 + lVar7 * 4) = uVar1;
              *(undefined1 *)(lVar6 + -2 + lVar7 * 4) = uVar1;
              *(undefined1 *)(lVar6 + -3 + lVar7 * 4) = uVar1;
              *(undefined1 *)(lVar6 + lVar7 * 4) = *(undefined1 *)(lVar9 + 1 + lVar7 * 2);
              lVar7 = lVar7 + 1;
            } while (param_3 != (int)lVar7);
          }
        }
        else if (uVar2 == 0x1c) {
          if (-1 < iVar4) {
            lVar6 = uVar11 + lVar3;
            puVar10 = (undefined1 *)((ulonglong)(uint)(param_3 * (int)uVar12 * param_2) + param_1);
            lVar9 = 0;
            do {
              *(undefined1 *)(lVar6 + lVar9 * 4) = *puVar10;
              *(undefined1 *)(lVar6 + 1 + lVar9 * 4) = puVar10[1];
              *(undefined1 *)(lVar6 + 2 + lVar9 * 4) = puVar10[2];
              *(undefined1 *)(lVar6 + 3 + lVar9 * 4) = 0xff;
              lVar9 = lVar9 + 1;
              puVar10 = puVar10 + 3;
            } while (param_3 != (int)lVar9);
          }
        }
        else if (-1 < iVar4) {
          lVar7 = 0;
          do {
            uVar1 = *(undefined1 *)(lVar9 + lVar7);
            *(undefined1 *)(lVar6 + -1 + lVar7 * 4) = uVar1;
            *(undefined1 *)(lVar6 + -2 + lVar7 * 4) = uVar1;
            *(undefined1 *)(lVar6 + -3 + lVar7 * 4) = uVar1;
            *(undefined1 *)(lVar6 + lVar7 * 4) = 0xff;
            lVar7 = lVar7 + 1;
          } while (param_3 != (int)lVar7);
        }
        uVar12 = uVar12 + 1;
        uVar11 = (ulonglong)(uint)((int)uVar11 + param_3 * 4);
        uVar8 = uVar8 + param_3 * param_2;
      } while (uVar12 != param_4);
    }
    thunk_FUN_180290e40(param_1);
  }
  return lVar3;
}

