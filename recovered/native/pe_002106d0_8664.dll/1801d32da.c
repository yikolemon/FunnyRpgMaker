/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d32da */

undefined8 * FUN_1801d32da(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_XMM1_Qa;
  undefined1 local_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_18019eef8(param_1 + 2,param_2,(int)param_3,0);
  *param_1 = in_XMM1_Qa;
  param_1[1] = param_3;
  FUN_1801d30b4(local_b8,(int)in_XMM1_Qa,(int)param_3);
  FUN_1801d311c(local_b8,&local_60);
  *(undefined4 *)(param_1 + 4) = local_50;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_4c;
  *(undefined4 *)(param_1 + 5) = uStack_48;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_44;
  *(undefined4 *)(param_1 + 2) = local_60;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_5c;
  *(undefined4 *)(param_1 + 3) = uStack_58;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_54;
  FUN_180004cea(local_88);
  FUN_1800609dc(local_98);
  return param_1;
}

