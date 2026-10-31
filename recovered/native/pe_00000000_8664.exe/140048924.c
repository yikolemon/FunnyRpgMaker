/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140048924 */

longlong * FUN_140048924(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_1 != param_2) {
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      param_1[7] = 0;
    }
    FUN_140007f1c(param_1,param_2);
  }
  return param_1;
}

