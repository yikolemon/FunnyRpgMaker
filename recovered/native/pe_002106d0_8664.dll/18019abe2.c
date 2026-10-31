/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019abe2 */

longlong FUN_18019abe2(longlong param_1,ushort param_2)

{
  ushort uVar1;
  longlong lVar2;
  
  if ((ulonglong)param_2 < (ulonglong)(longlong)*(int *)(param_1 + 0x20)) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2);
    if (uVar1 == 0xfffe) {
      return 0;
    }
    if (uVar1 != 0xffff) {
      return (ulonglong)uVar1 * 0x2c + *(longlong *)(param_1 + 0x38);
    }
  }
  *(byte *)(param_1 + 0x4f) = *(byte *)(param_1 + 0x4f) | 8;
  lVar2 = FUN_18019a97c(param_1,param_2,0);
  *(byte *)(param_1 + 0x4f) = *(byte *)(param_1 + 0x4f) & 0xf7;
  return lVar2;
}

