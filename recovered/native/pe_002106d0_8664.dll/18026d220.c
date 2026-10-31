/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026d220 */

ulonglong FUN_18026d220(undefined1 param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_18026d180(param_3 != 0);
    return uVar2;
  }
  if (param_2 == 1) {
    uVar2 = FUN_18026d070(param_1,param_3);
    return uVar2;
  }
  if (param_2 == 2) {
    bVar1 = FUN_18023da50();
    return (ulonglong)bVar1;
  }
  if (param_2 != 3) {
    return 1;
  }
  bVar1 = FUN_18023da80();
  return (ulonglong)bVar1;
}

