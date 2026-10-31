/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e0278 */

void __fastcall FUN_101e0278(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
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
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_38;
  iVar8 = 0;
  local_18 = 0;
  iVar3 = *param_1;
  iVar4 = *(int *)(iVar3 + 100);
  param_1[5] = 0;
  param_1[7] = 0;
  local_1c = 0;
  local_2c = param_1;
  iVar2 = FUN_101c2d25(iVar3,0x47535542,0,0,&local_1c);
  if (iVar2 == 0) {
    local_38 = iVar4;
    iVar2 = FUN_101c21f6(iVar4,local_1c,&local_18);
    iVar4 = local_38;
    if ((local_18 == 0) &&
       (iVar3 = FUN_101c2d25(iVar3,0x47535542,0,iVar2,&local_1c), iVar4 = local_38,
       9 < local_1c && iVar3 == 0)) {
      uVar7 = (uint)(ushort)(*(ushort *)(iVar2 + 8) << 8 | *(ushort *)(iVar2 + 8) >> 8);
      if (uVar7 + 2 <= local_1c) {
        uVar5 = *(ushort *)(iVar2 + uVar7) << 8 | *(ushort *)(iVar2 + uVar7) >> 8;
        uVar6 = (uint)uVar5;
        if ((uVar7 + 2 + uVar6 * 2 <= local_1c) &&
           (local_32 = uVar5, local_30 = iVar2, iVar8 = FUN_101c00c3(local_38,4,0,uVar6,0,&local_18)
           , iVar2 = local_30, local_18 == 0)) {
          if (local_32 != 0) {
            local_38 = local_30 + uVar7;
            local_20 = local_1c + local_30;
            local_24 = local_38 + 2;
            local_28 = local_38 + uVar6 * 2 + 2;
            iVar3 = 0;
            do {
              uVar5 = *(ushort *)(local_38 + 2 + iVar3);
              cVar1 = FUN_101e0862();
              if (cVar1 != '\0') {
                *(uint *)(iVar8 + iVar3 * 2) = (ushort)(uVar5 << 8 | uVar5 >> 8) + uVar7;
              }
              iVar4 = local_24 + iVar3;
              iVar3 = iVar3 + 2;
            } while (iVar4 + 2U < local_28);
          }
          local_2c[5] = local_30;
          *(ushort *)(local_2c + 6) = local_32;
          local_2c[7] = iVar8;
          goto LAB_101e034f;
        }
      }
    }
  }
  else {
    iVar2 = 0;
  }
  *(undefined2 *)(local_2c + 6) = 0;
  FUN_101c0017(iVar4,iVar2);
  FUN_101c0017(iVar4,iVar8);
LAB_101e034f:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

