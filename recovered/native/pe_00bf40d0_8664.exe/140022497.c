/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140022497 */

void FUN_140022497(longlong *param_1,longlong *param_2,int param_3,longlong *param_4,byte *param_5)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_1400228e3(param_1,param_2,param_3,param_4);
  cVar1 = (char)uVar2;
  if (cVar1 == '\x02') {
    uVar2 = FUN_140022a21(param_1,param_2,0,param_3,param_4);
    cVar1 = (char)uVar2;
  }
  if (((cVar1 == 'U') || (cVar1 == '\x02')) && ((*param_5 & 4) != 0)) {
    FUN_140022bc2(param_1,(longlong)param_2,param_3,param_4,(longlong)param_5);
    return;
  }
  return;
}

