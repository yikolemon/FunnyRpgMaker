/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c9d58 */

int FUN_1801c9d58(undefined8 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar6 = *param_1;
  local_4c = FUN_1801c9ba0();
  iVar2 = local_4c;
  if (local_4c == 0) {
    uVar8 = param_2 + (uint)*(ushort *)((longlong)param_1 + 0x1a) +
            (uint)*(ushort *)((longlong)param_1 + 0x62);
    uVar3 = *(uint *)(param_1 + 1);
    if (uVar3 < uVar8) {
      iVar2 = 10;
      if (uVar8 < 0x10000) {
        uVar1 = (uVar3 >> 1) + uVar3;
        if (uVar1 < uVar8) {
          uVar1 = uVar8;
        }
        uVar7 = 0xffff;
        if (uVar1 + 7 < 0x10000) {
          uVar7 = uVar1 + 7 & 0xfffffff8;
        }
        local_68 = param_1[4];
        local_60 = &local_4c;
        uVar4 = FUN_1801c9c3f(uVar6,8,uVar3,uVar7);
        param_1[4] = uVar4;
        iVar2 = local_4c;
        if (local_4c == 0) {
          local_68 = param_1[5];
          local_60 = &local_4c;
          uVar4 = FUN_1801c9c3f(uVar6,1,uVar3,uVar7);
          param_1[5] = uVar4;
          iVar2 = local_4c;
          if (local_4c == 0) {
            if (*(char *)((longlong)param_1 + 0x14) != '\0') {
              local_68 = param_1[8];
              local_60 = &local_4c;
              lVar5 = FUN_1801c9c3f(uVar6,8,uVar3 * 2,uVar7 * 2);
              param_1[8] = lVar5;
              iVar2 = local_4c;
              if (local_4c != 0) goto LAB_1801c9d92;
              FUN_1802a82f0(lVar5 + (ulonglong)uVar7 * 8,lVar5 + (ulonglong)uVar3 * 8,
                            (ulonglong)uVar3 * 8);
              param_1[9] = (ulonglong)uVar7 * 8 + param_1[8];
            }
            *(uint *)(param_1 + 1) = uVar7;
            goto LAB_1801c9ede;
          }
        }
      }
    }
    else {
LAB_1801c9ede:
      iVar2 = FUN_1801c9ba0(param_1);
      if (iVar2 == 0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        uVar7 = param_3 + (uint)*(ushort *)(param_1 + 3) + (uint)*(ushort *)(param_1 + 0xc);
        if (uVar7 <= uVar1) {
          iVar2 = 0;
          if (uVar8 <= uVar3) goto LAB_1801c9d9a;
LAB_1801c9f7b:
          FUN_1801c9ce7(param_1);
          iVar2 = 0;
          goto LAB_1801c9d9a;
        }
        iVar2 = 10;
        if (uVar7 < 0x10000) {
          uVar3 = (uVar1 >> 1) + uVar1;
          if (uVar3 < uVar7) {
            uVar3 = uVar7;
          }
          uVar8 = 0xffff;
          if (uVar3 + 3 < 0x10000) {
            uVar8 = uVar3 + 3 & 0xfffffffc;
          }
          local_68 = param_1[6];
          local_60 = &local_4c;
          uVar6 = FUN_1801c9c3f(uVar6,2,uVar1,uVar8);
          param_1[6] = uVar6;
          iVar2 = local_4c;
          if (local_4c == 0) {
            *(uint *)((longlong)param_1 + 0xc) = uVar8;
            goto LAB_1801c9f7b;
          }
        }
      }
    }
  }
LAB_1801c9d92:
  FUN_1801c9ae8(param_1);
LAB_1801c9d9a:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar2;
}

