/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025f63f */

undefined4 __thiscall FUN_1025f63f(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  uint local_8;
  
  uVar5 = 1;
  iVar1 = *(int *)(param_1 + 8);
  local_8 = *(int *)(param_1 + 0xc) - 1;
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  uVar3 = *(undefined4 *)(iVar1 + 0x1c);
  uVar4 = FUN_10262e8b(iVar1,local_8,&local_8,10,1);
  *param_2 = uVar4;
  if (((*(char *)(*(int *)(param_1 + 8) + 0x1c) == '\0') ||
      (*(int *)(*(int *)(param_1 + 8) + 0x18) != 0x22)) && (*(uint *)(param_1 + 0xc) <= local_8)) {
    *(uint *)(param_1 + 0xc) = local_8;
  }
  else {
    uVar5 = 0;
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  *(undefined4 *)(iVar1 + 0x1c) = uVar3;
  return CONCAT31((int3)((uint)uVar3 >> 8),uVar5);
}

