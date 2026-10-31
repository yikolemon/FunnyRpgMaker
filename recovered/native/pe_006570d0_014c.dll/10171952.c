/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10171952 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_10171952(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 auVar10 [16];
  
  iVar4 = FUN_1017207d();
  uVar3 = _UNK_102bb488;
  uVar2 = ram0x102bb480;
  if (iVar4 == 0) {
    thunk_FUN_10274120(param_1);
LAB_10171aa6:
    FUN_10170e07();
    iVar4 = 0;
  }
  else {
    if (0 < param_4) {
      uVar1 = param_2 * 8 + 4;
      if ((0x1c < uVar1) || ((0x10101000U >> (uVar1 & 0x1f) & 1) == 0)) {
        thunk_FUN_10274120(param_1);
        thunk_FUN_10274120(iVar4);
        goto LAB_10171aa6;
      }
      iVar9 = 0;
      iVar6 = param_1;
      iVar7 = iVar4;
      do {
        iVar5 = param_3 + -1;
        if (uVar1 == 0x14) {
          if (-1 < iVar5) {
            iVar5 = 0;
            do {
              auVar10 = ZEXT416(*(uint *)(iVar6 + iVar5 * 4));
              auVar10 = pshuflw(auVar10,auVar10,0x40);
              *(longlong *)(iVar7 + iVar5 * 8) = auVar10._0_8_;
              iVar5 = iVar5 + 1;
            } while (param_3 != iVar5);
          }
        }
        else if (uVar1 == 0x1c) {
          if (-1 < iVar5) {
            puVar8 = (undefined4 *)(param_1 + iVar9 * param_3 * param_2 * 2);
            iVar5 = 0;
            do {
              *(undefined4 *)(iVar7 + iVar5 * 8) = *puVar8;
              *(undefined2 *)(iVar7 + 4 + iVar5 * 8) = *(undefined2 *)(puVar8 + 1);
              *(undefined2 *)(iVar7 + 6 + iVar5 * 8) = 0xffff;
              puVar8 = (undefined4 *)((int)puVar8 + 6);
              iVar5 = iVar5 + 1;
            } while (param_3 != iVar5);
          }
        }
        else if (-1 < iVar5) {
          iVar5 = 0;
          do {
            auVar10._8_8_ = uVar3;
            auVar10._0_8_ = uVar2 & 0xffffffffffff0000 | (ulonglong)*(ushort *)(iVar6 + iVar5 * 2);
            auVar10 = pshuflw(auVar10,auVar10,0x40);
            *(longlong *)(iVar7 + iVar5 * 8) = auVar10._0_8_;
            iVar5 = iVar5 + 1;
          } while (param_3 != iVar5);
        }
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + param_3 * 8;
        iVar6 = iVar6 + param_3 * param_2 * 2;
      } while (iVar9 != param_4);
    }
    thunk_FUN_10274120(param_1);
  }
  return iVar4;
}

