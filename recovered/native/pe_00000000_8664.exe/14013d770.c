/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013d770 */

void FUN_14013d770(longlong param_1,uint *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x1d8) == 3) {
    *(undefined4 *)(param_1 + 0x20) = 0x9c;
    return;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x230);
  if (puVar4 == (undefined4 *)0x0) {
    uVar3 = *param_2;
    puVar4 = (undefined4 *)0x0;
LAB_14013d7c9:
    if (*(uint *)(param_1 + 0x22c) <= *(uint *)(param_1 + 0x228)) goto LAB_14013d7e6;
    *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) + 1;
  }
  else {
    puVar1 = puVar4 + (ulonglong)*(uint *)(param_1 + 0x228) * 5;
    uVar3 = *param_2;
    if ((ulonglong)*(uint *)(param_1 + 0x228) != 0) {
      do {
        if (puVar4[3] == uVar3) break;
        puVar4 = puVar4 + 5;
      } while (puVar4 < puVar1);
    }
    if (puVar4 == puVar1) goto LAB_14013d7c9;
  }
  if (uVar3 < 0x10000) {
    *puVar4 = *(undefined4 *)(param_1 + 0x1dc);
    puVar4[3] = uVar3;
    puVar4[1] = *(int *)(param_1 + 0x1e8) + 1;
    *(undefined1 *)(puVar4 + 4) = 1;
    if (*(uint *)(param_1 + 0x248) < uVar3) {
      *(uint *)(param_1 + 0x248) = uVar3;
    }
    do {
      cVar2 = FUN_140148227(param_1);
      if (cVar2 != '\0') {
        return;
      }
      cVar2 = *(char *)(param_1 + 0x1f0);
      if (cVar2 == -0x77) break;
      if (cVar2 == '-') {
        puVar4[2] = *(undefined4 *)(param_1 + 0x1e8);
        return;
      }
    } while (cVar2 != ',');
    *(undefined4 *)(param_1 + 0x20) = 0x89;
    return;
  }
LAB_14013d7e6:
  *(undefined4 *)(param_1 + 0x20) = 0x8c;
  return;
}

