/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ea1b8 */

void FUN_1800ea1b8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  FUN_180044980();
  lVar1 = param_1[1];
  for (lVar5 = *param_1; lVar5 != lVar1; lVar5 = lVar5 + 0x78) {
    lVar2 = *(longlong *)(lVar5 + 0x28);
    for (lVar9 = *(longlong *)(lVar5 + 0x20); lVar9 != lVar2; lVar9 = lVar9 + 0x50) {
      lVar3 = *(longlong *)(lVar9 + 0x28);
      lVar10 = 0;
      for (lVar8 = *(longlong *)(lVar9 + 0x20); lVar8 != lVar3; lVar8 = lVar8 + 0x20) {
        lVar4 = FUN_1800e020e(param_2,lVar8);
        if (lVar4 != *param_2) {
          lVar7 = lVar4 + 0x40;
          lVar6 = lVar10 * 0x20 + *(longlong *)(lVar9 + 0x38);
          if (lVar6 != lVar7) {
            if (0xf < *(ulonglong *)(lVar4 + 0x58)) {
              lVar7 = *(longlong *)(lVar4 + 0x40);
            }
            FUN_180017ca0(lVar6,lVar7,*(undefined8 *)(lVar4 + 0x50));
          }
          *(undefined1 *)(param_1 + 0x16) = 1;
        }
        lVar10 = lVar10 + 1;
      }
    }
  }
  FUN_18023d6e0(param_1 + 0x17);
  return;
}

