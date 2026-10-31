/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d3e32 */

void FUN_1400d3e32(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1400d30d4();
  plVar1 = *(longlong **)(param_1 + 0x48);
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
    *plVar1 = 0;
    *(int *)(plVar1 + 1) = (int)(longlong)(float)param_2;
    *(int *)((longlong)plVar1 + 0xc) = (int)(longlong)(float)((ulonglong)param_2 >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001400d3eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*puVar2 + 0x68))((longlong *)*puVar2,plVar1 + 1,plVar1);
    return;
  }
  return;
}

