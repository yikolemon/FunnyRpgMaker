/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140765d45 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140765d45(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uStack_20;
  
  uVar8 = (ulonglong)_DAT_150b0349a;
  *(undefined4 *)
   (((ulonglong)*(uint *)(uVar8 + 0x14b0) - 4) + (ulonglong)(uint)(*(int *)(uVar8 + 0x14a8) * 0x70))
       = *(undefined4 *)(uVar8 + 0xccc);
  *(undefined4 *)(uVar8 + 0xccc) = *(undefined4 *)(uVar8 + 0x25e4);
  uVar1 = *(uint *)(uVar8 + 0x1fa4);
  uVar2 = *(uint *)(uVar8 + 0x1e40) & 0xffffffbf;
  *(uint *)(uVar8 + 0x1e40) = uVar2;
  if (uVar1 == *(uint *)(uVar8 + 0x1fa8)) {
    if (uVar1 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = (int)uVar1 / 2 + uVar1;
    }
    iVar4 = uVar1 + 1;
    if ((int)(uVar1 + 1) < iVar3) {
      iVar4 = iVar3;
    }
    uStack_20 = (ulonglong)(uint)(iVar4 * 4);
    uVar1 = FUN_1407520ca();
    uVar5 = (ulonglong)((int)&uStack_20 + 4);
    uVar7 = (ulonglong)uVar1;
    uVar2 = *(uint *)(uVar8 + 0x1fac);
    if (uVar2 != 0) {
      *(ulonglong *)(uVar5 - 8) = (ulonglong)(uint)(*(int *)(uVar8 + 0x1fa4) << 2);
      *(ulonglong *)(uVar5 - 0x10) = (ulonglong)uVar2;
      *(ulonglong *)(uVar5 - 0x18) = uVar7;
      *(undefined8 *)(uVar5 - 0x20) = 0x140765de9;
      FUN_1408b31a0();
      uVar6 = (ulonglong)((int)(uVar5 - 0x18) + 0xc);
      *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(uVar8 + 0x1fac);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar6 - 0x10) = &UNK_140765df7;
      FUN_14075219b();
    }
    *(uint *)(uVar8 + 0x1fac) = uVar1;
    *(int *)(uVar8 + 0x1fa8) = iVar4;
    uVar2 = *(uint *)(uVar8 + 0x1e40);
    uVar1 = *(uint *)(uVar8 + 0x1fa4);
  }
  else {
    uVar7 = (ulonglong)*(uint *)(uVar8 + 0x1fac);
  }
  *(uint *)(uVar7 + (ulonglong)uVar1 * 4) = uVar2;
  *(int *)(uVar8 + 0x1fa4) = *(int *)(uVar8 + 0x1fa4) + 1;
  *(short *)(uVar8 + 0x25e8) = *(short *)(uVar8 + 0x25e8) + 1;
  return;
}

