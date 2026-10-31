/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018780 */

void __thiscall
FUN_10018780(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  byte *pbVar5;
  undefined1 auStack_70 [7];
  byte local_69;
  int local_68;
  int local_64;
  int *local_60;
  int local_5c;
  int local_58;
  undefined8 local_50;
  DWORD local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_70;
  local_18 = 0xffffffff;
  local_1c = &LAB_100591c0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  piVar4 = (int *)FUN_10018d26(param_1 + 0xb);
  local_64 = *piVar4;
  bVar2 = param_5 < local_64;
  pbVar5 = (byte *)FUN_10018d26(param_1 + 0x24);
  local_69 = *pbVar5;
  if ((bVar2 & (local_69 ^ 1)) == 0) {
    local_68 = param_1[6];
    if ((uint)param_1[7] < 0x10) {
      piVar4 = param_1 + 2;
    }
    else {
      piVar4 = (int *)param_1[2];
    }
    local_50 = FUN_1022c7e0();
    bVar3 = local_69;
    local_5c = local_68;
    local_58 = param_5;
    uVar1 = *(uint *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 8);
    local_60 = piVar4;
    if ((uVar1 & 1) == 0) {
      *(uint *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 8) = uVar1 | 1;
      local_18 = 0;
      local_48 = GetCurrentThreadId();
      *(DWORD *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = local_48;
      local_18 = 0xffffffff;
    }
    else {
      local_48 = *(DWORD *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = param_2;
    local_38 = param_3;
    local_34 = param_4;
    local_30 = param_6;
    local_2c = param_7;
    if (local_64 <= param_5) {
      (**(code **)(*param_1 + 8))(&local_60);
    }
    if ((bVar3 & 1) != 0) {
      FUN_10018d2c(&local_60);
    }
  }
  ExceptionList = local_20;
  return;
}

