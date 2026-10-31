/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000d916 */

int __thiscall FUN_1000d916(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(uint *)(iVar1 + 0xc) <= param_2) ||
      (iVar2 = *(int *)(*(int *)(iVar1 + 8) + param_2 * 4), iVar2 == 0)) &&
     (iVar2 = 0, *(char *)(iVar1 + 0x14) == '\x01')) {
    iVar1 = FUN_1022bde0();
    if (param_2 < *(uint *)(iVar1 + 0xc)) {
      iVar2 = *(int *)(*(int *)(iVar1 + 8) + param_2 * 4);
    }
  }
  return iVar2;
}

