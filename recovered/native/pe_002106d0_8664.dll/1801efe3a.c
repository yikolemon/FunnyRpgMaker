/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801efe3a */

void FUN_1801efe3a(longlong param_1,uint *param_2)

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
LAB_1801efe90:
    if (*(uint *)(param_1 + 0x23c) <= *(uint *)(param_1 + 0x238)) goto LAB_1801efeaf;
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
    if (puVar3 == puVar1) goto LAB_1801efe90;
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
      cVar2 = FUN_1801f8b3b(param_1);
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
LAB_1801efeaf:
  *(undefined4 *)(param_1 + 0x20) = 0x8d;
  return;
}

