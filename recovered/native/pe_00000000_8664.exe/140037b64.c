/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140037b64 */

undefined8 FUN_140037b64(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0xf;
  *(undefined1 *)param_2 = 0;
  local_20 = param_2;
  FUN_140037dca(local_48,&local_48,uVar1,uVar2);
  local_28 = param_1;
  FUN_14000109c(local_20);
  return param_1;
}

