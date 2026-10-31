/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a399 */

void __fastcall FUN_0043a399(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x134) == 3) {
    *(undefined4 *)(param_1 + 0x10) = 0x9c;
    return;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x170);
  if (puVar5 == (undefined4 *)0x0) {
    uVar3 = *param_2;
    puVar5 = (undefined4 *)0x0;
LAB_0043a3e5:
    if (*(uint *)(param_1 + 0x16c) <= *(uint *)(param_1 + 0x168)) goto LAB_0043a401;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) + 1;
  }
  else {
    puVar1 = puVar5 + *(int *)(param_1 + 0x168) * 5;
    uVar3 = *param_2;
    if (*(int *)(param_1 + 0x168) != 0) {
      do {
        if (puVar5[3] == uVar3) break;
        puVar5 = puVar5 + 5;
      } while (puVar5 < puVar1);
    }
    if (puVar5 == puVar1) goto LAB_0043a3e5;
  }
  if (uVar3 < 0x10000) {
    *puVar5 = *(undefined4 *)(param_1 + 0x138);
    puVar5[3] = uVar3;
    puVar5[1] = *(int *)(param_1 + 0x140) + 1;
    *(undefined1 *)(puVar5 + 4) = 1;
    if (*(uint *)(param_1 + 0x180) < uVar3) {
      *(uint *)(param_1 + 0x180) = uVar3;
    }
    do {
      uVar4 = FUN_0044420e(param_1);
      if ((char)uVar4 != '\0') {
        return;
      }
      cVar2 = *(char *)(param_1 + 0x148);
      if (cVar2 == -0x77) break;
      if (cVar2 == '-') {
        puVar5[2] = *(undefined4 *)(param_1 + 0x140);
        return;
      }
    } while (cVar2 != ',');
    *(undefined4 *)(param_1 + 0x10) = 0x89;
    return;
  }
LAB_0043a401:
  *(undefined4 *)(param_1 + 0x10) = 0x8c;
  return;
}

