/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488e30 */

undefined4 * __thiscall FUN_00488e30(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  puVar3 = PTR_DAT_0051af44;
  puVar2 = PTR_PTR_0051af40;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = param_1[1];
    *(undefined4 *)((int)this + 0xc) = *param_1;
    *(undefined1 *)((int)this + 0x14) = 1;
    *(undefined4 *)((int)this + 0x10) = uVar1;
    return this;
  }
  if (DAT_005216fc == 0) {
    *(undefined1 *)((int)this + 0x14) = 1;
    *(undefined **)((int)this + 0x10) = puVar3;
    *(undefined **)((int)this + 0xc) = puVar2;
  }
  return this;
}

