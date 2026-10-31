/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b464a */

void FUN_1400b464a(undefined1 *param_1,ulonglong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 auStack_858 [32];
  undefined1 local_838 [1024];
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_858;
  if (param_2 == 0) {
    iVar1 = FUN_1400d2196(0x7ffd,param_1);
    param_2 = (ulonglong)iVar1;
  }
  puVar8 = param_1;
  if (param_2 < 4) {
    puVar8 = local_438;
    FUN_1400d1f23(0x7ffd,puVar8,param_1);
    FUN_1400d1f23(0x7ffd,local_438 + param_2,s_DXBDXARC_1401ca09c);
    iVar1 = FUN_1400d2196(0x7ffd,puVar8);
    param_2 = (ulonglong)iVar1;
  }
  if (param_2 < 0x401) {
    if (param_2 == 0) {
      uVar5 = 0;
      puVar4 = local_838;
      uVar2 = FUN_1400b47c8(puVar4,0);
      goto LAB_1400b4764;
    }
    puVar4 = local_838;
  }
  else {
    puVar4 = (undefined1 *)_malloc_base(param_2);
  }
  uVar6 = 2;
  uVar5 = 0;
  do {
    puVar4[uVar5 & 0xffffffff] = puVar8[uVar5 * 2];
    uVar7 = (ulonglong)uVar6;
    uVar5 = uVar5 + 1;
    uVar6 = uVar6 + 2;
  } while (uVar7 < param_2);
  uVar2 = FUN_1400b47c8(puVar4,uVar5 & 0xffffffff);
  uVar5 = 0;
  if (1 < param_2) {
    uVar7 = 1;
    uVar6 = 3;
    do {
      puVar4[uVar5] = puVar8[uVar7];
      uVar9 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar9;
      uVar7 = (ulonglong)uVar6;
      uVar6 = uVar6 + 2;
    } while (uVar7 < param_2);
    uVar5 = (ulonglong)uVar9;
  }
LAB_1400b4764:
  uVar3 = FUN_1400b47c8(puVar4,uVar5);
  *param_3 = uVar2;
  *(char *)(param_3 + 1) = (char)uVar3;
  *(char *)((longlong)param_3 + 5) = (char)((uint)uVar3 >> 8);
  *(char *)((longlong)param_3 + 6) = (char)((uint)uVar3 >> 0x10);
  if (0x400 < param_2) {
    thunk_FUN_1401212e0(puVar4);
  }
  if (DAT_1401c9640 == (local_38 ^ (ulonglong)auStack_858)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_38 ^ (ulonglong)auStack_858);
}

