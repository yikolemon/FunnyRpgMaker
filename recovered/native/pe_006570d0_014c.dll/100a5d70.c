/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a5d70 */

undefined8 * __thiscall FUN_100a5d70(undefined8 *param_1,undefined8 *param_2)

{
  int *unaff_FS_OFFSET;
  undefined8 *local_38;
  int local_34;
  undefined8 *local_30;
  undefined8 *local_2c;
  int local_28;
  undefined8 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4240;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = *param_2;
  local_38 = param_1 + 1;
  local_24 = param_1;
  FUN_10003728(param_2 + 1);
  local_14 = 0;
  *(undefined4 *)(local_24 + 4) = *(undefined4 *)(param_2 + 4);
  local_34 = (int)local_24 + 0x24;
  *(undefined4 *)((int)local_24 + 0x24) = 0;
  *(undefined4 *)(local_24 + 5) = 0;
  *(undefined4 *)((int)local_24 + 0x2c) = 0;
  FUN_10044618(*(int *)(param_2 + 5) - *(int *)((int)param_2 + 0x24),(int)param_2 + 0x24,param_2 + 5
              );
  local_14 = 1;
  local_30 = local_24 + 6;
  *(undefined4 *)(local_24 + 6) = 0;
  *(undefined4 *)((int)local_24 + 0x34) = 0;
  *(undefined4 *)(local_24 + 7) = 0;
  FUN_10044618(*(int *)((int)param_2 + 0x34) - *(int *)(param_2 + 6),param_2 + 6,(int)param_2 + 0x34
              );
  local_14 = 2;
  *(undefined2 *)((int)local_24 + 0x3c) = *(undefined2 *)((int)param_2 + 0x3c);
  local_2c = local_24 + 8;
  *(undefined4 *)(local_24 + 8) = 0;
  *(undefined4 *)((int)local_24 + 0x44) = 0;
  *(undefined4 *)(local_24 + 9) = 0;
  FUN_100a5f40(*(int *)((int)param_2 + 0x44) - *(int *)(param_2 + 8) >> 4,param_2 + 8,
               (int)param_2 + 0x44);
  local_14 = 3;
  local_28 = (int)local_24 + 0x4c;
  *(undefined4 *)((int)local_24 + 0x4c) = 0;
  *(undefined4 *)(local_24 + 10) = 0;
  *(undefined4 *)((int)local_24 + 0x54) = 0;
  FUN_10042356(*(int *)(param_2 + 10) - *(int *)((int)param_2 + 0x4c) >> 3,(int)param_2 + 0x4c,
               param_2 + 10);
  local_24[0xb] = param_2[0xb];
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

