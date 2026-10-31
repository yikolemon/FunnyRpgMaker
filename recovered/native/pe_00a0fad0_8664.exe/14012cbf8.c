/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012cbf8 */

undefined8
FUN_14012cbf8(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hFile;
  DWORD *pDVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  __acrt_lowio_lock_fh(*param_2);
  if ((*(byte *)((&DAT_1403551e0)[(longlong)(int)*(uint *)*param_3 >> 6] + 0x38 +
                (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_14012c288();
    BVar1 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar1 != 0) goto LAB_14012cc6f;
    DVar2 = GetLastError();
    pDVar3 = (DWORD *)FUN_140113df8();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_140113dd4();
  *puVar4 = 9;
  uVar5 = 0xffffffff;
LAB_14012cc6f:
  __acrt_lowio_unlock_fh(*param_4);
  return uVar5;
}

