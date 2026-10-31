/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004076fa */

undefined4 * __thiscall FUN_004076fa(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (this != param_1) {
    if (7 < *(uint *)((int)this + 0x14)) {
      FUN_00402ece(this,*(LPVOID *)this,*(uint *)((int)this + 0x14));
    }
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 7;
    *(undefined2 *)this = 0;
    *(undefined8 *)((int)this + 0x10) = *(undefined8 *)(param_1 + 4);
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = uVar1;
    *(undefined4 *)((int)this + 8) = uVar2;
    *(undefined4 *)((int)this + 0xc) = uVar3;
    param_1[4] = 0;
    param_1[5] = 7;
    *(undefined2 *)param_1 = 0;
  }
  return this;
}

