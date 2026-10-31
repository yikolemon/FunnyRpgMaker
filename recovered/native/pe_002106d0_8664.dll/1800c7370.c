/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c7370 */

void FUN_1800c7370(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  undefined4 param_5,char *param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  size_t sVar5;
  longlong lVar6;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar6 = *(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 4;
    if (((((*(longlong *)(param_1 + 0x30) - lVar2 >> 3) * -0x71c71c71c71c71c7 +
           lVar6 * 0x79435e50d79435e5 == 0) && (param_2 < (ulonglong)(lVar6 * -0x79435e50d79435e5)))
        && (lVar6 = *(longlong *)(lVar2 + 0x28 + param_2 * 0x48),
           param_3 < (ulonglong)(*(longlong *)(lVar2 + 0x30 + param_2 * 0x48) - lVar6 >> 6))) &&
       (lVar2 = lVar2 + param_2 * 0x48, lVar3 = *(longlong *)(lVar2 + 8),
       param_4 < (ulonglong)(*(longlong *)(lVar2 + 0x10) - lVar3 >> 2))) {
      lVar6 = lVar6 + param_3 * 0x40;
      uVar1 = *(uint *)(lVar3 + param_4 * 4);
      uVar4 = (ulonglong)(int)uVar1;
      if ((longlong)uVar4 < 2000) {
        if (uVar4 < (*(longlong *)(lVar6 + 0x10) - *(longlong *)(lVar6 + 8) >> 2) + 1000U) {
          *(undefined4 *)(*(longlong *)(lVar6 + 8) + -4000 + uVar4 * 4) = param_5;
        }
      }
      else if ((uVar1 < 3000) &&
              (lVar2 = *(longlong *)(lVar6 + 0x28),
              uVar4 < (*(longlong *)(lVar6 + 0x30) - lVar2 >> 3) * -0x3333333333333333 + 2000U)) {
        sVar5 = strlen(param_6);
        FUN_1800bf9b2(lVar2 + uVar4 * 0x28 + -80000,param_6,sVar5);
        return;
      }
    }
  }
  return;
}

