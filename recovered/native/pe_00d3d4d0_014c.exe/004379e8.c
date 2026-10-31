/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004379e8 */

void __fastcall FUN_004379e8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_38;
  ushort local_32;
  int local_30;
  int *local_2c;
  uint local_28;
  int local_24;
  ushort *local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_38;
  iVar8 = 0;
  local_18 = 0;
  iVar2 = *param_1;
  iVar4 = *(int *)(iVar2 + 100);
  param_1[5] = 0;
  param_1[7] = 0;
  local_1c = 0;
  local_2c = param_1;
  iVar1 = FUN_0041f2a2(iVar2);
  if (iVar1 == 0) {
    local_38 = iVar4;
    iVar1 = FUN_0041e773(iVar4,local_1c,&local_18);
    iVar4 = local_38;
    if ((local_18 == 0) &&
       (iVar2 = FUN_0041f2a2(iVar2), iVar4 = local_38, 9 < local_1c && iVar2 == 0)) {
      uVar7 = (uint)(ushort)(*(ushort *)(iVar1 + 8) << 8 | *(ushort *)(iVar1 + 8) >> 8);
      if (uVar7 + 2 <= local_1c) {
        uVar5 = *(ushort *)(iVar1 + uVar7) << 8 | *(ushort *)(iVar1 + uVar7) >> 8;
        uVar6 = (uint)uVar5;
        if ((uVar7 + 2 + uVar6 * 2 <= local_1c) &&
           (local_32 = uVar5, local_30 = iVar1, iVar8 = FUN_0041c6b3(local_38,4,0,uVar6,0,&local_18)
           , iVar1 = local_30, local_18 == 0)) {
          if (local_32 != 0) {
            local_38 = local_30 + uVar7;
            local_20 = (ushort *)(local_1c + local_30);
            local_24 = local_38 + 2;
            local_28 = local_38 + uVar6 * 2 + 2;
            iVar2 = 0;
            do {
              uVar5 = *(ushort *)(local_38 + 2 + iVar2);
              uVar6 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
              uVar3 = FUN_00437fd2((ushort *)(local_38 + uVar6),local_20);
              if ((char)uVar3 != '\0') {
                *(uint *)(iVar8 + iVar2 * 2) = uVar6 + uVar7;
              }
              iVar4 = local_24 + iVar2;
              iVar2 = iVar2 + 2;
            } while (iVar4 + 2U < local_28);
          }
          local_2c[5] = local_30;
          *(ushort *)(local_2c + 6) = local_32;
          local_2c[7] = iVar8;
          goto LAB_00437abf;
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  *(undefined2 *)(local_2c + 6) = 0;
  FUN_0041c607(iVar4,iVar1);
  FUN_0041c607(iVar4,iVar8);
LAB_00437abf:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_38);
  }
  return;
}

