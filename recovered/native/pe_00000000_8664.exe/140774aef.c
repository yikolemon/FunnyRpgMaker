/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140774aef */

ulonglong FUN_140774aef(ulonglong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uVar9;
  
  uVar7 = param_1 & 0xffffffff;
  uVar3 = *(uint *)(param_2 + 0x438);
  uStack_30 = param_1;
  uStack_28 = (ulonglong)uVar3;
  uVar4 = FUN_1407733f8();
  uVar8 = (int)&uStack_30 + 8;
  uVar9 = (ulonglong)uVar8;
  if ((int)uVar4 == 0) {
    *(undefined8 *)(uVar9 - 8) = 0x140774b2f;
    uVar3 = FUN_14077381c(uVar7,(ulonglong)uVar3);
    uVar11 = (ulonglong)uVar3;
    *(uint *)(uVar11 + 0xa8) = *(uint *)(uVar11 + 0xa8) & 0xfffffe00 | 0x92;
    *(undefined4 *)(uVar11 + 0x8c) = *(undefined4 *)(uVar7 + 4);
  }
  else {
    uVar11 = uVar4 & 0xffffffff;
    if (*(int *)(uVar4 + 0x1c) != 0) {
      *(undefined8 *)(uVar9 - 8) = 1;
      *(ulonglong *)(uVar9 - 0x10) = param_2 & 0xffffffff;
      *(ulonglong *)(uVar9 - 0x18) = uVar7;
      *(undefined8 *)(uVar9 - 0x20) = 0x140774b1c;
      FUN_140770aff();
      return 0;
    }
  }
  bVar6 = *(byte *)(uVar11 + 0xac);
  uVar4 = uVar11;
  if ((bVar6 & 1) == 0) {
    do {
      uVar5 = uVar4;
      uVar7 = uVar5;
      if ((*(byte *)(uVar5 + 0xac) & 1) != 0) break;
      uVar4 = (ulonglong)*(uint *)(uVar5 + 0x18);
    } while (*(uint *)(uVar5 + 0x18) != 0);
    do {
      uVar4 = uVar7;
      uVar3 = *(uint *)(uVar4 + 0x18);
      uVar7 = (ulonglong)uVar3;
    } while (uVar3 != 0);
    *(undefined8 *)(uVar9 - 8) = 0x140774b7f;
    FUN_140781bde(uVar4);
    uVar1 = *(undefined4 *)(uVar5 + 0x3c);
    uVar2 = *(undefined4 *)(uVar5 + 0x34);
    puVar10 = (undefined4 *)(ulonglong)((int)&uStack_30 + 4);
    *puVar10 = *(undefined4 *)(uVar5 + 0x40);
    *(undefined8 *)(puVar10 + -2) = 0x140774ba4;
    FUN_140781c1e(uVar2,uVar11,uVar1);
    bVar6 = *(byte *)(uVar11 + 0xac);
  }
  *(undefined8 *)((ulonglong)uVar8 - 8) = 1;
  *(undefined8 *)((ulonglong)uVar8 - 0x10) = 0x140774bbb;
  FUN_140781747(uVar11,param_2 & 0xffffffff);
  *(byte *)(uVar11 + 0xac) = *(byte *)(uVar11 + 0xac) & 0xfe | bVar6 & 1;
  return uVar11;
}

