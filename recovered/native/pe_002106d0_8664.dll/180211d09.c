/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180211d09 */

undefined8
FUN_180211d09(char *param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar2 = *(undefined8 *)(param_4 + 0x30);
  iVar1 = strncmp(param_1,"COMMENT",7);
  if (iVar1 == 0) {
    if ((*(byte *)(param_4 + 1) & 0x20) != 0) {
      if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
        uVar2 = FUN_180211ba3(uVar2,param_1,param_2);
        return uVar2;
      }
      goto LAB_180211e6b;
    }
  }
  else {
    iVar1 = strncmp(param_1,"ENDPROPERTIES",0xd);
    if (iVar1 == 0) {
      *param_5 = FUN_180211644;
    }
    else {
      iVar1 = strncmp(param_1,"_XFREE86_GLYPH_RANGES",0x15);
      if (iVar1 != 0) {
        local_48 = uVar2;
        iVar1 = FUN_1802125ba(param_1,param_2,&local_38,&local_40);
        if (iVar1 == 0) {
          local_40 = FUN_180211c72(param_1);
          if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) goto LAB_180211e5b;
        }
        else {
          param_1 = local_38;
          if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
LAB_180211e5b:
            uVar2 = FUN_180212664(uVar2,param_1,local_40);
            return uVar2;
          }
        }
        goto LAB_180211e6b;
      }
    }
  }
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return 0;
  }
LAB_180211e6b:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

