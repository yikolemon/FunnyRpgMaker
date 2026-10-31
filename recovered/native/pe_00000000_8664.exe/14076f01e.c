/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076f01e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076f01e(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RBP;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint unaff_retaddr;
  ulonglong uStack_28;
  undefined4 uVar8;
  
  puVar7 = (undefined4 *)(ulonglong)unaff_retaddr;
  uStack_28 = unaff_RBP >> 0x20;
  uVar8 = (undefined4)((ulonglong)unaff_RBX >> 0x20);
  uVar6 = (ulonglong)_DAT_150b0c784;
  *(undefined4 *)(uVar6 + 0x2044) = uVar8;
  *(int *)(uVar6 + 0x2050) = (int)unaff_RBP;
  FUN_140769fa9();
  uVar4 = (ulonglong)((int)&uStack_28 + 4);
  *(undefined4 *)((ulonglong)*(uint *)(uVar6 + 0x2048) + 0x3c4 + (unaff_RBP & 0xffffffff) * 4) =
       uVar8;
  uVar8 = puVar7[1];
  uVar2 = puVar7[2];
  uVar3 = puVar7[3];
  puVar1 = (undefined4 *)
           ((ulonglong)*(uint *)(uVar6 + 0x2048) + 0x3cc + (ulonglong)(uint)((int)unaff_RBP << 4));
  *puVar1 = *puVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  *(undefined8 *)(uVar4 - 8) = 0;
  *(undefined8 *)(uVar4 - 0x10) = 0x14076f075;
  FUN_14076eff3();
  uVar5 = (ulonglong)((int)(uVar4 - 8) + 4);
  *(undefined8 *)(uVar5 - 8) = 1;
  *(undefined8 *)(uVar5 - 0x10) = 0x14076f07f;
  FUN_14076eff3();
  return;
}

