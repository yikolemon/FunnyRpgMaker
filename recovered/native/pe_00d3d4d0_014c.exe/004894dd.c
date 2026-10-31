/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004894dd */

undefined4 * __thiscall
FUN_004894dd(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)((int)this + 8) = param_5;
  *(undefined2 *)((int)this + 0x2e) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x448) = *param_1;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_6;
  *(undefined4 *)((int)this + 4) = param_3;
  return this;
}

