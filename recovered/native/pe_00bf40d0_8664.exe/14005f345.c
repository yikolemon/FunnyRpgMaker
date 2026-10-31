/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005f345 */

int FUN_14005f345(byte *param_1,uint param_2,undefined8 param_3,longlong param_4,undefined8 *param_5
                 )

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStackY_68 [32];
  byte *local_40;
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  lVar1 = *(longlong *)(param_4 + 0x30);
  iVar2 = strncmp((char *)param_1,"COMMENT",7);
  if (iVar2 == 0) {
    if ((*(byte *)(param_4 + 1) & 0x20) != 0) {
      if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStackY_68)) {
        iVar2 = FUN_14005f1df(lVar1,(longlong)param_1,param_2);
        return iVar2;
      }
      goto LAB_14005f4a7;
    }
  }
  else {
    iVar2 = strncmp((char *)param_1,"ENDPROPERTIES",0xd);
    if (iVar2 == 0) {
      *param_5 = FUN_14005ec80;
    }
    else {
      iVar2 = strncmp((char *)param_1,"_XFREE86_GLYPH_RANGES",0x15);
      if (iVar2 != 0) {
        uVar3 = FUN_14005fbf6(param_1,param_2,&local_38,&local_40,lVar1);
        if ((int)uVar3 == 0) {
          local_40 = (byte *)FUN_14005f2ae((char *)param_1);
          if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStackY_68)) goto LAB_14005f497;
        }
        else {
          param_1 = local_38;
          if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStackY_68)) {
LAB_14005f497:
            iVar2 = FUN_14005fca0(lVar1,(char *)param_1,local_40);
            return iVar2;
          }
        }
        goto LAB_14005f4a7;
      }
    }
  }
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStackY_68)) {
    return 0;
  }
LAB_14005f4a7:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStackY_68);
}

