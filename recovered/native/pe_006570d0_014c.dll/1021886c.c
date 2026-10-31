/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021886c */

int __fastcall FUN_1021886c(undefined4 param_1,int param_2,ushort param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  byte *local_34;
  int local_30;
  int local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  uVar9 = (uint)param_3;
  iVar3 = 3;
  if (param_4 < uVar9 * 2) goto LAB_102189c8;
  local_24 = *(undefined4 *)(param_2 + 0x1c);
  iVar6 = 0;
  local_34 = (byte *)(param_4 + uVar9 * -2);
  local_30 = param_2;
  local_20 = uVar9 * 2;
  iVar3 = FUN_101c2a50(local_24,2,0,uVar9,0,&local_18);
  if ((local_18 == 0) && (local_18 = FUN_101c4b69(local_30,uVar9 * 2), local_18 == 0)) {
    uVar4 = 0;
    if (param_3 == 0) {
      uVar7 = 0;
    }
    else {
      iVar6 = *(int *)(local_30 + 0x20);
      uVar8 = 0;
      do {
        uVar7 = *(ushort *)(iVar6 + uVar4 * 2);
        uVar5 = uVar7 << 8 | uVar7 >> 8;
        uVar7 = uVar5;
        if (uVar5 <= uVar8) {
          uVar7 = uVar8;
        }
        *(ushort *)(iVar3 + uVar4 * 2) = uVar5;
        uVar4 = uVar4 + 1;
        uVar8 = uVar7;
      } while (uVar9 != uVar4);
    }
    local_2c = iVar3;
    FUN_101c4c66(local_30);
    uVar8 = uVar7 - 0x101;
    if (uVar7 < 0x101) {
      uVar8 = 0;
    }
    iVar6 = 0;
    if (uVar7 < 0x102) {
LAB_10218947:
      *(ushort *)(local_1c + 2) = param_3;
      *(ushort *)(local_1c + 4) = uVar8;
      *(int *)(local_1c + 8) = local_2c;
      *(int *)(local_1c + 0xc) = iVar6;
      iVar3 = 0;
      goto LAB_102189c8;
    }
    uVar9 = (uint)uVar8;
    iVar6 = FUN_101c21f6(local_24,local_34 + uVar9 * 4 + 1,&local_18);
    iVar3 = local_2c;
    if (local_18 == 0) {
      pbVar10 = (byte *)(iVar6 + uVar9 * 4);
      local_28 = uVar9;
      local_18 = FUN_101c4659(local_30,pbVar10,local_34);
      iVar3 = local_2c;
      if (local_18 == 0) {
        local_34 = local_34 + (int)pbVar10;
        uVar9 = 0;
        if (param_4 == local_20) {
          bVar11 = true;
        }
        else {
          do {
            bVar1 = *pbVar10;
            *pbVar10 = 0;
            *(byte **)(iVar6 + uVar9 * 4) = pbVar10 + 1;
            pbVar10 = pbVar10 + bVar1 + 1;
            uVar9 = uVar9 + 1;
            bVar11 = uVar9 < local_28;
            if (local_34 <= pbVar10) break;
          } while (uVar9 < local_28);
        }
        *local_34 = 0;
        if ((bool)((ushort)uVar9 < uVar8 & bVar11)) {
          uVar9 = uVar9 & 0xffff;
          do {
            *(byte **)(iVar6 + uVar9 * 4) = local_34;
            uVar9 = uVar9 + 1;
          } while (uVar9 < local_28);
        }
        goto LAB_10218947;
      }
    }
  }
  uVar2 = local_24;
  FUN_101c0017(local_24,iVar6);
  FUN_101c0017(uVar2,iVar3);
  iVar3 = local_18;
LAB_102189c8:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

