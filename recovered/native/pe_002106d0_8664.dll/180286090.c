/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180286090 */

void thunk_FUN_180290e40(LPVOID param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_1804213f8,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_18027e6dc(DVar3);
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = uVar4;
  }
  return;
}

