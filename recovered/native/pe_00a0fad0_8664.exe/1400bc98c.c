/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bc98c */

void FUN_1400bc98c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  if (lVar2 != lVar1) {
    do {
      FUN_1400ab507(lVar2);
      lVar2 = lVar2 + 0x58;
    } while (lVar2 != lVar1);
    param_1[1] = *param_1;
  }
  lVar2 = param_1[3];
  FUN_1400ab21a(param_1 + 3,param_1 + 3,*(undefined8 *)(lVar2 + 8));
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  param_1[4] = 0;
  lVar2 = param_1[5];
  FUN_1400ab35a(param_1 + 5,param_1 + 5,*(undefined8 *)(lVar2 + 8));
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  param_1[6] = 0;
  return;
}

