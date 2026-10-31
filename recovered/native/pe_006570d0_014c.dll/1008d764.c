/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008d764 */

void __thiscall FUN_1008d764(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 auStack_160 [4];
  int local_15c;
  int local_158;
  int local_154;
  undefined1 *local_150;
  int local_14c;
  undefined1 *local_148;
  undefined1 *local_144;
  undefined1 local_140 [56];
  undefined1 local_108 [208];
  int local_38;
  int local_34;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_160;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c3780;
  local_20 = ExceptionList;
  local_14c = 1;
  ExceptionList = &local_20;
  local_15c = param_1;
  FUN_1009bc18(&local_14c,param_1 + 0x30);
  local_18 = 0;
  local_150 = param_2;
  FUN_1008b410(&DAT_1039cb48);
  local_144 = param_2 + 0x38;
  FUN_1007e5fc(local_15c + 0x48);
  local_148 = param_2 + 0x38;
  if (*(char *)(local_15c + 0x4a) == '\x01') {
    local_148 = local_108;
    DAT_1039cbb8 = 1;
    local_150 = local_140;
  }
  local_14c = (*(int *)(local_15c + 0x40) - *(int *)(local_15c + 0x3c) >> 2) * -0x63c018f;
  FUN_1008b9b2(&local_14c);
  local_158 = *(int *)(local_15c + 0x40);
  iVar1 = *(int *)(local_15c + 0x3c);
  while (iVar1 != local_158) {
    local_154 = iVar1;
    FUN_1009bdd4(local_150);
    iVar1 = local_154 + 0xa44;
  }
  FUN_1007e5fc(local_15c + 0x49);
  if (*(char *)(local_15c + 0x4a) == '\x01') {
    FUN_1009c0aa();
    local_158 = local_34;
    if (local_38 != local_34) {
      do {
        local_154 = local_38;
        FUN_1007e5fc(local_38);
        local_38 = local_154 + 1;
      } while (local_38 != local_158);
    }
  }
  local_18 = 0xffffffff;
  FUN_1007283e();
  ExceptionList = local_20;
  return;
}

