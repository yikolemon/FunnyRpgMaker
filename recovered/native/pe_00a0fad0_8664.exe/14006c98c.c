/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006c98c */

longlong * FUN_14006c98c(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  lVar4 = lVar3;
  if (lVar3 != param_1[1]) {
    do {
      cVar1 = FUN_1400170b4(lVar4,param_3);
      if (cVar1 != '\0') {
        uVar2 = 0;
        goto LAB_14006c9ea;
      }
      lVar4 = lVar4 + 0x30;
      lVar3 = lVar3 + 0x30;
    } while (lVar4 != param_1[1]);
  }
  FUN_14006ca02(param_1,param_3,param_4);
  lVar3 = param_1[1] + -0x30;
  uVar2 = 1;
LAB_14006c9ea:
  *param_2 = lVar3;
  *(undefined1 *)(param_2 + 1) = uVar2;
  return param_2;
}

