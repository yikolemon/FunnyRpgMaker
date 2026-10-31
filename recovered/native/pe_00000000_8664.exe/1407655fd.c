/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407655fd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407655fd(uint param_1,char param_2)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  byte bVar5;
  int iVar4;
  uint unaff_EBX;
  ulonglong uVar6;
  undefined4 *puVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar7 = &uStack_28;
  uVar9 = (ulonglong)param_1;
  uVar6 = (ulonglong)_DAT_150b02d5a;
  bVar5 = (unaff_EBX & 0x14000000) != 0x4000000 & (byte)(unaff_EBX >> 0x18);
  uStack_28._0_3_ = (uint3)in_RAX;
  uStack_24 = (undefined4)((ulonglong)in_RAX >> 0x20);
  if ((bVar5 == 0) && (*(byte *)(uVar9 + 0x103) != bVar5 || param_2 != '\0')) {
    uVar2 = *(uint *)(uVar6 + 0x1490);
    uStack_28 = (uint)(uint3)uStack_28;
    if (uVar2 == *(uint *)(uVar6 + 0x1494)) {
      if (uVar2 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = (int)uVar2 / 2 + uVar2;
      }
      iVar8 = uVar2 + 1;
      if ((int)(uVar2 + 1) < iVar4) {
        iVar8 = iVar4;
      }
      uStack_30 = (ulonglong)(uint)(iVar8 * 4);
      uStack_38 = 0x14076570b;
      uVar3 = FUN_1407520ca();
      puVar7 = (undefined4 *)(ulonglong)((int)&uStack_30 + 4);
      uVar10 = (ulonglong)uVar3;
      uVar2 = *(uint *)(uVar6 + 0x1498);
      if (uVar2 != 0) {
        *(ulonglong *)((longlong)puVar7 + -8) = (ulonglong)(uint)(*(int *)(uVar6 + 0x1490) << 2);
        *(ulonglong *)((longlong)puVar7 + -0x10) = (ulonglong)uVar2;
        *(ulonglong *)((longlong)puVar7 + -0x18) = uVar10;
        *(undefined8 *)((longlong)puVar7 + -0x20) = 0x14076572b;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar7 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar6 + 0x1498);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar7 + -0x18) + 0xc) - 0x10) =
             &UNK_140765739;
        FUN_14075219b();
      }
      *(uint *)(uVar6 + 0x1498) = uVar3;
      *(int *)(uVar6 + 0x1494) = iVar8;
      uVar2 = *(uint *)(uVar6 + 0x1490);
    }
    else {
      uVar10 = (ulonglong)*(uint *)(uVar6 + 0x1498);
    }
    *(uint *)(uVar10 + (ulonglong)uVar2 * 4) = param_1;
    iVar4 = *(int *)(uVar6 + 0x1490);
    *(int *)(uVar6 + 0x1490) = iVar4 + 1;
    *(short *)(uVar9 + 0x110) = (short)iVar4;
  }
  else {
    if ((bVar5 == 0) || ((*(byte *)(uVar9 + 0x103) == bVar5 || (param_2 != '\0'))))
    goto LAB_14076576b;
    uStack_28 = CONCAT13(bVar5,(uint3)uStack_28);
    uVar3 = (uint)*(short *)(uVar9 + 0x110);
    uVar2 = uVar3 + 1;
    iVar4 = *(int *)(uVar6 + 0x1490);
    if ((int)uVar2 < iVar4) {
      do {
        psVar1 = (short *)((ulonglong)
                           *(uint *)((ulonglong)*(uint *)(uVar6 + 0x1498) + (ulonglong)uVar2 * 4) +
                          0x110);
        *psVar1 = *psVar1 + -1;
        iVar4 = *(int *)(uVar6 + 0x1490);
      } while ((int)uVar2 < iVar4);
      uVar3 = (uint)*(short *)(uVar9 + 0x110);
    }
    uStack_40 = (ulonglong)(*(int *)(uVar6 + 0x1498) + uVar3 * 4);
    uStack_38 = (ulonglong)(*(int *)(uVar6 + 0x1498) + uVar3 * 4 + 4);
    uStack_30 = (ulonglong)((~uVar3 + iVar4) * 4);
    FUN_1408b31a0();
    puVar7 = (undefined4 *)(ulonglong)((int)&uStack_40 + 0xc);
    *(int *)(uVar6 + 0x1490) = *(int *)(uVar6 + 0x1490) + -1;
    *(undefined2 *)(uVar9 + 0x110) = 0xffff;
  }
  bVar5 = *(byte *)((longlong)puVar7 + 3);
LAB_14076576b:
  *(byte *)(uVar9 + 0x103) = bVar5;
  return;
}

