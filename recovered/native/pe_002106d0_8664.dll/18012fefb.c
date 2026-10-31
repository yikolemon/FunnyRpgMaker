/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012fefb */

void FUN_18012fefb(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_b8;
  local_78 = param_3;
  if ((param_4 == 0) || (param_4 == param_1)) {
    *(undefined8 *)(param_1 + 0x48) = param_2;
    *(undefined8 *)(param_1 + 0x50) = param_3;
  }
  lVar7 = DAT_180419160;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) goto LAB_1801301a7;
  lVar6 = *(longlong *)(param_1 + 0x28);
  local_80 = param_2;
  local_88 = param_3;
  local_90 = param_3;
  if (param_4 == 0) {
    bVar9 = false;
    bVar10 = false;
  }
  else {
    bVar10 = true;
    bVar9 = true;
    lVar8 = param_4;
    if (param_4 != lVar5) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x18);
        bVar9 = lVar8 != 0;
        if (lVar8 == lVar5) break;
      } while (lVar8 != 0);
    }
    lVar8 = param_4;
    if (param_4 != lVar6) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x18);
        bVar10 = lVar8 != 0;
        if (lVar8 == lVar6) break;
      } while (lVar8 != 0);
    }
  }
  if (((*(byte *)(lVar5 + 0xd4) & 1) != 0 || bVar9) &&
     ((*(byte *)(lVar6 + 0xd4) & 1) != 0 || (bool)bVar10 != false)) {
    fVar1 = *(float *)(DAT_180419160 + 0xed4);
    lVar8 = (longlong)*(int *)(param_1 + 0x60);
    fVar11 = (float)FUN_180102463(*(float *)((longlong)&local_78 + lVar8 * 4) - fVar1,0);
    fVar12 = *(float *)(lVar7 + 0xdd0 + lVar8 * 4);
    fVar12 = (float)FUN_1800eebe2(fVar11,fVar12 + fVar12);
    bVar4 = *(byte *)(lVar6 + 0xd4);
    if ((char)*(byte *)(lVar5 + 0xd4) < '\0') {
      if ((char)bVar4 < '\0') {
        fVar12 = *(float *)((longlong)&local_88 + lVar8 * 4);
        fVar12 = (float)(int)((fVar12 / (*(float *)((longlong)&local_90 + lVar8 * 4) + fVar12)) *
                             fVar11);
      }
      else {
        fVar12 = (float)FUN_1800eebe2(DAT_1802bb8e0 + fVar11,
                                      *(undefined4 *)(lVar5 + 0x50 + lVar8 * 4));
      }
      *(float *)(lVar5 + 0x58 + lVar8 * 4) = fVar12;
      *(float *)((longlong)&local_88 + lVar8 * 4) = fVar12;
      fVar11 = fVar11 - fVar12;
      *(float *)(lVar6 + 0x58 + lVar8 * 4) = fVar11;
LAB_180130156:
      *(float *)((longlong)&local_90 + lVar8 * 4) = fVar11;
    }
    else {
      if (-1 < (char)bVar4) {
        fVar2 = *(float *)(lVar5 + 0x58 + lVar8 * 4);
        if (((bVar4 & 0x20) == 0) || ((fVar2 == 0.0 && (!NAN(fVar2))))) {
          fVar3 = *(float *)(lVar6 + 0x58 + lVar8 * 4);
          if (((*(byte *)(lVar5 + 0xd4) & 0x20) != 0) && ((fVar3 != 0.0 || (NAN(fVar3))))) {
            fVar12 = (float)FUN_1800eebe2(fVar11 - (float)(int)(fVar12 * DAT_1802dbb2c),fVar3);
            *(float *)((longlong)&local_90 + lVar8 * 4) = fVar12;
            fVar12 = fVar11 - fVar12;
            goto LAB_1801300e3;
          }
          fVar12 = (float)FUN_180102463(bVar4,(float)(int)((fVar2 / (fVar3 + fVar2)) * fVar11 +
                                                          DAT_1802dbb2c));
        }
        else {
          fVar12 = (float)FUN_1800eebe2(fVar11 - (float)(int)(fVar12 * DAT_1802dbb2c));
        }
        *(float *)((longlong)&local_88 + lVar8 * 4) = fVar12;
        fVar11 = fVar11 - fVar12;
        goto LAB_180130156;
      }
      fVar12 = (float)FUN_1800eebe2(DAT_1802bb8e0 + fVar11,*(undefined4 *)(lVar6 + 0x50 + lVar8 * 4)
                                   );
      *(float *)(lVar6 + 0x58 + lVar8 * 4) = fVar12;
      *(float *)((longlong)&local_90 + lVar8 * 4) = fVar12;
      fVar12 = fVar11 - fVar12;
      *(float *)(lVar5 + 0x58 + lVar8 * 4) = fVar12;
LAB_1801300e3:
      *(float *)((longlong)&local_88 + lVar8 * 4) = fVar12;
    }
    *(float *)((longlong)&local_80 + lVar8 * 4) =
         fVar1 + fVar12 + *(float *)((longlong)&local_80 + lVar8 * 4);
  }
  if (param_4 == 0) {
    *(byte *)(lVar6 + 0xd4) = *(byte *)(lVar6 + 0xd4) & 0x7f;
    bVar4 = *(byte *)(lVar5 + 0xd4);
    *(byte *)(lVar5 + 0xd4) = bVar4 & 0x7f;
    bVar10 = *(byte *)(lVar6 + 0xd4);
    if ((bVar4 & 1) != 0) goto LAB_180130179;
  }
  else if (bVar9) {
LAB_180130179:
    FUN_18012fefb(lVar5,param_2,local_88,0);
  }
  if ((bVar10 & 1) != 0) {
    FUN_18012fefb(lVar6,local_80,local_90,0);
  }
LAB_1801301a7:
  if (DAT_180402640 != (local_70 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_70 ^ (ulonglong)auStack_b8);
  }
  return;
}

