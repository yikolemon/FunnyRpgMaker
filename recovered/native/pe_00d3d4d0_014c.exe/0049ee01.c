/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049ee01 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_0049ee01(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  __acrt_ptd *p_Var4;
  undefined4 uVar5;
  void *local_14;
  
  uVar5 = 0;
  FUN_0049d70b(*param_1);
  uVar1 = *(uint *)*param_2;
  if ((*(byte *)((&DAT_00521cc8)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) & 1) != 0) {
    hFile = (HANDLE)FUN_0049d4c2(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 != 0) goto LAB_0049ee71;
    DVar3 = GetLastError();
    p_Var4 = FUN_0048f682();
    *(DWORD *)p_Var4 = DVar3;
  }
  p_Var4 = FUN_0048f66d();
  *(undefined4 *)p_Var4 = 9;
  uVar5 = 0xffffffff;
LAB_0049ee71:
  FUN_0049ee97();
  ExceptionList = local_14;
  return uVar5;
}

