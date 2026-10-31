/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102689c1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_102689c1(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 local_10;
  int *local_c;
  int local_8;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else if ((param_1 == 2) || (param_1 == 1)) {
    ___acrt_initialize_multibyte();
    FUN_102790e0(0,&DAT_103a4d68,0x104);
    _DAT_103a5434 = &DAT_103a4d68;
    if ((DAT_103a5444 == (char *)0x0) || (pcVar5 = DAT_103a5444, *DAT_103a5444 == '\0')) {
      pcVar5 = &DAT_103a4d68;
    }
    local_8 = 0;
    local_10 = 0;
    FUN_10268afe(pcVar5,0,0,&local_8,&local_10);
    piVar4 = (int *)___acrt_allocate_buffer_for_argv(local_8,local_10,1);
    if (piVar4 == (int *)0x0) {
      puVar3 = (undefined4 *)FUN_10268ffd();
      iVar2 = 0xc;
      *puVar3 = 0xc;
    }
    else {
      FUN_10268afe(pcVar5,piVar4,piVar4 + local_8,&local_8,&local_10);
      if (param_1 != 1) {
        local_c = (int *)0x0;
        iVar2 = FUN_10278a55(piVar4,&local_c);
        piVar1 = local_c;
        if (iVar2 == 0) {
          _DAT_103a5438 = 0;
          iVar2 = *local_c;
          while (iVar2 != 0) {
            local_c = local_c + 1;
            _DAT_103a5438 = _DAT_103a5438 + 1;
            iVar2 = *local_c;
          }
          local_c = (int *)0x0;
          _DAT_103a543c = piVar1;
          FUN_10274120(0);
          iVar2 = 0;
        }
        else {
          FUN_10274120(local_c);
        }
        local_c = (int *)0x0;
        FUN_10274120(piVar4);
        return iVar2;
      }
      _DAT_103a5438 = local_8 + -1;
      iVar2 = 0;
      _DAT_103a543c = piVar4;
    }
    FUN_10274120(0);
  }
  else {
    puVar3 = (undefined4 *)FUN_10268ffd();
    iVar2 = 0x16;
    *puVar3 = 0x16;
    FUN_10273ea8();
  }
  return iVar2;
}

