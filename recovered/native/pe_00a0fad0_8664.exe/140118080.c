/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140118080 */

ulonglong FUN_140118080(int param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 == (longlong *)0x0) {
    lVar1 = FUN_14010b500();
    if (param_1 + 1U < 0x101) {
      uVar3 = *(ushort *)(lVar1 + (longlong)param_1 * 2) & param_2;
    }
    uVar2 = (ulonglong)uVar3;
  }
  else if (param_1 + 1U < 0x101) {
    uVar2 = (ulonglong)(*(ushort *)(*(longlong *)*param_3 + (longlong)param_1 * 2) & param_2);
  }
  else if ((int)((longlong *)*param_3)[1] < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14012ec80(param_1);
  }
  return uVar2;
}

