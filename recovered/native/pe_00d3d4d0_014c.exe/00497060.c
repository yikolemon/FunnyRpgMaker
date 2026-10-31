/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00497060 */

LPVOID __cdecl FUN_00497060(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  LPVOID pvVar3;
  __acrt_ptd *p_Var4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (param_1 * param_2 == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_00521cc4,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_004900a0();
    } while ((iVar2 != 0) && (bVar1 = FUN_0048d700(dwBytes), CONCAT31(extraout_var,bVar1) != 0));
  }
  p_Var4 = FUN_0048f66d();
  *(undefined4 *)p_Var4 = 0xc;
  return (LPVOID)0x0;
}

