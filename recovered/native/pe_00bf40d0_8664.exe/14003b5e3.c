/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003b5e3 */

void FUN_14003b5e3(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  uVar1 = *param_2;
  uVar5 = *(int *)(param_1 + 0x248) + 1;
  if ((uVar5 <= uVar1) || (puVar3 = *(uint **)(param_1 + 0x230), puVar3 == (uint *)0x0))
  goto LAB_14003b6a8;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x228);
  if (uVar5 == *(uint *)(param_1 + 0x228)) {
    if (puVar3[(ulonglong)uVar1 * 5 + 3] != uVar1) {
      puVar6 = puVar3 + uVar7 * 5;
LAB_14003b63c:
      do {
        if (puVar3[3] == uVar1) break;
        puVar3 = puVar3 + 5;
      } while (puVar3 < puVar6);
      goto LAB_14003b64a;
    }
    puVar3 = puVar3 + (ulonglong)uVar1 * 5;
  }
  else {
    puVar6 = puVar3 + uVar7 * 5;
    if (uVar7 != 0) goto LAB_14003b63c;
LAB_14003b64a:
    if (puVar3 == puVar6) goto LAB_14003b6a8;
  }
  if ((char)puVar3[4] != '\0') {
    lVar4 = (longlong)*(int *)(param_1 + 0x250);
    if (*(int *)(param_1 + 0x254) <= *(int *)(param_1 + 0x250)) {
      *(undefined4 *)(param_1 + 0x20) = 0x82;
      return;
    }
    lVar2 = *(longlong *)(param_1 + 600);
    *(undefined4 *)(lVar2 + lVar4 * 0x18) = *(undefined4 *)(param_1 + 0x1dc);
    *(int *)(lVar2 + 4 + lVar4 * 0x18) = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined4 *)(lVar2 + 8 + lVar4 * 0x18) = 1;
    *(uint **)(lVar2 + 0x10 + lVar4 * 0x18) = puVar3;
    *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
    FUN_1400461ec(param_1,*puVar3,puVar3[1]);
    return;
  }
LAB_14003b6a8:
  *(undefined4 *)(param_1 + 0x20) = 0x86;
  return;
}

