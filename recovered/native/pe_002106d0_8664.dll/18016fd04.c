/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016fd04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_18016fd04(longlong *param_1,longlong *param_2,longlong param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  longlong *local_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_80;
  longlong *local_78;
  longlong lStack_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if ((param_4 == 0 || param_3 == 0) || param_5 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    if (plVar1 == (longlong *)0x0) {
      if ((longlong *)param_1[1] == (longlong *)0x0) {
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        local_a0 = (longlong *)0x0;
        local_80 = 0;
        local_b8 = 0;
        local_a8 = 0;
        local_cc = param_5;
        local_c8 = _DAT_1802e1260;
        uStack_c4 = _UNK_1802e1264;
        uStack_c0 = _UNK_1802e1268;
        uStack_bc = _UNK_1802e126c;
        uStack_b0 = 8;
        uStack_90 = (ulonglong)(uint)(param_4 * 4);
        local_d0 = param_4;
        local_98 = param_3;
        iVar2 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
        if (iVar2 < 0 || local_a0 == (longlong *)0x0) {
          *param_2 = 0;
          param_2[1] = 0;
        }
        else {
          iVar2 = (**(code **)(*(longlong *)param_1[1] + 0x38))
                            ((longlong *)param_1[1],local_a0,0,&local_80);
          (**(code **)(*local_a0 + 0x10))();
          local_a0 = (longlong *)0x0;
          if ((iVar2 < 0) || (local_80 == 0)) {
            *param_2 = 0;
            param_2[1] = 0;
          }
          else {
            FUN_18017f9cd(&local_78);
            local_78[3] = local_80;
            local_78[1] = local_80;
            *(int *)(local_78 + 2) = param_4;
            *(int *)((longlong)local_78 + 0x14) = param_5;
            *param_2 = (longlong)local_78;
            param_2[1] = lStack_70;
          }
        }
      }
    }
    else {
      local_78 = (longlong *)0x0;
      iVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,param_4,param_5,1,0,0x15,1,&local_78,0);
      if (iVar2 < 0 || local_78 == (longlong *)0x0) {
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        iVar2 = (**(code **)(*local_78 + 0x98))(local_78,0,&local_d0,0,0);
        if (iVar2 < 0) {
          (**(code **)(*local_78 + 0x10))();
          *param_2 = 0;
          param_2[1] = 0;
        }
        else {
          lVar3 = CONCAT44(uStack_c4,local_c8);
          iVar2 = param_5;
          do {
            FUN_1802a82f0(lVar3,param_3,(ulonglong)(uint)(param_4 * 4));
            param_3 = param_3 + (ulonglong)(uint)(param_4 * 4);
            lVar3 = lVar3 + local_d0;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          (**(code **)(*local_78 + 0xa0))(local_78,0);
          FUN_18017f903(&local_98);
          *(longlong **)(local_98 + 0x18) = local_78;
          *(longlong **)(local_98 + 8) = local_78;
          *(int *)(local_98 + 0x10) = param_4;
          *(int *)(local_98 + 0x14) = param_5;
          *param_2 = local_98;
          param_2[1] = uStack_90;
        }
      }
    }
  }
  return param_2;
}

