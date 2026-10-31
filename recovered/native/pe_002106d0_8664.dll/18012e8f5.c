/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012e8f5 */

undefined8 FUN_18012e8f5(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  
  lVar3 = DAT_180419160;
  if (-1 < (int)param_1) {
    iVar1 = *(int *)(DAT_180419160 + 0x15b8);
    do {
      if (param_2 == param_1) {
        return 0;
      }
      if (iVar1 <= (int)param_1) {
        return 0;
      }
      uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x15c0) + (ulonglong)param_1 * 8);
      cVar4 = FUN_18011c85c(uVar2);
      if (cVar4 != '\0') {
        return uVar2;
      }
      param_1 = param_1 + param_3;
    } while (-1 < (int)param_1);
  }
  return 0;
}

