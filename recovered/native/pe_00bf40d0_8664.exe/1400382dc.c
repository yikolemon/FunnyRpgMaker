/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400382dc */

void FUN_1400382dc(longlong param_1,longlong param_2,longlong *param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ushort *puVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60 [4];
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  local_4c = 0;
  local_50 = 0;
  sVar1 = *(short *)(lVar4 + 0xc);
  sVar2 = *(short *)(lVar3 + 0x300);
  iVar6 = *(int *)(param_2 + 0x68);
  local_60[2] = 0;
  local_60[0] = 0x10000;
  local_60[1] = 0;
  if (((short)iVar6 == 0) ||
     (*(code **)((&PTR_DAT_1400f0d20)[*(int *)(*param_3 + 4)] + 0x28) == (code *)0x0))
  goto LAB_1400384b6;
  local_68 = *(longlong *)(param_2 + 0x78);
  (**(code **)((&PTR_DAT_1400f0d20)[*(int *)(*param_3 + 4)] + 0x28))(param_3,&local_50,&local_4c);
  if ((sVar1 == sVar2) && ((local_4c < 1 || (local_4c == *(int *)(lVar3 + 0x304))))) {
LAB_1400383ea:
    if ((0 < local_50) && (local_50 != *(int *)(lVar3 + 0x308))) goto LAB_140038409;
  }
  else {
    iVar5 = FUN_140039130(param_1,param_2,local_4c);
    lVar7 = (longlong)iVar5 * (longlong)*(int *)(lVar4 + 0x10);
    *(int *)(lVar3 + 0x304) = local_4c;
    *(undefined2 *)(lVar3 + 0x300) = *(undefined2 *)(lVar4 + 0xc);
    *(int *)(lVar3 + 0x30c) =
         (int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10) + 0x8000 >> 0x10;
    if (sVar1 == sVar2) goto LAB_1400383ea;
LAB_140038409:
    uVar9 = iVar6 * 0x10000;
    iVar6 = FUN_140039130(param_1,param_2,local_50);
    lVar7 = (longlong)*(int *)(lVar4 + 0x14) * (longlong)iVar6;
    *(int *)(lVar3 + 0x308) = local_50;
    *(undefined2 *)(lVar3 + 0x300) = *(undefined2 *)(lVar4 + 0xc);
    *(int *)(lVar3 + 0x310) =
         (int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10) + 0x8000 >> 0x10;
    iVar6 = FUN_14001ecff((uVar9 - iVar6) - 0x80000,uVar9);
    *(int *)(lVar3 + 0x314) = iVar6;
  }
  puVar8 = (ushort *)(local_68 + 0x98);
  FUN_14001fd0a(puVar8,*(int *)(lVar3 + 0x30c),*(int *)(lVar3 + 0x310));
  local_60[3] = *(undefined4 *)(lVar3 + 0x314);
  FUN_14001df2d((longlong)puVar8,local_60);
LAB_1400384b6:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}

