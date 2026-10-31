/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140150d0c */

ulonglong FUN_140150d0c(char *param_1,int param_2,uint param_3,void *param_4)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((*param_1 != '\0') && (*(int *)(param_1 + 0x10) == param_2)) &&
     (*(uint *)(param_1 + 0x14) == param_3)) {
    if (param_3 != 0) {
      iVar1 = memcmp(param_4,*(void **)(param_1 + 0x18),(ulonglong)param_3 << 2);
      if (iVar1 != 0) goto LAB_140150d42;
    }
    uVar2 = 0;
  }
LAB_140150d42:
  return uVar2 & 0xffffffff;
}

