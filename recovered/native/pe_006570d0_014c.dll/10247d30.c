/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10247d30 */

int * FUN_10247d30(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int *local_18;
  int local_14;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_102893b5;
  local_10 = *unaff_FS_OFFSET;
  uVar4 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  FUN_1022bea0(0);
  piVar3 = DAT_103a3314;
  local_8 = 0;
  local_18 = DAT_103a3314;
  if (DAT_103a32c4 == 0) {
    FUN_1022bea0(0);
    if (DAT_103a32c4 == 0) {
      DAT_1039ccf0 = DAT_1039ccf0 + 1;
      DAT_103a32c4 = DAT_1039ccf0;
    }
    FUN_1022bee0(uVar4);
  }
  uVar2 = DAT_103a32c4;
  local_14 = DAT_103a32c4 * 4;
  iVar5 = *(int *)(param_1 + 4);
  if (DAT_103a32c4 < *(uint *)(iVar5 + 0xc)) {
    piVar6 = *(int **)(local_14 + *(int *)(iVar5 + 8));
    if (piVar6 != (int *)0x0) goto LAB_10247e34;
  }
  else {
    piVar6 = (int *)0x0;
  }
  if (*(char *)(iVar5 + 0x14) == '\0') {
LAB_10247dea:
    if (piVar6 != (int *)0x0) goto LAB_10247e34;
  }
  else {
    iVar5 = FUN_1022bde0();
    if (uVar2 < *(uint *)(iVar5 + 0xc)) {
      piVar6 = *(int **)(local_14 + *(int *)(iVar5 + 8));
      goto LAB_10247dea;
    }
  }
  piVar6 = piVar3;
  if (piVar3 == (int *)0x0) {
    iVar5 = FUN_10247c60(&local_18,param_1);
    piVar6 = local_18;
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1000da81();
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_1022b910(local_18);
    pcVar1 = *(code **)(*piVar6 + 4);
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar1)();
    DAT_103a3314 = piVar6;
  }
LAB_10247e34:
  FUN_1022bee0(uVar4);
  *unaff_FS_OFFSET = local_10;
  return piVar6;
}

