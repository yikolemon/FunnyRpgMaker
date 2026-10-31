/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400943e0 */

void FUN_1400943e0(short *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  int local_res18 [2];
  longlong local_res20;
  
  if (0 < param_3) {
    local_res20 = param_4;
    iVar2 = 0;
    plVar3 = (longlong *)local_res18;
    local_res18[0] = param_3;
    do {
      plVar3 = plVar3 + 1;
      uVar1 = FUN_1400a6d90(param_1,param_2,*plVar3);
      if ((int)uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res18[0]);
  }
  return;
}

