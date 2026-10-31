/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093204 */

ulonglong FUN_140093204(int param_1,undefined8 param_2,__crt_locale_pointers *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 == (__crt_locale_pointers *)0x0) {
    lVar1 = FUN_14008ec04();
    if (param_1 + 1U < 0x101) {
      uVar3 = (uint)*(ushort *)(lVar1 + (longlong)param_1 * 2) & (uint)param_2;
    }
    uVar2 = (ulonglong)uVar3;
  }
  else if (param_1 + 1U < 0x101) {
    uVar2 = (ulonglong)
            ((uint)*(ushort *)(**(longlong **)param_3 + (longlong)param_1 * 2) & (uint)param_2);
  }
  else if ((int)(*(longlong **)param_3)[1] < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1400a5cd4(param_1,param_2,param_3);
  }
  return uVar2;
}

