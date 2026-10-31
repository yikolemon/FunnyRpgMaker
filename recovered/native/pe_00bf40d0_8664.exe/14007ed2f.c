/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007ed2f */

undefined8 FUN_14007ed2f(uint param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_14001ecff(param_1,param_2);
  uVar3 = -uVar1;
  if ((int)-uVar1 < 0) {
    uVar3 = uVar1;
  }
  uVar4 = 0x7f;
  if (uVar3 < 0x10000) {
    uVar4 = uVar3 >> 9;
  }
  if ((int)uVar1 < 1) {
    uVar4 = uVar3 >> 9;
  }
  uVar3 = 0x80;
  if (uVar4 < 0x80) {
    uVar3 = uVar4;
  }
  uVar2 = (ulonglong)(byte)-(char)uVar3;
  if (-1 < (int)uVar1) {
    uVar2 = (ulonglong)uVar4;
  }
  return CONCAT71((int7)(uVar2 >> 8),(char)uVar2 + -0x80);
}

