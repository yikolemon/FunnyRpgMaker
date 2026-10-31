/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401604de */

undefined8 FUN_1401604de(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14016053d(*(undefined8 *)(param_1 + 0xe8));
  if (lVar2 == 0) {
    return 6;
  }
  iVar1 = *(int *)(lVar2 + 8);
  if (iVar1 == 3) {
    *param_3 = 3;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        *param_3 = 1;
        *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar2 + 0x10);
        return 0;
      }
      return 6;
    }
    *param_3 = 2;
  }
  param_3[2] = *(undefined4 *)(lVar2 + 0x10);
  return 0;
}

