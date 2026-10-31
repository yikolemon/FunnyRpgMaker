/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10057a67 */

void FUN_10057a67(undefined4 param_1,undefined4 param_2,int *param_3,undefined8 param_4)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_a8;
  uint local_a4;
  uint local_78;
  uint local_74;
  int local_70;
  uint local_68;
  uint local_64;
  int local_60;
  uint local_58;
  uint local_54;
  int local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_10057d3f(&local_78,param_4);
  iVar8 = -0x3d - local_50;
  iVar10 = iVar8 * 0x13441;
  iVar7 = iVar10 + 0x3ffff;
  if (-1 < iVar10) {
    iVar7 = iVar10;
  }
  sVar2 = (short)(iVar7 >> 0x12);
  sVar19 = sVar2 + (ushort)(0 < iVar8) + 0x133;
  sVar2 = sVar2 + (ushort)(0 < iVar8) + 0x13a;
  if (-1 < sVar19) {
    sVar2 = sVar19;
  }
  uVar20 = sVar2 * 2 & 0xfffffff0;
  uVar6 = *(uint *)(&DAT_10293708 + uVar20);
  uVar11 = (uint)((ulonglong)uVar6 * (ulonglong)local_78 >> 0x20);
  uVar1 = *(uint *)(&DAT_1029370c + uVar20);
  uVar12 = (uint)((ulonglong)uVar1 * (ulonglong)local_78 >> 0x20);
  uVar3 = (uint)((ulonglong)uVar1 * (ulonglong)local_78);
  iStack_40 = *(int *)(&DAT_10293710 + uVar20) + 0x40;
  iStack_30 = local_70 + iStack_40;
  iStack_40 = iStack_40 + local_60;
  uVar4 = (uint)((ulonglong)uVar1 * (ulonglong)local_74);
  uVar9 = uVar3 + uVar11;
  local_a8 = (uint)((ulonglong)uVar6 * (ulonglong)local_74);
  uVar16 = (uint)CARRY4(uVar3,uVar11) + (uint)CARRY4(uVar9,local_a8);
  local_a4 = (uint)((ulonglong)uVar6 * (ulonglong)local_74 >> 0x20);
  uVar11 = uVar4 + local_a4;
  uVar5 = uVar11 + uVar12;
  uVar3 = (uint)(0x7fffffff < uVar9 + local_a8);
  uVar9 = uVar5 + uVar16;
  local_38 = uVar9 + uVar3;
  iStack_34 = (int)((ulonglong)uVar1 * (ulonglong)local_74 >> 0x20) + (uint)CARRY4(uVar4,local_a4) +
              (uint)CARRY4(uVar11,uVar12) + (uint)(CARRY4(uVar5,uVar16) || CARRY4(uVar9,uVar3));
  uVar12 = (uint)((ulonglong)uVar6 * (ulonglong)local_68 >> 0x20);
  uVar16 = (uint)((ulonglong)uVar1 * (ulonglong)local_68 >> 0x20);
  uVar3 = (uint)((ulonglong)uVar1 * (ulonglong)local_68);
  uVar13 = (uint)((ulonglong)uVar6 * (ulonglong)local_64 >> 0x20);
  uVar9 = (uint)((ulonglong)uVar6 * (ulonglong)local_64);
  uVar4 = (uint)((ulonglong)uVar1 * (ulonglong)local_64);
  uVar11 = uVar3 + uVar12;
  uVar5 = uVar11 + uVar9;
  uVar11 = (uint)CARRY4(uVar3,uVar12) + (uint)CARRY4(uVar11,uVar9);
  uVar12 = (uint)((ulonglong)uVar6 * (ulonglong)local_58 >> 0x20);
  uVar14 = (uint)((ulonglong)uVar1 * (ulonglong)local_58 >> 0x20);
  uVar3 = (uint)((ulonglong)uVar1 * (ulonglong)local_58);
  uVar15 = (uint)((ulonglong)uVar6 * (ulonglong)local_54 >> 0x20);
  uVar6 = (uint)((ulonglong)uVar6 * (ulonglong)local_54);
  uVar9 = (uint)((ulonglong)uVar1 * (ulonglong)local_54);
  uVar17 = uVar3 + uVar12;
  uVar18 = uVar17 + uVar6;
  uVar12 = (uint)CARRY4(uVar3,uVar12) + (uint)CARRY4(uVar17,uVar6);
  uVar17 = uVar4 + uVar13;
  uVar21 = uVar17 + uVar16;
  uVar6 = (uint)(0x7fffffff < uVar5);
  uVar3 = uVar21 + uVar11;
  uVar22 = uVar3 + uVar6;
  local_48 = uVar22 + 1;
  iStack_44 = (int)((ulonglong)uVar1 * (ulonglong)local_64 >> 0x20) + (uint)CARRY4(uVar4,uVar13) +
              (uint)CARRY4(uVar17,uVar16) + (uint)(CARRY4(uVar21,uVar11) || CARRY4(uVar3,uVar6)) +
              (uint)(0xfffffffe < uVar22);
  uVar4 = uVar9 + uVar15;
  uVar11 = uVar4 + uVar14;
  iStack_20 = *(int *)(&DAT_10293710 + uVar20) + 0x40 + local_50;
  uVar6 = (uint)(0x7fffffff < uVar18);
  uVar3 = uVar11 + uVar12;
  iVar7 = uVar3 + uVar6;
  local_28 = iVar7 + -1;
  iStack_24 = (int)((ulonglong)uVar1 * (ulonglong)local_54 >> 0x20) + (uint)CARRY4(uVar9,uVar15) +
              (uint)CARRY4(uVar4,uVar14) + (uint)(CARRY4(uVar11,uVar12) || CARRY4(uVar3,uVar6)) + -1
              + (uint)(iVar7 != 0);
  *param_3 = -*(int *)(&DAT_10293714 + uVar20);
  FUN_10057ea1(param_1,param_2,param_3,local_48,iStack_44,iStack_40,uStack_3c,local_38,iStack_34,
               iStack_30,uStack_2c,local_28,iStack_24,iStack_20,uStack_1c,local_48,
               uVar5 + 0x80000000,uVar18 + 0x80000000);
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

