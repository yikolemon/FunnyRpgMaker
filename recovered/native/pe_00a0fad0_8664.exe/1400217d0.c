/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400217d0 */

ulonglong FUN_1400217d0(uint *param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  if ((((param_2 != 0) && (uVar1 != 0)) && (param_2 != 1)) && (uVar1 != 1)) {
    uVar4 = 0;
    if ((SBORROW4(0,param_2)) || (SBORROW4(0,uVar1))) goto LAB_140021855;
    uVar2 = -uVar1;
    if ((int)-uVar1 < 0) {
      uVar2 = uVar1;
    }
    param_4 = 0;
    if ((int)param_2 < 1 == 0 < (int)uVar1) {
      uVar3 = -param_2;
      if (-1 < (int)-param_2) {
        uVar3 = param_2;
      }
      uVar4 = 0;
      if (uVar3 < (uint)-(int)(0x80000000 / (ulonglong)uVar2)) goto LAB_140021855;
    }
    else {
      uVar3 = -param_2;
      if ((int)-param_2 < 0) {
        uVar3 = param_2;
      }
      uVar4 = param_4;
      if ((uint)(0x7fffffff / (ulonglong)uVar2) < uVar3) goto LAB_140021855;
    }
  }
  *param_1 = uVar1 * param_2;
  uVar4 = CONCAT71((int7)(param_4 >> 8),1);
LAB_140021855:
  return uVar4 & 0xffffffff;
}

