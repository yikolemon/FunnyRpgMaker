/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d36d0 */

void thunk_FUN_1400ddcd0(LPVOID param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_1403551d8,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_140113e44(DVar3);
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = uVar4;
  }
  return;
}

