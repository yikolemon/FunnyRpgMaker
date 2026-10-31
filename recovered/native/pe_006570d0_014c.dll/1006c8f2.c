/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c8f2 */

int * __thiscall FUN_1006c8f2(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *unaff_FS_OFFSET;
  undefined1 local_20 [4];
  int *local_1c;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_20;
  local_c = 0xffffffff;
  local_10 = &LAB_100c25e0;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  if (*(int *)(param_1 + 4) != 0x5555555) {
    local_18 = local_20;
    FUN_1006c9a0(param_1,param_3);
    piVar2 = local_1c;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    puVar1 = *(undefined4 **)(param_2 + 4);
    *local_1c = param_2;
    local_1c[1] = (int)puVar1;
    local_1c = (int *)0x0;
    *(int **)(param_2 + 4) = piVar2;
    *puVar1 = piVar2;
    local_c = 0xffffffff;
    FUN_1006ca42();
    *unaff_FS_OFFSET = local_14;
    return piVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228490("list too long");
}

