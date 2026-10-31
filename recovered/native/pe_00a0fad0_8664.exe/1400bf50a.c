/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bf50a */

void FUN_1400bf50a(undefined4 *param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  local_38 = param_1[4];
  uStack_34 = param_1[5];
  uStack_30 = param_1[6];
  uStack_2c = param_1[7];
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 7;
  *(undefined2 *)param_1 = 0;
  local_28 = *(undefined8 *)(param_1 + 8);
  FUN_14000ff1e(param_1);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x20);
  FUN_14000ff1e(param_2,&local_48);
  *(undefined8 *)(param_2 + 0x20) = local_28;
  FUN_140005242(&local_48);
  return;
}

