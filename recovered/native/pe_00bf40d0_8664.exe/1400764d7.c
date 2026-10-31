/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400764d7 */

int FUN_1400764d7(longlong param_1,longlong *param_2,ushort param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  bool bVar15;
  undefined1 auStackY_a8 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  uVar11 = (uint)param_3 + (uint)param_3;
  uVar12 = param_4 - uVar11;
  iVar3 = 3;
  if (param_4 < uVar11) goto LAB_14007657a;
  lVar2 = param_2[6];
  lVar4 = FUN_14001f231(lVar2,2,0,(uint)param_3,0,&local_4c);
  if ((local_4c == 0) && (local_4c = FUN_140021063(param_2,uVar11), local_4c == 0)) {
    if (param_3 == 0) {
      uVar7 = 0;
    }
    else {
      lVar10 = param_2[7];
      uVar6 = 0;
      uVar8 = 0;
      do {
        uVar7 = *(ushort *)(lVar10 + uVar6 * 2);
        uVar9 = uVar7 << 8 | uVar7 >> 8;
        uVar7 = uVar9;
        if (uVar9 <= uVar8) {
          uVar7 = uVar8;
        }
        *(ushort *)(lVar4 + uVar6 * 2) = uVar9;
        uVar6 = uVar6 + 1;
        uVar8 = uVar7;
      } while (param_3 != uVar6);
    }
    FUN_140021187(param_2);
    uVar8 = uVar7 - 0x101;
    lVar10 = 0;
    if (uVar7 < 0x101) {
      uVar8 = 0;
    }
    if (uVar7 < 0x102) {
LAB_140076606:
      *(ushort *)(param_1 + 2) = param_3;
      *(ushort *)(param_1 + 4) = uVar8;
      *(longlong *)(param_1 + 8) = lVar4;
      *(longlong *)(param_1 + 0x10) = lVar10;
      iVar3 = 0;
      goto LAB_14007657a;
    }
    uVar6 = (ulonglong)uVar8;
    lVar10 = FUN_14001e961(lVar2,uVar12 + (uint)uVar8 * 8 + 1,&local_4c);
    if (local_4c == 0) {
      pbVar14 = (byte *)(lVar10 + uVar6 * 8);
      local_4c = FUN_140020a85(param_2,(undefined8 *)pbVar14,uVar12);
      if (local_4c == 0) {
        pbVar13 = pbVar14 + uVar12;
        if (param_4 == uVar11) {
          bVar15 = true;
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          do {
            bVar1 = *pbVar14;
            *pbVar14 = 0;
            *(byte **)(lVar10 + uVar5 * 8) = pbVar14 + 1;
            pbVar14 = pbVar14 + (ulonglong)bVar1 + 1;
            uVar5 = uVar5 + 1;
            bVar15 = uVar5 < uVar6;
            if (pbVar13 <= pbVar14) break;
          } while (uVar5 < uVar6);
        }
        *pbVar13 = 0;
        if ((bool)((ushort)uVar5 < uVar8 & bVar15)) {
          uVar5 = uVar5 & 0xffff;
          do {
            *(byte **)(lVar10 + uVar5 * 8) = pbVar13;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        goto LAB_140076606;
      }
    }
  }
  else {
    lVar10 = 0;
  }
  FUN_14001c53d(lVar2,lVar10);
  FUN_14001c53d(lVar2,lVar4);
  iVar3 = local_4c;
LAB_14007657a:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_a8);
  }
  return iVar3;
}

