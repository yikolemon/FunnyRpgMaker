/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10228cb0 */

DWORD FUN_10228cb0(LPCWSTR param_1,undefined4 *param_2,LPVOID param_3)

{
  BOOL BVar1;
  HANDLE pvVar2;
  DWORD DVar3;
  
  if ((HANDLE)*param_2 != (HANDLE)0xffffffff) {
    BVar1 = FindClose((HANDLE)*param_2);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
  }
  pvVar2 = FindFirstFileExW(param_1,FindExInfoBasic,param_3,FindExSearchNameMatch,(LPVOID)0x0,0);
  *param_2 = pvVar2;
  if (pvVar2 != (HANDLE)0xffffffff) {
    return 0;
  }
  DVar3 = GetLastError();
  return DVar3;
}

