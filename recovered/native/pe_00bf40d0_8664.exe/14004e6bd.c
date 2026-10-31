/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004e6bd */

undefined8 FUN_14004e6bd(longlong param_1,uint param_2,char *param_3,uint param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (*(char *)(lVar1 + 0x24) == '\x02') {
    plVar2 = FUN_14001d3fa(*(longlong *)(*(longlong *)(param_1 + 0x90) + 8),"sfnt");
    puVar3 = (undefined8 *)FUN_14001f8d7(plVar2,"glyph-dict",'\0');
    uVar5 = 0xb;
    if ((puVar3 != (undefined8 *)0x0) && ((code *)*puVar3 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014004e72f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)*puVar3)(param_1,param_2,param_3,param_4);
      return uVar5;
    }
  }
  else if (*(longlong *)(lVar1 + 0x10d8) == 0) {
    uVar5 = 0xb;
  }
  else {
    pcVar4 = (char *)FUN_14004e23d(lVar1,(uint)*(ushort *)
                                                (*(longlong *)(lVar1 + 0x4d8) +
                                                (ulonglong)param_2 * 2));
    uVar5 = 0;
    if (pcVar4 != (char *)0x0) {
      FUN_140021e80(param_3,pcVar4,param_4);
    }
  }
  return uVar5;
}

