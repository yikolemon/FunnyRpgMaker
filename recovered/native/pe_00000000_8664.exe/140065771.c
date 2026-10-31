/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140065771 */

undefined8 * FUN_140065771(undefined8 *param_1,char *param_2,char *param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    cVar1 = *param_2;
    lVar2 = param_4[2];
    uVar3 = lVar2 + 1;
    if ((ulonglong)param_4[3] < uVar3) {
      (**(code **)*param_4)(param_4);
      lVar2 = param_4[2];
      uVar3 = lVar2 + 1;
    }
    param_4[2] = uVar3;
    *(short *)(param_4[1] + lVar2 * 2) = (short)cVar1;
  }
  *param_1 = param_4;
  return param_1;
}

