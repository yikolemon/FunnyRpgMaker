/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048efc1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0048efc1(int param_1)

{
  int *piVar1;
  int iVar2;
  __acrt_ptd *p_Var3;
  int *piVar4;
  short *psVar5;
  uint local_10;
  int *local_c;
  uint local_8;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else if ((param_1 == 2) || (param_1 == 1)) {
    GetModuleFileNameW((HMODULE)0x0,(LPWSTR)&DAT_00521700,0x104);
    _DAT_005216cc = &DAT_00521700;
    if ((DAT_005216e0 == (short *)0x0) || (psVar5 = DAT_005216e0, *DAT_005216e0 == 0)) {
      psVar5 = (short *)&DAT_00521700;
    }
    local_8 = 0;
    local_10 = 0;
    FUN_0048f0f7(psVar5,(undefined4 *)0x0,(short *)0x0,(int *)&local_8,(int *)&local_10);
    piVar4 = FUN_0048ef72(local_8,local_10,2);
    if (piVar4 == (int *)0x0) {
      p_Var3 = FUN_0048f66d();
      iVar2 = 0xc;
      *(undefined4 *)p_Var3 = 0xc;
    }
    else {
      FUN_0048f0f7(psVar5,piVar4,(short *)(piVar4 + local_8),(int *)&local_8,(int *)&local_10);
      if (param_1 != 1) {
        local_c = (int *)0x0;
        iVar2 = FUN_0049c118(piVar4,&local_c);
        piVar1 = local_c;
        if (iVar2 == 0) {
          _DAT_005216d0 = 0;
          iVar2 = *local_c;
          while (iVar2 != 0) {
            local_c = local_c + 1;
            _DAT_005216d0 = _DAT_005216d0 + 1;
            iVar2 = *local_c;
          }
          local_c = (int *)0x0;
          _DAT_005216d8 = piVar1;
          FUN_00495f00((LPVOID)0x0);
          iVar2 = 0;
        }
        else {
          FUN_00495f00(local_c);
        }
        local_c = (int *)0x0;
        FUN_00495f00(piVar4);
        return iVar2;
      }
      _DAT_005216d0 = local_8 - 1;
      iVar2 = 0;
      _DAT_005216d8 = piVar4;
    }
    FUN_00495f00((LPVOID)0x0);
  }
  else {
    p_Var3 = FUN_0048f66d();
    iVar2 = 0x16;
    *(undefined4 *)p_Var3 = 0x16;
    FUN_00495c88();
  }
  return iVar2;
}

