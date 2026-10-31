/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a4508 */

void __thiscall FUN_100a4508(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_1a8 [4];
  undefined1 *local_1a4;
  undefined1 *local_1a0;
  uint *local_19c;
  undefined1 *local_198;
  undefined1 *local_194;
  undefined1 *local_190;
  int local_18c [19];
  undefined1 local_140 [56];
  undefined1 local_108 [208];
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_1a8;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c4190;
  local_20 = ExceptionList;
  local_18c[0] = 1;
  ExceptionList = &local_20;
  local_1a4 = param_1;
  FUN_1009bc18(local_18c,param_1 + 0x30);
  local_18 = 0;
  FUN_1008b410(&DAT_1039cb9c);
  local_198 = param_2 + 0x38;
  local_19c = (uint *)(local_1a4 + 0x38);
  FUN_1008b9b2(local_19c);
  FUN_1007e5fc(local_1a4 + 0x3c);
  local_1a0 = param_2 + 0x38;
  if (100 < *(uint *)(local_1a4 + 0x38)) {
    local_1a0 = local_108;
    if (0x66 < *(uint *)(local_1a4 + 0x38)) {
      DAT_1039cbb8 = 1;
    }
    param_2 = local_140;
  }
  local_194 = param_2;
  FUN_1008b536(local_1a4 + 0x40);
  FUN_1008b9b2(local_1a4 + 0x60);
  FUN_1008b9b2(local_1a4 + 100);
  FUN_1008b9b2(local_1a4 + 0x68);
  local_18c[0] = (*(int *)(local_1a4 + 0x7c) - *(int *)(local_1a4 + 0x78) >> 2) * 0x286bca1b;
  FUN_1008b9b2(local_18c);
  if (0x66 < *(uint *)(local_1a4 + 0x38)) {
    FUN_1008b9b2(local_1a4 + 0x58);
    FUN_1008b9b2(local_1a4 + 0x5c);
  }
  if ((DAT_1039cbc8 == '\x01') && (*(int *)(local_1a4 + 0x6c) == *(int *)(local_1a4 + 0x70))) {
    local_18c[0] = -1;
    FUN_1008b9b2(local_18c);
  }
  else {
    local_18c[0] = -1;
    FUN_1008bcec(local_1a4 + 0x6c,local_18c);
  }
  local_190 = *(undefined1 **)(local_1a4 + 0x7c);
  puVar1 = *(undefined1 **)(local_1a4 + 0x78);
  while (local_18 = 0, puVar1 != local_190) {
    local_1a4 = puVar1;
    FUN_100a64c2(puVar1);
    local_18 = 1;
    FUN_1007e5fc(&DAT_1029680d);
    FUN_100a6b8c(local_194);
    local_18 = 0xffffffff;
    FUN_100a49ca();
    puVar1 = local_1a4 + 0x4c;
  }
  FUN_1007e5fc(&DAT_1029680c);
  if (100 < *local_19c) {
    FUN_1009c0aa();
    local_1a0 = local_34;
    if (local_38 != local_34) {
      do {
        local_1a4 = local_38;
        FUN_1007e5fc(local_38);
        local_38 = local_1a4 + 1;
      } while (local_38 != local_1a0);
    }
  }
  local_18 = 0xffffffff;
  FUN_1007283e();
  ExceptionList = local_20;
  return;
}

