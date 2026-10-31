/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180005379 */

undefined8 * FUN_180005379(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_2 = 0;
  uVar2 = FUN_180002218();
  *(undefined8 *)(param_2 + 2) = uVar2;
  FUN_180002d74(&local_58);
  FUN_180004aa4(&local_58,0x105,0);
  puVar4 = &local_58;
  if (7 < uStack_40) {
    puVar4 = (undefined2 *)CONCAT44(uStack_54,CONCAT22(uStack_56,local_58));
  }
  uVar3 = FUN_18023a800(puVar4);
  FUN_180004aa4(&local_58,uVar3 & 0xffffffff,0);
  iVar5 = (int)(uVar3 >> 0x20);
  if (iVar5 == -1) {
    iVar5 = 0x14;
    uVar2 = FUN_1800024a1();
  }
  else {
    uVar2 = FUN_180002218();
  }
  *param_2 = iVar5;
  *(undefined8 *)(param_2 + 2) = uVar2;
  local_38 = param_1;
  if (iVar5 == 0) {
    param_1[2] = local_48;
    param_1[3] = uStack_40;
    *(uint *)param_1 = CONCAT22(uStack_56,local_58);
    *(undefined4 *)((longlong)param_1 + 4) = uStack_54;
    *(undefined4 *)(param_1 + 1) = uStack_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_4c;
    local_48 = 0;
    uStack_40 = 7;
    local_58 = 0;
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_180002d74(param_1);
  }
  puVar1 = local_38;
  FUN_180001e4c(&local_58);
  return puVar1;
}

