/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005cee6 */

undefined8 * FUN_14005cee6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  else {
    lVar2 = lVar1 + 0x30;
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x28);
    }
    FUN_1400027d2(param_2,lVar2);
  }
  return param_2;
}

