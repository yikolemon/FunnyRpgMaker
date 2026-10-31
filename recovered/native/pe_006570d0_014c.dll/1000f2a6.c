/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000f2a6 */

undefined4
FUN_1000f2a6(undefined4 param_1,undefined4 param_2,byte param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,uint param_7,undefined4 param_8,int param_9)

{
  char *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *****pppppuVar4;
  undefined4 ****local_40;
  int *local_3c;
  undefined4 local_30;
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
  local_18 = &LAB_10012af0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (((param_6 & 0xff) == 0) || ((param_6 & 0xff) == 0x73)) {
    if ((char)param_7 == '\x01') {
      param_7 = param_7 & 0xffffff00;
      if (param_9 == 0) {
        local_20 = (undefined1 *)&local_40;
        local_3c = (int *)FUN_1022bce0(1);
      }
      else {
        local_3c = *(int **)(param_9 + 4);
        local_20 = (undefined1 *)&local_40;
        (**(code **)(*local_3c + 4))();
      }
      local_14 = 0;
      piVar2 = (int *)FUN_1000c417(&local_40);
      local_14 = 0xffffffff;
      if (local_3c != (int *)0x0) {
        puVar3 = (undefined4 *)(**(code **)(*local_3c + 8))();
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
      }
      if (param_3 == 0) {
        local_23 = 1;
        local_14 = 2;
        (**(code **)(*piVar2 + 0x18))(&local_40);
      }
      else {
        (**(code **)(*piVar2 + 0x1c))(&local_40);
        local_24 = 0;
      }
      pppppuVar4 = &local_40;
      if (0xf < local_2c) {
        pppppuVar4 = (undefined4 *****)local_40;
      }
      local_25 = param_3 ^ 1;
      local_14 = 3;
      local_22 = local_25;
      local_21 = local_25;
      FUN_1000cba3(param_1,param_2,pppppuVar4,local_30,&param_4,param_9);
      local_21 = local_25;
      local_22 = local_25;
      local_14 = 0xffffffff;
      if (param_3 == 0) {
        FUN_10001fee();
      }
      local_24 = param_3;
      if (param_3 != 0) {
        FUN_10001fee();
      }
    }
    else {
      pcVar1 = "Set to false";
      if (param_3 != 0) {
        pcVar1 = "Set to true";
      }
      local_20 = (undefined1 *)&local_40;
      FUN_1000f51f(param_1,param_2,pcVar1 + 7,&param_4,param_9);
    }
    ExceptionList = local_1c;
  }
  else {
    FUN_1000c7c8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    ExceptionList = local_1c;
  }
  return param_1;
}

