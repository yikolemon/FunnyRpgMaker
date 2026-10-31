/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a7825 */

undefined8 FUN_1400a7825(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  
  lVar3 = DAT_140f2a910;
  if (-1 < (int)param_1) {
    iVar1 = *(int *)(DAT_140f2a910 + 0x15b8);
    do {
      if (param_2 == param_1) {
        return 0;
      }
      if (iVar1 <= (int)param_1) {
        return 0;
      }
      uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x15c0) + (ulonglong)param_1 * 8);
      cVar4 = FUN_140095b18(uVar2);
      if (cVar4 != '\0') {
        return uVar2;
      }
      param_1 = param_1 + param_3;
    } while (-1 < (int)param_1);
  }
  return 0;
}

