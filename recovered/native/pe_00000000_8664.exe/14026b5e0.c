/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14026b5e0 */

longlong * FUN_14026b5e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = FUN_14044ab00(0x30);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *param_1 = lVar2;
  lVar1 = param_2[1];
  for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
    FUN_1402d75dc(param_1,lVar2,lVar3);
  }
  return param_1;
}

