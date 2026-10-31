/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800735b2 */

void FUN_1800735b2(undefined8 *param_1)

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
  FUN_180002218();
  local_60 = 0xffff00000000;
  puVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar5 = (undefined8 *)*param_1;
  }
  uVar3 = FUN_18023a250(puVar5,local_90,3,0xffffffff);
  local_58 = CONCAT44(local_58._4_4_,uVar3);
  FUN_1800024e2(&local_60,uVar3,local_90);
  iVar2 = (int)local_58;
  local_48 = FUN_180002218();
  local_50 = iVar2;
  iVar1 = (int)local_60;
  if ((int)local_60 == 0) {
    if (iVar2 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_18000219a("exists",&local_50,param_1);
  }
  FUN_180002218();
  if (iVar1 == 1) {
    return;
  }
  FUN_180002d2c(&local_50,param_1);
  piVar6 = &local_50;
  FUN_18007e6e6(piVar6,&DAT_180366f9c);
  FUN_180002218();
  local_70 = 0xffff00000000;
  if (7 < local_38) {
    piVar6 = (int *)CONCAT44(uStack_4c,local_50);
  }
  local_68 = FUN_18023a250(piVar6,local_90,3,0xffffffff);
  FUN_1800024e2(&local_70,local_68);
  iVar2 = local_68;
  local_58 = FUN_180002218();
  local_60 = CONCAT44(local_60._4_4_,iVar2);
  iVar1 = (int)local_70;
  if ((int)local_70 == 0) {
    if (iVar2 != 0) goto LAB_180073743;
  }
  else {
    FUN_180002218();
    if (iVar1 != 1) goto LAB_180073701;
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
  uVar4 = FUN_180239da0(puVar5,piVar6);
  if (uVar4 >> 0x20 != 0) {
    FUN_18007e760("copy_file",uVar4 >> 0x20,param_1,&local_50);
LAB_180073743:
                    /* WARNING: Subroutine does not return */
    FUN_18000219a("exists",&local_60,&local_50);
  }
LAB_180073701:
  FUN_180001e4c(&local_50);
  return;
}

