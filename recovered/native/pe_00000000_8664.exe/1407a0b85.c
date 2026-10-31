/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a0b85 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407a0b85(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  ulonglong *puVar7;
  ulonglong *puVar8;
  uint unaff_EBP;
  ulonglong uVar9;
  longlong unaff_R14;
  ulonglong uStack_30;
  ulonglong uStack_28;
  undefined7 uVar6;
  
  puVar7 = (ulonglong *)&stack0xffffffffffffffe0;
  uVar6 = (undefined7)(unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if ((unaff_EBP >> 8 & 1) != 0) goto LAB_1407a0c2a;
  uVar3 = unaff_RBX >> 0x20;
  uVar9 = (ulonglong)_DAT_150b3e2ef;
  uVar1 = *(uint *)(uVar9 + 0x14cc);
  uVar2 = *(undefined4 *)((ulonglong)uVar1 + 0x1e4);
  if ((*(byte *)(uVar9 + 0x1e48) & 2) == 0) {
    uStack_28 = (ulonglong)(unaff_EBP >> 5 & 1);
    uStack_30 = uVar3;
    iVar4 = FUN_140752f3c(uVar2);
    uVar5 = (ulonglong)CONCAT31((int3)(unaff_EBP >> 8),iVar4 != 0);
  }
  else {
    if ((*(byte *)(uVar9 + 0x1e6d) & 1) == 0) {
      uStack_28 = 0xffffffffffffffff;
      puVar7 = &uStack_30;
      puVar8 = &uStack_30;
      uStack_30 = uVar3;
      iVar4 = FUN_140752f3c(uVar2);
      if (iVar4 == -1) goto LAB_1407a0bed;
      uVar5 = CONCAT71(uVar6,iVar4 != 0);
    }
    else {
LAB_1407a0bed:
      uVar5 = (ulonglong)*(byte *)(uVar9 + 0x1e6c);
      *(ulonglong *)((longlong)puVar7 + -8) = uVar5;
      *(ulonglong *)((longlong)puVar7 + -0x10) = uVar3;
      *(undefined8 *)((longlong)puVar7 + -0x18) = 0x1407a0bfb;
      FUN_1407a0b64();
      puVar8 = (ulonglong *)(ulonglong)((int)(undefined1 *)((longlong)puVar7 + -0x10) + 8);
    }
    unaff_EBP = *(uint *)((longlong)puVar8 + 0x18);
  }
  if ((((unaff_EBP & 0x10) == 0) && (*(char *)(uVar9 + 0x2748) != '\0')) &&
     (uVar5 = uVar5 & 0xff,
     *(int *)((ulonglong)uVar1 + 0x1cc) - *(int *)(uVar9 + 0x2770) < *(int *)(unaff_R14 + 0x2774)))
  {
    uVar5 = 0;
  }
LAB_1407a0c2a:
  return uVar5 & 0xffffffff;
}

