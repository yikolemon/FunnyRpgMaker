/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004ec5c */

ulonglong FUN_14004ec5c(char *param_1,int param_2,uint param_3,void *param_4)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((*param_1 != '\0') && (*(int *)(param_1 + 0x10) == param_2)) &&
     (*(uint *)(param_1 + 0x14) == param_3)) {
    if (param_3 != 0) {
      iVar1 = memcmp(param_4,*(void **)(param_1 + 0x18),(ulonglong)param_3 << 2);
      if (iVar1 != 0) goto LAB_14004ec92;
    }
    uVar2 = 0;
  }
LAB_14004ec92:
  return uVar2 & 0xffffffff;
}

