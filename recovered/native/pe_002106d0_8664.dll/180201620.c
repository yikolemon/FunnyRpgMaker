/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180201620 */

ulonglong FUN_180201620(char *param_1,int param_2,uint param_3,void *param_4)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((*param_1 != '\0') && (*(int *)(param_1 + 0x10) == param_2)) &&
     (*(uint *)(param_1 + 0x14) == param_3)) {
    if (param_3 != 0) {
      iVar1 = memcmp(param_4,*(void **)(param_1 + 0x18),(ulonglong)param_3 << 2);
      if (iVar1 != 0) goto LAB_180201656;
    }
    uVar2 = 0;
  }
LAB_180201656:
  return uVar2 & 0xffffffff;
}

