/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004e777 */

ulonglong FUN_14004e777(longlong param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *_Str2;
  
  lVar4 = *(longlong *)(param_1 + 0x3e0);
  if (*(char *)(lVar4 + 0x24) == '\x02') {
    plVar3 = FUN_14001d3fa((*(longlong **)(param_1 + 0x90))[1],"sfnt");
    lVar4 = FUN_14001f8d7(plVar3,"glyph-dict",'\0');
    uVar5 = 0;
    if ((lVar4 != 0) && (*(code **)(lVar4 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014004e7df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(lVar4 + 8))(param_1,param_2);
      return uVar5;
    }
  }
  else {
    lVar6 = FUN_14001f8d7(*(longlong **)(param_1 + 0x90),"postscript-cmaps",'\x01');
    uVar5 = 0;
    if ((lVar6 != 0) && (uVar5 = 0, *(int *)(lVar4 + 0x20) != 0)) {
      uVar5 = 0;
      do {
        uVar1 = *(ushort *)(*(longlong *)(lVar4 + 0x4d8) + uVar5 * 2);
        if (uVar1 < 0x187) {
          _Str2 = (char *)(**(code **)(lVar6 + 0x28))(uVar1);
        }
        else {
          _Str2 = (char *)FUN_14004e26d(lVar4,uVar1 - 0x187);
        }
        if (_Str2 != (char *)0x0) {
          iVar2 = strcmp(param_2,_Str2);
          if (iVar2 == 0) goto LAB_14004e84d;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(lVar4 + 0x20));
      uVar5 = 0;
    }
  }
LAB_14004e84d:
  return uVar5 & 0xffffffff;
}

