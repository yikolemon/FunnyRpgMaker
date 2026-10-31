/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c522a */

undefined4 * FUN_100c522a(undefined4 *param_1,HMODULE param_2)

{
  LPWSTR **lpFilename;
  DWORD DVar1;
  DWORD DVar2;
  LPWSTR *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  DWORD local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_18 = &LAB_100c7d70;
  local_1c = ExceptionList;
  local_2c = 0;
  local_3c = (LPWSTR *)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_28 = 7;
  local_14 = 0;
  DVar2 = 0x104;
  ExceptionList = &local_1c;
  while( true ) {
    local_24 = DVar2;
    FUN_10004c42(DVar2,0);
    lpFilename = &local_3c;
    if (7 < uStack_28) {
      lpFilename = (LPWSTR **)local_3c;
    }
    DVar1 = GetModuleFileNameW(param_2,(LPWSTR)lpFilename,local_24);
    if (DVar1 == 0) break;
    DVar2 = local_24 * 2;
    if (DVar1 < local_24 - 1) {
      FUN_10004c42(DVar1,0);
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_28,local_2c);
      *param_1 = local_3c;
      param_1[1] = uStack_38;
      param_1[2] = uStack_34;
      param_1[3] = uStack_30;
      local_2c = 0;
      uStack_28 = 7;
      local_3c = (LPWSTR *)((uint)local_3c & 0xffff0000);
LAB_100c5304:
      local_14 = 0xffffffff;
      FUN_10001134();
      ExceptionList = local_1c;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 7;
  goto LAB_100c5304;
}

