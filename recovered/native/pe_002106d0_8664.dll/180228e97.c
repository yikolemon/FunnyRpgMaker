/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180228e97 */

int FUN_180228e97(longlong param_1,longlong param_2,ushort param_3,uint param_4)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int *local_80;
  ushort local_6a;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_a8;
  uVar3 = (uint)param_3 * 2;
  uVar11 = param_4 + (uint)param_3 * -2;
  iVar4 = 3;
  if (param_4 < uVar3) goto LAB_180228f3a;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  local_80 = &local_4c;
  local_88 = 0;
  local_6a = param_3;
  local_68 = param_1;
  lVar5 = FUN_1801cc8d6(uVar2,2,0,(ulonglong)param_3);
  if ((local_4c == 0) && (local_4c = FUN_1801cec60(), local_4c == 0)) {
    if (local_6a == 0) {
      uVar8 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_2 + 0x38);
      uVar7 = 0;
      uVar9 = 0;
      do {
        uVar8 = *(ushort *)(lVar6 + uVar7 * 2);
        uVar10 = uVar8 << 8 | uVar8 >> 8;
        uVar8 = uVar10;
        if (uVar10 <= uVar9) {
          uVar8 = uVar9;
        }
        *(ushort *)(lVar5 + uVar7 * 2) = uVar10;
        uVar7 = uVar7 + 1;
        uVar9 = uVar8;
      } while (param_3 != uVar7);
    }
    FUN_1801ced84(param_2);
    uVar9 = uVar8 - 0x101;
    if (uVar8 < 0x101) {
      uVar9 = 0;
    }
    lVar6 = 0;
    if (uVar8 < 0x102) {
LAB_180228fc6:
      *(ushort *)(local_68 + 2) = local_6a;
      *(ushort *)(local_68 + 4) = uVar9;
      *(longlong *)(local_68 + 8) = lVar5;
      *(longlong *)(local_68 + 0x10) = lVar6;
      iVar4 = 0;
      goto LAB_180228f3a;
    }
    local_58 = (ulonglong)uVar9;
    lVar6 = FUN_1801cc006(uVar2,uVar11 + (uint)uVar9 * 8 + 1,&local_4c);
    if (local_4c == 0) {
      pbVar13 = (byte *)(lVar6 + local_58 * 8);
      local_60 = lVar6;
      local_4c = FUN_1801ce682(param_2,pbVar13,(ulonglong)uVar11);
      lVar6 = local_60;
      if (local_4c == 0) {
        pbVar12 = pbVar13 + uVar11;
        if (param_4 == uVar3) {
          bVar14 = true;
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            bVar1 = *pbVar13;
            *pbVar13 = 0;
            *(byte **)(local_60 + uVar7 * 8) = pbVar13 + 1;
            pbVar13 = pbVar13 + (ulonglong)bVar1 + 1;
            uVar7 = uVar7 + 1;
            bVar14 = uVar7 < local_58;
            if (pbVar12 <= pbVar13) break;
          } while (uVar7 < local_58);
        }
        *pbVar12 = 0;
        if ((bool)((ushort)uVar7 < uVar9 & bVar14)) {
          uVar7 = uVar7 & 0xffff;
          do {
            *(byte **)(local_60 + uVar7 * 8) = pbVar12;
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_58);
        }
        goto LAB_180228fc6;
      }
    }
  }
  else {
    lVar6 = 0;
  }
  FUN_1801c9b65(uVar2,lVar6);
  FUN_1801c9b65(uVar2,lVar5);
  iVar4 = local_4c;
LAB_180228f3a:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_a8);
  }
  return iVar4;
}

