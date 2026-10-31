/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140113bbc */

undefined8 FUN_140113bbc(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar6;
  longlong lVar5;
  
  __acrt_lock(0xb);
  uVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    *param_1 = 0;
    if (param_2 != (longlong *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != 0) {
      lVar3 = FUN_140113cb0(param_3);
      if (lVar3 != 0) {
        lVar4 = -1;
        do {
          lVar5 = lVar4;
          lVar4 = lVar5 + 1;
        } while (*(char *)(lVar3 + lVar4) != '\0');
        lVar5 = lVar5 + 2;
        lVar3 = _calloc_base(lVar5,1);
        *param_1 = lVar3;
        if (lVar3 == 0) {
          puVar2 = (undefined4 *)FUN_140113dd4();
          uVar6 = 0xc;
          *puVar2 = 0xc;
        }
        else {
          iVar1 = FUN_140120d90();
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (param_2 != (longlong *)0x0) {
            *param_2 = lVar5;
          }
        }
      }
      goto LAB_140113c71;
    }
  }
  puVar2 = (undefined4 *)FUN_140113dd4();
  uVar6 = 0x16;
  *puVar2 = 0x16;
  FUN_140120ee8();
LAB_140113c71:
  __acrt_unlock(0xb);
  return uVar6;
}

