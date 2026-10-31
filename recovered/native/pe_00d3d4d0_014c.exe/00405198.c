/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405198 */

void __thiscall FUN_00405198(void *this,undefined2 param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (**(int **)((int)this + 0x20) != 0) {
    iVar1 = **(int **)((int)this + 0x30);
    if (0 < iVar1) {
      **(int **)((int)this + 0x30) = iVar1 + -1;
      puVar2 = (undefined2 *)**(int **)((int)this + 0x20);
      **(int **)((int)this + 0x20) = (int)(puVar2 + 1);
      *puVar2 = param_1;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004051c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0xc))();
  return;
}

