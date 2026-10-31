/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140007a52 */

undefined8 * FUN_140007a52(undefined8 *param_1,undefined4 param_2)

{
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [104];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = std::codecvt<wchar_t,char,_Mbstatet>::vftable;
  FUN_140007eca(local_88,"C");
  FUN_1400da4c0(&local_b4);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_98;
  *(undefined4 *)(param_1 + 6) = uStack_94;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_90;
  *(undefined4 *)(param_1 + 7) = uStack_8c;
  *(undefined4 *)(param_1 + 4) = local_a4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_a0;
  *(undefined4 *)(param_1 + 5) = uStack_9c;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_98;
  *(undefined4 *)(param_1 + 2) = local_b4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_b0;
  *(undefined4 *)(param_1 + 3) = uStack_ac;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_a8;
  FUN_1400080f6(local_88);
  return param_1;
}

