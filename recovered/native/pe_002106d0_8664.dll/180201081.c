/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180201081 */

undefined8 FUN_180201081(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x3e0);
  if (*(char *)(lVar3 + 0x24) == '\x02') {
    uVar1 = FUN_1801caa22(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),&DAT_180361947);
    puVar2 = (undefined8 *)FUN_1801cd293(uVar1,"glyph-dict",0);
    uVar1 = 0xb;
    if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001802010f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)*puVar2)(param_1,(ulonglong)param_2,param_3,param_4);
      return uVar1;
    }
  }
  else if (*(longlong *)(lVar3 + 0x10d8) == 0) {
    uVar1 = 0xb;
  }
  else {
    lVar3 = FUN_180200c01(lVar3,*(undefined2 *)
                                 (*(longlong *)(lVar3 + 0x4d8) + (ulonglong)param_2 * 2));
    uVar1 = 0;
    if (lVar3 != 0) {
      FUN_1801cfa7d(param_3,lVar3,param_4);
    }
  }
  return uVar1;
}

