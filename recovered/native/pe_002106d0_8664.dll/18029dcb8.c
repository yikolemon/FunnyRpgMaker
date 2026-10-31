/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029dcb8 */

undefined8
FUN_18029dcb8(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hFile;
  DWORD *pDVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  __acrt_lowio_lock_fh(*param_2);
  if ((*(byte *)((&DAT_180421400)[(longlong)(int)*(uint *)*param_3 >> 6] + 0x38 +
                (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_180298ef0();
    BVar1 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar1 != 0) goto LAB_18029dd2f;
    DVar2 = GetLastError();
    pDVar3 = (DWORD *)FUN_18027e690();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_18027e66c();
  *puVar4 = 9;
  uVar5 = 0xffffffff;
LAB_18029dd2f:
  __acrt_lowio_unlock_fh(*param_4);
  return uVar5;
}

