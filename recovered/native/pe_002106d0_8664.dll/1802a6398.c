/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a6398 */

/* Library Function - Single Match
    int __cdecl truncate_ctrl_z_if_present(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl truncate_ctrl_z_if_present(int param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  short local_res8 [4];
  
  bVar1 = *(byte *)((&DAT_180421400)[(longlong)param_1 >> 6] + 0x38 +
                   (ulonglong)(param_1 & 0x3f) * 0x48);
  if (((bVar1 & 0x48) == 0) && ((char)bVar1 < '\0')) {
    lVar3 = FUN_180297664(param_1,0xffffffffffffffff,2);
    if (lVar3 == -1) {
      piVar4 = (int *)FUN_18027e690();
      if (*piVar4 == 0x83) goto LAB_1802a6447;
    }
    else {
      local_res8[0] = 0;
      iVar2 = FUN_18029f2d0(param_1,local_res8,1);
      if ((iVar2 == 0) && (local_res8[0] == 0x1a)) {
        iVar2 = FUN_1802a7890(param_1,lVar3);
        if (iVar2 == -1) goto LAB_1802a63fa;
      }
      lVar3 = FUN_180297664(param_1,0,0);
      if (lVar3 != -1) goto LAB_1802a6447;
    }
LAB_1802a63fa:
    piVar4 = (int *)FUN_18027e66c();
    iVar2 = *piVar4;
  }
  else {
LAB_1802a6447:
    iVar2 = 0;
  }
  return iVar2;
}

