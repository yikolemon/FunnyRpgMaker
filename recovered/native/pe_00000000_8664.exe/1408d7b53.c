/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d7b53 */

char FUN_1408d7b53(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint unaff_EDI;
  char cVar12;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = (ulonglong)unaff_EDI;
  uVar10 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uStack_20 = *(undefined8 *)(uVar10 + 0xc);
  uStack_28 = 0x1408d7b62;
  uVar2 = FUN_1408d056e();
  uStack_38 = (ulonglong)uVar2;
  if ((*(uint *)((ulonglong)*(uint *)(uVar10 + 0xc) + 0xc) & 0xc0) == 0) {
    uStack_20 = *(undefined8 *)(uVar10 + 0x10);
    uStack_30 = (ulonglong)((int)&stack0xfffffffffffffff8 + 8);
    uStack_28 = 1;
    lVar7 = FUN_1408d6b76();
    cVar12 = '\x01' - (lVar7 != 0);
  }
  else {
    piVar8 = (int *)(ulonglong)*(uint *)(uVar10 + 0xc);
    uVar3 = 0;
    uVar11 = *piVar8 - piVar8[1];
    uStack_28 = (ulonglong)uVar11;
    *piVar8 = piVar8[1];
    *(ulonglong *)(param_3 + 8) = (ulonglong)*(uint *)((ulonglong)*(uint *)(uVar10 + 0xc) + 0x18);
    if ((int)uVar11 < 1) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        uVar5 = 0x1039b678;
      }
      else {
        uVar5 = (ulonglong)
                ((uVar2 & 0x3f) * 0x38 +
                *(int *)((ulonglong)(uint)((int)uVar2 >> 6) * 4 + 0x103a5230));
      }
      if ((*(byte *)(uVar5 + 0x28) & 0x20) != 0) {
        uStack_20 = 2;
        uStack_28 = 0;
        uStack_30 = 0;
        uVar4 = FUN_1408d121a();
        uVar9 = (ulonglong)((int)&uStack_38 + 0x10);
        if ((uVar4 & uVar2) == 0xffffffff) {
          iVar1 = *(int *)(uVar10 + 0xc);
          *(undefined8 *)(uVar9 - 8) = 0x10;
          puVar6 = (uint *)(ulonglong)(iVar1 + 0xc);
          LOCK();
          *puVar6 = *puVar6 | (uint)*(undefined8 *)(uVar9 - 8);
          UNLOCK();
          return '\x01';
        }
      }
    }
    else {
      uStack_20 = *(undefined8 *)(uVar10 + 0x10);
      uStack_30 = *(undefined8 *)((ulonglong)*(uint *)(uVar10 + 0xc) + 4);
      uVar3 = FUN_1408d6b76();
    }
    cVar12 = uVar3 == uVar11;
    *(undefined1 *)(ulonglong)*(uint *)((ulonglong)*(uint *)(uVar10 + 0xc) + 4) =
         *(undefined1 *)(uVar10 + 8);
  }
  return cVar12;
}

