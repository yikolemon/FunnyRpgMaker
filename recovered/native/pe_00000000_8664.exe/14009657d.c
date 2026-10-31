/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009657d */

void FUN_14009657d(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_140f2a910;
  if (*(char *)(DAT_140f2a910 + 0x2a40) == '\0') {
    FUN_140096502(1,param_1);
    uVar2 = FUN_1401930f8(1);
    *(undefined8 *)(lVar1 + 0x2a50) = uVar2;
  }
  return;
}

