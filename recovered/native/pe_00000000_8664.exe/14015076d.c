/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015076d */

undefined8 FUN_14015076d(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x3e0);
  if (*(char *)(lVar3 + 0x24) == '\x02') {
    uVar1 = FUN_1401299f6(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),&DAT_140ec386a);
    puVar2 = (undefined8 *)FUN_14012c267(uVar1,"glyph-dict",0);
    uVar1 = 0xb;
    if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001401507df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)*puVar2)(param_1,(ulonglong)param_2,param_3,param_4);
      return uVar1;
    }
  }
  else if (*(longlong *)(lVar3 + 0x10d8) == 0) {
    uVar1 = 0xb;
  }
  else {
    lVar3 = FUN_1401502ed(lVar3,*(undefined2 *)
                                 (*(longlong *)(lVar3 + 0x4d8) + (ulonglong)param_2 * 2));
    uVar1 = 0;
    if (lVar3 != 0) {
      FUN_14012ea51(param_3,lVar3,param_4);
    }
  }
  return uVar1;
}

