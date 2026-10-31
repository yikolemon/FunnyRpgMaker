/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140048f9b */

undefined8 * FUN_140048f9b(undefined8 *param_1,int *param_2)

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
  uVar2 = FUN_140002f76();
  *(undefined8 *)(param_2 + 2) = uVar2;
  FUN_140001000(&local_58);
  FUN_140016f7e(&local_58,0x105,0);
  puVar4 = &local_58;
  if (7 < uStack_40) {
    puVar4 = (undefined2 *)CONCAT44(uStack_54,CONCAT22(uStack_56,local_58));
  }
  uVar3 = FUN_14018abe0(puVar4);
  FUN_140016f7e(&local_58,uVar3 & 0xffffffff,0);
  iVar5 = (int)(uVar3 >> 0x20);
  if (iVar5 == -1) {
    iVar5 = 0x14;
    uVar2 = FUN_1400031ff();
  }
  else {
    uVar2 = FUN_140002f76();
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
    FUN_140001000(param_1);
  }
  puVar1 = local_38;
  FUN_140001056(&local_58);
  return puVar1;
}

