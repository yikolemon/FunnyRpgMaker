/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400aaf50 */

undefined8 FUN_1400aaf50(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  __acrt_ptd *p_Var4;
  undefined8 uVar5;
  
  FUN_1400a9b7c(*param_2);
  uVar1 = *(uint *)*param_3;
  if ((*(byte *)((&DAT_1401433a0)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_1400a98a8(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar2 != 0) goto LAB_1400aafc7;
    DVar3 = GetLastError();
    p_Var4 = FUN_140095e80();
    *(DWORD *)p_Var4 = DVar3;
  }
  p_Var4 = FUN_140095e5c();
  *(undefined4 *)p_Var4 = 9;
  uVar5 = 0xffffffff;
LAB_1400aafc7:
  FUN_1400a9ba4(*param_4);
  return uVar5;
}

