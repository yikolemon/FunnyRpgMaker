/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006ca42 */

void __fastcall FUN_1006ca42(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100c2600;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  local_c = 0;
  iVar1 = *(int *)(param_1 + 4);
  local_1c = param_1;
  piVar3 = &local_1c;
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 0x2c), piVar3 = &local_1c, piVar2 != (int *)0x0))
  {
    (**(code **)(*piVar2 + 0x10))(piVar2 != (int *)(iVar1 + 8));
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    piVar3 = (int *)local_18;
  }
  local_18 = (undefined1 *)piVar3;
  local_c = 0xffffffff;
  if (*(int *)(local_1c + 4) == 0) {
    *unaff_FS_OFFSET = local_14;
  }
  else {
    FUN_102283a0(*(int *)(local_1c + 4),0x30);
    *unaff_FS_OFFSET = local_14;
  }
  return;
}

