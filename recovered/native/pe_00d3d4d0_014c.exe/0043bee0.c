/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043bee0 */

void __fastcall FUN_0043bee0(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x134) == 3) {
    *(undefined4 *)(param_1 + 0x10) = 0x9c;
    return;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x17c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
LAB_0043bf29:
    if (*(uint *)(param_1 + 0x178) <= *(uint *)(param_1 + 0x174)) goto LAB_0043bf47;
    *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x174) + 1;
  }
  else {
    puVar1 = puVar4 + *(int *)(param_1 + 0x174) * 5;
    if (*(int *)(param_1 + 0x174) != 0) {
      do {
        if (puVar4[3] == *param_2) break;
        puVar4 = puVar4 + 5;
      } while (puVar4 < puVar1);
    }
    if (puVar4 == puVar1) goto LAB_0043bf29;
  }
  if (*param_2 < 0x100) {
    puVar4[3] = *param_2;
    puVar4[1] = *(int *)(param_1 + 0x140) + 1;
    *puVar4 = *(undefined4 *)(param_1 + 0x138);
    *(undefined1 *)(puVar4 + 4) = 1;
    if (*(uint *)(param_1 + 0x184) < *param_2) {
      *(uint *)(param_1 + 0x184) = *param_2 & 0xff;
    }
    do {
      uVar3 = FUN_0044420e(param_1);
      if ((char)uVar3 != '\0') {
        return;
      }
      cVar2 = *(char *)(param_1 + 0x148);
      if (cVar2 == -0x77) break;
      if (cVar2 == '-') {
        puVar4[2] = *(undefined4 *)(param_1 + 0x140);
        return;
      }
    } while (cVar2 != ',');
    *(undefined4 *)(param_1 + 0x10) = 0x89;
    return;
  }
LAB_0043bf47:
  *(undefined4 *)(param_1 + 0x10) = 0x8d;
  return;
}

