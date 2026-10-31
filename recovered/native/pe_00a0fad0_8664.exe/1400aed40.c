/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400aed40 */

longlong * FUN_1400aed40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = FUN_1400d3680(0x60);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *param_1 = lVar2;
  lVar1 = param_2[1];
  for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x40) {
    FUN_1400aef14(param_1,lVar2,lVar3);
  }
  return param_1;
}

