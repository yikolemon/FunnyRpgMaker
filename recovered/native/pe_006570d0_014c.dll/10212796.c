/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10212796 */

undefined4
FUN_10212796(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10216de6();
  if (iVar1 == 0) {
    uVar2 = 0x8e;
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(iVar1 + 0xc);
    }
    uVar2 = FUN_101c461e(param_3,*(undefined4 *)(iVar1 + 8));
  }
  return uVar2;
}

