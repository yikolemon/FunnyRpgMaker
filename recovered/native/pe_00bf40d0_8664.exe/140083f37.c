/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140083f37 */

undefined8 FUN_140083f37(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1[0x40f] = (longlong)param_1 + 0x1074;
  param_1[5] = (longlong)param_1 + 0x1074;
  *(undefined4 *)(param_1 + 6) = 0x1000;
  while( true ) {
    if (((int)param_1[4] == 0) && (uVar2 = FUN_1400840c6(param_1), (int)uVar2 != 0)) {
      return uVar2;
    }
    iVar1 = FUN_14008264e(param_1 + 3,0);
    if (iVar1 != 0) break;
    if ((int)param_1[6] == 0) {
      return 0;
    }
  }
  if (iVar1 != 1) {
    param_1[0x410] = param_1[0x40f];
    return 0x55;
  }
  param_1[0x410] = param_1[5];
  if (param_1[5] == param_1[0x40f]) {
    return 0x55;
  }
  return 0;
}

