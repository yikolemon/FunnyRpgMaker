/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049c387 */

int __cdecl FUN_0049c387(short *param_1,int param_2,uint param_3,int *param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  uVar4 = ((int)psVar2 - (int)(param_1 + 1) >> 1) + 1;
  if (~param_3 < uVar4) {
    iVar3 = 0xc;
  }
  else {
    uVar5 = param_3 + 1 + uVar4;
    psVar2 = FUN_00497060(uVar5,2);
    if (param_3 != 0) {
      iVar3 = FUN_0049a930(psVar2,uVar5,param_2,param_3);
      if (iVar3 != 0) goto LAB_0049c42e;
    }
    iVar3 = FUN_0049a930(psVar2 + param_3,uVar5 - param_3,(int)param_1,uVar4);
    if (iVar3 != 0) {
LAB_0049c42e:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar3 = FUN_0049c300(param_4);
    if (iVar3 == 0) {
      *(short **)param_4[1] = psVar2;
      param_4[1] = param_4[1] + 4;
      iVar3 = 0;
    }
    else {
      FUN_00495f00(psVar2);
    }
    FUN_00495f00((LPVOID)0x0);
  }
  return iVar3;
}

