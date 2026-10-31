/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140180ddb */

undefined8 FUN_140180ddb(void)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_14012b378();
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

