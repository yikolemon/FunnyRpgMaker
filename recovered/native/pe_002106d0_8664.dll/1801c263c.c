/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c263c */

void FUN_1801c263c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_478 [32];
  undefined8 local_458;
  undefined8 *local_450;
  undefined8 *local_440;
  char local_438 [1023];
  undefined1 local_39;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_478;
  local_res18 = param_3;
  local_res20 = param_4;
  local_440 = &local_res18;
  puVar2 = (ulonglong *)FUN_1800434e2();
  local_458 = 0;
  local_450 = &local_res18;
  FUN_180272944(*puVar2 | 1,local_438,0x400,param_2);
  local_39 = 0;
  sVar3 = strlen(local_438);
  uVar4 = FUN_1800fe7f8(sVar3 + 1);
  FUN_1802a82f0(uVar4,local_438,sVar3 + 1);
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 == *(int *)(param_1 + 0x104)) {
    if (iVar1 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar1 / 2 + iVar1;
    }
    iVar7 = iVar1 + 1;
    if (iVar1 + 1 < iVar6) {
      iVar7 = iVar6;
    }
    lVar5 = FUN_1800fe7f8((longlong)iVar7 << 3);
    if (*(longlong *)(param_1 + 0x108) != 0) {
      FUN_1802a82f0(lVar5,*(longlong *)(param_1 + 0x108),(longlong)*(int *)(param_1 + 0x100) << 3);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x108));
    }
    *(longlong *)(param_1 + 0x108) = lVar5;
    *(int *)(param_1 + 0x104) = iVar7;
    iVar1 = *(int *)(param_1 + 0x100);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x108);
  }
  *(undefined8 *)(lVar5 + (longlong)iVar1 * 8) = uVar4;
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_478)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_478);
}

