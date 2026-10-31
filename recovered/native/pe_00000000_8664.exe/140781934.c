/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140781934 */

void FUN_140781934(ulonglong param_1)

{
  undefined4 uVar1;
  undefined8 uStack_18;
  
  uStack_18 = 0xa4;
  uVar1 = FUN_1407520ca();
  *(undefined8 *)((ulonglong)((int)&uStack_18 + 4) - 8) = 0x14078194f;
  FUN_1407a60d2(uVar1);
  *(undefined4 *)((param_1 & 0xffffffff) + 0x30) = uVar1;
  return;
}

