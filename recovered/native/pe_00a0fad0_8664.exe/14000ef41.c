/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000ef41 */

undefined8 * FUN_14000ef41(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  HANDLE hObject;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_300 [2];
  undefined4 local_2f8 [6];
  undefined4 local_2e0;
  undefined1 local_2d4 [524];
  undefined8 *local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined8 *local_70;
  undefined8 *local_68 [2];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_300[0] = 0x238;
  local_50 = (undefined8 *)param_2;
  hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
  local_58 = param_1;
  if (hObject == (HANDLE)0xffffffffffffffff) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 7;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 7;
  }
  else {
    FUN_14000f5bc(local_68);
    iVar3 = Process32FirstW(hObject,local_300);
    if (iVar3 != 0) {
      do {
        local_b8 = local_2f8[0];
        uStack_b4 = local_2e0;
        FUN_14000f628(local_b0,local_2d4);
        FUN_14000f628(local_90,&DAT_140174404);
        FUN_14000f93e(local_68,local_c8,local_2f8);
        puVar5 = local_c8[0];
        local_c8[0][5] = CONCAT44(uStack_b4,local_b8);
        FUN_14000ff1e(local_c8[0] + 6,local_b0);
        FUN_14000ff1e(puVar5 + 10,local_90);
        FUN_140005242(local_90);
        FUN_140005242(local_b0);
        iVar3 = Process32NextW(hObject,local_300);
      } while (iVar3 != 0);
    }
    CloseHandle(hObject);
    puVar5 = local_68[0];
    local_c8[0] = (undefined8 *)*local_68[0];
    while (puVar2 = local_c8[0], local_c8[0] != puVar5) {
      if (*(int *)((longlong)local_c8[0] + 0x2c) != 0) {
        lVar1 = (longlong)local_c8[0] + 0x2c;
        puVar4 = (undefined8 *)FUN_14000ff7a(local_68,lVar1);
        if (puVar4 != local_68[0]) {
          FUN_14000f93e(local_68,&local_b8,lVar1);
          lVar1 = CONCAT44(uStack_b4,local_b8);
          puVar4 = (undefined8 *)(lVar1 + 0x30);
          if (puVar2 + 10 != puVar4) {
            if (7 < *(ulonglong *)(lVar1 + 0x48)) {
              puVar4 = *(undefined8 **)(lVar1 + 0x30);
            }
            FUN_14000ffc0(puVar2 + 10,puVar4,*(undefined8 *)(lVar1 + 0x40));
          }
        }
      }
      FUN_14001010a(local_c8);
    }
    puVar5 = (undefined8 *)FUN_14000ff7a(local_68,local_50);
    if (puVar5 == local_68[0]) {
      local_50 = local_58 + 1;
      local_58[2] = 0;
      local_58[3] = 0;
      *local_58 = 0;
      local_58[1] = 0;
      local_58[4] = 7;
      local_70 = local_58 + 5;
      local_58[5] = 0;
      local_58[6] = 0;
      local_58[7] = 0;
      local_58[8] = 7;
    }
    else {
      FUN_14000f93e(local_68,&local_b8,local_50);
      lVar1 = CONCAT44(uStack_b4,local_b8);
      *local_58 = *(undefined8 *)(lVar1 + 0x28);
      local_50 = local_58 + 1;
      FUN_14000892c(local_50,lVar1 + 0x30);
      local_70 = local_58 + 5;
      FUN_14000892c(local_70,lVar1 + 0x50);
    }
    FUN_14000f6b2(local_68,local_68,local_68[0][1]);
    thunk_FUN_1400ddcd0(local_68[0],0x70);
  }
  return local_58;
}

