/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801edeb2 */

void FUN_1801edeb2(longlong param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  uVar2 = param_2[1];
  uVar7 = *(int *)(param_1 + 0x248) + 1;
  uVar4 = 0x86;
  if (uVar2 < uVar7) {
    puVar3 = *(undefined4 **)(param_1 + 0x230);
    if ((uVar7 == *(uint *)(param_1 + 0x228)) && (puVar3[(ulonglong)uVar2 * 5 + 3] == uVar2)) {
      puVar3 = puVar3 + (ulonglong)uVar2 * 5;
    }
    else {
      puVar6 = puVar3 + (ulonglong)*(uint *)(param_1 + 0x228) * 5;
      if (puVar3 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      for (; (puVar3 < puVar6 && (puVar3[3] != uVar2)); puVar3 = puVar3 + 5) {
      }
      if (puVar3 == puVar6) goto LAB_1801edfa5;
    }
    if (*(char *)(puVar3 + 4) != '\0') {
      lVar5 = (longlong)*(int *)(param_1 + 0x250);
      uVar4 = 0x82;
      if (*(int *)(param_1 + 0x250) < *(int *)(param_1 + 0x254)) {
        if (*param_2 < 1) {
          return;
        }
        lVar1 = *(longlong *)(param_1 + 600);
        *(undefined4 *)(lVar1 + lVar5 * 0x18) = *(undefined4 *)(param_1 + 0x1dc);
        *(int *)(lVar1 + 4 + lVar5 * 0x18) = *(int *)(param_1 + 0x1e8) + 1;
        *(int *)(lVar1 + 8 + lVar5 * 0x18) = *param_2;
        *(undefined4 **)(lVar1 + 0x10 + lVar5 * 0x18) = puVar3;
        *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
        FUN_1801f8bb8(param_1,*puVar3,puVar3[1]);
        uVar2 = *(int *)(param_1 + 0x32c) + *param_2;
        *(uint *)(param_1 + 0x32c) = uVar2;
        uVar4 = 0x8b;
        if (uVar2 <= *(uint *)(param_1 + 0x330)) {
          return;
        }
      }
    }
  }
LAB_1801edfa5:
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  return;
}

