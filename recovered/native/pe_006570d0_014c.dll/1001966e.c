/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001966e */

void __thiscall FUN_1001966e(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_18 [3];
  undefined1 local_15;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_18;
  piVar1 = (int *)(param_2 + 8);
  FUN_1001992e(*(undefined4 *)(param_1 + 0x7c),&local_15);
  iVar3 = 8;
  if (*(char *)(param_1 + 0x87) != '\0') {
    iVar3 = 0x24;
  }
  puVar2 = *(undefined4 **)(param_2 + 8);
  *(undefined1 *)(puVar2 + 2) = 1;
  *puVar2 = *(undefined4 *)(param_1 + 0x6c);
  puVar2[1] = *(undefined4 *)(param_1 + iVar3);
  if (1 < *(uint *)(param_1 + 0x7c)) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      if ((*(uint *)(*(int *)(param_1 + 0x10 + iVar3) + (uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) ==
          0) {
        *(undefined1 *)(*piVar1 + 0x14 + iVar4) = 0;
        uVar7 = *(undefined4 *)(param_1 + 0x70);
        *(undefined4 *)(*piVar1 + 0xc + iVar4) = uVar7;
      }
      else {
        *(undefined1 *)(*piVar1 + 0x14 + iVar4) = 1;
        *(undefined4 *)(*piVar1 + 0xc + iVar4) =
             *(undefined4 *)(*(int *)(param_1 + 4 + iVar3) + uVar5 * 8);
        uVar7 = *(undefined4 *)(*(int *)(param_1 + 4 + iVar3) + 4 + uVar5 * 8);
      }
      *(undefined4 *)(*piVar1 + 0x10 + iVar4) = uVar7;
      iVar4 = iVar4 + 0xc;
      uVar6 = uVar5 + 2;
      uVar5 = uVar5 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x7c));
  }
  *(undefined4 *)(param_2 + 0x18) = **(undefined4 **)(param_2 + 8);
  iVar3 = (*(undefined4 **)(param_2 + 8))[1];
  *(int *)(param_2 + 0x20) = iVar3;
  iVar4 = *(int *)(param_1 + 0x70);
  *(int *)(param_2 + 0x24) = iVar4;
  *(bool *)(param_2 + 0x28) = iVar3 != iVar4;
  uVar7 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_2 + 0x2c) = uVar7;
  *(undefined4 *)(param_2 + 0x30) = uVar7;
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

