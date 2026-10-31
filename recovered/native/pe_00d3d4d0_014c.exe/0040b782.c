/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040b782 */

void __fastcall FUN_0040b782(int param_1)

{
  void *this;
  
  if (*(int *)(param_1 + 8) == 0x100) {
    *(undefined4 *)(param_1 + 8) = 0;
    this = *(void **)(param_1 + 0x10);
    FUN_0040b7b4(this,*(uint *)((int)this + 0x10),(uint *)(param_1 + 0x14),0x100);
    *(void **)(param_1 + 0x10) = this;
  }
  return;
}

