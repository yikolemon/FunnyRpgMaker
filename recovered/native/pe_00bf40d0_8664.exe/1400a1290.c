/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1290 */

void FUN_1400a1290(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  __acrt_ptd *p_Var4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_140143390,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_140095ecc(DVar2);
    p_Var4 = FUN_140095e5c();
    *(uint *)p_Var4 = uVar3;
  }
  return;
}

