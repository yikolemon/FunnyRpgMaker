/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004b563 */

bool FUN_14004b563(longlong *param_1,uint *param_2,longlong *param_3,char param_4)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  
  pcVar1 = (char *)param_1[2];
  (*(code *)param_1[7])();
  if (((char *)*param_1 < pcVar1) && ((byte)(*(char *)*param_1 - 0x30U) < 10)) {
    uVar3 = (*(code *)param_1[9])(param_1);
    (*(code *)param_1[8])(param_1);
    lVar2 = *param_1;
    *param_3 = lVar2 + 1;
    if ((longlong)(ulonglong)uVar3 < (longlong)pcVar1 - (lVar2 + 1) && -1 < (int)uVar3) {
      *param_1 = (ulonglong)uVar3 + *param_1 + 1;
      *param_2 = uVar3;
      return (int)param_1[3] == 0;
    }
  }
  if (param_4 == '\0') {
    *(undefined4 *)(param_1 + 3) = 3;
  }
  return false;
}

