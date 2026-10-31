/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180197a60 */

longlong FUN_180197a60(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_2 != 0xffffffff) {
    lVar2 = *(longlong *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      FUN_180196b0f(param_1);
      lVar2 = *(longlong *)(param_1 + 0x2b0);
    }
    if ((int)(param_2 & 0x7ffff) < *(int *)(lVar2 + 0x70)) {
      uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x78) + (ulonglong)(param_2 & 0x7ffff) * 4);
      if ((uVar1 >> 0x1e & 1) == 0) {
        return 0;
      }
      if (((param_2 ^ uVar1) & 0x3ff00000) != 0) {
        return 0;
      }
      return ((longlong)((ulonglong)uVar1 << 0x2c) >> 0x2c) * 8 + *(longlong *)(lVar2 + 0x68);
    }
  }
  return 0;
}

