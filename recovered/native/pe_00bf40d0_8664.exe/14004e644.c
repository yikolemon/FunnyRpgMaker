/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004e644 */

undefined8 FUN_14004e644(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (((*(byte *)(param_1 + 8) & 8) != 0) && (*(longlong *)(param_1 + 0x2d0) != 0)) {
    plVar2 = FUN_14001d3fa(*(longlong *)(*(longlong *)(param_1 + 0x90) + 8),"sfnt");
    puVar3 = (undefined8 *)FUN_14001f8d7(plVar2,"postscript-font-name",'\0');
    if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014004e6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)*puVar3)(param_1);
      return uVar4;
    }
  }
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar1 + 0x5b0);
  }
  return uVar4;
}

