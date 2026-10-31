/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006aefc */

ulonglong FUN_14006aefc(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *param_1;
  uVar2 = (ulonglong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      return ((*(longlong **)(param_1 + 8))[1] - **(longlong **)(param_1 + 8) >> 4) *
             -0x5555555555555555;
    }
    if (bVar1 == 2) {
      return (*(longlong **)(param_1 + 8))[1] - **(longlong **)(param_1 + 8) >> 4;
    }
    uVar2 = 1;
  }
  return uVar2;
}

