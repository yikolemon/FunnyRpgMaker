/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100065d2 */

void FUN_100065d2(char *param_1,char *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    iVar2 = *(int *)(*param_3 + 0xc);
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Can not switch from manual to automatic indexing");
    }
    *(int *)(*param_3 + 0xc) = iVar2 + 1;
LAB_1000665a:
    param_3[1] = iVar2;
    if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    local_10 = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (char *)FUN_1000ae8c(param_1,param_2,&local_10);
    }
    if ((param_1 != param_2) && ((*param_1 == ':' || (*param_1 == '}')))) {
      if (0 < *(int *)(*param_3 + 0xc)) {
                    /* WARNING: Subroutine does not return */
        FUN_10006198("Can not switch from automatic to manual indexing");
      }
      *(undefined4 *)(*param_3 + 0xc) = 0xffffffff;
      iVar2 = local_10;
      goto LAB_1000665a;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10006198("Invalid format string.");
}

