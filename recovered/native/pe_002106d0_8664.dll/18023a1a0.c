/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023a1a0 */

DWORD FUN_18023a1a0(LPCWSTR param_1,undefined8 *param_2,LPVOID param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  
  if ((HANDLE)*param_2 != (HANDLE)0xffffffffffffffff) {
    BVar1 = FindClose((HANDLE)*param_2);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  pvVar3 = FindFirstFileExW(param_1,FindExInfoBasic,param_3,FindExSearchNameMatch,(LPVOID)0x0,0);
  *param_2 = pvVar3;
  if (pvVar3 != (HANDLE)0xffffffffffffffff) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018023a214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}

