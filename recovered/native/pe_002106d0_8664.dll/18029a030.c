/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029a030 */

/* Library Function - Single Match
    bool __cdecl initialize_lc_time(struct __crt_lc_time_data * __ptr64 const,struct
   __crt_locale_data * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl initialize_lc_time(__crt_lc_time_data *param_1,__crt_locale_data *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  __crt_lc_time_data *p_Var18;
  longlong lVar19;
  int iVar20;
  __crt_locale_data *local_38;
  undefined8 local_30;
  
  uVar1 = *(undefined8 *)(param_2 + 0x150);
  uVar17 = 0;
  local_30 = 0;
  local_38 = param_2;
  uVar16 = FUN_180280bcc(uVar1);
  *(undefined8 *)(param_1 + 0x2b8) = uVar16;
  iVar20 = 0x31;
  lVar19 = 7;
  do {
    p_Var18 = param_1 + (ulonglong)((iVar20 - 0x30U) % 7) * 8;
    uVar2 = FUN_180293248(&local_38,1,uVar1,iVar20,p_Var18);
    uVar3 = FUN_180293248(&local_38,1,uVar1,iVar20 + -7,p_Var18 + 0x38);
    uVar4 = FUN_180293248(&local_38,2,uVar1,iVar20,p_Var18 + 0x160);
    uVar5 = FUN_180293248(&local_38,2,uVar1,iVar20 + -7,p_Var18 + 0x198);
    uVar17 = uVar17 | uVar2 | uVar3 | uVar4 | uVar5;
    iVar20 = iVar20 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  iVar20 = 0x38;
  lVar19 = 0xc;
  p_Var18 = param_1 + 0xd0;
  do {
    uVar2 = FUN_180293248(&local_38,1,uVar1,iVar20 + 0xc,p_Var18 + -0x60);
    uVar3 = FUN_180293248(&local_38,1,uVar1,iVar20,p_Var18);
    uVar4 = FUN_180293248(&local_38,2,uVar1,iVar20 + 0xc,p_Var18 + 0x100);
    uVar5 = FUN_180293248(&local_38,2,uVar1,iVar20,p_Var18 + 0x160);
    uVar17 = uVar17 | uVar2 | uVar3 | uVar4 | uVar5;
    p_Var18 = p_Var18 + 8;
    iVar20 = iVar20 + 1;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  iVar20 = FUN_180293248(&local_38,1,uVar1,0x28,param_1 + 0x130);
  iVar6 = FUN_180293248(&local_38,1,uVar1,0x29,param_1 + 0x138);
  iVar7 = FUN_180293248(&local_38,2,uVar1,0x28,param_1 + 0x290);
  iVar8 = FUN_180293248(&local_38,2,uVar1,0x29,param_1 + 0x298);
  iVar9 = FUN_180293248(&local_38,1,uVar1,0x1f,param_1 + 0x140);
  iVar10 = FUN_180293248(&local_38,1,uVar1,0x20,param_1 + 0x148);
  iVar11 = FUN_180293248(&local_38,1,uVar1,0x1003,param_1 + 0x150);
  iVar12 = FUN_180293248(&local_38,0,uVar1,0x1009,param_1 + 0x158);
  iVar13 = FUN_180293248(&local_38,2,uVar1,0x1f,param_1 + 0x2a0);
  iVar14 = FUN_180293248(&local_38,2,uVar1,0x20,param_1 + 0x2a8);
  iVar15 = FUN_180293248(&local_38,2,uVar1,0x1003,param_1 + 0x2b0);
  return iVar15 == 0 &&
         ((((((((((uVar17 == 0 && iVar20 == 0) && iVar6 == 0) && iVar7 == 0) && iVar8 == 0) &&
              iVar9 == 0) && iVar10 == 0) && iVar11 == 0) && iVar12 == 0) && iVar13 == 0) &&
         iVar14 == 0);
}

