/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00495f50 */

LPVOID __cdecl FUN_00495f50(SIZE_T param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_00521cc4,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_004900a0();
    } while ((iVar2 != 0) && (bVar1 = FUN_0048d700(param_1), CONCAT31(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_0048f66d();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}

