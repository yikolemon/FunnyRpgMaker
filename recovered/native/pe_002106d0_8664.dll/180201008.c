/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180201008 */

undefined8 FUN_180201008(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (((*(byte *)(param_1 + 8) & 8) != 0) && (*(longlong *)(param_1 + 0x2d0) != 0)) {
    uVar2 = FUN_1801caa22(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),&DAT_180361947);
    puVar3 = (undefined8 *)FUN_1801cd293(uVar2,"postscript-font-name",0);
    if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000180201067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar3)(param_1);
      return uVar2;
    }
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x5b0);
  }
  return uVar2;
}

