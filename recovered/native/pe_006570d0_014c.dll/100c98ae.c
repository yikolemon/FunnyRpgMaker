/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c98ae */

void __thiscall FUN_100c98ae(int *param_1,int *param_2,char param_3)

{
  undefined1 *puVar1;
  undefined4 ***pppuVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 local_74 [24];
  undefined1 local_5c [24];
  undefined4 **local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_74;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc360;
  local_1c = ExceptionList;
  pppuVar2 = (undefined4 ***)param_1[2];
  ExceptionList = &local_1c;
  puVar1 = local_74;
  if (pppuVar2 != (undefined4 ***)0x0) {
    puVar1 = local_74;
    if ((int *)param_1[0x27] != (int *)0x0) {
      local_44 = pppuVar2;
      (**(code **)(*(int *)param_1[0x27] + 8))(param_1 + 3,&local_44);
      pppuVar2 = (undefined4 ***)param_1[2];
      puVar1 = local_20;
    }
    local_20 = puVar1;
    FUN_1026d543(pppuVar2);
    param_1[2] = 0;
    puVar1 = local_20;
    if ((int *)param_1[0x31] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x31] + 8))(param_1 + 3);
      puVar1 = local_20;
    }
  }
  local_20 = puVar1;
  local_28 = param_1 + 3;
  local_24 = param_1;
  if (local_28 != param_2) {
    piVar4 = param_2;
    if (0xf < (uint)param_2[5]) {
      piVar4 = (int *)*param_2;
    }
    FUN_100180a6(piVar4,param_2[4]);
  }
  if ((int *)local_24[0x13] != (int *)0x0) {
    (**(code **)(*(int *)local_24[0x13] + 8))(local_28);
  }
  if (0 < *local_24) {
    iVar3 = 0;
    do {
      piVar4 = param_2;
      if (0xf < (uint)param_2[5]) {
        piVar4 = (int *)*param_2;
      }
      local_2c = iVar3;
      iVar3 = FUN_100ca7d2(piVar4,param_2[4],0xffffffff,&DAT_10296a2c,2);
      if (iVar3 == -1) {
        local_44 = (undefined4 ***)0x0;
        uStack_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        local_34 = 0;
        local_30 = 0xf;
      }
      else {
        FUN_100729e8(param_2,0,iVar3,local_5c);
      }
      local_14 = 0;
      FUN_100ca540(&local_44);
      local_14 = 0xffffffff;
      FUN_10001fee();
      if (param_3 == '\0') {
LAB_100c9a4c:
        FUN_10001f66(&DAT_1033b52f);
        local_14 = 2;
        pppuVar2 = &local_44;
        if (0xf < local_30) {
          pppuVar2 = (undefined4 ***)local_44;
        }
        piVar4 = param_2;
        if (0xf < (uint)param_2[5]) {
          piVar4 = (int *)*param_2;
        }
        iVar3 = FUN_102694e4(piVar4,pppuVar2,0x40);
        local_24[2] = iVar3;
        local_14 = 0xffffffff;
        FUN_10001fee();
        piVar4 = local_24;
        if (iVar3 != 0) {
          if ((int *)local_24[0x1d] != (int *)0x0) {
            local_44 = (undefined4 **)local_24[2];
            (**(code **)(*(int *)local_24[0x1d] + 8))(local_28,&local_44);
          }
          ExceptionList = local_1c;
          return;
        }
        Sleep(local_24[1]);
      }
      else {
        FUN_10001f66(&DAT_1033b505);
        local_14 = 1;
        pppuVar2 = &local_44;
        if (0xf < local_30) {
          pppuVar2 = (undefined4 ***)local_44;
        }
        piVar4 = param_2;
        if (0xf < (uint)param_2[5]) {
          piVar4 = (int *)*param_2;
        }
        iVar3 = FUN_102694e4(piVar4,pppuVar2,0x40);
        local_14 = 0xffffffff;
        FUN_10001fee();
        piVar4 = local_24;
        if (iVar3 != 0) {
          FUN_1026d543(iVar3);
          goto LAB_100c9a4c;
        }
      }
      iVar3 = local_2c + 1;
    } while (iVar3 < *piVar4);
  }
  puVar5 = (undefined4 *)FUN_10268ffd();
  local_2c = *puVar5;
  FUN_1000334a(local_28);
  local_14 = 3;
  FUN_10012eed(local_5c,"Failed opening file ",local_74);
  local_14 = 4;
  FUN_10020842(&local_44,local_5c," for writing");
  local_14 = 5;
                    /* WARNING: Subroutine does not return */
  FUN_100ca6b3(&local_44,local_2c);
}

