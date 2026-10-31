/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c01a9 */

int FUN_101c01a9(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  uVar2 = *param_1;
  local_18 = FUN_101c0048(param_1);
  iVar4 = local_18;
  if (local_18 == 0) {
    uVar7 = (uint)*(ushort *)((int)param_1 + 0x16) + param_2 +
            (uint)*(ushort *)((int)param_1 + 0x3a);
    uVar6 = param_1[1];
    local_1c = uVar2;
    if (uVar6 < uVar7) {
      iVar4 = 10;
      if (uVar7 < 0x10000) {
        uVar1 = (uVar6 >> 1) + uVar6;
        if (uVar1 < uVar7) {
          uVar1 = uVar7;
        }
        local_20 = 0xffff;
        if (uVar1 + 7 < 0x10000) {
          local_20 = uVar1 + 7 & 0xfffffff8;
        }
        uVar2 = FUN_101c00c3(uVar2,8,uVar6,local_20,param_1[6],&local_18);
        param_1[6] = uVar2;
        iVar4 = local_18;
        if (local_18 == 0) {
          uVar2 = FUN_101c00c3(local_1c,1,uVar6,local_20,param_1[7],&local_18);
          param_1[7] = uVar2;
          iVar4 = local_18;
          if (local_18 == 0) {
            if (*(char *)(param_1 + 4) != '\0') {
              iVar3 = FUN_101c00c3(local_1c,8,uVar6 * 2,local_20 * 2,param_1[10],&local_18);
              param_1[10] = iVar3;
              iVar4 = local_18;
              if (local_18 != 0) goto LAB_101c01d4;
              iVar4 = local_20 * 8;
              FUN_1025b2d0(iVar3 + local_20 * 8,iVar3 + uVar6 * 8,uVar6 * 8);
              param_1[0xb] = iVar4 + param_1[10];
            }
            param_1[1] = local_20;
            goto LAB_101c02f9;
          }
        }
      }
    }
    else {
LAB_101c02f9:
      iVar4 = FUN_101c0048(param_1);
      if (iVar4 == 0) {
        uVar1 = param_1[2];
        uVar5 = (uint)*(ushort *)(param_1 + 5) + param_3 + (uint)*(ushort *)(param_1 + 0xe);
        if (uVar5 <= uVar1) {
          iVar4 = 0;
          if (uVar7 <= uVar6) goto LAB_101c01dd;
LAB_101c0385:
          FUN_101c014c();
          iVar4 = 0;
          goto LAB_101c01dd;
        }
        iVar4 = 10;
        if (uVar5 < 0x10000) {
          uVar6 = (uVar1 >> 1) + uVar1;
          if (uVar6 < uVar5) {
            uVar6 = uVar5;
          }
          uVar7 = 0xffff;
          if (uVar6 + 3 < 0x10000) {
            uVar7 = uVar6 + 3 & 0xfffffffc;
          }
          uVar2 = FUN_101c00c3(local_1c,2,uVar1,uVar7,param_1[8],&local_18);
          param_1[8] = uVar2;
          iVar4 = local_18;
          if (local_18 == 0) {
            param_1[2] = uVar7;
            goto LAB_101c0385;
          }
        }
      }
    }
  }
LAB_101c01d4:
  FUN_101bffad(param_1);
LAB_101c01dd:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar4;
}

