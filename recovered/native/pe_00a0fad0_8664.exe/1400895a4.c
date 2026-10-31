/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400895a4 */

void FUN_1400895a4(longlong param_1,undefined8 param_2)

{
  HANDLE pvVar1;
  LPVOID pvVar2;
  LPCWSTR **lpFileName;
  undefined1 local_110 [56];
  undefined1 local_d8 [56];
  undefined1 local_a0 [56];
  undefined1 local_68 [32];
  LPCWSTR *local_48 [3];
  ulonglong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_14000892c(local_48);
  lpFileName = local_48;
  if (7 < local_30) {
    lpFileName = (LPCWSTR **)local_48[0];
  }
  pvVar1 = CreateFileW((LPCWSTR)lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                       (HANDLE)0x0);
  *(HANDLE *)(param_1 + 8) = pvVar1;
  FUN_140005242(local_48);
  if (*(HANDLE *)(param_1 + 8) == (HANDLE)0x0) {
    FUN_14000892c(local_68,param_2);
    FUN_1400898bd(local_48,L"Failed to open file: ",local_68);
    FUN_140089914(local_110,local_48);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_110,&DAT_1401a5760);
  }
  pvVar1 = CreateFileMappingW(*(HANDLE *)(param_1 + 8),(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCWSTR)0x0
                             );
  *(HANDLE *)(param_1 + 0x10) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 8));
    FUN_14000892c(local_68,param_2);
    FUN_1400898bd(local_48,L"Failed to create file mapping for: ",local_68);
    FUN_140089914(local_d8,local_48);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_d8,&DAT_1401a5760);
  }
  pvVar2 = MapViewOfFile(pvVar1,4,0,0,0);
  *(LPVOID *)(param_1 + 0x18) = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    *(LPVOID *)(param_1 + 0x20) = pvVar2;
    return;
  }
  CloseHandle(*(HANDLE *)(param_1 + 0x10));
  CloseHandle(*(HANDLE *)(param_1 + 8));
  FUN_14000892c(local_68,param_2);
  FUN_1400898bd(local_48,L"Failed to create map view of file: ",local_68);
  FUN_140089914(local_a0,local_48);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_a0,&DAT_1401a5760);
}

