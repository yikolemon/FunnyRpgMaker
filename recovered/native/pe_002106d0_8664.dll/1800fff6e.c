/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fff6e */

ulonglong FUN_1800fff6e(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    if (param_2 == (undefined1 *)0x0) {
      param_2 = &DAT_1803861e4;
      param_3 = &DAT_1803861e4;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x108);
    puVar6 = puVar5 + (longlong)*(int *)(param_1 + 0x100) * 2;
    do {
      pcVar1 = (char *)*puVar5;
      if (pcVar1 != (char *)puVar5[1]) {
        if (*pcVar1 == '-') {
          lVar2 = FUN_1800fe966(param_2,param_3,pcVar1 + 1);
          if (lVar2 != 0) {
            uVar3 = 0;
            goto LAB_180100004;
          }
        }
        else {
          lVar2 = FUN_1800fe966(param_2,param_3);
          if (lVar2 != 0) goto LAB_180100004;
        }
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar6);
    uVar3 = CONCAT71(uVar4,*(int *)(param_1 + 0x110) == 0);
  }
LAB_180100004:
  return uVar3 & 0xffffffff;
}

