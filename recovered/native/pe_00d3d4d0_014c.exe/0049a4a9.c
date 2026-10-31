/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049a4a9 */

/* Library Function - Single Match
    bool __cdecl initialize_lc_time(struct __crt_lc_time_data * const,struct __crt_locale_data *
   const)
   
   Library: Visual Studio 2019 Release */

bool __cdecl initialize_lc_time(__crt_lc_time_data *param_1,__crt_locale_data *param_2)

{
  ushort *puVar1;
  short *psVar2;
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
  int iVar16;
  uint uVar17;
  uint uVar18;
  ushort *puVar19;
  uint uVar20;
  undefined4 uStack00000014;
  undefined4 uStack00000064;
  undefined4 uStack000000b4;
  __crt_locale_data *local_18;
  undefined4 local_14;
  int local_10;
  ushort *local_c;
  __crt_lc_time_data *local_8;
  
  local_14 = 0;
  puVar19 = *(ushort **)(param_2 + 0xb4);
  local_18 = param_2;
  local_c = puVar19;
  psVar2 = FUN_0048d83d((short *)puVar19);
  uVar18 = 0;
  *(short **)(param_1 + 0x160) = psVar2;
  local_8 = (__crt_lc_time_data *)0x31;
  local_10 = 7;
  do {
    uVar17 = ((int)local_8 - 0x30U) % 7;
    uVar3 = FUN_004970c0((int *)&local_18,1,puVar19,(uint)local_8,(int *)(param_1 + uVar17 * 4));
    uVar20 = (int)local_8 - 7;
    uVar4 = FUN_004970c0((int *)&local_18,1,local_c,uVar20,(int *)(param_1 + uVar17 * 4 + 0x1c));
    uVar5 = FUN_004970c0((int *)&local_18,2,local_c,(uint)local_8,
                         (int *)(param_1 + uVar17 * 4 + 0xb4));
    puVar19 = local_c;
    uVar17 = FUN_004970c0((int *)&local_18,2,local_c,uVar20,(int *)(param_1 + uVar17 * 4 + 0xd0));
    uVar18 = uVar18 | uVar3 | uVar4 | uVar5 | uVar17;
    local_8 = (__crt_lc_time_data *)((int)local_8 + 1);
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_8 = param_1 + 0x68;
  local_c = (ushort *)0x38;
  local_10 = 0xc;
  do {
    uVar5 = (int)local_c + 0xc;
    uVar3 = FUN_004970c0((int *)&local_18,1,puVar19,uVar5,(int *)(local_8 + -0x30));
    uVar4 = FUN_004970c0((int *)&local_18,1,puVar19,(uint)local_c,(int *)local_8);
    uVar5 = FUN_004970c0((int *)&local_18,2,puVar19,uVar5,(int *)(local_8 + 0x84));
    puVar1 = local_c;
    uVar17 = FUN_004970c0((int *)&local_18,2,puVar19,(uint)local_c,(int *)(local_8 + 0xb4));
    uVar18 = uVar18 | uVar3 | uVar4 | uVar5 | uVar17;
    local_8 = local_8 + 4;
    local_c = (ushort *)((int)puVar1 + 1);
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  uStack00000014 = 0x49a620;
  iVar6 = FUN_004970c0((int *)&local_18,1,puVar19,0x28,(int *)(param_1 + 0x98));
  uStack00000014 = 0x49a637;
  iVar7 = FUN_004970c0((int *)&local_18,1,puVar19,0x29,(int *)(param_1 + 0x9c));
  uStack00000014 = 0x49a64e;
  iVar8 = FUN_004970c0((int *)&local_18,2,puVar19,0x28,(int *)(param_1 + 0x14c));
  uStack00000014 = 0x49a665;
  iVar9 = FUN_004970c0((int *)&local_18,2,puVar19,0x29,(int *)(param_1 + 0x150));
  uStack00000064 = 0x49a67f;
  iVar10 = FUN_004970c0((int *)&local_18,1,puVar19,0x1f,(int *)(param_1 + 0xa0));
  uStack00000064 = 0x49a696;
  iVar11 = FUN_004970c0((int *)&local_18,1,puVar19,0x20,(int *)(param_1 + 0xa4));
  uStack00000064 = 0x49a6b0;
  iVar12 = FUN_004970c0((int *)&local_18,1,puVar19,0x1003,(int *)(param_1 + 0xa8));
  uStack00000064 = 0x49a6ca;
  iVar13 = FUN_004970c0((int *)&local_18,0,puVar19,0x1009,(int *)(param_1 + 0xac));
  uStack000000b4 = 0x49a6e4;
  iVar14 = FUN_004970c0((int *)&local_18,2,puVar19,0x1f,(int *)(param_1 + 0x154));
  uStack000000b4 = 0x49a6fb;
  iVar15 = FUN_004970c0((int *)&local_18,2,puVar19,0x20,(int *)(param_1 + 0x158));
  uStack000000b4 = 0x49a715;
  iVar16 = FUN_004970c0((int *)&local_18,2,puVar19,0x1003,(int *)(param_1 + 0x15c));
  return (bool)('\x01' - (iVar16 != 0 ||
                         ((((((((((uVar18 != 0 || iVar6 != 0) || iVar7 != 0) || iVar8 != 0) ||
                               iVar9 != 0) || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) ||
                           iVar13 != 0) || iVar14 != 0) || iVar15 != 0)));
}

