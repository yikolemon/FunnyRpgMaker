/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d6881 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1408d6881(void)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  ulonglong auStack_18 [3];
  
  auStack_18[2] = 0xc;
  puVar7 = auStack_18 + 1;
  auStack_18[1] = 0x103830e0;
  auStack_18[0] = 0x1408d688d;
  FUN_1408d05b0();
  uVar4 = 0;
  *(undefined4 *)(unaff_RBP + -0x1c) = 0;
  auStack_18[0] = *(ulonglong *)(ulonglong)*(uint *)(unaff_RBP + 8);
  FUN_1408d2d4d();
  *(undefined4 *)(unaff_RBP + -4) = 0;
  uVar1 = *(uint *)(ulonglong)*(uint *)(ulonglong)*(uint *)(unaff_RBP + 0xc);
  if ((*(byte *)((ulonglong)*(uint *)((ulonglong)(uint)((int)uVar1 >> 6) * 4 + 0x103a5230) + 0x28 +
                (ulonglong)((uVar1 & 0x3f) * 0x38)) & 1) != 0) {
    auStack_18[0] = (ulonglong)uVar1;
    uVar5 = FUN_1408d295f();
    uVar2 = auStack_18[0];
    puVar7 = auStack_18;
    auStack_18[0] = uVar5;
    iVar3 = (*_DAT_150c347dc)(uVar2);
    puVar8 = auStack_18;
    if (iVar3 != 0) goto LAB_1408d68f1;
    uVar4 = (*_DAT_150c3486a)();
    puVar6 = (undefined4 *)FUN_1408c0ee2();
    *puVar6 = uVar4;
  }
  puVar7[0xffffffffffffffff] = 0x1408d68e8;
  puVar6 = (undefined4 *)FUN_1408c0ecd();
  *puVar6 = 9;
  uVar4 = 0xffffffff;
  puVar8 = puVar7;
LAB_1408d68f1:
  *(undefined4 *)(unaff_RBP + -0x1c) = uVar4;
  *(undefined4 *)(unaff_RBP + -4) = 0xfffffffe;
  *(undefined8 *)((longlong)puVar8 + -8) = 0x1408d6900;
  FUN_1408d6917();
  *(undefined4 *)(in_FS_OFFSET + 0x1408d690c) = *(undefined4 *)(unaff_RBP + -0x10);
  return uVar4;
}

