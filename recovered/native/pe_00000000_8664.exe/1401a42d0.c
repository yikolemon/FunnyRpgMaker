/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a42d0 */

void thunk_FUN_1401aea30(LPVOID param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_140f32da8,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_14019e93c(DVar3);
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = uVar4;
  }
  return;
}

