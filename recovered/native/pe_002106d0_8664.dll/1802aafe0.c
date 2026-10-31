/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aafe0 */

BOOL __stdcall VerQueryValueW(LPCVOID pBlock,LPCWSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802aafe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueW(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}

