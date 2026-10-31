/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c710c */

void FUN_1800c710c(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  undefined4 param_5,char *param_6)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  size_t sVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar8 = *(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4;
    if (((*(longlong *)(param_1 + 0x28) - lVar3 >> 4) * 0x6db6db6db6db6db7 +
         lVar8 * 0x7b425ed097b425ed == 0) && (param_2 < (ulonglong)(lVar8 * -0x7b425ed097b425ed))) {
      lVar7 = param_2 * 0x70;
      lVar8 = *(longlong *)(lVar3 + 0x18 + lVar7);
      if ((param_3 < (ulonglong)
                     ((*(longlong *)(lVar3 + 0x20 + lVar7) - lVar8 >> 3) * -0x71c71c71c71c71c7)) &&
         (lVar4 = *(longlong *)(lVar3 + lVar7),
         param_4 < (ulonglong)(((longlong *)(lVar3 + lVar7))[1] - lVar4 >> 2))) {
        plVar1 = (longlong *)(lVar8 + param_3 * 0x48);
        uVar2 = *(uint *)(lVar4 + param_4 * 4);
        uVar5 = (ulonglong)(int)uVar2;
        if ((longlong)uVar5 < 2000) {
          if (uVar5 < (plVar1[1] - *plVar1 >> 2) + 1000U) {
            *(undefined4 *)(*plVar1 + -4000 + uVar5 * 4) = param_5;
          }
        }
        else if ((uVar2 < 3000) && (lVar3 = plVar1[3], uVar5 < (plVar1[4] - lVar3 >> 5) + 2000U)) {
          sVar6 = strlen(param_6);
          FUN_1800bddc6(lVar3 + uVar5 * 0x20 + -64000,param_6,sVar6);
          return;
        }
      }
    }
  }
  return;
}

