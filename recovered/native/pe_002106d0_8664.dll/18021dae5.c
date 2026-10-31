/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021dae5 */

void FUN_18021dae5(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  uVar5 = *(uint *)(param_1 + 4);
  if (uVar5 != 0) {
    uVar4 = 0;
    do {
      if (2 < *(uint *)(*(longlong *)(param_1 + 0x10) + 8 + uVar4 * 0x10)) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + uVar4 * 0x10);
        plVar3 = plVar2;
        plVar9 = (longlong *)*plVar2;
        iVar7 = *(int *)((longlong *)*plVar2 + 6);
        do {
          plVar8 = plVar3;
          plVar3 = (longlong *)plVar8[1];
          iVar1 = (int)plVar8[6];
          if (((iVar1 <= iVar7) || ((int)plVar3[6] <= iVar1)) &&
             ((iVar7 <= iVar1 || (iVar1 <= (int)plVar3[6])))) {
            uVar5 = *(uint *)((longlong)plVar8 + 0x1c);
            *(uint *)((longlong)plVar8 + 0x1c) = uVar5 | 0x40;
            uVar6 = 0xc0;
            if ((*(int *)((longlong)plVar9 + 0x34) < *(int *)((longlong)plVar3 + 0x34)) ||
               (uVar6 = 0x140, *(int *)((longlong)plVar3 + 0x34) < *(int *)((longlong)plVar9 + 0x34)
               )) {
              *(uint *)((longlong)plVar8 + 0x1c) = uVar5 | uVar6;
            }
          }
          plVar9 = plVar8;
          iVar7 = iVar1;
        } while (plVar3 != plVar2);
        uVar5 = *(uint *)(param_1 + 4);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return;
}

