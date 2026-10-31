/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140176247 */

int FUN_140176247(longlong param_1,short param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  short *psVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  code *pcVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  local_4c = 0;
  uVar4 = 0;
  if (*(ushort *)(param_1 + 0x1d0) == 0) goto LAB_14017645c;
  lVar7 = *(longlong *)(param_1 + 0x1e8);
  psVar6 = (short *)(lVar7 + 8);
  uVar10 = 0xffffffff;
  bVar14 = false;
  uVar8 = 0xffffffff;
  uVar9 = 0xffffffff;
  uVar11 = 0xffffffff;
  do {
    uVar12 = uVar11;
    if ((psVar6[-1] == param_2) && (*psVar6 != 0)) {
      switch(psVar6[-4]) {
      case 0:
      case 2:
        uVar10 = uVar4;
        break;
      case 1:
        uVar12 = uVar4;
        if ((psVar6[-2] != 0) && (uVar12 = uVar11, psVar6[-3] == 0)) {
          uVar9 = uVar4;
        }
        break;
      case 3:
        if ((((uVar8 == 0xffffffff) || ((psVar6[-2] & 0x3ffU) == 9)) && ((ushort)psVar6[-3] < 0xb))
           && ((0x403U >> ((ushort)psVar6[-3] & 0x1f) & 1) != 0)) {
          bVar14 = (psVar6[-2] & 0x3ffU) == 9;
          uVar8 = (uint)uVar4;
        }
      }
    }
    uVar3 = (uint)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    psVar6 = psVar6 + 0xc;
    uVar11 = uVar12;
  } while (*(ushort *)(param_1 + 0x1d0) != uVar3);
  if (-1 < (int)uVar12) {
    uVar9 = uVar12;
  }
  local_58 = uVar1;
  if ((int)uVar8 < 0) {
    if (-1 < (int)uVar9) goto LAB_1401763a2;
    if (-1 < (int)uVar10) {
      pcVar13 = FUN_140179ba0;
      goto LAB_1401763ae;
    }
  }
  else {
    if (((int)uVar9 < 0) || (bVar14)) {
      uVar10 = (ulonglong)uVar8;
      uVar4 = 0;
      uVar8 = (uint)*(ushort *)(lVar7 + 2 + uVar10 * 0x18);
      if ((10 < uVar8) || ((0x403U >> (uVar8 & 0x1f) & 1) == 0)) goto LAB_14017645c;
      pcVar13 = FUN_140179ba0;
    }
    else {
LAB_1401763a2:
      pcVar13 = FUN_140179c60;
      uVar10 = uVar9;
LAB_1401763ae:
      if (lVar7 == 0) goto LAB_14017645a;
    }
    lVar7 = lVar7 + uVar10 * 0x18;
    if (*(longlong *)(lVar7 + 0x10) != 0) {
LAB_1401763c9:
      uVar4 = (*pcVar13)(lVar7,uVar1);
      goto LAB_14017645c;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x200);
    local_60 = &local_4c;
    local_68 = 0;
    uVar5 = FUN_14012b8aa(uVar1,1,0,*(undefined2 *)(lVar7 + 8));
    *(undefined8 *)(lVar7 + 0x10) = uVar5;
    if (local_4c == 0) {
      local_4c = FUN_14012d612(uVar2,*(undefined4 *)(lVar7 + 0xc));
      uVar5 = *(undefined8 *)(lVar7 + 0x10);
      if (local_4c == 0) {
        local_4c = FUN_14012d656(uVar2,uVar5,*(undefined2 *)(lVar7 + 8));
        if (local_4c == 0) goto LAB_1401763c9;
        uVar5 = *(undefined8 *)(lVar7 + 0x10);
      }
    }
    FUN_140128b39(uVar1,uVar5);
    *(undefined8 *)(lVar7 + 0x10) = 0;
    *(undefined2 *)(lVar7 + 8) = 0;
  }
LAB_14017645a:
  uVar4 = 0;
LAB_14017645c:
  *param_3 = uVar4;
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return local_4c;
}

