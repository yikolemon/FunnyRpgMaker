/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140183ce4 */

int FUN_140183ce4(undefined8 param_1,int *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int *local_80;
  uint local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  uVar6 = param_2[2];
  uVar11 = -uVar6;
  uVar16 = uVar6;
  if (-1 < (int)uVar11) {
    uVar16 = uVar11;
  }
  uVar9 = (ulonglong)uVar16;
  if (*(byte *)((longlong)param_2 + 0x1a) - 1 < 6) {
    iVar1 = param_2[1];
    switch((uint)*(byte *)((longlong)param_2 + 0x1a)) {
    case 1:
      uVar5 = iVar1 + param_3 + 7U >> 3;
      iVar4 = 1;
      break;
    default:
      uVar5 = iVar1 + param_3;
      iVar4 = 8;
      break;
    case 3:
      uVar5 = iVar1 + param_3 + 3U >> 2;
      iVar4 = 2;
      break;
    case 4:
      uVar5 = iVar1 + param_3 + 1U >> 1;
      iVar4 = 4;
    }
    iVar15 = *param_2;
    iVar10 = (int)param_4;
    if ((iVar10 == 0) && (uVar5 <= uVar16)) {
      uVar5 = iVar4 * (iVar1 + param_3);
      local_4c = 0;
      if ((uVar16 * 8 <= uVar5) || (iVar15 == 0)) goto LAB_140183f6e;
      lVar2 = *(longlong *)(param_2 + 4);
      local_6c = 0xff00 >> (sbyte)(uVar5 & 7);
      if (uVar6 != uVar11 && SBORROW4(uVar6,uVar11) == (int)(uVar6 * 2) < 0) {
        uVar11 = uVar6;
      }
      uVar12 = (ulonglong)uVar11;
      uVar13 = (ulonglong)(uVar5 >> 3) + lVar2;
      uVar7 = (ulonglong)(uVar5 >> 3) + lVar2 + 1;
      uVar8 = lVar2 + uVar12;
      uVar14 = uVar8;
      do {
        uVar3 = uVar13;
        if ((uVar5 & 7) != 0) {
          *(byte *)(uVar7 - 1) = *(byte *)(uVar7 - 1) & (byte)local_6c;
          uVar3 = uVar7;
        }
        if (uVar3 < uVar14) {
          FUN_1401c5830(uVar3,0,uVar8 - uVar3);
        }
        uVar13 = uVar13 + uVar9;
        uVar8 = uVar8 + uVar12;
        uVar14 = uVar14 + uVar12;
        uVar7 = uVar7 + uVar12;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    else {
      local_80 = &local_4c;
      local_88 = 0;
      lVar2 = FUN_14012b8aa(param_1,uVar5,0,iVar15 + iVar10);
      if (local_4c != 0) goto LAB_140183f6e;
      uVar14 = *(ulonglong *)(param_2 + 4);
      uVar16 = *param_2 * uVar16;
      uVar13 = uVar16 + uVar14;
      local_6c = uVar5;
      local_68 = lVar2;
      local_60 = param_4;
      local_58 = param_1;
      if (param_2[2] < 1) {
        if (uVar16 != 0) {
          uVar6 = iVar4 * iVar1 + 7U >> 3;
          do {
            FUN_1401c5180(lVar2,uVar14,(ulonglong)uVar6);
            uVar14 = uVar14 + uVar9;
            lVar2 = lVar2 + (ulonglong)uVar6;
            FUN_1401c5830(lVar2,0,(ulonglong)(uVar5 - uVar6));
            lVar2 = lVar2 + (ulonglong)(uVar5 - uVar6);
          } while (uVar14 < uVar13);
        }
        FUN_1401c5830(lVar2,0,(int)local_60 * local_6c);
      }
      else {
        FUN_1401c5830(lVar2,0,(ulonglong)(iVar10 * uVar5));
        if (uVar16 != 0) {
          lVar2 = local_68 + (ulonglong)(iVar10 * uVar5);
          uVar6 = iVar4 * iVar1 + 7U >> 3;
          uVar16 = local_6c - uVar6;
          do {
            FUN_1401c5180(lVar2,uVar14,(ulonglong)uVar6);
            uVar14 = uVar14 + uVar9;
            lVar2 = lVar2 + (ulonglong)uVar6;
            FUN_1401c5830(lVar2,0,(ulonglong)uVar16);
            lVar2 = lVar2 + (ulonglong)uVar16;
          } while (uVar14 < uVar13);
        }
      }
      FUN_140128b39(local_58,*(undefined8 *)(param_2 + 4));
      *(longlong *)(param_2 + 4) = local_68;
      uVar6 = -local_6c;
      if (-1 < param_2[2]) {
        uVar6 = local_6c;
      }
      param_2[2] = uVar6;
    }
    local_4c = 0;
  }
  else {
    local_4c = 0x12;
  }
LAB_140183f6e:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_a8);
  }
  return local_4c;
}

