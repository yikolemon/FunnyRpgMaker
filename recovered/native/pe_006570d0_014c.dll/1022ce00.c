/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022ce00 */

void thunk_FUN_10274120(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1 != (LPVOID)0x0) {
    BVar1 = HeapFree(DAT_103a5228,0,param_1);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      uVar3 = FUN_1026904a(DVar2);
      puVar4 = (undefined4 *)FUN_10268ffd();
      *puVar4 = uVar3;
    }
  }
  return;
}

