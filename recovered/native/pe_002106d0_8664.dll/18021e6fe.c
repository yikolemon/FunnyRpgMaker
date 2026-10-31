/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021e6fe */

void FUN_18021e6fe(uint *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 < *param_1) {
    lVar5 = (ulonglong)param_2 * 0x28 + *(longlong *)(param_1 + 2);
    if ((*(uint *)(lVar5 + 0x10) & 4) == 0) {
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 4;
      lVar2 = *(longlong *)(param_1 + 6);
      uVar1 = param_1[1];
      *(undefined8 *)(lVar5 + 0x18) = 0;
      if (uVar1 != 0) {
        lVar6 = 0;
        do {
          uVar3 = *(undefined8 *)(lVar2 + lVar6 * 8);
          iVar4 = FUN_18021e789(lVar5,uVar3);
          if (iVar4 != 0) {
            *(undefined8 *)(lVar5 + 0x18) = uVar3;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (uVar1 != (uint)lVar6);
      }
      uVar1 = param_1[1];
      if (uVar1 < *param_1) {
        param_1[1] = uVar1 + 1;
        *(longlong *)(*(longlong *)(param_1 + 6) + (ulonglong)uVar1 * 8) = lVar5;
      }
    }
  }
  return;
}

