/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006674c */

undefined8 * thunk_FUN_180066751(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  uint3 uVar1;
  uint uVar2;
  
  if (0x7f < param_2) {
    if (param_2 < 0x800) {
      uVar2 = param_2 >> 6 | 0xc0;
    }
    else {
      uVar1 = (uint3)(param_2 >> 8);
      if (param_2 < 0x10000) {
        uVar2 = CONCAT31(uVar1 >> 0xc,(char)(param_2 >> 0xc)) | 0xe0;
      }
      else {
        FUN_180003bf2(param_3,CONCAT31(uVar1 >> 0x12,(char)(param_2 >> 0x12)) | 0xf0);
        uVar2 = CONCAT31(uVar1 >> 0xc,(char)(param_2 >> 0xc)) & 0xffffff3f | 0x80;
      }
      FUN_180003bf2(param_3,uVar2);
      uVar2 = CONCAT31(uVar1 >> 6,(char)(param_2 >> 6)) & 0xffffff3f | 0x80;
    }
    FUN_180003bf2(param_3,uVar2);
    param_2 = param_2 & 0xffffff3f | 0x80;
  }
  FUN_180003bf2(param_3,param_2);
  *param_1 = param_3;
  return param_1;
}

