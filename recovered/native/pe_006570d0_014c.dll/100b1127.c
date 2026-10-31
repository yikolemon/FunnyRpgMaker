/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b1127 */

undefined8 * __fastcall FUN_100b1127(undefined8 *param_1,int **param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int **ppiVar7;
  int **local_70;
  int local_6c;
  int *local_68;
  undefined4 *local_64;
  int **local_60;
  int **local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  int **local_50;
  int **ppiStack_4c;
  int **local_48;
  undefined4 *local_44;
  int local_40;
  undefined8 *local_3c;
  int *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int **local_28;
  int **local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_70;
  local_18 = &LAB_100c1ba0;
  local_1c = ExceptionList;
  local_3c = param_1;
  if (*param_2 == param_2[1]) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    local_38 = (int *)0x0;
    local_34 = (undefined4 *)0x0;
    local_30 = (undefined4 *)0x0;
    local_14 = 0;
    iVar5 = (int)param_2[1] - (int)*param_2;
    local_28 = (int **)(iVar5 >> 5);
    ExceptionList = &local_1c;
    local_24 = param_2;
    if ((int **)0xfffffff < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    local_20 = (undefined1 *)&local_70;
    local_60 = (int **)FUN_10001426(iVar5 >> 1);
    local_50 = &local_38;
    local_48 = local_28;
    local_14 = 1;
    ppiStack_4c = local_60;
    FUN_100b1a09(local_60);
    ppiStack_4c = (int **)0x0;
    FUN_100b1ade(0,local_28);
    local_14 = 0xffffffff;
    FUN_10016cdc();
    local_60 = (int **)local_24[1];
    ppiVar7 = (int **)*local_24;
    while (ppiVar7 != local_60) {
      local_14 = 0;
      local_28 = ppiVar7;
      FUN_100b1655();
      uVar3 = local_54;
      local_14 = 2;
      if (local_34 == local_30) {
        local_64 = local_34;
        local_2c = (undefined4 *)((int)local_34 - (int)local_38);
        uVar6 = (int)local_2c >> 4;
        local_70 = (int **)(uVar6 + 1);
        ppiVar7 = (int **)((uVar6 >> 1) + uVar6);
        if (ppiVar7 <= local_70) {
          ppiVar7 = local_70;
        }
        if (0xfffffff - (uVar6 >> 1) < uVar6) {
          ppiVar7 = (int **)0xfffffff;
        }
        if ((int **)0xfffffff < ppiVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_1000146d();
        }
        local_24 = ppiVar7;
        ppiStack_4c = (int **)FUN_10001426((int)ppiVar7 << 4);
        uVar3 = local_54;
        local_6c = (int)ppiStack_4c + (int)local_2c + 0x10;
        local_50 = &local_38;
        local_48 = local_24;
        local_44 = (undefined4 *)((int)ppiStack_4c + (int)local_2c);
        *local_44 = local_28;
        local_54 = 0;
        uVar2 = CONCAT44(uStack_58,local_5c);
        uStack_58 = 0;
        local_5c = (int **)0x0;
        *(undefined8 *)(local_44 + 1) = uVar2;
        local_44[3] = uVar3;
        local_40 = local_6c;
        local_2c = ppiStack_4c;
        if (local_64 == local_34) {
          local_14 = 3;
          FUN_100b1a09(ppiStack_4c);
        }
        else {
          local_14 = 3;
          FUN_100b1a09(ppiStack_4c);
          local_44 = local_2c;
          FUN_100b1a09(local_6c);
        }
        ppiStack_4c = (int **)0x0;
        FUN_100b1ade(local_70,local_24);
        local_14 = 0xffffffff;
        FUN_100b1bb8();
      }
      else {
        *local_34 = local_28;
        local_24 = (int **)(local_34 + 1);
        local_54 = 0;
        uVar2 = CONCAT44(uStack_58,local_5c);
        uStack_58 = 0;
        local_5c = (int **)0x0;
        *(undefined8 *)(local_34 + 1) = uVar2;
        local_34[3] = uVar3;
        local_14 = 0xffffffff;
        local_34 = local_34 + 4;
      }
      FUN_10004eae();
      ppiVar7 = local_28 + 8;
    }
    local_14 = 0;
    FUN_100b17a5(*(undefined4 *)(*local_38 + 4),local_38 + 1);
    ppiVar7 = local_48;
    if ((int)local_34 - (int)local_38 == 0x10) {
      local_48 = (int **)0x0;
      uVar2 = CONCAT44(ppiStack_4c,local_50);
      ppiStack_4c = (int **)0x0;
      local_50 = (int **)0x0;
      *local_3c = uVar2;
      *(int ***)(local_3c + 1) = ppiVar7;
    }
    else {
      *(undefined4 *)local_3c = 0;
      *(undefined4 *)((int)local_3c + 4) = 0;
      *(undefined4 *)(local_3c + 1) = 0;
      local_14 = 7;
      local_5c = &local_38;
      local_24 = ppiStack_4c;
      ppiVar7 = local_50;
      while (ppiVar7 != local_24) {
        local_68 = *ppiVar7;
        local_28 = ppiVar7;
        cVar4 = FUN_100b18a2(local_68,1);
        if (cVar4 != '\0') {
          piVar1 = *(int **)((int)local_3c + 4);
          if (piVar1 == *(int **)(local_3c + 1)) {
            FUN_10051662(piVar1,&local_68);
          }
          else {
            *piVar1 = (int)local_68;
            *(int *)((int)local_3c + 4) = *(int *)((int)local_3c + 4) + 4;
          }
        }
        ppiVar7 = local_28 + 1;
      }
    }
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_100b19c0();
  }
  ExceptionList = local_1c;
  return local_3c;
}

