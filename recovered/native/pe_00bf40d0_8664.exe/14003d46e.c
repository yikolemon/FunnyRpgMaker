/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003d46e */

void FUN_14003d46e(longlong param_1,uint *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x1d8) == 3) {
    *(undefined4 *)(param_1 + 0x20) = 0x9c;
    return;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x240);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
LAB_14003d4c4:
    if (*(uint *)(param_1 + 0x23c) <= *(uint *)(param_1 + 0x238)) goto LAB_14003d4e3;
    *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) + 1;
  }
  else {
    puVar1 = puVar4 + (ulonglong)*(uint *)(param_1 + 0x238) * 5;
    if ((ulonglong)*(uint *)(param_1 + 0x238) != 0) {
      do {
        if (puVar4[3] == *param_2) break;
        puVar4 = puVar4 + 5;
      } while (puVar4 < puVar1);
    }
    if (puVar4 == puVar1) goto LAB_14003d4c4;
  }
  if (*param_2 < 0x100) {
    puVar4[3] = *param_2;
    puVar4[1] = *(int *)(param_1 + 0x1e8) + 1;
    *puVar4 = *(undefined4 *)(param_1 + 0x1dc);
    *(undefined1 *)(puVar4 + 4) = 1;
    if (*(uint *)(param_1 + 0x24c) < *param_2) {
      *(uint *)(param_1 + 0x24c) = *param_2 & 0xff;
    }
    do {
      uVar3 = FUN_14004616f(param_1);
      if ((char)uVar3 != '\0') {
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
LAB_14003d4e3:
  *(undefined4 *)(param_1 + 0x20) = 0x8d;
  return;
}

