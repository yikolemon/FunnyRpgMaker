/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026eed5 */

/* WARNING: Removing unreachable block (ram,0x1026eeef) */

undefined4 FUN_1026eed5(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1026ed34(param_1,param_2);
  uVar1 = (undefined4)lVar2;
  if (0x7fffffff < lVar2) {
    *(undefined1 *)(param_2 + 0x1c) = 1;
    uVar1 = 0xffffffff;
    *(undefined4 *)(param_2 + 0x18) = 0x16;
  }
  return uVar1;
}

