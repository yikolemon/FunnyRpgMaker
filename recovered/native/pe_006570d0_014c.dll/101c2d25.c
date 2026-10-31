/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c2d25 */

undefined4 FUN_101c2d25(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0x23;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) & 8) != 0)) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x60) + 0x20);
    uVar3 = 7;
    if (pcVar1 != (code *)0x0) {
      puVar2 = (undefined4 *)(*pcVar1)(*(int **)(param_1 + 0x60),"sfnt-table");
      if (puVar2 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x101c2d5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)*puVar2)();
        return uVar3;
      }
    }
  }
  return uVar3;
}

