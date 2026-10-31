/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1e26 */

undefined4 * __thiscall FUN_100f1e26(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined1 local_38 [12];
  int *local_2c;
  int local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_68;
  local_18 = &LAB_100f5500;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  local_2c = param_1 + 2;
  param_1[2] = 0;
  local_14 = 6;
  local_24 = param_1;
  FUN_100f21e2();
  local_14 = 7;
  FUN_100f22c6(&local_68);
  local_14 = 0xc;
  FUN_100f2f62(&local_68);
  local_14 = 0xffffffff;
  FUN_100ef9e6();
  local_60 = *(undefined4 *)(param_2 + 1);
  local_68 = *param_2;
  local_4c = *(undefined8 *)((int)param_2 + 0x1c);
  local_5c = *(undefined4 *)((int)param_2 + 0xc);
  uStack_58 = *(undefined4 *)(param_2 + 2);
  uStack_54 = *(undefined4 *)((int)param_2 + 0x14);
  uStack_50 = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((int)param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 4) = 0xf;
  *(undefined1 *)((int)param_2 + 0xc) = 0;
  local_14 = 8;
  FUN_100f233e(local_38);
  local_14 = 10;
  FUN_100f262a(&local_68);
  iVar2 = local_28;
  local_14 = 0xb;
  local_28 = 0;
  puVar1 = (undefined4 *)*local_2c;
  *local_2c = iVar2;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  local_14 = 0xffffffff;
  FUN_100f072e();
  local_14 = 0xffffffff;
  FUN_100f23d8();
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_100f23d8();
  ExceptionList = local_1c;
  return local_24;
}

