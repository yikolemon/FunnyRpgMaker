/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401341c4 */

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
  
  bVar1 = *(byte *)((&DAT_1403551e0)[(longlong)param_1 >> 6] + 0x38 +
                   (ulonglong)(param_1 & 0x3f) * 0x48);
  if (((bVar1 & 0x48) == 0) && ((char)bVar1 < '\0')) {
    lVar3 = FUN_14012a2b0(param_1,0xffffffffffffffff,2);
    if (lVar3 == -1) {
      piVar4 = (int *)FUN_140113df8();
      if (*piVar4 == 0x83) goto LAB_140134273;
    }
    else {
      local_res8[0] = 0;
      iVar2 = FUN_14012aeac(param_1,local_res8,1);
      if ((iVar2 == 0) && (local_res8[0] == 0x1a)) {
        iVar2 = FUN_14013568c(param_1,lVar3);
        if (iVar2 == -1) goto LAB_140134226;
      }
      lVar3 = FUN_14012a2b0(param_1,0,0);
      if (lVar3 != -1) goto LAB_140134273;
    }
LAB_140134226:
    piVar4 = (int *)FUN_140113dd4();
    iVar2 = *piVar4;
  }
  else {
LAB_140134273:
    iVar2 = 0;
  }
  return iVar2;
}

