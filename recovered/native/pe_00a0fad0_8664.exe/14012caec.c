/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012caec */

undefined4
FUN_14012caec(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  __acrt_lowio_lock_fh(*param_2);
  lVar1 = param_3[1];
  if ((*(byte *)((&DAT_1403551e0)[(longlong)(int)*(uint *)*param_3 >> 6] + 0x38 +
                (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined4 *)(lVar1 + 0x2c) = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_14012c958();
  }
  __acrt_lowio_unlock_fh(*param_4);
  return uVar2;
}

