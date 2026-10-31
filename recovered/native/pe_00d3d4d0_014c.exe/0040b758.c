/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040b758 */

undefined8 __fastcall FUN_0040b758(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *this;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = 0;
  if (uVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    this = *(void **)(param_1 + 0x10);
    uVar3 = FUN_0040b7b4(this,*(uint *)((int)this + 0x10),(uint *)(param_1 + 0x14),uVar1);
    param_2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar2 = (undefined4)uVar3;
    *(void **)(param_1 + 0x10) = this;
  }
  return CONCAT44(param_2,uVar2);
}

