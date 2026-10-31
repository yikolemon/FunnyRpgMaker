/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401613f5 */

undefined8
FUN_1401613f5(char *param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  uVar2 = *(undefined8 *)(param_4 + 0x30);
  iVar1 = strncmp(param_1,"COMMENT",7);
  if (iVar1 == 0) {
    if ((*(byte *)(param_4 + 1) & 0x20) != 0) {
      if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
        uVar2 = FUN_14016128f(uVar2,param_1,param_2);
        return uVar2;
      }
      goto LAB_140161557;
    }
  }
  else {
    iVar1 = strncmp(param_1,"ENDPROPERTIES",0xd);
    if (iVar1 == 0) {
      *param_5 = FUN_140160d30;
    }
    else {
      iVar1 = strncmp(param_1,"_XFREE86_GLYPH_RANGES",0x15);
      if (iVar1 != 0) {
        local_48 = uVar2;
        iVar1 = FUN_140161ca6(param_1,param_2,&local_38,&local_40);
        if (iVar1 == 0) {
          local_40 = FUN_14016135e(param_1);
          if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) goto LAB_140161547;
        }
        else {
          param_1 = local_38;
          if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
LAB_140161547:
            uVar2 = FUN_140161d50(uVar2,param_1,local_40);
            return uVar2;
          }
        }
        goto LAB_140161557;
      }
    }
  }
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return 0;
  }
LAB_140161557:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

