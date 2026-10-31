/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140088dcc */

void FUN_140088dcc(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined1 local_90 [32];
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_140007025();
  local_60 = 0xffff00000000;
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  uVar3 = FUN_1400dcbb0(puVar5,local_90,3,0xffffffff);
  local_58 = CONCAT44(local_58._4_4_,uVar3);
  FUN_140007276(&local_60,uVar3,local_90);
  iVar2 = (int)local_58;
  local_48 = FUN_140007025();
  local_50 = iVar2;
  iVar1 = (int)local_60;
  if ((int)local_60 == 0) {
    if (iVar2 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14004137b("exists",&local_50,param_1);
  }
  FUN_140007025();
  if (iVar1 == 1) {
    return;
  }
  FUN_140041956(&local_50,param_1);
  piVar6 = &local_50;
  FUN_140087a7e(piVar6,&DAT_14016f9a5);
  FUN_140007025();
  local_70 = 0xffff00000000;
  if (7 < local_38) {
    piVar6 = (int *)CONCAT44(uStack_4c,local_50);
  }
  local_68 = FUN_1400dcbb0(piVar6,local_90,3,0xffffffff);
  FUN_140007276(&local_70,local_68);
  iVar2 = local_68;
  local_58 = FUN_140007025();
  local_60 = CONCAT44(local_60._4_4_,iVar2);
  iVar1 = (int)local_70;
  if ((int)local_70 == 0) {
    if (iVar2 != 0) goto LAB_140088f5d;
  }
  else {
    FUN_140007025();
    if (iVar1 != 1) goto LAB_140088f1b;
  }
  if (local_38 < 8) {
    piVar6 = &local_50;
  }
  else {
    piVar6 = (int *)CONCAT44(uStack_4c,local_50);
  }
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  uVar4 = FUN_1400dc700(puVar5,piVar6);
  if (uVar4 >> 0x20 != 0) {
    FUN_14008497d("copy_file",uVar4 >> 0x20,param_1,&local_50);
LAB_140088f5d:
                    /* WARNING: Subroutine does not return */
    FUN_14004137b("exists",&local_60,&local_50);
  }
LAB_140088f1b:
  FUN_140005690(&local_50);
  return;
}

