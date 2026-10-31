/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140274733 */

undefined8 FUN_140274733(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = -4;
  while( true ) {
    uVar1 = *param_1;
    if (uVar1 == 0) {
      return 0;
    }
    if (((uVar1 < 0x20) && (uVar1 != 0xd)) && (uVar1 != 10)) break;
    param_1 = param_1 + 1;
    uVar3 = lVar2 >> 2;
    lVar2 = lVar2 + -4;
    if (param_2 <= uVar3) {
      return 0;
    }
  }
  return 1;
}

