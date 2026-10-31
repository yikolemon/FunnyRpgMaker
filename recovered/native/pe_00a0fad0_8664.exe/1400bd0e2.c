/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bd0e2 */

longlong * FUN_1400bd0e2(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != param_4) {
    lVar2 = FUN_1400ce9f0(param_4,*(undefined8 *)(param_1 + 8),param_3);
    lVar1 = *(longlong *)(param_1 + 8);
    for (lVar3 = lVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x58) {
      FUN_1400ab507(lVar3);
    }
    *(longlong *)(param_1 + 8) = lVar2;
  }
  *param_2 = param_3;
  return param_2;
}

