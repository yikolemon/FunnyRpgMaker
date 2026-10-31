/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401546a1 */

void FUN_1401546a1(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    if (param_1[5] != 0) {
      FUN_14012dd2b(lVar1,param_1 + 5);
    }
    FUN_140128b39(uVar2,param_1[4]);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

