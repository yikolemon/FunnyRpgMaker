/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101717e3 */

int __fastcall FUN_101717e3(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 == 4) {
    return param_1;
  }
  iVar3 = FUN_10173127(param_4,0);
  if (iVar3 == 0) {
    thunk_FUN_10274120(param_1);
LAB_10171943:
    FUN_10170e07();
    iVar3 = 0;
  }
  else {
    if (0 < param_4) {
      uVar1 = param_2 * 8 + 4;
      if ((0x1c < uVar1) || ((0x10101000U >> (uVar1 & 0x1f) & 1) == 0)) {
        thunk_FUN_10274120(param_1);
        thunk_FUN_10274120(iVar3);
        goto LAB_10171943;
      }
      iVar8 = 0;
      iVar6 = param_1;
      iVar7 = iVar3;
      do {
        iVar4 = param_3 + -1;
        if (uVar1 == 0x14) {
          if (-1 < iVar4) {
            iVar4 = 0;
            do {
              uVar2 = *(undefined1 *)(iVar6 + iVar4 * 2);
              *(undefined1 *)(iVar7 + 2 + iVar4 * 4) = uVar2;
              *(undefined1 *)(iVar7 + 1 + iVar4 * 4) = uVar2;
              *(undefined1 *)(iVar7 + iVar4 * 4) = uVar2;
              *(undefined1 *)(iVar7 + 3 + iVar4 * 4) = *(undefined1 *)(iVar6 + 1 + iVar4 * 2);
              iVar4 = iVar4 + 1;
            } while (param_3 != iVar4);
          }
        }
        else if (uVar1 == 0x1c) {
          if (-1 < iVar4) {
            puVar5 = (undefined1 *)(iVar8 * param_3 * param_2 + param_1);
            iVar4 = 0;
            do {
              *(undefined1 *)(iVar7 + iVar4 * 4) = *puVar5;
              *(undefined1 *)(iVar7 + 1 + iVar4 * 4) = puVar5[1];
              *(undefined1 *)(iVar7 + 2 + iVar4 * 4) = puVar5[2];
              *(undefined1 *)(iVar7 + 3 + iVar4 * 4) = 0xff;
              puVar5 = puVar5 + 3;
              iVar4 = iVar4 + 1;
            } while (param_3 != iVar4);
          }
        }
        else if (-1 < iVar4) {
          iVar4 = 0;
          do {
            uVar2 = *(undefined1 *)(iVar6 + iVar4);
            *(undefined1 *)(iVar7 + 2 + iVar4 * 4) = uVar2;
            *(undefined1 *)(iVar7 + 1 + iVar4 * 4) = uVar2;
            *(undefined1 *)(iVar7 + iVar4 * 4) = uVar2;
            *(undefined1 *)(iVar7 + 3 + iVar4 * 4) = 0xff;
            iVar4 = iVar4 + 1;
          } while (param_3 != iVar4);
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + param_3 * 4;
        iVar6 = iVar6 + param_3 * param_2;
      } while (iVar8 != param_4);
    }
    thunk_FUN_10274120(param_1);
  }
  return iVar3;
}

