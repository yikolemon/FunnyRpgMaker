/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021aa41 */

void FUN_18021aa41(longlong param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  uint local_68;
  int *local_60;
  int *local_58;
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_88;
  cVar1 = FUN_18021bc8a(*(undefined8 *)(param_1 + 0x48e8));
  if (cVar1 == '\0') {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(param_1 + 0x48d5) == '\0';
  }
  if ((*(uint *)(param_1 + 0x4924) != param_3 || *(int *)(param_1 + 0x4920) != param_2) || bVar4) {
    local_58 = &local_40;
    local_60 = &local_3c;
    local_68 = param_3;
    FUN_18021bc8e(param_1,*(int *)(param_1 + 0x4920),*(uint *)(param_1 + 0x4924),param_2);
    local_48 = *(int *)(param_1 + 0x4920) + local_3c;
    iStack_44 = *(int *)(param_1 + 0x4924) + local_40;
    iVar2 = local_3c + param_2;
    iVar3 = local_40 + param_3;
    if (*(char *)(param_1 + 0x48d7) != '\0') {
      FUN_18021be48(param_1,CONCAT44(iStack_44,local_48));
      *(undefined1 *)(param_1 + 0x48d7) = 0;
      *(undefined1 *)(param_1 + 0x48d4) = 1;
      *(int *)(param_1 + 0x4918) = iVar2;
      *(int *)(param_1 + 0x491c) = iVar3;
    }
    if (*(char *)(param_1 + 0x4938) != '\0') {
      local_68 = local_68 & 0xffffff00;
      FUN_18021bf05(param_1,param_1 + 0x10,&local_48,CONCAT44(iVar3,iVar2));
    }
    *(undefined1 *)(param_1 + 0x4938) = 1;
    *(undefined4 *)(param_1 + 0x493c) = 2;
    *(ulonglong *)(param_1 + 0x4940) = CONCAT44(iStack_44,local_48);
    *(int *)(param_1 + 0x4948) = iVar2;
    *(int *)(param_1 + 0x494c) = iVar3;
    if (bVar4) {
      local_68 = *(uint *)(param_1 + 0x48f0);
      local_60 = (int *)((ulonglong)local_60 & 0xffffffffffffff00);
      FUN_18021b641(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48d8),
                    *(undefined8 *)(param_1 + 0x48e0),*(undefined8 *)(param_1 + 0x48e8));
    }
    *(int *)(param_1 + 0x4920) = param_2;
    *(uint *)(param_1 + 0x4924) = param_3;
  }
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_88);
}

