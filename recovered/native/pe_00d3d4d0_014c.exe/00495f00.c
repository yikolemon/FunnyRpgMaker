/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00495f00 */

void __cdecl FUN_00495f00(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined *puVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 != (LPVOID)0x0) {
    BVar1 = HeapFree(DAT_00521cc4,0,param_1);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      puVar3 = FUN_0048f6ba(DVar2);
      p_Var4 = FUN_0048f66d();
      *(undefined **)p_Var4 = puVar3;
    }
  }
  return;
}

