/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400439b3 */

undefined8 FUN_1400439b3(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  plVar2 = (longlong *)param_1[0x22];
  FUN_14004384f(plVar2,lVar1,(longlong)param_1);
  FUN_140043ac4((longlong)plVar2,2);
  FUN_140043ac4((longlong)plVar2,3);
  if (*(int *)(lVar1 + 0x3b0) == 0) {
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  else {
    FUN_140043ae2((longlong)plVar2,1,*(undefined8 *)(lVar1 + 0x3b8),*(int *)(lVar1 + 0x3b0));
    *(undefined4 *)(plVar2 + 0x1d) = 0;
    uVar3 = FUN_140043b1d(plVar2,(longlong)param_1);
    *(int *)(param_1 + 0x23) = (int)uVar3;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  FUN_140043cf8((longlong)plVar2,(longlong)param_1);
  return 0;
}

