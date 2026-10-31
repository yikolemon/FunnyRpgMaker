/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fcf3d */

undefined8 FUN_1800fcf3d(int *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  if (*param_1 == 0x52727464) {
    lVar3 = 0xa8;
    do {
      piVar1 = *(int **)((longlong)param_1 + lVar3);
      if (piVar1 != (int *)0x0) {
        if (piVar1 < param_1) {
          return 0;
        }
        if (param_1 + 0x4000 <= piVar1) {
          return 0;
        }
      }
      lVar3 = lVar3 + 0x60;
    } while (lVar3 != 0x10008);
    uVar2 = 1;
  }
  return uVar2;
}

