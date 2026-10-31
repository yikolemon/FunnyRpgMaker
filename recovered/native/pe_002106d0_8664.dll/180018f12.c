/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018f12 */

undefined8 *
FUN_180018f12(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined4 param_6,undefined4 param_7,uint param_8,longlong param_9)

{
  undefined2 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_48;
  longlong local_40 [2];
  
  local_40[1] = 0xfffffffffffffffe;
  FUN_18001987e(param_1 + 1,local_40,param_3,param_4,param_1 + 1);
  FUN_18001987e(param_1 + 8,local_40);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x19] = param_4;
  param_1[0x1a] = param_2;
  param_1[0x1b] = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_7;
  *(uint *)((longlong)param_1 + 0xe4) = param_8;
  *(undefined4 *)(param_1 + 0x1d) = param_6;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)((longlong)param_1 + 0xef) = 0;
  *(byte *)((longlong)param_1 + 0xf3) =
       (param_8 & 0x10) == 0 & (byte)((*(uint *)(param_5 + 0xc) & 8) >> 3);
  uVar2 = *(uint *)(param_5 + 0xc);
  if ((uVar2 >> 8 & 1) != 0) {
    uVar1 = FUN_180019924(param_1,CONCAT71((uint7)(uint3)((uint)param_6 >> 8),0x57));
    *(undefined2 *)((longlong)param_1 + 0xec) = uVar1;
    uVar2 = *(uint *)(param_5 + 0xc);
  }
  if ((uVar2 >> 9 & 1) != 0) {
    uVar1 = FUN_180019924(param_1,0x53);
    *(undefined2 *)((longlong)param_1 + 0xee) = uVar1;
    uVar2 = *(uint *)(param_5 + 0xc);
  }
  if ((uVar2 >> 10 & 1) != 0) {
    uVar1 = FUN_180019924(param_1,0x44);
    *(undefined2 *)(param_1 + 0x1e) = uVar1;
  }
  uVar3 = FUN_18001998a(param_1,param_3 - param_2);
  param_1[0x17] = uVar3;
  uVar3 = FUN_1800199be(param_1,param_3 - param_2);
  *param_1 = uVar3;
  param_1[0x18] = *(undefined8 *)(*(longlong *)(param_5 + 0x10) + 0x10);
  local_40[0] = param_9;
  local_48 = 0x1000;
  FUN_1800199e8(param_1 + 0xf,local_40,&local_48,*(undefined4 *)(param_5 + 0x24));
  if (1 < *(uint *)(param_1 + 0x1d)) {
    FUN_180019af4(param_1 + 2,local_40,&local_48,*(uint *)(param_1 + 0x1d) - 1);
    if (*(char *)((longlong)param_1 + 0xf3) == '\x01') {
      FUN_180019af4(param_1 + 9,local_40,&local_48,*(int *)(param_1 + 0x1d) + -1);
    }
    FUN_18001a000(param_1 + 5,local_40,&local_48,
                  (ulonglong)(*(int *)(param_1 + 0x1d) - 1) + 0x3f >> 6);
    if (*(char *)((longlong)param_1 + 0xf3) == '\x01') {
      FUN_18001a000(param_1 + 0xc,local_40,&local_48,
                    (ulonglong)(*(int *)(param_1 + 0x1d) - 1) + 0x3f >> 6);
    }
  }
  uVar4 = (ulonglong)((uint)local_40[0] & 7);
  uVar5 = 8 - uVar4;
  if (uVar4 == 0) {
    uVar5 = 0;
  }
  if ((local_40[0] != 0 && uVar5 <= local_48) && 0x1f < local_48 - uVar5) {
    local_40[0] = local_40[0] + uVar5;
    param_1[0x12] = local_40[0];
    param_1[0x13] = local_40[0];
    param_1[0x14] = (local_48 - uVar5 & 0xffffffffffffffe0) + local_40[0];
  }
  if ((*(uint *)(param_1 + 0x1c) & 0x3e) != 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffefff;
  }
  return param_1;
}

