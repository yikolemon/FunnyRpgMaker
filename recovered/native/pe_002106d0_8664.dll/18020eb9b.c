/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020eb9b */

undefined8 FUN_18020eb9b(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18020ebde();
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

