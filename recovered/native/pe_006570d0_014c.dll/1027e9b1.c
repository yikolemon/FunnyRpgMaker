/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027e9b1 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined4 FUN_1027e9b1(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *local_14;
  
  uVar6 = 0;
  ___acrt_lowio_lock_fh(*param_1);
  uVar1 = *(uint *)*param_2;
  if ((*(byte *)((&DAT_103a5230)[(int)uVar1 >> 6] + 0x28 + (uVar1 & 0x3f) * 0x38) & 1) != 0) {
    hFile = (HANDLE)FUN_1027aa8f(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 != 0) goto LAB_1027ea21;
    DVar3 = GetLastError();
    pDVar4 = (DWORD *)FUN_10269012();
    *pDVar4 = DVar3;
  }
  puVar5 = (undefined4 *)FUN_10268ffd();
  *puVar5 = 9;
  uVar6 = 0xffffffff;
LAB_1027ea21:
  FUN_1027ea47();
  ExceptionList = local_14;
  return uVar6;
}

