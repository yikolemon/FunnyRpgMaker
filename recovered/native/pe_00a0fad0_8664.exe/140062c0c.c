/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140062c0c */

undefined8 * FUN_140062c0c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = std::ctype<wchar_t>::vftable;
  FUN_1400da3e0(&local_40);
  *(undefined4 *)(param_1 + 4) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_2c;
  *(undefined4 *)(param_1 + 5) = uStack_28;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_24;
  *(undefined4 *)(param_1 + 2) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_3c;
  *(undefined4 *)(param_1 + 3) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_34;
  FUN_1400da4c0(&local_40);
  *(ulonglong *)((longlong)param_1 + 0x4c) = CONCAT44(uStack_20,uStack_24);
  *(undefined8 *)((longlong)param_1 + 0x54) = uStack_1c;
  param_1[8] = CONCAT44(uStack_2c,local_30);
  param_1[9] = CONCAT44(uStack_24,uStack_28);
  param_1[6] = CONCAT44(uStack_3c,local_40);
  param_1[7] = CONCAT44(uStack_34,uStack_38);
  return param_1;
}

