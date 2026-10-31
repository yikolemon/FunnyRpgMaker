/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180088bbc */

longlong * FUN_180088bbc(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  lVar4 = lVar3;
  if (lVar3 != param_1[1]) {
    do {
      cVar1 = FUN_18001ba14(lVar4,param_3);
      if (cVar1 != '\0') {
        uVar2 = 0;
        goto LAB_180088c1a;
      }
      lVar4 = lVar4 + 0x30;
      lVar3 = lVar3 + 0x30;
    } while (lVar4 != param_1[1]);
  }
  FUN_180088c32(param_1,param_3,param_4);
  lVar3 = param_1[1] + -0x30;
  uVar2 = 1;
LAB_180088c1a:
  *param_2 = lVar3;
  *(undefined1 *)(param_2 + 1) = uVar2;
  return param_2;
}

