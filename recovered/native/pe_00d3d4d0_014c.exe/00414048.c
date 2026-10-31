/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00414048 */

undefined4 * __cdecl
FUN_00414048(undefined4 *param_1,undefined4 *param_2,byte param_3,int param_4,undefined4 param_5,
            uint param_6,uint param_7,undefined4 param_8,int param_9)

{
  int *piVar1;
  undefined4 *puVar2;
  wchar_t *pwVar3;
  ushort ***pppuVar4;
  ushort **local_40;
  int *local_3c;
  int local_30;
  uint local_2c;
  byte local_25;
  byte local_24;
  undefined1 local_23;
  byte local_22;
  byte local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_004182a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (((param_6 & 0xff) == 0) || ((param_6 & 0xff) == 0x73)) {
    if ((char)param_7 == '\x01') {
      param_7 = param_7 & 0xffffff00;
      if (param_9 == 0) {
        local_20 = (undefined1 *)&local_40;
        local_3c = FUN_0047f650('\x01');
      }
      else {
        local_3c = *(int **)(param_9 + 4);
        local_20 = (undefined1 *)&local_40;
        (**(code **)(*local_3c + 4))();
      }
      local_14 = 0;
      piVar1 = FUN_0040a572(&local_40);
      local_14 = 0xffffffff;
      if (local_3c != (int *)0x0) {
        puVar2 = (undefined4 *)(**(code **)(*local_3c + 8))();
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
      }
      if (param_3 == 0) {
        local_23 = 1;
        local_14 = 2;
        (**(code **)(*piVar1 + 0x18))(&local_40);
      }
      else {
        (**(code **)(*piVar1 + 0x1c))(&local_40);
        local_24 = 0;
      }
      pppuVar4 = &local_40;
      if (7 < local_2c) {
        pppuVar4 = (ushort ***)local_40;
      }
      local_25 = param_3 ^ 1;
      local_14 = 3;
      local_22 = local_25;
      local_21 = local_25;
      FUN_004123b5(param_1,param_2,(ushort *)pppuVar4,local_30,&param_4);
      local_21 = local_25;
      local_22 = local_25;
      local_14 = 0xffffffff;
      if (param_3 == 0) {
        FUN_0040226e(&local_40);
      }
      local_24 = param_3;
      if (param_3 != 0) {
        FUN_0040226e(&local_40);
      }
    }
    else {
      pwVar3 = L"false";
      if (param_3 != 0) {
        pwVar3 = L"true";
      }
      local_20 = (undefined1 *)&local_40;
      FUN_00414683(param_1,param_2,(undefined1 (*) [32])pwVar3,&param_4);
    }
    ExceptionList = local_1c;
  }
  else {
    FUN_004142c1(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    ExceptionList = local_1c;
  }
  return param_1;
}

