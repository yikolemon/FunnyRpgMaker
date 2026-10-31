/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421e8d */

void __fastcall FUN_00421e8d(int *param_1,int *param_2,int param_3,int *param_4,byte *param_5)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0042222e(param_1,param_2,param_3,param_4);
  cVar1 = (char)iVar2;
  if (cVar1 == '\x02') {
    iVar2 = FUN_0042233a(param_1,param_2,0,param_3,param_4);
    cVar1 = (char)iVar2;
  }
  if (((cVar1 == 'U') || (cVar1 == '\x02')) && ((*param_5 & 4) != 0)) {
    FUN_00422489(param_1,(int)param_2,param_3,param_4,(int)param_5);
    return;
  }
  return;
}

