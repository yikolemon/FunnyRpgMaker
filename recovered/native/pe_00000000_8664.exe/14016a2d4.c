/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016a2d4 */

void FUN_14016a2d4(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  uint param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  uint local_78;
  int *local_70;
  int *local_68;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  local_68 = &local_50;
  local_70 = &local_4c;
  local_78 = param_3;
  FUN_14016b37a(param_1,*(undefined4 *)(param_1 + 0x4920),*(undefined4 *)(param_1 + 0x4924),param_2)
  ;
  local_68 = &local_58;
  local_70 = &local_54;
  local_78 = param_7;
  FUN_14016b37a(param_1,param_4,param_5,param_6);
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x20);
  iVar5 = FUN_14016b86e(param_2,param_3,param_4,param_5);
  *(int *)(lVar2 + 0x20) = iVar5 + iVar1;
  local_60 = *(int *)(param_1 + 0x4920) + local_4c;
  iStack_5c = *(int *)(param_1 + 0x4924) + local_50;
  param_2 = local_4c + param_2;
  param_3 = local_50 + param_3;
  if (*(char *)(param_1 + 0x48d7) != '\0') {
    FUN_14016b534(param_1,CONCAT44(iStack_5c,local_60));
    *(undefined1 *)(param_1 + 0x48d7) = 0;
    *(undefined1 *)(param_1 + 0x48d4) = 1;
    *(int *)(param_1 + 0x4918) = param_2;
    *(int *)(param_1 + 0x491c) = param_3;
  }
  if (*(char *)(param_1 + 0x4938) != '\0') {
    local_78 = local_78 & 0xffffff00;
    FUN_14016b5f1(param_1,param_1 + 0x10,&local_60,CONCAT44(param_3,param_2));
  }
  *(undefined1 *)(param_1 + 0x4938) = 1;
  *(undefined4 *)(param_1 + 0x493c) = 4;
  *(ulonglong *)(param_1 + 0x4940) = CONCAT44(iStack_5c,local_60);
  *(int *)(param_1 + 0x4948) = param_2;
  *(int *)(param_1 + 0x494c) = param_3;
  *(int *)(param_1 + 0x4950) = param_4 + local_54;
  *(int *)(param_1 + 0x4954) = param_5 + local_58;
  *(int *)(param_1 + 0x4958) = local_54 + param_6;
  *(uint *)(param_1 + 0x495c) = local_58 + param_7;
  uVar3 = *(undefined8 *)(param_1 + 0x48e8);
  cVar4 = FUN_14016b376(uVar3);
  if (cVar4 != '\0') {
    local_78 = *(uint *)(param_1 + 0x48f0);
    local_70 = (int *)((ulonglong)local_70 & 0xffffffffffffff00);
    FUN_14016ad2d(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48d8),*(undefined8 *)(param_1 + 0x48e0)
                  ,uVar3);
  }
  *(int *)(param_1 + 0x4920) = param_6;
  *(uint *)(param_1 + 0x4924) = param_7;
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
}

