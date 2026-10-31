/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018767c */

void FUN_14018767c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    FUN_140187faa(lVar1);
    FUN_140128b39(uVar2,lVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

