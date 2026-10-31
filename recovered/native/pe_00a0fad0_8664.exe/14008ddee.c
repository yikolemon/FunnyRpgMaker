/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008ddee */

undefined4 * FUN_14008ddee(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [40];
  undefined4 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_2;
  FUN_14000892c(local_90,param_2);
  FUN_14008e7ff(local_50,local_90);
  FUN_14000ff1e(local_28,local_50);
  FUN_140005242(local_50);
  FUN_14008eba2(local_50,L"[\\/\\\\:\\*\\?\\\"<>\\|]",1);
  FUN_14008eac6(local_70,local_28,local_50,&DAT_140173b62,0);
  FUN_14000ff1e(local_28,local_70);
  FUN_140005242(local_70);
  puVar8 = local_28;
  FUN_14008ec4a(local_50);
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
  *(undefined8 *)(puVar8 + 6) = 7;
  *(undefined2 *)puVar8 = 0;
  FUN_140005242(local_28);
  return param_1;
}

