/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140099b20 */

ulonglong FUN_140099b20(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  plVar1 = (longlong *)param_1[1];
  plVar2 = *(longlong **)*param_1;
  uVar3 = FUN_1400a4268(plVar2);
  uVar4 = FUN_140099870(*(WCHAR **)param_1[2],*(ulonglong *)param_1[3],*(ulonglong *)param_1[4],
                        *(longlong **)*param_1,(longlong *)param_1[1]);
  FUN_1400a437c((char)uVar3,(int *)plVar2,plVar1);
  return uVar4;
}

