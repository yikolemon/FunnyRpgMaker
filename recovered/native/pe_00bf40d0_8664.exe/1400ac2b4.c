/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ac2b4 */

bool FUN_1400ac2b4(WCHAR param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  bool bVar7;
  WCHAR local_res8 [4];
  
  local_res8[0] = param_1;
  uVar1 = FUN_1400a5bb4((longlong)param_2);
  if ((*(uint *)((longlong)param_2 + 0x14) & 0xc0) == 0) {
    iVar3 = FUN_1400ab30c(uVar1,local_res8,2,param_3);
    bVar7 = iVar3 == 2;
  }
  else {
    uVar2 = 0;
    uVar6 = (int)*param_2 - (int)param_2[1];
    *param_2 = (longlong)((WCHAR *)param_2[1] + 1);
    *(int *)(param_2 + 2) = (int)param_2[4] + -2;
    if ((int)uVar6 < 1) {
      if (uVar1 + 2 < 2) {
        puVar5 = &DAT_14013bf10;
      }
      else {
        puVar5 = (undefined *)
                 ((&DAT_1401433a0)[(longlong)(int)uVar1 >> 6] + (ulonglong)(uVar1 & 0x3f) * 0x48);
      }
      if (((puVar5[0x38] & 0x20) != 0) &&
         (lVar4 = FUN_1400a9098(uVar1,(LARGE_INTEGER)0x0,2), lVar4 == -1)) {
        LOCK();
        *(uint *)((longlong)param_2 + 0x14) = *(uint *)((longlong)param_2 + 0x14) | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      uVar2 = FUN_1400ab30c(uVar1,(WCHAR *)param_2[1],uVar6,param_3);
    }
    bVar7 = uVar2 == uVar6;
    *(WCHAR *)param_2[1] = local_res8[0];
  }
  return bVar7;
}

