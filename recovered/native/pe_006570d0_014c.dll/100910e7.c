/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100910e7 */

bool FUN_100910e7(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined1 local_7c [24];
  undefined1 local_64 [24];
  undefined1 local_4c [24];
  uint local_34;
  int local_30;
  uint local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_7c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3890;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100914ae(local_4c,&param_1,(undefined1 *)((int)register0x00000010 + 6));
  uVar1 = 0;
  do {
    local_2c = *(uint *)(param_2 + 4);
    uVar3 = uVar1;
    if (local_2c <= uVar1) break;
    local_28 = *(undefined2 *)(*(int *)(param_2 + 8) + uVar1 * 2);
    local_26 = *(undefined2 *)(*(int *)(param_2 + 8) + 2 + uVar1 * 2);
    local_14 = 0;
    local_34 = uVar1;
    FUN_100914ae(local_7c,&local_28,&local_26);
    local_14 = 1;
    local_30 = FUN_100915e6(local_4c);
    local_24 = local_30 < 1;
    if (local_30 < 1) {
      local_21 = 1;
      local_14 = 2;
      FUN_100914ae(local_64,&local_26,&local_24);
      local_22 = 1;
      local_23 = 0;
      local_14 = 3;
      iVar2 = FUN_100915e6(local_64);
      bVar4 = iVar2 < 1;
    }
    else {
      bVar4 = false;
    }
    local_22 = local_24;
    local_23 = local_24;
    local_14 = 0xffffffff;
    if (local_30 < 1) {
      FUN_10001134();
    }
    FUN_10001134();
    uVar1 = local_34 + 2;
    uVar3 = local_34;
  } while (!bVar4);
  local_14 = 0xffffffff;
  bVar4 = uVar3 < local_2c;
  FUN_10001134();
  ExceptionList = local_1c;
  return bVar4;
}

