/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016aaaa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * __thiscall
FUN_1016aaaa(int *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  int local_40;
  int iStack_3c;
  undefined4 local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_6c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10180210;
  local_1c = ExceptionList;
  if ((param_4 == 0 || param_3 == 0) || param_5 == 0) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
  }
  else {
    piVar1 = (int *)*param_1;
    ExceptionList = &local_1c;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)param_1[1];
      if (piVar1 == (int *)0x0) {
        *(undefined4 *)param_2 = 0;
        *(undefined4 *)((int)param_2 + 4) = 0;
      }
      else {
        local_30 = (int *)0x0;
        local_2c = 0;
        local_54 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        local_44 = 0;
        local_6c = param_4;
        local_68 = param_5;
        local_64 = _DAT_102bb410;
        uStack_60 = _UNK_102bb414;
        uStack_5c = _UNK_102bb418;
        uStack_58 = _UNK_102bb41c;
        uStack_4c = 8;
        local_38 = 0;
        local_40 = param_3;
        iStack_3c = param_4 * 4;
        iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_6c,&local_40,&local_30);
        if (iVar2 < 0 || local_30 == (int *)0x0) {
          *(undefined4 *)param_2 = 0;
          *(undefined4 *)((int)param_2 + 4) = 0;
        }
        else {
          iVar2 = (**(code **)(*(int *)param_1[1] + 0x1c))((int *)param_1[1],local_30,0,&local_2c);
          (**(code **)(*local_30 + 8))(local_30);
          local_30 = (int *)0x0;
          if ((iVar2 < 0) || (local_2c == 0)) {
            *(undefined4 *)param_2 = 0;
            *(undefined4 *)((int)param_2 + 4) = 0;
          }
          else {
            FUN_101793f5(&local_28);
            local_28[6] = local_2c;
            local_28[2] = local_2c;
            local_28[3] = 0;
            local_28[4] = param_4;
            local_28[5] = param_5;
            *param_2 = CONCAT44(uStack_24,local_28);
          }
        }
      }
    }
    else {
      local_28 = (int *)0x0;
      local_20 = (undefined1 *)&local_6c;
      iVar2 = (**(code **)(*piVar1 + 0x5c))
                        (piVar1,param_4,param_5,_DAT_102bb400,_UNK_102bb404,_UNK_102bb408,
                         _UNK_102bb40c,&local_28,0);
      if (iVar2 < 0 || local_28 == (int *)0x0) {
        *(undefined4 *)param_2 = 0;
        *(undefined4 *)((int)param_2 + 4) = 0;
      }
      else {
        iVar2 = (**(code **)(*local_28 + 0x4c))(local_28,0,&local_6c,0,0);
        if (iVar2 < 0) {
          (**(code **)(*local_28 + 8))(local_28);
          *(undefined4 *)param_2 = 0;
          *(undefined4 *)((int)param_2 + 4) = 0;
        }
        else {
          local_34 = param_4 * 4;
          iVar2 = param_5;
          iVar3 = local_68;
          do {
            FUN_1025b2d0(iVar3,param_3,local_34);
            param_3 = param_3 + local_34;
            iVar3 = iVar3 + local_6c;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          (**(code **)(*local_28 + 0x50))(local_28,0);
          local_14 = 0xffffffff;
          FUN_10179324(&local_40);
          *(int **)(local_40 + 0x18) = local_28;
          *(int **)(local_40 + 8) = local_28;
          *(undefined4 *)(local_40 + 0xc) = 0;
          *(int *)(local_40 + 0x10) = param_4;
          *(int *)(local_40 + 0x14) = param_5;
          *param_2 = CONCAT44(iStack_3c,local_40);
        }
      }
    }
  }
  ExceptionList = local_1c;
  return param_2;
}

