/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ef74b */

undefined4 FUN_101ef74b(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x214);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 6;
  }
  else {
    *param_2 = puVar1[1];
    param_2[1] = *puVar1;
    if (puVar1[1] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      iVar3 = 0;
      uVar4 = 0;
      do {
        *(undefined4 *)((int)param_2 + iVar3 + 8) = puVar1[uVar4 + 2];
        *(undefined4 *)((int)param_2 + iVar3 + 0xc) = **(undefined4 **)((int)puVar1 + iVar3 + 0x5c);
        *(undefined4 *)((int)param_2 + iVar3 + 0x10) =
             *(undefined4 *)
              (*(int *)((int)puVar1 + iVar3 + 0x5c) + -4 +
              (uint)*(byte *)((int)puVar1 + iVar3 + 0x58) * 4);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0xc;
      } while (uVar4 < (uint)puVar1[1]);
    }
  }
  return uVar2;
}

