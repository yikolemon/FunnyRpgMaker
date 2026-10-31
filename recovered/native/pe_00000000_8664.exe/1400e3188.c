/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e3188 */

longlong FUN_1400e3188(longlong param_1,ushort param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((ulonglong)param_2 < (ulonglong)(longlong)*(int *)(param_1 + 0x20)) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2);
    uVar2 = (ulonglong)uVar1;
    if (uVar1 != 0xffff) {
      if (uVar1 == 0xfffe) {
        uVar2 = (ulonglong)*(int *)(param_1 + 0x40);
      }
      return uVar2 * 0x2c + *(longlong *)(param_1 + 0x38);
    }
  }
  lVar3 = FUN_1400e5ef0(param_1,param_2,0);
  lVar4 = (longlong)*(int *)(param_1 + 0x40) * 0x2c + *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    lVar4 = lVar3;
  }
  return lVar4;
}

