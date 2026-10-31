/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802784ec */

ulonglong FUN_1802784ec(int param_1,uint param_2,longlong *param_3)

{
  ushort *puVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 == (longlong *)0x0) {
    puVar1 = __pctype_func();
    if (param_1 + 1U < 0x101) {
      uVar3 = puVar1[param_1] & param_2;
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
    uVar2 = FUN_180296864(param_1);
  }
  return uVar2;
}

