/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ef2aa */

void FUN_100ef2aa(void)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_150 [3];
  char local_14d;
  int local_14c;
  int local_148 [2];
  int local_140;
  uint local_13c;
  uint local_138;
  int *local_134;
  int **local_130;
  int local_12c;
  uint local_128;
  undefined4 ***local_10c;
  undefined1 local_108 [16];
  uint *local_f8;
  int *local_f4;
  char *local_f0;
  int local_e0 [9];
  int *local_bc;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_150;
  local_18 = 0xffffffff;
  local_1c = &LAB_100f5280;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_100ef6c4(&local_130);
  local_18 = 0;
  FUN_1006a6bc(local_e0);
  local_18 = 0xffffffff;
  if (local_bc != (int *)0x0) {
    (**(code **)(*local_bc + 0x10))(local_bc != local_e0);
  }
  local_18 = 2;
  FUN_100e9e1c();
  local_18 = 3;
  local_134 = local_148;
  FUN_100ef760();
  iVar1 = 0;
  while ((iVar1 != 0xc &&
         (local_14c = *(int *)((int)&DAT_102b747c + iVar1), local_140 = iVar1,
         DAT_1039d545 != '\x01'))) {
    local_14d = '\0';
    local_f8 = &local_138;
    local_f4 = &local_14c;
    local_f0 = &local_14d;
    local_18 = 4;
    FUN_100ef7d0(&local_f8);
    local_18 = 9;
    FUN_1005c810(&local_130);
    local_18 = 0xffffffff;
    if (local_10c != (int ***)0x0) {
      (*(code *)(*local_10c)[4])(local_10c != &local_130);
    }
    if (local_14d != '\0') {
      local_18 = 4;
      FUN_10001f66((&PTR_DAT_102b71f4)[local_14c]);
      uVar2 = 0;
      while ((uVar2 < local_138 && (DAT_1039d545 == '\0'))) {
        local_130 = &local_134;
        local_12c = local_14c;
        local_18 = 5;
        local_13c = uVar2;
        local_128 = uVar2;
        FUN_1000334a(&local_f8);
        local_18 = 7;
        FUN_100ef87c(local_108,&local_130,0);
        local_18 = 0xffffffff;
        FUN_10001fee();
        local_18 = 0xffffffff;
        FUN_100ef9e6();
        uVar2 = local_13c + 1;
      }
      local_18 = 0xffffffff;
      FUN_10001fee();
    }
    iVar1 = local_140 + 4;
  }
  local_18 = 4;
  FUN_100efa08();
  local_18 = 0xffffffff;
  FUN_100efaba();
  FUN_100e9ea2(local_148,*(undefined4 *)(local_148[0] + 4));
  FUN_102283a0(local_148[0],0x28);
  FUN_1006b59e();
  ExceptionList = local_20;
  return;
}

