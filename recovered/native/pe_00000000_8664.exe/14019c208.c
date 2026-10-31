/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019c208 */

HANDLE FUN_14019c208(LPSECURITY_ATTRIBUTES param_1,ulonglong param_2,longlong param_3,
                    undefined8 param_4,DWORD param_5,DWORD *param_6)

{
  DWORD DVar1;
  undefined4 *puVar2;
  LPVOID lpParameter;
  HANDLE pvVar3;
  DWORD local_res18 [2];
  
  if (param_3 == 0) {
    puVar2 = (undefined4 *)FUN_14019e8cc();
    *puVar2 = 0x16;
    FUN_1401ae640();
    pvVar3 = (HANDLE)0x0;
  }
  else {
    lpParameter = (LPVOID)FUN_14019c2f4(param_3,param_4);
    pvVar3 = (HANDLE)0x0;
    if (lpParameter != (LPVOID)0x0) {
      local_res18[0] = 0;
      pvVar3 = CreateThread(param_1,param_2 & 0xffffffff,FUN_14019c358,lpParameter,param_5,
                            local_res18);
      if (pvVar3 == (HANDLE)0x0) {
        DVar1 = GetLastError();
        FUN_14019e914(DVar1);
        if (*(HANDLE *)((longlong)lpParameter + 0x10) != (HANDLE)0x0) {
          CloseHandle(*(HANDLE *)((longlong)lpParameter + 0x10));
        }
        if (*(HMODULE *)((longlong)lpParameter + 0x18) != (HMODULE)0x0) {
          FreeLibrary(*(HMODULE *)((longlong)lpParameter + 0x18));
        }
        FUN_1401aea30(lpParameter);
        pvVar3 = (HANDLE)0x0;
      }
      else if (param_6 != (DWORD *)0x0) {
        *param_6 = local_res18[0];
      }
    }
  }
  return pvVar3;
}

