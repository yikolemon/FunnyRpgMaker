/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001c730 */

int FUN_14001c730(longlong *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  lVar5 = *param_1;
  local_4c = FUN_14001c578(param_1);
  iVar2 = local_4c;
  if (local_4c == 0) {
    uVar7 = param_2 + (uint)*(ushort *)((longlong)param_1 + 0x1a) +
            (uint)*(ushort *)((longlong)param_1 + 0x62);
    uVar3 = *(uint *)(param_1 + 1);
    if (uVar3 < uVar7) {
      iVar2 = 10;
      if (uVar7 < 0x10000) {
        uVar1 = (uVar3 >> 1) + uVar3;
        if (uVar1 < uVar7) {
          uVar1 = uVar7;
        }
        uVar6 = 0xffff;
        if (uVar1 + 7 < 0x10000) {
          uVar6 = uVar1 + 7 & 0xfffffff8;
        }
        lVar4 = FUN_14001c617(lVar5,8,uVar3,uVar6,param_1[4],&local_4c);
        param_1[4] = lVar4;
        iVar2 = local_4c;
        if (local_4c == 0) {
          lVar4 = FUN_14001c617(lVar5,1,uVar3,uVar6,param_1[5],&local_4c);
          param_1[5] = lVar4;
          iVar2 = local_4c;
          if (local_4c == 0) {
            if (*(char *)((longlong)param_1 + 0x14) != '\0') {
              lVar4 = FUN_14001c617(lVar5,8,uVar3 * 2,uVar6 * 2,param_1[8],&local_4c);
              param_1[8] = lVar4;
              iVar2 = local_4c;
              if (local_4c != 0) goto LAB_14001c76a;
              FUN_1400b3550((undefined8 *)(lVar4 + (ulonglong)uVar6 * 8),
                            (undefined8 *)(lVar4 + (ulonglong)uVar3 * 8),(ulonglong)uVar3 * 8);
              param_1[9] = (ulonglong)uVar6 * 8 + param_1[8];
            }
            *(uint *)(param_1 + 1) = uVar6;
            goto LAB_14001c8b6;
          }
        }
      }
    }
    else {
LAB_14001c8b6:
      iVar2 = FUN_14001c578(param_1);
      if (iVar2 == 0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        uVar6 = param_3 + (uint)*(ushort *)(param_1 + 3) + (uint)*(ushort *)(param_1 + 0xc);
        if (uVar6 <= uVar1) {
          iVar2 = 0;
          if (uVar7 <= uVar3) goto LAB_14001c772;
LAB_14001c953:
          FUN_14001c6bf((longlong)param_1);
          iVar2 = 0;
          goto LAB_14001c772;
        }
        iVar2 = 10;
        if (uVar6 < 0x10000) {
          uVar3 = (uVar1 >> 1) + uVar1;
          if (uVar3 < uVar6) {
            uVar3 = uVar6;
          }
          uVar7 = 0xffff;
          if (uVar3 + 3 < 0x10000) {
            uVar7 = uVar3 + 3 & 0xfffffffc;
          }
          lVar5 = FUN_14001c617(lVar5,2,uVar1,uVar7,param_1[6],&local_4c);
          param_1[6] = lVar5;
          iVar2 = local_4c;
          if (local_4c == 0) {
            *(uint *)((longlong)param_1 + 0xc) = uVar7;
            goto LAB_14001c953;
          }
        }
      }
    }
  }
LAB_14001c76a:
  FUN_14001c4c0(param_1);
LAB_14001c772:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return iVar2;
}

