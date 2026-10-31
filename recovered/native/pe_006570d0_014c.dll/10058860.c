/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10058860 */

void __thiscall
FUN_10058860(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  byte *pbVar5;
  int **local_200;
  undefined4 **local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int **ppiStack_1e8;
  undefined4 uStack_1e4;
  byte local_1dd;
  int *local_1dc;
  int *local_1d8;
  undefined4 local_1d4;
  int local_1d0;
  int *local_1b0;
  int local_1ac;
  int local_1a8;
  undefined8 local_1a0;
  DWORD local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  int *local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  int **ppiStack_170;
  undefined4 uStack_16c;
  int local_154;
  undefined1 **local_150 [7];
  int *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 *local_128;
  int local_124 [63];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_200;
  local_18 = 0xffffffff;
  local_1c = &LAB_1005adb0;
  local_20 = ExceptionList;
  local_200 = (int **)(param_1 + 0xb);
  ExceptionList = &local_20;
  piVar4 = (int *)FUN_10018d26();
  local_1d0 = *piVar4;
  bVar3 = param_5 < local_1d0;
  local_200 = (int **)(param_1 + 0x24);
  local_1dc = param_1;
  pbVar5 = (byte *)FUN_10018d26();
  local_1dd = *pbVar5;
  if ((bVar3 & (local_1dd ^ 1)) == 0) {
    local_134 = local_124;
    local_130 = 0;
    local_128 = &LAB_100190fe;
    local_12c = 0xfa;
    local_18 = 1;
    local_1ac = param_8[4];
    if (0xf < (uint)param_8[5]) {
      param_8 = (int *)*param_8;
    }
    ppiStack_1e8 = &local_1b0;
    uStack_174 = 0;
    local_178 = 0xd;
    local_150[0] = (undefined1 **)&local_134;
    local_1fc = local_150;
    local_1f0 = 0xd;
    uStack_1ec = 0;
    uStack_1e4 = uStack_16c;
    local_1f4 = param_7;
    local_1f8 = param_6;
    local_200 = (int **)&local_154;
    local_1b0 = param_8;
    ppiStack_170 = ppiStack_1e8;
    FUN_1002479c();
    iVar1 = local_1dc[6];
    if ((uint)local_1dc[7] < 0x10) {
      piVar4 = local_1dc + 2;
    }
    else {
      piVar4 = (int *)local_1dc[2];
    }
    local_1d8 = local_134;
    local_1d4 = local_130;
    local_1a0 = FUN_1022c7e0();
    local_1a8 = param_5;
    uVar2 = *(uint *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 8);
    local_1b0 = piVar4;
    local_1ac = iVar1;
    if ((uVar2 & 1) == 0) {
      *(uint *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 8) = uVar2 | 1;
      local_18 = 2;
      local_198 = GetCurrentThreadId();
      *(DWORD *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = local_198;
    }
    else {
      local_198 = *(DWORD *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    }
    local_194 = 0;
    local_190 = 0;
    local_18c = param_2;
    local_188 = param_3;
    local_184 = param_4;
    local_180 = local_1d8;
    local_17c = local_1d4;
    if (local_1d0 <= param_5) {
      local_18 = 1;
      local_200 = &local_1b0;
      (**(code **)(*local_1dc + 8))();
    }
    if ((local_1dd & 1) != 0) {
      local_18 = 1;
      local_200 = &local_1b0;
      FUN_10018d2c();
    }
    local_18 = 0xffffffff;
    if (local_134 != local_124) {
      local_200 = (int **)local_134;
      thunk_FUN_10274120();
    }
  }
  ExceptionList = local_20;
  return;
}

