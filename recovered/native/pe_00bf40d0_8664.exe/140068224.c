/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140068224 */

void FUN_140068224(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 auStackY_98 [32];
  int local_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  FUN_1400692ce(param_1,(int)param_1[0x924],*(int *)((longlong)param_1 + 0x4924),param_2,param_3,
                &local_4c,&local_50);
  FUN_1400692ce(param_1,param_4,param_5,param_6,param_7,&local_54,&local_58);
  lVar1 = param_1[1];
  iVar5 = *(int *)(lVar1 + 0x20);
  iVar4 = FUN_1400697c2(param_2,param_3,param_4,param_5);
  *(int *)(lVar1 + 0x20) = iVar4 + iVar5;
  local_60 = (int)param_1[0x924] + local_4c;
  iStack_5c = *(int *)((longlong)param_1 + 0x4924) + local_50;
  iVar4 = local_4c + param_2;
  iVar5 = local_50 + param_3;
  if (*(char *)((longlong)param_1 + 0x48d7) != '\0') {
    FUN_140069488(param_1,CONCAT44(iStack_5c,local_60));
    *(undefined1 *)((longlong)param_1 + 0x48d7) = 0;
    *(undefined1 *)((longlong)param_1 + 0x48d4) = 1;
    *(int *)(param_1 + 0x923) = iVar4;
    *(int *)((longlong)param_1 + 0x491c) = iVar5;
  }
  if ((char)param_1[0x927] != '\0') {
    FUN_140069545(param_1,param_1 + 2,&local_60,CONCAT44(iVar5,iVar4),'\0');
  }
  *(undefined1 *)(param_1 + 0x927) = 1;
  *(undefined4 *)((longlong)param_1 + 0x493c) = 4;
  param_1[0x928] = CONCAT44(iStack_5c,local_60);
  *(int *)(param_1 + 0x929) = iVar4;
  *(int *)((longlong)param_1 + 0x494c) = iVar5;
  *(int *)(param_1 + 0x92a) = param_4 + local_54;
  *(int *)((longlong)param_1 + 0x4954) = param_5 + local_58;
  *(int *)(param_1 + 0x92b) = local_54 + param_6;
  *(int *)((longlong)param_1 + 0x495c) = local_58 + param_7;
  puVar2 = (undefined8 *)param_1[0x91d];
  cVar3 = FUN_1400692ca((longlong)puVar2);
  if (cVar3 != '\0') {
    FUN_140068c7d(param_1 + 2,param_1[0x91b],param_1[0x91c],puVar2,(int)param_1[0x91e],'\0');
  }
  *(int *)(param_1 + 0x924) = param_6;
  *(int *)((longlong)param_1 + 0x4924) = param_7;
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
}

