/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00408c9e */

void __thiscall FUN_00408c9e(void *this,undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  
  FUN_00408cf8((int)this);
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  uVar1 = FUN_00406528(this,' ');
  *(short *)((int)this + 0x40) = (short)uVar1;
  if (*(int *)((int)this + 0x38) == 0) {
    FUN_00405f74(this,*(uint *)((int)this + 0xc) | 4,'\0');
  }
  if (param_2 != '\0') {
    FUN_00481d20((int)this);
  }
  return;
}

