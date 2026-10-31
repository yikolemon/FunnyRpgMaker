/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e9431 */

ulonglong FUN_1407e9431(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_RAX;
  undefined8 *puVar4;
  int iVar5;
  uint unaff_EBX;
  ulonglong uVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar9 = (ulonglong)unaff_EBX;
  _local_28 = CONCAT44((int)((ulonglong)in_RAX >> 0x20),*(undefined4 *)(uVar9 + 0x30));
  uStack_30 = 0x50;
  puVar4 = (undefined8 *)FUN_1407520ca();
  puVar7 = (uint *)(ulonglong)((int)&uStack_30 + 4);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *(undefined4 *)((longlong)puVar4 + 4) = 1;
  iVar5 = *(int *)(uVar9 + 0x27c);
  *(int *)(uVar9 + 0x27c) = iVar5 + 1;
  *(int *)((ulonglong)puVar4 & 0xffffffff) = iVar5;
  uVar1 = *(uint *)(uVar9 + 0x34);
  if (uVar1 == *(uint *)(uVar9 + 0x38)) {
    if (uVar1 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = (int)uVar1 / 2 + uVar1;
    }
    iVar8 = uVar1 + 1;
    if ((int)(uVar1 + 1) < iVar5) {
      iVar8 = iVar5;
    }
    *(ulonglong *)((longlong)puVar7 + -8) = (ulonglong)(uint)(iVar8 * 4);
    *(undefined8 *)((longlong)puVar7 + -0x10) = 0x1407e94b4;
    uVar3 = FUN_1407520ca();
    puVar7 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar7 + -8) + 4);
    uVar6 = (ulonglong)uVar3;
    uVar1 = *(uint *)(uVar9 + 0x3c);
    if (uVar1 != 0) {
      *(ulonglong *)((longlong)puVar7 + -8) = (ulonglong)(uint)(*(int *)(uVar9 + 0x34) << 2);
      *(ulonglong *)((longlong)puVar7 + -0x10) = (ulonglong)uVar1;
      *(ulonglong *)((longlong)puVar7 + -0x18) = uVar6;
      *(undefined8 *)((longlong)puVar7 + -0x20) = 0x1407e94cf;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar7 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(uVar9 + 0x3c);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar7 + -0x18) + 0xc) - 0x10) =
           &UNK_1407e94da;
      FUN_14075219b();
    }
    *(uint *)(uVar9 + 0x3c) = uVar3;
    *(int *)(uVar9 + 0x38) = iVar8;
    uVar1 = *(uint *)(uVar9 + 0x34);
  }
  else {
    uVar6 = (ulonglong)*(uint *)(uVar9 + 0x3c);
  }
  uVar3 = puVar7[8];
  uVar2 = puVar7[7];
  *(int *)(uVar6 + (ulonglong)uVar1 * 4) = (int)puVar4;
  *(int *)(uVar9 + 0x34) = *(int *)(uVar9 + 0x34) + 1;
  if (*puVar7 != 0) {
    *(undefined1 *)((ulonglong)*puVar7 + 0x4f) = 1;
  }
  *(ulonglong *)(puVar7 + -2) = (ulonglong)uVar3;
  *(ulonglong *)(puVar7 + -4) = (ulonglong)uVar2;
  *(undefined8 *)(puVar7 + -6) = *(undefined8 *)(uVar9 + 4);
  puVar7[-8] = 0x407e950e;
  puVar7[-7] = 1;
  FUN_1407e6214((ulonglong)puVar4 & 0xffffffff);
  *(undefined1 *)(uVar9 + 0x42) = 0;
  puVar7[-8] = 0x407e951b;
  puVar7[-7] = 1;
  FUN_1407e9525(uVar9,(int *)((ulonglong)puVar4 & 0xffffffff));
  return (ulonglong)puVar4 & 0xffffffff;
}

