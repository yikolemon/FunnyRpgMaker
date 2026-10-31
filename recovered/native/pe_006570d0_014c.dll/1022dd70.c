/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022dd70 */

void FUN_1022dd70(int param_1,int *param_2,uint param_3)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_102889dd;
  local_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  FUN_1022bea0(0);
  local_8 = 0;
  if (*(uint *)(param_1 + 0xc) <= param_3) {
    uVar6 = param_3 + 1;
    if (uVar6 < 0x28) {
      uVar6 = 0x28;
    }
    iVar4 = FUN_1026ff70(*(undefined4 *)(param_1 + 8),uVar6 * 4,uVar3);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10228470();
    }
    uVar3 = *(uint *)(param_1 + 0xc);
    *(int *)(param_1 + 8) = iVar4;
    while (uVar3 < uVar6) {
      *(undefined4 *)(*(int *)(param_1 + 8) + uVar3 * 4) = 0;
      uVar3 = *(int *)(param_1 + 0xc) + 1;
      *(uint *)(param_1 + 0xc) = uVar3;
    }
  }
  pcVar1 = *(code **)(*param_2 + 4);
  (*(code *)PTR_guard_check_icall_1035d810)();
  (*pcVar1)();
  piVar2 = *(int **)(param_3 * 4 + *(int *)(param_1 + 8));
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    (*(code *)PTR_guard_check_icall_1035d810)();
    puVar5 = (undefined4 *)(*pcVar1)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar5;
      (*(code *)PTR_guard_check_icall_1035d810)(1);
      (*pcVar1)();
    }
  }
  *(int **)(param_3 * 4 + *(int *)(param_1 + 8)) = param_2;
  FUN_1022bee0();
  *unaff_FS_OFFSET = local_10;
  return;
}

