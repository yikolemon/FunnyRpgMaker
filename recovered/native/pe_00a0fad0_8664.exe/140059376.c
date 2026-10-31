/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140059376 */

ulonglong FUN_140059376(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  short sVar3;
  
  uVar1 = **(ulonglong **)(param_1 + 0x38);
  uVar2 = CONCAT62((int6)((ulonglong)*(ulonglong **)(param_1 + 0x38) >> 0x10),0xffff);
  if ((uVar1 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar1)) {
    sVar3 = (short)param_2;
    if (sVar3 == -1) {
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -2;
      return 0;
    }
    if ((sVar3 == *(short *)(uVar1 - 2)) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
      **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
      **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -2;
      *(short *)**(undefined8 **)(param_1 + 0x38) = sVar3;
      uVar2 = (ulonglong)param_2;
    }
  }
  return uVar2;
}

