/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140069545 */

void FUN_140069545(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4,char param_5)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStackY_a8 [32];
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  int iStack_5c;
  int local_58 [2];
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  local_70 = 0;
  bVar5 = *(int *)((longlong)param_1 + 0x493c) != 2;
  plVar4 = param_1 + 0x92b;
  plVar3 = param_1 + 0x92a;
  if (!bVar5) {
    plVar4 = param_1 + 0x929;
    plVar3 = param_1 + 0x928;
  }
  uVar1 = (ulonglong)bVar5;
  local_40 = param_4;
  if (((int)param_1[uVar1 * 2 + 0x929] != *param_3) ||
     (bVar5 = true, *(int *)((longlong)plVar4 + 4) != param_3[1])) {
    uVar2 = FUN_1400699ca((longlong)param_1,(int *)plVar3,(int *)plVar4,param_3,(int *)&local_40,
                          (int *)&local_70);
    if ((char)uVar2 == '\0') {
      bVar5 = true;
    }
    else {
      *(undefined8 *)((longlong)param_1 + (uVar1 * 0x10 | 0x4948)) = local_70;
      bVar5 = false;
    }
  }
  local_68 = param_1[0x925];
  if (*(int *)((longlong)param_1 + 0x493c) == 4) {
    local_48 = 4;
    FUN_1400697e2(param_1,(longlong)param_2,&local_60,(int)param_1[0x929],
                  *(int *)((longlong)param_1 + 0x494c));
    FUN_1400697e2(param_1,(longlong)param_2,local_58,(int)param_1[0x92a],
                  *(int *)((longlong)param_1 + 0x4954));
    FUN_1400697e2(param_1,(longlong)param_2,(int *)&local_50,(int)param_1[0x92b],
                  *(int *)((longlong)param_1 + 0x495c));
    (**(code **)(param_1[1] + 0x18))(param_1[1],&local_68);
  }
  else {
    if (*(int *)((longlong)param_1 + 0x493c) != 2) goto LAB_14006970d;
    local_48 = 2;
    plVar3 = param_1 + 0x307;
    if (param_5 == '\0') {
      plVar3 = param_2;
    }
    FUN_1400697e2(param_1,(longlong)plVar3,&local_60,(int)param_1[0x929],
                  *(int *)((longlong)param_1 + 0x494c));
    if (((int)local_68 == local_60) && (local_68._4_4_ == iStack_5c)) goto LAB_14006970d;
    (**(code **)(param_1[1] + 8))(param_1[1],&local_68);
    local_50 = CONCAT44(iStack_5c,local_60);
  }
  param_1[0x925] = local_50;
LAB_14006970d:
  if (!(bool)(param_5 == '\0' & (bVar5 ^ 1U))) {
    plVar3 = param_1 + 0x307;
    if (param_5 == '\0') {
      plVar3 = param_2;
    }
    FUN_1400697e2(param_1,(longlong)plVar3,&local_60,*param_3,param_3[1]);
    if ((local_60 != (int)param_1[0x925]) || (iStack_5c != *(int *)((longlong)param_1 + 0x492c))) {
      local_48 = 2;
      local_68 = param_1[0x925];
      (**(code **)(param_1[1] + 8))(param_1[1],&local_68);
      param_1[0x925] = CONCAT44(iStack_5c,local_60);
    }
  }
  if (!bVar5) {
    *(undefined8 *)param_3 = local_70;
  }
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStackY_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStackY_a8);
  }
  return;
}

