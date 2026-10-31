/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015e287 */

undefined8 FUN_14015e287(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14015e2ca();
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

