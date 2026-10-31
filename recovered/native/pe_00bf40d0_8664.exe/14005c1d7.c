/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005c1d7 */

undefined8 FUN_14005c1d7(longlong param_1,char *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14005c21a(param_1,param_2);
  if (lVar1 == 0) {
    uVar2 = 6;
  }
  else {
    if (*(char *)(lVar1 + 8) == '\0') {
      *param_3 = 2;
      param_3[2] = *(undefined4 *)(lVar1 + 0x10);
    }
    else {
      *param_3 = 1;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(lVar1 + 0x10);
    }
    uVar2 = 0;
  }
  return uVar2;
}

