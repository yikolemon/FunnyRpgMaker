/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004e859 */

undefined8 FUN_14004e859(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x96;
  if (((undefined *)param_1[2] != &DAT_1400f5d70) && ((undefined *)param_1[2] != &DAT_1400f5dc0)) {
    plVar1 = FUN_14001d3fa(*(longlong *)(*(longlong *)(*param_1 + 0x90) + 8),"sfnt");
    uVar3 = 0;
    puVar2 = (undefined8 *)FUN_14001f8d7(plVar1,"tt-cmaps",'\0');
    if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014004e8cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar2)(param_1,param_2);
      return uVar3;
    }
  }
  return uVar3;
}

