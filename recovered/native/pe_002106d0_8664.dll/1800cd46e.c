/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cd46e */

void FUN_1800cd46e(int *param_1,int *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  _iobuf *p_Var3;
  uint *puVar4;
  char ***pppcVar5;
  int *piVar6;
  int iVar7;
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  int *local_90;
  char **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  pppcVar5 = *(char ****)(param_1 + 2);
  if (pppcVar5 != (char ***)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x3a);
    if (plVar1 != (longlong *)0x0) {
      local_88 = (char **)pppcVar5;
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 4);
      pppcVar5 = *(char ****)(param_1 + 2);
    }
    FUN_1802847b0(pppcVar5);
    param_1[2] = 0;
    param_1[3] = 0;
    plVar1 = *(longlong **)(param_1 + 0x4a);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 4);
    }
  }
  local_90 = param_1 + 4;
  if (local_90 != param_2) {
    piVar6 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 6)) {
      piVar6 = *(int **)param_2;
    }
    FUN_180017ca0(param_1 + 4,piVar6,*(undefined8 *)(param_2 + 4));
  }
  plVar1 = *(longlong **)(param_1 + 0x1a);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 4);
  }
  if (0 < *param_1) {
    iVar7 = 0;
    do {
      piVar6 = param_2;
      if (0xf < *(ulonglong *)(param_2 + 6)) {
        piVar6 = *(int **)param_2;
      }
      lVar2 = FUN_1800ce3fa(piVar6,*(undefined8 *)(param_2 + 4),0xffffffffffffffff,&DAT_1802bb328,2)
      ;
      if (lVar2 == -1) {
        local_88 = (char **)0x0;
        uStack_80 = 0;
        local_78 = 0;
        local_70 = 0xf;
      }
      else {
        FUN_180073262(&local_88,param_2,0,lVar2,local_b0);
      }
      FUN_1800ce129(&local_88);
      FUN_180001ef2(&local_88);
      if (param_3 == '\0') {
LAB_1800cd614:
        FUN_180001e92(&local_88,&DAT_18036b659);
        pppcVar5 = &local_88;
        if (0xf < local_70) {
          pppcVar5 = (char ***)local_88;
        }
        piVar6 = param_2;
        if (0xf < *(ulonglong *)(param_2 + 6)) {
          piVar6 = *(int **)param_2;
        }
        p_Var3 = common_fsopen<char>((char *)piVar6,(char *)pppcVar5,0x40);
        *(_iobuf **)(param_1 + 2) = p_Var3;
        FUN_180001ef2(&local_88);
        if (p_Var3 != (_iobuf *)0x0) goto code_r0x0001800cd6c3;
        Sleep(param_1[1]);
      }
      else {
        FUN_180001e92(&local_88,&DAT_18036b62f);
        pppcVar5 = &local_88;
        if (0xf < local_70) {
          pppcVar5 = (char ***)local_88;
        }
        piVar6 = param_2;
        if (0xf < *(ulonglong *)(param_2 + 6)) {
          piVar6 = *(int **)param_2;
        }
        p_Var3 = common_fsopen<char>((char *)piVar6,(char *)pppcVar5,0x40);
        FUN_180001ef2(&local_88);
        if (p_Var3 != (_iobuf *)0x0) {
          FUN_1802847b0(p_Var3);
          goto LAB_1800cd614;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *param_1);
  }
  puVar4 = (uint *)FUN_18027e66c();
  param_1 = (int *)(ulonglong)*puVar4;
  FUN_180003216(local_d0,local_90);
  FUN_180012917(local_b0,"Failed opening file ",local_d0);
  FUN_180020b6a(&local_88,local_b0," for writing");
  FUN_1800ce2bc(&local_88,param_1);
code_r0x0001800cd6c3:
  plVar1 = *(longlong **)(param_1 + 0x2a);
  if (plVar1 != (longlong *)0x0) {
    local_88 = *(char ***)(param_1 + 2);
    (**(code **)(*plVar1 + 0x10))(plVar1,local_90);
  }
  return;
}

