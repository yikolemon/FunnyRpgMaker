/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003b6b8 */

void FUN_14003b6b8(longlong param_1,uint *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x1d8) == 3) {
    *(undefined4 *)(param_1 + 0x20) = 0x9c;
    return;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x230);
  if (puVar5 == (undefined4 *)0x0) {
    uVar3 = *param_2;
    puVar5 = (undefined4 *)0x0;
LAB_14003b711:
    if (*(uint *)(param_1 + 0x22c) <= *(uint *)(param_1 + 0x228)) goto LAB_14003b72e;
    *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) + 1;
  }
  else {
    puVar1 = puVar5 + (ulonglong)*(uint *)(param_1 + 0x228) * 5;
    uVar3 = *param_2;
    if ((ulonglong)*(uint *)(param_1 + 0x228) != 0) {
      do {
        if (puVar5[3] == uVar3) break;
        puVar5 = puVar5 + 5;
      } while (puVar5 < puVar1);
    }
    if (puVar5 == puVar1) goto LAB_14003b711;
  }
  if (uVar3 < 0x10000) {
    *puVar5 = *(undefined4 *)(param_1 + 0x1dc);
    puVar5[3] = uVar3;
    puVar5[1] = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined1 *)(puVar5 + 4) = 1;
    if (*(uint *)(param_1 + 0x248) < uVar3) {
      *(uint *)(param_1 + 0x248) = uVar3;
    }
    do {
      uVar4 = FUN_14004616f(param_1);
      if ((char)uVar4 != '\0') {
        return;
      }
      cVar2 = *(char *)(param_1 + 0x1f0);
      if (cVar2 == -0x77) break;
      if (cVar2 == '-') {
        puVar5[2] = *(undefined4 *)(param_1 + 0x1e8);
        return;
      }
    } while (cVar2 != ',');
    *(undefined4 *)(param_1 + 0x20) = 0x89;
    return;
  }
LAB_14003b72e:
  *(undefined4 *)(param_1 + 0x20) = 0x8c;
  return;
}

