/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180003118 */

undefined4 * FUN_180003118(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 ***pppuVar9;
  undefined8 **local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  undefined4 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_3;
  if (*(longlong *)(param_3 + 4) != 0) {
    FUN_180003300(param_3,&DAT_18037bce0,2);
  }
  (**(code **)(**(longlong **)(param_2 + 2) + 0x10))(*(longlong **)(param_2 + 2),local_48,*param_2);
  pppuVar9 = local_48;
  if (0xf < local_30) {
    pppuVar9 = (undefined8 ***)local_48[0];
  }
  FUN_180003300(local_28,pppuVar9,local_38);
  puVar8 = local_28;
  FUN_180001ef2(local_48);
  uVar1 = *puVar8;
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  uVar5 = puVar8[5];
  uVar6 = puVar8[6];
  uVar7 = puVar8[7];
  param_1[4] = puVar8[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 0xf;
  *(undefined1 *)puVar8 = 0;
  FUN_180001ef2(local_28);
  return param_1;
}

