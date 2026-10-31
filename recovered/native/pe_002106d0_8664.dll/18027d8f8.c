/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027d8f8 */

HANDLE FUN_18027d8f8(LPSECURITY_ATTRIBUTES param_1,ulonglong param_2,longlong param_3,
                    undefined8 param_4,DWORD param_5,DWORD *param_6)

{
  DWORD DVar1;
  undefined4 *puVar2;
  LPVOID lpParameter;
  HANDLE pvVar3;
  DWORD local_res18 [2];
  
  if (param_3 == 0) {
    puVar2 = (undefined4 *)FUN_18027e66c();
    *puVar2 = 0x16;
    FUN_180290a50();
    pvVar3 = (HANDLE)0x0;
  }
  else {
    lpParameter = (LPVOID)FUN_18027d9e4(param_3,param_4);
    pvVar3 = (HANDLE)0x0;
    if (lpParameter != (LPVOID)0x0) {
      local_res18[0] = 0;
      pvVar3 = CreateThread(param_1,param_2 & 0xffffffff,FUN_18027da48,lpParameter,param_5,
                            local_res18);
      if (pvVar3 == (HANDLE)0x0) {
        DVar1 = GetLastError();
        FUN_18027e6b4(DVar1);
        if (*(HANDLE *)((longlong)lpParameter + 0x10) != (HANDLE)0x0) {
          CloseHandle(*(HANDLE *)((longlong)lpParameter + 0x10));
        }
        if (*(HMODULE *)((longlong)lpParameter + 0x18) != (HMODULE)0x0) {
          FreeLibrary(*(HMODULE *)((longlong)lpParameter + 0x18));
        }
        FUN_180290e40(lpParameter);
        pvVar3 = (HANDLE)0x0;
      }
      else if (param_6 != (DWORD *)0x0) {
        *param_6 = local_res18[0];
      }
    }
  }
  return pvVar3;
}

