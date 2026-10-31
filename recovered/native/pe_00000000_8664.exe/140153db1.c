/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140153db1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140153db1(undefined4 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                 int param_5,int param_6,undefined8 *param_7,longlong param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined2 local_c0;
  undefined2 local_b8;
  undefined1 local_a9;
  longlong local_a8;
  uint local_9c;
  longlong local_98;
  undefined1 local_90 [72];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  local_98 = 0;
  lVar8 = *(longlong *)(param_8 + 0x2f8);
  bVar9 = (param_6 - 0x3000U & 0xffffefff) == 0;
  local_c8 = 0x60;
  if (bVar9) {
    local_c8 = 0x201;
  }
  local_b8 = 0;
  local_c0 = 0;
  iVar4 = FUN_140150fb9(local_90,param_6,param_1,*param_7);
  if (iVar4 != 0) goto LAB_140153e4b;
  local_a8 = lVar8;
  FUN_1401c5830(param_1 + 6,0,0x9c);
  param_1[8] = 0x32ff9c;
  *(undefined8 *)(param_1 + 10) = 0x1000000000002;
  param_1[0xe] = 0x10000;
  param_1[0x26] = 0x2210;
  uVar3 = _UNK_140e9e52c;
  uVar2 = _UNK_140e9e528;
  uVar5 = _UNK_140e9e524;
  *param_1 = _DAT_140e9e520;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = 0xffff0000ffff;
  *(undefined8 *)(param_1 + 0x1f) = 0xffff0000ffff;
  uVar5 = 0x30;
  if (bVar9) {
    uVar5 = 0x201;
  }
  param_1[0x21] = 0xffff;
  param_1[0x2a] = 0xffff;
  param_1[0x2d] = uVar5;
  local_a9 = bVar9;
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar4 = FUN_14012d612(param_4,*(undefined4 *)(param_2 + 0x18));
    if ((iVar4 != 0) ||
       (iVar4 = FUN_14012dc0a(param_4,*(undefined4 *)(param_2 + 0x1c),&local_98), iVar4 != 0))
    goto LAB_140153e4b;
    puVar7 = (uint *)(param_2 + 0x1c);
LAB_140153f2e:
    lVar8 = (ulonglong)*puVar7 + local_98;
    if (local_98 == 0) {
      lVar8 = 0;
    }
    iVar4 = FUN_140151074(local_90,local_98,lVar8);
  }
  else {
    puVar7 = &local_9c;
    iVar4 = FUN_140152d24(param_2,param_3,&local_98,puVar7);
    if (iVar4 == 0) goto LAB_140153f2e;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    FUN_14012dd2b(param_4,&local_98);
  }
  else {
    FUN_140152d14(param_2,&local_98);
  }
  if (iVar4 != 0) goto LAB_140153e4b;
  if (param_1[0x20] == 0xffff) {
    iVar4 = FUN_140150a96(param_7,param_1,0,0);
    lVar8 = local_a8;
    if (iVar4 != 0) goto LAB_140153e4b;
    uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),local_a9);
    if ((param_6 != 0x3000) && (param_6 != 0x4000)) {
      iVar4 = *(int *)(*(longlong *)(param_8 + 0xd0) + 0x5c);
      if (iVar4 == -1) {
        lVar1 = *(longlong *)(param_8 + 0x90);
        iVar4 = *(int *)(lVar1 + 0x60);
        param_1[0xb0] = iVar4;
        if (iVar4 != 0) {
          do {
            iVar4 = (**(code **)(lVar8 + 0x28))(iVar4);
            *(int *)(lVar1 + 0x60) = iVar4;
          } while (iVar4 < 0);
        }
      }
      else {
        param_1[0xb0] = iVar4;
        if (*(int *)(*(longlong *)(param_8 + 0xd0) + 0x5c) != 0) {
          do {
            uVar5 = (**(code **)(lVar8 + 0x28))();
            *(undefined4 *)(*(longlong *)(param_8 + 0xd0) + 0x5c) = uVar5;
          } while (*(int *)(*(longlong *)(param_8 + 0xd0) + 0x5c) < 0);
        }
      }
      if (param_1[0xb0] == 0) {
        param_1[0xb0] = param_1[0x84];
      }
    }
    if (param_1[0x85] != 0) {
      iVar4 = FUN_14012d612(param_4,param_1[0x85] + param_5 + param_1[0x1c]);
      if (iVar4 == 0) {
        iVar4 = FUN_140153a04(param_1 + 0xa2,param_4,1,uVar6 & 0xffffffff);
        if (iVar4 == 0) {
          iVar4 = FUN_140153ba0(param_1 + 0xa2,param_1 + 0xae,0,0);
        }
      }
      goto LAB_140153e4b;
    }
  }
  iVar4 = 0;
LAB_140153e4b:
  FUN_140151352(local_90);
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_e8);
  }
  return iVar4;
}

