/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006807d */

void FUN_14006807d(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStackY_88 [32];
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  cVar1 = FUN_1400692ca(param_1[0x91d]);
  if (cVar1 == '\0') {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)((longlong)param_1 + 0x48d5) == '\0';
  }
  if ((*(int *)((longlong)param_1 + 0x4924) != param_3 || (int)param_1[0x924] != param_2) || bVar4)
  {
    FUN_1400692ce(param_1,(int)param_1[0x924],*(int *)((longlong)param_1 + 0x4924),param_2,param_3,
                  &local_3c,&local_40);
    local_48 = (int)param_1[0x924] + local_3c;
    iStack_44 = *(int *)((longlong)param_1 + 0x4924) + local_40;
    iVar2 = local_3c + param_2;
    iVar3 = local_40 + param_3;
    if (*(char *)((longlong)param_1 + 0x48d7) != '\0') {
      FUN_140069488(param_1,CONCAT44(iStack_44,local_48));
      *(undefined1 *)((longlong)param_1 + 0x48d7) = 0;
      *(undefined1 *)((longlong)param_1 + 0x48d4) = 1;
      *(int *)(param_1 + 0x923) = iVar2;
      *(int *)((longlong)param_1 + 0x491c) = iVar3;
    }
    if ((char)param_1[0x927] != '\0') {
      FUN_140069545(param_1,param_1 + 2,&local_48,CONCAT44(iVar3,iVar2),'\0');
    }
    *(undefined1 *)(param_1 + 0x927) = 1;
    *(undefined4 *)((longlong)param_1 + 0x493c) = 2;
    param_1[0x928] = CONCAT44(iStack_44,local_48);
    *(int *)(param_1 + 0x929) = iVar2;
    *(int *)((longlong)param_1 + 0x494c) = iVar3;
    if (bVar4) {
      FUN_140068c7d(param_1 + 2,param_1[0x91b],param_1[0x91c],(undefined8 *)param_1[0x91d],
                    (int)param_1[0x91e],'\0');
    }
    *(int *)(param_1 + 0x924) = param_2;
    *(int *)((longlong)param_1 + 0x4924) = param_3;
  }
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStackY_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_88);
}

