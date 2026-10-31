/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e81c4 */

undefined8 FUN_1801e81c4(ushort param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1801ca31a(param_1,param_3);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = FUN_1801ca2cd(param_1,param_2,param_3,param_4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_1801ca2cd((uint)*(ushort *)((longlong)plVar1 + 2) * 0x10000 + (uint)param_1 +
                          0x10000,param_2,param_3,param_4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *plVar1 = *plVar1 + 0x10000;
  }
  return 0;
}

