/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4ab0 */

void __fastcall FUN_100f4ab0(int *param_1)

{
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38 [8];
  char local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f5730;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = param_1;
  FUN_1005c2a2(&local_50,*(undefined4 *)param_1[1],*(undefined4 *)param_1[2],
               *(undefined4 *)param_1[3],*(undefined4 *)param_1[4]);
  local_14 = 1;
  local_28 = (undefined4 *)*local_24;
  *(undefined8 *)(local_28 + 4) = local_40;
  *local_28 = local_50;
  local_28[1] = uStack_4c;
  local_28[2] = uStack_48;
  local_28[3] = uStack_44;
  if (local_30 == '\x01') {
    FUN_100686dc(local_38);
  }
  else {
    FUN_100f4ba6();
  }
  local_28[9] = local_2c;
  local_14 = 0xffffffff;
  FUN_100683f4();
  *(undefined1 *)local_24[5] = 1;
  ExceptionList = local_1c;
  return;
}

