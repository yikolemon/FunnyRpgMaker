/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027b7db */

/* Library Function - Single Match
    bool __cdecl initialize_lc_time(struct __crt_lc_time_data * const,struct __crt_locale_data *
   const)
   
   Library: Visual Studio 2019 Release */

bool __cdecl initialize_lc_time(__crt_lc_time_data *param_1,__crt_locale_data *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  __crt_locale_data *local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  __crt_lc_time_data *local_8;
  
  local_14 = 0;
  iVar14 = *(int *)(param_2 + 0xb4);
  local_18 = param_2;
  local_c = iVar14;
  uVar1 = FUN_1026b3ee(iVar14);
  uVar16 = 0;
  *(undefined4 *)(param_1 + 0x160) = uVar1;
  local_8 = (__crt_lc_time_data *)0x31;
  local_10 = 7;
  do {
    uVar15 = ((int)local_8 - 0x30U) % 7;
    uVar2 = FUN_10275df0(&local_18,1,iVar14,local_8,param_1 + uVar15 * 4);
    iVar17 = (int)local_8 + -7;
    uVar3 = FUN_10275df0(&local_18,1,local_c,iVar17,param_1 + uVar15 * 4 + 0x1c);
    uVar4 = FUN_10275df0(&local_18,2,local_c,local_8,param_1 + uVar15 * 4 + 0xb4);
    iVar14 = local_c;
    uVar15 = FUN_10275df0(&local_18,2,local_c,iVar17,param_1 + uVar15 * 4 + 0xd0);
    uVar16 = uVar16 | uVar2 | uVar3 | uVar4 | uVar15;
    local_8 = (__crt_lc_time_data *)((int)local_8 + 1);
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_8 = param_1 + 0x68;
  local_c = 0x38;
  local_10 = 0xc;
  do {
    iVar17 = local_c + 0xc;
    uVar2 = FUN_10275df0(&local_18,1,iVar14,iVar17,local_8 + -0x30);
    uVar3 = FUN_10275df0(&local_18,1,iVar14,local_c,local_8);
    uVar4 = FUN_10275df0(&local_18,2,iVar14,iVar17,local_8 + 0x84);
    iVar17 = local_c;
    uVar15 = FUN_10275df0(&local_18,2,iVar14,local_c,local_8 + 0xb4);
    uVar16 = uVar16 | uVar2 | uVar3 | uVar4 | uVar15;
    local_8 = local_8 + 4;
    local_c = iVar17 + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  iVar17 = FUN_10275df0(&local_18,1,iVar14,0x28,param_1 + 0x98);
  iVar5 = FUN_10275df0(&local_18,1,iVar14,0x29,param_1 + 0x9c);
  iVar6 = FUN_10275df0(&local_18,2,iVar14,0x28,param_1 + 0x14c);
  iVar7 = FUN_10275df0(&local_18,2,iVar14,0x29,param_1 + 0x150);
  iVar8 = FUN_10275df0(&local_18,1,iVar14,0x1f,param_1 + 0xa0);
  iVar9 = FUN_10275df0(&local_18,1,iVar14,0x20,param_1 + 0xa4);
  iVar10 = FUN_10275df0(&local_18,1,iVar14,0x1003,param_1 + 0xa8);
  iVar11 = FUN_10275df0(&local_18,0,iVar14,0x1009,param_1 + 0xac);
  iVar12 = FUN_10275df0(&local_18,2,iVar14,0x1f,param_1 + 0x154);
  iVar13 = FUN_10275df0(&local_18,2,iVar14,0x20,param_1 + 0x158);
  iVar14 = FUN_10275df0(&local_18,2,iVar14,0x1003,param_1 + 0x15c);
  return (bool)('\x01' - (iVar14 != 0 ||
                         ((((((((((uVar16 != 0 || iVar17 != 0) || iVar5 != 0) || iVar6 != 0) ||
                               iVar7 != 0) || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) ||
                           iVar11 != 0) || iVar12 != 0) || iVar13 != 0)));
}

