/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140141bb7 */

int FUN_140141bb7(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  int local_5c;
  ushort local_58;
  ushort local_56;
  int local_54;
  ushort local_50;
  byte local_4e;
  int local_4c;
  uint local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0xa0);
  uVar4 = *(undefined8 *)(lVar3 + 0x30);
  lVar5 = *(longlong *)(param_1 + 0x408);
  local_44 = (**(code **)(param_1 + 0x2a0))(param_1,0x67766172,lVar3,&local_48);
  if (local_44 != 0) goto LAB_140141c71;
  iVar6 = FUN_14012db43(lVar3);
  local_44 = FUN_14012e0a0(lVar3,&DAT_140e9b980,&local_5c);
  if (local_44 != 0) goto LAB_140141c71;
  if ((((local_5c != 0x10000) || (local_58 != **(ushort **)(lVar5 + 0x18))) ||
      (local_48 >> 1 < (uint)local_56 * (uint)local_58)) ||
     (local_48 < local_50 + 1 << (local_4e & 1) + 1)) {
    local_44 = 8;
    goto LAB_140141c71;
  }
  *(uint *)(lVar5 + 0x90) = local_48;
  local_44 = FUN_14012dc34(lVar3);
  if (local_44 != 0) goto LAB_140141c71;
  lVar11 = *(longlong *)(lVar3 + 0x38);
  local_78 = 0;
  local_70 = &local_44;
  uVar8 = FUN_14012b8aa(uVar4,4,0,local_50 + 1);
  *(undefined8 *)(lVar5 + 0x88) = uVar8;
  if (local_44 == 0) {
    local_48 = local_48 + iVar6;
    lVar9 = *(longlong *)(lVar3 + 0x40) - *(longlong *)(lVar3 + 0x38);
    if ((local_4e & 1) == 0) {
      if ((longlong)(ulonglong)((uint)local_50 * 2) <= lVar9) {
        uVar10 = 0xffffffffffffffff;
        uVar13 = 0;
        do {
          *(uint *)(*(longlong *)(lVar5 + 0x88) + 4 + uVar10 * 4) =
               (uint)*(byte *)(lVar11 + 2 + uVar10 * 2) * 0x200 +
               (uint)*(byte *)(lVar11 + 3 + uVar10 * 2) * 2 + local_4c + iVar6;
          lVar9 = *(longlong *)(lVar5 + 0x88);
          uVar7 = *(uint *)(lVar9 + 4 + uVar10 * 4);
          uVar14 = uVar7;
          if (uVar7 < uVar13) {
            *(uint *)(lVar9 + 4 + uVar10 * 4) = uVar13;
            lVar9 = *(longlong *)(lVar5 + 0x88);
            uVar7 = uVar13;
            uVar14 = *(uint *)(lVar9 + 4 + uVar10 * 4);
          }
          if (local_48 < uVar14) {
            *(uint *)(lVar9 + 4 + uVar10 * 4) = local_48;
          }
          uVar10 = uVar10 + 1;
          uVar13 = uVar7;
        } while (uVar10 < local_50);
LAB_140141e05:
        *(uint *)(lVar5 + 0x80) = (uint)local_50;
        FUN_14012dd58(lVar3);
        if (local_56 == 0) goto LAB_140141c71;
        local_44 = FUN_14012d612(lVar3,iVar6 + local_54);
        if ((local_44 == 0) &&
           (local_44 = FUN_14012dc34(lVar3,(uint)local_58 * (uint)local_56 * 2), local_44 == 0)) {
          pbVar15 = *(byte **)(lVar3 + 0x38);
          local_78 = 0;
          uVar13 = 0;
          local_70 = &local_44;
          uVar8 = FUN_14012b8aa(uVar4,4,0,(uint)local_56 * (uint)local_58);
          *(undefined8 *)(lVar5 + 0x70) = uVar8;
          if (local_44 == 0) {
            if (local_56 != 0) {
              uVar7 = 0;
              lVar11 = 0;
              uVar12 = local_58;
              do {
                if (uVar12 == 0) {
                  uVar12 = 0;
                }
                else {
                  uVar13 = (uint)uVar12;
                  lVar9 = 0;
                  do {
                    bVar2 = *pbVar15;
                    pbVar1 = pbVar15 + 1;
                    pbVar15 = pbVar15 + 2;
                    *(uint *)(*(longlong *)(lVar5 + 0x70) + ((ulonglong)uVar13 * lVar11 + lVar9) * 4
                             ) = ((int)(short)((ushort)bVar2 << 8) | (uint)*pbVar1) << 2;
                    uVar13 = (uint)local_58;
                    lVar9 = lVar9 + 1;
                    uVar12 = local_58;
                  } while ((uint)lVar9 < uVar13);
                }
                uVar7 = uVar7 + 1;
                uVar13 = (uint)local_56;
                lVar11 = lVar11 + 1;
              } while (uVar7 < uVar13);
            }
            local_78 = 0;
            local_70 = &local_44;
            uVar8 = FUN_140128c13(uVar4,4,0,uVar13);
            *(undefined8 *)(lVar5 + 0x78) = uVar8;
            if (local_44 == 0) {
              *(uint *)(lVar5 + 0x68) = (uint)local_56;
              FUN_14012dd58(lVar3);
              goto LAB_140141c71;
            }
          }
          goto LAB_140141cf6;
        }
        goto LAB_140141e59;
      }
    }
    else if ((longlong)((ulonglong)local_50 * 4) <= lVar9) {
      uVar10 = 0xffffffffffffffff;
      uVar13 = 0;
      do {
        uVar7 = *(uint *)(lVar11 + 4 + uVar10 * 4);
        *(uint *)(*(longlong *)(lVar5 + 0x88) + 4 + uVar10 * 4) =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) +
             local_4c + iVar6;
        lVar9 = *(longlong *)(lVar5 + 0x88);
        uVar7 = *(uint *)(lVar9 + 4 + uVar10 * 4);
        uVar14 = uVar7;
        if (uVar7 < uVar13) {
          *(uint *)(lVar9 + 4 + uVar10 * 4) = uVar13;
          lVar9 = *(longlong *)(lVar5 + 0x88);
          uVar7 = uVar13;
          uVar14 = *(uint *)(lVar9 + 4 + uVar10 * 4);
        }
        if (local_48 < uVar14) {
          *(uint *)(lVar9 + 4 + uVar10 * 4) = local_48;
        }
        uVar10 = uVar10 + 1;
        uVar13 = uVar7;
      } while (uVar10 < local_50);
      goto LAB_140141e05;
    }
    local_44 = 8;
  }
  else {
LAB_140141cf6:
    FUN_14012dd58(lVar3);
  }
LAB_140141e59:
  FUN_140128b39(uVar4,*(undefined8 *)(lVar5 + 0x88));
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined4 *)(lVar5 + 0x80) = 0;
LAB_140141c71:
  if (DAT_140f17b40 != (local_40 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_40 ^ (ulonglong)auStack_98);
  }
  return local_44;
}

