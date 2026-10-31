/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020113b */

ulonglong FUN_18020113b(longlong param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *_Str2;
  
  lVar4 = *(longlong *)(param_1 + 0x3e0);
  if (*(char *)(lVar4 + 0x24) == '\x02') {
    uVar3 = FUN_1801caa22(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),&DAT_180361947);
    lVar4 = FUN_1801cd293(uVar3,"glyph-dict",0);
    uVar5 = 0;
    if ((lVar4 != 0) && (*(code **)(lVar4 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001802011a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(lVar4 + 8))(param_1,param_2);
      return uVar5;
    }
  }
  else {
    lVar6 = FUN_1801cd293(*(longlong *)(param_1 + 0x90),"postscript-cmaps",1);
    uVar5 = 0;
    if ((lVar6 != 0) && (uVar5 = 0, *(int *)(lVar4 + 0x20) != 0)) {
      uVar5 = 0;
      do {
        uVar1 = *(ushort *)(*(longlong *)(lVar4 + 0x4d8) + uVar5 * 2);
        if (uVar1 < 0x187) {
          _Str2 = (char *)(**(code **)(lVar6 + 0x28))(uVar1);
        }
        else {
          _Str2 = (char *)FUN_180200c31(lVar4,uVar1 - 0x187);
        }
        if (_Str2 != (char *)0x0) {
          iVar2 = strcmp(param_2,_Str2);
          if (iVar2 == 0) goto LAB_180201211;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(lVar4 + 0x20));
      uVar5 = 0;
    }
  }
LAB_180201211:
  return uVar5 & 0xffffffff;
}

