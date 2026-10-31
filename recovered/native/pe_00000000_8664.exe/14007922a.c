/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007922a */

ulonglong FUN_14007922a(longlong param_1,undefined *param_2,undefined *param_3)

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
    if (param_2 == (undefined *)0x0) {
      param_2 = &DAT_140edcdbf;
      param_3 = &DAT_140edcdbf;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x108);
    puVar6 = puVar5 + (longlong)*(int *)(param_1 + 0x100) * 2;
    do {
      pcVar1 = (char *)*puVar5;
      if (pcVar1 != (char *)puVar5[1]) {
        if (*pcVar1 == '-') {
          lVar2 = FUN_140077c22(param_2,param_3,pcVar1 + 1);
          if (lVar2 != 0) {
            uVar3 = 0;
            goto LAB_1400792c0;
          }
        }
        else {
          lVar2 = FUN_140077c22(param_2,param_3);
          if (lVar2 != 0) goto LAB_1400792c0;
        }
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar6);
    uVar3 = CONCAT71(uVar4,*(int *)(param_1 + 0x110) == 0);
  }
LAB_1400792c0:
  return uVar3 & 0xffffffff;
}

