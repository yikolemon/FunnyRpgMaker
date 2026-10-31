/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022de90 */

void FUN_1022de90(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 local_48 [4];
  int local_44;
  undefined1 local_40;
  int local_3c;
  undefined1 local_38;
  int local_34;
  undefined2 local_30;
  int local_2c;
  undefined2 local_28;
  int local_24;
  undefined1 local_20;
  int local_1c;
  undefined1 local_18;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288a8d;
  local_10 = *unaff_FS_OFFSET;
  uVar3 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  if (param_2 == DAT_1039ccf4) {
    FUN_1022bea0(0);
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_8 = 6;
    FUN_1022b950(local_48,&DAT_10357e78,uVar3);
    local_8 = 7;
    FUN_1022e180(local_48,0x3f,param_1,0);
    local_8 = 8;
    FUN_1022ba10(local_48);
    if (local_1c != 0) {
      thunk_FUN_10274120(local_1c);
    }
    local_1c = 0;
    if (local_24 != 0) {
      thunk_FUN_10274120(local_24);
    }
    local_24 = 0;
    if (local_2c != 0) {
      thunk_FUN_10274120(local_2c);
    }
    local_2c = 0;
    if (local_34 != 0) {
      thunk_FUN_10274120(local_34);
    }
    local_34 = 0;
    if (local_3c != 0) {
      thunk_FUN_10274120(local_3c);
    }
    local_3c = 0;
    if (local_44 != 0) {
      thunk_FUN_10274120(local_44);
    }
    local_44 = 0;
  }
  else {
    FUN_1022bea0(0);
    local_8 = 9;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = FUN_1026faa0(*(int *)(param_1 + 0xc) << 2);
      *(int *)(param_1 + 8) = iVar4;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10228470();
      }
      iVar4 = *(int *)(param_1 + 0xc);
      while (iVar4 != 0) {
        iVar4 = iVar4 + -1;
        piVar1 = *(int **)(*(int *)(param_2 + 8) + iVar4 * 4);
        *(int **)(*(int *)(param_1 + 8) + iVar4 * 4) = piVar1;
        if (piVar1 != (int *)0x0) {
          pcVar2 = *(code **)(*piVar1 + 4);
          (*(code *)PTR_guard_check_icall_1035d810)();
          (*pcVar2)();
        }
      }
    }
  }
  FUN_1022bee0();
  *unaff_FS_OFFSET = local_10;
  return;
}

