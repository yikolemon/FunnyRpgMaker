/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005e940 */

longlong * FUN_14005e940(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  
  uVar6 = FUN_14004bb32(&DAT_14013d6f0,(int)param_1[3]);
  FUN_14004bb9e(&DAT_14013f76c,(int)param_1[3]);
  cVar3 = FUN_14004bc0a(&DAT_140140284,(int)param_1[3]);
  FUN_14005eb2c(param_1);
  if (*param_1 != param_1[1]) {
    bVar1 = 0;
    do {
      uVar7 = FUN_14004bb32(&DAT_14013d6f0,(int)param_1[3]);
      cVar4 = FUN_14004bc0a(&DAT_140140284,(int)param_1[3]);
      cVar5 = FUN_14004bcce();
      bVar10 = (byte)uVar6;
      bVar9 = (byte)uVar7;
      if (*(char *)((longlong)param_1 + 0x21) == '\0') {
        bVar2 = 0;
        if (cVar3 == '\0') {
          uVar8 = 1;
          bVar2 = 0;
          goto LAB_14005ea03;
        }
LAB_14005ea06:
        bVar1 = bVar1 + 1;
        bVar11 = bVar10 == 8;
        if (!bVar11) {
          bVar1 = 0;
        }
        if (bVar9 != 4 || bVar10 != 0) {
          if ((bVar10 < 5) && ((0x13U >> (uVar6 & 0x1f) & 1) != 0)) {
            return param_1;
          }
          goto LAB_14005ea43;
        }
      }
      else {
        bVar2 = 0;
        if (bVar10 != 2) {
          if ((uVar6 & 0xff) == 0xc) {
            uVar8 = 0;
            bVar2 = 1;
          }
          else {
            uVar8 = 0;
            bVar2 = 0;
          }
LAB_14005ea03:
          *(undefined1 *)((longlong)param_1 + 0x21) = uVar8;
          goto LAB_14005ea06;
        }
        bVar11 = false;
        bVar1 = 0;
LAB_14005ea43:
        if ((bVar9 < 5) && ((0x13U >> (uVar7 & 0x1f) & 1) != 0)) {
          return param_1;
        }
        if ((bVar10 == 0xb) || ((uVar6 & 0xff) == 5)) {
          if ((bVar9 & 0xfe) != 10) goto LAB_14005ea94;
        }
        else if ((((uVar6 & 0xff) != 3) || (0xb < bVar9)) || ((0x868U >> (uVar7 & 0x1f) & 1) == 0))
        {
LAB_14005ea94:
          if (((bVar9 != 10 || (bVar10 - 6 & 0xfb) != 0) &&
              ((0xc < bVar9 || ((0x1204U >> (uVar7 & 0x1f) & 1) == 0)))) &&
             (!(bool)(cVar4 == '\0' & bVar2) && (bVar10 != 7 && cVar5 == '\0'))) {
            if (!bVar11 || bVar9 != 8) {
              return param_1;
            }
            if (!(bool)(bVar1 & 1)) {
              return param_1;
            }
          }
        }
      }
      FUN_14004bb9e(&DAT_14013f76c,(int)param_1[3]);
      FUN_14005eb2c(param_1);
      uVar6 = uVar7;
      cVar3 = cVar4;
    } while (*param_1 != param_1[1]);
  }
  return param_1;
}

