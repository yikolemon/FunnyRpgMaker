/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180220c67 */

ulonglong FUN_180220c67(longlong param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*param_2 < 0xffff) {
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
      uVar2 = FUN_18022bbcd(param_1,param_2,1);
      return uVar2;
    }
    if (*param_2 != *(uint *)(param_1 + 0x28)) {
      uVar2 = FUN_18022be0b(param_1,param_2,1);
      return uVar2;
    }
    FUN_18022c5c4(param_1);
    uVar1 = *(uint *)(param_1 + 0x2c);
    if (uVar1 != 0) {
      *param_2 = *(uint *)(param_1 + 0x28);
      uVar2 = (ulonglong)uVar1;
    }
  }
  return uVar2;
}

