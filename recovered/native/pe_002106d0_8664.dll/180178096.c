/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180178096 */

undefined8 FUN_180178096(ulonglong *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_a38 [32];
  byte local_a18 [31];
  undefined1 auStack_9f9 [258];
  undefined1 auStack_8f7 [203];
  ushort local_82c [1010];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_a38;
  iVar6 = (int)param_1[2];
  if (iVar6 < 5) {
    FUN_180178653(param_1);
    iVar6 = (int)param_1[2];
  }
  uVar10 = (ulonglong)((uint)param_1[3] & 0x1f);
  uVar2 = (uint)param_1[3] >> 5;
  *(uint *)(param_1 + 3) = uVar2;
  iVar8 = iVar6 + -5;
  *(int *)(param_1 + 2) = iVar8;
  if (iVar6 < 10) {
    FUN_180178653(param_1);
    iVar8 = (int)param_1[2];
    uVar2 = (uint)param_1[3];
  }
  lVar11 = uVar10 + 0x101;
  uVar3 = uVar2 >> 5;
  *(uint *)(param_1 + 3) = uVar3;
  iVar6 = iVar8 + -5;
  *(int *)(param_1 + 2) = iVar6;
  if (iVar8 < 9) {
    FUN_180178653(param_1);
    iVar6 = (int)param_1[2];
    uVar3 = (uint)param_1[3];
  }
  iVar8 = (uVar2 & 0x1f) + 1;
  uVar2 = uVar3 >> 4;
  *(uint *)(param_1 + 3) = uVar2;
  iVar6 = iVar6 + -4;
  *(int *)(param_1 + 2) = iVar6;
  local_a18[0] = 0;
  local_a18[1] = 0;
  local_a18[2] = 0;
  local_a18[3] = 0;
  local_a18[4] = 0;
  local_a18[5] = 0;
  local_a18[6] = 0;
  local_a18[7] = 0;
  local_a18[8] = 0;
  local_a18[9] = 0;
  local_a18[10] = 0;
  local_a18[0xb] = 0;
  local_a18[0xc] = 0;
  local_a18[0xd] = 0;
  local_a18[0xe] = 0;
  local_a18[0xf] = 0;
  local_a18[0x10] = 0;
  local_a18[0x11] = 0;
  local_a18[0x12] = 0;
  uVar13 = 0;
  do {
    uVar4 = uVar2;
    if (iVar6 < 3) {
      FUN_180178653(param_1);
      iVar6 = (int)param_1[2];
      uVar4 = (uint)param_1[3];
    }
    uVar2 = uVar4 >> 3;
    *(uint *)(param_1 + 3) = uVar2;
    iVar6 = iVar6 + -3;
    *(int *)(param_1 + 2) = iVar6;
    local_a18[(byte)(&DAT_1802e09f0)[uVar13]] = (byte)uVar4 & 7;
    uVar13 = uVar13 + 1;
  } while ((uVar3 & 0xf) + 4 != uVar13);
  iVar6 = FUN_180177e62(local_82c,local_a18,0x13);
  if (iVar6 != 0) {
    iVar9 = iVar8 + (int)lVar11;
    iVar6 = 0;
    do {
      if ((int)param_1[2] < 0x10) {
        if (*param_1 < param_1[1]) {
          FUN_180178653(param_1);
        }
        else {
          if (*(int *)((longlong)param_1 + 0x14) != 0) goto LAB_180178339;
          *(undefined4 *)((longlong)param_1 + 0x14) = 1;
          *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
        }
      }
      uVar1 = local_82c[(uint)param_1[3] & 0x1ff];
      if (uVar1 == 0) {
        uVar2 = FUN_180178719(param_1,local_82c);
      }
      else {
        *(uint *)(param_1 + 3) = (uint)param_1[3] >> ((byte)(uVar1 >> 9) & 0x1f);
        *(uint *)(param_1 + 2) = (int)param_1[2] - (uint)(uVar1 >> 9);
        uVar2 = uVar1 & 0x1ff;
      }
      if (0x12 < uVar2) goto LAB_180178339;
      if (uVar2 < 0x10) {
        auStack_9f9[(longlong)iVar6 + 1] = (char)uVar2;
        iVar6 = iVar6 + 1;
      }
      else {
        iVar12 = (int)param_1[2];
        if (uVar2 == 0x11) {
          if (iVar12 < 3) {
            FUN_180178653(param_1);
            iVar12 = (int)param_1[2];
          }
          uVar13 = param_1[3];
          *(uint *)(param_1 + 3) = (uint)uVar13 >> 3;
          *(int *)(param_1 + 2) = iVar12 + -3;
          iVar12 = ((uint)uVar13 & 7) + 3;
LAB_1801782de:
          uVar7 = 0;
        }
        else {
          if (uVar2 != 0x10) {
            if (iVar12 < 7) {
              FUN_180178653(param_1);
              iVar12 = (int)param_1[2];
            }
            uVar13 = param_1[3];
            *(uint *)(param_1 + 3) = (uint)uVar13 >> 7;
            *(int *)(param_1 + 2) = iVar12 + -7;
            iVar12 = ((uint)uVar13 & 0x7f) + 0xb;
            goto LAB_1801782de;
          }
          if (iVar12 < 2) {
            FUN_180178653(param_1);
            iVar12 = (int)param_1[2];
          }
          uVar13 = param_1[3];
          *(uint *)(param_1 + 3) = (uint)uVar13 >> 2;
          *(int *)(param_1 + 2) = iVar12 + -2;
          if (iVar6 == 0) goto LAB_180178339;
          iVar12 = ((uint)uVar13 & 3) + 3;
          uVar7 = auStack_9f9[iVar6];
        }
        if (iVar9 - iVar6 < iVar12) goto LAB_180178339;
        FUN_1802a89a0(auStack_9f9 + (longlong)iVar6 + 1,uVar7,iVar12);
        iVar6 = iVar6 + iVar12;
      }
    } while (iVar6 < iVar9);
    if (iVar6 == iVar9) {
      iVar6 = FUN_180177e62((longlong)param_1 + 0x3c,auStack_9f9 + 1,lVar11);
      if (iVar6 != 0) {
        uVar5 = FUN_180177e62(param_1 + 0x104,auStack_8f7 + uVar10,iVar8);
        goto LAB_180178347;
      }
    }
    else {
LAB_180178339:
      FUN_1801765d0("bad codelengths");
    }
  }
  uVar5 = 0;
LAB_180178347:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_a38)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_a38);
}

