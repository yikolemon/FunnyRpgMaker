/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400357f8 */

undefined8 FUN_1400357f8(ushort param_1,uint param_2,uint *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14001ccf2((uint)param_1,(longlong)param_3);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = FUN_14001cca5((uint)param_1,(ulonglong)(param_2 & 0xffff),param_3,param_4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    uVar2 = FUN_14001cca5((uint)*(ushort *)((longlong)plVar1 + 2) * 0x10000 + (uint)param_1 +
                          0x10000,(ulonglong)(param_2 & 0xffff),param_3,param_4);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *plVar1 = *plVar1 + 0x10000;
  }
  return 0;
}

