/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481ee0 */

void __thiscall FUN_00481ee0(void *this,undefined4 param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int local_34 [5];
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_11;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004a72dd;
  local_10 = ExceptionList;
  uVar2 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x201;
  *(undefined4 *)((int)this + 0x18) = 6;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  iVar3 = FUN_0047f230(8);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    local_8 = 0;
    piVar4 = FUN_0047f650('\x01');
    *(int **)(iVar3 + 4) = piVar4;
  }
  *(int *)((int)this + 0x30) = iVar3;
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  local_1c = *(int **)(iVar3 + 4);
  pcVar1 = *(code **)(*local_1c + 4);
  local_18 = local_1c;
  (*(code *)PTR_guard_check_icall_00508898)(uVar2);
  (*pcVar1)();
  local_8 = 1;
  piVar4 = FUN_00417b41(&local_20);
  pcVar1 = *(code **)(*piVar4 + 0x20);
  (*(code *)PTR_guard_check_icall_00508898)(0x20);
  local_11 = (*pcVar1)();
  local_8 = 0xffffffff;
  if (local_18 != (int *)0x0) {
    pcVar1 = *(code **)(*local_18 + 8);
    (*(code *)PTR_guard_check_icall_00508898)();
    puVar5 = (undefined4 *)(*pcVar1)();
    if (puVar5 != (undefined4 *)0x0) {
      pcVar1 = *(code **)*puVar5;
      (*(code *)PTR_guard_check_icall_00508898)(1);
      (*pcVar1)();
    }
  }
  *(undefined1 *)((int)this + 0x40) = local_11;
  if (*(int *)((int)this + 0x38) == 0) {
    uVar2 = *(uint *)((int)this + 0xc) & 0x13 | 4;
    *(uint *)((int)this + 0xc) = uVar2;
    uVar2 = *(uint *)((int)this + 0x10) & uVar2;
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        pcVar6 = "ios_base::failbit set";
        if ((uVar2 & 2) == 0) {
          pcVar6 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar6 = "ios_base::badbit set";
      }
      puVar5 = (undefined4 *)FUN_0047fbb0(&local_20,1);
      FUN_00406008((uint *)pcVar6,puVar5);
                    /* WARNING: Subroutine does not return */
      FUN_00484ff0(local_34,&DAT_005098e8);
    }
  }
  if (param_2 != '\0') {
    FUN_00481d20((int)this);
  }
  ExceptionList = local_10;
  return;
}

