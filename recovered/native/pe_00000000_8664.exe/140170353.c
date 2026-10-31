/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140170353 */

ulonglong FUN_140170353(longlong param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*param_2 < 0xffff) {
    if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
      uVar2 = FUN_14017b2b9(param_1,param_2,1);
      return uVar2;
    }
    if (*param_2 != *(uint *)(param_1 + 0x28)) {
      uVar2 = FUN_14017b4f7(param_1,param_2,1);
      return uVar2;
    }
    FUN_14017bcb0(param_1);
    uVar1 = *(uint *)(param_1 + 0x2c);
    if (uVar1 != 0) {
      *param_2 = *(uint *)(param_1 + 0x28);
      uVar2 = (ulonglong)uVar1;
    }
  }
  return uVar2;
}

