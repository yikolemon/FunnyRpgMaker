/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006cd18 */

uint FUN_14006cd18(uint param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = *(short *)(param_2 + 2 + uVar3 * 2) - *(short *)(param_2 + uVar3 * 2);
      uVar1 = (uint)uVar2;
      if ((short)uVar2 <= (short)param_3) {
        uVar1 = param_3;
      }
      param_3 = uVar1;
      uVar3 = uVar3 + 2;
    } while (uVar3 < param_1);
    return param_3;
  }
  return param_3;
}

