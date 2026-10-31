/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041f2a2 */

undefined4 __cdecl FUN_0041f2a2(int param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0041f2d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)*puVar2)();
        return uVar3;
      }
    }
  }
  return uVar3;
}

