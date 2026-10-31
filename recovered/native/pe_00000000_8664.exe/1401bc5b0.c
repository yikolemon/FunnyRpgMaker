/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bc5b0 */

undefined4 FUN_1401bc5b0(uint param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0xfffffffe) {
    puVar3 = (undefined4 *)FUN_14019e8f0();
    *puVar3 = 0;
    puVar3 = (undefined4 *)FUN_14019e8cc();
    *puVar3 = 9;
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (DAT_140f331b0 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if ((*(byte *)((&DAT_140f32db0)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
      if (param_3 < 0x80000000) {
        __acrt_lowio_lock_fh(param_1);
        uVar2 = 0xffffffff;
        if ((*(byte *)((&DAT_140f32db0)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          puVar3 = (undefined4 *)FUN_14019e8cc();
          *puVar3 = 9;
          puVar3 = (undefined4 *)FUN_14019e8f0();
          *puVar3 = 0;
        }
        else {
          uVar2 = FUN_1401bc6d0(param_1,param_2,param_3);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVar2;
      }
      puVar3 = (undefined4 *)FUN_14019e8f0();
      *puVar3 = 0;
      puVar3 = (undefined4 *)FUN_14019e8cc();
      *puVar3 = 0x16;
      goto LAB_1401bc636;
    }
  }
  puVar3 = (undefined4 *)FUN_14019e8f0();
  *puVar3 = 0;
  puVar3 = (undefined4 *)FUN_14019e8cc();
  *puVar3 = 9;
LAB_1401bc636:
  FUN_1401ae640();
  return 0xffffffff;
}

