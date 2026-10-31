/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10044f20 */

void FUN_10044f20(short *param_1,short *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  sVar1 = *param_1;
  if ((sVar1 == 0x7d) || (sVar1 == 0x3a)) {
    iVar2 = *(int *)(*param_3 + 0xc);
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Can not switch from manual to automatic indexing");
    }
    *(int *)(*param_3 + 0xc) = iVar2 + 1;
LAB_10044fac:
    param_3[1] = iVar2;
    if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  if ((ushort)(sVar1 - 0x30U) < 10) {
    local_10 = 0;
    if (sVar1 == 0x30) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (short *)FUN_10045c3a(param_1,param_2,&local_10);
    }
    if ((param_1 != param_2) && ((*param_1 == 0x3a || (*param_1 == 0x7d)))) {
      if (0 < *(int *)(*param_3 + 0xc)) {
                    /* WARNING: Subroutine does not return */
        FUN_10006198("Can not switch from automatic to manual indexing");
      }
      *(undefined4 *)(*param_3 + 0xc) = 0xffffffff;
      iVar2 = local_10;
      goto LAB_10044fac;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10006198("Invalid format string.");
}

