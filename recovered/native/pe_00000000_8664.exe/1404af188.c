/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404af188 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1404af188(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  __acrt_lowio_lock_fh(*param_2);
  if ((*(byte *)((&DAT_1406328d0)[(longlong)(int)*(uint *)*param_3 >> 6] + 0x38 +
                (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) != 0) {
    uVar3 = FUN_1404aa3c0();
    iVar1 = (*(code *)s_GetFileInformationByHandle_14059de56._2_8_)(uVar3);
    uVar3 = 0;
    if (iVar1 != 0) goto LAB_1404af1ff;
    uVar2 = (*_DAT_14059df60)();
    puVar4 = (undefined4 *)FUN_14048fb60();
    *puVar4 = uVar2;
  }
  puVar4 = (undefined4 *)FUN_14048fb3c();
  *puVar4 = 9;
  uVar3 = 0xffffffff;
LAB_1404af1ff:
  __acrt_lowio_unlock_fh(*param_4);
  return uVar3;
}

