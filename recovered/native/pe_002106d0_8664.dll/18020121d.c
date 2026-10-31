/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020121d */

undefined8 FUN_18020121d(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0x96;
  if (((undefined *)param_1[2] != &DAT_180338c50) && ((undefined *)param_1[2] != &DAT_180338ca0)) {
    uVar1 = FUN_1801caa22(*(undefined8 *)(*(longlong *)(*param_1 + 0x90) + 8),&DAT_180361947);
    uVar3 = 0;
    puVar2 = (undefined8 *)FUN_1801cd293(uVar1,"tt-cmaps",0);
    if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000180201293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar2)(param_1,param_2);
      return uVar3;
    }
  }
  return uVar3;
}

