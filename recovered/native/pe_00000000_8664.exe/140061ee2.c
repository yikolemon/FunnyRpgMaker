/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140061ee2 */

ulonglong FUN_140061ee2(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 / 3 + 0x4c4b4;
  uVar1 = 0x7ffffffffffffff;
  if (uVar2 < 0x7ffffffffffffff) {
    uVar1 = uVar2;
  }
  return uVar1;
}

