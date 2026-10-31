/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401bafac */

undefined4
FUN_1401bafac(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  __acrt_lowio_lock_fh(*param_2);
  lVar1 = param_3[1];
  if ((*(byte *)((&DAT_140f32db0)[(longlong)(int)*(uint *)*param_3 >> 6] + 0x38 +
                (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined4 *)(lVar1 + 0x2c) = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_1401bae18();
  }
  __acrt_lowio_unlock_fh(*param_4);
  return uVar2;
}

