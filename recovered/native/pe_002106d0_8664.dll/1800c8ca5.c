/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c8ca5 */

undefined8 * FUN_1800c8ca5(undefined8 *param_1,HMODULE param_2)

{
  DWORD DVar1;
  uint uVar2;
  LPWSTR lpFilename;
  DWORD nSize;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_58 = (LPWSTR)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 7;
  nSize = 0x104;
  while( true ) {
    FUN_180004aa4(&local_58,nSize,0);
    lpFilename = (LPWSTR)&local_58;
    if (7 < uStack_40) {
      lpFilename = local_58;
    }
    DVar1 = GetModuleFileNameW(param_2,lpFilename,nSize);
    if (DVar1 == 0) break;
    uVar2 = nSize - 1;
    nSize = nSize * 2;
    if (DVar1 < uVar2) {
      FUN_180004aa4(&local_58,DVar1,0);
      param_1[2] = local_48;
      param_1[3] = uStack_40;
      *(undefined4 *)param_1 = (undefined4)local_58;
      *(undefined4 *)((longlong)param_1 + 4) = local_58._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
      local_48 = 0;
      uStack_40 = 7;
      local_58 = (LPWSTR)((ulonglong)local_58 & 0xffffffffffff0000);
LAB_1800c8d6c:
      FUN_1800010ec(&local_58);
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  goto LAB_1800c8d6c;
}

