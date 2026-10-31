/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008ed2b */

int * FUN_1008ed2b(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
                  uint param_7,undefined4 *param_8,undefined4 *param_9)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_100c3840;
  local_1c = ExceptionList;
  local_28 = param_1;
  local_14 = 0;
  iVar2 = param_8[4];
  ExceptionList = &local_1c;
  if ((iVar2 == 0) || (param_6 == 0)) {
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (int)param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    *(ulonglong *)(param_1 + 4) = CONCAT44(param_7,param_6);
    local_20 = (undefined1 *)&local_28;
  }
  else {
    iVar3 = 0;
    while( true ) {
      puVar1 = param_8;
      if (7 < (uint)param_8[5]) {
        puVar1 = (undefined4 *)*param_8;
      }
      puVar4 = &param_2;
      if (7 < param_7) {
        puVar4 = param_2;
      }
      local_24 = param_6;
      iVar2 = FUN_1008ee93(puVar4,param_6,iVar3,puVar1,iVar2);
      if (iVar2 == -1) break;
      puVar1 = param_9;
      if (7 < (uint)param_9[5]) {
        puVar1 = (undefined4 *)*param_9;
      }
      local_24 = iVar2;
      FUN_1008eefa(iVar2,param_8[4],puVar1,param_9[4]);
      iVar3 = local_24 + param_9[4];
      iVar2 = param_8[4];
    }
    local_28[4] = 0;
    local_28[5] = 0;
    *local_28 = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    *local_28 = (int)param_2;
    local_28[1] = param_3;
    local_28[2] = param_4;
    local_28[3] = param_5;
    *(ulonglong *)(local_28 + 4) = CONCAT44(param_7,param_6);
  }
  local_14 = 0xffffffff;
  param_7 = 7;
  param_6 = 0;
  param_2 = (undefined4 *)((uint)param_2 & 0xffff0000);
  FUN_10001134();
  ExceptionList = local_1c;
  return param_1;
}

