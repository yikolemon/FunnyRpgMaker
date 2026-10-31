/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d9d51 */

void FUN_100d9d51(void)

{
  int *piVar1;
  int local_34 [2];
  int local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ddca0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  local_28 = DAT_1039ce4c;
  local_24 = DAT_1039ce4c;
  while (local_24 = (int *)*local_24, local_24 != local_28) {
    local_2c = (int)(local_24 + 2);
    FUN_100d773c(local_34,local_2c);
    FUN_100d1565(*(undefined4 *)(local_2c + 4),*(undefined4 *)(local_34[0] + 0x48),
                 *(undefined4 *)(local_34[0] + 0x4c));
  }
  local_28 = DAT_1039ce9c;
  local_24 = DAT_1039ce9c;
  while (local_24 = (int *)*local_24, local_24 != local_28) {
    local_2c = (int)(local_24 + 2);
    FUN_100d773c(local_34,local_2c);
    FUN_100d1565(*(undefined4 *)(local_2c + 4),*(undefined4 *)(local_34[0] + 0x48),
                 *(undefined4 *)(local_34[0] + 0x4c));
  }
  local_28 = DAT_1039ceec;
  local_24 = DAT_1039ceec;
  while (piVar1 = (int *)*local_24, piVar1 != local_28) {
    local_2c = (int)(piVar1 + 2);
    local_24 = piVar1;
    FUN_100d773c(local_34,local_2c);
    FUN_100d1565(*(undefined4 *)(local_2c + 4),*(undefined4 *)(local_34[0] + 0x48),
                 *(undefined4 *)(local_34[0] + 0x4c));
  }
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_10388dd4);
  FUN_100446d6();
  local_14 = 1;
  local_28 = DAT_1039cf3c;
  local_24 = DAT_1039cf3c;
  while (piVar1 = (int *)*local_24, piVar1 != local_28) {
    local_2c = (int)(piVar1 + 2);
    local_24 = piVar1;
    FUN_100d773c(local_34,local_2c);
    FUN_100d0d9d(*(int *)(local_34[0] + 0x48) != 0 || *(int *)(local_34[0] + 0x4c) != 0);
  }
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_10388d74);
  FUN_100446d6();
  local_14 = 2;
  local_28 = DAT_1039cf8c;
  local_24 = DAT_1039cf8c;
  while (piVar1 = (int *)*local_24, piVar1 != local_28) {
    local_2c = (int)(piVar1 + 2);
    local_24 = piVar1;
    FUN_100d83bc(local_34,local_2c);
    FUN_100d125e(local_34[0] + 0x30);
  }
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_10388da4);
  ExceptionList = local_1c;
  return;
}

