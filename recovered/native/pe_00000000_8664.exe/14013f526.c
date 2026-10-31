/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013f526 */

void FUN_14013f526(longlong param_1,uint *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x1d8) == 3) {
    *(undefined4 *)(param_1 + 0x20) = 0x9c;
    return;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x240);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
LAB_14013f57c:
    if (*(uint *)(param_1 + 0x23c) <= *(uint *)(param_1 + 0x238)) goto LAB_14013f59b;
    *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) + 1;
  }
  else {
    puVar1 = puVar3 + (ulonglong)*(uint *)(param_1 + 0x238) * 5;
    if ((ulonglong)*(uint *)(param_1 + 0x238) != 0) {
      do {
        if (puVar3[3] == *param_2) break;
        puVar3 = puVar3 + 5;
      } while (puVar3 < puVar1);
    }
    if (puVar3 == puVar1) goto LAB_14013f57c;
  }
  if (*param_2 < 0x100) {
    puVar3[3] = *param_2;
    puVar3[1] = *(int *)(param_1 + 0x1e8) + 1;
    *puVar3 = *(undefined4 *)(param_1 + 0x1dc);
    *(undefined1 *)(puVar3 + 4) = 1;
    if (*(uint *)(param_1 + 0x24c) < *param_2) {
      *(uint *)(param_1 + 0x24c) = *param_2 & 0xff;
    }
    do {
      cVar2 = FUN_140148227(param_1);
      if (cVar2 != '\0') {
        return;
      }
      cVar2 = *(char *)(param_1 + 0x1f0);
      if (cVar2 == -0x77) break;
      if (cVar2 == '-') {
        puVar3[2] = *(undefined4 *)(param_1 + 0x1e8);
        return;
      }
    } while (cVar2 != ',');
    *(undefined4 *)(param_1 + 0x20) = 0x89;
    return;
  }
LAB_14013f59b:
  *(undefined4 *)(param_1 + 0x20) = 0x8d;
  return;
}

