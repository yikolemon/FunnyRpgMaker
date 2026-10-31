/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041c799 */

int __cdecl FUN_0041c799(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  iVar2 = *param_1;
  local_18 = FUN_0041c638(param_1);
  iVar3 = local_18;
  if (local_18 == 0) {
    uVar6 = (uint)*(ushort *)((int)param_1 + 0x16) + param_2 +
            (uint)*(ushort *)((int)param_1 + 0x3a);
    uVar5 = param_1[1];
    local_1c = iVar2;
    if (uVar5 < uVar6) {
      iVar3 = 10;
      if (uVar6 < 0x10000) {
        uVar1 = (uVar5 >> 1) + uVar5;
        if (uVar1 < uVar6) {
          uVar1 = uVar6;
        }
        local_20 = 0xffff;
        if (uVar1 + 7 < 0x10000) {
          local_20 = uVar1 + 7 & 0xfffffff8;
        }
        iVar2 = FUN_0041c6b3(iVar2,8,uVar5,local_20,param_1[6],&local_18);
        param_1[6] = iVar2;
        iVar3 = local_18;
        if (local_18 == 0) {
          iVar2 = FUN_0041c6b3(local_1c,1,uVar5,local_20,param_1[7],&local_18);
          param_1[7] = iVar2;
          iVar3 = local_18;
          if (local_18 == 0) {
            if ((char)param_1[4] != '\0') {
              iVar2 = FUN_0041c6b3(local_1c,8,uVar5 * 2,local_20 * 2,param_1[10],&local_18);
              param_1[10] = iVar2;
              iVar3 = local_18;
              if (local_18 != 0) goto LAB_0041c7c4;
              iVar3 = local_20 * 8;
              FUN_004878c0((uint *)(iVar2 + local_20 * 8),(uint *)(iVar2 + uVar5 * 8),uVar5 * 8);
              param_1[0xb] = iVar3 + param_1[10];
            }
            param_1[1] = local_20;
            goto LAB_0041c8e9;
          }
        }
      }
    }
    else {
LAB_0041c8e9:
      iVar3 = FUN_0041c638(param_1);
      if (iVar3 == 0) {
        uVar1 = param_1[2];
        uVar4 = (uint)*(ushort *)(param_1 + 5) + param_3 + (uint)*(ushort *)(param_1 + 0xe);
        if (uVar4 <= uVar1) {
          iVar3 = 0;
          if (uVar6 <= uVar5) goto LAB_0041c7cd;
LAB_0041c975:
          FUN_0041c73c((int)param_1);
          iVar3 = 0;
          goto LAB_0041c7cd;
        }
        iVar3 = 10;
        if (uVar4 < 0x10000) {
          uVar5 = (uVar1 >> 1) + uVar1;
          if (uVar5 < uVar4) {
            uVar5 = uVar4;
          }
          uVar6 = 0xffff;
          if (uVar5 + 3 < 0x10000) {
            uVar6 = uVar5 + 3 & 0xfffffffc;
          }
          iVar2 = FUN_0041c6b3(local_1c,2,uVar1,uVar6,param_1[8],&local_18);
          param_1[8] = iVar2;
          iVar3 = local_18;
          if (local_18 == 0) {
            param_1[2] = uVar6;
            goto LAB_0041c975;
          }
        }
      }
    }
  }
LAB_0041c7c4:
  FUN_0041c59d(param_1);
LAB_0041c7cd:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_20);
  }
  return iVar3;
}

