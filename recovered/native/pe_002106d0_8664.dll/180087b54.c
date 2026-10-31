/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180087b54 */

ulonglong FUN_180087b54(byte *param_1)

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

