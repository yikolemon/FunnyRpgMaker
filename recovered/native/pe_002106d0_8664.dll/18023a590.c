/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023a590 */

DWORD FUN_18023a590(HANDLE param_1,LPWIN32_FIND_DATAW param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = FindNextFileW(param_1,param_2);
  if (BVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018023a5a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}

