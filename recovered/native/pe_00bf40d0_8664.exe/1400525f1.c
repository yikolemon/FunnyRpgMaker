/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400525f1 */

void FUN_1400525f1(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x30);
    if (param_1[5] != 0) {
      FUN_14002115a(lVar1,param_1 + 5);
    }
    FUN_14001c53d(lVar2,param_1[4]);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

