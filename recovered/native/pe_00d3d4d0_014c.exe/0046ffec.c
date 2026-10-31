/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046ffec */

int __fastcall FUN_0046ffec(int param_1,int *param_2,ushort param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  uint *local_34;
  int *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_34;
  uVar8 = (uint)param_3;
  iVar2 = 3;
  if (param_4 < uVar8 * 2) goto LAB_00470148;
  local_24 = param_2[7];
  iVar5 = 0;
  local_34 = (uint *)(param_4 + uVar8 * -2);
  local_30 = param_2;
  local_20 = uVar8 * 2;
  local_1c = param_1;
  iVar2 = FUN_0041efcd(local_24,2,0,uVar8,0,&local_18);
  if ((local_18 == 0) && (local_18 = FUN_00420be1(local_30,uVar8 * 2), local_18 == 0)) {
    uVar3 = 0;
    if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      iVar5 = local_30[8];
      uVar7 = 0;
      do {
        uVar6 = *(ushort *)(iVar5 + uVar3 * 2);
        uVar4 = uVar6 << 8 | uVar6 >> 8;
        uVar6 = uVar4;
        if (uVar4 <= uVar7) {
          uVar6 = uVar7;
        }
        *(ushort *)(iVar2 + uVar3 * 2) = uVar4;
        uVar3 = uVar3 + 1;
        uVar7 = uVar6;
      } while (uVar8 != uVar3);
    }
    local_2c = iVar2;
    FUN_00420cde(local_30);
    uVar7 = uVar6 - 0x101;
    if (uVar6 < 0x101) {
      uVar7 = 0;
    }
    iVar5 = 0;
    if (uVar6 < 0x102) {
LAB_004700c7:
      *(ushort *)(local_1c + 2) = param_3;
      *(ushort *)(local_1c + 4) = uVar7;
      *(int *)(local_1c + 8) = local_2c;
      *(int *)(local_1c + 0xc) = iVar5;
      iVar2 = 0;
      goto LAB_00470148;
    }
    uVar8 = (uint)uVar7;
    iVar5 = FUN_0041e773(local_24,(int)((int)local_34 + uVar8 * 4 + 1),&local_18);
    iVar2 = local_2c;
    if (local_18 == 0) {
      puVar9 = (uint *)(iVar5 + uVar8 * 4);
      local_28 = uVar8;
      local_18 = FUN_004206d1(local_30,puVar9,(uint)local_34);
      iVar2 = local_2c;
      if (local_18 == 0) {
        local_34 = (uint *)((int)local_34 + (int)puVar9);
        uVar8 = 0;
        if (param_4 == local_20) {
          bVar10 = true;
        }
        else {
          do {
            uVar3 = *puVar9;
            *(undefined1 *)puVar9 = 0;
            *(undefined1 **)(iVar5 + uVar8 * 4) = (undefined1 *)((int)puVar9 + 1);
            puVar9 = (uint *)((int)puVar9 + (byte)uVar3 + 1);
            uVar8 = uVar8 + 1;
            bVar10 = uVar8 < local_28;
            if (local_34 <= puVar9) break;
          } while (uVar8 < local_28);
        }
        *(undefined1 *)local_34 = 0;
        if ((bool)((ushort)uVar8 < uVar7 & bVar10)) {
          uVar8 = uVar8 & 0xffff;
          do {
            *(uint **)(iVar5 + uVar8 * 4) = local_34;
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_28);
        }
        goto LAB_004700c7;
      }
    }
  }
  iVar1 = local_24;
  FUN_0041c607(local_24,iVar5);
  FUN_0041c607(iVar1,iVar2);
  iVar2 = local_18;
LAB_00470148:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_34);
  }
  return iVar2;
}

